#define _CRT_SECURE_NO_WARNINGS
#include "ShoppingList.h"
#include <stdio.h>
#include<stdbool.h>

int main(void)
{
    struct ShoppingList shoppingList;
    shoppingList.length = 0; // The shopping list is empty at the start
    shoppingList.itemList = NULL;
    shoppingList.RecipeName[0] = '\0'; //EXAMINATION
    shoppingList.Portioner = 0;

    int option;

    do
    {
        printf("\n\nWelcome to the shopping list manager!\n");
        printf("=====================================\n\n");

        printf("1. Add an item\n");
        printf("2. Display the shopping list\n");
        //EXAMINATION
        printf("3. Change recipe name\n");
        printf("4. Scale Recipe\n");
        printf("5. Remove an item\n");
        printf("6. Change an item\n");
        printf("7. Save list\n"); 
        printf("8. Load list\n"); 
        printf("9. Exit\n");

        printf("What do you want to do? ");
        scanf("%d", &option);

        switch (option)
        {
        case 1: addItem(&shoppingList); break;
        case 2: printList(&shoppingList); break;
        //EXAMINATION
        case 3: ChangeRecipeName(&shoppingList); break;
        case 4: scaleRecipe(&shoppingList); break;
        case 5: removeItem(&shoppingList); break;
        case 6: editItem(&shoppingList); break;
        case 7: saveList(&shoppingList); break; 
        case 8: loadList(&shoppingList); break; 
        case 9: break;
        default:
            printf("Please enter a number between 1 and 7");
        }
    } while (option != 9);

    return 0;
}

