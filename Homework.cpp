#include <iostream>
#include <cmath>

using namespace std;

int homework1()
{
    int a = 10, b = 12;
    cout << "The integers are: " << a << " and " << b << endl;
    cout << "Their product is " << a * b << endl;

return 0;
}

int homework2()
{
    int a = 10, b = 12;
    cout << "The square root of their product is: " << sqrt(a * b) << endl;

return 0;
}

int tempconverter()
{
    float degrees_f, degrees_c;

    cout << "Temerature Converter" << endl;
    cout << "Please enter a teperature in degrees Farenheit: " << endl;
    cin >> degrees_f;
    degrees_c = (degrees_f - 32) * 5/9;

    cout << degrees_f << " is " << degrees_c << " degrees!" << endl;

return 0;
}

int area_of_cirle()
{
    float radius, area, pi = 3.14;

    cout << "Enter the radius of a cirle to find it's area: " << endl;
    cin >> radius;
    area = pi * (radius * radius);
    cout << "The area of the cirlce raduis " << radius << " is " << area << "." << endl;

return 0;
}

int distance_two_points()
{
    double px, py, qx, qy;
    float distance, p, q;

    cout << "Enter x coordinate of P: " << endl;
    cin >> px;
    cout << "Enter the y coordinate of P: " << endl;
    cin >> py;
    cout << "Enter x coordinate of Q: " << endl;
    cin >> qx;
    cout << "Enter the y coordinate of Q: " << endl;
    cin >> qy;
    p = (px -qx);
    q = (py - qy);
    distance = sqrt(pow(p, 2)+ pow(q, 2));
    cout << "The distance between points P (" << px << ", " << py << ") and Q (" << qx << ", " << qy << ") is " << distance << endl;

return 0;
}


int use_math()
{
    int x = 10, y = -4;
    float pi = 3.14;

    cout << "x = 10 and y = -4" << endl;
    cout << "The square root of the absolute value of y = " << sqrt(abs(y)) << endl;
    cout << "The exp(x) = " << exp(x) << endl;
    cout << "The log of x = " << log(x) << endl;
    cout << "The tangent of x = " << tan(x) << endl;
    cout << "The cosine of pi * y = " << cos(pi * y) << endl;

return 0;
}


int main()
{
    //homework1();
    //homework2();
    //tempconverter();
    //area_of_cirle();
    //distance_two_points();
    //use_math();

}