/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * @generated SignedSource<<c63cd0b38dfa9c4d6843a4b879f8f4df>>
 */

/**
 * IMPORTANT: Do NOT modify this file directly.
 *
 * To change the definition of the flags, edit
 *   packages/react-native/scripts/featureflags/ReactNativeFeatureFlags.config.js.
 *
 * To regenerate this code, run the following script from the repo root:
 *   yarn featureflags-update
 */

#pragma once

#include <react/featureflags/ReactNativeFeatureFlagsProvider.h>

namespace facebook::react {

class ReactNativeFeatureFlagsDefaults : public ReactNativeFeatureFlagsProvider {
 public:
  ReactNativeFeatureFlagsDefaults() = default;

  bool commonTestFlag() override {
    return false;
  }

  bool batchRenderingUpdatesInEventLoop() override {
    return false;
  }

  bool enableBackgroundExecutor() override {
    return false;
  }

  bool enableCustomDrawOrderFabric() override {
    return false;
  }

  bool enableFixForClippedSubviewsCrash() override {
    return false;
  }

  bool enableMicrotasks() override {
    return false;
  }

  bool enableMountHooksAndroid() override {
    return false;
  }

  bool enableSpannableBuildingUnification() override {
    return false;
  }

  bool inspectorEnableCxxInspectorPackagerConnection() override {
    return false;
  }

  bool inspectorEnableHermesCDPAgent() override {
    return false;
  }

  bool inspectorEnableModernCDPRegistry() override {
    return false;
  }

  bool skipMountHookNotifications() override {
    return false;
  }

  bool useModernRuntimeScheduler() override {
    return false;
  }
};

} // namespace facebook::react
