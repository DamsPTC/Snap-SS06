// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCValdiContext
// Superclass: NSObject
// Address: 0x112b995f0

@interface SCValdiContext

// Property: context; attributes: T{Ref<Valdi::Context>=^{Context}},R,N,V_context
// Property: rootContext; attributes: T@"SCValdiContext",R,N
// Property: viewModel; attributes: T@,&,N,V_viewModel
// Property: actionHandler; attributes: T@,W,N
// Property: owner; attributes: T@,W,N,V_owner
// Property: actions; attributes: T@"SCValdiActions",&,N,V_actions
// Property: traitCollection; attributes: T@"UITraitCollection",&,N
// Property: dynamicTypeScale; attributes: Td,R,N
// Property: rootValdiView; attributes: T@"UIView",R,N
// Property: objectID; attributes: TI,R,N
// Property: runtime; attributes: T@"<SCValdiRuntimeProtocol>",R,N
// Property: componentPath; attributes: T@"NSString",R,N,V_componentPath
// Property: moduleOwnerName; attributes: T@"NSString",R,N,V_moduleOwnerName
// Property: moduleName; attributes: T@"NSString",R,N,V_moduleName
// Property: enableAccessibility; attributes: TB,N,V_enableAccessibility
// Property: viewInflationEnabled; attributes: TB,N
// Property: hasCompletedInitialRenderIncludingChildComponents; attributes: TB,R,N
// Property: rootValdiViewShouldDestroyContext; attributes: TB,N,V_rootValdiViewShouldDestroyContext
// Property: useLegacyMeasureBehavior; attributes: TB,N,V_useLegacyMeasureBehavior
// Property: contextId; attributes: TI,R,N
// Property: retainsLayoutSpecsOnInvalidateLayout; attributes: TB,N
// Property: enableAccurateTouchGesturesInAnimations; attributes: TB,N
// Property: destroyed; attributes: TB,R,N
// Property: disableHitTestSyncDeadline; attributes: TB,R,N
// Property: gestureListener; attributes: T@"<SCValdiGestureListener>",&,N,VgestureListener
// Property: trackedObjCReferences; attributes: T@"NSArray",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCValdiContext initWithContext:enableReferenceTracking:enableGesturePrewarm:]
// Type encoding: @32@0:8{Ref<Valdi::Context>=^{Context}}16B24B28
// Implementation: 0x1080d0200

// -[SCValdiContext contextId]
// Type encoding: I16@0:8
// Implementation: 0x1080d04dc

// -[SCValdiContext setEnableAccessibility:]
// Type encoding: v20@0:8B16
// Implementation: 0x1080d0514

// -[SCValdiContext cppContext]
// Type encoding: {Ref<Valdi::Context>=^{Context}}16@0:8
// Implementation: 0x1080d051c

// -[SCValdiContext cppRuntime]
// Type encoding: {Ref<Valdi::Runtime>=^{Runtime}}16@0:8
// Implementation: 0x1080d0578

// -[SCValdiContext viewNodeTree]
// Type encoding: {Ref<Valdi::ViewNodeTree>=^{ViewNodeTree}}16@0:8
// Implementation: 0x1080d05fc

// -[SCValdiContext trackedObjCReferences]
// Type encoding: @16@0:8
// Implementation: 0x1080d0664

// -[SCValdiContext destroy]
// Type encoding: v16@0:8
// Implementation: 0x1080d0688

// -[SCValdiContext awakeIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1080d06e0

// -[SCValdiContext notifyDidRender]
// Type encoding: v16@0:8
// Implementation: 0x1080d0778

// -[SCValdiContext notifyLayoutDidBecomeDirty]
// Type encoding: v16@0:8
// Implementation: 0x1080d08f0

// -[SCValdiContext onLayoutDirty:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1080d09a8

// -[SCValdiContext hasCompletedInitialRender]
// Type encoding: B16@0:8
// Implementation: 0x1080d0a18

// -[SCValdiContext hasCompletedInitialRenderIncludingChildComponents]
// Type encoding: B16@0:8
// Implementation: 0x1080d0a28

// -[SCValdiContext setViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080d0a2c

// -[SCValdiContext _rootValdiView]
// Type encoding: {Ref<Valdi::View>=^{View}}16@0:8
// Implementation: 0x1080d0acc

// -[SCValdiContext rootValdiView]
// Type encoding: @16@0:8
// Implementation: 0x1080d0b0c

// -[SCValdiContext setRootValdiView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080d0b54

// -[SCValdiContext viewForNodeId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080d0e44

// -[SCValdiContext objectID]
// Type encoding: I16@0:8
// Implementation: 0x1080d0f3c

// -[SCValdiContext _scheduleReapplyAttributesRecursive:invalidateMeasure:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1080d0f40

// -[SCValdiContext traitCollection]
// Type encoding: @16@0:8
// Implementation: 0x1080d1150

// -[SCValdiContext dynamicTypeScale]
// Type encoding: d16@0:8
// Implementation: 0x1080d1174

// -[SCValdiContext setTraitCollection:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080d117c

// -[SCValdiContext setLayoutSize:direction:]
// Type encoding: v40@0:8{CGSize=dd}16Q32
// Implementation: 0x1080d12c0

// -[SCValdiContext setVisibleViewportWithFrame:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x1080d134c

// -[SCValdiContext unsetVisibleViewport]
// Type encoding: v16@0:8
// Implementation: 0x1080d13f0

