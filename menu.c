#include <stdio.h>
#include <stdlib.h>
int main()
{
    int choice, quantity, sum;
    char choiceAgain;
    do
    {

        printf("\n--- Welcome to burger king ---\n Choose your favourite burger. \n");
        printf("1. Cheesy Burger\n");
        printf("2. Veg Burger\n");
        printf("3. Cheesy spicy Burger\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            sum = 99 * quantity;
            printf("You selected Cheesy Burger. \n Your total amount is :%d\n", sum);
            break;
        case 2:
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            sum = 59 * quantity;
            printf("You selected veg Burger. \nYour total amount is : %d\n", sum);
            break;
        case 3:
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            sum = 159 * quantity;
            printf("You selected Cheesy spicy Burger. \nYour total amount is : %d\n", sum);
            
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
        printf("Now enjoy your Burger");
        printf("\nDo you want order again (y/n): ");
        scanf(" %c", &choiceAgain);
    } while (choiceAgain == 'y' || choiceAgain == 'Y');

    printf("Thank You For Ordering!");
    return 0;
}
