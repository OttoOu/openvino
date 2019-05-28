﻿/*
// Copyright (c) 2016 Intel Corporation
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
*/

#pragma once

#include "softmax_kernel_base.h"
 
namespace kernel_selector 
{    
    class SoftmaxKernel_fb : public SoftmaxKernelBaseBF
    {
    public:
        using Parent = SoftmaxKernelBaseBF;
        SoftmaxKernel_fb() : SoftmaxKernelBaseBF("softmax_gpu_fb") {}
        virtual ~SoftmaxKernel_fb() {}

        virtual KernelsData GetKernelsData(const Params& params, const optional_params& options) const override;

    protected:
        virtual ParamsKey GetSupportedKey() const override;
        virtual bool Validate(const Params& p, const optional_params& o) const override;
        DispatchData SetDefault(const softmax_params& params, const optional_params& optParams) const override;
    };
}