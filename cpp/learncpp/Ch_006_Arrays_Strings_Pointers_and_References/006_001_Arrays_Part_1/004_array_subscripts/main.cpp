// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_001_Arrays_Part_1/004_array_subscripts && \
// g++ \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_001_Arrays_Part_1/004_array_subscripts/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l


// c array: (5,) array which stores int values
int array[5];

// ================================================================================ 
// 1 (literal or constant) is OK
array[1]=7;

// ================================================================================
// An enum (constant) index is OK
enum Animals
{
  ANIMAL_CAT=2
};
array[ANIMAL_CAT]=4;

// ================================================================================ 
// using a variable (non-constant) index index:
short index=3;
array[index]=7;
 
// ================================================================================
// using an expression that evaluates to an integer index 1+2:
array[1+2]=7;
