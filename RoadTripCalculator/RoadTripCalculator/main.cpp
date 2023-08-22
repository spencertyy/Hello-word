//
//  main.cpp
//  RoadTripCalculator
//
//  Created by YuYao Tu on 8/22/23.
//

#include <iostream>
using namespace std;

int main(){
    
    float distance;
    float efficiency;
    float cost;
    
    
    cout <<"The driving distance, in (whole) miles\n" ;
    cin >> distance;
    
    cout << "The vehicle's miles per gallon efficiency\n";
    cin  >>efficiency;
    
    cout <<  "The cost of gas in dollars per gallon \n";
    cin >> cost ;
    
   
    cout<<"The total cost of trip: " << ( distance / efficiency) * cost << endl;
    
    
    
    

    return 0;
}
