#ifndef MagneticField_IdealMagneticFieldRecord_h
#define MagneticField_IdealMagneticFieldRecord_h

#include "FWCore/Framework/interface/EventSetupRecordImplementation.h"
#include "FWCore/Framework/interface/DependentRecordImplementation.h"
#include "CondFormats/DataRecord/interface/RunSummaryRcd.h"
#include "CondFormats/DataRecord/interface/MagFieldConfigRcd.h"
#include "CondFormats/DataRecord/interface/MFGeometryFileRcd.h"
#include <boost/mp11/list.hpp>

class IdealMagneticFieldRecord : public edm::eventsetup::DependentRecordImplementation<
                                     IdealMagneticFieldRecord,
                                     boost::mp11::mp_list<MFGeometryFileRcd, RunInfoRcd, MagFieldConfigRcd> > {};

#endif
