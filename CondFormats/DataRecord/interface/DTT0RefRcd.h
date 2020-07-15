#ifndef DTT0RefRCD_H
#define DTT0RefRCD_H

#include "FWCore/Framework/interface/DependentRecordImplementation.h"
#include "Geometry/Records/interface/MuonNumberingRecord.h"
#include "Geometry/Records/interface/IdealGeometryRecord.h"

#include <vector>
class DTT0RefRcd
    : public edm::eventsetup::
          DependentRecordImplementation<DTT0RefRcd, boost::mp11::mp_list<IdealGeometryRecord, MuonNumberingRecord> > {};

#endif
