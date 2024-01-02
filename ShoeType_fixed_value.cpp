/******************************************************************************
                              Coded by WanZ
                  Struct Definition of a type name ShoeType
*******************************************************************************/

#include <iostream>

using namespace std;

struct ShoeType {
    string style;
    double price;
};

int main()
{
    
    ShoeType shoe1;
    ShoeType shoes[4] = {shoe1};
    shoe1.style = "A";
    shoe1.price = 9.99;
    
    ShoeType shoe2;
    shoe2.style = "A";
    shoe2.price = 1.11;
    
    ShoeType shoe3;
    shoe3.style = "B";
    shoe3.price = 8.88;
    
    ShoeType shoe4;
    shoe4.style = "C";
    shoe4.price = 7.77;
    
    cout<<"Shoe 1 style = " << shoe1.style << "\nShoe 1 price = $" << shoe1.price << "\n\n";
    cout<<"Shoe 2 style = " << shoe2.style << "\nShoe 2 price = $" << shoe2.price << "\n\n";
    cout<<"Shoe 3 style = " << shoe3.style << "\nShoe 3 price = $" << shoe3.price << "\n\n";
    cout<<"Shoe 4 style = " << shoe4.style << "\nShoe 4 price = $" << shoe4.price << "\n\n";

    return 0;
}

