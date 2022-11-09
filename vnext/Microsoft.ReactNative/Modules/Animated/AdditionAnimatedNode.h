// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

#pragma once
#include "ValueAnimatedNode.h"

namespace Microsoft::ReactNative {
class AdditionAnimatedNode final : public ValueAnimatedNode {
 public:
  AdditionAnimatedNode(
      int64_t tag,
      const winrt::Microsoft::ReactNative::JSValueObject &config,
      const std::shared_ptr<NativeAnimatedNodeManager> &manager);

 private:
  std::unordered_set<int64_t> m_inputNodes{};
};
} // namespace Microsoft::ReactNative