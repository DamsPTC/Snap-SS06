// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPaymentsSettingsViewController
// Superclass: SCPaymentsGenericTableViewController
// Address: 0x1129fb2e8

@interface SCPaymentsSettingsViewController

// Property: orderList; attributes: T@"NSMutableArray",&,N,V_orderList
// Property: numberOfOrdersToShow; attributes: Tq,N,V_numberOfOrdersToShow
// Property: paymentMethods; attributes: T@"NSArray",&,N,V_paymentMethods
// Property: loadingPayments; attributes: TB,N,V_loadingPayments
// Property: loadingOrders; attributes: TB,N,V_loadingOrders
// Property: orderHistoryInfoString; attributes: T@"NSString",&,N,V_orderHistoryInfoString
// Property: tableSections; attributes: T@"NSMutableArray",&,V_tableSections
// Property: commerceLogger; attributes: T@"<SCCommerceEventLogger>",R,N,V_commerceLogger
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPaymentsSettingsViewController initWithUserSession:commerceLogger:accountInfoProvider:paymentInfoProvider:configProvider:ordersProvider:paymentSettingsImageProvider:currentPageTracker:userBlizzardLogger:compositeImageFetcher:delegate:commerceIconProvider:]
// Type encoding: @112@0:8@16@24@32@40@48@56@64@72@80@88@96@104
// Implementation: 0x104dbcb2c

// -[SCPaymentsSettingsViewController loadView]
// Type encoding: v16@0:8
// Implementation: 0x104dbce44

// -[SCPaymentsSettingsViewController viewDidLoad]
// Type encoding: v16@0:8
// Implementation: 0x104dbce8c

// -[SCPaymentsSettingsViewController viewWillAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x104dbced4

// -[SCPaymentsSettingsViewController getTitle]
// Type encoding: @16@0:8
// Implementation: 0x104dbcf50

// -[SCPaymentsSettingsViewController viewDidAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x104dbcf60

// -[SCPaymentsSettingsViewController viewWillDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x104dbd00c

// -[SCPaymentsSettingsViewController leftSwipeSucceed]
// Type encoding: v16@0:8
// Implementation: 0x104dbd074

// -[SCPaymentsSettingsViewController leftButtonPressed]
// Type encoding: v16@0:8
// Implementation: 0x104dbd0dc

// -[SCPaymentsSettingsViewController shouldPopToRootViewController]
// Type encoding: B16@0:8
// Implementation: 0x104dbd144

// -[SCPaymentsSettingsViewController shouldPopToRootViewControllerLater]
// Type encoding: B16@0:8
// Implementation: 0x104dbd14c

// -[SCPaymentsSettingsViewController viewDidDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x104dbd154

// -[SCPaymentsSettingsViewController setNeedsStatusBarAppearanceUpdate]
// Type encoding: v16@0:8
// Implementation: 0x104dbd214

// -[SCPaymentsSettingsViewController setupTableView]
// Type encoding: v16@0:8
// Implementation: 0x104dbd2b8

// -[SCPaymentsSettingsViewController didTapDoneButton]
// Type encoding: v16@0:8
// Implementation: 0x104dbd488

// -[SCPaymentsSettingsViewController numberOfSectionsInTableView:]
// Type encoding: q24@0:8@16
// Implementation: 0x104dbd4c4

// -[SCPaymentsSettingsViewController tableView:numberOfRowsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x104dbd4d4

// -[SCPaymentsSettingsViewController tableView:heightForRowAtIndexPath:]
// Type encoding: d32@0:8@16@24
// Implementation: 0x104dbd5a4

// -[SCPaymentsSettingsViewController tableView:heightForHeaderInSection:]
// Type encoding: d32@0:8@16q24
// Implementation: 0x104dbd664

// -[SCPaymentsSettingsViewController tableView:viewForHeaderInSection:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x104dbd674

// -[SCPaymentsSettingsViewController tableView:cellForRowAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104dbd724

// -[SCPaymentsSettingsViewController tableView:didSelectRowAtIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104dbd978

// -[SCPaymentsSettingsViewController tableView:paymentsTableViewCellAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104dbdde4

// -[SCPaymentsSettingsViewController paymentMethodWrapperForIndexPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x104dbdee0

