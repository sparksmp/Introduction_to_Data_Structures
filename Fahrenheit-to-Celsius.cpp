#include <iostream>

using namespace std;

int main()
{
   float fahrenheit, celsius;
   cout << "Enter tmperature in Fahrenheit: ";
   cin >> fahrenheit;
   celsius = (fahrenheit - 32)* 5/9;
   cout << fahrenheit << " is " << celsius << " degress Celsius!" << endl;

   return 0;
}

