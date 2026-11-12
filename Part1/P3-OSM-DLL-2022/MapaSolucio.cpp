#include "pch.h"
#include "MapaSolucio.h"

void MapaSolucio::getPdis(std::vector<PuntDeInteresBase*>& pids)
{
 // Zaid taasca 5
}

void MapaSolucio::getCamins(std::vector<CamiBase*>& camins)
{
    for (int i = 0; i < m_camins.size(); i++)
    {
        camins.push_back(m_camins[i]);
    }
}

void MapaSolucio::parsejaXmlElements(std::vector<XmlElement>& xmlElements)
{
    // A la tasca 8 i 9
}
