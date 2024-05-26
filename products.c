#include <stdio.h>

typedef struct {
    char name[50];
    float price;
    int quantity;
} Product;

void print_product(Product p) {
    printf("Product: %s, Price: %.2f, Quantity: %d, Unit Price: %.2f\n", p.name, p.price, p.quantity, calculate_unit_price(p.price * p.quantity, p.quantity));
}

// Función que calcula el valor total del inventario para un producto aplicando descuentos por cantidad.
float calculate_inventory_value(Product p) {
    float discount = 0.0;

    // Aplicar descuentos según la cantidad.
    if (p.quantity > 100) {
        discount = 0.10;  // 10% de descuento si la cantidad es mayor a 100
    } else if (p.quantity > 50) {
        discount = 0.05;  // 5% de descuento si la cantidad es mayor a 50
    }

    // Calcular el valor total con el descuento aplicado.
    float total_value = p.price * p.quantity;
    total_value = total_value - (total_value * discount);
    
    return total_value;
}

int main() {
    Product p1 = {"Apple", 0.5, 30};
    Product p2 = {"Banana", 0.2, 50};

    print_product(p1);
    print_product(p2);

    return 0;
}






