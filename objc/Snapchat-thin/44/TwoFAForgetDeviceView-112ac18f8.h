// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: TwoFAForgetDeviceView
// Superclass: UIView
// Address: 0x112ac18f8

@interface TwoFAForgetDeviceView

// Property: headerView; attributes: T@"UIView",&,N,V_headerView
// Property: infoLabel; attributes: T@"SIGLabel",&,N,V_infoLabel
// Property: tableView; attributes: T@"UITableView",&,N,V_tableView
// Property: footerView; attributes: T@"UIView",&,N,V_footerView
// Property: forgetAllDevicesLink; attributes: T@"SIGLabel",&,N,V_forgetAllDevicesLink
// Property: forgetAllDeviceIndicator; attributes: T@"UIActivityIndicatorView",&,N,V_forgetAllDeviceIndicator
// Property: twoFAVerifiedDevices; attributes: T@"NSArray",&,N,V_twoFAVerifiedDevices
// Property: delegate; attributes: T@"<TwoFAForgetDeviceViewDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[TwoFAForgetDeviceView initWithVerifiedDevices:]
// Type encoding: @24@0:8@16
// Implementation: 0x10605f42c

// -[TwoFAForgetDeviceView _setupViews]
// Type encoding: v16@0:8
// Implementation: 0x10605f4cc

// -[TwoFAForgetDeviceView _initInfoView]
// Type encoding: v16@0:8
// Implementation: 0x10605f54c

// -[TwoFAForgetDeviceView _initTableView]
// Type encoding: v16@0:8
// Implementation: 0x10605fae4

// -[TwoFAForgetDeviceView _initFooter]
// Type encoding: v16@0:8
// Implementation: 0x10606002c

// -[TwoFAForgetDeviceView tableView:numberOfRowsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x106060804

// -[TwoFAForgetDeviceView tableView:cellForRowAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106060840

// -[TwoFAForgetDeviceView tableView:heightForRowAtIndexPath:]
// Type encoding: d32@0:8@16@24
// Implementation: 0x10606096c

// -[TwoFAForgetDeviceView forgetOneDevicePressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x106060978

// -[TwoFAForgetDeviceView _forgetAllDevicesPressed]
// Type encoding: v16@0:8
// Implementation: 0x1060609c8

// -[TwoFAForgetDeviceView _setIsWorking:]
// Type encoding: v20@0:8B16
// Implementation: 0x106060a08

// -[TwoFAForgetDeviceView _getInfoText]
// Type encoding: @16@0:8
// Implementation: 0x106060ac4

// -[TwoFAForgetDeviceView delegate]
// Type encoding: @16@0:8
// Implementation: 0x106060b34

// -[TwoFAForgetDeviceView setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106060b54

// -[TwoFAForgetDeviceView headerView]
// Type encoding: @16@0:8
// Implementation: 0x106060b68

// -[TwoFAForgetDeviceView setHeaderView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106060b78

// -[TwoFAForgetDeviceView infoLabel]
// Type encoding: @16@0:8
// Implementation: 0x106060bb8

// -[TwoFAForgetDeviceView setInfoLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x106060bc8

// -[TwoFAForgetDeviceView tableView]
// Type encoding: @16@0:8
// Implementation: 0x106060c08

// -[TwoFAForgetDeviceView setTableView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106060c18

// -[TwoFAForgetDeviceView footerView]
// Type encoding: @16@0:8
// Implementation: 0x106060c58

// -[TwoFAForgetDeviceView setFooterView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106060c68

// -[TwoFAForgetDeviceView forgetAllDevicesLink]
// Type encoding: @16@0:8
// Implementation: 0x106060ca8

// -[TwoFAForgetDeviceView setForgetAllDevicesLink:]
// Type encoding: v24@0:8@16
// Implementation: 0x106060cb8

// -[TwoFAForgetDeviceView forgetAllDeviceIndicator]
// Type encoding: @16@0:8
// Implementation: 0x106060cf8

// -[TwoFAForgetDeviceView setForgetAllDeviceIndicator:]
// Type encoding: v24@0:8@16
// Implementation: 0x106060d08

// -[TwoFAForgetDeviceView twoFAVerifiedDevices]
// Type encoding: @16@0:8
// Implementation: 0x106060d48

// -[TwoFAForgetDeviceView setTwoFAVerifiedDevices:]
// Type encoding: v24@0:8@16
// Implementation: 0x106060d58

// -[TwoFAForgetDeviceView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106060d98

@end
