#include <stdio.h>

double calculateInterest(char accType, double balance) {
    double rate = 0.0;

    if (accType == 'S') {   // Savings
        if (balance >= 50000)
            rate = 0.05;
        else if (balance >= 20000)
            rate = 0.04;
        else
            rate = 0.03;
    }
    else if (accType == 'F') {  // Fixed Deposit
        if (balance >= 100000)
            rate = 0.07;
        else if (balance >= 50000)
            rate = 0.06;
        else
            rate = 0.05;
    }

    return balance * rate;
}

int main() {
    char name[50];
    char accType;
    double balance, interest, total;

    printf("Enter Customer Name: ");
    scanf("%s", name);

    printf("Enter Account Type (S/F): ");
    scanf(" %c", &accType);

    printf("Enter Balance: ");
    scanf("%lf", &balance);

    interest = calculateInterest(accType, balance);
    total = balance + interest;

    printf("\n---- Customer %s ----\n", name);
    printf("Account Type : %c\n", accType);
    printf("Balance      : %.2lf\n", balance);
    printf("Interest     : %.2lf\n", interest);
    printf("Total Amount : %.2lf\n", total);

    return 0;
}
