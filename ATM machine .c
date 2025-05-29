
#include <stdlib.h>

int main() {
    int pin, attempt = 0, correctPin = 1234, maxAttempts = 3;
    float balance = 10000.0, amount;

    while (attempt < maxAttempts) {
        printf("Enter PIN: ");
        scanf("%d", &pin);

        if (pin == correctPin)
          {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if (amount > 0 && amount <= balance)
          {
                balance -= amount;
                printf("Please collect your cash\n");
                printf("Remaining balance: %.2f\n", balance);
            } else 
         {
                printf("Invalid amount or insufficient balance\n");
            }
            break;
        } 
    else 
            {printf("Wrong PIN\n");
            attempt++;
        }
    }

    if (attempt == maxAttempts) {
        printf("Card blocked due to multiple wrong attempts\n");
    }

    return 0;
}
