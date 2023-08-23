//
//  main.cpp
//  ForLoopPractice
//
//  Created by YuYao Tu on 8/23/23.
//

#include <iostream>
using namespace std;

int main() {
//    Print the numbers from 1 to 10. using for and while loop
    
    cout << "Print the numbers from 1 to 10. using for and while loop "<< endl;
        int x = 1 ;
        int y = 0 ;
        for (int x = 1 ; x<=10; ++x){
            cout << "for:" << x << endl;
        }

        while ( y < 10){
            y++;
            cout << "while:" << y << endl;

        }
    
//     print all the numbers from the first to the second
    int num1;
    int num2;
    cout << "print all the numbers from the first to the second:"<<endl;
    cout << " enter two numbers ";
    cin >> num1 >> num2 ;

    int start;
    int end;

    if (num1 >= num2){
        start = num2;
        end = num1;
    }else {
        start = num1;
        end = num2;

    }
    for (int x = start ; x <= end; x++){
        cout << x << endl;
    }

// Print all the odd numbers between 1 and 20. using (for).
    cout<< "Print all the odd numbers between 1 and 20. using (for)." <<endl;

    for ( int x = 1 ; x <= 20 ; x = x + 2){

        cout << x << endl;
    }

//    Print all the odd numbers between 1 and 20. using (if).
    cout<< "Print all the odd numbers between 1 and 20 :"<<endl;
    for ( int x = 1; x<=20; ++x){
        if ( x % 2 == 1 )
            cout << x <<endl;
    }

//    Ask a user to enter positive numbers to add up.
    int positiveNubers = 0;
    int answer = 0 ;

    while (positiveNubers>= 0) {
        cout << " enter positive numbers to add up " << endl;
        cin >> positiveNubers ;
        answer = answer + positiveNubers ;
    }
    answer = answer - positiveNubers;
    cout << answer <<endl;

    
    //Print a multiplication table for the numbers 1 to 5
    cout << "Print a multiplication table for the numbers 1 to 5" << endl;
    
    for (int i = 1; i<=5 ; i++){
        cout << i <<"x*: ";
        for(int j = 1; j<=5; j++){
            if (i*j <10){
                cout << " " <<i*j << " ";
            }else {
                cout << i*j << " ";
            }
        }
       cout << endl;
    }
    
     
    return 0;
}
