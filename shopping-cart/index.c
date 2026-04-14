#include <stdio.h>
#include <stdbool.h>
int main()
{
    bool isRunning = true;
    bool mainMenu = false;
    bool laptopMenu = false;
    bool phoneMenu = false;
    bool cartMenu = false;

    struct Laptop
    {
        char name[30];
        float price;
        int quantity;
    };
    struct Phone
    {
        char name[30];
        float price;
        int quantity;
    };

    while (isRunning)
    {
        printf("SHOPPING CART PROGRAM. \n");
        int bankAccount = 0;
        char menu;
        struct Laptop laptops[5] = {
            {"MacBook Pro", 1299.99, 5},
            {"Dell XPS", 999.99, 3},
            {"Lenovo ThinkPad", 899.99, 7},
            {"HP Spectre", 1099.99, 4},
            {"Asus ZenBook", 799.99, 6}};

        struct Phone phones[5] = {
            {"iPhone 15", 1500, 10},
            {"Samsung Galaxy S24", 2000, 15},
            {"Google Pixel 8", 800, 11},
            {"OnePlus 12", 1000, 5},
            {"Sony Xperia 5", 3000, 2}};

        int laptopsAmount = sizeof(laptops) / sizeof(laptops[0]);
        int phonesAmount = sizeof(phones) / sizeof(phones[0]);

        printf("enter your balance: \n");
        scanf("%d", &bankAccount);
        mainMenu = true; // loop will run main menu from this point.
        while (mainMenu)
        {
            printf("l - laptops. \n");
            printf("p - phones. \n");
            printf("v - view balance. \n");
            scanf(" %c", &menu);
            if (menu == 'l')
            {
                mainMenu = false;
                laptopMenu = true;
                for (int i = 0; i < laptopsAmount; i++)
                {
                    printf("%d. %s, price - %f$, quantity - %d \n", i + 1, laptops[i].name, laptops[i].price, laptops[i].quantity);
                }
                printf("\n");
                while (laptopMenu)
                {
                    int choice;
                    printf("enter number of item u wanna add to cart (0 go back)");
                    scanf("%d", &choice);
                    if (choice == 0)
                    {
                        laptopMenu = false;
                        mainMenu = true;
                    }
                }
            }

            if (menu == 'p')
            {
                mainMenu = false;
                phoneMenu = true;
                for (int i = 0; i < phonesAmount; i++)
                {
                    printf("%d. %s, price - %f$, quantity - %d \n", i + 1, phones[i].name, phones[i].price, phones[i].quantity);
                }
                printf("\n");
                while (phoneMenu)
                {
                    int choice;
                    printf("enter number of item u wanna add to cart (0 go back)");
                    scanf("%d", &choice);
                    if (choice == 0)
                    {
                        phoneMenu = false;
                        mainMenu = true;
                    }
                }
            }

            if (menu == 'v')
            {
                printf("your balance is: %d", bankAccount);
                printf("\n");
            };
        }
    }
}