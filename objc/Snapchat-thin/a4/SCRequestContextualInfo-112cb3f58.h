// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRequestContextualInfo
// Superclass: NSObject
// Address: 0x112cb3f58

@interface SCRequestContextualInfo

// Property: snapType; attributes: TQ,R,N,V_snapType
// Property: cameraType; attributes: TQ,R,N,V_cameraType
// Property: snapSource; attributes: TQ,R,N,V_snapSource
// Property: preCaptureLensId; attributes: T@"NSString",R,C,N,V_preCaptureLensId

// -[SCRequestContextualInfo initWithSnapType:cameraType:snapSource:preCaptureLensId:]
// Type encoding: @48@0:8Q16Q24Q32@40
// Implementation: 0x10b734f78

// -[SCRequestContextualInfo copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b735014

// -[SCRequestContextualInfo hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b735038

// -[SCRequestContextualInfo isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b7350a0

// -[SCRequestContextualInfo snapType]
// Type encoding: Q16@0:8
// Implementation: 0x10b735160

// -[SCRequestContextualInfo cameraType]
// Type encoding: Q16@0:8
// Implementation: 0x10b735168

// -[SCRequestContextualInfo snapSource]
// Type encoding: Q16@0:8
// Implementation: 0x10b735170

// -[SCRequestContextualInfo preCaptureLensId]
// Type encoding: @16@0:8
// Implementation: 0x10b735178

// -[SCRequestContextualInfo .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b735180

// +[SCRequestContextualInfo contextualInfoWithMediaTypeContext:cameraContext:snapSource:preCaptureLensId:]
// Type encoding: @48@0:8q16q24Q32@40
// Implementation: 0x107f7be08

// +[SCRequestContextualInfo contextualInfoWithPreviewMediaType:previewCameraType:snapSource:preCaptureLensId:]
// Type encoding: @48@0:8q16q24Q32@40
// Implementation: 0x107f7be9c

// +[SCRequestContextualInfo _contextSnapTypeFromType:]
// Type encoding: Q24@0:8q16
// Implementation: 0x107f7bf30

// +[SCRequestContextualInfo _cameraTypeFromContextType:]
// Type encoding: Q24@0:8q16
// Implementation: 0x107f7bf54

// +[SCRequestContextualInfo _cameraTypeFromContextCameraType:]
// Type encoding: Q24@0:8q16
// Implementation: 0x107f7bf64

// +[SCRequestContextualInfo _contextSnapTypeFromMediaType:]
// Type encoding: Q24@0:8q16
// Implementation: 0x107f7bf74

@end
