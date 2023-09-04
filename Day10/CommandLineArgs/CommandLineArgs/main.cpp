//
//  main.cpp
//  CommandLineArgs
//
//  Created by YuYao Tu on 9/1/23.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    for (int i = 0; i < argc; i++){
        std::cout << "argc[" << i << "]"<< std::endl;
        std::cout << argv[i] << std::endl;
    }
 
    return 0;
}
