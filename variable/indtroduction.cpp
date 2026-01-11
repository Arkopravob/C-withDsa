// this first c++ 
// C++ has a few lines of code which we write in almost all programs.
// These are the first 4 lines and the last line that you see in the program to your right. We are going to learn about them in some time.

// Let's break down this line of code:

// Libraries: #include <iostream> imports the iostream library, providing input/output tools like cout. Think of it as including a toolbox.
#include<iostream>
// Namespaces: using namespace std; lets you use standard elements like cout directly (instead of std::cout). It's like specifying which set of tools you're using.
using namespace std;
// main function: int main() { ... } is the core of every C++ program; execution starts here. It's the program's starting point.
int main(){
// cout: Pronounced as see-out, cout stands for "character output stream". It is used to output data to screen.

// <<: This is the stream insertion operator. It is used with cout to send data to the output stream.

// 12: This is the data we want to print. Here, it's the number 12.

// Semicolon is used to end a statement, like period (.) in English.

// So, when you write cout << 12;, it tells the computer to print the number 12 on screen.
cout<< 12 <<endl;
return 0;
}
