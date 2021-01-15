#include<iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <cmath>

using namespace std;


// PROBLEM 1
int problem1()
{
    int x, y, z, max, mid, min;
    cout << "Enter three integers on one line, separated by a space: "<< endl;
    cin >> x;
    cin >> y;
    cin >> z;

    max = (x > y) ? (x > z ? x : z) : (y > z ? y : z);
    min = (x < y) ? (x < z ? x : z) : (y < z ? y : z);
    mid = (x != max && x != min ? x : (y != max && y != min ? y : z));
   
    cout << "The integers in ascending order are: " << min << " " << mid << " " << max << endl;
    return 0;
}


// PROBLEM 2 
int problem2()
    {
        string string;
        int vowels = 0;

        cout << "Enter a string: " << endl;
        getline(cin, string);
            for(int i = 0; i < string.length(); ++i)
                {
                if(string[i]=='a' || string[i]=='e' || string[i]=='i' ||
                    string[i]=='o' || string[i]=='u' || string[i]=='A' ||
                    string[i]=='E' || string[i]=='I' || string[i]=='O' ||
                    string[i]=='U')
                    {
                    ++vowels;
                    }
                }
        cout << "Number of vowels in string: " << vowels << endl;

    return 0;

    }
   

// PROBLEM 3 
int problem3()

    {   
        ofstream my_code;
        my_code.open("code.txt");
        
        int n;
        for (n = 33; n <= 125; n+=3)
        {
            my_code << (char)n << " " << (char)(n+1) << " " << (char)(n+2) << endl;
        }

        my_code.close();

        return 0;
    }


// PROBLEM 4
int problem4(int n)
{

        unsigned seed = time(0);
        srand(seed);

        while (n > 0) 
        {
            int toss = (rand() % 3) + 1;
            if (toss == 1){
                cout << "Coin Toss Result: HEADS"<< endl;
            } else if (toss == 2) {
                cout << "Coin Toss Result: TAILS"<< endl;
            } else {
                cout << "Coin Toss Result: OTHER"<< endl;
            }
            n--;
        }

}

}

// PROBLEM 5
double problem5(double n)
{
        double i, pi2_6;
        double pi_4 = 1;

        if (n > 0) {
            for (i = 1; i <= n; i+=3){
                pi_4 += 1 * (pow(-1, 1)) / ((2 * i) - 1);
            }
            double pi = (pi_4 * 4);
            pi2_6 = ((pi * pi) / 6);
        }
        return pi2_6;
        // n = 250 gives value: 1.67762
}

// PROBLEM 6
bool problem6(int n)
{
    for (int i = 3; i <= 50; i+=2)
    {
        if (n % i == 0) {
            return true;
        }
    }

return false;

}

 
int main()
    {
    problem1();
    problem2();
    problem3();
    problem4(4);
    problem5(250);
    problem6(15);
return 0;
     } 
