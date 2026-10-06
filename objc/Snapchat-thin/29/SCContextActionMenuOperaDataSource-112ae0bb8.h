// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContextActionMenuOperaDataSource
// Superclass: NSObject
// Address: 0x112ae0bb8

@interface SCContextActionMenuOperaDataSource

// Property: contextActionSource; attributes: T@"SCContextLoggingActionSource",&,N,V_contextActionSource
// Property: delegate; attributes: T@"<SCContextActionMenuOperaDataSourceDelegate>",W,N,V_delegate
// Property: actions; attributes: T@"NSArray",R,N,V_actions

// -[SCContextActionMenuOperaDataSource initWithOperaEventAnnouncer:operaPageObservable:logger:filter:circumstanceEngine:operaNavigationStyle:boostCoordinator:delegate:contextExperimentService:currentUserId:valdiRuntimeProvider:snapProServices:]
// Type encoding: @112@0:8@16@24@32@?40@48q56@64@72@80@88@96@104
// Implementation: 0x10647a4dc

// -[SCContextActionMenuOperaDataSource _setupSubscribeListening]
// Type encoding: v16@0:8
// Implementation: 0x10647a864

// -[SCContextActionMenuOperaDataSource _setupAttributionListening]
// Type encoding: v16@0:8
// Implementation: 0x10647ab1c

// -[SCContextActionMenuOperaDataSource _handleAttributionUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10647ae3c

// -[SCContextActionMenuOperaDataSource _pageChanged:]
// Type encoding: v24@0:8@16
// Implementation: 0x10647aeac

// -[SCContextActionMenuOperaDataSource _handleSubscribedUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10647c1ec

// -[SCContextActionMenuOperaDataSource _setupFavoriteListening]
// Type encoding: v16@0:8
// Implementation: 0x10647c250

// -[SCContextActionMenuOperaDataSource _handleFavoritedUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10647c59c

// -[SCContextActionMenuOperaDataSource _setupPartnershipAdCodeListening]
// Type encoding: v16@0:8
// Implementation: 0x10647c600

// -[SCContextActionMenuOperaDataSource _getCanUseAdCodeWithProfileList:profileId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10647c908

// -[SCContextActionMenuOperaDataSource _handlePartnershipAdCodeUpdate:]
// Type encoding: v20@0:8B16
// Implementation: 0x10647ca54

// -[SCContextActionMenuOperaDataSource setActionMenuItems:]
// Type encoding: v24@0:8@16
// Implementation: 0x10647cad4

// -[SCContextActionMenuOperaDataSource actionForOption:]
// Type encoding: @24@0:8@16
// Implementation: 0x10647cce0

// -[SCContextActionMenuOperaDataSource performActionWithOperaEvent:contextLoggingAction:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106480518

// -[SCContextActionMenuOperaDataSource performActionWithOperaEvent:contextLoggingAction:operaEventParams:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106480520

// -[SCContextActionMenuOperaDataSource contextActionSource]
// Type encoding: @16@0:8
// Implementation: 0x10648070c

// -[SCContextActionMenuOperaDataSource setContextActionSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x106480714

// -[SCContextActionMenuOperaDataSource delegate]
// Type encoding: @16@0:8
// Implementation: 0x106480744

// -[SCContextActionMenuOperaDataSource setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10648075c

// -[SCContextActionMenuOperaDataSource actions]
// Type encoding: @16@0:8
// Implementation: 0x106480768

// -[SCContextActionMenuOperaDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106480770

@end
