
// Performs addition, subtraction, multiplication or division depending the input from user

# include <stdio.h>

int main() {

    char oper;
    double firstNumber,secondNumber;

    printf("Enter an oper (+, -, *,): ");
    scanf("%c", &oper);

    printf("Enter two opers: ");
    scanf("%lf %lf",&firstNumber, &secondNumber);

    switch(oper)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf",firstNumber, secondNumber, firstNumber + secondNumber);
            break;

        case '-':
            printf("%.1lf - %.1lf = %.1lf",firstNumber, secondNumber, firstNumber - secondNumber);
            break;

        case '*':
            printf("%.1lf * %.1lf = %.1lf",firstNumber, secondNumber, firstNumber * secondNumber);
            break;

        case '/':
            printf("%.1lf / %.1lf = %.1lf",firstNumber, secondNumber, firstNumber / secondNumber);
            break;

        // oper doesn't match any case constant (+, -, *, /)
        default:
            printf("Error! oper is not correct");
    }
return 0;}
