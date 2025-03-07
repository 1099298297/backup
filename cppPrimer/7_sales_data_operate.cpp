#include "7_sales_data.h"
#include <iostream>
using namespace std;

int main(){
    Sales_data data1, data2;
    double price = 0;
    cin >> data1.units_sold >> price;
    data1.renenue = data1.units_sold * price;
    cout << data1.renenue;
    return 0;
}
