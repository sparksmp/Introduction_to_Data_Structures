#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Stats{
    private: 
        vector <double> X;
        friend double sum(vector <double>);
        friend double largerSpread(Stats*, Stats*);

    public: 
        Stats(vector <double>);
        double mean();
        double sd();
        double var();
        vector <double> zscores(); 
};

Stats::Stats(vector <double> V){
    X = V;
}

double sum(vector <double> V){
    double sum = 0;
    int length = V.size();
    for(int i = 0; i < V.size(); i++){
        sum += V[i];
    }
    return sum;
}

double Stats::mean(){
    double sum_ofX = 0;
    int length = X.size();
    for(int i = 0; i < X.size(); i++){
        sum_ofX += X[i];
    }
return sum_ofX / length;
}

double Stats::sd(){
    double mean_ofX, std_d = 0;
    mean_ofX = mean();
    int length = X.size();
    for(int i = 0; i < X.size(); i++){
        std_d += pow(X[i] - mean_ofX, 2);
    }
return sqrt(std_d / length);
}

double Stats::var(){
    double mean_ofX, std_d = 0;
    mean_ofX = mean();
    int length = X.size();
    for(int i = 0; i < X.size(); i++){
        std_d += pow(X[i] - mean_ofX, 2);
    }
    return (std_d / length);
}


vector <double> Stats::zscores(){
    vector <double> V;
    double mean_ofX, std_d = 0;
    double z;
    mean_ofX = mean();
    std_d = sd();
    for (int i = 0; i < X.size(); i ++){
        z = (X[i] - mean_ofX) / std_d;
        V.push_back(z);
    }
return V;
}

double largerSpread(Stats *C, Stats *D){
    double a = (C -> var());
    double b = (D -> var());
    if (a > b)
        return a;
    else
        return b;
}

int main(){
    vector <double> X1 = {6, 3, 4, 5, 1, 2, 9, 8, 3, 5};
    vector <double> X2 = {1, 8, 0, 2, 5, 6, 9, 0, 4, 9};
    Stats A(X1);
    Stats B(X2);

    cout << A.mean() << endl;
    // 4.6
    cout << A.sd() << endl;
    // 2.41661
    //cout << A.var() << endl;
    cout << sum(A.zscores()) << endl;
    // 0
    cout << largerSpread(&A, &B) << endl;
    // 11.44
    return 0;
}