// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatComposerContextWrapper
// Superclass: NSObject
// Address: 0x112b5c448

@interface SCChatComposerContextWrapper

// Property: onLayoutDirtyCallback; attributes: T@?,C,V_onLayoutDirtyCallback
// Property: onContextChangeCallback; attributes: T@?,C,V_onContextChangeCallback
// Property: valdiContext; attributes: T@"<SCValdiContextProtocol>",&,V_valdiContext
// Property: pluginIdentifier; attributes: T@"NSString",&,V_pluginIdentifier
// Property: composerComponentPath; attributes: T@"NSString",&,V_composerComponentPath
// Property: messageId; attributes: T@"NSString",R,N,V_messageId
// Property: contentType; attributes: Tq,N,V_contentType
// Property: margins; attributes: T{UIEdgeInsets=dddd},R,N,V_margins
// Property: wrapWithBubble; attributes: TB,R,N,V_wrapWithBubble
// Property: rendersOverMessage; attributes: TB,N,V_rendersOverMessage
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCChatComposerContextWrapper initWithPluginComposerContext:messageId:contentType:graphene:]
// Type encoding: @48@0:8@16@24q32@40
// Implementation: 0x1070601fc

// -[SCChatComposerContextWrapper initWithPluginComposerContextObservable:messageId:contentType:graphene:]
// Type encoding: @48@0:8@16@24q32@40
// Implementation: 0x107060274

// -[SCChatComposerContextWrapper initWithMessageId:contentType:graphene:]
// Type encoding: @40@0:8@16q24@32
// Implementation: 0x107060430

// -[SCChatComposerContextWrapper composerViewModel]
// Type encoding: @16@0:8
// Implementation: 0x1070604e4

// -[SCChatComposerContextWrapper isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x107060528

// -[SCChatComposerContextWrapper setMargins:wrapWithBubble:]
// Type encoding: v52@0:8{UIEdgeInsets=dddd}16B48
// Implementation: 0x107060744

// -[SCChatComposerContextWrapper contentSizeForMaxWidth:]
// Type encoding: {CGSize=dd}24@0:8d16
// Implementation: 0x107060798

// -[SCChatComposerContextWrapper reuseIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x107060908

// -[SCChatComposerContextWrapper cellWillDisplayAction]
// Type encoding: @16@0:8
// Implementation: 0x10706097c

// -[SCChatComposerContextWrapper hidden]
// Type encoding: B16@0:8
// Implementation: 0x107060984

// -[SCChatComposerContextWrapper onContextChange:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10706098c

// -[SCChatComposerContextWrapper onLayoutDirty:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107060990

// -[SCChatComposerContextWrapper contentSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x107060994

// -[SCChatComposerContextWrapper destroy]
// Type encoding: v16@0:8
// Implementation: 0x10706099c

// -[SCChatComposerContextWrapper setChatViewVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x1070609f0

// -[SCChatComposerContextWrapper applyValdiContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x1070609f4

// -[SCChatComposerContextWrapper handleRenderCompletedAfterLayoutDirtyForValdiContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x107060a2c

// -[SCChatComposerContextWrapper markSizeDirtyAndNotify]
// Type encoding: v16@0:8
// Implementation: 0x107060a50

// -[SCChatComposerContextWrapper notifyLayoutDirty]
// Type encoding: v16@0:8
// Implementation: 0x107060a5c

// -[SCChatComposerContextWrapper invokeOnContextChangeCallback]
// Type encoding: v16@0:8
// Implementation: 0x107060a98

// -[SCChatComposerContextWrapper measureWithValdiContext:maxWidth:margins:wrapWithBubble:startTime:]
// Type encoding: {CGSize=dd}76@0:8@16d24{UIEdgeInsets=dddd}32B64d68
// Implementation: 0x107060ad4

// -[SCChatComposerContextWrapper _setPluginComposerContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x107060bbc

// -[SCChatComposerContextWrapper _emitMetricForMeasureTime:]
// Type encoding: v24@0:8q16
// Implementation: 0x107060ec0

// -[SCChatComposerContextWrapper messageId]
// Type encoding: @16@0:8
// Implementation: 0x107060fdc

// -[SCChatComposerContextWrapper margins]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x107060fe4

// -[SCChatComposerContextWrapper wrapWithBubble]
// Type encoding: B16@0:8
// Implementation: 0x107060ff0

// -[SCChatComposerContextWrapper contentType]
// Type encoding: q16@0:8
// Implementation: 0x107060ff8

// -[SCChatComposerContextWrapper setContentType:]
// Type encoding: v24@0:8q16
// Implementation: 0x107061000

// -[SCChatComposerContextWrapper rendersOverMessage]
// Type encoding: B16@0:8
// Implementation: 0x107061008

// -[SCChatComposerContextWrapper setRendersOverMessage:]
// Type encoding: v20@0:8B16
// Implementation: 0x107061010

// -[SCChatComposerContextWrapper pluginIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x107061018

// -[SCChatComposerContextWrapper setPluginIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x107061024

// -[SCChatComposerContextWrapper composerComponentPath]
// Type encoding: @16@0:8
// Implementation: 0x10706102c

// -[SCChatComposerContextWrapper setComposerComponentPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x107061038

// -[SCChatComposerContextWrapper valdiContext]
// Type encoding: @16@0:8
// Implementation: 0x107061040

// -[SCChatComposerContextWrapper setValdiContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x10706104c

// -[SCChatComposerContextWrapper onLayoutDirtyCallback]
// Type encoding: @?16@0:8
// Implementation: 0x107061054

// -[SCChatComposerContextWrapper setOnLayoutDirtyCallback:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107061060

// -[SCChatComposerContextWrapper onContextChangeCallback]
// Type encoding: @?16@0:8
// Implementation: 0x107061068

// -[SCChatComposerContextWrapper setOnContextChangeCallback:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107061074

// -[SCChatComposerContextWrapper .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10706107c

@end
