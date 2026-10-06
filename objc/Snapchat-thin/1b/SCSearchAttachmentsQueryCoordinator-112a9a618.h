// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSearchAttachmentsQueryCoordinator
// Superclass: NSObject
// Address: 0x112a9a618

@interface SCSearchAttachmentsQueryCoordinator

// Property: navigationCoordinator; attributes: T@"SCSearchNavigationCoordinator",W,N,V_navigationCoordinator
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: isLoading; attributes: TB,R,N,V_isLoading
// Property: currentQuery; attributes: T@"SCSearchQuery",C,N,V_currentQuery

// -[SCSearchAttachmentsQueryCoordinator addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cf9390

// -[SCSearchAttachmentsQueryCoordinator removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cf9398

// -[SCSearchAttachmentsQueryCoordinator didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105cf93a0

// -[SCSearchAttachmentsQueryCoordinator initWithUserSession:dataProvider:actionHandler:safeBrowsingAPI:circumstanceEngine:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x105cf93a8

// -[SCSearchAttachmentsQueryCoordinator canPerformQuery:]
// Type encoding: B24@0:8@16
// Implementation: 0x105cf94e8

// -[SCSearchAttachmentsQueryCoordinator resultsForQuery:updatingBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105cf94f0

// -[SCSearchAttachmentsQueryCoordinator _sectionDescriptors]
// Type encoding: @16@0:8
// Implementation: 0x105cf9780

// -[SCSearchAttachmentsQueryCoordinator _presentWebViewControllerWithLaunchSource:queryText:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x105cf9a4c

// -[SCSearchAttachmentsQueryCoordinator isLoading]
// Type encoding: B16@0:8
// Implementation: 0x105cf9b90

// -[SCSearchAttachmentsQueryCoordinator currentQuery]
// Type encoding: @16@0:8
// Implementation: 0x105cf9b98

// -[SCSearchAttachmentsQueryCoordinator setCurrentQuery:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cf9ba0

// -[SCSearchAttachmentsQueryCoordinator navigationCoordinator]
// Type encoding: @16@0:8
// Implementation: 0x105cf9ba8

// -[SCSearchAttachmentsQueryCoordinator setNavigationCoordinator:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cf9bc0

// -[SCSearchAttachmentsQueryCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105cf9bcc

// +[SCSearchAttachmentsQueryCoordinator announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x105cf9384

@end
