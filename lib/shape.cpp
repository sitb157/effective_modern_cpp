#include "shape.h"

Rectangle::Rectangle(int width, int height) : width_(width), height_(height) {}

int Rectangle::GetSize() const {
  return width_ * height_;
}
