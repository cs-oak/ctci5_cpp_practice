#include<iostream>

int main () {

 bool unique = true;
 bool alphabets[26];
 std::string check;

 std::cout << "Enter your string (text only please!): ";
 std::getline(std::cin, check);

 for(auto& item : check) {
  item = toupper(item);
  if(alphabets[(int)item - 'A'] == false)
    alphabets[(int)item - 'A'] = true;
  else {
   unique = false;
   break;
  }
 }

 if(unique)
  std::cout << "String is unique!" << std::endl;
 else
  std::cout << "String is not unique!" << std::endl;

 return 0;
}
