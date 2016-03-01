#include<iostream>

int main() {

 std::string one, two;
 int count_one(0), count_two(0);

 std::cout << "Enter string #1: ";
 std::cin >> one;

 std::cout << "Enter string #2: ";
 std::cin >> two;

 if (one.length() != two.length()) {
  std::cout << "Not of same length, cannot be anagrams" << std::endl;
  return 0;
 }

 for(int i = 0; i < one.length(); i++) {
  count_one += (int)one[i];
  count_two += (int)two[i];
 }

 if(count_one == count_two)
  std::cout << "Strings are anagrams" << std::endl;
 else
  std::cout << "Strings are not anagrams" << std::endl;

 return 0;
}
