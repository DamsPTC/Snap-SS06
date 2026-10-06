// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBoltFontLoader
// Superclass: NSObject
// Address: 0x112a49358

@interface SCBoltFontLoader

// Property: fontFactory; attributes: T@"<SCBoltFontFactory>",R,N,V_fontFactory
// Property: fileLoader; attributes: T@"<SCBoltFontFileLoader>",R,N,V_fileLoader
// Property: fontRegistry; attributes: T@"<SCBoltFontRegistry>",R,N,V_fontRegistry
// Property: registrationPerformer; attributes: T@"<SCPerforming>",R,N,V_registrationPerformer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBoltFontLoader initWithFontFactory:fileLoader:fontRegistry:registrationPerformer:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1055a2b54

// -[SCBoltFontLoader loadFontWithName:completionQueue:onSuccess:onFailure:]
// Type encoding: v48@0:8Q16@24@?32@?40
// Implementation: 0x1055a2c50

// -[SCBoltFontLoader _handleLoadedData:success:font:fontName:completionQueue:successBlock:failureBlock:]
// Type encoding: v68@0:8@16B24@28Q36@44@?52@?60
// Implementation: 0x1055a2f38

// -[SCBoltFontLoader _succeedWithFont:fontName:completionQueue:successBlock:]
// Type encoding: v48@0:8@16Q24@32@?40
// Implementation: 0x1055a3348

// -[SCBoltFontLoader _failWithFont:fontName:errorCode:userInfo:completionQueue:failureBlock:]
// Type encoding: v64@0:8@16Q24q32@40@48@?56
// Implementation: 0x1055a344c

// -[SCBoltFontLoader _logError:font:fontName:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x1055a35a0

// -[SCBoltFontLoader fontFactory]
// Type encoding: @16@0:8
// Implementation: 0x1055a360c

// -[SCBoltFontLoader fileLoader]
// Type encoding: @16@0:8
// Implementation: 0x1055a3614

// -[SCBoltFontLoader fontRegistry]
// Type encoding: @16@0:8
// Implementation: 0x1055a361c

// -[SCBoltFontLoader registrationPerformer]
// Type encoding: @16@0:8
// Implementation: 0x1055a3624

// -[SCBoltFontLoader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1055a362c

@end
