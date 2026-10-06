// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCommerceToastPresenter
// Superclass: NSObject
// Address: 0x1129ff3e8

@interface SCCommerceToastPresenter

// Property: notificationPool; attributes: T@"<SIGNotificationPool>",&,N,V_notificationPool
// Property: notificationPresenter; attributes: T@"SIGNotificationImageInfoPresenter",&,N,V_notificationPresenter
// Property: iconProvider; attributes: T@"<SCCommerceIconProvider>",&,N,V_iconProvider

// -[SCCommerceToastPresenter showFavoriteAddedToastWithImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e07934

// -[SCCommerceToastPresenter showFavoriteAddedToastWithImage:viewAction:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104e07998

// -[SCCommerceToastPresenter showFavoriteRemovedToastWithImage:undoAction:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104e07a30

// -[SCCommerceToastPresenter showFavoriteRemovedToastWithImage:viewAction:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104e07ac8

// -[SCCommerceToastPresenter showFavoriteRemovedToastWithImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e07b60

// -[SCCommerceToastPresenter initWithNotificationPool:iconProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104e07bc4

// -[SCCommerceToastPresenter showToastWithImage:titleText:buttonTitle:buttonActionBlock:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x104e07c68

// -[SCCommerceToastPresenter showGenericErrorToast]
// Type encoding: v16@0:8
// Implementation: 0x104e07dd4

// -[SCCommerceToastPresenter showSuccessToastWithText:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e07e88

// -[SCCommerceToastPresenter showErrorToastWithText:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e07f70

// -[SCCommerceToastPresenter _showToastWithImage:titleText:buttonTitle:buttonActionBlock:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x104e08058

// -[SCCommerceToastPresenter _showGenericErrorToast]
// Type encoding: v16@0:8
// Implementation: 0x104e08300

// -[SCCommerceToastPresenter _triggerGenericToastWithImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e083f8

// -[SCCommerceToastPresenter _presentGenericToastWithImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e084e0

// -[SCCommerceToastPresenter _showSuccessToastWithText:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e08658

// -[SCCommerceToastPresenter _showErrorToastWithText:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e086cc

// -[SCCommerceToastPresenter _dismissCurrentToast]
// Type encoding: v16@0:8
// Implementation: 0x104e08740

// -[SCCommerceToastPresenter notificationPool]
// Type encoding: @16@0:8
// Implementation: 0x104e08750

// -[SCCommerceToastPresenter setNotificationPool:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e08758

// -[SCCommerceToastPresenter notificationPresenter]
// Type encoding: @16@0:8
// Implementation: 0x104e08788

// -[SCCommerceToastPresenter setNotificationPresenter:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e08790

// -[SCCommerceToastPresenter iconProvider]
// Type encoding: @16@0:8
// Implementation: 0x104e087c0

// -[SCCommerceToastPresenter setIconProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e087c8

// -[SCCommerceToastPresenter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104e087f8

@end
