// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCReportReason
// Superclass: SCValdiMarshallableObject
// Address: 0x112c95eb8

@interface SCCReportReason

// Property: reasonId; attributes: T@"NSString",C,D,N
// Property: reasonText; attributes: T@"NSString",C,D,N
// Property: type; attributes: T@"NSString",C,D,N
// Property: listItem; attributes: T@"SCCReportReasonListItem",&,D,N
// Property: submitItem; attributes: T@"SCCReportReasonSubmitItem",&,D,N
// Property: commentItem; attributes: T@"SCCReportReasonCommentItem",&,D,N
// Property: webViewItem; attributes: T@"SCCReportReasonWebViewItem",&,D,N
// Property: mediaPickerItem; attributes: T@"SCCReportReasonMediaPickerItem",&,D,N
// Property: nativeFormItem; attributes: T@"SCCReportReasonNativeFormItem",&,D,N

// -[SCCReportReason initWithReasonId:reasonText:type:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10b66efa8

// +[SCCReportReason listWithReasonId:reasonText:subheaderText:reasons:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x107cbc5c4

// +[SCCReportReason commentWithReasonId:reasonText:subheaderText:commentRequired:postSubmit:]
// Type encoding: @52@0:8@16@24@32B40@44
// Implementation: 0x107cbc724

// +[SCCReportReason webViewWithReasonId:reasonText:urlString:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x107cbc838

// +[SCCReportReason submitWithReasonId:reasonText:postSubmit:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x107cbc8f0

// +[SCCReportReason valdiMarshallableObjectDescriptor]
// Type encoding: {SCValdiMarshallableObjectDescriptor=^{SCValdiMarshallableObjectFieldDescriptor}^*^{SCValdiMarshallableObjectBlockSupport}C}16@0:8
// Implementation: 0x10b66efec

@end
