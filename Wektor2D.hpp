class Wektor2D
{
private:

    double x;
    double y;

public:

    Wektor2D() : Wektor2D(0.0, 0.0) {}

    void   setX(double X_) { x = X_; }
    void   setY(double Y_) { y = Y_; }
    double getX() const { return x; }
    double getY() const { return y; }

    Wektor2D(double setX, double setY)
    {
        x = setX;
        y = setY;
        // std::println("Tworzenie -> x: {}\t y: {}", x, y);
    }
    ~Wektor2D()
    {
        // std::println("Niszczenie -> x: {}\t y: {}", x, y);
    }

   

};

Wektor2D operator+(Wektor2D v1, Wektor2D v2)
{
    return Wektor2D{v1.getX() + v2.getX(), v1.getY() + v2.getY()};
}

double operator*(Wektor2D v1, Wektor2D v2)
{
    return (v1.getX() * v2.getX()) + (v1.getY() * v2.getY());
}

