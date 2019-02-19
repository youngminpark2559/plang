======================================================================  
@ This repository has notes that I wrote as I watch following video C++ tutorial.  
https://www.youtube.com/playlist?list=PL7mmuO705dG32y7Lei1FsQrdwEbbrU9VU  

======================================================================  
@ How to run the example where code files (header files, src C++ file, main C++ file, etc) are divided.  
Remove lines which are marked by "//" before executing following compiling command.  
They're just explanatory sentences.  

g++ -o main \  
// Includes /p_lang/cpp/yk/056_dynamical_cast_and_multiple_inheritance directory  
// which contains relevant header files and C++ files  
-I"/p_lang/cpp/yk/056_dynamical_cast_and_multiple_inheritance" \  
// Includes src.cpp  
src.cpp \  
// Compile main.cpp file  
/p_lang/cpp/yk/056_dynamical_cast_and_multiple_inheritance/main.cpp  

======================================================================  
