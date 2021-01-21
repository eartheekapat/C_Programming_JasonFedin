#include <stdlib.h>
#include <stdio.h>

struct item {
    char *itemName;
    int quantity;
    float price;
    float amount;
};

void readItem (struct item * ptr);
void printItem (struct item * ptr);

int main () {
    struct item item_1;
    item_1.itemName = malloc(30 * sizeof(char));
    struct item * item_1_ptr = &item_1;

    readItem(item_1_ptr);

    printItem(item_1_ptr);

    return 0;
}

void printItem (struct item * ptr) {
    printf("product name \"%s\" with quantity %d, price %f and amount %f\n", ptr->itemName, ptr->quantity, ptr->price, ptr->amount);
}

void readItem (struct item * ptr) {
    printf("Please input the product name : ");
    scanf("%s", ptr->itemName);
    printf("Please input price : ");
    scanf("%f", &ptr->price);
    printf("Please input the quantity : ");
    scanf("%d", &ptr->quantity);

    ptr->amount = ptr->price * ptr->quantity;
}