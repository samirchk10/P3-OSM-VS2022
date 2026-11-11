#pragma once

#include <vector>
#include "CamiBase.h"


class CamiSolucio : public CamiBase
{
    public:
        std::vector<Coordinate> getCamiCoords() override;
};
