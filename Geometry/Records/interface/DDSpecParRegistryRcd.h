#ifndef GEOMETRY_RECORDS_DD_SPECPAR_REGISTRY_RCD_H
#define GEOMETRY_RECORDS_DD_SPECPAR_REGISTRY_RCD_H

#include "FWCore/Framework/interface/DependentRecordImplementation.h"
#include "Geometry/Records/interface/IdealGeometryRecord.h"
#include <boost/mp11/list.hpp>

class DDSpecParRegistryRcd
    : public edm::eventsetup::DependentRecordImplementation<DDSpecParRegistryRcd,
                                                            boost::mp11::mp_list<IdealGeometryRecord>> {};

#endif
