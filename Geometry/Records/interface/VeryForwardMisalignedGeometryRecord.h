/****************************************************************************
*
* This is a part of TOTEM offline software.
* Authors: 
*	Jan Kaspar (jan.kaspar@gmail.com) 
*
****************************************************************************/

#ifndef RECORDS_VeryForwardMisalignedGeometryRecord_H
#define RECORDS_VeryForwardMisalignedGeometryRecord_H

#include "FWCore/Framework/interface/DependentRecordImplementation.h"
#include "Geometry/Records/interface/IdealGeometryRecord.h"

#include <boost/mp11/list.hpp>

#include "CondFormats/AlignmentRecord/interface/RPMisalignedAlignmentRecord.h"

/**
 * \ingroup TotemRPGeometry
 * \brief Event setup record containing the misaligned geometry information. It is used for 
 * alignment studies only.
 **/
class VeryForwardMisalignedGeometryRecord
    : public edm::eventsetup::DependentRecordImplementation<
          VeryForwardMisalignedGeometryRecord,
          boost::mp11::mp_list<IdealGeometryRecord, RPMisalignedAlignmentRecord /*, ... */> > {};

#endif
