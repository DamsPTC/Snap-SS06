// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCScopeLifecycle
// Superclass: NSObject
// Address: 0x112c6b938

@interface SCScopeLifecycle

// Property: parent; attributes: T@"SCScopeLifecycle",R,W,N,V_parent
// Property: lifecycleName; attributes: T@"NSString",R,N
// Property: scopeName; attributes: T@"NSString",R,N
// Property: context; attributes: T@"SCScopeLifecycleContext",&,N,V_context

// -[SCScopeLifecycle initRootLifecycleWithContext:]
// Type encoding: @24@0:8@16
// Implementation: 0x10007fd78

// -[SCScopeLifecycle initSubLifecycleWithParent:]
// Type encoding: @24@0:8@16
// Implementation: 0x100a49f4c

// -[SCScopeLifecycle initWithParent:context:entrypoints:subLifecycles:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10007ff64

// -[SCScopeLifecycle initRootLifecycleWithContext:rootScopeEncoding:scopeGraphMappings:]
// Type encoding: @36@0:8@16S24@28
// Implementation: 0x10007fb84

// -[SCScopeLifecycle initSubLifecycleWithParent:context:rootScopeEncoding:scopeGraphMappings:]
// Type encoding: @44@0:8@16@24S32@36
// Implementation: 0x10007fb98

// -[SCScopeLifecycle beginWithRootScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x100a16534

// -[SCScopeLifecycle servicesContainer:]
// Type encoding: @24@0:8@16
// Implementation: 0x100a1690c

// -[SCScopeLifecycle _servicesContainer:externallyAccessible:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x100a1692c

// -[SCScopeLifecycle scopeContainerWithLifecycleProvider:]
// Type encoding: @24@0:8@?16
// Implementation: 0x100a45f90

// -[SCScopeLifecycle multiScopeContainerWithLifecycleProvider:]
// Type encoding: @24@0:8@?16
// Implementation: 0x100a45b9c

// -[SCScopeLifecycle plugInScopeContainerWithLifecycleProvider:]
// Type encoding: @24@0:8@?16
// Implementation: 0x100a45f0c

// -[SCScopeLifecycle unusedPlugInScopeContainer]
// Type encoding: @16@0:8
// Implementation: 0x10b0ad0e0

// -[SCScopeLifecycle enabledOptionalScopeContainerWithLifecycleProvider:]
// Type encoding: @24@0:8@?16
// Implementation: 0x100b766b8

// -[SCScopeLifecycle disabledOptionalScopeContainer]
// Type encoding: @16@0:8
// Implementation: 0x100b81464

// -[SCScopeLifecycle enabledOptionalMultiScopeContainerWithLifecycleProvider:]
// Type encoding: @24@0:8@?16
// Implementation: 0x100a45b34

// -[SCScopeLifecycle disabledOptionalMultiScopeContainer]
// Type encoding: @16@0:8
// Implementation: 0x100a45e9c

// -[SCScopeLifecycle unusedScopeContainer]
// Type encoding: @16@0:8
// Implementation: 0x10b0ad0fc

// -[SCScopeLifecycle unusedMultiScopeContainer]
// Type encoding: @16@0:8
// Implementation: 0x10b0ad118

// -[SCScopeLifecycle setDeferredEntrypointServiceContainer:withServiceAvailableCallback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x100b58830

// -[SCScopeLifecycle addServiceContainer:asRequirementOf:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100b58940

// -[SCScopeLifecycle setDeferredEntryPoint:whichExposesServiceFor:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100b59420

// -[SCScopeLifecycle _beginDeferredEntryPointFor:isScopeAccessed:requiredBy:inLifecycle:]
// Type encoding: v44@0:8@16B24@28@36
// Implementation: 0x100a24320

// -[SCScopeLifecycle beginDeferredEntryPointFor:requiredBy:inLifecycle:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x100a24310

// -[SCScopeLifecycle addEntryPoint:]
// Type encoding: v24@0:8@16
// Implementation: 0x100a1a574

// -[SCScopeLifecycle _addServiceProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x100b45f50

// -[SCScopeLifecycle _addDeferredEntryPoint:whenBegan:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100b73104

// -[SCScopeLifecycle debugRepresentation]
// Type encoding: @16@0:8
// Implementation: 0x10b0ad238

// -[SCScopeLifecycle _allowExternalAccessOfNewlyExposedServices]
// Type encoding: v16@0:8
// Implementation: 0x100a1afbc

// -[SCScopeLifecycle _addScopeLifecycleContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x100a47990

// -[SCScopeLifecycle _removeExternalAccessOfAllExposedServices]
// Type encoding: v16@0:8
// Implementation: 0x10b0ad374

// -[SCScopeLifecycle _removeExternalAccessOfAllPendingDeferredServices]
// Type encoding: v16@0:8
// Implementation: 0x10b0ad52c

// -[SCScopeLifecycle _setEntryPointMetadataBeforeAdd:]
// Type encoding: v24@0:8@16
// Implementation: 0x100a1a60c

