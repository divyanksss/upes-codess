#include <stdio.h>

int main() {
    int n;
    int i;     
    int sum = 0; 
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum = sum + i;  
        printf("Adding %d, sum = %d\n", i, sum); 
    }
    
    printf("The sum of first %d natural numbers is: %d\n", n, sum);
    
    return 0;
}