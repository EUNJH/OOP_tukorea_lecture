#include <iostream>
#include "FruitSeller.h"

using namespace std;

  void FruitSeller::InitMembers(int ApplePrice, int OrangePrice, int AppleNum, int OrageNum, int money){
    APPLE_PRICE = ApplePrice;
    ORANGE_PRICE = OragePrice;
    numOfApples = Applenum;
    numOfOrages = OrageNum;
    myMoney = money;
  }
  int FruitSeller::SaleApples(int money) {
    int num = money/APPLE_PRICE;
    numOfApples -= num;
    myMoney += money;
    return num;
  }
  int FruitSeller::SaleOranges(int money) {
    int num = money/ORANGE_PRICE;
    numOfOrages -= num;
    myMoney += money;
    return num;
  }
  void FruitSeller::ShowSalesResult() {
    cout<<"남은 사과 : "<<numOfApples<<endl;
    cout<<"남은 오렌지 : "<<numOfOrages<<endl;
    cout<<"판매 수익 : "<<myMoney<<endl<<endl;
  }