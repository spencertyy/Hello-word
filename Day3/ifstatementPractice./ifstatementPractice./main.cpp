//
//  main.cpp
//  ifstatementPractice.
//
//  Created by YuYao Tu on 8/22/23.
//

#include <iostream>
using namespace::std;
int main() {
//IF STATEMENTS: PART 1/Created by YuYao Tu
        int votingAge = 0;
        cout << "How old are you?" << endl;
        cin >> votingAge;
        //see the user is old enough to vote
        if (votingAge >=18){
            cout<< "congratulation you can vote!"<<endl;
        } else{
            cout <<"sorry to young to vote!"<<endl;
        }

        //see the user is old enough to run for senate.
        if (votingAge >=30){
            cout<< "congratulation you can run for senate!"<<endl;
        } else{
            cout <<"sorry to young for run senate!"<<endl;
        }

        //print which generation the user is a pary of
        if (votingAge >= 80){
            cout << "greatest generation\n";
        } else if ( votingAge >=60){
                cout << "baby boomers"<<endl;
        }else if ( votingAge >=40){
            cout << "generation X"<<endl;
        } else if(votingAge >=20 ){
            cout << "millennial"<<endl;
        } else {
            cout << "ikid"<<endl;
        }

    
    //IF STATEMENTS: PART 2/Created by YuYao Tu
//    char weekday;
//    char holiday;
//    char haveChildren;
//
//
//    cout<< " Do you have children (Y or N to answer)"<<endl;
//    cin >> haveChildren;
//    cout << "It's a weekday? (Y or N to answer)"<<endl;
//    cin >> weekday;
//    cout << " It's a holiday? (Y or N to answer)"<<endl;
//    cin >> holiday;
//
//
//    if (haveChildren == 'Y' ){
//        cout << "wake up" << endl;
//    }
//
//    else if (holiday == 'N' && weekday == 'Y'){
//
//        cout <<" wake up" <<endl;
//    }
//        else{
//            cout <<"sleep late "<< endl;
//        }

    
        
        
    return 0;
}




