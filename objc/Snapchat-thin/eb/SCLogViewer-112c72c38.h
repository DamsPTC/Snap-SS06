// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLogViewer
// Superclass: NSObject
// Address: 0x112c72c38

@interface SCLogViewer

// Property: isListFiltersInitialized; attributes: TB,V_isListFiltersInitialized

// -[SCLogViewer init]
// Type encoding: @16@0:8
// Implementation: 0x10b28e7f0

// -[SCLogViewer show]
// Type encoding: v16@0:8
// Implementation: 0x10b28e824

// -[SCLogViewer hidden]
// Type encoding: B16@0:8
// Implementation: 0x10b28e828

// -[SCLogViewer hide]
// Type encoding: v16@0:8
// Implementation: 0x10b28e830

// -[SCLogViewer addLogType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b28e834

// -[SCLogViewer removeLogType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b28e838

// -[SCLogViewer containsLogType:]
// Type encoding: B24@0:8q16
// Implementation: 0x10b28e83c

// -[SCLogViewer appendLog:logType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10b28e844

// -[SCLogViewer appendLog:parameters:logType:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x10b28e848

// -[SCLogViewer appendLog:parameters:logType:textColor:]
// Type encoding: v48@0:8@16@24q32@40
// Implementation: 0x10b28e84c

// -[SCLogViewer updateLog:parameters:logType:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x10b28e850

// -[SCLogViewer updateLog:parameters:logType:textColor:]
// Type encoding: v48@0:8@16@24q32@40
// Implementation: 0x10b28e854

// -[SCLogViewer setUnits:forLogType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10b28e858

// -[SCLogViewer appendNewLineGraphPoint:logType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10b28e85c

// -[SCLogViewer appendNewLineGraphPoint:logType:series:]
// Type encoding: v40@0:8@16q24Q32
// Implementation: 0x10b28e864

// -[SCLogViewer appendNewLineGraphDiscreteEvent:logType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10b28e868

// -[SCLogViewer clear]
// Type encoding: v16@0:8
// Implementation: 0x10b28e86c

// -[SCLogViewer _topViewControllerFromViewController:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b28e870

// -[SCLogViewer _presentingViewControllerForAlert]
// Type encoding: @16@0:8
// Implementation: 0x10b28e96c

// -[SCLogViewer _presentAlertWithTitle:message:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b28e974

// -[SCLogViewer setMinimizedText:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b28e978

// -[SCLogViewer handleFavoriteButtonClick]
// Type encoding: v16@0:8
// Implementation: 0x10b28e97c

// -[SCLogViewer updateFavoriteButtonOnTextChange]
// Type encoding: v16@0:8
// Implementation: 0x10b28e980

// -[SCLogViewer togglePicker:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b28e984

// -[SCLogViewer hidePicker]
// Type encoding: v16@0:8
// Implementation: 0x10b28e988

// -[SCLogViewer handleFilterSelected]
// Type encoding: v16@0:8
// Implementation: 0x10b28e98c

// -[SCLogViewer clearLogType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b28e990

// -[SCLogViewer isEnabledFor:]
// Type encoding: B24@0:8q16
// Implementation: 0x10b28e994

// -[SCLogViewer updateBlizzardBlacklist:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b28e99c

// -[SCLogViewer blizzardBlacklist]
// Type encoding: @16@0:8
// Implementation: 0x10b28e9a0

// -[SCLogViewer isListFiltersInitialized]
// Type encoding: B16@0:8
// Implementation: 0x10b28e9a8

// -[SCLogViewer setIsListFiltersInitialized:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b28e9b4

// +[SCLogViewer sharedManager]
// Type encoding: @16@0:8
// Implementation: 0x10b28e71c

// +[SCLogViewer isInitialized]
// Type encoding: B16@0:8
// Implementation: 0x10b28e7e4

@end
