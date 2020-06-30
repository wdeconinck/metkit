/*
 * (C) Copyright 1996- ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.
 */

#ifndef metkit_FieldIndex_H
#define metkit_FieldIndex_H

#include "eckit/memory/NonCopyable.h"
#include "eckit/serialisation/Stream.h"

namespace metkit {
namespace fields {

class FieldIndex : private eckit::NonCopyable {
public:

    FieldIndex();
    FieldIndex(eckit::Stream&);

	virtual ~FieldIndex();

	void getValue(const std::string& name,double& value);
	void getValue(const std::string& name,long& value);
	void getValue(const std::string& name,std::string& value);

	std::string substitute(const std::string& pattern) const;

    void encode(eckit::Stream&) const;

protected: // members

	std::map<std::string,std::string> stringValues_;
	std::map<std::string,long>   longValues_;
	std::map<std::string,double> doubleValues_;

};

} // namespace fields
} // namespace metkit

#endif
