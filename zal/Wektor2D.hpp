class Wektor2D
{
    public:
    Wektor2D(double x_in, double y_in)
    {
      x=x_in;
      y=y_in;
    }
    double getX()
    {
      return x;
    }
    double getY()
    {
      return y;
    }
    void setX(double x_in)
    {
      x=x_in;
    }
    void setY(double y_in)
    {
      y=y_in;
    }

    private:
    double x;
    double y;
};

Wektor2D operator+(Wektor2D v1, Wektor2D v2)
{
  return Wektor2D (v1.x+v2.x, v1.y+v2.y);
}

double operator*(Wektor2D v1, Wektor2D v2)
{
  return v1.x*v2.y-v1.y*v2.x;
}