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

int climbStairs(int n) {
        if (n==0||n==1){
            return 1;
        }

        int prev2 = 1;
        int prev1 = 1;

        for(int i =2; i<=n; i++){
            int curr = prev1 + prev2;  // we calculate current
            prev2 = prev1;         // we shift by 1
            prev1 = curr;          // we shift by 1
        }

        return prev1;
        
    }

int main(){

    cout << countDistinctWayToClimb(20);

}
