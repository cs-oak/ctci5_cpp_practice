/***
 I am aware it is neither a function nor a char* string
***/

#include<iostream>

int main() {
 
 std::string rev {"Grand Fulmination"};
 int n = rev.length();
 char temp;

 std::cout << "Before: " << rev << std::endl;

 for(int i = 0; i < (n/2); i++) {
  temp = rev[i];
  rev[i] = rev[(n-1) - i];
  rev[(n-1) - i] = temp;
 }

 std::cout << "After: " << rev << std::endl;

 return 0;
}
