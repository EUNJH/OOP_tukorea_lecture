#include <iostream>
using namespace std;

class SimpleClass {
  private:
    int num;
  public:
    void InitNum(int n) {
      num = n;
    }
    int GetNum() const{
      return num;
    }
    void ShowNum() {
      cout<<GetNum()<<endl;
    }
};