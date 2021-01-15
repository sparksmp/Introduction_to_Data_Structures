#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Stats{
    private:
    vector <int> X;
    friend double sum(vector <int>);
    friend Stats largerSpread(Stats, Stats);

    public:
    Stats(vector <int>);
    
};