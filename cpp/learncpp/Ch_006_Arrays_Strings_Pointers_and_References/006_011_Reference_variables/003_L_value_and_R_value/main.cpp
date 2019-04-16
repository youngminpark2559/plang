// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_011_Reference_variables/003_L_value_and_R_value && \
// g++ \
// -std=c++11 \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_011_Reference_variables/003_L_value_and_R_value/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ================================================================================
// l-values and r-values

// In C++, variables are a type of l-value (pronounced ell-value). An l-value is a value that has an address (in memory). Since all variables have addresses, all variables are l-values. The name l-value came about because l-values are the only values that can be on the left side of an assignment statement. When we do an assignment, the left hand side of the assignment operator must be an l-value. Consequently, a statement like 5 = 6; will cause a compile error, because 5 is not an l-value. The value of 5 has no memory, and thus nothing can be assigned to it. 5 means 5, and its value can not be reassigned. When an l-value has a value assigned to it, the current value at that memory address is overwritten.


// ================================================================================
// The opposite of l-values are r-values (pronounced arr-values). An r-value refers to any value that can be assigned to an l-value. r-values are always evaluated to produce a single value. Examples of r-values are literals (such as 5, which evaluates to 5), variables (such as x, which evaluates to whatever value was last assigned to it), or expressions (such as 2 + x, which evaluates to the value of x plus 2).

// Here is an example of some assignment statements, showing how the r-values evaluate:

// int y;      // define y as an integer variable
// y = 4;      // 4 evaluates to 4, which is then assigned to y
// y = 2 + 5;  // 2 + 5 evaluates to 7, which is then assigned to y
 
// int x;      // define x as an integer variable
// x = y;      // y evaluates to 7 (from before), which is then assigned to x.
// x = x;      // x evaluates to 7, which is then assigned to x (useless!)
// x = x + 1;  // x + 1 evaluates to 8, which is then assigned to x.
// Let’s take a closer look at the last assignment statement above, since it causes the most confusion.


// x = x + 1;
// In this statement, the variable x is being used in two different contexts. On the left side of the assignment operator, “x” is being used as an l-value (variable with an address). On the right side of the assignment operator, x is being used as an r-value, and will be evaluated to produce a value (in this case, 7). When C++ evaluates the above statement, it evaluates as:

// 1
// x = 7 + 1;
// Which makes it obvious that C++ will assign the value 8 back into variable x.

// The key takeaway is that on the left side of the assignment, you must have something that represents a memory address (such as a variable). Everything on the right side of the assignment will be evaluated to produce a value.

// ================================================================================





// ================================================================================
#include <iostream>
 
// ================================================================================
int main()
{
  int value=5; // normal integer
  int &ref=value; // reference to variable value

  value=6; // value is now 6
  ref=7; // value is now 7

  std::cout<<value; // prints 7
  ++ref;
  std::cout<<value; // prints 8

  return 0;
}
