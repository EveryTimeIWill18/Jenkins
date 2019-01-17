#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

int main() {
  
  std::vector<int> v = {1,2,3,4,5,6,7,8,9,10};
  std::vector<int> w;
  
  // lambda function that takes each element
  // from v and adds it's sqaured value to
  // vector w;
  std::for_each(v.begin(), v.end(),
        [&w](int i){
          w.push_back(i*i);
        });
  for(int i=0; i < w.size(); i++) {
      std::cout << w[i] << std::endl;
  }
  
  
  return 0;
}
