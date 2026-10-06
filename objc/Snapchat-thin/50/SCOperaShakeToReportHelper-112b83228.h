// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaShakeToReportHelper
// Superclass: NSObject
// Address: 0x112b83228

@interface SCOperaShakeToReportHelper

// Property: lastReportedError; attributes: T@"NSString",C,N,V_lastReportedError
// Property: eventAnnouncer; attributes: T@"SCEventListenerAnnouncer",&,N,V_eventAnnouncer
// Property: lastNavigationStyle; attributes: Tq,N,V_lastNavigationStyle
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: announcerIdentifier; attributes: T@"NSString",R,C,N
// Property: shakeStartEventName; attributes: T@"NSString",R,C,N
// Property: shakeCompleteEventName; attributes: T@"NSString",R,C,N

// -[SCOperaShakeToReportHelper init]
// Type encoding: @16@0:8
// Implementation: 0x107ddcf10

// -[SCOperaShakeToReportHelper addS2RTrace:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ddd08c

// -[SCOperaShakeToReportHelper clearS2RTrace]
// Type encoding: v16@0:8
// Implementation: 0x107ddd0e4

// -[SCOperaShakeToReportHelper traces]
// Type encoding: @16@0:8
// Implementation: 0x107ddd0ec

// -[SCOperaShakeToReportHelper eventAnnouncer]
// Type encoding: @16@0:8
// Implementation: 0x107ddd104

// -[SCOperaShakeToReportHelper setEventAnnouncer:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ddd12c

// -[SCOperaShakeToReportHelper announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x107ddd18c

// -[SCOperaShakeToReportHelper shakeStartEventName]
// Type encoding: @16@0:8
// Implementation: 0x107ddd198

// -[SCOperaShakeToReportHelper shakeCompleteEventName]
// Type encoding: @16@0:8
// Implementation: 0x107ddd1c8

// -[SCOperaShakeToReportHelper startNewPageTrace:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ddd1f8

// -[SCOperaShakeToReportHelper addPageTraceEventFor:source:action:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107ddd1fc

// -[SCOperaShakeToReportHelper addAsset:forPage:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107ddd200

// -[SCOperaShakeToReportHelper addPlaybackAsset:forPage:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107ddd330

// -[SCOperaShakeToReportHelper filesForPage:]
// Type encoding: @24@0:8@16
// Implementation: 0x107ddd418

// -[SCOperaShakeToReportHelper copyBufferedVideoDataForPage:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107ddd484

// -[SCOperaShakeToReportHelper pageTraceEventsFor:]
// Type encoding: @24@0:8@16
// Implementation: 0x107ddd5bc

// -[SCOperaShakeToReportHelper didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107ddd5c4

// -[SCOperaShakeToReportHelper registerStateProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ddd67c

// -[SCOperaShakeToReportHelper unregisterStateProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ddd684

// -[SCOperaShakeToReportHelper registerOperaSummaryInfoProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ddd68c

// -[SCOperaShakeToReportHelper unregisterOperaSummaryInfoProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ddd694

// -[SCOperaShakeToReportHelper topOperaSummaryInfoProvider]
// Type encoding: @16@0:8
// Implementation: 0x107ddd6d8

// -[SCOperaShakeToReportHelper registerPageToPlaylistItemIdConverter:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ddd720

// -[SCOperaShakeToReportHelper unregisterPageToPlaylistItemIdConverted:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ddd728

// -[SCOperaShakeToReportHelper _captureStateSnapshot]
// Type encoding: v16@0:8
// Implementation: 0x107ddd730

// -[SCOperaShakeToReportHelper latestStateSnapshot]
// Type encoding: @16@0:8
// Implementation: 0x107ddd868

// -[SCOperaShakeToReportHelper itemIdForPage:summaryInfoProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107ddd890

// -[SCOperaShakeToReportHelper lastReportedError]
// Type encoding: @16@0:8
// Implementation: 0x107ddd9dc

// -[SCOperaShakeToReportHelper setLastReportedError:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ddd9e4

// -[SCOperaShakeToReportHelper lastNavigationStyle]
// Type encoding: q16@0:8
// Implementation: 0x107ddd9ec

// -[SCOperaShakeToReportHelper setLastNavigationStyle:]
// Type encoding: v24@0:8q16
// Implementation: 0x107ddd9f4

// -[SCOperaShakeToReportHelper .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107ddd9fc

// +[SCOperaShakeToReportHelper shared]
// Type encoding: @16@0:8
// Implementation: 0x107ddce60

@end
