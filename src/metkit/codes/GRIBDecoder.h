/*
 * (C) Copyright 1996- ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.
 */

/// @author Baudouin Raoult
/// @date   Jun 2020

#ifndef metkit_GRIBDecoder_h
#define metkit_GRIBDecoder_h

#include "metkit/data/Decoder.h"


namespace metkit {
namespace data {
class MetadataGatherer;
}

namespace codes {

//----------------------------------------------------------------------------------------------------------------------

class GRIBDecoder : public data::Decoder {
public: // methods


private: // methods

    virtual bool match(const data::Message&) const override;
    virtual void print(std::ostream&) const override;
    virtual mars::MarsRequest messageToRequest(const data::Message&) const override;
    virtual void getMetadata(const data::Message& msg, data::MetadataGatherer&) const override;

};


//----------------------------------------------------------------------------------------------------------------------

} // namespace codes
} // namespace metkit

#endif
