#include <iostream>
#include <cmath>
#include <string>

using namespace std;

struct Vector {
    double x, y, z;
};

Vector generate_vector(double x, double y, double z){
    Vector v;
    v.x = x;
    v.y = y;
    v.z = z;
    return v;
}

void show(Vector v){
    string s;
    s = "<" + to_string(v.x) + "," + to_string(v.y) + "," + to_string(v.z) + ">";
    cout << s << endl;
}

double magnitude(Vector v){
    return sqrt(pow(v.x, 2) + pow(v.y, 2) + pow(v.z, 2));
}

Vector normalize(Vector v){
    Vector w;
    w.x = v.x/magnitude(v);
    w.y = v.y/magnitude(v);
    w.z = v.z/magnitude(v);
    return w;
}

double dot_product(Vector v1, Vector v2){
    double w;
    w = (v1.x * v2.x) + (v1.y * v2.y) + (v1.z * v2.z);
    return w;
}

Vector const_multiple(double c, Vector* p){
    Vector w;
    w.x = c * p -> x;
    w.y = c * p -> y;
    w.z = c * p -> z;
    return w;
}

Vector cross_product(Vector *p, Vector *q){
    Vector w;
    w.x = p -> y * q -> z - p -> z * q -> y;
    w.y = p -> z * q -> x - p -> x * q -> z;
    w.z = p -> x * q -> y - p -> y * q -> x;
    return w;
}

Vector add (Vector *p, Vector *q){
    Vector w;
    w.x = p -> x + q -> x;
    w.y = p -> y + q -> y;
    w.z = p -> z + q -> z;
    return w;
}

int main(){
    // answers are shown as comments below the function calls. 
    Vector v1;
    Vector v2;
    v1 = generate_vector(1, 2, 3);
    v2 = generate_vector(4, -5, 8);
    show(v1);
    // <1.000000,2.000000,3.000000>
    show(v2);
    // <4.000000,-5.000000,8.000000>
    Vector w = normalize(v1); 
    show(w);
    // <0.267261,0.534522,0.801784>
    cout << dot_product(v1, v2)<< endl;
    // 18
    show(const_multiple(5, &v1));
    // <5.000000,10.000000,15.000000>
    show(cross_product(&v1, &v2));
    // <31.000000,4.000000,-13.000000>
    show(add(&v1, &v2));
    // <5.000000,-3.000000,11.000000>
    return 0;
}