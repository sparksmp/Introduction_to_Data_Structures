#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <cmath>


using namespace std;
/*
// Week 5 #1
bool inArray(){
    const int SIZE = 50;
    char A [SIZE];
    char c;
    cout << "Enter an array of characters: " << endl;
    cin.getline(A, SIZE);
    cout << "Enter a character, c: " << endl;
    cin >> c;
    for(int i = 0; i < 50; i++){
        if (A[i] == c){
            return true;
        }
        }
    return false;
}
*/
// Week 5 #2 DONE 
int characterCount(){
    const int SIZE = 50;
    char A [SIZE];
    char c;
    int count = 0;
    cout << "Enter an array of characters: " << endl;
    cin.getline(A, SIZE);
    cout << "Enter a character, c: " << endl;
    cin >> c;
    for (int i = 0; i < 50; i++){
        if (A[i] == c){
            count += 1;}
    }
cout << "character " << c << " occurs " << count << " times." << endl;
return count;
}

// Week 5 #3
int smallestValue(){
    int x [5];
return 0;
}

// Week 5 #4
// Week 5 #5
// Week 5 #6
/*
const int col_num = 2;
const int row_num = 2;

int determinate(int T[][col_num] int row_num){
    return (row_num[0] * col_num[1]) - (row_num[1] * col_num[0]);
}

// Week 6 #1 DONE
int integer_address(){
    int x;
    cout << "Enter an integer x: " << endl;
    cin >> x;
    cout << "The location of integer " << x << " in memory is " << &x << endl;
return 0;
}
// Week 6 #2
int changeElement(){
    return 0;
}

// Week 6 #3
int arrayZero(){

return 0;
}

// Week 6 #4
int medianValue(){

return 0;
}
// Week 6 #5
int deleteArray(){

return 0;
}
*/
// Week 7 #1 DONE
struct Individual {
    string first_name, last_name, occupation;
    int age, yearly_salary;
};

Individual generate_individual(string f, string l, string o, int a, int s){
    Individual I;
    I.first_name = f;
    I.last_name = l;
    I.occupation = o;
    I.age = a;
    I.yearly_salary = s;
    return I;
}

void show(Individual C){
    cout << "(" << C.first_name << ", " << C.last_name << ", " << C.age << ", " << C.occupation << ", " << C.yearly_salary << ")" << endl;
}

Individual larger_salary(Individual A, Individual B){
    if(A.yearly_salary > B.yearly_salary)
        return A;
    else
        return B; 
}

/*
// Week 7 #2
struct Circle {
    vector <int> p1 {x, y};
    double r;
};

Circle generate_circle(vector <int> center_coordinates, double radius){
    Circle C;
    C.p1 = center_coordinates;
    C.r = radius;
    return C;
}

int area(Circle C){
    return M_PI * pow(C.r, 2); 
}

int quadrent_location(Circle C){
    //check if x and y + = Q1
    //if x - and y + = Q2
    //if x - and - = Q3
    // if x - and y - = Q4
}

// Week 7 #3
struct Matrix {

};

// Week 8 #1
class Coin {
    public:
        int toss();
};

int Coin :: toss(){
    //should this use random generator?

}

// Week 9 #2
class Point {

};
*/
// Week 9 #3
class Circle {
    private:
        vector <double> coordinates;
        double radius;
    
    public:
        Circle(vector <double>, double);
        double area();
        int quadrent_location();
        bool has_unit_area();
};

Circle::Circle(vector <double> v, double r){
    coordinates = v;
    radius = r;
}

double Circle::area(){
    return (3.14 * pow(radius, 2));
}



int main(){
    //inArray();
    characterCount();
    //int small[7] = {}
    //integer_address(); 
    Individual A = generate_individual("John", "Doe", "Programmer", 27, 65000);
    Individual B = generate_individual("Jane", "Doe", "Manager", 25, 70000);
    show(A);
    show(larger_salary(A, B));
    vector <double> v = {0,0}; 
    Circle C = Circle(v, 3);
    cout << C.area() << endl;
    //int table[row_num][col_num] = {{1, 2} {3, 4}};
    //determinate();
    //cout << A.first_name << endl;
    //C = Circle(p1, r);
}