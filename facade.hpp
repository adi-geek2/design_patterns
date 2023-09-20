#include <iostream>
#include <string>

//Local includes
#include "armor.h"

class ArmorBuilderFacade{
    public:
        ArmorBuilderFacade(){
            heavyArmor_ = new HeavyArmor();
            mediumArmor_ = new MediumArmor();
            lightArmor_ = new LightArmor();
        }

        ~ArmorBuilderFacade(){
            delete heavyArmor_;
            delete mediumArmor_;
            delete lightArmor_;
        }

        std::string GetHeavyArmor() {return heavyArmor_->ArmorType;}
        std::string GetMediumArmor() {return mediumArmor_->ArmorType;}
        std::string GetLightArmor() {return lightArmor_->ArmorType;}

    private:
        HeavyArmor *heavyArmor_;
        MediumArmor *mediumArmor_;
        LightArmor *lightArmor_;
    
};
