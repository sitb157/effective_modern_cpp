#include "shape.h"
#include <iostream>

int main() {
  Rectangle rectangle(20, 30);
  std::cout << "rectangle size : " << rectangle.GetSize() << std::endl;
  return 0;
}
