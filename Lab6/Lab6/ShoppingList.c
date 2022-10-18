#define _CRT_SECURE_NO_WARNINGS
#include"ShoppingList.h"
#include<stdio.h>
#include<stdlib.h> // For dynamic memory (lab 7)
#include<string.h>
#include <stdbool.h>
void addItem(struct ShoppingList* list)
{

    getchar();
    int i = list->length;
    if (list->length < 5)
    {
        printf("Add an item: ");
        fgets(list->itemList[i].productName, MAX, stdin);
        list->itemList[i].productName[strcspn(list->itemList[i].productName, "\n")]
            = '\0';
        printf("Amount: ");
        do
        {
            scanf("%f", &list->itemList[i].amount);
        } while (noNegativeNumbersAllowed(list->itemList[i].amount) == false);
        getchar();
        printf("Unit: ");
        fgets(list->itemList[i].unit, MAX, stdin);
        list->itemList[i].unit[strcspn(list->itemList[i].unit, "\n")] = '\0';
        list->length = list->length + 1;
    }

    if (list->length == 5)
    {
        puts("Shopping Cart Full!");
    }

}


void printList(struct ShoppingList* list)
{
    if (list->length == 0)
    {
        printf("No items in cart!");
    }

    for (int i = 0; i < list->length; i++) {
        printf("%d.  %-20s\t %.2f\t %s\n", i + 1, list->itemList[i].productName,
            list->itemList[i].amount, list->itemList[i].unit);


    }
}
void editItem(struct ShoppingList* list)
{
    int editAmount;
    if (list->length == 0)
    {
        printf("No items in cart!");

    }

    for (int i = 0; i < list->length; i++) {
        printf("%d.  %-20s\t %.2f\t %s\n", i + 1, list->itemList[i].productName,
            list->itemList[i].amount, list->itemList[i].unit);
    }
    if (list->length > 0)
    {
        do
        {
            printf("Select which item to edit: ");
            scanf("%d", &editAmount);
            if (list->length < editAmount || editAmount < 0)
            {
                printf("Number %d does not exist in the list!\n", editAmount);
            }
        } while (editAmount > list->length || editAmount < 0);

        do
        {
            printf("Edit amount of %s: ", list->itemList[editAmount -
                1].productName);
            scanf("%f", &list->itemList[editAmount - 1].amount);
        } while (noNegativeNumbersAllowed(list->itemList[editAmount - 1].amount) ==
            false);
    }
}
void removeItem(struct ShoppingList* list)
{
    int removeItem;
    if (list->length == 0)
    {
        puts("No items in cart!");
    }
    for (int i = 0; i < list->length; i++) {
        printf("%d.  %-20s\t %.2f\t %s\n", i + 1, list->itemList[i].productName,
            list->itemList[i].amount, list->itemList[i].unit);
    }
    if (list->length > 0)
    {
//Do-While kör tills användaren matar in ett positivt tal, talet måste vara inom intervallet
        
            do
            {
                printf("Select item to remove: ");
                scanf_s("%d", &removeItem);
                if (list->length < removeItem || removeItem <= 0)
                {
                    printf("Number %d does not exist in the list!\n", removeItem);
                }
            } while (removeItem <= 0 || removeItem > list->length);
            //Kopierar över alla värden så  länge värdet inte  är 5 eller större  än list-> length, minskar sedan length med 1
                
                    if (removeItem != 5 || removeItem < list->length)
                    {
                        for (int i = removeItem; i < list->length; i++)
                        {
                            list->itemList[i - 1] = list->itemList[i];
                        }
                        list->length = list->length - 1;
                    }
                //Om värdet  är 5 minskar length med 1
                if (removeItem == 5)
                {
                    list->length = list->length - 1;
                }
    }
}
/*saveList och loadList implementeras i laboration 7*/
void saveList(struct ShoppingList* list)
{
}
void loadList(struct ShoppingList* list)
{

}
//Kollar om talet  är negativt�
bool noNegativeNumbersAllowed(float number) {
    if (number < 0)
    {
        puts("No negative numbers allowed! Try again: ");
        return false;
    }
    return true;


}