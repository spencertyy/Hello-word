//
//  main.cpp
//  RomanNumerals
//
//  Created by YuYao Tu on 8/24/23.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    int decimal;
    int numeral;
    std::cout<<"Enter decimal number:"<<std::endl;
    std::cin >> decimal;
    std::cout<<"Roman numeral version:"<<std::endl;
    while (decimal>=1000) {
        std::cout<<"M";
        decimal = decimal - 1000;
    }    while (decimal>=900) {
        std::cout<<"CM";
        decimal = decimal - 900;
    } while (decimal>=500) {
        std::cout<<"D";
        decimal = decimal - 500;
    }while (decimal>=400) {
        std::cout<<"CD";
        decimal = decimal - 400;
    }while (decimal>=100) {
        std::cout<<"C";
        decimal = decimal - 100;
    }while (decimal>=90) {
        std::cout<<"XC";
        decimal = decimal - 90;
    }while (decimal>=50) {
        std::cout<<"L";
        decimal = decimal - 50;
    }while (decimal>=40) {
        std::cout<<"XL";
        decimal = decimal - 40;
    }while (decimal>=10) {
        std::cout<<"X";
        decimal = decimal - 10;
    }while (decimal>=9) {
        std::cout<<"IX";
        decimal = decimal - 9;
    }while (decimal>=5) {
        std::cout<<"V";
        decimal = decimal - 5;
    }while (decimal>=4) {
        std::cout<<"IV";
        decimal = decimal - 4;
    }while (decimal>=1) {
        std::cout<<"I";
        decimal = decimal - 1;
    }
    std::cout <<std::endl;
    if(decimal>1){
        std::cout<< "Invalid input" << std::endl;
    }
    return 0;
}
