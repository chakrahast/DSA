#include <iostream>
#include <vector>
using namespace std;

int fib(int n){
    if (n<=1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}

int fibmemo(int n, vector<int>& memo ){  // & for reference so no new copies created and original memo modified
    if (n<=1){
        return n;
    }
    if (memo[n] != -1){
        return memo[n];
    }

    memo[n] = fibmemo(n-1,memo) + fibmemo(n-2,memo); // no need to write & here as CPP recognizes by signature
    return memo[n];
}
int fibtab(int n){
    if (n<=1){
        return n;
    }

    vector<int> tab(n+1);
    tab[0] = 0;
    tab[1] = 1;

    for (int i = 2; i<= n; i++){
        tab[i] = tab[i-1] + tab[i-2];
    }

    return tab[n];
}

int main(){
    int n = 45;
    // memoization 
    vector<int> memo(n+1,-1); // all values with -1
   
    cout << fib(n) << endl;
    cout << fibmemo(n,memo) << endl;
    cout << fibtab(n);


}