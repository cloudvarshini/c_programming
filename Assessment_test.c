#include<stdio.h>

int main()

{
    int quan,price,actual_price;
    int final_price,discount_price;
    printf("Enter the quantity that you have purchased:");
    scanf("%d",&quan);
    printf("Enter the price per item:");
    scanf("%d",&price);
    if (quan >= 500)
    {
        actual_price = quan * price;

        discount_price = ((actual_price/100)*10);

        printf("Your discount price is %d rupees.\n",discount_price);

        final_price = actual_price - discount_price;

        printf("You are requested to pay %d rupees.\n",final_price);


    }

    else
    {
        actual_price = quan * price;

        printf("You are requested to pay %d rupees.\n",actual_price);
    }
    return 0;
}
