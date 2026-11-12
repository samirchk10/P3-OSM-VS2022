#pragma once

#include <vector>
#include "CamiBase.h"


class CamiSolucio : public CamiBase
{
    public:
        CamiSolucio() {}
        CamiSolucio(const std::vector<Coordinate>& coords) : m_coords(coords) {}

        std::vector<Coordinate> getCamiCoords() override;
    private:
        std::vector<Coordinate> m_coords;
};
