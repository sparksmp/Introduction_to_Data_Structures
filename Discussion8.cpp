#include <cmath>
#include <string>

using namespace std;

class Circle{
    private:
    double radius;
    pair <double, double> Center;

    public:
    void printRadius(){
        cout << "Radius: " << radius << endl;
    }
    void printCenter(){
        cout << "Center: (" <<center.first<< "," << center.second << ")\n";
    }
    void printArea(){
        double pi = 2 * asin(1);
        cout << "Area: " << pi * radius * radius << endl;
    }

};
