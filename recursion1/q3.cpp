#include <iostream>
using namespace std;

int countSolutions(int n, int val) {
    if(val == 0) {
        return 1; // base case where the sum is 0
    }
    if(n == 0 || val < 0) {
        return 0; // base case where there are no variables or the sum becomes negative
    }
    return countSolutions(n-1, val) + countSolutions(n, val-n); // recursive call to count the solutions
}

int main() {
    int n, val;
    cout << "Enter the value of n and val: ";
    cin >> n >> val;
    cout << "The number of non-negative integral solutions for the equation with " << n << " variables and sum " << val << " is: " << countSolutions(n, val) << endl;
    return 0;
}
