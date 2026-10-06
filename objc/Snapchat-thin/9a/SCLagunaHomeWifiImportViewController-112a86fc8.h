// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLagunaHomeWifiImportViewController
// Superclass: SCGenericSettingsViewController
// Address: 0x112a86fc8

@interface SCLagunaHomeWifiImportViewController

// Property: device; attributes: T@"<SCSpectaclesDevice>",&,N,V_device
// Property: instructionsImageView; attributes: T@"UIImageView",&,N,V_instructionsImageView
// Property: explanationLabel; attributes: T@"TTTAttributedLabel",&,N,V_explanationLabel
// Property: footerLabel; attributes: T@"UILabel",&,N,V_footerLabel
// Property: tableView; attributes: T@"UITableView",&,N,V_tableView
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLagunaHomeWifiImportViewController initWithDevice:statusCoordinator:homeWifiService:analyticsService:onDemandResourceFetcher:legacySpectaclesTooltipsService:scopeDelegate:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x105a7e7fc

// -[SCLagunaHomeWifiImportViewController dealloc]
// Type encoding: v16@0:8
// Implementation: 0x105a7e9b0

// -[SCLagunaHomeWifiImportViewController loadView]
// Type encoding: v16@0:8
// Implementation: 0x105a7ea10

// -[SCLagunaHomeWifiImportViewController viewDidLoad]
// Type encoding: v16@0:8
// Implementation: 0x105a7f7a8

// -[SCLagunaHomeWifiImportViewController viewWillDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x105a7f864

// -[SCLagunaHomeWifiImportViewController numberOfSectionsInTableView:]
// Type encoding: q24@0:8@16
// Implementation: 0x105a7f8c0

// -[SCLagunaHomeWifiImportViewController tableView:numberOfRowsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x105a7f8c8

// -[SCLagunaHomeWifiImportViewController tableView:cellForRowAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105a7f938

// -[SCLagunaHomeWifiImportViewController tableView:heightForFooterInSection:]
// Type encoding: d32@0:8@16q24
// Implementation: 0x105a7fa44

// -[SCLagunaHomeWifiImportViewController tableView:viewForFooterInSection:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x105a7fa54

// -[SCLagunaHomeWifiImportViewController tableView:heightForHeaderInSection:]
// Type encoding: d32@0:8@16q24
// Implementation: 0x105a7fe2c

// -[SCLagunaHomeWifiImportViewController tableView:viewForHeaderInSection:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x105a7fe3c

// -[SCLagunaHomeWifiImportViewController tableView:heightForRowAtIndexPath:]
// Type encoding: d32@0:8@16@24
// Implementation: 0x105a7fea0

// -[SCLagunaHomeWifiImportViewController tableView:didSelectRowAtIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a7feac

// -[SCLagunaHomeWifiImportViewController lagunaOnShareWifiCredentialsUpdate:device:wifiSsid:]
// Type encoding: v40@0:8Q16@24@32
// Implementation: 0x105a80190

// -[SCLagunaHomeWifiImportViewController lagunaOnWifiAPListUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a80344

// -[SCLagunaHomeWifiImportViewController didPressRemoveButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a8041c

// -[SCLagunaHomeWifiImportViewController attributedLabel:didSelectLinkWithURL:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a80528

// -[SCLagunaHomeWifiImportViewController getTitle]
// Type encoding: @16@0:8
// Implementation: 0x105a805a8

// -[SCLagunaHomeWifiImportViewController _addWifiNetwork]
// Type encoding: v16@0:8
// Implementation: 0x105a805ac

// -[SCLagunaHomeWifiImportViewController _addCell]
// Type encoding: @16@0:8
// Implementation: 0x105a8085c

// -[SCLagunaHomeWifiImportViewController _networkCell:]
// Type encoding: @24@0:8@16
// Implementation: 0x105a80944

// -[SCLagunaHomeWifiImportViewController _setStateForCell:wifiSsid:idleState:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x105a80a64

// -[SCLagunaHomeWifiImportViewController _logShareFlowFailure:]
// Type encoding: v24@0:8q16
// Implementation: 0x105a80b44

// -[SCLagunaHomeWifiImportViewController _showAlertForNotConnected]
// Type encoding: v16@0:8
// Implementation: 0x105a80bb8

// -[SCLagunaHomeWifiImportViewController _showAlertForDisconnection]
// Type encoding: v16@0:8
// Implementation: 0x105a80cd4

// -[SCLagunaHomeWifiImportViewController _showAlertForCannotConnectNetwork:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a80df0

// -[SCLagunaHomeWifiImportViewController _showAlertForCannotConnectInternet]
// Type encoding: v16@0:8
// Implementation: 0x105a80f78

// -[SCLagunaHomeWifiImportViewController _showAlertForLowBattery]
// Type encoding: v16@0:8
// Implementation: 0x105a81094

// -[SCLagunaHomeWifiImportViewController _showAlertForTransferInProgress]
// Type encoding: v16@0:8
// Implementation: 0x105a8125c

// -[SCLagunaHomeWifiImportViewController _showAlertForSuccess:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a81378

// -[SCLagunaHomeWifiImportViewController _showAlertForSuccessNoPending]
// Type encoding: v16@0:8
// Implementation: 0x105a8142c

// -[SCLagunaHomeWifiImportViewController _showAlertForSuccessWithPending:untransferredSnapsCount:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105a81548

// -[SCLagunaHomeWifiImportViewController _showAlertForRemoveConfirm:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a8174c

// -[SCLagunaHomeWifiImportViewController _showAlertForRemoveNotConnected:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a818d8

// -[SCLagunaHomeWifiImportViewController _showAlertForMaxNetworks]
// Type encoding: v16@0:8
// Implementation: 0x105a81a40

// -[SCLagunaHomeWifiImportViewController _showAlertForConnectNewPassword:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a81be0

// -[SCLagunaHomeWifiImportViewController _getOkNoOpAction]
// Type encoding: @16@0:8
// Implementation: 0x105a81d48

// -[SCLagunaHomeWifiImportViewController _getRemoveButton:]
// Type encoding: @24@0:8@16
// Implementation: 0x105a81dc0

// -[SCLagunaHomeWifiImportViewController _getRetryButton]
// Type encoding: @16@0:8
// Implementation: 0x105a81f80

// -[SCLagunaHomeWifiImportViewController _getCancelButton]
// Type encoding: @16@0:8
// Implementation: 0x105a820cc

// -[SCLagunaHomeWifiImportViewController device]
// Type encoding: @16@0:8
// Implementation: 0x105a82144

// -[SCLagunaHomeWifiImportViewController setDevice:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a82154

// -[SCLagunaHomeWifiImportViewController instructionsImageView]
// Type encoding: @16@0:8
// Implementation: 0x105a82194

// -[SCLagunaHomeWifiImportViewController setInstructionsImageView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a821a4

// -[SCLagunaHomeWifiImportViewController explanationLabel]
// Type encoding: @16@0:8
// Implementation: 0x105a821e4

// -[SCLagunaHomeWifiImportViewController setExplanationLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a821f4

// -[SCLagunaHomeWifiImportViewController footerLabel]
// Type encoding: @16@0:8
// Implementation: 0x105a82234

// -[SCLagunaHomeWifiImportViewController setFooterLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a82244

// -[SCLagunaHomeWifiImportViewController tableView]
// Type encoding: @16@0:8
// Implementation: 0x105a82284

// -[SCLagunaHomeWifiImportViewController setTableView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a82294

// -[SCLagunaHomeWifiImportViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a822d4

@end
