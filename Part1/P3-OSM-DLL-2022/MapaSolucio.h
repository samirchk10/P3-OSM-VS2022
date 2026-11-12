#pragma once

#include <vector>
#include "MapaBase.h"
#include "CamiSolucio.h"

class MapaSolucio : public MapaBase
{
    public:
        MapaSolucio() { m_camins.push_back(new CamiSolucio()); }

        void getPdis(std::vector<PuntDeInteresBase*>& pids) override;
        void getCamins(std::vector<CamiBase*>& camins) override;
        void parsejaXmlElements(std::vector<XmlElement>& xmlElements) override;
    private:
        std::vector<CamiSolucio*> m_camins;
};
