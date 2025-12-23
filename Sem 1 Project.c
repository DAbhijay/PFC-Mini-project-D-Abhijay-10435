#include <stdio.h>
#include <math.h>

int main() {
    float P, A, R, EMI, balance, interest, principalPaid, totalInterest = 0;
    int Y, N;

    printf("Enter Loan Amount: ");
    scanf("%f", &P);

    printf("Enter Annual Interest Rate: ");
    scanf("%f", &A);

    printf("Enter Tenure (Years): ");
    scanf("%d", &Y);

    R = A / (12 * 100);
    N = Y * 12;

    EMI = (P * R * pow(1 + R, N)) / (pow(1 + R, N) - 1);

    balance = P;

    printf("\nMonth\tEMI\tInterest\tPrincipal\tBalance\n");

    for(int i = 1; i <= N; i++) {
        interest = balance * R;
        principalPaid = EMI - interest;
        balance -= principalPaid;
        totalInterest += interest;

        printf("%d\t%.2f\t%.2f\t\t%.2f\t\t%.2f\n",
               i, EMI, interest, principalPaid, balance);
    }

    printf("\nTotal Interest Payable: %.2f", totalInterest);
    printf("\nTotal Amount Payable: %.2f\n", P + totalInterest);

    return 0;
}