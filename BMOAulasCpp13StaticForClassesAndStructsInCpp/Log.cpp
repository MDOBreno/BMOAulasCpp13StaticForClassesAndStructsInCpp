//
//  Log.cpp
//  BMOAulasCpp13StaticForClassesAndStructsInCpp
//
//  Created by Breno Medeiros on 06/06/21.
//

#include <iostream>
#include "Log.hpp"



void InitLog() {
    Log("Inicializar Log");
}

void Log(const char* mensagem) {
    std::cout << mensagem << std::endl;
}
