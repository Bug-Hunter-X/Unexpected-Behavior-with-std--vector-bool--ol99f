#include <vector>
#include <iostream>

int main() {
  std::vector<bool> vec;
  vec.push_back(true);
  vec.push_back(false);
  bool b = vec[0]; // Potential unexpected behavior
  std::cout << "Value: " << b << std::endl; //Output may not be as expected
  
  //Solution: use a different data structure
  std::vector<char> vec2;  // or any other that avoids the specialization
  vec2.push_back(1);  //Represents true
  vec2.push_back(0);  //Represents false
  bool b2 = vec2[0] != 0;
  std::cout << "Corrected Value: " << b2 << std::endl; //Output will be as expected
  return 0;
} 