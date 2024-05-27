#include <stdio.h>

typedef struct {
    char name[50];
    float price;
    int quantity;
    char store;
} Product;

void print_product(Product p) {
    printf("Product: %s, Price: %.2f, Quantity: %d\n", Store: %s, p.name, p.price, p.quantity, p.store);
}

int main() {
    Product p1 = {"Apple", 0.5, 30};
    Product p2 = {"(B)anana", 0.2, 50};

    print_product(p1);
    print_product(p2);

    return 0;
}






