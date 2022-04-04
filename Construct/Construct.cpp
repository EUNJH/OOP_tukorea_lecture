#include <iostream>
using namespace std;

class SimpleClass {
  int num1;
  int num2;

  public:
    SimpleClass() {
      num1 = 0;
      num2 = 0;
    }
    SimpleClass(int n) {
      num1 = n;
      num2 = 0;
    }
    SimpleClass(int n1, int n2) {
      num1 = n1;
      num2 = n2;
    }
    SimpleClass(int n1 = 0, int n2 = 0) {
      
    }
}