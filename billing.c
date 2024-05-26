#include <stdio.h>

typedef struct {
    char name[50];
    float price;
    int quantity;
} Product;

float calculate_total_price(Product p) {
    return p.price * p.quantity;
}

void add_product(Product products[], int *count, char *name, float price, int quantity) {
    Product new_product;
    strcpy(new_product.name, name);
    new_product.price = price;
    new_product.quantity = quantity;
    products[(*count)++] = new_product;
}

void list_products(Product products[], int count) {
    for (int i = 0; i < count; i++) {
        printf("Product: %s, Total Price: %.2f\n", products[i].name, calculate_total_price(products[i]));
    }
}