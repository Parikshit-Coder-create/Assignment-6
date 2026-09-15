#include <stdio.h>

int main() {
    int n, o, r = 0, d;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    o = n;

    while (n > 0) {
        d = n % 10;
        r = r * 10 + d;
        n = n / 10;
    }

    if (o == r)
        printf("%d is a palindrome number.\n", o);
    else
        printf("%d is not a palindrome number.\n", o);

    return 0;
}