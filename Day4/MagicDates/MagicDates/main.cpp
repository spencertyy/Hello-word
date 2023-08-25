//
//  main.cpp
//  MagicDates
//
//  Created by YuYao Tu on 8/24/23.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::string mm = "01";
    std::string dd = "01";
    std::string yyyy = "1000";
    std::string date = mm + dd + yyyy;
    
    std::cout << "Enter a date（mm/dd/yyyy):\n";
    std::cin >> date;
    
    long mm1 = date.find("/",0);
    mm = date.substr(0,mm1);
    
    long dd1 = date.find("/",mm1+1);
    dd = date.substr(mm1+1,dd1-mm1-1);
    
    yyyy = date.substr(dd1+1);
    std::string yyyy1 = date.substr(dd1+3,2);
    
    if (std::stoi(mm) <1 || std::stoi(mm)>12 || std::stoi(dd) <1 || std::stoi(dd) >31 || std::stoi(yyyy) <1000|| std::stoi(yyyy) >9999){
        std::cout<<"Invalid date"<<std::endl;
    }else
        
        if( std::stoi(mm) * std::stoi(dd)== std::stoi(yyyy1) ){
            std:: cout<< date << ":IS  a magic date"<< std::endl;
        } else{
            std:: cout<< date << ":is NOT a magic date"<< std::endl;
        }
        
        
        return 0;
    }
