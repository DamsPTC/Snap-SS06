// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNotificationSettingsViewController
// Superclass: SCGenericSettingsViewController
// Address: 0x112afd858

@interface SCNotificationSettingsViewController

// Property: tableView; attributes: T@"UITableView",&,N,V_tableView
// Property: systemNotificationView; attributes: T@"UIView",&,N,V_systemNotificationView
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: PPVNavigationLogger; attributes: T@"<SCNavigationLogging>",?,&,N

// -[SCNotificationSettingsViewController pageViewName]
// Type encoding: q16@0:8
// Implementation: 0x1067c1844

// -[SCNotificationSettingsViewController initWithContext:userSession:logger:featureSettingsService:featureFlagStore:notificationDataServices:notificationsPermissionRequester:permissionRequestService:userScopedAppGroupUserDefaults:discoverFeedNotificationServices:creatorNotificationServices:notificationOSSettingsRetriever:circumstanceEngine:userIsInFamilyCenter:]
// Type encoding: @124@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112B120
// Implementation: 0x1067c184c

// -[SCNotificationSettingsViewController systemNotificationView]
// Type encoding: @16@0:8
// Implementation: 0x1067c1d28

// -[SCNotificationSettingsViewController loadView]
// Type encoding: v16@0:8
// Implementation: 0x1067c24ac

// -[SCNotificationSettingsViewController viewDidLoad]
// Type encoding: v16@0:8
// Implementation: 0x1067c2da0

// -[SCNotificationSettingsViewController _setupLearnMoreHeader]
// Type encoding: v16@0:8
// Implementation: 0x1067c2fe8

// -[SCNotificationSettingsViewController viewWillResignActive]
// Type encoding: v16@0:8
// Implementation: 0x1067c3498

// -[SCNotificationSettingsViewController viewWillAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x1067c349c

// -[SCNotificationSettingsViewController viewWillDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x1067c3500

// -[SCNotificationSettingsViewController _updateNotificationPermissionSettingsWithSettingsInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x1067c3548

// -[SCNotificationSettingsViewController resetView]
// Type encoding: v16@0:8
// Implementation: 0x1067c35f8

// -[SCNotificationSettingsViewController supportedInterfaceOrientations]
// Type encoding: Q16@0:8
// Implementation: 0x1067c3878

// -[SCNotificationSettingsViewController getTitle]
// Type encoding: @16@0:8
// Implementation: 0x1067c3884

// -[SCNotificationSettingsViewController leftButtonPressed]
// Type encoding: v16@0:8
// Implementation: 0x1067c3894

// -[SCNotificationSettingsViewController _notificationButtonPressed]
// Type encoding: v16@0:8
// Implementation: 0x1067c39c0

// -[SCNotificationSettingsViewController _didSelectManageStoryNotifications]
// Type encoding: v16@0:8
// Implementation: 0x1067c3a70

// -[SCNotificationSettingsViewController _didSelectCreatorNotifications]
// Type encoding: v16@0:8
// Implementation: 0x1067c3b0c

// -[SCNotificationSettingsViewController _updateNotificationSettingsIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x1067c3ba8

// -[SCNotificationSettingsViewController _performNotificationSettingsChanges:]
// Type encoding: v24@0:8@16
// Implementation: 0x1067c423c

// -[SCNotificationSettingsViewController _hasLocalSettingsChanges]
// Type encoding: B16@0:8
// Implementation: 0x1067c4398

// -[SCNotificationSettingsViewController _getLocalValueForSettingTag:]
// Type encoding: B24@0:8q16
// Implementation: 0x1067c43c0

// -[SCNotificationSettingsViewController _getValueForSettingTag:]
// Type encoding: B24@0:8q16
// Implementation: 0x1067c4458

// -[SCNotificationSettingsViewController _setValueForSettingTag:value:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x1067c4b28

// -[SCNotificationSettingsViewController numberOfSectionsInTableView:]
// Type encoding: q24@0:8@16
// Implementation: 0x1067c524c

// -[SCNotificationSettingsViewController tableView:numberOfRowsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x1067c525c

// -[SCNotificationSettingsViewController tableView:heightForRowAtIndexPath:]
// Type encoding: d32@0:8@16@24
// Implementation: 0x1067c5388

// -[SCNotificationSettingsViewController tableView:cellForRowAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1067c5398

// -[SCNotificationSettingsViewController tableView:heightForHeaderInSection:]
// Type encoding: d32@0:8@16q24
// Implementation: 0x1067c5480

// -[SCNotificationSettingsViewController tableView:viewForHeaderInSection:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1067c548c

// -[SCNotificationSettingsViewController tableView:didSelectRowAtIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1067c5620

// -[SCNotificationSettingsViewController _settingsCellForIndex:inSection:]
// Type encoding: @32@0:8Q16q24
// Implementation: 0x1067c5758

// -[SCNotificationSettingsViewController _settingsCellForTag:]
// Type encoding: @24@0:8q16
// Implementation: 0x1067c5870

// -[SCNotificationSettingsViewController _getOrCreateCellForSettingTag:]
// Type encoding: @24@0:8q16
// Implementation: 0x1067c58d8

// -[SCNotificationSettingsViewController manageStoryNotificationsCell]
// Type encoding: @16@0:8
// Implementation: 0x1067c5f44

// -[SCNotificationSettingsViewController creatorNotificationsCell]
// Type encoding: @16@0:8
// Implementation: 0x1067c5fe0

// -[SCNotificationSettingsViewController smsSettingDescriptionCell]
// Type encoding: @16@0:8
// Implementation: 0x1067c6094

// -[SCNotificationSettingsViewController settingsSwitchTableViewCell:didToggleSwitch:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1067c628c

// -[SCNotificationSettingsViewController _findIndexForSection:]
// Type encoding: q24@0:8q16
// Implementation: 0x1067c6400

// -[SCNotificationSettingsViewController settingsTextTableViewCell:didTapURL:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1067c6460

// -[SCNotificationSettingsViewController attributedLabel:didSelectLinkWithURL:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1067c64e0

// -[SCNotificationSettingsViewController defaultProjectNameV3]
// Type encoding: @16@0:8
// Implementation: 0x1067c6560

// -[SCNotificationSettingsViewController defaultProjectNameV2]
// Type encoding: @16@0:8
// Implementation: 0x1067c656c

// -[SCNotificationSettingsViewController tableView]
// Type encoding: @16@0:8
// Implementation: 0x1067c6578

// -[SCNotificationSettingsViewController setTableView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1067c6588

// -[SCNotificationSettingsViewController setSystemNotificationView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1067c65c8

// -[SCNotificationSettingsViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1067c6608

@end
