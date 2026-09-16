#include <stdio.h>

int main() {
    int choice, n, original, reverse, remainder;
    int sum, digits, temp, isPrime, i, armstrong;

    do {
        printf("\n----- MENU -----\n");
        printf("1. Check Palindrome\n");
        printf("2. Check Armstrong Number\n");
        printf("3. Check Prime Number\n");
        printf("4. Find Sum of Digits\n");
        printf("5. Count the number of Digits\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter an integer: ");
                scanf("%d", &n);

                original = n;
                reverse = 0;

                while (n != 0) {
                    remainder = n % 10;
                    reverse = reverse * 10 + remainder;
                    n = n / 10;
                }

                if (original == reverse)
                    printf("Palindrome number.\n");
                else
                    printf("Not a palindrome number.\n");

                break;

            case 2:
                printf("Enter an integer: ");
                scanf("%d", &n);

                original = n;
                armstrong = 0;

                while (n != 0) {
                    remainder = n % 10;
                    armstrong += remainder * remainder * remainder;
                    n = n / 10;
                }

                if (armstrong == original)
                    printf("Armstrong number.\n");
                else
                    printf("Not an Armstrong number.\n");

                break;

            case 3:
                printf("Enter an integer: ");
                scanf("%d", &n);

                if (n < 2) {
                    printf("Not a prime number.\n");
                    break;
                }

                isPrime = 1;

                for (i = 2; i <= n / 2; i++) {
                    if (n % i == 0) {
                        isPrime = 0;
                        break;
                    }
                }

                if (isPrime)
                    printf("Prime number.\n");
                else
                    printf("Not a prime number.\n");

                break;

            case 4:
                printf("Enter an integer: ");
                scanf("%d", &n);

                temp = n;
                sum = 0;

                while (temp != 0) {
                    sum += temp % 10;
                    temp = temp / 10;
                }

                printf("Sum of digits = %d\n", sum);

                break;

            case 5:
                printf("Enter an integer: ");
                scanf("%d", &n);

                temp = n;
                digits = 0;

                if (temp == 0) {
                    digits = 1;
                } else {
                    while (temp != 0) {
                        digits++;
                        temp = temp / 10;
                    }
                }

                printf("Number of digits = %d\n", digits);

                break;

            case 6:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 6);

    return 0;
}
