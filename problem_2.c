// #include <stdio.h>
// int main()
// {
//     int a = 5; 
//     int b = 2;
//     int sum = a + b;
//     int sub = a - b;
//     int mul = a * b;
//     float div = a*1.0 / b;
    
//     printf("Then you’ll give output as:\n");
//     printf("%d + %d = %d\n", a, b, sum);
//     printf("%d - %d = %d\n", a, b, sub);
//     printf("%d * %d = %d\n", a, b, mul);
//     printf("%d / %d = %.1f\n", a, b, div);
    
//     return 0;
// }

#include <stdio.h>
int main()
{
    int a, b, result;
    printf("Then you’ll give output as:\n");
    scanf("%d %d", &a, &b);

    result = a + b;
    printf("%d + %d = %d\n", a, b, result);

    result = a - b;
    printf("%d - %d = %d\n", a, b, result);

    result = a * b;
    printf("%d * %d = %d\n", a, b, result);

    float modulus = a*1.0 / b;
    printf("%d / %d = %.2f\n", a, b, modulus);
    return 0;
}