// Reversing a String
#include<iostream>
using namespace std;

/*
int main()
{
    string a;
    char choice = 'Y';
    while(choice == 'Y')
    {
        cout<<"Enter a string to reverse: "<<endl;
        cin>> a;

        string b;
        for(int i = a.length()-1; i>=0; i --)
        {
            b=b+a[i];
        }
        cout<<"String in reverse: "<<b<<endl;
        cout <<"Do you want to continue (Y/N)? "<< endl;
        cin >> choice;
}
return 0;
}
*/

int main()
{
    char string, choice;
    int n, len, string2;

    do{
    cout << "Enter a string to reverse: "<<endl;
    cin >> string;
    len = strlen(string);
    for(n = 0; n < len/2; n++)
    {
        string2 = string[n];
        string[n] = string[len-n-1];
        string[len-n-1] = string2;

    }
    cout << "String in reverse: "<< string << endl;
    cout <<"Do you want to continue (Y/N)? "<< endl;
    cin >> choice;
    }
    while (choice == 'Y');
    
    return 0;
}

//HINT: you have to reverse the string and put it in a while loop or do while loop