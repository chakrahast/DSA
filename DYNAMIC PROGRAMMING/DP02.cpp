// 1D DYNAMIC PROGRAMMING

#include <iostream>
#include <vector>
using namespace std;

// Q1. CLIMBING STAIRS: 
    // We are at 0th stair
    // Need to reach Nth stair
    // we can either climb 1 or 2 steps 
        // return number of ways we can reach the Nth step from 0th step 
        // What else can we find out????

int countDistinctWayToClimb(long long n){
    if (n == 0||n==1) {
        return 1;
    }

    int left = countDistinctWayToClimb(n-1);
    int right = countDistinctWayToClimb(n-2);

    return left + right;
}

int main(){

    cout << countDistinctWayToClimb(20);

}