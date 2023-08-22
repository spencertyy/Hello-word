//
//  main.cpp
//  GiveChange
//
//  Created by YuYao Tu on 8/22/23.
//

#include <iostream>
using namespace std;
int main() {

    int quarters;
    int dimes;
    int nickels;
    int pennies;
    int itemPrice;
    int aountPaid;
    int change;
    
    
    cout << "Enter item price in cents:\n";
    cin >> itemPrice ;
    cout << "Enter amount paid in cents:\n";
    cin >> aountPaid ;
    
    change = aountPaid - itemPrice;
    cout<< "chang= "<< change <<" cents"<< endl;
    
    quarters = change/25;
    cout << "quarters: " << quarters <<endl;
    
    dimes = (change-quarters*25)/10;
    cout << "Dimes:" << dimes << endl;
    
    nickels =  (change-quarters*25-dimes*10)/5;
    cout << "Nickels:" << nickels <<endl;
    
    pennies = (change-quarters*25-dimes*10-nickels*5)/1;
    cout << "Pennies:" << pennies<<endl;
    
    
    
    return 0;
}
