//
//  main.cpp
//  FunctionPractice
//
//  Created by YuYao Tu on 8/25/23.
//

#include <iostream>
#include <cmath>
#include <ctime>
    
//Part 2: Write Your Own Functions

float TheLengthOfTriangle(float a ,float b){

        float a1 = pow(a,2)  ;
        float b1 = pow(b,2) ;
        float c = a1+b1;
        float c1 =  std::sqrt(c);
        return c1 ;
    }

bool isCapitalized(std::string str){
        if(str.length() == 0 )
        {
            return false;
        }

        return str[0]>='A' && str[0]<='Z';
    }


std::string boolToString(bool boolean){
    if ( boolean == 1  ){
        return "True ";
    }
    return "False ";
}

int main(int argc, const char * argv[]){
    
    float rightagle1 =  3 ;
    float rightagle2 = 4 ;
    std::cout << "length of the hypotenuse:"<< TheLengthOfTriangle(rightagle1, rightagle2)<< std::endl;
    
    
    
    std::cout << "enter the a string "<<std::endl;
    std::string str;
    std::cin >> str;
    bool cap = isCapitalized(str);
    std::cout << (cap) <<std::endl;
    
    
    bool bbb = 0;
    std::string z = boolToString(bbb);
    std::cout << z << std::endl;
    
    
    // Practice Calling Functions
    //Part A:
    float rightAngleA = 0,rightAngleB = 0;
    
    std::cout << "enter the two right-angle side lengths of a triangle:\n";
    std::cin >> rightAngleA ;
    std::cin >> rightAngleB ;
    //TheLengthOfTriangle(a,b);
    
    float a1 = pow(rightAngleA,2)  ;
    float a2 = pow(rightAngleB,2) ;
    float triangle = a1+a2;
    float triangleC =  std::sqrt(triangle);
    
    std::cout << "the length of triangle is: " << triangleC << std::endl;
    
    //    Prat B:
    
    double speed;
    double angle;
    
    std::cout << "enter the speed: ";
    std::cin >> speed;
    std::cout << "enter the angle of the speed: ";
    std::cin >> angle;
    
    double x = speed*cos(angle), y = speed*sin(angle);
    std::cout <<"x velocity is : " << x << std::endl<<"y velocity is: " << y <<std::endl;
    
    //Part C:
    
    
    std::time_t result = std::time(nullptr);
    std::cout << std::asctime(std::localtime(&result))
    << result << " seconds since the Epoch\n";
    //The Functions had: 1:time_t 2:time 3:cout 4:asctime 5:localtime.

    return 0;
    
}
