#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Stats{
    private: 
        vector <double> X;
        friend double sum(vector <double>);
        friend Stats largerSpread(Stats*, Stats*);

    public: 
        Stats(vector <double>);
        double mean(vector <double>);
        double sd(vector <double>);
        double var(vector <double>);
        vector <double> zscores(vector <double>); 
};

Stats::Stats(vector <double> V){
    X = V;
}

double sum(Stats C){
    vector <double> V;
    double sum = 0;
    int length = V.size();
    for(int i = 0; i < V.size(); i++){
        sum += V[i];
    }
    return sum;
}

double Stats::mean(vector <double> V){
    double sum_ofV = 0;
    int length = V.size();
    for(int i = 0; i < V.size(); i++){
        sum_ofV += V[i];
    }
return sum_ofV / length;
}

double Stats::sd(vector <double> V){
    double sum_ofV = 0, mean, sd = 0;
    int length = V.size();
    for(int i = 0; i < V.size(); i++){
        sum_ofV += V[i];
    }
    mean = sum_ofV / length;
   
    for(int i = 0; i < V.size(); i++){
        sd += pow(V[i] - mean, 2);
    }
return sqrt(sd / length);
}

double Stats::var(vector <double> V){
    double sum_ofV = 0, mean, sd = 0;
    int length = V.size();
    for(int i = 0; i < V.size(); i++){
        sum_ofV += V[i];
    }
    mean = sum_ofV / length;
    for(int i = 0; i < V.size(); i++){
        sd += pow(V[i] - mean, 2);
    }
return pow(sqrt(sd / length), 2);
}

/*
vector <double> Stats::zscores(vector <double>){
    vector <double> V;
    double z;
    for (int i = 0; i < V.size(); i ++){
        z = (V[i] - mean) / sd;
        return z;
    }
return V;
}

Stats largerSpread(Stats *C, Stats *D){
    double a = (C -> var(vector <double>));
    double b = (D -> var(vector <double>));
    if (a > b)
        return C;
    else
        return D;
}

This part is commented out because I couldn't finish the functions properly.
The uncommented code does compile. Hoping for some partial points for attempt!

*/
int main(){
    vector <double> X1 = {6, 3, 4, 5, 1, 2, 9, 8, 3, 5};
    vector <double> X2 = {1, 8, 0, 2, 5, 6, 9, 0, 4, 9};
    Stats A(X1);
    Stats B(X2);

    cout << A.mean(X1) << endl;
    // 4.6
    cout << A.sd(X1) << endl;
    // 2.41661
    //cout << sum(A.zscores(X1)) << endl;
    // 0
    //cout << sum(largerSpread(&A, &B)) << endl;
    // 
    return 0;
}