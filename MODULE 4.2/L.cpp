#include <iostream>
using namespace std;
class demo
{
public:
    double area1, height, base, length = 10, breadth, width = 14, radius, pi = 3.14, rectangle, triangle, circle;

    void area()
    {
        area1 = width * length;
        cout << "Area of rectangle : " << area1 << endl;
    }
    void area(double a)
    {
        base = a;
        height = length;
        area1 = 0.5 * base * height;
        cout << "Area of triangle : " << area1 << endl;
    }
    void area(double b, double c)
    {
        radius = b;
        area1 = pi * (radius * radius);
        cout << "Area of circle : " << area1 << endl;
    }
};
int main()
{
    demo d1;
    d1.area();
    d1.area(25);
    d1.area(8, 10);

    return 0;
}
