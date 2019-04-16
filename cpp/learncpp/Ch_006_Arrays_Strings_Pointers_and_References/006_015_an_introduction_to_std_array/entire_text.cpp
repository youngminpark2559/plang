


BY ALEX ON SEPTEMBER 14TH, 2015 | LAST MODIFIED BY ALEX ON JANUARY 23RD, 2019


In previous lessons, we’ve talked at length about fixed and dynamic arrays. Although both are built right into the C++ language, they both have downsides: Fixed arrays decay into pointers, losing the array length information when they do, and dynamic arrays have messy deallocation issues and are challenging to resize without error.

To address these issues, the C++ standard library includes functionality that makes array management easier, std::array and std::vector. We’ll examine std::array in this lesson, and std::vector in the next.

An introduction to std::array in C++11

Introduced in C++11, std::array provides fixed array functionality that won’t decay when passed into a function. std::array is defined in the array header, inside the std namespace.

Declaring a std::array variable is easy:

1
2
3
#include <array>
 
std::array<int, 3> myArray; // declare an integer array with length 3
Just like the native implementation of fixed arrays, the length of a std::array must be set at compile time.

std::array can be initialized using an initializer lists or uniform initialization:

1
2
std::array<int, 5> myArray = { 9, 7, 5, 3, 1 }; // initialization list
std::array<int, 5> myArray2 { 9, 7, 5, 3, 1 }; // uniform initialization
Unlike built-in fixed arrays, with std::array you can not omit the array length when providing an initializer:

1
std::array<int, > myArray = { 9, 7, 5, 3, 1 }; // illegal, array length must be provided
You can also assign values to the array using an initializer list

1
2
3
4
std::array<int, 5> myArray;
myArray = { 0, 1, 2, 3, 4 }; // okay
myArray = { 9, 8, 7 }; // okay, elements 3 and 4 are set to zero!
myArray = { 0, 1, 2, 3, 4, 5 }; // not allowed, too many elements in initializer list!
Accessing std::array values using the subscript operator works just like you would expect:

1
2
std::cout << myArray[1];
myArray[2] = 6;
Just like built-in fixed arrays, the subscript operator does not do any bounds-checking. If an invalid index is provided, bad things will probably happen.

std::array supports a second form of array element access (the at() function) that does bounds checking:

1
2
3
std::array<int, 5> myArray { 9, 7, 5, 3, 1 };
myArray.at(1) = 6; // array element 1 valid, sets array element 1 to value 6
myArray.at(9) = 10; // array element 9 is invalid, will throw error
In the above example, the call to array.at(1) checks to ensure array element 1 is valid, and because it is, it returns a reference to array element 1. We then assign the value of 6 to this. However, the call to array.at(9) fails because array element 9 is out of bounds for the array. Instead of returning a reference, the at() function throws an error that terminates the program (note: It’s actually throwing an exception of type std::out_of_range -- we cover exceptions in chapter 15). Because it does bounds checking, at() is slower (but safer) than operator[].

std::array will clean up after itself when it goes out of scope, so there’s no need to do any kind of cleanup.

Size and sorting

The size() function can be used to retrieve the length of the std::array:

1
2
std::array<double, 5> myArray { 9.0, 7.2, 5.4, 3.6, 1.8 };
std::cout << "length: " << myArray.size();
This prints:

length: 5
Because std::array doesn’t decay to a pointer when passed to a function, the size() function will work even if you call it from within a function:

1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
#include <iostream>
#include <array>
 
void printLength(const std::array<double, 5> &myArray)
{
    std::cout << "length: " << myArray.size();
}
 
int main()
{
    std::array<double, 5> myArray { 9.0, 7.2, 5.4, 3.6, 1.8 };
 
    printLength(myArray);
 
    return 0;
}
This also prints:

length: 5
Note that the standard library uses the term “size” to mean the array length — do not get this confused with the results of sizeof() on a native fixed array, which returns the actual size of the array in memory (the size of an element multiplied by the array length). Yes, this nomenclature is inconsistent.

Also note that we passed std::array by (const) reference. This is to prevent the compiler from making a copy of the std::array when the std::array was passed to the function (for performance reasons).


 
Rule: Always pass std::array by reference or const reference

