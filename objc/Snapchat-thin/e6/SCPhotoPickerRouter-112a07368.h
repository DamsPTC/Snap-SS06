// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPhotoPickerRouter
// Superclass: NSObject
// Address: 0x112a07368

@interface SCPhotoPickerRouter

// Property: routeRoot; attributes: T@"UIViewController",W,N,V_routeRoot
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCPhotoPickerRoutingDelegate>",W,N,V_delegate
// Property: photoDataDelegate; attributes: T@"<SCPhotoPickerRoutingPhotoDataDelegate>",W,N,V_photoDataDelegate

// -[SCPhotoPickerRouter initWithPhotoPickerScopeExposer:photoPickerScopeServices:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104ef7f50

// -[SCPhotoPickerRouter showPhotoPickerOptions]
// Type encoding: v16@0:8
// Implementation: 0x104ef7ff4

// -[SCPhotoPickerRouter dismissPhotoPickerWorkflow]
// Type encoding: v16@0:8
// Implementation: 0x104ef8074

// -[SCPhotoPickerRouter showPhotoPickerErrorText:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ef80d4

// -[SCPhotoPickerRouter showPhotoLibraryPermissionsDialogIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x104ef8188

// -[SCPhotoPickerRouter photoPickerScope:didPickPhotosAtURLs:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104ef81c8

// -[SCPhotoPickerRouter photoPickerScope:didUpdateMetadata:forPhotoAtURL:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104ef8218

// -[SCPhotoPickerRouter _doShowPhotoPicker]
// Type encoding: v16@0:8
// Implementation: 0x104ef8280

// -[SCPhotoPickerRouter _exposePhotoPickerScopeWithPhotoLibrary:]
// Type encoding: v20@0:8B16
// Implementation: 0x104ef8364

// -[SCPhotoPickerRouter _doDismissPhotoPicker]
// Type encoding: v16@0:8
// Implementation: 0x104ef83f8

// -[SCPhotoPickerRouter _doShowPhotoPickerErrorText:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ef8418

// -[SCPhotoPickerRouter _checkPhotoLibraryPermissions]
// Type encoding: v16@0:8
// Implementation: 0x104ef8560

// -[SCPhotoPickerRouter _handlePhotoLibraryAuthorizationStatus:]
// Type encoding: v24@0:8q16
// Implementation: 0x104ef8640

// -[SCPhotoPickerRouter _presentPhotoLibraryPermissionsDialog]
// Type encoding: v16@0:8
// Implementation: 0x104ef872c

// -[SCPhotoPickerRouter delegate]
// Type encoding: @16@0:8
// Implementation: 0x104ef892c

// -[SCPhotoPickerRouter setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ef8944

// -[SCPhotoPickerRouter photoDataDelegate]
// Type encoding: @16@0:8
// Implementation: 0x104ef8950

// -[SCPhotoPickerRouter setPhotoDataDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ef8968

// -[SCPhotoPickerRouter routeRoot]
// Type encoding: @16@0:8
// Implementation: 0x104ef8974

// -[SCPhotoPickerRouter setRouteRoot:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ef898c

// -[SCPhotoPickerRouter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104ef8998

@end
