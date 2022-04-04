class Rectangle {
  private:
    Point upleft;
    Point lowRight;
  
  public:
    bool InitMembers(const Point &ul, const Point &lr);
    void ShowRecInfo() const;
};