Because the length is always known, for-each (ranged for) loops work with std::array:

1
2
3
4
std::array<int, 5> myArray { 9, 7, 5, 3, 1 };
 
for (auto &element : myArray)
    std::cout << element << ' ';
You can sort std::array using std::sort, which lives in the algorithm header:

1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
#include <iostream>
#include <array>
#include <algorithm> // for std::sort
 
int main()
{
    std::array<int, 5> myArray { 7, 3, 1, 9, 5 };
    std::sort(myArray.begin(), myArray.end()); // sort the array forwards
//    std::sort(myArray.rbegin(), myArray.rend()); // sort the array backwards
 
    for (const auto &element : myArray)
        std::cout << element << ' ';
 
    return 0;
}
This prints:

1 3 5 7 9
The sorting function uses iterators, which is a concept we haven’t covered yet, so for now you can treat the parameters to std::sort() as a bit of magic. We’ll explain them in the lesson on iterators.

Manually indexing std::array via size_type

Pop quiz: What’s wrong with the following code?

1
2
3
4
5
6
7
8
9
10
11
12
13
#include <iostream>
#include <array>
 
int main()
{
    std::array<int, 5> myArray { 7, 3, 1, 9, 5 };
 
    // Iterate through the array and print the value of the elements
    for (int i{ 0 }; i < myArray.size(); ++i)
        std::cout << myArray[i] << ' ';
 
    return 0;
}
The answer is that there’s a likely signed/unsigned mismatch in this code! Due to a curious decision, the size() function and array index parameter to operator[] use a type called size_type, which is defined by the C++ standard as an unsigned integral type. Our loop counter/index (variable i) is a signed int. Therefore both the comparison i < myArray.size() and the array index myArray[i] have type mismatches.

Interestingly enough, size_type isn't a global type (like int or std::size_t). Rather, it's defined inside the definition of std::array (C++ allows nested types). This means when we want to use size_type, we have to prefix it with the full array type (think of std::array acting as a namespace in this regard). In our above example, the fully-prefixed type of "size_type" is std::array<int, 5>::size_type!

Therefore, the correct way to write the above code is as follows:

1
2
3
4
5
6
7
8
9
10
11
12
#include <iostream>
#include <array>
 
int main()
{
    std::array<int, 5> myArray { 7, 3, 1, 9, 5 };
 
    for (std::array<int, 5>::size_type i{ 0 }; i < myArray.size(); ++i) // std::array<int, 5>::size_type is the return type of size()!
        std::cout << myArray[i] << ' ';
 
    return 0;
}
That's not very readable. A type alias can help a bit:

1
2
3
4
5
6
7
8
9
10
11
12
13
#include <iostream>
#include <array>
 
int main()
{
    std::array<int, 5> myArray { 7, 3, 1, 9, 5 };
 
    using index_t = std::array<int, 5>::size_type;
    for (index_t i{ 0 }; i < myArray.size(); ++i)
        std::cout << myArray[i] << ' ';
 
    return 0;
}
This is a bit better, and this solution probably has the best combination of technical correctness and readability.

In all common implementations of std::array, size_type is a typedef for std::size_t. So it's somewhat common to see developers use size_t instead. While not technically correct, in almost all implementations, this will work:

1
2
3
4
5
6
7
8
9
10
11
12
#include <iostream>
#include <array>
 
int main()
{
    std::array<int, 5> myArray { 7, 3, 1, 9, 5 };
 
    for (std::size_t i{ 0 }; i < myArray.size(); ++i)
        std::cout << myArray[i] << ' ';
 
    return 0;
}
A better solution is to avoid manual indexing of std::array in the first place. Instead, use range-based for loops (or iterators) if possible.

Summary

std::array is a great replacement for built-in fixed arrays. It's efficient, in that it doesn’t use any more memory than built-in fixed arrays. The only real downside of a std::array over a built-in fixed array is a slightly more awkward syntax, that you have to explicitly specify the array length (the compiler won’t calculate it for you from the initializer), and the signed/unsigned issues with size and indexing. But those are comparatively minor quibbles — we recommend using std::array over built-in fixed arrays for any non-trivial array use.