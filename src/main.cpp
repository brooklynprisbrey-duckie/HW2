//TODO: add the appropriate include statements (iostream and string)

//TODO: create the main function
{
    //TODO: make three variables: itemName (type string), price (type double), and quantity (type int)

    const double TAX_RATE = 0.07;

    std::cout << "Enter item name: ";
    std::cin >> itemName;

    //TODO: print the following to the screen: "Enter price per item: "
    //TODO: have the user enter the price

    //TODO: print the following to the screen: "Enter quantity: "
    //TODO: have the user enter the quantity

    //TODO: Set values to the subtotal, tax, and total. The subtotal would be the total price before taxes. The tax would be the subtotal multiplied by the tax rate, and 
    //      the total would be the total plus the tax

    // Output
    std::cout << "\n----- RECEIPT -----\n";
    std::cout << "Item: " << itemName << std::endl;
    std::cout << "Price: $" << price << std::endl;
    std::cout << "Quantity: " << quantity << std::endl;
    std::cout << "Subtotal: $" << subtotal << std::endl;
    std::cout << "Tax (7%): $" << tax << std::endl;
    std::cout << "Total: $" << total << std::endl;
    std::cout << "-------------------\n";

//TODO: remember the return 0!
}
