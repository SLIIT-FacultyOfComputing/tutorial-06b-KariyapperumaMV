class Box {
  private:
    int length;
    int width;
    int height;
  public:
    int getLength();
    void setLength(int L);
    int getWidth();
    void setWidth (int W);
    int getHeight();
    void setHeight(int H);
    int calcVolume();
};
