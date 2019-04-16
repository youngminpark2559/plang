// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_014_Pointers_to_pointers_and_dynamic_multidimensional_arrays/005_solution_for_creating_2D_array_which_is_dynamically_allocated && \
// g++ \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_014_Pointers_to_pointers_and_dynamic_multidimensional_arrays/005_solution_for_creating_2D_array_which_is_dynamically_allocated/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

#include <iostream>
 
int main()
{
  // If the right-most array dimension (5 in this case) is 
  // a compile-time constant, you can do this:
  int (*array)[5]=new int[10][5];
  
  int rows=sizeof(array)/sizeof(array[0]);
  int cols=sizeof(array[0])/sizeof(int);
  // std::cout<<"rows: "<<rows<<std::endl;
  // std::cout<<"cols: "<<cols<<std::endl;

  // ======================================================================
  for(int i=0;i<=rows;i++)
  {
    for(int j=0;j<=cols;j++)
    {
      array[i][j]=2;
    }  
  }

  // ======================================================================
  for(int i=0;i<=rows;i++)
  {
    for(int j=0;j<=cols;j++)
    {
      std::cout<<array[i][j];
    }
    std::cout<<std::endl;
  }
  // 111111
  // 111111
  // 111111
  // 111111
  // 111111
  // 111111
  // 111111
  // 111111
  // 111111
  // 111111
  // 111111

  // ======================================================================
  // 2D array which is dynamically allocated on the heap
  // But this won’t work!
  // int **array = new int[10][5];

  return 0;
}
