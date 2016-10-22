/*
 * (C) Copyright 1996-2016 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.
 */

#include "eckit/parser/StringTools.h"
#include "metkit/MarsRequest.h"

#include "metkit/types/TypesFactory.h"
#include "metkit/types/TypeGrid.h"

namespace metkit {

//----------------------------------------------------------------------------------------------------------------------

TypeGrid::TypeGrid(const std::string &name, const eckit::Value& settings) :
    Type(name, settings) {
}

TypeGrid::~TypeGrid() {
}

void TypeGrid::print(std::ostream &out) const {
    out << "TypeGrid[name=" << name_ << "]";
}

void TypeGrid::flattenValues(const MarsRequest& request, std::vector<std::string>& values) {
    // Empty
}

static TypeBuilder<TypeGrid> type("grid");

//----------------------------------------------------------------------------------------------------------------------

} // namespace metkit