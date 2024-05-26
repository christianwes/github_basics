#include <stdio.h>

typedef struct {
    char name[50];
    float price;
    int quantity;
} Product;

void print_product(Product p) {
    printf("Product: %s, Price: %.2f, Quantity: %d, Unit Price: %.2f\n", p.name, p.price, p.quantity, calculate_unit_price(p.price * p.quantity, p.quantity));
}

int main() {
    Product p1 = {"Apple", 0.5, 30};
    Product p2 = {"Banana", 0.2, 50};

    print_product(p1);
    print_product(p2);

    return 0;
}