// -[SCValdiContext measureLayoutWithMaxSize:direction:]
// Type encoding: {CGSize=dd}40@0:8{CGSize=dd}16Q32
// Implementation: 0x1080d1430

// -[SCValdiContext didChangeValue:forValdiAttribute:inViewNode:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1080d1544

// -[SCValdiContext didChangeValue:forInternedValdiAttribute:inViewNode:]
// Type encoding: v40@0:8@16^{SCValdiInternedString=}24@32
// Implementation: 0x1080d1624

// -[SCValdiContext runtime]
// Type encoding: @16@0:8
// Implementation: 0x1080d16d4

// -[SCValdiContext setViewModelNoUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080d1728

// -[SCValdiContext waitUntilInitialRenderWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1080d1748

// -[SCValdiContext waitUntilRenderCompletedSync]
// Type encoding: v16@0:8
// Implementation: 0x1080d17d4

// -[SCValdiContext waitUntilRenderCompletedSyncWithFlush:]
// Type encoding: v20@0:8B16
// Implementation: 0x1080d17dc

// -[SCValdiContext waitUntilRenderCompletedWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1080d1814

// -[SCValdiContext setActionHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080d1964

// -[SCValdiContext actionHandler]
// Type encoding: @16@0:8
// Implementation: 0x1080d196c

// -[SCValdiContext rootContext]
// Type encoding: @16@0:8
// Implementation: 0x1080d1974

// -[SCValdiContext performJsAction:parameters:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1080d1978

// -[SCValdiContext registerViewFactory:forClass:]
// Type encoding: v32@0:8@?16#24
// Implementation: 0x1080d1b74

// -[SCValdiContext registerViewFactory:attributesBinder:forClass:]
// Type encoding: v40@0:8@?16@?24#32
// Implementation: 0x1080d1b80

// -[SCValdiContext setAttachedObject:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1080d1d08

// -[SCValdiContext attachedObjectForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080d1db8

// -[SCValdiContext addDisposable:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080d1e18

// -[SCValdiContext onDestroyed]
// Type encoding: v16@0:8
// Implementation: 0x1080d1eb0

// -[SCValdiContext setViewInflationEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1080d1fc8

// -[SCValdiContext setRetainsLayoutSpecsOnInvalidateLayout:]
// Type encoding: v20@0:8B16
// Implementation: 0x1080d2000

// -[SCValdiContext enableAccurateTouchGesturesInAnimations]
// Type encoding: B16@0:8
// Implementation: 0x1080d2038

// -[SCValdiContext setEnableAccurateTouchGesturesInAnimations:]
// Type encoding: v20@0:8B16
// Implementation: 0x1080d2040

// -[SCValdiContext retainsLayoutSpecsOnInvalidateLayout]
// Type encoding: B16@0:8
// Implementation: 0x1080d2048

// -[SCValdiContext viewInflationEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1080d2088

// -[SCValdiContext setParentContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080d20d4

// -[SCValdiContext rootViewNode]
// Type encoding: @16@0:8
// Implementation: 0x1080d21bc

// -[SCValdiContext destroyed]
// Type encoding: B16@0:8
// Implementation: 0x1080d2254

// -[SCValdiContext disableHitTestSyncDeadline]
// Type encoding: B16@0:8
// Implementation: 0x1080d2290

// -[SCValdiContext gestureListener]
// Type encoding: @16@0:8
// Implementation: 0x1080d2454

// -[SCValdiContext setGestureListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080d245c

// -[SCValdiContext viewModel]
// Type encoding: @16@0:8
// Implementation: 0x1080d247c

// -[SCValdiContext owner]
// Type encoding: @16@0:8
// Implementation: 0x1080d2484

// -[SCValdiContext setOwner:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080d249c

// -[SCValdiContext actions]
// Type encoding: @16@0:8
// Implementation: 0x1080d24a8

// -[SCValdiContext setActions:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080d24b0

// -[SCValdiContext componentPath]
// Type encoding: @16@0:8
// Implementation: 0x1080d24d0

// -[SCValdiContext moduleOwnerName]
// Type encoding: @16@0:8
// Implementation: 0x1080d24d8

// -[SCValdiContext moduleName]
// Type encoding: @16@0:8
// Implementation: 0x1080d24e0

// -[SCValdiContext enableAccessibility]
// Type encoding: B16@0:8
// Implementation: 0x1080d24e8

// -[SCValdiContext rootValdiViewShouldDestroyContext]
// Type encoding: B16@0:8
// Implementation: 0x1080d24f0

// -[SCValdiContext setRootValdiViewShouldDestroyContext:]
// Type encoding: v20@0:8B16
// Implementation: 0x1080d24f8

// -[SCValdiContext useLegacyMeasureBehavior]
// Type encoding: B16@0:8
// Implementation: 0x1080d2500

// -[SCValdiContext setUseLegacyMeasureBehavior:]
// Type encoding: v20@0:8B16
// Implementation: 0x1080d2508

// -[SCValdiContext context]
// Type encoding: {Ref<Valdi::Context>=^{Context}}16@0:8
// Implementation: 0x1080d2510

// -[SCValdiContext .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1080d253c

// -[SCValdiContext .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x1080d25d4

// +[SCValdiContext currentContext]
// Type encoding: @16@0:8
// Implementation: 0x1080d22dc

// +[SCValdiContext currentTraitCollectionForMeasurementContextDestroyed:]
// Type encoding: @24@0:8^B16
// Implementation: 0x1080d22f0

@end
