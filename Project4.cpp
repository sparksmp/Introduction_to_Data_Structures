#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class LineSegment{

    private:
        int a, b, c, d;
        friend string show (LineSegment);
        friend float getSegmentLength(LineSegment*);

    public:
        LineSegment(int a = 0, int b = 0, int c = 0, int d = 0);
        float getSlope();
        float getYIntercept();
        LineSegment getLongerSegment(LineSegment, LineSegment);
        LineSegment operator + (LineSegment B){
            return LineSegment(a + B.a, b + B.b, c + B.c, d + B.d);
        }

};

LineSegment::LineSegment(int x1, int y1, int x2, int y2){
    a = x1;
    b = y1;
    c = x2;
    d = y2;
}

string show(LineSegment C){
    return "Line segment between points (" + to_string(C.a)+ ", " + to_string(C.b) + ") and (" + to_string(C.c) + ", " + to_string(C.d) + ").";
}

float LineSegment::getSlope(){
    return (d - b) / double(c - a);
}


float LineSegment::getYIntercept(){
    float slope = getSlope();
    return d - slope * c;
}


float getSegmentLength(LineSegment* C){
    float point1 = abs(C -> a - C -> c);
    float point2 = abs(C -> b - C -> d);
    float length = sqrt(pow(point1, 2) + pow(point2, 2));
    return length;
}

LineSegment getLongerSegment(LineSegment A, LineSegment B){
    double line1 = getSegmentLength(&A);
    double line2 = getSegmentLength(&B);
    if (line1 > line2)
        return A;
    else
        return B;
}


int main(){
    LineSegment A(2, 8, 4, 9);
    LineSegment B(3, 11, 6, 21);

    cout << show(A) << endl;
    // Line segment between points (2, 8) and (4, 9).
    cout << show(B) << endl;
    // Line segment between points (3, 11) and (6, 21).
    cout << A.getSlope() << endl;
    // 0.5
    cout << B.getYIntercept() << endl;
    // 1
    cout << getSegmentLength(&A) << endl;
    // 2.23607
    cout << show(getLongerSegment(A, B)) << endl;
    // Line segment between points (3, 11) and (6, 21).
    cout << show(A + B) << endl;
    // Line segment between points (5, 19) and (10, 30).
    return 0;
}