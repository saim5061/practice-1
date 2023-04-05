#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    printf("%d\n", a);
    if (a % 2 == 0){
        printf("Number is even : %d\n",a);
    } else {
        printf("Number is odd: %d\n", a);
    }
    return 0;
}