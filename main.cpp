#include "facade.hpp"
#include <iostream>

int main(int argc, char const *argv[])
{
    //Call facade
    ArmorBuilderFacade abf;

    std::cout << abf.GetHeavyArmor() << std:: endl;
    std::cout << abf.GetMediumArmor() << std:: endl;
    std::cout << abf.GetLightArmor() << std:: endl;

    return 0;
}
