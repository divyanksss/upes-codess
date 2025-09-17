#include <stdio.h>

int main(){
    int length,breadth;
    printf("Enter length of rectangle\n");
    scanf("%d", &length);
    printf("Enter breadth of rectangle\n");
    scanf("%d", &breadth);
    printf("The area of rectangle is %d\n", length*breadth);
    printf("The perimeter of rectangle is %d", 2 * (length + breadth));
    return 0;
}