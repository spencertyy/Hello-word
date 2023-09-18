//
//  main.cpp
//  GiveChange
//
//  Created by YuYao Tu on 8/22/23.
//

#include <iostream>
using namespace std;
int main() {
    
    int quarters,dimes,nickels,pennies,itemPrice,amountPaid,change;
    
    
    cout << "Enter item price in cents:\n";
    cin >> itemPrice ;
    cout << "Enter amount paid in cents:\n";
    cin >> amountPaid ;
    
    change = amountPaid - itemPrice;
    cout << "chang= "<< change <<" cents"<< endl;
    
    quarters = change/25;
    cout << "quarters: " << quarters <<endl;
    change %= 25;
    
    dimes = change / 10;
    cout << "Dimes:" << dimes << endl;
    change %= 10;
    
    nickels =  change / 5;
    cout << "Nickels:" << nickels <<endl;
    change %= 5;
    
    pennies = change / 1;
    cout << "Pennies:" << pennies << endl;
    
    
    
    return 0;
}
