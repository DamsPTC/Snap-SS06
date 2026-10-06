// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensCarouselManagerProxy
// Superclass: NSObject
// Address: 0x11296f3b0

@interface SCLensCarouselManagerProxy

// Property: activeStateObservable; attributes: T@,N,R
// Property: activeObservable; attributes: T@,N,R
// Property: lensCarouselEventsObservable; attributes: T@,N,R
// Property: active; attributes: TB,N,R
// Property: presentationState; attributes: Tq,N,R
// Property: activeLensIdObservable; attributes: T@,N,R
// Property: activeLensObservable; attributes: T@,N,R
// Property: activeLens; attributes: T@"SCLens",N,R
// Property: firstApplicableLens; attributes: T@"SCLens",N,R
// Property: defaultSelectionLensId; attributes: T@"NSString",N,R
// Property: lensOrderObservable; attributes: T@,N,R
// Property: selectedLensIdObservable; attributes: T@,N,R
// Property: selectedLensObservable; attributes: T@,N,R

// -[SCLensCarouselManagerProxy initWithLensCarouselManager:performer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100857ac0

// -[SCLensCarouselManagerProxy activeStateObservable]
// Type encoding: @16@0:8
// Implementation: 0x103f90f14

// -[SCLensCarouselManagerProxy activeObservable]
// Type encoding: @16@0:8
// Implementation: 0x103f90f24

// -[SCLensCarouselManagerProxy lensCarouselEventsObservable]
// Type encoding: @16@0:8
// Implementation: 0x103f90f34

// -[SCLensCarouselManagerProxy activateWithLensCarouselType:]
// Type encoding: v24@0:8q16
// Implementation: 0x103f90f44

// -[SCLensCarouselManagerProxy activateWithLensesObservable:activationConfiguration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x103f90fbc

// -[SCLensCarouselManagerProxy activateWithLastSavedState]
// Type encoding: v16@0:8
// Implementation: 0x103f91068

// -[SCLensCarouselManagerProxy activateWithLastSavedStateWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x103f91190

// -[SCLensCarouselManagerProxy activate]
// Type encoding: v16@0:8
// Implementation: 0x103f9121c

// -[SCLensCarouselManagerProxy activateWithParameters:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x103f91354

// -[SCLensCarouselManagerProxy activateWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x103f914c4

// -[SCLensCarouselManagerProxy activateWithActivationSource:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x103f91624

// -[SCLensCarouselManagerProxy deactivate]
// Type encoding: v16@0:8
// Implementation: 0x103f916d0

// -[SCLensCarouselManagerProxy deactivateWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x103f917f8

// -[SCLensCarouselManagerProxy active]
// Type encoding: B16@0:8
// Implementation: 0x103f91884

// -[SCLensCarouselManagerProxy presentationState]
// Type encoding: q16@0:8
// Implementation: 0x103f91900

// -[SCLensCarouselManagerProxy activeLensIdObservable]
// Type encoding: @16@0:8
// Implementation: 0x103f9197c

// -[SCLensCarouselManagerProxy activeLensObservable]
// Type encoding: @16@0:8
// Implementation: 0x100857f20

// -[SCLensCarouselManagerProxy activeLens]
// Type encoding: @16@0:8
// Implementation: 0x103f9198c

// -[SCLensCarouselManagerProxy firstApplicableLens]
// Type encoding: @16@0:8
// Implementation: 0x103f91a10

// -[SCLensCarouselManagerProxy defaultSelectionLensId]
// Type encoding: @16@0:8
// Implementation: 0x103f91a94

// -[SCLensCarouselManagerProxy lensOrderObservable]
// Type encoding: @16@0:8
// Implementation: 0x100857f10

// -[SCLensCarouselManagerProxy selectedLensIdObservable]
// Type encoding: @16@0:8
// Implementation: 0x103f91b88

// -[SCLensCarouselManagerProxy selectedLensObservable]
// Type encoding: @16@0:8
// Implementation: 0x103f91b98

// -[SCLensCarouselManagerProxy selectLensWithIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x103f91ba8

// -[SCLensCarouselManagerProxy selectLensWithIdentifier:animated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x103f91c64

// -[SCLensCarouselManagerProxy applyLensCarouselSelection:]
// Type encoding: v24@0:8@16
// Implementation: 0x103f91d34

// -[SCLensCarouselManagerProxy registerContextWithConfig:]
// Type encoding: @24@0:8@16
// Implementation: 0x103f91e60

// -[SCLensCarouselManagerProxy unregisterContextWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x103f91ebc

// -[SCLensCarouselManagerProxy init]
// Type encoding: @16@0:8
// Implementation: 0x103f91f78

// -[SCLensCarouselManagerProxy .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x103f91fd8

@end
