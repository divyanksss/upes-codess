#include <stdio.h>
#include <math.h>

int main() {
    double P, r, t, A;
    int n;
    
      P = 1000.0;  // $1000 principal
    r = 5.0;     // 5% annual interest rate
    n = 12;      // Compounded monthly
    t = 10.0;    // 10 years
    r = r / 100;
    A = P * pow(1 + r/n, n * t);
    
    printf("Principal: $%.2lf\n", P);
    printf("Rate: %.2lf%%\n", r * 100);
    printf("Time: %.1lf years\n", t);
    printf("Final Amount: $%.2lf\n", A);
    printf("Interest Earned: $%.2lf\n", A - P);
    
    return 0;
}