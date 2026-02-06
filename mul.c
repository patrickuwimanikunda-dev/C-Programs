#include <stdio.h>

void cal(float num1, float num2, int oper) {
    switch(oper) {
        case 1: // addition
            printf("Result = %.2f\n", num1 + num2);
            break;
        case 2: // subtraction
            printf("Result = %.2f\n", num1 - num2);
            break;
        case 3: // multiplication
            printf("Result = %.2f\n", num1 * num2);
            break;
        case 4: // division
            if (num2 != 0)
                printf("Result = %.2f\n", num1 / num2);
            else
                printf("Undefined: division by zero\n");
            break;
        default:
            printf("Invalid operation!\n");
    }
}

int main() {
    float a, b;
    int choice;

    printf("=== Simple Menu-driven Calculator ===\n");

    while (1) { // infinite loop
        printf("\nEnter first number: ");
        if (scanf("%f", &a) != 1) break;

        printf("Enter second number: ");
        if (scanf("%f", &b) != 1) break;

        printf("\nChoose operation:\n");
        printf("1. Add (+)\n2. Subtract (-)\n3. Multiply (*)\n4. Divide (/)\n5. Exit\n");
        printf("Your choice: ");
        if (scanf("%d", &choice) != 1) break;

        if (choice == 5) {  // exit option
            printf("Exiting calculator. Goodbye!\n");
            break;
        }

        cal(a, b, choice);  // call the void function
    }

    return 0;
}
