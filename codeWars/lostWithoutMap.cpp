#include <iostream>
#include <vector>

using namespace std;


// Just a Function that receives a vector and return each value doubled.
std::vector<int> maps(std::vector<int> &values) {

  for (int i = 0; i < values.size(); i++){
      values[i] = 2*(values[i]);
  }  

  
  return values;
}
