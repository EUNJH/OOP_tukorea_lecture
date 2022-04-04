#include <iostream>
#include "Rectangle.h"
#include "Point.h"
using namespace std;

bool Rectangle::InitMembers(const Point &ul, const Point &lr) {
  if(ul.GetX() > lr.GetX() || ul.GetY() > lr.GetY()) {
    cout<<"잘못된 위치정보 전달"<<endl;
    return false;
  }
}
void Rectangle::ShowRecInfo const {
    cout<<"좌 상단 : "<<'['<<upleft.x<<", ";
    cout<<upleft.y<<']'<<endl;
    cout<<"우 하단 : "<<'['<<lowRight.x<<", ";
    cout<<lowRight.y<<']'<<endl<<endl;
}