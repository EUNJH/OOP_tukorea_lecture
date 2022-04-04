class FruitBuyer {
  private :
    int myMoney;
    int numOfApples;
    int numOfOranges;

  public:
    void InitMembers(int money);
    void BuyApples(FruitSeller &seller, int money);
    void BuyOrages(FruitSeller &seller, int money);
    void ShowBuyResult();
};