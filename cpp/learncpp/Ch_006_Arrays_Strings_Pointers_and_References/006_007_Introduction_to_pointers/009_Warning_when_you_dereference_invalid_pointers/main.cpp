// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_007_Introduction_to_pointers/009_Warning_when_you_dereference_invalid_pointers && \
// g++ \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_007_Introduction_to_pointers/009_Warning_when_you_dereference_invalid_pointers/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ======================================================================
#include <iostream>
 
// ======================================================================
void foo(int *&p)
{
  // p is a reference to a pointer.
  // We'll cover references (and references to pointers) later in this chapter.
  // We're using this to trick the compiler into thinking p could be modified, 
  // so it won't complain about p being uninitialized.
  // This isn't something you'll ever want to do intentionally.
}
 
int main()
{
  // c p: pointer variable which stores address of int variable
  // c p: uninitialized pointer variable (which points to garbage value stored in garbage variable)
  int *p; 

  // ================================================================================
  // Address value stored in p
  std::cout<<"p: "<<p<<std::endl;
  // p: 0x400a80

  // Use dereference operator on pointer variable p
  std::cout<<"*p: "<<*p<<std::endl;
  // 1447122753 // Garbage value
  // 1447122753

  // ======================================================================
  // Trick to let compiler to think we're going to assign a valid value
  foo(p);
      
  std::cout<<"*p: "<<*p<<std::endl;
  // 1447122753

  return 0;
}
