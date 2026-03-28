#include <stdio.h>
#include <math.h>

long long factorial(int n) 
{
    if (n < 0) return 0; 
    long long res = 1;
    for (int i = 1; i <= n; i++) res *= i;
    return res;
}

int main()
{
    int choice;
    double num1, num2, result;

    printf("--- Simple C Calculator ---\n");
    printf("1. Addition (+)\n2. Subtraction (-)\n3. Multiplication (*)\n");
    printf("4. Division (/)\n5. Power (x^y)\n6. Factorial (x!)\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    if (choice == 6) 
{
        int n;
        printf("Enter an integer: ");
        scanf("%d", &n);
        if (n < 0) printf("Error: Negative numbers don't have factorials.\n");
        else printf("Result: %lld\n", factorial(n));
    } 
    else if (choice >= 1 && choice <= 5)
 {
        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);

        switch (choice) 
{
            case 1: printf("Result: %.2lf\n", num1 + num2); break;
            case 2: printf("Result: %.2lf\n", num1 - num2); break;
            case 3: printf("Result: %.2lf\n", num1 * num2); break;
            case 4: 
                if (num2 != 0) printf("Result: %.2lf\n", num1 / num2);
                else printf("Error: Division by zero!\n");
                break;
            case 5: printf("Result: %.2lf\n", pow(num1, num2)); break;
        }
    } else 
{
        printf("Invalid choice!\n");
    }

    return 0;
}