#include <iostream>
#include "shape.h"
#include "namespaces.h" 

using namespace mycode;

int main() {
  foo();
  Rectangle rectangle(20, 30);
  std::cout << "rectangle size : " << rectangle.GetSize() << std::endl;
  return 0;
}
