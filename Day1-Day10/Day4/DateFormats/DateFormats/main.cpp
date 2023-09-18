//
//  main.cpp
//  DateFormats
//
//  Created by YuYao Tu on 8/24/23.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
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

    if (std::stoi(mm) <1 || std::stoi(mm)>12 || std::stoi(dd) <1 || std::stoi(dd) >31 || std::stoi(yyyy) <1000|| std::stoi(yyyy) >9999){
        std::cout<<"Invalid date"<<std::endl;
    }
    else{
        
            if(std::stoi(mm) == 1 ){
                mm = "January";
            } else if (std::stoi(mm) ==2){
                mm = "February";
            } else if (std::stoi(mm) == 3){
                mm = "March";
            } else if (std::stoi(mm) == 4){
                mm = "April";
            } else if (std::stoi(mm) == 5){
                mm = "May";
            } else if (std::stoi(mm) == 6){
                mm = "June";
            } else if (std::stoi(mm) == 7){
                mm = "July";
            } else if (std::stoi(mm) == 8){
                mm = "August";
            } else if (std::stoi(mm) == 9){
                mm = "September";
            } else if (std::stoi(mm) == 10){
                mm = "October";
            } else if (std::stoi(mm) == 11){
                mm = "November";
            } else if (std::stoi(mm) == 12){
                mm = "December";
            }
            
            std::cout << mm <<" "<<dd<<","<<yyyy<<std::endl;
        
        
    }


    
    return 0;
}
