

// ======================================================================
// Since a binary file uses a byte unit,
// you also need to use byte unit when you deal with a binary file

// Write
// fstream object_name.write(char *,bytes)

// Read
// fstream object_name.read(char *,bytes)

// // ======================================================================
// #include <iostream>
// #include <fstream>
// using namespace std;
 
// int main()
// {
//   // c fp: create fstream instance
//   fstream fp;

//   // c score: create int type array, size is 5, 4 bytes*5=20 bytes
//   int score[5]={78,96,100,25,96};

//   // You use the "ios out" and the "ios binary"
//   fp.open("sample.txt",ios::out|ios::binary);
  
//   // You bring a data of 20 bytes from the score array
//   // Type should be char type pointer
//   // score is array so you cast it and write the data into the file
//   // This will create the sample.txt file but that file should be a binary file
//   fp.write((char*)score,20);

//   // c close file stream
//   fp.close();

//   return 0;
// }

// // ======================================================================
// #include <iostream>
// #include <fstream>
// #include <iomanip>
// using namespace std;
 
// int main()
// {
//   // c fp: create fstream instance
//   fstream fp;

//   // c score: create int type variable
//   int score;

//   // c Open a file stream to the sample.txt, 
//   // you use ios::in and ios::binary
//   fp.open("sample.txt",ios::in|ios::binary);

//   // If you fail to open the file stream, 
//   if(fp.fail())
//   {
//     // shut down program by returning a 1
//     return 1;
//   }
  
//   // Convert the score address (&score) into the char type pointer (char*)
//   // because 
//   // Read: fstream object_name.read(char *,bytes) like
//   // fp.read((char*)&score,4)
//   // Read 4 bytes
//   // fp is not eof (!fp.eof()), print the contents of the file on a screen
//   while(fp.read((char*)&score,4),!fp.eof())
//     // otherwise, you iterate the following code
//     // You use a right arrangement by using 3 spaces (setw(3))
//     std::cout<<setw(3)<<right<<score<<std::endl;

//   fp.close();

//   return 0;
// }

// ======================================================================
// You can move a cursor pointer in a file by using "byte unit"

// seekp(): when you output a data from a file, 
// you can move a cursor pointer in a file as much as a configured space

// seekg(): when you intput a data to a file, 
// you can move a cursor pointer in a file as much as a configured space

// ======================================================================
// Criterions that you can use for moving a cursor pointer in a file 
// (it's same like you configure a mode like ios::in|ios::binary) 
// from fp.open("sample.txt",ios::in|ios::binary);

// beg: from first location, move

// ios:beg
// from last location, move

// ios::end
// from current cursor location, move

// ios::cur

// // ======================================================================
// #include <iostream>
// #include <iomanip>
// #include <fstream>
// using namespace std;
 
// int main()
// {
//   // c fp: create fstream instance
//   fstream fp;

//   // c score: create int type variable
//   int score;

//   // c open file stream to the sample.txt
//   // you use a mode of ios::in and ios::binary
//   // sample.txt file contains 78,96,100,25,96 in a binary format
//   fp.open("sample.txt",ios::in|ios::binary);

//   if(fp.fail())
//   {
//     return 1;
//   }

//   // Read "78" (the data which is located in a first 4 byte)
//   fp.read((char*)&score,4);
//   std::cout<<setw(3)<<right<<score<<std::endl;
  
//   // From the current cursor location, 
//   // move 4 bytes (96 is passed and 100 will be brought)
//   fp.seekg(4,ios::cur);
//   fp.read((char*)&score,4);
//   std::cout<<setw(3)<<right<<score<<std::endl;
  
//   fp.close();
// }

// ======================================================================
