#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main (){
    string itemName = "test";
    double price = 0.0;
    int quantity = 0;
    const double taxRate = 0.07;

    cout << "Enter item name: ";
    getline(cin, itemName); //allows you to enter spaces, ex: "Cat Yacht"

    cout << "Enter price per item: ";
    cin >> price;

    cout << "Enter quantity: ";
    cin >> quantity;
        
    double subtotal = price * quantity;
    double tax = subtotal * taxRate;
    double total = subtotal + tax;

    // Output
    cout << "\n----- RECEIPT -----\n";
    cout << "Item: " << itemName << endl;
    cout << "Price: $" << price << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Tax (7%): $" << tax << endl;
    cout << "Total: $" << total << endl;
    cout << "-------------------\n";
    return 0;
}
