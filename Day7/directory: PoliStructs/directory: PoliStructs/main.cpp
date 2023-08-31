//
//  main.cpp
//  directory: PoliStructs
//
//  Created by YuYao Tu on 8/29/23.
//

#include <iostream>
#include "PoliStructs.hpp"

int main() {

    
    polistructs p1 {"Lisa" , "Javacans", "State"};
    polistructs p2 {"Anna" , "Cplusers", "Federal"};
    polistructs p3 {"Terry" , "Javacans", "State"};
    polistructs p4 {"Tina" , "Cplusers", "State"};
    polistructs p5 {"Spencer" , "Javacans", "Federal"};
    std::vector<polistructs> ps;
    ps.push_back(p1);
    ps.push_back(p2);
    ps.push_back(p3);
    ps.push_back(p4);
    ps.push_back(p5);
    
    std::vector<polistructs> js = Javacans(ps);
    for(polistructs j : js){
        std::cout << "Javacans we have:"<< j.name << "\n";
    }

    std::vector<polistructs> FCs = FederalCplusers(ps);
    for(polistructs FC : FCs){
        std::cout << "Federal Cplusers we have:" << FC.name << "\n";
    }
       
    std::cout << "\n";
    return 0;
}
