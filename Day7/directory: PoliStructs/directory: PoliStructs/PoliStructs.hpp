//
//  PoliStructs.hpp
//  directory: PoliStructs
//
//  Created by YuYao Tu on 8/29/23.
//

#ifndef PoliStructs_hpp
#define PoliStructs_hpp

#include <stdio.h>
#include <string>
#include <vector>


struct polistructs{
    std::string name;
    std::string partyAffiliation;
    std::string isState;
};

std::vector<polistructs> Javacans(std::vector<polistructs>politicians);
std::vector<polistructs> FederalCplusers(std::vector<polistructs>politicians);



#endif /* PoliStructs_hpp */
