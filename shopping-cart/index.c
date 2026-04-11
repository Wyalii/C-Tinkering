#include <stdio.h>
int main(){
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
    
    
    printf("SHOPPING CART PROGRAM. \n");
    int bankAccount = 0;
    char menu;
    struct Laptop  laptops[5] = {
      {"MacBook Pro", 1299.99, 5},
      {"Dell XPS",    999.99,  3},
      {"Lenovo ThinkPad", 899.99, 7},
      {"HP Spectre",  1099.99, 4},
      {"Asus ZenBook", 799.99, 6}
    };

    struct Phone phones [5]={
        {"iPhone 15",1500,10},
        {"Samsung Galaxy S24",2000,15},
        {"Google Pixel 8",800,11},
        {"OnePlus 12",1000,5},
        {"Sony Xperia 5",3000,2}
    };
    
   
    int laptopsAmount = sizeof(laptops) / sizeof(laptops[0]);
    int phonesAmount = sizeof(phones) / sizeof(phones[0]);
    
    printf("enter your balance: \n");
    scanf("%d",&bankAccount);
    printf("l - laptops. \n");
    printf("p - phones. \n");
    scanf(" %c",&menu);
    if(menu == 'l')
    {
        for (int i = 0; i < laptopsAmount; i ++){
            printf("%d. %s, price - %f$, quantity - %d \n", i+1,laptops[i].name,laptops[i].price,laptops[i].quantity );
        }
    }

    if(menu == 'p')
    {
        for (int i = 0; i < phonesAmount; i ++){
            printf("%d. %s, price - %f$, quantity - %d \n", i+1,phones[i].name,phones[i].price,phones[i].quantity);
        }
    }
    

     
}