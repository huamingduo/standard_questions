#include <iostream>

template <typename T>
void SwapValues1(T& a, T& b) {
  a = a + b;
  b = a - b;
  a = a - b;
}

template <typename T>
void SwapValues2(T& a, T& b) {
  a = a * b;
  b = a / b;
  a = a / b;
}

template <typename T>
void SwapValues3(T& a, T& b) {
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;
}

int main(int argc, char** argv) {
  int a = 10, b = 32;
  std::cout << "Input: a = " << a << " b = " << b << std::endl;
  SwapValues1<int>(a, b);
  std::cout << "Output1: a = " << a << " b = " << b << std::endl; 
  SwapValues2<int>(a, b);
  std::cout << "Output2: a = " << a << " b = " << b << std::endl; 
  SwapValues3<int>(a, b);
  std::cout << "Output3: a = " << a << " b = " << b << std::endl; 
  return 0;
}
