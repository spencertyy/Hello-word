//
//  NumberConverter.cpp
//  NumberConverter
//
//  Created by YuYao Tu on 9/5/23.
//

#include "NumberConverter.hpp"



int stringToInt (std::string num, int val){
    
    int binary = 0;
    int hex = 0;
    int posIndicator = 1;
    if(num[0] == '-'){
        num = num.substr(1, num.size()-1);
        posIndicator = -1;
    }
    if(val == 10 ){//if is decimal
        int num_int = stoi(num) ;
        //use stoi change string num to int num
        return num_int;
    }
    
    else if(val == 2){//if is binary
        int x = 0;
        for(int i = num.size()-1 ; i>=0 ;i--){
            int digits = num[i] - '0';
            binary+= digits*pow(2, x);
            //use pow get the quadratic.
            x++;//
        }
        if (posIndicator == -1){
            binary = -1 * binary;
            
        }
        return binary;
    }
       
        
    else if(val == 16){//if is hex
        int x = 0;
        for(int i = num.size()-1 ; i>=0 ;i--){
            toupper(num[i]);
            //use toupper() change all the num to capital
            int digits = num[i] - 'A' + 10;
            hex += digits*pow(16, x);
            x++;
        }
        if (posIndicator == -1){
            hex = -1 * hex;
            return hex;
        }
        return hex;
    
        }    else{
            
            return -1;
    }
return 0;
}

        


std::string intToDecimalString (int decimal){
     std::string decimals= std::to_string(decimal);
    return decimals;
}

//Group HW: Number Converter under make by terry.
std::string intToHexadecimalString(int deciInt){
  int i = 0;
  int highExpo = 0;
  int temp;
  int posIndicator = 1;
  std::string hexaStr;
  if(deciInt < 0){
    deciInt = (-1) * deciInt;
    posIndicator = -1;
  }
  while(i >= 0){;
    if(deciInt / pow(16,i) < 16){
      highExpo = i;
      break;
    }
    i++;
  }
  for(int i = highExpo; i >= 0; i--){
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
  }
  if (posIndicator == -1){
    hexaStr = "-" + hexaStr;
  }
  return hexaStr;
}
std::string intToBinaryString(int deciInt){
  int i = 0;
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
