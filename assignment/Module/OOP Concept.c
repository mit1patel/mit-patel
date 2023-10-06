//#include <stdio.h>
//// Define a structure to represent food items
//	struct FoodItem 
//{
//    char name[50];
//    float price;
//};
//
//// Function to display the available food items
//void displayMenu(struct FoodItem menu[], int itemCount) 
//{
//	int i;
//    printf("Welcome to Apna Restaurant!\n");
//    printf("Here are the available food items:\n");
//    for (i = 0; i < itemCount; i++) 
//	{
//        printf("%d. %s: %.2f\n", i + 1, menu[i].name, menu[i].price);
//    }
//}
//
//int main() 
//{
//    // Define an array of food items and their prices
//    struct FoodItem menu[] = 
//	{
//        {"Burger",100},
//        {"Pizza",220},
//        {"Pasta",90},
//        {"Salad",70},
//        {"Soda",45}
//    };
//    
//
//    int itemCount = sizeof(menu) / sizeof(menu[0]);
//
//    // Initialize variables to keep track of the customer's order and total cost
//    int order[5] = {0}; // Array to store quantities ordered for each item
//    float totalCost = 0.0;
//
//    // Display the available food items to the user
//    displayMenu(menu, itemCount);
//
//    while (1) 
//	{
//        int choice;
//        // Ask the user to choose a food item by numeric index
//        printf("Enter the number of the food item you'd like to order (1-%d): ", itemCount);
//        scanf("%d", &choice);
//
//        if (choice >= 1 && choice <= itemCount) 
//		{
//            int quantity;
//            // Ask for the quantity of the selected item
//            printf("How many %ss would you like to order? ", menu[choice - 1].name);
//            scanf("%d", &quantity);
//
//            // Calculate the cost of the selected items and add it to the total cost
//            order[choice - 1] += quantity;
//            totalCost += menu[choice - 1].price * quantity;
//
//            // Ask if the user wants to order more items
//            char moreItems[3];
//            printf("Do you want to order more items? (yes/no): ");
//            scanf("%s", moreItems);
//
//            if (strcmp(moreItems, "no") == 0) 
//			{
//                break;
//            }
//        } 
//		else 
//		{
//            printf("Invalid choice. Please enter a number between 1 and %d.\n", itemCount);
//        }
//    }
//
//    // Display the final total bill to the user
//    printf("\nThank you for your order!\n");
//    printf("Your total bill is:%.2f\n", totalCost);
//
//}

#include <stdio.h>
#include <string.h>

// Define a structure to represent food items
struct FoodItem 
{
    char name[50];
    float price;
};

// Define a function to display the available food items
    void displayMenu(struct FoodItem menu[], int itemCount) 
{
    	int i;
        printf("Welcome to Apna Restaurant!\n");
        printf("Here are the available food items:\n");
        for (i = 0; i < itemCount; i++) 
    {
        printf("%s: %.2f\n", menu[i].name, menu[i].price);
    }
}

int main() 
{
    // Define an array of food items and their prices
    struct FoodItem menu[] = 
    {
        {"Burger",100},
        {"Pizza",200},
        {"Pasta",90},
        {"Salad",110},
        {"Soda",45}
    };
    
    int itemCount = sizeof(menu) / sizeof(menu[0]);

    // Initialize an array to store the customer's order
    struct FoodItem customer_order[100];
    int order_count = 0;

    // Display the available food items to the user
    displayMenu(menu, itemCount);

    while (1) 
    {
        // Ask the user to choose a food item
        char choice[50];
        printf("Please enter the name of the food item you'd like to order: ");
        scanf("%s", choice);

        // Check if the entered item is in the menu
        int i;
        int item_index = -1;
        for (i = 0; i < itemCount; i++)
		 {
            if (strcmp(choice, menu[i].name) == 0) 
			{
                item_index = i;
                break;
            }
        }

        if (item_index != -1) 
		{
            int quantity;
            printf("How many %ss would you like to order? ", choice);
            scanf("%d", &quantity);

            // Add the selected item and quantity to the customer's order
            strcpy(customer_order[order_count].name, choice);
            customer_order[order_count].price = menu[item_index].price;
            order_count++;

            // Calculate the total cost of the customer's order
            int i;
			float total_cost = 0.0;
            for (i = 0; i < order_count; i++) 
			{
                total_cost += customer_order[i].price * quantity;
            }

            printf("%s added to your order. Your current total is: %.2f\n", choice, total_cost);

            // Ask if the user wants to order more items
            char more_items[3];
            printf("Would you like to order more items? (yes/no): ");
            scanf("%s", more_items);

            if (strcmp(more_items, "no") == 0) {
                break;
            }
        } 
		else 
		{
            printf("Invalid item. Please choose from the available food items.\n");
        }
    }

    // Calculate the final total bill
    int i;
    float final_total = 0.0;
    for (i = 0; i < order_count; i++) {
        final_total += customer_order[i].price;
    }

    // Display the final total bill to the user
    {
    	int i;
    printf("\nThank you for your order!\n");
    printf("Here is your final total bill:\n");
    for (i = 0; i < order_count; i++) 
	{
        printf("%s %d: %.2f\n", customer_order[i].name, order_count, customer_order[i].price * order_count);
    }
    printf("Total: %.2f\n", final_total);
}
}

