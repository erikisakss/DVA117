#define _CRT_SECURE_NO_WARNINGS
#include"ShoppingList.h"
#include<stdio.h>
#include<stdlib.h> // For dynamic memory (lab 7)
#include<string.h>
#include <stdbool.h>
void addItem(struct ShoppingList *list)
{
    
    getchar();
    int i = list->length;

    if (list->length < 5)
    {
        printf("Add an item: ");
        fgets(list->itemList[i].productName, MAX, stdin);
        list->itemList[i].productName[strcspn(list->itemList[i].productName, "\n")] = '\0';
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

    
    



void printList(struct ShoppingList *list)
{
    if (list->length == 0)
    {
        puts("No items in cart!");
    }

    
    for (int i = 0; i < list->length; i++) {
        printf("%d.  %s   ||    %.2f    ||    %s\n", i + 1, list->itemList[i].productName, list->itemList[i].amount, list->itemList[i].unit);

       
    }



}

void editItem(struct ShoppingList *list)
{
    int editAmount;

    if (list->length == 0)
    {
        puts("No items in cart!");
        
    }

   
    for (int i = 0; i < list->length; i++) {
        printf("%d.  %s   ||    %.2f    ||    %s\n", i + 1, list->itemList[i].productName, list->itemList[i].amount, list->itemList[i].unit);


    }
    do
    {

   
    puts("Select which item to edit: ");
    scanf("%d", &editAmount);
    } while (editAmount > list->length);
    switch (editAmount)
    {
    case 1: 
        printf("Edit amount of %s: ", list->itemList[0].productName);
        do
        {
            scanf("%f", &list->itemList[0].amount);
        } while (noNegativeNumbersAllowed(list->itemList[0].amount) == false); break;

    case 2:
        printf("Edit amount of %s: ", list->itemList[1].productName);
        do
        {
            scanf("%f", &list->itemList[1].amount);
        } while (noNegativeNumbersAllowed(list->itemList[1].amount) == false); break;
    case 3:
        printf("Edit amount of %s: ", list->itemList[2].productName);
        do
        {
            scanf("%f", &list->itemList[2].amount);
        } while (noNegativeNumbersAllowed(list->itemList[2].amount) == false); break;
    case 4:
        printf("Edit amount of %s: ", list->itemList[3].productName);
        do
        {
            scanf("%f", &list->itemList[3].amount);
        } while (noNegativeNumbersAllowed(list->itemList[3].amount) == false); break;
    case 5:
        printf("Edit amount of %s: ", list->itemList[4].productName);
        do
        {
            scanf("%f", &list->itemList[4].amount);
        } while (noNegativeNumbersAllowed(list->itemList[4].amount) == false); break;
    default:
        printf("No negative numbers! Try again:");
        
        break;
    }




}

void removeItem(struct ShoppingList *list)
{

}

/*saveList och loadList implementeras i laboration 7*/
void saveList(struct ShoppingList *list)
{

}

void loadList(struct ShoppingList* list)
{
    
}

bool noNegativeNumbersAllowed(int number) {

    if (number < 0)
    {
        puts("No negative numbers allowed! Try again: ");
        return false;
    }

    return true;



}