#include <stdio.h>
#include <stdlib.h>
#include <ctime>

int main() {
  srand((unsigned) time(0));
    printf("Your dice has been rolled! You got: \n ");
    int result = 1 + (rand() % 6);
    printf("%d \n", result);
   switch (result) {
    case 1:
        printf("Your prize is our original T-shirt!");
        break;
    case 2:
        printf("Your prize is our original cap!");
        break;
    case 3:
        printf("Your prize is our original necklace!");
        break;
    case 4:
        printf("Your prize is our original keychain!");
        break;
    case 5:
        printf("Your prize is our original cup set!");
        break;
    case 6:
        printf("Your prize is a set of original keychains!");
        break;
    default:
        printf("Error");
        break;
    }
}
