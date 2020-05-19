#include <iostream>

int Add(const int& a, const int& b) {
  return (b ? Add(a^b, (a&b)<<1) : a);
}

int Substract(const int& a, const int& b) {
  int bb = Add(~b, 1);
  return Add(a, bb);
}

int Multiply(const int& a, const int& b) {
  return 0;
}

int Divide(const int& a, const int& b) {
  return 0;
}

int main(int argc, char** argv) {
  int a = 10, b = 34;
  std::cout << "a = " << a << std::endl << "b = " << b << std::endl;
  std::cout << "a + b = " << Add(a, b) << std::endl;
  std::cout << "a - b = " << Substract(a, b) << std::endl;
  std::cout << "a * b = " << Multiply(a, b) << std::endl;
  std::cout << "a / b = " << Divide(a, b) << std::endl;
  return 0;
}
