// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_004_Sorting_an_array_using_selection_sort/002_Sort_array && \
// g++ \
// -std=c++11 \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_004_Sorting_an_array_using_selection_sort/002_Sort_array/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ======================================================================
#include <algorithm> // for std::sort
#include <iostream>
 
int main()
{
	const int length=5;
	int array[length]={30,50,20,10,40};
  
  // ================================================================================
	std::sort(array,array+length);
  
  // ================================================================================
	for(int i=0;i<length;++i)
  {
    std::cout<<array[i]<<' ';
  }
  // 10 20 30 40 50 
 
	return 0;
}
