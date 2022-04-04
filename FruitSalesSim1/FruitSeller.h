class FruitSeller {
  private:
    int APPLE_PRICE;
    int ORANGE_PRICE;
    int numOfApples;
    int numOfOranges;
    int myMoney;

  public:
    void InitMembers(int ApplePrice, int OrangePrice, int AppleNum, int OrageNum, int money);
    int SaleApples(int money);
    int SaleOranges(int money);
    void ShowSalesResult();
};