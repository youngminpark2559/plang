// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_011_Reference_variables/003_L_value_and_R_value && \
// g++ \
// -std=c++11 \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_011_Reference_variables/003_L_value_and_R_value/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ================================================================================
l-values and r-values

In C++, variables are a type of l-value (pronounced ell-value). An l-value is a value that has an address (in memory). Since all variables have addresses, all variables are l-values. The name l-value came about because l-values are the only values that can be on the left side of an assignment statement. When we do an assignment, the left hand side of the assignment operator must be an l-value. Consequently, a statement like 5 = 6; will cause a compile error, because 5 is not an l-value. The value of 5 has no memory, and thus nothing can be assigned to it. 5 means 5, and its value can not be reassigned. When an l-value has a value assigned to it, the current value at that memory address is overwritten.


// ================================================================================
The opposite of l-values are r-values (pronounced arr-values). An r-value refers to any value that can be assigned to an l-value. r-values are always evaluated to produce a single value. Examples of r-values are literals (such as 5, which evaluates to 5), variables (such as x, which evaluates to whatever value was last assigned to it), or expressions (such as 2 + x, which evaluates to the value of x plus 2).






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
