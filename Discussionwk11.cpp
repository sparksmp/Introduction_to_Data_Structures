#include <iostream>
#include <stack>
#include <queue>

using namespace std;
/*
void printStack(stack <int> A){
    cout << "[";
    while(!A.empty()){
        cout << A.top()<< " ";
        A.pop();
    }
    cout << "]" << endl;
}

int main(){
    stack <int> A;
    for(int i = 0; i < 10; i++){
        A.push(i);
    }
    printStack(A);
    A.pop();
    printStack(A);
    return 0;
}
*/

bool isStackBalanced(string s){
    stack <char> stk;
    for(int i = 0; i < s.lenght(); i++){
        if(s[i] == '('){
            stk.push(s[i]);
        }
        if(s[i] == ')'){
            if(stk.empty()){
                return false;
            }
            else
                stk.pop();
            
        }
        if(!stk.empty())
            return false;
        else
            return true;
        
    }
    
}

int main(){
    cout << isStackBalanced('((((()))') << endl;

    return 0;
}