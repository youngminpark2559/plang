// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_005_Multidimensional_Arrays/002_Example_of_2D_array && \
// g++ \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_005_Multidimensional_Arrays/002_Example_of_2D_array/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ======================================================================
#include <iostream>

// ======================================================================
int main()
{
  // c numRows: int variable
  const int numRows=10;

  // c numCols: int variable
  const int numCols=10;

  // ======================================================================
  // c product: (numRows,numCols) array which stores int values
  int product[numRows][numCols]={0};

  // ======================================================================
  // Iterates numRows
  for(int row=0;row<numRows;++row)
  {
    // Iterates numCols
    for(int col=0;col<numCols;++col)
    {
      // Insert value into array product
      product[row][col]=row*col;
    }
  }
    
  // ======================================================================
  // Iterates numRows
  for(int row=1;row<numRows;++row)
  {
    // Iterates numCols
    for(int col=1;col<numCols;++col)
    {
      std::cout<<product[row][col]<<"\t";
    }
    std::cout<<'\n';
  }
  
  // ======================================================================
  return 0;
}
