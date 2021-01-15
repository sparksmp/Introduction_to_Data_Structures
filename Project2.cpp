#include <iostream>
#include <fstream>
#include <vector>
//#include <numeric>
//#include <array>
#include <string>
#include <sstream>

using namespace std;


string removePunc(string s) {
        vector <char> punc({',','[', ']'});
        for(int i=0; i < s.length(); i++) {
                if(find(punc.begin(), punc.end(), s[i])!=punc.end()) {
                        s[i] = ' ';
                }
        }
        return s;
}

int problem1(string filename){
    int sum = 0;
    fstream my_file;
    my_file.open(filename);
    if(my_file.is_open()){
        string line, number, new_line;
        while(getline(my_file, line)){
            new_line = removePunc(line);
            //cout << new_line << endl;
            stringstream ss(new_line);
            while(ss >> number){
                sum += stoi(number);
            }
        }

        cout << "The sum of the numbers in the data.txt file is: " << sum << endl;
        }
        my_file.close();
    
    return 0;
}

int problem2(string filename) {
//return one vector with 10 elements "0123456789"
    vector <int> my_vector(10, 0);
    fstream my_file;
    my_file.open(filename);
    if(my_file.is_open()){
        string line;
        while(getline(my_file, line)){
            for(int i = 0; i < line.length(); i++){
                 if (line[i] != '[' && line[i] != ']' && line[i] != ',' && line[i] != ' '){
                    int number = line[i] - '0';
                    my_vector[number] += 1;
                    }
                } 
            }
        }
        cout << "The vector containing number of instances 0123456789 is: " << endl;
        for(int i = 0; i < my_vector.size(); i++){
            cout << my_vector[i] << endl;
        }
    my_file.close();
    return 0;
}


int problem3(string filename){
//int most_freq;
    vector <int> numbers;
    int freq[100];
    for(int i = 0; i < 100; i++){
        freq[i] = 0;}
    fstream my_file;
    my_file.open(filename);
    if(my_file.is_open()){
        string line, number, new_line;
        while(getline(my_file, line)){
            new_line = removePunc(line);
            int temp;
            stringstream ss(new_line);
            while(ss >> temp){
                numbers.push_back(temp);}
        }
    }
    for(int i = 0; i < numbers.size(); i++) {
        freq[numbers[i]]++;}
    //cout << freq[76] << endl;
    int largest = numbers[0];
    for(int i = 1; i < numbers.size(); i++){
        if(largest < freq[numbers[i]]){
            largest = numbers[i]; 
            //cout << largest << endl;
        }
    }
    cout << "The most frequent number in the data.txt file is: " << largest << endl;

           
	return 0;
}    


int main(){
    string s = "data.txt";
    problem1(s);
    problem2(s);
    problem3(s);
    return 0;
}

//problem1() The sum of the numbers in the data.txt file is: 2471891
//problem2() The vector containing number of instances 0123456789 is: 4937 10043 10022 10034 9955 10036 9960 10050 10042 9932
//problem3() The most frequent number in the data.txt file is: 85

