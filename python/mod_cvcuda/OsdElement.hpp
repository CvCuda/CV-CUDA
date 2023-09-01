/*
 * SPDX-FileCopyrightText: Copyright (c) 2023 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef NVCV_PYTHON_PRIV_OSD_ELEMENT_HPP
#define NVCV_PYTHON_PRIV_OSD_ELEMENT_HPP

#include <pybind11/pybind11.h>

namespace cvcudapy {

namespace py = ::pybind11;

void ExportBndBox(py::module &m);

void ExportBoxBlur(py::module &m);

void ExportOSD(py::module &m);

} // namespace cvcudapy

#endif // NVCV_PYTHON_PRIV_OSD_ELEMENT_HPP