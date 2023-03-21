#include <iostream>
#include "EngineInfo.h"

int main()
{
    engine::EngineInfo engine1("qwe", 4000, 299.9, "A95", "Wolkswagen");
    engine::EngineInfo engine2("qwe", 5000, 299.9, "A95E", "BMW");
    engine::EngineInfo engine3("qwe", 6000, 299.9, "B90", "Renault");

    engine::printEngineInfo(engine1);
    std::cout << "\n";
    engine::printEngineInfo(engine2);
    std::cout << "\n";
    engine::printEngineInfo(engine3);
}