// -[SCPaymentsSettingsViewController _odgCellForRowAtIndexPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x104dbdf14

// -[SCPaymentsSettingsViewController _purchaseCellForRowAtIndexPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x104dbdf24

// -[SCPaymentsSettingsViewController _viewAllCellForRowAtIndexPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x104dbe0e4

// -[SCPaymentsSettingsViewController _shippingAddressCellForRowAtIndexPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x104dbe0f8

// -[SCPaymentsSettingsViewController _contactInformationCellForRowAtIndexPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x104dbe174

// -[SCPaymentsSettingsViewController _baseSettingsCell:forRowAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104dbe1f0

// -[SCPaymentsSettingsViewController loadPaymentMethods]
// Type encoding: v16@0:8
// Implementation: 0x104dbe3cc

// -[SCPaymentsSettingsViewController _convertObfuscatedToCardDataModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x104dbe574

// -[SCPaymentsSettingsViewController _loadPaymentMethodCompletionHandler:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104dbe6f4

// -[SCPaymentsSettingsViewController _handleOrderHistorySuccess:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dbe85c

// -[SCPaymentsSettingsViewController _handleOrderHistoryFailure:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dbe9f8

// -[SCPaymentsSettingsViewController loadPurchases]
// Type encoding: v16@0:8
// Implementation: 0x104dbeb24

// -[SCPaymentsSettingsViewController paymentsCardCreationEditViewController:didCreatePaymentsMethod:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104dbed24

// -[SCPaymentsSettingsViewController _pagenameForPageView]
// Type encoding: q16@0:8
// Implementation: 0x104dbed28

// -[SCPaymentsSettingsViewController _showBlurView]
// Type encoding: v16@0:8
// Implementation: 0x104dbed30

// -[SCPaymentsSettingsViewController _hideBlurView]
// Type encoding: v16@0:8
// Implementation: 0x104dbef74

// -[SCPaymentsSettingsViewController displayId]
// Type encoding: @16@0:8
// Implementation: 0x104dbf01c

// -[SCPaymentsSettingsViewController defaultProjectNameV3]
// Type encoding: @16@0:8
// Implementation: 0x104dbf04c

// -[SCPaymentsSettingsViewController defaultProjectNameV2]
// Type encoding: @16@0:8
// Implementation: 0x104dbf058

// -[SCPaymentsSettingsViewController commerceLogger]
// Type encoding: @16@0:8
// Implementation: 0x104dbf064

// -[SCPaymentsSettingsViewController orderList]
// Type encoding: @16@0:8
// Implementation: 0x104dbf074

// -[SCPaymentsSettingsViewController setOrderList:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dbf084

// -[SCPaymentsSettingsViewController numberOfOrdersToShow]
// Type encoding: q16@0:8
// Implementation: 0x104dbf0c4

// -[SCPaymentsSettingsViewController setNumberOfOrdersToShow:]
// Type encoding: v24@0:8q16
// Implementation: 0x104dbf0d4

// -[SCPaymentsSettingsViewController paymentMethods]
// Type encoding: @16@0:8
// Implementation: 0x104dbf0e4

// -[SCPaymentsSettingsViewController setPaymentMethods:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dbf0f4

// -[SCPaymentsSettingsViewController loadingPayments]
// Type encoding: B16@0:8
// Implementation: 0x104dbf134

// -[SCPaymentsSettingsViewController setLoadingPayments:]
// Type encoding: v20@0:8B16
// Implementation: 0x104dbf144

// -[SCPaymentsSettingsViewController loadingOrders]
// Type encoding: B16@0:8
// Implementation: 0x104dbf154

// -[SCPaymentsSettingsViewController setLoadingOrders:]
// Type encoding: v20@0:8B16
// Implementation: 0x104dbf164

// -[SCPaymentsSettingsViewController orderHistoryInfoString]
// Type encoding: @16@0:8
// Implementation: 0x104dbf174

// -[SCPaymentsSettingsViewController setOrderHistoryInfoString:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dbf184

// -[SCPaymentsSettingsViewController tableSections]
// Type encoding: @16@0:8
// Implementation: 0x104dbf1c4

// -[SCPaymentsSettingsViewController setTableSections:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dbf1d4

// -[SCPaymentsSettingsViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104dbf1e0

@end
