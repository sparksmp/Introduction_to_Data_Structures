#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Stats{
    private: //used within the class only can't be called in main
        vector <int> X;
        friend double sum(vector <int>);
        friend Stats largerSpread(Stats, Stats);

    public: //can be called anywhere.
        Stats(vector <int>);
        double mean(vector <int>);
        double sd(vector <int>);
        double var(vector <int>);
        vector <double> zscores(vector <int>); 
};

Stats::Stats(vector <int> V){
    X = V;
}

double Stats::mean(vector <int> V){
    double sum_ofV = 0;
    int length = V.size();
    cout << length;
    /*
    for(int i = 0; i < V.size(); i++){
        sum_ofV += V[i];
    }
return sum_ofV;
*/
return length;
}

/*
double Stats::sd(){

}
*/


int main(){
    vector <int> X1 = {6, 3, 4, 5, 1, 2, 9, 8, 3, 5};
    vector <int> X2 = {1, 8, 0, 2, 5, 6, 9, 0, 4, 9};
    Stats A(X1);
    Stats B(X2);

    //cout << A.mean() << endl;
    //
    //cout << A.sd() << endl;
    //
    //cout << sum(A.zscores()) << endl;
    //
    //cout << sum(largerSpread(&A, &B)) << endl;
    //
    return 0;
}