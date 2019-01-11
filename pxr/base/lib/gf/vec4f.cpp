//
// Copyright 2016 Pixar
//
// Licensed under the Apache License, Version 2.0 (the "Apache License")
// with the following modification; you may not use this file except in
// compliance with the Apache License and the following modification to it:
// Section 6. Trademarks. is deleted and replaced with:
//
// 6. Trademarks. This License does not grant permission to use the trade
//    names, trademarks, service marks, or product names of the Licensor
//    and its affiliates, except as required to comply with Section 4(c) of
//    the License and to reproduce the content of the NOTICE file.
//
// You may obtain a copy of the Apache License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the Apache License with the above modification is
// distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied. See the Apache License for the specific
// language governing permissions and limitations under the Apache License.
//
////////////////////////////////////////////////////////////////////////
// This file is generated by a script.  Do not edit directly.  Edit the
// vec.template.cpp file to make changes.

#include "pxr/base/gf/vec4f.h"

#include "pxr/pxr.h"
#include "pxr/base/gf/math.h"
#include "pxr/base/gf/ostreamHelpers.h"
#include "pxr/base/tf/type.h"

// Include headers for other vec types to support wrapping conversions and
// operators.
#include "pxr/base/gf/vec4d.h"
#include "pxr/base/gf/vec4h.h"
#include "pxr/base/gf/vec4i.h"

#include <vector>
#include <ostream>

PXR_NAMESPACE_OPEN_SCOPE

TF_REGISTRY_FUNCTION(TfType) {
    TfType::Define<GfVec4f>();
}

std::ostream& 
operator<<(std::ostream &out, GfVec4f const &v)
{
    return out << '(' 
        << Gf_OstreamHelperP(v[0]) << ", " 
        << Gf_OstreamHelperP(v[1]) << ", " 
        << Gf_OstreamHelperP(v[2]) << ", " 
        << Gf_OstreamHelperP(v[3]) << ')';
}


bool
GfVec4f::operator==(GfVec4d const &other) const
{
    return _data[0] == other[0] &&
           _data[1] == other[1] &&
           _data[2] == other[2] &&
           _data[3] == other[3];
}
bool
GfVec4f::operator==(GfVec4h const &other) const
{
    return _data[0] == other[0] &&
           _data[1] == other[1] &&
           _data[2] == other[2] &&
           _data[3] == other[3];
}
bool
GfVec4f::operator==(GfVec4i const &other) const
{
    return _data[0] == other[0] &&
           _data[1] == other[1] &&
           _data[2] == other[2] &&
           _data[3] == other[3];
}


PXR_NAMESPACE_CLOSE_SCOPE
