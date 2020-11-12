/* Copyright 2020 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#ifndef TENSORFLOW_COMPILER_MLIR_TOSA_TOSA_PASSES_H
#define TENSORFLOW_COMPILER_MLIR_TOSA_TOSA_PASSES_H

#include "llvm/ADT/Optional.h"
#include "mlir/Dialect/Tosa/Transforms/Passes.h"
#include "mlir/IR/Module.h"
#include "mlir/Pass/PassManager.h"
#include "tensorflow/compiler/mlir/tosa/transforms/passes.h"

namespace mlir {

namespace tosa {

void CreateTFtoTOSALegalizationPipeline(
    OpPassManager& pm, const TOSALegalizationPipelineOptions& opts);

void CreateTFLtoTOSALegalizationPipeline(
    OpPassManager& pm, const TOSALegalizationPipelineOptions& opts);

}  // namespace tosa

}  // namespace mlir

#endif  // TENSORFLOW_COMPILER_MLIR_TOSA_TOSA_PASSES_H
