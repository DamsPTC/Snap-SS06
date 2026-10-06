// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContactPermissionRequestBusinessLogic
// Superclass: SCBusinessLogic
// Address: 0x112a034e8

@interface SCContactPermissionRequestBusinessLogic


// -[SCContactPermissionRequestBusinessLogic initWithDelegate:contactPermissionInfoProvider:contactPermissionManager:circumstanceEngine:contactPermissionRequestLogger:applicationLifecycleEvents:requestSource:isExplicitUserLevelPermissionDialogNeeded:isConfirmSkipDialogNeeded:isGoToSystemSettingsDialogNeeded:]
// Type encoding: @84@0:8@16@24@32@40@48@56q64B72B76B80
// Implementation: 0x104e85048

// -[SCContactPermissionRequestBusinessLogic begin]
// Type encoding: v16@0:8
// Implementation: 0x104e85220

// -[SCContactPermissionRequestBusinessLogic viewModel]
// Type encoding: @16@0:8
// Implementation: 0x104e8537c

// -[SCContactPermissionRequestBusinessLogic handleAction:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e853c4

// -[SCContactPermissionRequestBusinessLogic _requestContactPermissionIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x104e85730

// -[SCContactPermissionRequestBusinessLogic _requestUserLevelAccessWithDialog]
// Type encoding: v16@0:8
// Implementation: 0x104e85950

// -[SCContactPermissionRequestBusinessLogic _requestToEnableDeniedDeviceLevelAccessIfPossible]
// Type encoding: v16@0:8
// Implementation: 0x104e85994

// -[SCContactPermissionRequestBusinessLogic _appWillEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x104e85a48

// -[SCContactPermissionRequestBusinessLogic _requestUserLevelContactPermissionCompletedWithPermissionGranted:]
// Type encoding: v20@0:8B16
// Implementation: 0x104e85a58

// -[SCContactPermissionRequestBusinessLogic _requestDeviceLevelContactPermissionCompletedWithPermissionStatus:]
// Type encoding: v20@0:8B16
// Implementation: 0x104e85b40

// -[SCContactPermissionRequestBusinessLogic _bothDeviceLevelAndUserLevelContactPermissionWereAlreadyGranted]
// Type encoding: v16@0:8
// Implementation: 0x104e85c54

// -[SCContactPermissionRequestBusinessLogic _displayOSPromptOnBeginningWhenNecessary]
// Type encoding: v16@0:8
// Implementation: 0x104e85ca4

// -[SCContactPermissionRequestBusinessLogic .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104e85d2c

@end
