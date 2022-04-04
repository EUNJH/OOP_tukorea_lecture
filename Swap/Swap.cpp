#include <iostream>
using namespace std;

void SwapByValue(int n1, int n2) {
  int temp;
  temp = n1;
  n1 = n2;
  n2 = temp;
}
void SwapByPointer(int *n1, int *n2) {
  int temp;
  temp = *n1;
  *n1 = *n2;
  *n2 = temp;
}
void SwapByReference(int &n1, int &n2) {
  int temp;
  temp = n1;
  n1 = n2;
  n2 = temp;
}

int main(void) {
  int num1 = 10;
  int num2 = 20;

  SwapByValue(num1, num2);
  cout<<"SwapByValue: num1 = "<<num1<<", num2 = "<<num2<<endl;
  SwapByPointer(&num1, &num2);
  cout<<"SwapByPointer: num1 = "<<num1<<", num2 = "<<num2<<endl;
  SwapByReference(num1, num2);
  cout<<"SwapByReference: num1 = "<<num1<<", num2 = "<<num2<<endl;
}