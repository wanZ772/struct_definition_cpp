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
    string style;
    double price;
    ShoeType shoe1,shoe2,shoe3,shoe4;
    ShoeType shoes[4] = {shoe1,shoe2,shoe3,shoe4};
    for (int shoe_id = 0; shoe_id < 4; shoe_id++)   {
        cout << "Enter shoe " << shoe_id + 1 << " style: ";
        cin >> style;
        cout << "Enter Shoe " << shoe_id + 1 << " price: "; 
        cin >> price;
        shoes[shoe_id].style = style;
        shoes[shoe_id].price = price;
    }
    cout << "\n\n\n";
    for (int shoe_id = 0; shoe_id<4; shoe_id++) {
        cout << "Shoe" << shoe_id + 1 << " style = " << shoes[shoe_id].style;
        cout << "\nShoe" << shoe_id + 1 << " price = $" << shoes[shoe_id].price << "\n\n";
    }

    return 0;
}
