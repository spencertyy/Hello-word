//
//  main.cpp
//  NumberConverter
//
//  Created by YuYao Tu on 9/5/23.
//

#include <iostream>
#include <string>
#include "NumberConverter.hpp"

int main(int argc, const char * argv[]) {

    
    int value = stringToInt ("99" , 10 );
    std::cout<< value <<std::endl;
    
    int value2 = stringToInt( "1100", 2 );
    std::cout<< value2 <<std::endl;

    int value3 = stringToInt( "FF", 16 );
    std::cout<< value3 <<std::endl;

    std::string decimals = intToDecimalString( 10 );
    std::cout<<decimals<<std::endl;
    
    std::string Hexadecimals= intToHexadecimalString(-10);
    std::cout<<Hexadecimals<<std::endl;
    std::string biStr = intToBinaryString (10);
    std::cout<<biStr<<std::endl;
    return 0;
}
