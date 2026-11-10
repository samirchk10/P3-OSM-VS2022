#pragma once

#include <string>
#include "PuntDeInteresBase.h"

class PuntDeInteresRestaurantSolucio : public PuntDeInteresBase
{
    public:
        PuntDeInteresRestaurantSolucio(Coordinate coordenada, const std::string& nom, const std::string& cuisine,
            const std::string& wheelchair) :
            PuntDeInteresBase(coordenada, nom), m_cuisine(cuisine), m_wheelchair(wheelchair) {}

        std::string getName() override;
        unsigned int getColor() override;
    private:
        std::string m_cuisine;
        std::string m_wheelchair;

};
