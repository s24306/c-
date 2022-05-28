#include <iostream>
#include <vector>

void sum_adjacent(std::vector<int> &v) {
  if (v.size() < 2)
    return;
  for (int i = 0; i < v.size() - 1; i++){
    std::cout << v[i] + v[i + 1] << " ";
  }
  std::cout << std::endl;
}

void sum_symmetric(std::vector<int> &v) {
  int middle = (v.size() + 1) / 2;
  for (int i = 0; i < middle; i++){
    std::cout << v[i] + v[v.size() - 1 - i] << " ";
  }
  std::cout << std::endl;
}

int main() {
  std::vector<int> intVec;
  int i;
  while (std::cin >> i){
    intVec.push_back(i);
  }
  sum_adjacent(intVec);
  sum_symmetric(intVec);

  return 0;
}
