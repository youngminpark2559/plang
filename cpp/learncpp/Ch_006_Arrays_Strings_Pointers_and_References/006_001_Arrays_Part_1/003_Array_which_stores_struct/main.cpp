// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_001_Arrays_Part_1/003_array_which_has_struct && \
// g++ \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_001_Arrays_Part_1/003_array_which_has_struct/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ================================================================================
#include <iostream>

struct Rectangle
{
  int length;
  int width;
};

int main()
{
  // c rects: (5,) array which stores 5 Rectangle objects
  Rectangle rects[5];

  // ================================================================================
  rects[0].length=1;
  rects[0].width=1;

  // ================================================================================
  std::cout<<"rects[0].length: "<<rects[0].length<<std::endl;
  std::cout<<"rects[0].width: "<<rects[0].width<<std::endl;
  // 1
  // 1

  std::cout<<"rects[1].length: "<<rects[1].length<<std::endl;
  std::cout<<"rects[1].width: "<<rects[1].width<<std::endl;
  // 4197021
  // 0

  return 0;
}
