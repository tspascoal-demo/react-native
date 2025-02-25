/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * @generated SignedSource<<e7305f923500dbd9b5e1b8d0217156ef>>
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

#if __has_include("rncoreJSI.h") // Cmake headers on Android
#include "rncoreJSI.h"
#elif __has_include("FBReactNativeSpecJSI.h") // CocoaPod headers on Apple
#include "FBReactNativeSpecJSI.h"
#else
#include <FBReactNativeSpec/FBReactNativeSpecJSI.h>
#endif

namespace facebook::react {

class NativeReactNativeFeatureFlags
    : public NativeReactNativeFeatureFlagsCxxSpec<
          NativeReactNativeFeatureFlags>,
      std::enable_shared_from_this<NativeReactNativeFeatureFlags> {
 public:
  NativeReactNativeFeatureFlags(std::shared_ptr<CallInvoker> jsInvoker);

  bool commonTestFlag(jsi::Runtime& runtime);

  bool batchRenderingUpdatesInEventLoop(jsi::Runtime& runtime);

  bool enableBackgroundExecutor(jsi::Runtime& runtime);

  bool enableCustomDrawOrderFabric(jsi::Runtime& runtime);

  bool enableFixForClippedSubviewsCrash(jsi::Runtime& runtime);

  bool enableMicrotasks(jsi::Runtime& runtime);

  bool enableMountHooksAndroid(jsi::Runtime& runtime);

  bool enableSpannableBuildingUnification(jsi::Runtime& runtime);

  bool inspectorEnableCxxInspectorPackagerConnection(jsi::Runtime& runtime);

  bool inspectorEnableHermesCDPAgent(jsi::Runtime& runtime);

  bool inspectorEnableModernCDPRegistry(jsi::Runtime& runtime);

  bool skipMountHookNotifications(jsi::Runtime& runtime);

  bool useModernRuntimeScheduler(jsi::Runtime& runtime);
};

} // namespace facebook::react
