#include<iostream>
#include<cmath>

bool is_substring(std::string a, std::string b) {
 if(a.find(b) != std::string::npos)
  return true;
 else
  return false;
}

int main (){

 bool rot = true;
 std::string one, two;
 std::string left, right; //need to avoid making new strings, space complexity -> bad

 std::cout << "Enter string #1: ";
 std::cin >> one;

 std::cout << "Enter string #2: ";
 std::cin >> two;

 if (one.length() !=two.length()) {
  std::cout << "Cannot be a rotation if not equal in length" << std::endl;
  return 0;
 }

 int i, j, pos;
 int n = one.length();

 left = two.substr(0,ceil(n/2.0));
 right = two.substr(ceil(n/2.0), n/2);

 /***
  Ideally, we would only need to check if either left or right halves
  are substring of the original and be done with that, but assuming we
  have a case of strings like water and cater, we would need to check
  the other half for complete correctness
 ***/

 if(is_substring(one, left)) {
  pos = one.find(left);
  i = (pos + left.length()) % n;
  j = 0;
  while (i != pos) {
   if (one[i] != right[j]) {
    rot = false;
    break;
   }
   i = (i+1) % n;
   j++;
  }
 }

 else if(is_substring(one, right)) {
  pos = one.find(right);
  i = (pos + right.length()) % n;
  j = 0;
  while (i != pos) {
   if(one[i] != left[j]) {
    rot = false;
    break;
   }
   i = (i+1) % n;
   j++;
  }
 }

 if(rot)
  std::cout << "It is a roatation" << std::endl;
 else
  std::cout << "It is not a rotation" << std::endl;

 return 0;
}
