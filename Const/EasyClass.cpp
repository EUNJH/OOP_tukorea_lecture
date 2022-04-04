#include <iostream>
using namespace std;

class EasyClass {
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
class LiveClass {
  private:
    int num;
  public:
    void InitNum(const EasyClass &easy) {
      num = easy.GetNum();
    }
}
