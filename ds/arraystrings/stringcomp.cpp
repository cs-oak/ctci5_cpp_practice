#include<iostream>

std::string compress(std::string& s) {

 std::string cpr;
 int count = 1, j = 1;
 bool all_same = true;	//special case - what if i type WWWWWWWWWWWWWWWW
 
 cpr.push_back(s[0]); 	//avoid that extra if statement everytime in the loop

 for(int i = 1; i < s.length(); i++) {
  if (s[i] == s[i - 1]) {
   count++;
  }
  else {
   if (all_same) all_same = false;
   if (count > 1) {
    cpr.push_back('0' + count);
   }
   cpr.push_back(s[i]);
   count = 1;
  }
 }

 if(all_same)
  cpr.push_back('0' + count);

 if (cpr.length() < s.length())
  return cpr;
 else
  return s;
 
}

int main () {

 std::string large;

 std::cout << "Enter your string: ";
 std::cin >> large;

 std::cout << "Compressed string: " << compress(large) << std::endl;

 return 0;
}
