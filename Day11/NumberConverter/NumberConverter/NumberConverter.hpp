//
//  NumberConverter.hpp
//  NumberConverter
//
//  Created by YuYao Tu on 9/5/23.
//

#ifndef NumberConverter_hpp
#define NumberConverter_hpp

#include <stdio.h>
#include <string>
int stringToInt (std::string num, int val);
std::string intToDecimalString (int decimal);
std::string intToHexadecimalString(int deciInt);
std::string intToBinaryString(int deciInt);

#endif /* NumberConverter_hpp */
