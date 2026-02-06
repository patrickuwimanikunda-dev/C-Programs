#include <stdio.h>

float calc(float num1, float num2, int oper){
    switch(oper){
        case 1:
        printf("The addition of %.2f and %.2f is %.2f \n",num1, num2, num1+num2);
        break;

    case 2:
        printf("The subraction of %.2f and %.2f is %.2f \n",num1, num2, num1-num2);
        break;

   case 3:
        printf("The product of %.2f and %.2f is %.2f \n", num1, num2, num1*num2);
        break;

   case 4:
        printf("The division of %.2f and %.2f is %.2f \n",num1, num2, num1/num2);
        break;
   case 5:
       printf("You have successfully exited.\n");
       return 0;
    default:
    printf("Invalid choice.\n");
    printf("Choose from 1 to 5\n");
    printf("Please Try again\n");
    oper = 6;
    }
}

int main(){
    int choice;
    while(choice!=5){
    float nmb1, nmb2;
    printf("\n");
    printf("Input two numbers: ");
    scanf("%f %f", &nmb1, &nmb2);
    printf("Choose.\n");
    printf(" 1.Add (+)\n 2.Subtract (-)\n 3.Multiply (*)\n 4.Divide (/)\n 5.Exit\n");
    printf("Choice: ");
    scanf("%d", &choice);
    printf("\n");
    calc(nmb1, nmb2, choice);
 }
}
