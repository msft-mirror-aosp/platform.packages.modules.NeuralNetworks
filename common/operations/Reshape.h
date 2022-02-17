/*
 * Copyright (C) 2017 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ANDROID_PACKAGES_MODULES_NEURALNETWORKS_COMMON_OPERATIONS_RESHAPE_H
#define ANDROID_PACKAGES_MODULES_NEURALNETWORKS_COMMON_OPERATIONS_RESHAPE_H

#include "OperationsUtils.h"

namespace android::nn::reshape {

Result<Version> validateDepthToSpace(const IOperationValidationContext* context);
Result<Version> validateSpaceToDepth(const IOperationValidationContext* context);

Result<Version> validatePad(const IOperationValidationContext* context);
Result<Version> validatePadV2(const IOperationValidationContext* context);

Result<Version> validateBatchToSpaceND(const IOperationValidationContext* context);
Result<Version> validateSpaceToBatchND(const IOperationValidationContext* context);

Result<Version> validateReshape(const IOperationValidationContext* context);

}  // namespace android::nn::reshape

#endif  // ANDROID_PACKAGES_MODULES_NEURALNETWORKS_COMMON_OPERATIONS_RESHAPE_H
