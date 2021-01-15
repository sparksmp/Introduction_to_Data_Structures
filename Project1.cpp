#include <iostream>
#include <cstring>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>

//Problem 1:

using namespace std;

float problem1()
{
    float M, H, D, seconds;
    char choice;

    cout << "Enter a number of seconds: " << endl;
    cin >> seconds;
    cout << "Menu Options: " << endl;
    cout << "(M)inutes" << endl;
    cout << "(H)ours" << endl;
    cout << "(D)ays" << endl;
    cout << "Select the conversion format M/H/D and enter it here: " << endl;
    cin >> choice;
    
    switch(choice)
    {
        case 'M':
            cout << "The number of seconds you entered is " << seconds / 60 << " minutes." << endl;
            break;
        case 'H':
            cout << "The number of seconds you entered is " << seconds / 3600 << " hours." << endl;
            break;
        case 'D':
            cout << "The number of seconds you entered is " << seconds / 86400 << " days." << endl;
    }
    return 0;
}

/*
350000 seconds results:
Minutes - 5833.33
Hours - 97.2222
Days - 4.05093
*/


//Problem 2:
int problem2()
{
    vector<string> names;
    int n = 4;

    cout << "Enter 4 names, one per line: " << endl;
    string input;
    for(int i = 0; i < n; i++){
        cin >> input;
        names.push_back(input);
}

    sort(names.begin(), names.end());
    cout << "**********" << endl;
    cout << "The names in alphabetical order are: " << endl;
    for(int i = 0; i < names.size(); i++){
        cout << names[i] << " " << endl;
    }

    return 0;
}

/*
RESULTS:
Enter 4 names, one per line: 
Janet
Zoe
Jane
Bob
**********
The names in alphabetical order are: 
Bob 
Jane 
Janet 
Zoe 

*/

int main()
{
    problem1();
    problem2();

}