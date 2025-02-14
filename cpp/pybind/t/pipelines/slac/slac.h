// ----------------------------------------------------------------------------
// -                        Open3D: www.open3d.org                            -
// ----------------------------------------------------------------------------
// Copyright (c) 2018-2024 www.open3d.org
// SPDX-License-Identifier: MIT
// ----------------------------------------------------------------------------

#pragma once

#include "pybind/open3d_pybind.h"

namespace open3d {
namespace t {
namespace pipelines {
namespace slac {

void pybind_slac_declarations(py::module &m);
void pybind_slac_definitions(py::module &m);

}  // namespace slac
}  // namespace pipelines
}  // namespace t
}  // namespace open3d
