// g++ \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_007_Introduction_to_pointers/010_Size_of_pointer_variables/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

#include <iostream>
 
int main()
{
  // chars are 1 byte
  char *chPtr; 
  
  // ======================================================================
  // ints are usually 4 bytes
  int *iPtr; 

  // ======================================================================
  struct Something
  {
    int nX,nY,nZ;
  };
  // Something is probably 12 bytes (3*4)
  Something *somethingPtr; 
  
  // ======================================================================
  std::cout<<"sizeof(chPtr): "<<sizeof(chPtr)<<std::endl;
  std::cout<<"sizeof(iPtr): "<<sizeof(iPtr)<<std::endl;
  std::cout<<"sizeof(somethingPtr): "<<sizeof(somethingPtr)<<std::endl;
  // sizeof(chPtr): 8
  // sizeof(iPtr): 8
  // sizeof(somethingPtr): 8

  return 0;
}
