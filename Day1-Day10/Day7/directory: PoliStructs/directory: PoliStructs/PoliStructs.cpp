//
//  PoliStructs.cpp
//  directory: PoliStructs
//
//  Created by YuYao Tu on 8/29/23.
//

#include "PoliStructs.hpp"

std::vector<polistructs> Javacans(std::vector<polistructs>politicians)
{
    std::vector<polistructs> reseult;
    for(int i = 0; i< politicians.size(); i++) {
        if(politicians[i].partyAffiliation == "Javacans") {
            reseult.push_back(politicians[i]);
        }
    }
    return reseult;
    // initialize result std::vector<polistructs> ( emoty )
    
    // loop over politicians
        // if a politician' party afflication is javacans
        // yes => push back this politician to result vector
    
    // return result vector
}
std::vector<polistructs> FederalCplusers(std::vector<polistructs>politicians){
    
    std::vector<polistructs> reseult;
    for(int i = 0; i< politicians.size(); i++) {
        if(politicians[i].isState == "Federal" && politicians[i].partyAffiliation == "Cplusers") {
            reseult.push_back(politicians[i]);
        }
    }
    return reseult;

        }