// -[SCScopeLifecycle scopePath]
// Type encoding: @16@0:8
// Implementation: 0x100a16cb0

// -[SCScopeLifecycle end]
// Type encoding: @16@0:8
// Implementation: 0x10b0ad6a0

// -[SCScopeLifecycle servicesContainer:willExposeServices:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100a18e10

// -[SCScopeLifecycle scopeContainer:exposingScope:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100a477fc

// -[SCScopeLifecycle scopeContainer:removingScope:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b0ad9fc

// -[SCScopeLifecycle scopeContainer:overExposedScope:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b0ada7c

// -[SCScopeLifecycle scopeContainer:overRemovedScope:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b0adafc

// -[SCScopeLifecycle scopeContainer:duplicatedLifecycle:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b0adb7c

// -[SCScopeLifecycle plugInScopeContainer:loadingPlugInsForScope:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100b92800

// -[SCScopeLifecycle plugInScopeContainer:loadedPlugInsForScope:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100b92dc0

// -[SCScopeLifecycle entryPointBeginning:]
// Type encoding: v24@0:8@16
// Implementation: 0x100a1a868

// -[SCScopeLifecycle entryPointBegan:]
// Type encoding: v24@0:8@16
// Implementation: 0x100a1adc4

// -[SCScopeLifecycle entryPointEnding:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0adbf8

// -[SCScopeLifecycle entryPointEnded:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0add7c

// -[SCScopeLifecycle rootScopeContainer]
// Type encoding: @16@0:8
// Implementation: 0x100a16ea0

// -[SCScopeLifecycle createLifecycleServicesContainers]
// Type encoding: v16@0:8
// Implementation: 0x100a16ef8

// -[SCScopeLifecycle createEntryPoints]
// Type encoding: v16@0:8
// Implementation: 0x100a19180

// -[SCScopeLifecycle _createEntryPoint:entryPointClass:entryPointName:]
// Type encoding: v36@0:8S16#20@28
// Implementation: 0x100a1943c

// -[SCScopeLifecycle _createEntryPoints:]
// Type encoding: v32@0:8{span<const unsigned short, 18446744073709551615UL>=^SQ}16
// Implementation: 0x100a19188

// -[SCScopeLifecycle externallyAccessibleServices]
// Type encoding: @16@0:8
// Implementation: 0x100a18fac

// -[SCScopeLifecycle hasPendingDeferredEntryPointForServicesContainer:]
// Type encoding: B24@0:8@16
// Implementation: 0x100b72ebc

// -[SCScopeLifecycle scopeName]
// Type encoding: @16@0:8
// Implementation: 0x100a16e48

// -[SCScopeLifecycle buildScopePath]
// Type encoding: @16@0:8
// Implementation: 0x100a16d00

// -[SCScopeLifecycle propertyRequirementForDeferredEntryPoint:propertyType:requirementConstraintType:propertyName:]
// Type encoding: v44@0:8@16@24S32@36
// Implementation: 0x100b5859c

// -[SCScopeLifecycle propertyRequirementForRegularEntryPoint:propertyType:requirementConstraintType:propertyName:]
// Type encoding: v44@0:8@16@24i32@36
// Implementation: 0x100a19bc0

// -[SCScopeLifecycle propertyExposerForService:isDeferred:propertyType:propertyName:]
// Type encoding: @44@0:8@16B24@28@36
// Implementation: 0x100a1a354

// -[SCScopeLifecycle propertyExposerForScope:isDeferred:exposerType:propertyType:propertyTypeEncoding:propertyName:]
// Type encoding: v52@0:8@16B24S28@32S40@44
// Implementation: 0x100a457cc

// -[SCScopeLifecycle _lifecycleProvidingServicesContainer:requiredBy:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100a19d94

// -[SCScopeLifecycle _ancestorLifecycleProvidingServicesContainer:]
// Type encoding: @24@0:8@16
// Implementation: 0x100b56bdc

// -[SCScopeLifecycle _provideServicesContainer:forEntryPoint:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100a1a438

// -[SCScopeLifecycle _entryPointIdsForLifecycle]
// Type encoding: {span<const unsigned short, 18446744073709551615UL>=^SQ}16@0:8
// Implementation: 0x100a17098

// -[SCScopeLifecycle _buildLifecycleName]
// Type encoding: @16@0:8
// Implementation: 0x100a16c38

// -[SCScopeLifecycle lifecycleName]
// Type encoding: @16@0:8
// Implementation: 0x100a1b368

// -[SCScopeLifecycle hasAncestorProvidingExposureName:]
// Type encoding: B24@0:8@16
// Implementation: 0x100b56ba8

// -[SCScopeLifecycle parent]
// Type encoding: @16@0:8
// Implementation: 0x100a16e30

// -[SCScopeLifecycle context]
// Type encoding: @16@0:8
// Implementation: 0x100a49f44

// -[SCScopeLifecycle setContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0adeac

// -[SCScopeLifecycle .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0adedc

// -[SCScopeLifecycle .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10007fb70

@end
