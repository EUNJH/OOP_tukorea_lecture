#include <iostream>
#include "Point.h"
#include "Rectangle.h"
using namespace std;

int main() {
  Point pos1;
  pos1.InitMembers(3, 9);
  Point pos2;
  pos2.InitMembers(1, 10);

  Rectangle rec;
  rec.InitMembers(pos2, pos1);
  rec.ShowRecInfo();
  return 0;
}