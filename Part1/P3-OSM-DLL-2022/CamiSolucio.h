#pragma once

#include <vector>
#include "CamiBase.h"


class CamiSolucio : public CamiBase
{
    std::vector<Coordinate> getCamiCoords() override;
};
