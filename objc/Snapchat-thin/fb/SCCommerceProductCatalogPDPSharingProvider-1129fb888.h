// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCommerceProductCatalogPDPSharingProvider
// Superclass: NSObject
// Address: 0x1129fb888

@interface SCCommerceProductCatalogPDPSharingProvider

// Property: productURL; attributes: T@"NSURL",&,V_productURL
// Property: chatIds; attributes: T@"NSArray",R,N,V_chatIds
// Property: totalRecipientCount; attributes: Tq,R,N,V_totalRecipientCount

// -[SCCommerceProductCatalogPDPSharingProvider initWithTextSender:conversationDestinationParser:excludeId:delegate:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x104dd8530

// -[SCCommerceProductCatalogPDPSharingProvider shareWithSelectedItems:additionalText:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104dd8624

// -[SCCommerceProductCatalogPDPSharingProvider processChatIdsFromSelectedItems:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd86a0

// -[SCCommerceProductCatalogPDPSharingProvider _sortConversationsWithAdditionalText:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd8a4c

// -[SCCommerceProductCatalogPDPSharingProvider _sendMessagesToConversations:error:additionalText:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104dd8c18

// -[SCCommerceProductCatalogPDPSharingProvider _handleSharingCompletionWithResult:]
// Type encoding: v24@0:8q16
// Implementation: 0x104dd8e7c

// -[SCCommerceProductCatalogPDPSharingProvider _handleSharingError:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd8ed0

// -[SCCommerceProductCatalogPDPSharingProvider productURL]
// Type encoding: @16@0:8
// Implementation: 0x104dd8f24

// -[SCCommerceProductCatalogPDPSharingProvider setProductURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd8f30

// -[SCCommerceProductCatalogPDPSharingProvider chatIds]
// Type encoding: @16@0:8
// Implementation: 0x104dd8f38

// -[SCCommerceProductCatalogPDPSharingProvider totalRecipientCount]
// Type encoding: q16@0:8
// Implementation: 0x104dd8f40

// -[SCCommerceProductCatalogPDPSharingProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104dd8f48

@end
