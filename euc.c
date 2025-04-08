#include <stdio.h>
struct distance{
    float d1;
    float d2;
};
struct distance D;
int main() {
    printf("Enter distances d1 and d2 (with space): ");
    scanf("%f %f",&D.d1,&D.d2);
    printf("Sum of %.2f and %.2f is: %.2f",D.d1,D.d2,(D.d1+D.d2));
    return 0;
}