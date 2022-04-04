#include <iostream>
#include "FruitBuyer.h"

using namespace std;

  void FruitBuyer::InitMembers(int money) {
    myMoney = money;
  }
  void FruitBuyer::BuyApples(FruitSeller &seller, int money) {
    numOfApples += seller.SaleApples(money);
    myMoney -= money;
  }
  void FruitBuyer::BuyOrages(FruitSeller &seller, int money) {
    numOfOrages += seller.SaleOrages(money);
    myMoney -= money;
  }
  void FruitBuyer::ShowBuyResult() {
    cout<<"현재 잔액 : "<<myMoney<<endl;
    cout<<"사과 개수 : "<<numOfApples<<endl;
    cout<<"오렌지 개수 : "<<numOfOrages<<endl<<endl;
  }