//
//  NumberConverter.cpp
//  NumberConverter
//
//  Created by YuYao Tu on 9/5/23.
//

#include "NumberConverter.hpp"
#include <sstream>



int stringToInt (std::string num, int val){
    
    int binary = 0;
    int hex = 0;
    int posIndicator = 1;//posIndicator is used to handle negative numbers (initialized to 1 for positive numbers).
    if(num[0] == '-'){ //if the input string num starts with a minus sign ("-"), it removes the minus sign and sets posIndicator to -1 to indicate a negative number.
        num = num.substr(1, num.size()-1);
        posIndicator = -1;//using if and substr to -handle negative numbers
    }
    if(val == 10 ){//if is decimal
        if (posIndicator < 0) {
            num = "-" + num;
        }
        int num_int = stoi(num) ;
        //use stoi change string num to int num and rerurn
        return num_int;
    }
    
    else if(val == 2){//if is binary
        int x = 0;
        for(int i = num.size()-1 ; i>=0 ;i--){//use for loop run the address with backward
            int digits = num[i] - '0';//use num[i] - '0' get the integer and = to digits
            binary+= digits*pow(2, x); //use digits to pow the 2,x and +binary to =binary
            //use pow get the quadratic.
            x++;
        }
        if (posIndicator == -1){//if posIndicator is -1.then use -1 times binary and = to binary then we will get the negative number.
            binary = -1 * binary;
            
        }
        return binary;
    }
    
    
    else if(val == 16){//if is hex
        int x = 0;
        for(int i = num.size()-1 ; i>=0 ;i--){
            num[i] = toupper(num[i]);
            //use toupper() change all the num to capital
            if(num[i] >= '0' && num[i] <= '9'){//if num[i] is 0 to 9,use num[i] - '0' get the integer and = to digits and pow the digits +hex and = to hex
                int digits = num[i] - '0';
                hex += digits*pow(16, x);
                x++;
            }
            else{//if digits is a to f, use -'a'+10 get the number and pow same as before
                int digits = num[i] - 'A' + 10;
                hex += digits*pow(16, x);
                x++;
            }
        }
        if (posIndicator == -1){//if posIndicator is -1.then use -1 times hex and = to hex then we will get the negative number
            hex = -1 * hex;
            return hex;
        }
        return hex;
    }
    return 0;
}

        


std::string intToDecimalString (int decimal){
     std::string decimals= std::to_string(decimal);
    return decimals;//just use to_string function retrun decimals
}

//Group HW: Number Converter under make by terry.
std::string intToHexadecimalString(int deciInt){
  int i = 0;
  int highExpo = 0;
  int temp;
  int posIndicator = 1;
  std::string hexaStr;
  if(deciInt < 0){
    deciInt = (-1) * deciInt; //把负数变成正数Turn negative numbers into positive numbers
    posIndicator = -1;
  }
  while(i >= 0){;//找到转化成16进制后的最高次数 Find the highest number of times converted to hexadecimal
    if(deciInt / pow(16,i) < 16){
      highExpo = i;
      break;
    }
    i++;
  }
    
  for(int i = highExpo; i >= 0; i--){
//用deciInt除以pow i，得到temp，然后在用temp*pow i 减去deciInt，循环最后把每一个temp并在一起
// Divide deciInt by pow i to get temp, then subtract（-） deciInt from temp*pow i and loop each temp together
    temp = deciInt / pow(16, i);
    deciInt -= temp * pow(16, i);
    if(temp == 10){
      hexaStr += "A";
    }
    else if(temp == 11){
      hexaStr += "B";
    }
    else if(temp == 12){
      hexaStr += "C";
    }
    else if(temp == 13){
      hexaStr += "D";
    }
    else if(temp == 14){
      hexaStr += "E";
    }
    else if(temp == 15){
      hexaStr += "F";
    }
    else{
      hexaStr += std::to_string(temp);
    }
  }//如果是负数前面加一个“-”号If it is a negative number, add a "-" before it
  if (posIndicator == -1){
    hexaStr = "-" + hexaStr;
  }
  return hexaStr;
}
std::string intToBinaryString(int deciInt){
  int i = 0;//same as intToHexadecimalString just change 16 to 2.
  int highExpo = 0;
  int temp;
  int posIndicator = 1;
  std::string biStr;
  if(deciInt < 0){
    deciInt = (-1) * deciInt;
    posIndicator = -1;
  }
  while(i >= 0){;
    if(deciInt / pow(2,i) < 2){
      highExpo = i;
      break;
    }
    i++;
  }
  for(int i = highExpo; i >= 0; i--){
    temp = deciInt / pow(2, i);
    deciInt -= temp * pow(2, i);
    biStr += std::to_string(temp);
  }
  if (posIndicator == -1){
    biStr = "-" + biStr;
  }
  return biStr;
}








//
//std::string intToHexadecimalString(int Hexadecimal){
//    int hex = 0;
//    int i;
//    while (i>=0) {
//        if(Hexadecimal/pow(16,i)<16){
//            break;
//        }
//    }
//    for(int a=i;i>=0;a++){
//        int x=Hexadecimal/pow(16,a);
//        int s= Hexadecimal-a*i;
//        hex = s and x;
//    }
//
//    if(Hexadecimal == 10){
//        return "A";
//    }else if(Hexadecimal == 11){
//        return "B";
//    }else if(Hexadecimal == 12){
//        return "C";
//    }else if(Hexadecimal == 13){
//        return "D";
//    }else if(Hexadecimal == 14){
//        return "E";
//    }else if(Hexadecimal == 15){
//        return "F";
//    }
//    std::string Hexadecimals= std::to_string(Hexadecimal);
//
//    return Hexadecimals;
//}
