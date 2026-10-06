// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNeoPlayerSubtitleManager
// Superclass: NSObject
// Address: 0x112be6c88

@interface SCNeoPlayerSubtitleManager

// Property: delegate; attributes: T@"<SCNeoPlayerSubtitleManagerDelegate>",W,N,V_delegate
// Property: enabled; attributes: TB,N,GisEnabled

// -[SCNeoPlayerSubtitleManager initWithSubtitlesPath:instruments:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1090bd728

// -[SCNeoPlayerSubtitleManager attachToTimebase:queue:]
// Type encoding: v32@0:8^{OpaqueCMTimebase=}16@24
// Implementation: 0x1090bd8b4

// -[SCNeoPlayerSubtitleManager setUpdateMode:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1090bda10

// -[SCNeoPlayerSubtitleManager loadSubtitles]
// Type encoding: v16@0:8
// Implementation: 0x1090bdb64

// -[SCNeoPlayerSubtitleManager setEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1090be000

// -[SCNeoPlayerSubtitleManager isEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1090be0b4

// -[SCNeoPlayerSubtitleManager resetCueState]
// Type encoding: v16@0:8
// Implementation: 0x1090be154

// -[SCNeoPlayerSubtitleManager updateWithCurrentTime:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x1090be1c4

// -[SCNeoPlayerSubtitleManager _performUpdateWithCurrentTime:forceUpdate:]
// Type encoding: v44@0:8{?=qiIq}16B40
// Implementation: 0x1090be29c

// -[SCNeoPlayerSubtitleManager activateCueWithText:atTime:]
// Type encoding: v48@0:8@16{?=qiIq}24
// Implementation: 0x1090be39c

// -[SCNeoPlayerSubtitleManager deactivateCurrentCue]
// Type encoding: v16@0:8
// Implementation: 0x1090be4a4

// -[SCNeoPlayerSubtitleManager reset]
// Type encoding: v16@0:8
// Implementation: 0x1090be524

// -[SCNeoPlayerSubtitleManager _resetInternal]
// Type encoding: v16@0:8
// Implementation: 0x1090be6f0

// -[SCNeoPlayerSubtitleManager delegate]
// Type encoding: @16@0:8
// Implementation: 0x1090be7d4

// -[SCNeoPlayerSubtitleManager setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090be7ec

// -[SCNeoPlayerSubtitleManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1090be7f8

// -[SCNeoPlayerSubtitleManager .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x1090be84c

@end
