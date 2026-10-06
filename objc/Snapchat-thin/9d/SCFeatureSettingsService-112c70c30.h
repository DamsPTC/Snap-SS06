// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureSettingsService
// Superclass: NSObject
// Address: 0x112c70c30

@interface SCFeatureSettingsService

// Property: customRingtoneId; attributes: TQ,N
// Property: hasAcceptedVoiceMLLensVoiceControlOnboarding; attributes: TB,N
// Property: voicemlLensVoiceControlOnboardingBannerSeenCount; attributes: Tq,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: hasAcceptedScanFromLensOnboarding; attributes: TB,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: seenMusicPickerFavoritesTooltip; attributes: TB,N
// Property: seenSoundTopicsFavoritesTooltip; attributes: TB,N
// Property: seenMusicContextCardFavoritesTooltip; attributes: TB,N
// Property: musicSyncMemoriesPreviewSoundTooltipTimesSeen; attributes: Tq,N
// Property: musicSyncMemoriesOnboardingBannerTimesSeen; attributes: Tq,N
// Property: musicSyncMemoriesFabTooltipTimesSeen; attributes: Tq,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFeatureSettingsService _stringForFeatureSetting:defaultValue:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1005291e4

// -[SCFeatureSettingsService _boolForFeatureSetting:defaultValue:]
// Type encoding: B28@0:8@16B24
// Implementation: 0x100504c7c

// -[SCFeatureSettingsService _integerForFeatureSetting:defaultValue:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x1004fb4f8

// -[SCFeatureSettingsService _uintegerForFeatureSetting:defaultValue:]
// Type encoding: Q32@0:8@16q24
// Implementation: 0x10b2579c8

// -[SCFeatureSettingsService _doubleForFeatureSetting:defaultValue:]
// Type encoding: d32@0:8@16d24
// Implementation: 0x10b257a10

// -[SCFeatureSettingsService _hasFeatureSettingAvailable:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b257a60

// -[SCFeatureSettingsService _setFeatureSetting:boolValue:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10b257a94

// -[SCFeatureSettingsService _setFeatureSetting:doubleValue:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x10b257b04

// -[SCFeatureSettingsService _setFeatureSetting:longValue:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10b257b7c

// -[SCFeatureSettingsService _setFeatureSetting:unsignedLongValue:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10b257bec

// -[SCFeatureSettingsService _setFeatureSetting:stringValue:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b257c5c

// -[SCFeatureSettingsService isBirthdayPartyEnabledAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10b256b44

// -[SCFeatureSettingsService birthdayPartyEnabledServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b256b50

// -[SCFeatureSettingsService setBirthdayPartyEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b256b5c

// -[SCFeatureSettingsService is_birthday_party_enabled_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b256b6c

// -[SCFeatureSettingsService is_birthday_party_enabled_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b256b74

// -[SCFeatureSettingsService birthdayPartyEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10b256b7c

// -[SCFeatureSettingsService isBitmojiMerchUnifiedProfileCellProdDeeplinkURLAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10b256b8c

// -[SCFeatureSettingsService bitmojiMerchUnifiedProfileCellProdDeeplinkURLServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b256b98

// -[SCFeatureSettingsService snap_store_myprofile_prod_deeplink_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b256ba4

// -[SCFeatureSettingsService snap_store_myprofile_prod_deeplink_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b256bcc

// -[SCFeatureSettingsService bitmojiMerchUnifiedProfileCellProdDeeplinkURL]
// Type encoding: @16@0:8
// Implementation: 0x10b256bf4

// -[SCFeatureSettingsService isLogoutVerificationPromptsAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10b256c04

// -[SCFeatureSettingsService logoutVerificationPromptsServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b256c10

// -[SCFeatureSettingsService setLogoutVerificationPrompts:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b256c1c

// -[SCFeatureSettingsService logout_verification_prompts_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b256c2c

// -[SCFeatureSettingsService logout_verification_prompts_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b256c34

// -[SCFeatureSettingsService logoutVerificationPrompts]
// Type encoding: q16@0:8
// Implementation: 0x10b256c3c

// -[SCFeatureSettingsService isNotificationUserTaggingAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10b256c4c

// -[SCFeatureSettingsService notificationUserTaggingServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b256c58

// -[SCFeatureSettingsService setNotificationUserTagging:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b256c64

// -[SCFeatureSettingsService notification_user_tagging_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b256c74

// -[SCFeatureSettingsService notification_user_tagging_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b256c7c

// -[SCFeatureSettingsService notificationUserTagging]
// Type encoding: B16@0:8
// Implementation: 0x10b256c84

// -[SCFeatureSettingsService isNotificationMemoriesAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10b256c94

// -[SCFeatureSettingsService notificationMemoriesServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b256ca0

// -[SCFeatureSettingsService setNotificationMemories:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b256cac

// -[SCFeatureSettingsService notification_memories_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b256cbc

// -[SCFeatureSettingsService notification_memories_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b256cc4

// -[SCFeatureSettingsService notificationMemories]
// Type encoding: B16@0:8
// Implementation: 0x10b256ccc

// -[SCFeatureSettingsService isNotificationDreamsSuggestionsAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10b256cdc

// -[SCFeatureSettingsService notificationDreamsSuggestionsServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b256ce8

// -[SCFeatureSettingsService setNotificationDreamsSuggestions:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b256cf4

// -[SCFeatureSettingsService notification_dreams_suggestions_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b256d04

// -[SCFeatureSettingsService notification_dreams_suggestions_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b256d0c

// -[SCFeatureSettingsService notificationDreamsSuggestions]
// Type encoding: B16@0:8
// Implementation: 0x10b256d14

// -[SCFeatureSettingsService isNotificationFriendsBirthdayAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10b256d24

// -[SCFeatureSettingsService notificationFriendsBirthdayServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b256d30

// -[SCFeatureSettingsService setNotificationFriendsBirthday:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b256d3c

// -[SCFeatureSettingsService notification_friends_birthday_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b256d4c

// -[SCFeatureSettingsService notification_friends_birthday_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b256d54

// -[SCFeatureSettingsService notificationFriendsBirthday]
// Type encoding: B16@0:8
// Implementation: 0x10b256d5c

// -[SCFeatureSettingsService isNotificationMessageReminderAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10b256d6c

// -[SCFeatureSettingsService notificationMessageReminderServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b256d78

// -[SCFeatureSettingsService setNotificationMessageReminder:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b256d84

// -[SCFeatureSettingsService notification_message_reminder_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b256d94

// -[SCFeatureSettingsService notification_message_reminder_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b256d9c

// -[SCFeatureSettingsService notificationMessageReminder]
// Type encoding: B16@0:8
// Implementation: 0x10b256da4

// -[SCFeatureSettingsService isNotificationCreativeToolsAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10b256db4

// -[SCFeatureSettingsService notificationCreativeToolsServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b256dc0

// -[SCFeatureSettingsService setNotificationCreativeTools:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b256dcc

// -[SCFeatureSettingsService notification_creative_tools_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b256ddc

// -[SCFeatureSettingsService notification_creative_tools_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b256de4

// -[SCFeatureSettingsService notificationCreativeTools]
// Type encoding: B16@0:8
// Implementation: 0x10b256dec

// -[SCFeatureSettingsService isNotificationBestFriendsSoundsAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10b256dfc

// -[SCFeatureSettingsService notificationBestFriendsSoundsServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b256e08

// -[SCFeatureSettingsService setNotificationBestFriendsSounds:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b256e14

// -[SCFeatureSettingsService notification_best_friends_sounds_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b256e24

// -[SCFeatureSettingsService notification_best_friends_sounds_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b256e2c

// -[SCFeatureSettingsService notificationBestFriendsSounds]
// Type encoding: B16@0:8
// Implementation: 0x10b256e34

// -[SCFeatureSettingsService isNotificationPMFWidgetDisabledAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10b256e44

// -[SCFeatureSettingsService notificationPMFWidgetDisabledServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b256e50

// -[SCFeatureSettingsService setNotificationPMFWidgetDisabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b256e5c

// -[SCFeatureSettingsService notification_pmf_widget_disabled_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b256e6c

// -[SCFeatureSettingsService notification_pmf_widget_disabled_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b256e74

// -[SCFeatureSettingsService notificationPMFWidgetDisabled]
// Type encoding: B16@0:8
// Implementation: 0x10b256e7c

// -[SCFeatureSettingsService isDefaultEmojiSkinToneAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10b256e8c

// -[SCFeatureSettingsService defaultEmojiSkinToneServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b256e98

// -[SCFeatureSettingsService setDefaultEmojiSkinTone:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b256ea4

// -[SCFeatureSettingsService default_emoji_skin_tone_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b256eb4

// -[SCFeatureSettingsService default_emoji_skin_tone_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b256edc

// -[SCFeatureSettingsService defaultEmojiSkinTone]
// Type encoding: @16@0:8
// Implementation: 0x10b256f04

// -[SCFeatureSettingsService getLastSnapSince1970InMinutes]
// Type encoding: B16@0:8
// Implementation: 0x10b256f64

// -[SCFeatureSettingsService lastSnapSince1970InMinutesServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b256f70

// -[SCFeatureSettingsService setLastSnapSince1970InMinutes:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b256f7c

// -[SCFeatureSettingsService last_snap_since_1970_in_minutes_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b256f8c

// -[SCFeatureSettingsService last_snap_since_1970_in_minutes_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b256f94

// -[SCFeatureSettingsService lastSnapSince1970InMinutes]
// Type encoding: q16@0:8
// Implementation: 0x10b256f9c

// -[SCFeatureSettingsService isRegisteredInBarracudaAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10b256fac

// -[SCFeatureSettingsService registeredInBarracudaServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b256fb8

// -[SCFeatureSettingsService setRegisteredInBarracuda:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b256fc4

// -[SCFeatureSettingsService registered_in_barracuda_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b256fd4

// -[SCFeatureSettingsService registered_in_barracuda_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b256fdc

// -[SCFeatureSettingsService registeredInBarracuda]
// Type encoding: B16@0:8
// Implementation: 0x10b256fe4

// -[SCFeatureSettingsService isTravelModeEnabledAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10b256ff4

// -[SCFeatureSettingsService travelModeEnabledServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1005051e0

// -[SCFeatureSettingsService setTravelModeEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b257000

// -[SCFeatureSettingsService travel_mode_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b257010

// -[SCFeatureSettingsService travel_mode_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b257018

// -[SCFeatureSettingsService travelModeEnabled]
// Type encoding: B16@0:8
// Implementation: 0x100504c6c

// -[SCFeatureSettingsService isDataSaverExpirationMillisAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10b257020

// -[SCFeatureSettingsService dataSaverExpirationMillisServerParam]
// Type encoding: @16@0:8
// Implementation: 0x100505124

// -[SCFeatureSettingsService setDataSaverExpirationMillis:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b25702c

// -[SCFeatureSettingsService data_saver_expiration_millis_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b25703c

// -[SCFeatureSettingsService data_saver_expiration_millis_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b257044

// -[SCFeatureSettingsService dataSaverExpirationMillis]
// Type encoding: q16@0:8
// Implementation: 0x1004fb4e8

// -[SCFeatureSettingsService isLastDataSaverModeIntroPromptMillisAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10b25704c

// -[SCFeatureSettingsService lastDataSaverModeIntroPromptMillisServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b257058

// -[SCFeatureSettingsService setLastDataSaverModeIntroPromptMillis:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b257064

// -[SCFeatureSettingsService last_data_saver_mode_intro_prompt_millis_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b257074

// -[SCFeatureSettingsService last_data_saver_mode_intro_prompt_millis_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b25707c

// -[SCFeatureSettingsService lastDataSaverModeIntroPromptMillis]
// Type encoding: q16@0:8
// Implementation: 0x10b257084

// -[SCFeatureSettingsService isCompletedDiscoverFeedShowsPageOnboardingAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10b257094

// -[SCFeatureSettingsService completedDiscoverFeedShowsPageOnboardingServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b2570a0

// -[SCFeatureSettingsService setCompletedDiscoverFeedShowsPageOnboarding:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b2570ac

// -[SCFeatureSettingsService completed_discover_feed_shows_page_onboarding_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b2570bc

// -[SCFeatureSettingsService completed_discover_feed_shows_page_onboarding_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b2570c4

// -[SCFeatureSettingsService completedDiscoverFeedShowsPageOnboarding]
// Type encoding: B16@0:8
// Implementation: 0x10b2570cc

// -[SCFeatureSettingsService isDiscoverFeedManagementTooltipImpressionAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10b2570dc

// -[SCFeatureSettingsService discoverFeedManagementTooltipImpressionServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b2570e8

// -[SCFeatureSettingsService setDiscoverFeedManagementTooltipImpression:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b2570f4

// -[SCFeatureSettingsService discover_feed_management_tooltip_impression_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b257104

// -[SCFeatureSettingsService discover_feed_management_tooltip_impression_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b25710c

// -[SCFeatureSettingsService discoverFeedManagementTooltipImpression]
// Type encoding: q16@0:8
// Implementation: 0x10b257114

// -[SCFeatureSettingsService isDiscoverFeedManagementTooltipLastSeenTimeAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10b257124

// -[SCFeatureSettingsService discoverFeedManagementTooltipLastSeenTimeServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b257130

// -[SCFeatureSettingsService setDiscoverFeedManagementTooltipLastSeenTime:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b25713c

// -[SCFeatureSettingsService discover_feed_management_tooltip_last_seen_time_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b25714c

// -[SCFeatureSettingsService discover_feed_management_tooltip_last_seen_time_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b257154

// -[SCFeatureSettingsService discoverFeedManagementTooltipLastSeenTime]
// Type encoding: q16@0:8
// Implementation: 0x10b25715c

// -[SCFeatureSettingsService isHandsFreeEnabledCountAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10b257180

// -[SCFeatureSettingsService handsFreeEnabledCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b25718c

// -[SCFeatureSettingsService setHandsFreeEnabledCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b257198

// -[SCFeatureSettingsService hands_free_enabled_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b2571a8

// -[SCFeatureSettingsService hands_free_enabled_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b2571b0

// -[SCFeatureSettingsService handsFreeEnabledCount]
// Type encoding: q16@0:8
// Implementation: 0x10b2571b8

// -[SCFeatureSettingsService isHandsFreeSeenCountAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10b2571c8

// -[SCFeatureSettingsService handsFreeSeenCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b2571d4

// -[SCFeatureSettingsService setHandsFreeSeenCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b2571e0

// -[SCFeatureSettingsService hands_free_seen_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b2571f0

// -[SCFeatureSettingsService hands_free_seen_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b2571f8

// -[SCFeatureSettingsService handsFreeSeenCount]
// Type encoding: q16@0:8
// Implementation: 0x10b257200

// -[SCFeatureSettingsService isRegisterToVoteDismissed]
// Type encoding: B16@0:8
// Implementation: 0x10b257210

// -[SCFeatureSettingsService registerToVoteDismissedServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b25721c

// -[SCFeatureSettingsService setRegisterToVoteDismissed:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b257228

// -[SCFeatureSettingsService register_to_vote_dismissed_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b257238

// -[SCFeatureSettingsService register_to_vote_dismissed_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b257240

// -[SCFeatureSettingsService registerToVoteDismissed]
// Type encoding: B16@0:8
// Implementation: 0x10b257248

// -[SCFeatureSettingsService getRegisterToVotePageLink]
// Type encoding: B16@0:8
// Implementation: 0x10b257258

// -[SCFeatureSettingsService registerToVotePageLinkServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b257264

// -[SCFeatureSettingsService setRegisterToVotePageLink:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b257270

// -[SCFeatureSettingsService register_to_vote_page_link_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b257280

// -[SCFeatureSettingsService register_to_vote_page_link_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b2572a8

// -[SCFeatureSettingsService registerToVotePageLink]
// Type encoding: @16@0:8
// Implementation: 0x10b2572d0

// -[SCFeatureSettingsService isSnappablesSeenPrivacyAlertAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10b2572e4

// -[SCFeatureSettingsService snappablesSeenPrivacyAlertServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b2572f0

// -[SCFeatureSettingsService setSnappablesSeenPrivacyAlert:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b2572fc

// -[SCFeatureSettingsService snappables_seen_privacy_alert_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b25730c

// -[SCFeatureSettingsService snappables_seen_privacy_alert_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b257314

// -[SCFeatureSettingsService snappablesSeenPrivacyAlert]
// Type encoding: B16@0:8
// Implementation: 0x10b25731c

// -[SCFeatureSettingsService isSnappablesSeenCreativeToolsBannerCount]
// Type encoding: B16@0:8
// Implementation: 0x10b25732c

// -[SCFeatureSettingsService snappablesSeenCreativeToolsBannerCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b257338

// -[SCFeatureSettingsService setSnappablesSeenCreativeToolsBannerCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b257344

// -[SCFeatureSettingsService snappables_seen_creative_tools_banner_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b257354

// -[SCFeatureSettingsService snappables_seen_creative_tools_banner_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b25735c

// -[SCFeatureSettingsService snappablesSeenCreativeToolsBannerCount]
// Type encoding: q16@0:8
// Implementation: 0x10b257364

// -[SCFeatureSettingsService isSnappablesSeenPlayButtonTooltipCount]
// Type encoding: B16@0:8
// Implementation: 0x10b257374

// -[SCFeatureSettingsService snappablesSeenPlayButtonTooltipCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b257380

// -[SCFeatureSettingsService setSnappablesSeenPlayButtonTooltipCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b25738c

// -[SCFeatureSettingsService snappables_seen_play_button_tooltip_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b25739c

// -[SCFeatureSettingsService snappables_seen_play_button_tooltip_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b2573a4

// -[SCFeatureSettingsService snappablesSeenPlayButtonTooltipCount]
// Type encoding: q16@0:8
// Implementation: 0x10b2573ac

// -[SCFeatureSettingsService isSeenEagleOnboardingMessageAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10b2573bc

// -[SCFeatureSettingsService seenEagleOnboardingMessageServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b2573c8

// -[SCFeatureSettingsService setSeenEagleOnboardingMessage:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b2573d4

// -[SCFeatureSettingsService seen_eagle_onboarding_message_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b2573e4

// -[SCFeatureSettingsService seen_eagle_onboarding_message_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b2573ec

// -[SCFeatureSettingsService seenEagleOnboardingMessage]
// Type encoding: B16@0:8
// Implementation: 0x10b2573f4

// -[SCFeatureSettingsService isSpectaclesSnapStoreEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10b257404

// -[SCFeatureSettingsService spectaclesSnapStoreEnabledServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b257410

// -[SCFeatureSettingsService spectacles_snap_store_enabled_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b25741c

// -[SCFeatureSettingsService spectacles_snap_store_enabled_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b257424

// -[SCFeatureSettingsService spectaclesSnapStoreEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10b25742c

// -[SCFeatureSettingsService isSpectaclesSnapStoreDeeplinkURLAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10b25743c

// -[SCFeatureSettingsService spectaclesSnapStoreDeeplinkURLServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b257448

// -[SCFeatureSettingsService spectacles_snap_store_deeplink_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b257454

// -[SCFeatureSettingsService spectacles_snap_store_deeplink_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b25747c

// -[SCFeatureSettingsService spectaclesSnapStoreDeeplinkURL]
// Type encoding: @16@0:8
// Implementation: 0x10b2574a4

// -[SCFeatureSettingsService isSpectaclesSeenNewportFiltersTooltipAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10b2574b8

// -[SCFeatureSettingsService spectaclesSeenNewportFiltersTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b2574c4

// -[SCFeatureSettingsService setSpectaclesSeenNewportFiltersTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b2574d0

// -[SCFeatureSettingsService spectacles_seen_newport_filters_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b2574e0

// -[SCFeatureSettingsService spectacles_seen_newport_filters_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b2574e8

// -[SCFeatureSettingsService spectaclesSeenNewportFiltersTooltip]
// Type encoding: B16@0:8
// Implementation: 0x10b2574f0

// -[SCFeatureSettingsService hasSeenMultiSnapTeachingTooltipInSpecSnap]
// Type encoding: B16@0:8
// Implementation: 0x10b257500

// -[SCFeatureSettingsService seenMultiSnapTeachingTooltipInSpecSnapServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b25750c

// -[SCFeatureSettingsService setSeenMultiSnapTeachingTooltipInSpecSnap:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b257518

// -[SCFeatureSettingsService seen_multisnap_teaching_tooltip_in_spec_snap_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b257528

// -[SCFeatureSettingsService seen_multisnap_teaching_tooltip_in_spec_snap_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b257530

// -[SCFeatureSettingsService seenMultiSnapTeachingTooltipInSpecSnap]
// Type encoding: B16@0:8
// Implementation: 0x10b257538

// -[SCFeatureSettingsService isSpectaclesCompletedPairing]
// Type encoding: B16@0:8
// Implementation: 0x10b257548

// -[SCFeatureSettingsService spectaclesCompletedPairingServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b257554

// -[SCFeatureSettingsService setSpectaclesCompletedPairing:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b257560

// -[SCFeatureSettingsService spectacles_completed_pairing_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b257570

// -[SCFeatureSettingsService spectacles_completed_pairing_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b257578

// -[SCFeatureSettingsService spectaclesCompletedPairing]
// Type encoding: B16@0:8
// Implementation: 0x10b257580

// -[SCFeatureSettingsService s2rEnabledFlagIsAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10b257590

// -[SCFeatureSettingsService s2rEnabledServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b25759c

// -[SCFeatureSettingsService setS2REnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b2575a8

// -[SCFeatureSettingsService s2r_enabled_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b2575b8

// -[SCFeatureSettingsService s2r_enabled_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b2575c0

// -[SCFeatureSettingsService s2rEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10b2575c8

// -[SCFeatureSettingsService isOurStoryShowMyNameEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10b2575d8

// -[SCFeatureSettingsService ourStoryShowMyNameEnabledServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b2575e4

// -[SCFeatureSettingsService setOurStoryShowMyNameEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b2575f0

// -[SCFeatureSettingsService our_story_show_my_name_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b257600

// -[SCFeatureSettingsService our_story_show_my_name_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b257608

// -[SCFeatureSettingsService ourStoryShowMyNameEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10b257610

// -[SCFeatureSettingsService getShouldShowFriendProfileScreenshotPrivacyExplainer]
// Type encoding: B16@0:8
// Implementation: 0x10b257620

// -[SCFeatureSettingsService shouldShowFriendProfileScreenshotPrivacyExplainerServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b25762c

// -[SCFeatureSettingsService setShouldShowFriendProfileScreenshotPrivacyExplainer:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b257638

// -[SCFeatureSettingsService should_show_friend_profile_screenshot_privacy_explainer_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b257648

// -[SCFeatureSettingsService should_show_friend_profile_screenshot_privacy_explainer_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b257650

// -[SCFeatureSettingsService shouldShowFriendProfileScreenshotPrivacyExplainer]
// Type encoding: B16@0:8
// Implementation: 0x10b257658

// -[SCFeatureSettingsService isShouldShowFriendshipCompassTooltipAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10b257668

// -[SCFeatureSettingsService shouldShowFriendshipCompassTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b257674

// -[SCFeatureSettingsService setShouldShowFriendshipCompassTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b257680

// -[SCFeatureSettingsService should_show_friendship_compass_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b257690

// -[SCFeatureSettingsService should_show_friendship_compass_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b257698

// -[SCFeatureSettingsService shouldShowFriendshipCompassTooltip]
// Type encoding: B16@0:8
// Implementation: 0x10b2576a0

// -[SCFeatureSettingsService isFriendshipCompassTooltipShownCountAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10b2576b0

// -[SCFeatureSettingsService friendshipCompassTooltipShownCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b2576bc

// -[SCFeatureSettingsService setFriendshipCompassTooltipShownCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b2576c8

// -[SCFeatureSettingsService friendship_compass_tooltip_shown_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b2576d8

// -[SCFeatureSettingsService friendship_compass_tooltip_shown_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b2576e0

// -[SCFeatureSettingsService friendshipCompassTooltipShownCount]
// Type encoding: q16@0:8
// Implementation: 0x10b2576e8

// -[SCFeatureSettingsService isFriendshipCompassTooltipFirstShownTimeMillisAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10b2576f8

// -[SCFeatureSettingsService friendshipCompassTooltipFirstShownTimeMillisServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b257704

// -[SCFeatureSettingsService setFriendshipCompassTooltipFirstShownTimeMillis:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b257710

// -[SCFeatureSettingsService friendship_compass_tooltip_first_shown_time_millis_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b257720

// -[SCFeatureSettingsService friendship_compass_tooltip_first_shown_time_millis_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b257728

// -[SCFeatureSettingsService friendshipCompassTooltipFirstShownTimeMillis]
// Type encoding: q16@0:8
// Implementation: 0x10b257730

// -[SCFeatureSettingsService isPreviewStoryButtonMyStoryWarningDirectly]
// Type encoding: B16@0:8
// Implementation: 0x10b257740

// -[SCFeatureSettingsService previewStoryButtonMyStoryWarningServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b25774c

// -[SCFeatureSettingsService setPreviewStoryButtonMyStoryWarning:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b257758

// -[SCFeatureSettingsService preview_story_button_my_story_warning_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b257768

// -[SCFeatureSettingsService preview_story_button_my_story_warning_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b257770

// -[SCFeatureSettingsService previewStoryButtonMyStoryWarning]
// Type encoding: q16@0:8
// Implementation: 0x10b257778

// -[SCFeatureSettingsService isShouldShowLocationARLensNotificationAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10b257788

// -[SCFeatureSettingsService shouldShowLocationARLensNotificationServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b257794

// -[SCFeatureSettingsService setShouldShowLocationARLensNotification:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b2577a0

// -[SCFeatureSettingsService should_show_location_ar_lens_notification_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b2577b0

// -[SCFeatureSettingsService should_show_location_ar_lens_notification_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b2577b8

// -[SCFeatureSettingsService shouldShowLocationARLensNotification]
// Type encoding: B16@0:8
// Implementation: 0x10b2577c0

// -[SCFeatureSettingsService getShouldSeeCognacVoiceButtonTooltip]
// Type encoding: B16@0:8
// Implementation: 0x10b2577d0

// -[SCFeatureSettingsService shouldSeeCognacVoiceButtonTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b2577dc

// -[SCFeatureSettingsService setShouldSeeCognacVoiceButtonTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b2577e8

// -[SCFeatureSettingsService should_see_cognac_voice_button_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b2577f8

// -[SCFeatureSettingsService should_see_cognac_voice_button_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b257800

// -[SCFeatureSettingsService shouldSeeCognacVoiceButtonTooltip]
// Type encoding: B16@0:8
// Implementation: 0x10b257808

// -[SCFeatureSettingsService getShouldSeeCognacRingButtonTooltip]
// Type encoding: B16@0:8
// Implementation: 0x10b257818

// -[SCFeatureSettingsService shouldSeeCognacRingButtonTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b257824

// -[SCFeatureSettingsService setShouldSeeCognacRingButtonTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b257830

// -[SCFeatureSettingsService should_see_cognac_ring_button_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b257840

// -[SCFeatureSettingsService should_see_cognac_ring_button_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b257848

// -[SCFeatureSettingsService shouldSeeCognacRingButtonTooltip]
// Type encoding: B16@0:8
// Implementation: 0x10b257850

// -[SCFeatureSettingsService getShouldSeeCognacRocketButtonTooltip]
// Type encoding: B16@0:8
// Implementation: 0x10b257860

// -[SCFeatureSettingsService shouldSeeCognacRocketButtonTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b25786c

// -[SCFeatureSettingsService setShouldSeeCognacRocketButtonTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b257878

// -[SCFeatureSettingsService should_see_cognac_rocket_button_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b257888

// -[SCFeatureSettingsService should_see_cognac_rocket_button_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b257890

// -[SCFeatureSettingsService shouldSeeCognacRocketButtonTooltip]
// Type encoding: B16@0:8
// Implementation: 0x10b257898

// -[SCFeatureSettingsService getShouldSeeCognacChatDockTooltip]
// Type encoding: B16@0:8
// Implementation: 0x10b2578a8

// -[SCFeatureSettingsService shouldSeeCognacChatDockTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b2578b4

// -[SCFeatureSettingsService setShouldSeeCognacChatDockTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b2578c0

// -[SCFeatureSettingsService should_see_cognac_chat_dock_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b2578d0

// -[SCFeatureSettingsService should_see_cognac_chat_dock_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b2578d8

// -[SCFeatureSettingsService shouldSeeCognacChatDockTooltip]
// Type encoding: B16@0:8
// Implementation: 0x10b2578e0

// -[SCFeatureSettingsService getShouldSeeCognacChatDrawerAlert]
// Type encoding: B16@0:8
// Implementation: 0x10b2578f0

// -[SCFeatureSettingsService shouldSeeCognacChatDrawerAlertServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b2578fc

// -[SCFeatureSettingsService setShouldSeeCognacChatDrawerAlert:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b257908

// -[SCFeatureSettingsService should_see_cognac_chat_drawer_alert_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b257918

// -[SCFeatureSettingsService should_see_cognac_chat_drawer_alert_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b257920

// -[SCFeatureSettingsService shouldSeeCognacChatDrawerAlert]
// Type encoding: B16@0:8
// Implementation: 0x10b257928

// -[SCFeatureSettingsService isSearchableByEmailAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10b257938

// -[SCFeatureSettingsService searchableByEmailServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b257944

// -[SCFeatureSettingsService setSearchableByEmail:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b257950

// -[SCFeatureSettingsService searchable_by_email_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b257960

// -[SCFeatureSettingsService searchable_by_email_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b257968

// -[SCFeatureSettingsService searchableByEmail]
// Type encoding: B16@0:8
// Implementation: 0x10b257970

// -[SCFeatureSettingsService getShouldShowSnapcodeStickerStyleTooltip]
// Type encoding: B16@0:8
// Implementation: 0x10b257980

// -[SCFeatureSettingsService shouldShowSnapcodeStickerStyleTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b25798c

// -[SCFeatureSettingsService setShouldShowSnapcodeStickerStyleTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b257998

// -[SCFeatureSettingsService should_show_snapcode_sticker_style_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b2579a8

// -[SCFeatureSettingsService should_show_snapcode_sticker_style_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b2579b0

// -[SCFeatureSettingsService shouldShowSnapcodeStickerStyleTooltip]
// Type encoding: B16@0:8
// Implementation: 0x10b2579b8

// -[SCFeatureSettingsService getEmojiForNumberOneBestFriendsForOneYear]
// Type encoding: B16@0:8
// Implementation: 0x10b254d5c

// -[SCFeatureSettingsService emojiForNumberOneBestFriendsForOneYearServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b254d68

// -[SCFeatureSettingsService setEmojiForNumberOneBestFriendsForOneYear:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b254d74

// -[SCFeatureSettingsService emoji_for_number_one_best_friends_for_one_year_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b254d84

// -[SCFeatureSettingsService emoji_for_number_one_best_friends_for_one_year_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b254dac

// -[SCFeatureSettingsService emojiForNumberOneBestFriendsForOneYear]
// Type encoding: @16@0:8
// Implementation: 0x10b254dd4

// -[SCFeatureSettingsService getEmojiForNumberOneBestFriendsForSixMonths]
// Type encoding: B16@0:8
// Implementation: 0x10b254dec

// -[SCFeatureSettingsService emojiForNumberOneBestFriendsForSixMonthsServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b254df8

// -[SCFeatureSettingsService setEmojiForNumberOneBestFriendsForSixMonths:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b254e04

// -[SCFeatureSettingsService emoji_for_number_one_best_friends_for_six_months_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b254e14

// -[SCFeatureSettingsService emoji_for_number_one_best_friends_for_six_months_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b254e3c

// -[SCFeatureSettingsService emojiForNumberOneBestFriendsForSixMonths]
// Type encoding: @16@0:8
// Implementation: 0x10b254e64

// -[SCFeatureSettingsService getEmojiForBestFriends]
// Type encoding: B16@0:8
// Implementation: 0x10b254e7c

// -[SCFeatureSettingsService emojiForBestFriendsServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b254e88

// -[SCFeatureSettingsService setEmojiForBestFriends:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b254e94

// -[SCFeatureSettingsService emoji_for_best_friends_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b254ea4

// -[SCFeatureSettingsService emoji_for_best_friends_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b254ecc

// -[SCFeatureSettingsService emojiForBestFriends]
// Type encoding: @16@0:8
// Implementation: 0x10b254ef4

// -[SCFeatureSettingsService getEmojiForNumberOneBestFriends]
// Type encoding: B16@0:8
// Implementation: 0x10b254f0c

// -[SCFeatureSettingsService emojiForNumberOneBestFriendsServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b254f18

// -[SCFeatureSettingsService setEmojiForNumberOneBestFriends:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b254f24

// -[SCFeatureSettingsService emoji_for_number_one_best_friends_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b254f34

// -[SCFeatureSettingsService emoji_for_number_one_best_friends_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b254f5c

// -[SCFeatureSettingsService emojiForNumberOneBestFriends]
// Type encoding: @16@0:8
// Implementation: 0x10b254f84

// -[SCFeatureSettingsService getEmojiForNumberOneBestFriendsForTwoWeeks]
// Type encoding: B16@0:8
// Implementation: 0x10b254f9c

// -[SCFeatureSettingsService emojiForNumberOneBestFriendsForTwoWeeksServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b254fa8

// -[SCFeatureSettingsService setEmojiForNumberOneBestFriendsForTwoWeeks:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b254fb4

// -[SCFeatureSettingsService emoji_for_number_one_best_friends_for_two_weeks_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b254fc4

// -[SCFeatureSettingsService emoji_for_number_one_best_friends_for_two_weeks_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b254fec

// -[SCFeatureSettingsService emojiForNumberOneBestFriendsForTwoWeeks]
// Type encoding: @16@0:8
// Implementation: 0x10b255014

// -[SCFeatureSettingsService getEmojiForNumberOneBestFriendsForTwoMonths]
// Type encoding: B16@0:8
// Implementation: 0x10b25502c

// -[SCFeatureSettingsService emojiForNumberOneBestFriendsForTwoMonthsServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b255038

// -[SCFeatureSettingsService setEmojiForNumberOneBestFriendsForTwoMonths:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b255044

// -[SCFeatureSettingsService emoji_for_number_one_best_friends_for_two_months_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b255054

// -[SCFeatureSettingsService emoji_for_number_one_best_friends_for_two_months_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b25507c

// -[SCFeatureSettingsService emojiForNumberOneBestFriendsForTwoMonths]
// Type encoding: @16@0:8
// Implementation: 0x10b2550a4

// -[SCFeatureSettingsService getEmojiForMutualBestFriends]
// Type encoding: B16@0:8
// Implementation: 0x10b2550bc

// -[SCFeatureSettingsService emojiForMutualBestFriendsServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b2550c8

// -[SCFeatureSettingsService setEmojiForMutualBestFriends:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2550d4

// -[SCFeatureSettingsService emoji_for_mutual_best_friends_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b2550e4

// -[SCFeatureSettingsService emoji_for_mutual_best_friends_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b25510c

// -[SCFeatureSettingsService emojiForMutualBestFriends]
// Type encoding: @16@0:8
// Implementation: 0x10b255134

// -[SCFeatureSettingsService getEmojiForMutualNumberOneBestFriends]
// Type encoding: B16@0:8
// Implementation: 0x10b25514c

// -[SCFeatureSettingsService emojiForMutualNumberOneBestFriendsServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b255158

// -[SCFeatureSettingsService setEmojiForMutualNumberOneBestFriends:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b255164

// -[SCFeatureSettingsService emoji_for_mutual_number_one_best_friends_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b255174

// -[SCFeatureSettingsService emoji_for_mutual_number_one_best_friends_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b25519c

// -[SCFeatureSettingsService emojiForMutualNumberOneBestFriends]
// Type encoding: @16@0:8
// Implementation: 0x10b2551c4

// -[SCFeatureSettingsService getEmojiForSnapstreak]
// Type encoding: B16@0:8
// Implementation: 0x10b2551dc

// -[SCFeatureSettingsService emojiForSnapstreakServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b2551e8

// -[SCFeatureSettingsService setEmojiForSnapstreak:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2551f4

// -[SCFeatureSettingsService emoji_for_snapstreak_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b255204

// -[SCFeatureSettingsService emoji_for_snapstreak_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b25522c

// -[SCFeatureSettingsService emojiForSnapstreak]
// Type encoding: @16@0:8
// Implementation: 0x10b255254

// -[SCFeatureSettingsService getEmojiForPinnedConversation]
// Type encoding: B16@0:8
// Implementation: 0x10b25526c

// -[SCFeatureSettingsService emojiForPinnedConversationServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b255278

// -[SCFeatureSettingsService setEmojiForPinnedConversation:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b255284

// -[SCFeatureSettingsService emoji_for_pinned_conversation_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b255294

// -[SCFeatureSettingsService emoji_for_pinned_conversation_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b2552bc

// -[SCFeatureSettingsService emojiForPinnedConversation]
// Type encoding: @16@0:8
// Implementation: 0x10b2552e4

// -[SCFeatureSettingsService getEmojiForSnapBot]
// Type encoding: B16@0:8
// Implementation: 0x10b2552fc

// -[SCFeatureSettingsService emojiForSnapBotServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b255308

// -[SCFeatureSettingsService setEmojiForSnapBot:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b255314

// -[SCFeatureSettingsService emoji_for_merlin_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b255324

// -[SCFeatureSettingsService emoji_for_merlin_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b25534c

// -[SCFeatureSettingsService emojiForSnapBot]
// Type encoding: @16@0:8
// Implementation: 0x10b255374

// -[SCFeatureSettingsService getEmojiForTopGroups]
// Type encoding: B16@0:8
// Implementation: 0x10b25538c

// -[SCFeatureSettingsService emojiForTopGroupsServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b255398

// -[SCFeatureSettingsService setEmojiForTopGroups:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2553a4

// -[SCFeatureSettingsService emoji_for_top_groups_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b2553b4

// -[SCFeatureSettingsService emoji_for_top_groups_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b2553dc

// -[SCFeatureSettingsService emojiForTopGroups]
// Type encoding: @16@0:8
// Implementation: 0x10b255404

// -[SCFeatureSettingsService getEmojiForMutuallyPinnedBFF]
// Type encoding: B16@0:8
// Implementation: 0x10b25541c

// -[SCFeatureSettingsService emojiForMutuallyPinnedBFFServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b255428

// -[SCFeatureSettingsService setEmojiForMutuallyPinnedBFF:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b255434

// -[SCFeatureSettingsService emoji_for_mutually_pinned_bff_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b255444

// -[SCFeatureSettingsService emoji_for_mutually_pinned_bff_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b25546c

// -[SCFeatureSettingsService emojiForMutuallyPinnedBFF]
// Type encoding: @16@0:8
// Implementation: 0x10b255494

// -[SCFeatureSettingsService getEmojiForNewFriends]
// Type encoding: B16@0:8
// Implementation: 0x10b2554ac

// -[SCFeatureSettingsService emojiForNewFriendsServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10b2554b8

// -[SCFeatureSettingsService setEmojiForNewFriends:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2554c4

// -[SCFeatureSettingsService emoji_for_new_friends_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b2554d4

// -[SCFeatureSettingsService emoji_for_new_friends_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b2554fc

// -[SCFeatureSettingsService emojiForNewFriends]
// Type encoding: @16@0:8
// Implementation: 0x10b255524

// -[SCFeatureSettingsService dataSaverEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10b254624

// -[SCFeatureSettingsService isSeenLensesButtonTooltipAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10aeea5e8

// -[SCFeatureSettingsService seenLensesButtonTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10aeea5f4

// -[SCFeatureSettingsService setSeenLensesButtonTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x10aeea600

// -[SCFeatureSettingsService seen_lenses_button_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aeea610

// -[SCFeatureSettingsService seen_lenses_button_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aeea618

// -[SCFeatureSettingsService seenLensesButtonTooltip]
// Type encoding: B16@0:8
// Implementation: 0x10aeea620

// -[SCFeatureSettingsService isSeenLensesSwipeTooltipAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10aeea630

// -[SCFeatureSettingsService seenLensesSwipeTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10aeea63c

// -[SCFeatureSettingsService setSeenLensesSwipeTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x10aeea648

// -[SCFeatureSettingsService seen_lenses_swipe_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aeea658

// -[SCFeatureSettingsService seen_lenses_swipe_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aeea660

// -[SCFeatureSettingsService seenLensesSwipeTooltip]
// Type encoding: B16@0:8
// Implementation: 0x100c2a6c4

// -[SCFeatureSettingsService isLensExplorerCreatorsCategoryOnboardingCompletedAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10aeea668

// -[SCFeatureSettingsService lensExplorerCreatorsCategoryOnboardingCompletedServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10aeea674

// -[SCFeatureSettingsService setLensExplorerCreatorsCategoryOnboardingCompleted:]
// Type encoding: v20@0:8B16
// Implementation: 0x10aeea680

// -[SCFeatureSettingsService lens_explorer_onboarding_creators_category_completed_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aeea690

// -[SCFeatureSettingsService lens_explorer_onboarding_creators_category_completed_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aeea698

// -[SCFeatureSettingsService lensExplorerCreatorsCategoryOnboardingCompleted]
// Type encoding: B16@0:8
// Implementation: 0x10aeea6a0

// -[SCFeatureSettingsService isLensExplorerSwipeUpHintWasShownAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10aeea6b0

// -[SCFeatureSettingsService lensExplorerSwipeUpHintWasShownServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10aeea6bc

// -[SCFeatureSettingsService setLensExplorerSwipeUpHintWasShown:]
// Type encoding: v20@0:8B16
// Implementation: 0x10aeea6c8

// -[SCFeatureSettingsService lens_explorer_from_carousel_tooltip_was_shown_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aeea6d8

// -[SCFeatureSettingsService lens_explorer_from_carousel_tooltip_was_shown_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aeea6e0

// -[SCFeatureSettingsService lensExplorerSwipeUpHintWasShown]
// Type encoding: B16@0:8
// Implementation: 0x10aeea6e8

// -[SCFeatureSettingsService isLensExplorerFavoritesEmptyStateShownCountAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10aeea6f8

// -[SCFeatureSettingsService lensExplorerFavoritesEmptyStateShownCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10aeea704

// -[SCFeatureSettingsService setLensExplorerFavoritesEmptyStateShownCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x10aeea710

// -[SCFeatureSettingsService lens_explorer_favorites_empty_state_shown_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aeea720

// -[SCFeatureSettingsService lens_explorer_favorites_empty_state_shown_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aeea728

// -[SCFeatureSettingsService lensExplorerFavoritesEmptyStateShownCount]
// Type encoding: q16@0:8
// Implementation: 0x10aeea730

// -[SCFeatureSettingsService isLensExplorerPressAndHoldOnboardingCompletedAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10aeea740

// -[SCFeatureSettingsService lensExplorerPressAndHoldOnboardingCompletedServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10aeea74c

// -[SCFeatureSettingsService setLensExplorerPressAndHoldOnboardingCompleted:]
// Type encoding: v20@0:8B16
// Implementation: 0x10aeea758

// -[SCFeatureSettingsService lens_explorer_onboarding_press_and_hold_accepted_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aeea768

// -[SCFeatureSettingsService lens_explorer_onboarding_press_and_hold_accepted_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aeea770

// -[SCFeatureSettingsService lensExplorerPressAndHoldOnboardingCompleted]
// Type encoding: B16@0:8
// Implementation: 0x10aeea778

// -[SCFeatureSettingsService isSeenOpenLensTooltipAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10aeea788

// -[SCFeatureSettingsService seenOpenLensTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10aeea794

// -[SCFeatureSettingsService setSeenOpenLensTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x10aeea7a0

// -[SCFeatureSettingsService default_lens_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aeea7b0

// -[SCFeatureSettingsService default_lens_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aeea7b8

// -[SCFeatureSettingsService seenOpenLensTooltip]
// Type encoding: B16@0:8
// Implementation: 0x10aeea7c0

// -[SCFeatureSettingsService isChatInputSubmenuImpressionCountAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10aeea7d0

// -[SCFeatureSettingsService chatInputSubmenuImpressionCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10aeea7dc

// -[SCFeatureSettingsService setChatInputSubmenuImpressionCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x10aeea7e8

// -[SCFeatureSettingsService chat_input_submenu_impression_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aeea7f8

// -[SCFeatureSettingsService chat_input_submenu_impression_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aeea800

// -[SCFeatureSettingsService chatInputSubmenuImpressionCount]
// Type encoding: q16@0:8
// Implementation: 0x10aeea808

// -[SCFeatureSettingsService getCustomStickerSharingPrivacyAccepted]
// Type encoding: B16@0:8
// Implementation: 0x1091567d0

// -[SCFeatureSettingsService customStickerSharingPrivacyAcceptedServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1091567dc

// -[SCFeatureSettingsService setCustomStickerSharingPrivacyAccepted:]
// Type encoding: v20@0:8B16
// Implementation: 0x1091567e8

// -[SCFeatureSettingsService custom_sticker_sharing_privacy_alert_accepted_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1091567f8

// -[SCFeatureSettingsService custom_sticker_sharing_privacy_alert_accepted_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x109156800

// -[SCFeatureSettingsService customStickerSharingPrivacyAccepted]
// Type encoding: B16@0:8
// Implementation: 0x109156808

// -[SCFeatureSettingsService isSnapcodeTooltipLastImpressionTimestampSeconds]
// Type encoding: B16@0:8
// Implementation: 0x108fab2fc

// -[SCFeatureSettingsService snapcodeTooltipLastImpressionTimestampSecondsServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108fab308

// -[SCFeatureSettingsService setSnapcodeTooltipLastImpressionTimestampSeconds:]
// Type encoding: v24@0:8q16
// Implementation: 0x108fab314

// -[SCFeatureSettingsService snapcode_tooltip_last_impression_timestamp_seconds_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108fab324

// -[SCFeatureSettingsService snapcode_tooltip_last_impression_timestamp_seconds_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108fab32c

// -[SCFeatureSettingsService snapcodeTooltipLastImpressionTimestampSeconds]
// Type encoding: q16@0:8
// Implementation: 0x108fab334

// -[SCFeatureSettingsService isSnapcodeLastExpansionTimestampSeconds]
// Type encoding: B16@0:8
// Implementation: 0x108fab344

// -[SCFeatureSettingsService snapcodeLastExpansionTimestampSecondsServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108fab350

// -[SCFeatureSettingsService setSnapcodeLastExpansionTimestampSeconds:]
// Type encoding: v24@0:8q16
// Implementation: 0x108fab35c

// -[SCFeatureSettingsService snapcode_last_expansion_timestamp_seconds_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108fab36c

// -[SCFeatureSettingsService snapcode_last_expansion_timestamp_seconds_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108fab374

// -[SCFeatureSettingsService snapcodeLastExpansionTimestampSeconds]
// Type encoding: q16@0:8
// Implementation: 0x108fab37c

// -[SCFeatureSettingsService hasSeenCaptionHelp]
// Type encoding: B16@0:8
// Implementation: 0x108ee3e50

// -[SCFeatureSettingsService seenCaptionHelpServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108ee3e5c

// -[SCFeatureSettingsService setSeenCaptionHelp:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ee3e68

// -[SCFeatureSettingsService caption_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee3e78

// -[SCFeatureSettingsService caption_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee3e80

// -[SCFeatureSettingsService seenCaptionHelp]
// Type encoding: B16@0:8
// Implementation: 0x108ee3e88

// -[SCFeatureSettingsService hasSeenUnlockableStickerTooltip]
// Type encoding: B16@0:8
// Implementation: 0x108ee3e98

// -[SCFeatureSettingsService seenUnlockableStickerTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108ee3ea4

// -[SCFeatureSettingsService setSeenUnlockableStickerTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ee3eb0

// -[SCFeatureSettingsService unlockable_sticker_tooltip_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee3ec0

// -[SCFeatureSettingsService unlockable_sticker_tooltip_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee3ec8

// -[SCFeatureSettingsService seenUnlockableStickerTooltip]
// Type encoding: B16@0:8
// Implementation: 0x108ee3ed0

// -[SCFeatureSettingsService hasSeenVenueStickerTooltip]
// Type encoding: B16@0:8
// Implementation: 0x108ee3ee0

// -[SCFeatureSettingsService seenVenueStickerTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108ee3eec

// -[SCFeatureSettingsService setSeenVenueStickerTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ee3ef8

// -[SCFeatureSettingsService venue_sticker_tooltip_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee3f08

// -[SCFeatureSettingsService venue_sticker_tooltip_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee3f10

// -[SCFeatureSettingsService seenVenueStickerTooltip]
// Type encoding: B16@0:8
// Implementation: 0x108ee3f18

// -[SCFeatureSettingsService hasSeenVenueStickerStyleTooltip]
// Type encoding: B16@0:8
// Implementation: 0x108ee3f28

// -[SCFeatureSettingsService seenVenueStickerStyleTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108ee3f34

// -[SCFeatureSettingsService setSeenVenueStickerStyleTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ee3f40

// -[SCFeatureSettingsService venue_sticker_style_tooltip_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee3f50

// -[SCFeatureSettingsService venue_sticker_style_tooltip_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee3f58

// -[SCFeatureSettingsService seenVenueStickerStyleTooltip]
// Type encoding: B16@0:8
// Implementation: 0x108ee3f60

// -[SCFeatureSettingsService hasSeenSwipeHelpLabel]
// Type encoding: B16@0:8
// Implementation: 0x108ee3f70

// -[SCFeatureSettingsService seenSwipeHelpLabelServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108ee3f7c

// -[SCFeatureSettingsService setSeenSwipeHelpLabel:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ee3f88

// -[SCFeatureSettingsService swipe_filters_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee3f98

// -[SCFeatureSettingsService swipe_filters_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee3fa0

// -[SCFeatureSettingsService seenSwipeHelpLabel]
// Type encoding: B16@0:8
// Implementation: 0x108ee3fa8

// -[SCFeatureSettingsService hasSeenVenueFilterTooltip]
// Type encoding: B16@0:8
// Implementation: 0x108ee3fb8

// -[SCFeatureSettingsService seenVenueFilterTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108ee3fc4

// -[SCFeatureSettingsService setSeenVenueFilterTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ee3fd0

// -[SCFeatureSettingsService venue_filter_tooltip_seen_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee3fe0

// -[SCFeatureSettingsService venue_filter_tooltip_seen_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee3fe8

// -[SCFeatureSettingsService seenVenueFilterTooltip]
// Type encoding: B16@0:8
// Implementation: 0x108ee3ff0

// -[SCFeatureSettingsService hasSeenAudioFiltersTooltip]
// Type encoding: B16@0:8
// Implementation: 0x108ee4000

// -[SCFeatureSettingsService seenAudioFiltersTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108ee400c

// -[SCFeatureSettingsService setSeenAudioFiltersTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ee4018

// -[SCFeatureSettingsService sound_tools_tooltip_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee4028

// -[SCFeatureSettingsService sound_tools_tooltip_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee4030

// -[SCFeatureSettingsService seenAudioFiltersTooltip]
// Type encoding: B16@0:8
// Implementation: 0x108ee4038

// -[SCFeatureSettingsService hasSeenSnapReplyStickerAnimation]
// Type encoding: B16@0:8
// Implementation: 0x108ee4048

// -[SCFeatureSettingsService seenSnapReplyStickerAnimationServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108ee4054

// -[SCFeatureSettingsService setSeenSnapReplyStickerAnimation:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ee4060

// -[SCFeatureSettingsService snap_reply_sticker_animation_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee4070

// -[SCFeatureSettingsService snap_reply_sticker_animation_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee4078

// -[SCFeatureSettingsService seenSnapReplyStickerAnimation]
// Type encoding: B16@0:8
// Implementation: 0x108ee4080

// -[SCFeatureSettingsService getSeenCustomStickerDeleteHintCount]
// Type encoding: B16@0:8
// Implementation: 0x108ee4090

// -[SCFeatureSettingsService seenCustomStickerDeleteHintCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108ee409c

// -[SCFeatureSettingsService setSeenCustomStickerDeleteHintCount:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ee40a8

// -[SCFeatureSettingsService custom_sticker_delete_hint_count_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee40b8

// -[SCFeatureSettingsService custom_sticker_delete_hint_count_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee40c0

// -[SCFeatureSettingsService seenCustomStickerDeleteHintCount]
// Type encoding: B16@0:8
// Implementation: 0x108ee40c8

// -[SCFeatureSettingsService getSeenCustomStickerDeleteDragCount]
// Type encoding: B16@0:8
// Implementation: 0x108ee40d8

// -[SCFeatureSettingsService seenCustomStickerDeleteDragCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108ee40e4

// -[SCFeatureSettingsService setSeenCustomStickerDeleteDragCount:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ee40f0

// -[SCFeatureSettingsService custom_sticker_delete_drag_count_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee4100

// -[SCFeatureSettingsService custom_sticker_delete_drag_count_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee4108

// -[SCFeatureSettingsService seenCustomStickerDeleteDragCount]
// Type encoding: B16@0:8
// Implementation: 0x108ee4110

// -[SCFeatureSettingsService hasSeenBitmojiFriendmojiHint]
// Type encoding: B16@0:8
// Implementation: 0x108ee4120

// -[SCFeatureSettingsService seenBitmojiFriendmojiHintServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108ee412c

// -[SCFeatureSettingsService setSeenBitmojiFriendmojiHint:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ee4138

// -[SCFeatureSettingsService bitmoji_friendmoji_hint_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee4148

// -[SCFeatureSettingsService bitmoji_friendmoji_hint_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee4150

// -[SCFeatureSettingsService seenBitmojiFriendmojiHint]
// Type encoding: B16@0:8
// Implementation: 0x108ee4158

// -[SCFeatureSettingsService hasSeenStoriesIntroSend]
// Type encoding: B16@0:8
// Implementation: 0x108ee4168

// -[SCFeatureSettingsService seenStoriesIntroSendServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108ee4174

// -[SCFeatureSettingsService setSeenStoriesIntroSend:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ee4180

// -[SCFeatureSettingsService my_story_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee4190

// -[SCFeatureSettingsService my_story_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee4198

// -[SCFeatureSettingsService seenStoriesIntroSend]
// Type encoding: B16@0:8
// Implementation: 0x108ee41a0

// -[SCFeatureSettingsService hasSeenPinchResizeTooltip]
// Type encoding: B16@0:8
// Implementation: 0x108ee41b0

// -[SCFeatureSettingsService seenPinchResizeTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108ee41bc

// -[SCFeatureSettingsService setSeenPinchResizeTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ee41c8

// -[SCFeatureSettingsService pinch_resize_teaching_tooltip_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee41d8

// -[SCFeatureSettingsService pinch_resize_teaching_tooltip_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee41e0

// -[SCFeatureSettingsService seenPinchResizeTooltip]
// Type encoding: B16@0:8
// Implementation: 0x108ee41e8

// -[SCFeatureSettingsService hasSeenMultiSnapTeachingTooltipCount]
// Type encoding: B16@0:8
// Implementation: 0x108ee41f8

// -[SCFeatureSettingsService seenMultiSnapTeachingTooltipCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108ee4204

// -[SCFeatureSettingsService setSeenMultiSnapTeachingTooltipCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108ee4210

// -[SCFeatureSettingsService multisnap_teaching_tooltip_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee4220

// -[SCFeatureSettingsService multisnap_teaching_tooltip_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee4228

// -[SCFeatureSettingsService seenMultiSnapTeachingTooltipCount]
// Type encoding: Q16@0:8
// Implementation: 0x108ee4230

// -[SCFeatureSettingsService hasSeenCropTeachingTooltip]
// Type encoding: B16@0:8
// Implementation: 0x108ee4240

// -[SCFeatureSettingsService seenCropTeachingTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108ee424c

// -[SCFeatureSettingsService setSeenCropTeachingTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ee4258

// -[SCFeatureSettingsService crop_teaching_tooltip_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee4268

// -[SCFeatureSettingsService crop_teaching_tooltip_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee4270

// -[SCFeatureSettingsService seenCropTeachingTooltip]
// Type encoding: B16@0:8
// Implementation: 0x108ee4278

// -[SCFeatureSettingsService hasSeenUserTaggingOnboardingTooltip]
// Type encoding: B16@0:8
// Implementation: 0x108ee4288

// -[SCFeatureSettingsService seenUserTaggingOnboardingTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108ee4294

// -[SCFeatureSettingsService setSeenUserTaggingOnboardingTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ee42a0

// -[SCFeatureSettingsService user_tagging_onboard_tooltip_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee42b0

// -[SCFeatureSettingsService user_tagging_onboard_tooltip_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee42b8

// -[SCFeatureSettingsService seenUserTaggingOnboardingTooltip]
// Type encoding: B16@0:8
// Implementation: 0x108ee42c0

// -[SCFeatureSettingsService hasSeenMusicPreviewTooltip]
// Type encoding: B16@0:8
// Implementation: 0x108ee42d0

// -[SCFeatureSettingsService seenMusicPreviewTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108ee42dc

// -[SCFeatureSettingsService setSeenMusicPreviewTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ee42e8

// -[SCFeatureSettingsService music_preview_tooltip_seen_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee42f8

// -[SCFeatureSettingsService music_preview_tooltip_seen_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee4300

// -[SCFeatureSettingsService seenMusicPreviewTooltip]
// Type encoding: B16@0:8
// Implementation: 0x108ee4308

// -[SCFeatureSettingsService getSeenPreviewFilterStackingUITooltipCount]
// Type encoding: B16@0:8
// Implementation: 0x108ee4318

// -[SCFeatureSettingsService seenPreviewFilterStackingUITooltipCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108ee4324

// -[SCFeatureSettingsService setSeenPreviewFilterStackingUITooltipCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x108ee4330

// -[SCFeatureSettingsService preview_filter_stacking_ui_tooltip_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee4340

// -[SCFeatureSettingsService preview_filter_stacking_ui_tooltip_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee4348

// -[SCFeatureSettingsService seenPreviewFilterStackingUITooltipCount]
// Type encoding: q16@0:8
// Implementation: 0x108ee4350

// -[SCFeatureSettingsService hasSeenPreviewFilterStackingUISecondaryTooltip]
// Type encoding: B16@0:8
// Implementation: 0x108ee4360

// -[SCFeatureSettingsService seenPreviewFilterStackingUISecondaryTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108ee436c

// -[SCFeatureSettingsService setSeenPreviewFilterStackingUISecondaryTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ee4378

// -[SCFeatureSettingsService preview_filter_stacking_ui_secondary_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee4388

// -[SCFeatureSettingsService preview_filter_stacking_ui_secondary_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee4390

// -[SCFeatureSettingsService seenPreviewFilterStackingUISecondaryTooltip]
// Type encoding: B16@0:8
// Implementation: 0x108ee4398

// -[SCFeatureSettingsService hasSeenTimelineModeRecordMoreTooltip]
// Type encoding: B16@0:8
// Implementation: 0x108ee43a8

// -[SCFeatureSettingsService seenTimelineModeRecordMoreTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108ee43b4

// -[SCFeatureSettingsService setSeenTimelineModeRecordMoreTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ee43c0

// -[SCFeatureSettingsService timeline_mode_record_more_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee43d0

// -[SCFeatureSettingsService timeline_mode_record_more_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee43d8

// -[SCFeatureSettingsService seenTimelineModeRecordMoreTooltip]
// Type encoding: B16@0:8
// Implementation: 0x108ee43e0

// -[SCFeatureSettingsService hasSeenTimelineModeAddMoreSnapsTooltip]
// Type encoding: B16@0:8
// Implementation: 0x108ee43f0

// -[SCFeatureSettingsService seenTimelineModeAddMoreSnapsTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108ee43fc

// -[SCFeatureSettingsService setSeenTimelineModeAddMoreSnapsTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ee4408

// -[SCFeatureSettingsService timeline_mode_add_more_snaps_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee4418

// -[SCFeatureSettingsService timeline_mode_add_more_snaps_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee4420

// -[SCFeatureSettingsService seenTimelineModeAddMoreSnapsTooltip]
// Type encoding: B16@0:8
// Implementation: 0x108ee4428

// -[SCFeatureSettingsService hasSeenCustomStickerOnboardingVideo]
// Type encoding: B16@0:8
// Implementation: 0x108ee4438

// -[SCFeatureSettingsService seenCustomStickerOnboardingVideoServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108ee4444

// -[SCFeatureSettingsService setSeenCustomStickerOnboardingVideo:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ee4450

// -[SCFeatureSettingsService custom_sticker_onboarding_video_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee4460

// -[SCFeatureSettingsService custom_sticker_onboarding_video_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee4468

// -[SCFeatureSettingsService seenCustomStickerOnboardingVideo]
// Type encoding: B16@0:8
// Implementation: 0x108ee4470

// -[SCFeatureSettingsService isSmartFiltersEnabledAvailable]
// Type encoding: B16@0:8
// Implementation: 0x108ee4480

// -[SCFeatureSettingsService smartFiltersEnabledServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108ee448c

// -[SCFeatureSettingsService setSmartFiltersEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ee4498

// -[SCFeatureSettingsService smart_filters_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee44a8

// -[SCFeatureSettingsService smart_filters_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee44b0

// -[SCFeatureSettingsService smartFiltersEnabled]
// Type encoding: B16@0:8
// Implementation: 0x108ee44b8

// -[SCFeatureSettingsService isvVisualFiltersEnabledAvailable]
// Type encoding: B16@0:8
// Implementation: 0x108ee44c8

// -[SCFeatureSettingsService visualFiltersEnabledServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108ee44d4

// -[SCFeatureSettingsService setVisualFiltersEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ee44e0

// -[SCFeatureSettingsService visual_filters_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee44f0

// -[SCFeatureSettingsService visual_filters_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee44f8

// -[SCFeatureSettingsService visualFiltersEnabled]
// Type encoding: B16@0:8
// Implementation: 0x108ee4500

// -[SCFeatureSettingsService hasSeenDirectorModeClipLevelEditTooptip]
// Type encoding: B16@0:8
// Implementation: 0x108ee4510

// -[SCFeatureSettingsService seenDirectorModeClipLevelEditTooptipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108ee451c

// -[SCFeatureSettingsService setSeenDirectorModeClipLevelEditTooptip:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ee4528

// -[SCFeatureSettingsService director_mode_clip_level_edit_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee4538

// -[SCFeatureSettingsService director_mode_clip_level_edit_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee4540

// -[SCFeatureSettingsService seenDirectorModeClipLevelEditTooptip]
// Type encoding: B16@0:8
// Implementation: 0x108ee4548

// -[SCFeatureSettingsService hasSeenDirectorModeClipLevelEditFTUEModal]
// Type encoding: B16@0:8
// Implementation: 0x108ee4558

// -[SCFeatureSettingsService seenDirectorModeClipLevelEditFTUEModalServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108ee4564

// -[SCFeatureSettingsService setSeenDirectorModeClipLevelEditFTUEModal:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ee4570

// -[SCFeatureSettingsService director_mode_clip_level_edit_ftue_modal_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee4580

// -[SCFeatureSettingsService director_mode_clip_level_edit_ftue_modal_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee4588

// -[SCFeatureSettingsService seenDirectorModeClipLevelEditFTUEModal]
// Type encoding: B16@0:8
// Implementation: 0x108ee4590

// -[SCFeatureSettingsService hasSeenDirectorModeClipReorderTooltip]
// Type encoding: B16@0:8
// Implementation: 0x108ee45a0

// -[SCFeatureSettingsService seenDirectorModeClipReorderTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108ee45ac

// -[SCFeatureSettingsService setSeenDirectorModeClipReorderTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ee45b8

// -[SCFeatureSettingsService director_mode_clip_reorder_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee45c8

// -[SCFeatureSettingsService director_mode_clip_reorder_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee45d0

// -[SCFeatureSettingsService seenDirectorModeClipReorderTooltip]
// Type encoding: B16@0:8
// Implementation: 0x108ee45d8

// -[SCFeatureSettingsService hasDirectorModeDraftsUserEducationSeenCount]
// Type encoding: B16@0:8
// Implementation: 0x108ee45e8

// -[SCFeatureSettingsService directorModeDraftsUserEducationSeenCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108ee45f4

// -[SCFeatureSettingsService setDirectorModeDraftsUserEducationSeenCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x108ee4600

// -[SCFeatureSettingsService director_mode_drafts_user_education_seen_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee4610

// -[SCFeatureSettingsService director_mode_drafts_user_education_seen_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ee4618

// -[SCFeatureSettingsService directorModeDraftsUserEducationSeenCount]
// Type encoding: q16@0:8
// Implementation: 0x108ee4620

// -[SCFeatureSettingsService hasSnapKitPrivacyPolicyLastSeenTimestamp]
// Type encoding: B16@0:8
// Implementation: 0x108ecabc8

// -[SCFeatureSettingsService snapKitPrivacyPolicyLastSeenTimestampServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108ecabd4

// -[SCFeatureSettingsService setSnapKitPrivacyPolicyLastSeenTimestamp:]
// Type encoding: v24@0:8q16
// Implementation: 0x108ecabe0

// -[SCFeatureSettingsService snap_kit_login_kit_privacy_explainer_last_seen_timestamp_millis_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ecabf0

// -[SCFeatureSettingsService snap_kit_login_kit_privacy_explainer_last_seen_timestamp_millis_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ecabf8

// -[SCFeatureSettingsService snapKitPrivacyPolicyLastSeenTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x108ecac00

// -[SCFeatureSettingsService isGalleryEnabledAvailable]
// Type encoding: B16@0:8
// Implementation: 0x108e0034c

// -[SCFeatureSettingsService galleryEnabledServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108e00358

// -[SCFeatureSettingsService setGalleryEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e00364

// -[SCFeatureSettingsService gallery_enabled_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e00374

// -[SCFeatureSettingsService gallery_enabled_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e0037c

// -[SCFeatureSettingsService galleryEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10085d1ac

// -[SCFeatureSettingsService isGalleryBackupOnCellularAvailable]
// Type encoding: B16@0:8
// Implementation: 0x108e00384

// -[SCFeatureSettingsService galleryBackupOnCellularServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108e00390

// -[SCFeatureSettingsService setGalleryBackupOnCellular:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e0039c

// -[SCFeatureSettingsService gallery_back_up_on_cellular_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e003ac

// -[SCFeatureSettingsService gallery_back_up_on_cellular_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e003b4

// -[SCFeatureSettingsService galleryBackupOnCellular]
// Type encoding: B16@0:8
// Implementation: 0x108e003bc

// -[SCFeatureSettingsService isGalleryFlashbackStoriesEnabled]
// Type encoding: B16@0:8
// Implementation: 0x108e003cc

// -[SCFeatureSettingsService galleryFlashbackStoriesEnabledServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108e003d8

// -[SCFeatureSettingsService setGalleryFlashbackStoriesEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e003e4

// -[SCFeatureSettingsService gallery_flashback_stories_enabled_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e003f4

// -[SCFeatureSettingsService gallery_flashback_stories_enabled_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e003fc

// -[SCFeatureSettingsService galleryFlashbackStoriesEnabled]
// Type encoding: B16@0:8
// Implementation: 0x108e00404

// -[SCFeatureSettingsService isGalleryCollectionsSyncRequiredAvailable]
// Type encoding: B16@0:8
// Implementation: 0x108e00414

// -[SCFeatureSettingsService galleryCollectionsSyncRequiredServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108e00420

// -[SCFeatureSettingsService setGalleryCollectionsSyncRequired:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e0042c

// -[SCFeatureSettingsService gallery_collections_sync_required_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e0043c

// -[SCFeatureSettingsService gallery_collections_sync_required_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e00444

// -[SCFeatureSettingsService galleryCollectionsSyncRequired]
// Type encoding: B16@0:8
// Implementation: 0x108e0044c

// -[SCFeatureSettingsService isGallerySyncRequired]
// Type encoding: B16@0:8
// Implementation: 0x108e0045c

// -[SCFeatureSettingsService gallerySyncRequiredServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108e00468

// -[SCFeatureSettingsService setGallerySyncRequired:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e00474

// -[SCFeatureSettingsService gallery_sync_required_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e00484

// -[SCFeatureSettingsService gallery_sync_required_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e0048c

// -[SCFeatureSettingsService gallerySyncRequired]
// Type encoding: B16@0:8
// Implementation: 0x108e00494

// -[SCFeatureSettingsService isGalleryPrivateGalleryEnabledAvailable]
// Type encoding: B16@0:8
// Implementation: 0x108e004a4

// -[SCFeatureSettingsService galleryPrivateGalleryEnabledServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108e004b0

// -[SCFeatureSettingsService setGalleryPrivateGalleryEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e004bc

// -[SCFeatureSettingsService gallery_private_gallery_enabled_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e004cc

// -[SCFeatureSettingsService gallery_private_gallery_enabled_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e004d4

// -[SCFeatureSettingsService galleryPrivateGalleryEnabled]
// Type encoding: B16@0:8
// Implementation: 0x108e004dc

// -[SCFeatureSettingsService isGalleryTopSecretPrivateGalleryEnabledAvailable]
// Type encoding: B16@0:8
// Implementation: 0x108e004ec

// -[SCFeatureSettingsService galleryTopSecretPrivateGalleryEnabledServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108e004f8

// -[SCFeatureSettingsService setGalleryTopSecretPrivateGalleryEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e00504

// -[SCFeatureSettingsService gallery_top_secret_private_gallery_enabled_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e00514

// -[SCFeatureSettingsService gallery_top_secret_private_gallery_enabled_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e0051c

// -[SCFeatureSettingsService galleryTopSecretPrivateGalleryEnabled]
// Type encoding: B16@0:8
// Implementation: 0x108e00524

// -[SCFeatureSettingsService isGallerySaveToPrivateGalleryByDefaultAvailable]
// Type encoding: B16@0:8
// Implementation: 0x108e00534

// -[SCFeatureSettingsService gallerySaveToPrivateGalleryByDefaultServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108e00540

// -[SCFeatureSettingsService setGallerySaveToPrivateGalleryByDefault:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e0054c

// -[SCFeatureSettingsService gallery_save_to_private_gallery_by_default_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e0055c

// -[SCFeatureSettingsService gallery_save_to_private_gallery_by_default_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e00564

// -[SCFeatureSettingsService gallerySaveToPrivateGalleryByDefault]
// Type encoding: B16@0:8
// Implementation: 0x108e0056c

// -[SCFeatureSettingsService isGallerySnapSaveOptionAvailable]
// Type encoding: B16@0:8
// Implementation: 0x108e0057c

// -[SCFeatureSettingsService gallerySnapSaveOptionServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108e00588

// -[SCFeatureSettingsService setGallerySnapSaveOption:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e00594

// -[SCFeatureSettingsService gallery_snap_save_option_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e005a4

// -[SCFeatureSettingsService gallery_snap_save_option_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e005cc

// -[SCFeatureSettingsService gallerySnapSaveOption]
// Type encoding: @16@0:8
// Implementation: 0x108e005f4

// -[SCFeatureSettingsService isGalleryForcedResyncRequiredAvailable]
// Type encoding: B16@0:8
// Implementation: 0x108e00608

// -[SCFeatureSettingsService galleryForcedResyncRequiredServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108e00614

// -[SCFeatureSettingsService setGalleryForcedResyncRequired:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e00620

// -[SCFeatureSettingsService gallery_forced_resync_required_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e00630

// -[SCFeatureSettingsService gallery_forced_resync_required_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e00638

// -[SCFeatureSettingsService galleryForcedResyncRequired]
// Type encoding: B16@0:8
// Implementation: 0x108e00640

// -[SCFeatureSettingsService isGalleryStoryAutoSavingAvailable]
// Type encoding: B16@0:8
// Implementation: 0x108e00650

// -[SCFeatureSettingsService galleryStoryAutoSavingServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108e0065c

// -[SCFeatureSettingsService setGalleryStoryAutoSaving:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e00668

// -[SCFeatureSettingsService gallery_story_auto_saving_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e00678

// -[SCFeatureSettingsService gallery_story_auto_saving_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e00680

// -[SCFeatureSettingsService galleryStoryAutoSaving]
// Type encoding: B16@0:8
// Implementation: 0x108e00688

// -[SCFeatureSettingsService isSeenMemoriesAutoSavePostsTooltipAvailable]
// Type encoding: B16@0:8
// Implementation: 0x108e00698

// -[SCFeatureSettingsService seenMemoriesAutoSavePostsTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108e006a4

// -[SCFeatureSettingsService setSeenMemoriesAutoSavePostsTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e006b0

// -[SCFeatureSettingsService seen_memories_auto_save_posts_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e006c0

// -[SCFeatureSettingsService seen_memories_auto_save_posts_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e006c8

// -[SCFeatureSettingsService seenMemoriesAutoSavePostsTooltip]
// Type encoding: B16@0:8
// Implementation: 0x108e006d0

// -[SCFeatureSettingsService isfirstMemoriesSaveBadgeAvailable]
// Type encoding: B16@0:8
// Implementation: 0x108e006e0

// -[SCFeatureSettingsService firstMemoriesSaveBadgeServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108e006ec

// -[SCFeatureSettingsService setFirstMemoriesSaveBadge:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e006f8

// -[SCFeatureSettingsService first_memories_save_badge_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e00708

// -[SCFeatureSettingsService first_memories_save_badge_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e00710

// -[SCFeatureSettingsService firstMemoriesSaveBadge]
// Type encoding: B16@0:8
// Implementation: 0x108e00718

// -[SCFeatureSettingsService isScreenshopEnabledAvailable]
// Type encoding: B16@0:8
// Implementation: 0x108e00728

// -[SCFeatureSettingsService screenshopEnabledServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108e00734

// -[SCFeatureSettingsService setScreenshopEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e00740

// -[SCFeatureSettingsService memories_enabled_screenshop_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e00750

// -[SCFeatureSettingsService memories_enabled_screenshop_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e00758

// -[SCFeatureSettingsService screenshopEnabled]
// Type encoding: B16@0:8
// Implementation: 0x108e00760

// -[SCFeatureSettingsService isScreenshopEducationalUnitSeenCountAvailable]
// Type encoding: B16@0:8
// Implementation: 0x108e00770

// -[SCFeatureSettingsService screenshopEducationalUnitSeenCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108e0077c

// -[SCFeatureSettingsService setScreenshopEducationalUnitSeenCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x108e00788

// -[SCFeatureSettingsService screenshop_educational_unit_seen_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e00798

// -[SCFeatureSettingsService screenshop_educational_unit_seen_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e007a0

// -[SCFeatureSettingsService screenshopEducationalUnitSeenCount]
// Type encoding: q16@0:8
// Implementation: 0x108e007a8

// -[SCFeatureSettingsService isScreenshopEducationalUnitDismissCountAvailable]
// Type encoding: B16@0:8
// Implementation: 0x108e007b8

// -[SCFeatureSettingsService screenshopEducationalUnitDismissCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108e007c4

// -[SCFeatureSettingsService setScreenshopEducationalUnitDismissCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x108e007d0

// -[SCFeatureSettingsService screenshop_educational_unit_dismiss_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e007e0

// -[SCFeatureSettingsService screenshop_educational_unit_dismiss_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e007e8

// -[SCFeatureSettingsService screenshopEducationalUnitDismissCount]
// Type encoding: q16@0:8
// Implementation: 0x108e007f0

// -[SCFeatureSettingsService isScreenshopEducationalUnitDismissTimestampAvailable]
// Type encoding: B16@0:8
// Implementation: 0x108e00800

// -[SCFeatureSettingsService screenshopEducationalUnitDismissTimestampServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108e0080c

// -[SCFeatureSettingsService setScreenshopEducationalUnitDismissTimestamp:]
// Type encoding: v24@0:8q16
// Implementation: 0x108e00818

// -[SCFeatureSettingsService screenshop_educational_unit_dismiss_timestamp_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e00828

// -[SCFeatureSettingsService screenshop_educational_unit_dismiss_timestamp_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e00830

// -[SCFeatureSettingsService screenshopEducationalUnitDismissTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x108e00838

// -[SCFeatureSettingsService isFirstMemoriesSaveTooltipSeenCountAvailable]
// Type encoding: B16@0:8
// Implementation: 0x108e00848

// -[SCFeatureSettingsService firstMemoriesSaveTooltipSeenCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108e00854

// -[SCFeatureSettingsService setFirstMemoriesSaveTooltipSeenCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x108e00860

// -[SCFeatureSettingsService first_memories_save_tooltip_seen_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e00870

// -[SCFeatureSettingsService first_memories_save_tooltip_seen_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e00878

// -[SCFeatureSettingsService firstMemoriesSaveTooltipSeenCount]
// Type encoding: q16@0:8
// Implementation: 0x108e00880

// -[SCFeatureSettingsService hasSeenMemoriesCameraRollOnboardingPrompt]
// Type encoding: B16@0:8
// Implementation: 0x108e00890

// -[SCFeatureSettingsService seenMemoriesCameraRollOnboardingPromptServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108e0089c

// -[SCFeatureSettingsService setSeenMemoriesCameraRollOnboardingPrompt:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e008a8

// -[SCFeatureSettingsService memories_camera_roll_tab_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e008b8

// -[SCFeatureSettingsService memories_camera_roll_tab_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e008c0

// -[SCFeatureSettingsService seenMemoriesCameraRollOnboardingPrompt]
// Type encoding: B16@0:8
// Implementation: 0x108e008c8

// -[SCFeatureSettingsService hasSeenSaveAndReplaceTooltip]
// Type encoding: B16@0:8
// Implementation: 0x108e008d8

// -[SCFeatureSettingsService seenSaveAndReplaceTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108e008e4

// -[SCFeatureSettingsService setSeenSaveAndReplaceTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e008f0

// -[SCFeatureSettingsService save_and_replace_tooltip_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e00900

// -[SCFeatureSettingsService save_and_replace_tooltip_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e00908

// -[SCFeatureSettingsService seenSaveAndReplaceTooltip]
// Type encoding: B16@0:8
// Implementation: 0x108e00910

// -[SCFeatureSettingsService isTimelineDraftBannerFirstSeenTimestampAvailable]
// Type encoding: B16@0:8
// Implementation: 0x108e00920

// -[SCFeatureSettingsService timelineDraftBannerFirstSeenTimestampServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108e0092c

// -[SCFeatureSettingsService setTimelineDraftBannerFirstSeenTimestamp:]
// Type encoding: v24@0:8q16
// Implementation: 0x108e00938

// -[SCFeatureSettingsService timeline_draft_banner_first_seen_timestamp_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e00948

// -[SCFeatureSettingsService timeline_draft_banner_first_seen_timestamp_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e00950

// -[SCFeatureSettingsService timelineDraftBannerFirstSeenTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x108e00958

// -[SCFeatureSettingsService isNumTimesSeenSendToAutoSaveToMemoriesPromptAvailable]
// Type encoding: B16@0:8
// Implementation: 0x108e00968

// -[SCFeatureSettingsService numTimesSeenSendToAutoSaveToMemoriesPromptServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108e00974

// -[SCFeatureSettingsService setNumTimesSeenSendToAutoSaveToMemoriesPrompt:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108e00980

// -[SCFeatureSettingsService send_to_auto_save_prompt_num_times_seen_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e00990

// -[SCFeatureSettingsService send_to_auto_save_prompt_num_times_seen_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e00998

// -[SCFeatureSettingsService numTimesSeenSendToAutoSaveToMemoriesPrompt]
// Type encoding: Q16@0:8
// Implementation: 0x108e009a0

// -[SCFeatureSettingsService isLastTimeSeenSendToAutoSaveToMemoriesPromptAvailable]
// Type encoding: B16@0:8
// Implementation: 0x108e009b0

// -[SCFeatureSettingsService lastTimeSeenSendToAutoSaveToMemoriesPromptServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108e009bc

// -[SCFeatureSettingsService setLastTimeSeenSendToAutoSaveToMemoriesPrompt:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108e009c8

// -[SCFeatureSettingsService send_to_auto_save_prompt_last_seen_timestamp_seconds_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e009d8

// -[SCFeatureSettingsService send_to_auto_save_prompt_last_seen_timestamp_seconds_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e009e0

// -[SCFeatureSettingsService lastTimeSeenSendToAutoSaveToMemoriesPrompt]
// Type encoding: Q16@0:8
// Implementation: 0x108e009e8

// -[SCFeatureSettingsService isDontShowSendToAutoSaveToMemoriesPromptAvailable]
// Type encoding: B16@0:8
// Implementation: 0x108e009f8

// -[SCFeatureSettingsService dontShowSendToAutoSaveToMemoriesPromptServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108e00a04

// -[SCFeatureSettingsService setDontShowSendToAutoSaveToMemoriesPrompt:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e00a10

// -[SCFeatureSettingsService send_to_auto_save_prompt_override_do_not_show_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e00a20

// -[SCFeatureSettingsService send_to_auto_save_prompt_override_do_not_show_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e00a28

// -[SCFeatureSettingsService dontShowSendToAutoSaveToMemoriesPrompt]
// Type encoding: B16@0:8
// Implementation: 0x108e00a30

// -[SCFeatureSettingsService wasMemoriesWidgetAdded]
// Type encoding: B16@0:8
// Implementation: 0x108e00a40

// -[SCFeatureSettingsService memoriesWidgetAddedServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108e00a4c

// -[SCFeatureSettingsService setMemoriesWidgetAdded:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e00a58

// -[SCFeatureSettingsService memories_widget_added_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e00a68

// -[SCFeatureSettingsService memories_widget_added_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e00a70

// -[SCFeatureSettingsService memoriesWidgetAdded]
// Type encoding: B16@0:8
// Implementation: 0x108e00a78

// -[SCFeatureSettingsService isNumTimesSeenMemoriesWidgetEducationBannerAvailable]
// Type encoding: B16@0:8
// Implementation: 0x108e00a88

// -[SCFeatureSettingsService numTimesSeenMemoriesWidgetEducationBannerServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108e00a94

// -[SCFeatureSettingsService setNumTimesSeenMemoriesWidgetEducationBanner:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108e00aa0

// -[SCFeatureSettingsService memories_widget_education_banner_num_times_seen_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e00ab0

// -[SCFeatureSettingsService memories_widget_education_banner_num_times_seen_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e00ab8

// -[SCFeatureSettingsService numTimesSeenMemoriesWidgetEducationBanner]
// Type encoding: Q16@0:8
// Implementation: 0x108e00ac0

// -[SCFeatureSettingsService isLastTimeSeenMemoriesWidgetEducationBannerAvailable]
// Type encoding: B16@0:8
// Implementation: 0x108e00ad0

// -[SCFeatureSettingsService lastTimeSeenMemoriesWidgetEducationBannerServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108e00adc

// -[SCFeatureSettingsService setLastTimeSeenMemoriesWidgetEducationBanner:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108e00ae8

// -[SCFeatureSettingsService memories_widget_education_banner_last_seen_timestamp_seconds_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e00af8

// -[SCFeatureSettingsService memories_widget_education_banner_last_seen_timestamp_seconds_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e00b00

// -[SCFeatureSettingsService lastTimeSeenMemoriesWidgetEducationBanner]
// Type encoding: Q16@0:8
// Implementation: 0x108e00b08

// -[SCFeatureSettingsService getMemoriesLivePhotoPlaybackStyle]
// Type encoding: B16@0:8
// Implementation: 0x108e00b18

// -[SCFeatureSettingsService memoriesLivePhotoPlaybackStyleServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108e00b24

// -[SCFeatureSettingsService setMemoriesLivePhotoPlaybackStyle:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e00b30

// -[SCFeatureSettingsService camera_roll_live_photo_playback_style_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e00b40

// -[SCFeatureSettingsService camera_roll_live_photo_playback_style_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e00b68

// -[SCFeatureSettingsService memoriesLivePhotoPlaybackStyle]
// Type encoding: @16@0:8
// Implementation: 0x108e00b90

// -[SCFeatureSettingsService isScreenshopAdsDataPermissionAvailable]
// Type encoding: B16@0:8
// Implementation: 0x108e00ba4

// -[SCFeatureSettingsService screenshopAdsDataPermissionServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108e00bb0

// -[SCFeatureSettingsService setScreenshopAdsDataPermission:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e00bbc

// -[SCFeatureSettingsService commerce_screenshop_ads_data_permission_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e00bcc

// -[SCFeatureSettingsService commerce_screenshop_ads_data_permission_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e00bd4

// -[SCFeatureSettingsService screenshopAdsDataPermission]
// Type encoding: B16@0:8
// Implementation: 0x108e00bdc

// -[SCFeatureSettingsService isAddALensTooltipSeenCountAvailable]
// Type encoding: B16@0:8
// Implementation: 0x108e00bec

// -[SCFeatureSettingsService addALensTooltipSeenCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108e00bf8

// -[SCFeatureSettingsService setAddALensTooltipSeenCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108e00c04

// -[SCFeatureSettingsService add_a_lens_tooltip_seen_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e00c14

// -[SCFeatureSettingsService add_a_lens_tooltip_seen_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e00c1c

// -[SCFeatureSettingsService addALensTooltipSeenCount]
// Type encoding: Q16@0:8
// Implementation: 0x108e00c24

// -[SCFeatureSettingsService isBloopsFeatureRestrictedAvailable]
// Type encoding: B16@0:8
// Implementation: 0x108c2cb08

// -[SCFeatureSettingsService bloopsFeatureRestrictedServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108c2cb14

// -[SCFeatureSettingsService setBloopsFeatureRestricted:]
// Type encoding: v20@0:8B16
// Implementation: 0x108c2cb20

// -[SCFeatureSettingsService cameos_feature_restricted_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c2cb30

// -[SCFeatureSettingsService cameos_feature_restricted_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c2cb38

// -[SCFeatureSettingsService bloopsFeatureRestricted]
// Type encoding: B16@0:8
// Implementation: 0x108c2cb40

// -[SCFeatureSettingsService isBloopsFeatureOnboardedAvailable]
// Type encoding: B16@0:8
// Implementation: 0x108c2cb50

// -[SCFeatureSettingsService bloopsFeatureOnboardedServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108c2cb5c

// -[SCFeatureSettingsService setBloopsFeatureOnboarded:]
// Type encoding: v20@0:8B16
// Implementation: 0x108c2cb68

// -[SCFeatureSettingsService cameos_feature_onboarded_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c2cb78

// -[SCFeatureSettingsService cameos_feature_onboarded_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c2cb80

// -[SCFeatureSettingsService bloopsFeatureOnboarded]
// Type encoding: B16@0:8
// Implementation: 0x108c2cb88

// -[SCFeatureSettingsService isBloopsUserPolicyAvailable]
// Type encoding: B16@0:8
// Implementation: 0x108c2cb98

// -[SCFeatureSettingsService bloopsUserPolicyServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108c2cba4

// -[SCFeatureSettingsService setBloopsUserPolicy:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108c2cbb0

// -[SCFeatureSettingsService cameos_user_policy_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c2cbc0

// -[SCFeatureSettingsService cameos_user_policy_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c2cbc8

// -[SCFeatureSettingsService bloopsUserPolicy]
// Type encoding: Q16@0:8
// Implementation: 0x108c2cbd0

// -[SCFeatureSettingsService hasBloopsOnePersonFriendCameoNotificationDate]
// Type encoding: B16@0:8
// Implementation: 0x108c2cbe0

// -[SCFeatureSettingsService bloopsOnePersonFriendCameoNotificationDateServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108c2cbec

// -[SCFeatureSettingsService setBloopsOnePersonFriendCameoNotificationDate:]
// Type encoding: v24@0:8d16
// Implementation: 0x108c2cbf8

// -[SCFeatureSettingsService bloops_one_person_friend_cameo_notification_date_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c2cc04

// -[SCFeatureSettingsService bloops_one_person_friend_cameo_notification_date_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c2cc0c

// -[SCFeatureSettingsService bloopsOnePersonFriendCameoNotificationDate]
// Type encoding: d16@0:8
// Implementation: 0x108c2cc14

// -[SCFeatureSettingsService isBloopsUserAdsPolicyAvailable]
// Type encoding: B16@0:8
// Implementation: 0x108c2cc24

// -[SCFeatureSettingsService bloopsUserAdsPolicyServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108c2cc30

// -[SCFeatureSettingsService setBloopsUserAdsPolicy:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108c2cc3c

// -[SCFeatureSettingsService cameos_ads_policy_v2_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c2cc4c

// -[SCFeatureSettingsService cameos_ads_policy_v2_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c2cc54

// -[SCFeatureSettingsService bloopsUserAdsPolicy]
// Type encoding: Q16@0:8
// Implementation: 0x108c2cc5c

// -[SCFeatureSettingsService hasBloopsProfileGenerativeBackgroundsDisclaimerAccepted]
// Type encoding: B16@0:8
// Implementation: 0x108c2cc6c

// -[SCFeatureSettingsService bloopsProfileGenerativeBackgroundsDisclaimerAcceptedServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108c2cc78

// -[SCFeatureSettingsService setBloopsProfileGenerativeBackgroundsDisclaimerAccepted:]
// Type encoding: v20@0:8B16
// Implementation: 0x108c2cc84

// -[SCFeatureSettingsService bitmoji_profile_generative_backgrounds_disclaimer_accepted_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c2cc94

// -[SCFeatureSettingsService bitmoji_profile_generative_backgrounds_disclaimer_accepted_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c2cc9c

// -[SCFeatureSettingsService bloopsProfileGenerativeBackgroundsDisclaimerAccepted]
// Type encoding: B16@0:8
// Implementation: 0x108c2cca4

// -[SCFeatureSettingsService hasBloopsMultiverseSelfieTargetIdentifier]
// Type encoding: B16@0:8
// Implementation: 0x108c2ccb4

// -[SCFeatureSettingsService bloopsMultiverseSelfieTargetIdentifierServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108c2ccc0

// -[SCFeatureSettingsService setBloopsMultiverseSelfieTargetIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c2cccc

// -[SCFeatureSettingsService bloops_multiverse_selfie_target_identifier_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c2ccdc

// -[SCFeatureSettingsService bloops_multiverse_selfie_target_identifier_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c2cd04

// -[SCFeatureSettingsService bloopsMultiverseSelfieTargetIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x108c2cd2c

// -[SCFeatureSettingsService updateBloopsMultiverseSelfieTargetIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c2cd40

// -[SCFeatureSettingsService updateBloopsUserPolicy:]
// Type encoding: v20@0:8i16
// Implementation: 0x108c2cb00

// -[SCFeatureSettingsService isSuggestedFriendUpdateTimestampAvailable]
// Type encoding: B16@0:8
// Implementation: 0x108c084a0

// -[SCFeatureSettingsService suggestedFriendUpdateTimestampServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108c084ac

// -[SCFeatureSettingsService setSuggestedFriendUpdateTimestamp:]
// Type encoding: v24@0:8q16
// Implementation: 0x108c084b8

// -[SCFeatureSettingsService suggested_friend_update_timestamp_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c084c8

// -[SCFeatureSettingsService suggested_friend_update_timestamp_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c084d0

// -[SCFeatureSettingsService suggestedFriendUpdateTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x1009835d8

// -[SCFeatureSettingsService getLastFriendAddTakeoverDisplayedTimestamp]
// Type encoding: B16@0:8
// Implementation: 0x108c084d8

// -[SCFeatureSettingsService lastFriendAddTakeoverDisplayedTimestampServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108c084e4

// -[SCFeatureSettingsService setLastFriendAddTakeoverDisplayedTimestamp:]
// Type encoding: v24@0:8q16
// Implementation: 0x108c084f0

// -[SCFeatureSettingsService friend_add_takeover_last_displayed_timestamp_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c08500

// -[SCFeatureSettingsService friend_add_takeover_last_displayed_timestamp_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c08508

// -[SCFeatureSettingsService lastFriendAddTakeoverDisplayedTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x108c08510

// -[SCFeatureSettingsService getLastFriendAddTakeoverRequestCreatedTimestamp]
// Type encoding: B16@0:8
// Implementation: 0x108c08520

// -[SCFeatureSettingsService lastFriendAddTakeoverRequestCreatedTimestampServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108c0852c

// -[SCFeatureSettingsService setLastFriendAddTakeoverRequestCreatedTimestamp:]
// Type encoding: v24@0:8q16
// Implementation: 0x108c08538

// -[SCFeatureSettingsService friend_add_takeover_last_seen_request_created_timestamp_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c08548

// -[SCFeatureSettingsService friend_add_takeover_last_seen_request_created_timestamp_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c08550

// -[SCFeatureSettingsService lastFriendAddTakeoverRequestCreatedTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x108c08558

// -[SCFeatureSettingsService isContactBookSyncEnabledAvailable]
// Type encoding: B16@0:8
// Implementation: 0x108c08568

// -[SCFeatureSettingsService contactBookSyncEnabledServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10097d9e0

// -[SCFeatureSettingsService setContactBookSyncEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x108c08574

// -[SCFeatureSettingsService contact_book_sync_enabled_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c08584

// -[SCFeatureSettingsService contact_book_sync_enabled_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c0858c

// -[SCFeatureSettingsService contactBookSyncEnabled]
// Type encoding: B16@0:8
// Implementation: 0x108c08594

// -[SCFeatureSettingsService isSearchableByPhoneNumberAvailable]
// Type encoding: B16@0:8
// Implementation: 0x108c085a4

// -[SCFeatureSettingsService searchableByPhoneNumberServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108c085b0

// -[SCFeatureSettingsService setSearchableByPhoneNumber:]
// Type encoding: v20@0:8B16
// Implementation: 0x108c085bc

// -[SCFeatureSettingsService is_searchable_by_phone_number_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c085cc

// -[SCFeatureSettingsService is_searchable_by_phone_number_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c085d4

// -[SCFeatureSettingsService searchableByPhoneNumber]
// Type encoding: B16@0:8
// Implementation: 0x108c085dc

// -[SCFeatureSettingsService isAddedFriendsTimestampAvailable]
// Type encoding: B16@0:8
// Implementation: 0x108c085ec

// -[SCFeatureSettingsService addedFriendsTimestampServerParam]
// Type encoding: @16@0:8
// Implementation: 0x100a02aa0

// -[SCFeatureSettingsService setAddedFriendsTimestamp:]
// Type encoding: v24@0:8q16
// Implementation: 0x108c085f8

// -[SCFeatureSettingsService added_friends_timestamp_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c08608

// -[SCFeatureSettingsService added_friends_timestamp_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c08610

// -[SCFeatureSettingsService addedFriendsTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x1009e8ffc

// -[SCFeatureSettingsService isContactBookSyncVersionAvailable]
// Type encoding: B16@0:8
// Implementation: 0x108c08618

// -[SCFeatureSettingsService contactBookSyncVersionServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10097da50

// -[SCFeatureSettingsService setContactBookSyncVersion:]
// Type encoding: v24@0:8q16
// Implementation: 0x108c08624

// -[SCFeatureSettingsService contact_book_sync_version_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c08634

// -[SCFeatureSettingsService contact_book_sync_version_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c0863c

// -[SCFeatureSettingsService contactBookSyncVersion]
// Type encoding: q16@0:8
// Implementation: 0x108c08644

// -[SCFeatureSettingsService getQuickAddPrivacyV2]
// Type encoding: B16@0:8
// Implementation: 0x108c08654

// -[SCFeatureSettingsService quickAddPrivacyV2ServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108c08660

// -[SCFeatureSettingsService setQuickAddPrivacyV2:]
// Type encoding: v24@0:8q16
// Implementation: 0x108c0866c

// -[SCFeatureSettingsService quick_add_privacy_v2_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c0867c

// -[SCFeatureSettingsService quick_add_privacy_v2_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c08684

// -[SCFeatureSettingsService quickAddPrivacyV2]
// Type encoding: q16@0:8
// Implementation: 0x108c0868c

// -[SCFeatureSettingsService hasSeenInvitePrivacyAlert]
// Type encoding: B16@0:8
// Implementation: 0x108c0869c

// -[SCFeatureSettingsService seenInvitePrivacyAlertServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108c086a8

// -[SCFeatureSettingsService setSeenInvitePrivacyAlert:]
// Type encoding: v20@0:8B16
// Implementation: 0x108c086b4

// -[SCFeatureSettingsService ff_has_seen_invite_privacy_alert_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c086c4

// -[SCFeatureSettingsService ff_has_seen_invite_privacy_alert_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c086cc

// -[SCFeatureSettingsService seenInvitePrivacyAlert]
// Type encoding: B16@0:8
// Implementation: 0x108c086d4

// -[SCFeatureSettingsService getRecentlyActiveTextShownCount]
// Type encoding: B16@0:8
// Implementation: 0x108c086e4

// -[SCFeatureSettingsService recentlyActiveTextShownCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108c086f0

// -[SCFeatureSettingsService setRecentlyActiveTextShownCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x108c086fc

// -[SCFeatureSettingsService add_friends_page_recently_active_text_shown_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c0870c

// -[SCFeatureSettingsService add_friends_page_recently_active_text_shown_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c08714

// -[SCFeatureSettingsService recentlyActiveTextShownCount]
// Type encoding: q16@0:8
// Implementation: 0x108c0871c

// -[SCFeatureSettingsService getQuickAddWithoutActionImpressionCount]
// Type encoding: B16@0:8
// Implementation: 0x108c0872c

// -[SCFeatureSettingsService quickAddWithoutActionImpressionCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108c08738

// -[SCFeatureSettingsService setQuickAddWithoutActionImpressionCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x108c08744

// -[SCFeatureSettingsService stories_page_quick_add_without_action_impression_count_v2_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c08754

// -[SCFeatureSettingsService stories_page_quick_add_without_action_impression_count_v2_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c0875c

// -[SCFeatureSettingsService quickAddWithoutActionImpressionCount]
// Type encoding: q16@0:8
// Implementation: 0x108c08764

// -[SCFeatureSettingsService getQuickAddWithoutActionHideTimestamp]
// Type encoding: B16@0:8
// Implementation: 0x108c08774

// -[SCFeatureSettingsService quickAddWithoutActionHideTimestampServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108c08780

// -[SCFeatureSettingsService setQuickAddWithoutActionHideTimestamp:]
// Type encoding: v24@0:8q16
// Implementation: 0x108c0878c

// -[SCFeatureSettingsService stories_page_hiding_quick_add_timestamp_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c0879c

// -[SCFeatureSettingsService stories_page_hiding_quick_add_timestamp_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c087a4

// -[SCFeatureSettingsService quickAddWithoutActionHideTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x108c087ac

// -[SCFeatureSettingsService getFacebookContactsLastSyncTimestamp]
// Type encoding: B16@0:8
// Implementation: 0x108c087bc

// -[SCFeatureSettingsService facebookContactsLastSyncTimestampServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108c087c8

// -[SCFeatureSettingsService setFacebookContactsLastSyncTimestamp:]
// Type encoding: v24@0:8q16
// Implementation: 0x108c087d4

// -[SCFeatureSettingsService facebook_contacts_last_sync_timestamp_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c087e4

// -[SCFeatureSettingsService facebook_contacts_last_sync_timestamp_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c087ec

// -[SCFeatureSettingsService facebookContactsLastSyncTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x108c087f4

// -[SCFeatureSettingsService getFindFriendsDisabled]
// Type encoding: B16@0:8
// Implementation: 0x108c08804

// -[SCFeatureSettingsService findFriendsDisabledServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108c08810

// -[SCFeatureSettingsService setFindFriendsDisabled:]
// Type encoding: v24@0:8q16
// Implementation: 0x108c0881c

// -[SCFeatureSettingsService find_friends_disabled_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c0882c

// -[SCFeatureSettingsService find_friends_disabled_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c08834

// -[SCFeatureSettingsService findFriendsDisabled]
// Type encoding: q16@0:8
// Implementation: 0x108c0883c

// -[SCFeatureSettingsService getAddFriendTrayAcceptImpressionCount]
// Type encoding: B16@0:8
// Implementation: 0x108c0884c

// -[SCFeatureSettingsService addFriendTrayAcceptImpressionCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108c08858

// -[SCFeatureSettingsService setAddFriendTrayAcceptImpressionCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x108c08864

// -[SCFeatureSettingsService add_friend_info_tray_accept_impression_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c08874

// -[SCFeatureSettingsService add_friend_info_tray_accept_impression_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c0887c

// -[SCFeatureSettingsService addFriendTrayAcceptImpressionCount]
// Type encoding: q16@0:8
// Implementation: 0x108c08884

// -[SCFeatureSettingsService getAddFriendTrayAddImpressionCount]
// Type encoding: B16@0:8
// Implementation: 0x108c08894

// -[SCFeatureSettingsService addFriendTrayAddImpressionCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108c088a0

// -[SCFeatureSettingsService setAddFriendTrayAddImpressionCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x108c088ac

// -[SCFeatureSettingsService add_friend_info_tray_add_impression_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c088bc

// -[SCFeatureSettingsService add_friend_info_tray_add_impression_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c088c4

// -[SCFeatureSettingsService addFriendTrayAddImpressionCount]
// Type encoding: q16@0:8
// Implementation: 0x108c088cc

// -[SCFeatureSettingsService hasShowMutualFriendsList]
// Type encoding: B16@0:8
// Implementation: 0x108c088dc

// -[SCFeatureSettingsService showMutualFriendsListServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108c088e8

// -[SCFeatureSettingsService setShowMutualFriendsList:]
// Type encoding: v24@0:8q16
// Implementation: 0x108c088f4

// -[SCFeatureSettingsService SHOW_MUTUAL_FRIENDS_LIST_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c08904

// -[SCFeatureSettingsService SHOW_MUTUAL_FRIENDS_LIST_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c0890c

// -[SCFeatureSettingsService showMutualFriendsList]
// Type encoding: q16@0:8
// Implementation: 0x108c08914

// -[SCFeatureSettingsService getMutualFriendsFSTImpressionCount]
// Type encoding: B16@0:8
// Implementation: 0x108c08924

// -[SCFeatureSettingsService mutualFriendsFSTImpressionCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108c08930

// -[SCFeatureSettingsService setMutualFriendsFSTImpressionCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x108c0893c

// -[SCFeatureSettingsService FST_MUTUAL_FRIENDS_IMPRESSION_COUNT_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c0894c

// -[SCFeatureSettingsService FST_MUTUAL_FRIENDS_IMPRESSION_COUNT_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c08954

// -[SCFeatureSettingsService mutualFriendsFSTImpressionCount]
// Type encoding: q16@0:8
// Implementation: 0x108c0895c

// -[SCFeatureSettingsService hasGroupMentionStorySharePopupAccepted]
// Type encoding: B16@0:8
// Implementation: 0x108435280

// -[SCFeatureSettingsService groupMentionStorySharePopupAcceptedServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10843528c

// -[SCFeatureSettingsService setGroupMentionStorySharePopupAccepted:]
// Type encoding: v20@0:8B16
// Implementation: 0x108435298

// -[SCFeatureSettingsService GROUP_MENTION_STORY_SHARE_POPUP_ACCEPTED_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1084352a8

// -[SCFeatureSettingsService GROUP_MENTION_STORY_SHARE_POPUP_ACCEPTED_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1084352b0

// -[SCFeatureSettingsService groupMentionStorySharePopupAccepted]
// Type encoding: B16@0:8
// Implementation: 0x1084352b8

// -[SCFeatureSettingsService hasSeenSendToQuickAddAlert]
// Type encoding: B16@0:8
// Implementation: 0x108424530

// -[SCFeatureSettingsService seenSendToQuickAddAlertServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10842453c

// -[SCFeatureSettingsService setSeenSendToQuickAddAlert:]
// Type encoding: v20@0:8B16
// Implementation: 0x108424548

// -[SCFeatureSettingsService seen_quick_add_dialog_in_sendto_page_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108424558

// -[SCFeatureSettingsService seen_quick_add_dialog_in_sendto_page_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108424560

// -[SCFeatureSettingsService seenSendToQuickAddAlert]
// Type encoding: B16@0:8
// Implementation: 0x108424568

// -[SCFeatureSettingsService hasSeenSendToSMSSnapAlert]
// Type encoding: B16@0:8
// Implementation: 0x108424578

// -[SCFeatureSettingsService seenSendToSMSSnapAlertServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108424584

// -[SCFeatureSettingsService setSeenSendToSMSSnapAlert:]
// Type encoding: v20@0:8B16
// Implementation: 0x108424590

// -[SCFeatureSettingsService seen_sms_snap_dialog_in_sendto_page_v2_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1084245a0

// -[SCFeatureSettingsService seen_sms_snap_dialog_in_sendto_page_v2_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1084245a8

// -[SCFeatureSettingsService seenSendToSMSSnapAlert]
// Type encoding: B16@0:8
// Implementation: 0x1084245b0

// -[SCFeatureSettingsService hasSeenAutoFriendInviteAlert]
// Type encoding: B16@0:8
// Implementation: 0x1084245c0

// -[SCFeatureSettingsService seenAutoFriendInviteAlertServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1084245cc

// -[SCFeatureSettingsService setSeenAutoFriendInviteAlert:]
// Type encoding: v20@0:8B16
// Implementation: 0x1084245d8

// -[SCFeatureSettingsService seen_auto_friend_invite_dialog_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1084245e8

// -[SCFeatureSettingsService seen_auto_friend_invite_dialog_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1084245f0

// -[SCFeatureSettingsService seenAutoFriendInviteAlert]
// Type encoding: B16@0:8
// Implementation: 0x1084245f8

// -[SCFeatureSettingsService hasSeenCameraModuleLens]
// Type encoding: B16@0:8
// Implementation: 0x108424608

// -[SCFeatureSettingsService seenCameraModuleLensServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108424614

// -[SCFeatureSettingsService setSeenCameraModuleLens:]
// Type encoding: v20@0:8B16
// Implementation: 0x108424620

// -[SCFeatureSettingsService seen_camera_module_lens_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108424630

// -[SCFeatureSettingsService seen_camera_module_lens_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108424638

// -[SCFeatureSettingsService seenCameraModuleLens]
// Type encoding: B16@0:8
// Implementation: 0x108424640

// -[SCFeatureSettingsService hasSeenCameraModuleScan]
// Type encoding: B16@0:8
// Implementation: 0x108424650

// -[SCFeatureSettingsService seenCameraModuleScanServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10842465c

// -[SCFeatureSettingsService setSeenCameraModuleScan:]
// Type encoding: v20@0:8B16
// Implementation: 0x108424668

// -[SCFeatureSettingsService seen_camera_module_scan_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108424678

// -[SCFeatureSettingsService seen_camera_module_scan_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108424680

// -[SCFeatureSettingsService seenCameraModuleScan]
// Type encoding: B16@0:8
// Implementation: 0x108424688

// -[SCFeatureSettingsService hasSeenCameraModuleSearch]
// Type encoding: B16@0:8
// Implementation: 0x108424698

// -[SCFeatureSettingsService seenCameraModuleSearchServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1084246a4

// -[SCFeatureSettingsService setSeenCameraModuleSearch:]
// Type encoding: v20@0:8B16
// Implementation: 0x1084246b0

// -[SCFeatureSettingsService seen_camera_module_search_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1084246c0

// -[SCFeatureSettingsService seen_camera_module_search_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1084246c8

// -[SCFeatureSettingsService seenCameraModuleSearch]
// Type encoding: B16@0:8
// Implementation: 0x1084246d0

// -[SCFeatureSettingsService hasSelectedClipboardOption]
// Type encoding: B16@0:8
// Implementation: 0x1084246e0

// -[SCFeatureSettingsService selectedClipboardOptionServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1084246ec

// -[SCFeatureSettingsService setSelectedClipboardOption:]
// Type encoding: v20@0:8B16
// Implementation: 0x1084246f8

// -[SCFeatureSettingsService clipboard_detector_option_selected_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108424708

// -[SCFeatureSettingsService clipboard_detector_option_selected_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108424710

// -[SCFeatureSettingsService selectedClipboardOption]
// Type encoding: B16@0:8
// Implementation: 0x108424718

// -[SCFeatureSettingsService hasAllowedClipboardAccess]
// Type encoding: B16@0:8
// Implementation: 0x108424728

// -[SCFeatureSettingsService allowedClipboardAccessServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108424734

// -[SCFeatureSettingsService setAllowedClipboardAccess:]
// Type encoding: v20@0:8B16
// Implementation: 0x108424740

// -[SCFeatureSettingsService clipboard_detector_enabled_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108424750

// -[SCFeatureSettingsService clipboard_detector_enabled_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108424758

// -[SCFeatureSettingsService allowedClipboardAccess]
// Type encoding: B16@0:8
// Implementation: 0x108424760

// -[SCFeatureSettingsService isHasSeenMemoryLinkPrivacyAlertAvailable]
// Type encoding: B16@0:8
// Implementation: 0x108069830

// -[SCFeatureSettingsService hasSeenMemoryLinkPrivacyAlertServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10806983c

// -[SCFeatureSettingsService setHasSeenMemoryLinkPrivacyAlert:]
// Type encoding: v20@0:8B16
// Implementation: 0x108069848

// -[SCFeatureSettingsService SHARING_HAS_SEEN_MEDIA_LINK_PRIVACY_ALERT_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108069858

// -[SCFeatureSettingsService SHARING_HAS_SEEN_MEDIA_LINK_PRIVACY_ALERT_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108069860

// -[SCFeatureSettingsService hasSeenMemoryLinkPrivacyAlert]
// Type encoding: B16@0:8
// Implementation: 0x108069868

// -[SCFeatureSettingsService hasSeenMapLocationSharingNotification]
// Type encoding: B16@0:8
// Implementation: 0x108065074

// -[SCFeatureSettingsService seenMapLocationSharingNotificationServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108065080

// -[SCFeatureSettingsService setSeenMapLocationSharingNotification:]
// Type encoding: v20@0:8B16
// Implementation: 0x10806508c

// -[SCFeatureSettingsService map_location_sharing_notification_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10806509c

// -[SCFeatureSettingsService map_location_sharing_notification_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080650a4

// -[SCFeatureSettingsService seenMapLocationSharingNotification]
// Type encoding: B16@0:8
// Implementation: 0x1080650ac

// -[SCFeatureSettingsService isMapOnboardedAvailable]
// Type encoding: B16@0:8
// Implementation: 0x1080650bc

// -[SCFeatureSettingsService mapOnboardedServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1080650c8

// -[SCFeatureSettingsService setMapOnboarded:]
// Type encoding: v20@0:8B16
// Implementation: 0x1080650d4

// -[SCFeatureSettingsService map_onboarded_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080650e4

// -[SCFeatureSettingsService map_onboarded_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080650ec

// -[SCFeatureSettingsService mapOnboarded]
// Type encoding: B16@0:8
// Implementation: 0x1080650f4

// -[SCFeatureSettingsService isMapLastOpenTimeMillisAvailable]
// Type encoding: B16@0:8
// Implementation: 0x108065104

// -[SCFeatureSettingsService mapLastOpenTimeMillisServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108065110

// -[SCFeatureSettingsService setMapLastOpenTimeMillis:]
// Type encoding: v24@0:8q16
// Implementation: 0x10806511c

// -[SCFeatureSettingsService map_last_open_time_millis_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10806512c

// -[SCFeatureSettingsService map_last_open_time_millis_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108065134

// -[SCFeatureSettingsService mapLastOpenTimeMillis]
// Type encoding: q16@0:8
// Implementation: 0x10806513c

// -[SCFeatureSettingsService isRecommendPlacesToFriendsEnabledAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10806514c

// -[SCFeatureSettingsService recommendPlacesToFriendsEnabledServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108065158

// -[SCFeatureSettingsService setRecommendPlacesToFriendsEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x108065164

// -[SCFeatureSettingsService recommend_places_to_friends_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108065174

// -[SCFeatureSettingsService recommend_places_to_friends_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10806517c

// -[SCFeatureSettingsService recommendPlacesToFriendsEnabled]
// Type encoding: B16@0:8
// Implementation: 0x108065184

// -[SCFeatureSettingsService isMeTrayPlusUpsellAvailable]
// Type encoding: B16@0:8
// Implementation: 0x108065194

// -[SCFeatureSettingsService meTrayPlusOnboardedServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1080651a0

// -[SCFeatureSettingsService setMeTrayPlusUpsellOnboarded:]
// Type encoding: v20@0:8B16
// Implementation: 0x1080651ac

// -[SCFeatureSettingsService map_me_tray_plus_upsell_tooltip_seen_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080651bc

// -[SCFeatureSettingsService map_me_tray_plus_upsell_tooltip_seen_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080651c4

// -[SCFeatureSettingsService meTrayPlusOnboarded]
// Type encoding: B16@0:8
// Implementation: 0x1080651cc

// -[SCFeatureSettingsService hasSeenVisualTrayOnboardingTooltip]
// Type encoding: B16@0:8
// Implementation: 0x1080651dc

// -[SCFeatureSettingsService visualTrayOnboardingTooltipSeenServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1080651e8

// -[SCFeatureSettingsService setSeenVisualTrayOnboardingTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x1080651f4

// -[SCFeatureSettingsService visual_tray_onboarding_tooltip_seen_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108065204

// -[SCFeatureSettingsService visual_tray_onboarding_tooltip_seen_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10806520c

// -[SCFeatureSettingsService visualTrayOnboardingTooltipSeen]
// Type encoding: B16@0:8
// Implementation: 0x108065214

// -[SCFeatureSettingsService isWidgetUpsellCalloutSeenCountAvailable]
// Type encoding: B16@0:8
// Implementation: 0x108065224

// -[SCFeatureSettingsService widgetUpsellCalloutSeenCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108065230

// -[SCFeatureSettingsService setWidgetUpsellCalloutSeenCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x10806523c

// -[SCFeatureSettingsService map_widget_callout_seen_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10806524c

// -[SCFeatureSettingsService map_widget_callout_seen_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108065254

// -[SCFeatureSettingsService widgetUpsellCalloutSeenCount]
// Type encoding: q16@0:8
// Implementation: 0x10806525c

// -[SCFeatureSettingsService hasSeenPublicPlaceFavoritesTooltip]
// Type encoding: B16@0:8
// Implementation: 0x10806526c

// -[SCFeatureSettingsService publicPlaceFavoritesTooltipSeenServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108065278

// -[SCFeatureSettingsService setPublicPlaceFavoritesTooltipSeen:]
// Type encoding: v20@0:8B16
// Implementation: 0x108065284

// -[SCFeatureSettingsService public_place_favorites_tooltip_seen_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108065294

// -[SCFeatureSettingsService public_place_favorites_tooltip_seen_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10806529c

// -[SCFeatureSettingsService publicPlaceFavoritesTooltipSeen]
// Type encoding: B16@0:8
// Implementation: 0x1080652a4

// -[SCFeatureSettingsService hasSeenPublicPlaceFavoritesMapTooltip]
// Type encoding: B16@0:8
// Implementation: 0x1080652b4

// -[SCFeatureSettingsService publicPlaceFavoritesMapTooltipSeenServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1080652c0

// -[SCFeatureSettingsService setPublicPlaceFavoritesMapTooltipSeen:]
// Type encoding: v20@0:8B16
// Implementation: 0x1080652cc

// -[SCFeatureSettingsService public_place_favorites_map_tooltip_seen_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080652dc

// -[SCFeatureSettingsService public_place_favorites_map_tooltip_seen_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080652e4

// -[SCFeatureSettingsService publicPlaceFavoritesMapTooltipSeen]
// Type encoding: B16@0:8
// Implementation: 0x1080652ec

// -[SCFeatureSettingsService isNotificationMapsDisabledAvailable]
// Type encoding: B16@0:8
// Implementation: 0x1080652fc

// -[SCFeatureSettingsService notificationMapsDisabledServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108065308

// -[SCFeatureSettingsService setNotificationMapsDisabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x108065314

// -[SCFeatureSettingsService notification_maps_disabled_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108065324

// -[SCFeatureSettingsService notification_maps_disabled_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10806532c

// -[SCFeatureSettingsService notificationMapsDisabled]
// Type encoding: B16@0:8
// Implementation: 0x108065334

// -[SCFeatureSettingsService hasHomesOnTheMapOnboardingTooltipSeen]
// Type encoding: B16@0:8
// Implementation: 0x108065344

// -[SCFeatureSettingsService homesOnTheMapOnboardingTooltipSeenServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108065350

// -[SCFeatureSettingsService setHomesOnTheMapOnboardingTooltipSeen:]
// Type encoding: v20@0:8B16
// Implementation: 0x10806535c

// -[SCFeatureSettingsService homes_on_the_map_onboarding_tooptip_accepted_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10806536c

// -[SCFeatureSettingsService homes_on_the_map_onboarding_tooptip_accepted_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108065374

// -[SCFeatureSettingsService homesOnTheMapOnboardingTooltipSeen]
// Type encoding: B16@0:8
// Implementation: 0x10806537c

// -[SCFeatureSettingsService hasSeenFootstepsOnboarding]
// Type encoding: B16@0:8
// Implementation: 0x10806538c

// -[SCFeatureSettingsService footstepsOnboardingSeenServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108065398

// -[SCFeatureSettingsService setFootstepsOnboardingSeen:]
// Type encoding: v20@0:8B16
// Implementation: 0x1080653a4

// -[SCFeatureSettingsService map_footsteps_onboarding_seen_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080653b4

// -[SCFeatureSettingsService map_footsteps_onboarding_seen_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080653bc

// -[SCFeatureSettingsService footstepsOnboardingSeen]
// Type encoding: B16@0:8
// Implementation: 0x10058af34

// -[SCFeatureSettingsService isFootstepsSaveNewFootsteps]
// Type encoding: B16@0:8
// Implementation: 0x1080653c4

// -[SCFeatureSettingsService footstepsSaveNewFootstepsServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1080653d0

// -[SCFeatureSettingsService setFootstepsSaveNewFootsteps:]
// Type encoding: v20@0:8B16
// Implementation: 0x1080653dc

// -[SCFeatureSettingsService map_footsteps_save_new_footsteps_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080653ec

// -[SCFeatureSettingsService map_footsteps_save_new_footsteps_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080653f4

// -[SCFeatureSettingsService footstepsSaveNewFootsteps]
// Type encoding: B16@0:8
// Implementation: 0x1080653fc

// -[SCFeatureSettingsService hasHomesOnTheMapOnboardingV2Seen]
// Type encoding: B16@0:8
// Implementation: 0x10806540c

// -[SCFeatureSettingsService homesOnTheMapOnboardingV2SeenServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108065418

// -[SCFeatureSettingsService setHomesOnTheMapOnboardingV2Seen:]
// Type encoding: v20@0:8B16
// Implementation: 0x108065424

// -[SCFeatureSettingsService homes_on_the_map_onboarding_v2_accepted_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108065434

// -[SCFeatureSettingsService homes_on_the_map_onboarding_v2_accepted_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10806543c

// -[SCFeatureSettingsService homesOnTheMapOnboardingV2Seen]
// Type encoding: B16@0:8
// Implementation: 0x108065444

// -[SCFeatureSettingsService isAllFriendsSharingAlertSeenCountAvailable]
// Type encoding: B16@0:8
// Implementation: 0x108065454

// -[SCFeatureSettingsService allFriendsSharingAlertSeenCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108065460

// -[SCFeatureSettingsService setAllFriendsSharingAlertSeenCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x10806546c

// -[SCFeatureSettingsService map_preferences_all_friends_jit_seen_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10806547c

// -[SCFeatureSettingsService map_preferences_all_friends_jit_seen_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108065484

// -[SCFeatureSettingsService allFriendsSharingAlertSeenCount]
// Type encoding: q16@0:8
// Implementation: 0x10806548c

// -[SCFeatureSettingsService homesBadgeLastSeenTimestampAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10806549c

// -[SCFeatureSettingsService homesBadgeLastSeenTimestampServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1080654a8

// -[SCFeatureSettingsService setHomesBadgeLastSeenTimestamp:]
// Type encoding: v24@0:8q16
// Implementation: 0x1080654b4

// -[SCFeatureSettingsService homes_3d_last_seen_badge_timestamp_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080654c4

// -[SCFeatureSettingsService homes_3d_last_seen_badge_timestamp_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080654cc

// -[SCFeatureSettingsService homesBadgeLastSeenTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x1080654d4

// -[SCFeatureSettingsService hasMapFootstepsOnboardingSeenCount]
// Type encoding: B16@0:8
// Implementation: 0x1080654e4

// -[SCFeatureSettingsService mapFootstepsOnboardingSeenCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1080654f0

// -[SCFeatureSettingsService setMapFootstepsOnboardingSeenCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x1080654fc

// -[SCFeatureSettingsService map_footsteps_onboarding_seen_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10806550c

// -[SCFeatureSettingsService map_footsteps_onboarding_seen_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108065514

// -[SCFeatureSettingsService mapFootstepsOnboardingSeenCount]
// Type encoding: q16@0:8
// Implementation: 0x10806551c

// -[SCFeatureSettingsService hasMapFootstepsUpsellFirstSeenTimestamp]
// Type encoding: B16@0:8
// Implementation: 0x10806552c

// -[SCFeatureSettingsService mapFootstepsUpsellFirstSeenTimestampServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108065538

// -[SCFeatureSettingsService setMapFootstepsUpsellFirstSeenTimestamp:]
// Type encoding: v24@0:8q16
// Implementation: 0x108065544

// -[SCFeatureSettingsService map_footsteps_upsell_first_seen_ms_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108065554

// -[SCFeatureSettingsService map_footsteps_upsell_first_seen_ms_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10806555c

// -[SCFeatureSettingsService mapFootstepsUpsellFirstSeenTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x108065564

// -[SCFeatureSettingsService hasMapFootstepsOnboardingLastSeenTimestamp]
// Type encoding: B16@0:8
// Implementation: 0x108065574

// -[SCFeatureSettingsService mapFootstepsOnboardingLastSeenTimestampServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108065580

// -[SCFeatureSettingsService setMapFootstepsOnboardingLastSeenTimestamp:]
// Type encoding: v24@0:8q16
// Implementation: 0x10806558c

// -[SCFeatureSettingsService map_footsteps_onboarding_last_seen_ms_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10806559c

// -[SCFeatureSettingsService map_footsteps_onboarding_last_seen_ms_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080655a4

// -[SCFeatureSettingsService mapFootstepsOnboardingLastSeenTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x1080655ac

// -[SCFeatureSettingsService hasMapFootstepsMemoriesBackfillComplete]
// Type encoding: B16@0:8
// Implementation: 0x1080655bc

// -[SCFeatureSettingsService mapFootstepsMemoriesBackfillCompleteServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1080655c8

// -[SCFeatureSettingsService setMapFootstepsMemoriesBackfillComplete:]
// Type encoding: v20@0:8B16
// Implementation: 0x1080655d4

// -[SCFeatureSettingsService map_footsteps_memories_backfill_completed_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080655e4

// -[SCFeatureSettingsService map_footsteps_memories_backfill_completed_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080655ec

// -[SCFeatureSettingsService mapFootstepsMemoriesBackfillComplete]
// Type encoding: B16@0:8
// Implementation: 0x1080655f4

// -[SCFeatureSettingsService hasMapBackgroundLocationRecoveryUpsellDismissedTimestamp]
// Type encoding: B16@0:8
// Implementation: 0x108065604

// -[SCFeatureSettingsService mapBackgroundLocationRecoveryUpsellDismissedTimestampServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108065610

// -[SCFeatureSettingsService setMapBackgroundLocationRecoveryUpsellDismissedTimestamp:]
// Type encoding: v24@0:8q16
// Implementation: 0x10806561c

// -[SCFeatureSettingsService map_background_location_recovery_upsell_dismissed_ms_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10806562c

// -[SCFeatureSettingsService map_background_location_recovery_upsell_dismissed_ms_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108065634

// -[SCFeatureSettingsService mapBackgroundLocationRecoveryUpsellDismissedTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x10806563c

// -[SCFeatureSettingsService hasMapBackgroundLocationRecoveryUpsellSeenCount]
// Type encoding: B16@0:8
// Implementation: 0x10806564c

// -[SCFeatureSettingsService mapBackgroundLocationRecoveryUpsellSeenCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108065658

// -[SCFeatureSettingsService setMapBackgroundLocationRecoveryUpsellSeenCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x108065664

// -[SCFeatureSettingsService map_background_location_recovery_upsell_seen_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108065674

// -[SCFeatureSettingsService map_background_location_recovery_upsell_seen_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10806567c

// -[SCFeatureSettingsService mapBackgroundLocationRecoveryUpsellSeenCount]
// Type encoding: q16@0:8
// Implementation: 0x108065684

// -[SCFeatureSettingsService hasMapSimpleSnapchatOnboardingSeenCount]
// Type encoding: B16@0:8
// Implementation: 0x108065694

// -[SCFeatureSettingsService mapSimpleSnapchatOnboardingSeenCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1080656a0

// -[SCFeatureSettingsService setMapSimpleSnapchatOnboardingSeenCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x1080656ac

// -[SCFeatureSettingsService simple_snap_map_button_onboarding_seen_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080656bc

// -[SCFeatureSettingsService simple_snap_map_button_onboarding_seen_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080656c4

// -[SCFeatureSettingsService mapSimpleSnapchatOnboardingSeenCount]
// Type encoding: q16@0:8
// Implementation: 0x1080656cc

// -[SCFeatureSettingsService hasChatBackgroundLocationRecoveryPromptImpressions]
// Type encoding: B16@0:8
// Implementation: 0x1080656dc

// -[SCFeatureSettingsService chatBackgroundLocationRecoveryPromptImpressionsServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1080656e8

// -[SCFeatureSettingsService setChatBackgroundLocationRecoveryPromptImpressions:]
// Type encoding: v24@0:8q16
// Implementation: 0x1080656f4

// -[SCFeatureSettingsService chat_background_location_recovery_prompt_impressions_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108065704

// -[SCFeatureSettingsService chat_background_location_recovery_prompt_impressions_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10806570c

// -[SCFeatureSettingsService chatBackgroundLocationRecoveryPromptImpressions]
// Type encoding: q16@0:8
// Implementation: 0x108065714

// -[SCFeatureSettingsService hasChatBackgroundLocationRecoveryPromptTimestamp]
// Type encoding: B16@0:8
// Implementation: 0x108065724

// -[SCFeatureSettingsService chatBackgroundLocationRecoveryPromptTimestampServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108065730

// -[SCFeatureSettingsService setChatBackgroundLocationRecoveryPromptTimestamp:]
// Type encoding: v24@0:8q16
// Implementation: 0x10806573c

// -[SCFeatureSettingsService chat_background_location_recovery_prompt_timestamp_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10806574c

// -[SCFeatureSettingsService chat_background_location_recovery_prompt_timestamp_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108065754

// -[SCFeatureSettingsService chatBackgroundLocationRecoveryPromptTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x10806575c

// -[SCFeatureSettingsService hasMapHomeSafeCellSeenCount]
// Type encoding: B16@0:8
// Implementation: 0x10806576c

// -[SCFeatureSettingsService mapHomeSafeCellSeenCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108065778

// -[SCFeatureSettingsService setMapHomeSafeCellSeenCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x108065784

// -[SCFeatureSettingsService map_home_safe_cell_seen_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108065794

// -[SCFeatureSettingsService map_home_safe_cell_seen_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10806579c

// -[SCFeatureSettingsService mapHomeSafeCellSeenCount]
// Type encoding: q16@0:8
// Implementation: 0x1080657a4

// -[SCFeatureSettingsService hasDisplayUsernameOnSnapMap]
// Type encoding: B16@0:8
// Implementation: 0x1080657b4

// -[SCFeatureSettingsService displayUsernameOnSnapMapServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1080657c0

// -[SCFeatureSettingsService setDisplayUsernameOnSnapMap:]
// Type encoding: v20@0:8B16
// Implementation: 0x1080657cc

// -[SCFeatureSettingsService display_username_on_snap_map_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080657dc

// -[SCFeatureSettingsService display_username_on_snap_map_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080657e4

// -[SCFeatureSettingsService displayUsernameOnSnapMap]
// Type encoding: B16@0:8
// Implementation: 0x1080657ec

// -[SCFeatureSettingsService hasMapShowMyTravelStatuses]
// Type encoding: B16@0:8
// Implementation: 0x1080657fc

// -[SCFeatureSettingsService mapShowMyTravelStatusesServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108065808

// -[SCFeatureSettingsService setMapShowMyTravelStatuses:]
// Type encoding: v20@0:8B16
// Implementation: 0x108065814

// -[SCFeatureSettingsService map_show_my_travel_statuses_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108065824

// -[SCFeatureSettingsService map_show_my_travel_statuses_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10806582c

// -[SCFeatureSettingsService mapShowMyTravelStatuses]
// Type encoding: B16@0:8
// Implementation: 0x108065834

// -[SCFeatureSettingsService hasMapArrivalNotificationsOnboardingSeen]
// Type encoding: B16@0:8
// Implementation: 0x108065844

// -[SCFeatureSettingsService mapArrivalNotificationsOnboardingSeenServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108065850

// -[SCFeatureSettingsService setMapArrivalNotificationsOnboardingSeen:]
// Type encoding: v20@0:8B16
// Implementation: 0x10806585c

// -[SCFeatureSettingsService map_arrival_notifications_onboarding_seen_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10806586c

// -[SCFeatureSettingsService map_arrival_notifications_onboarding_seen_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108065874

// -[SCFeatureSettingsService mapArrivalNotificationsOnboardingSeen]
// Type encoding: B16@0:8
// Implementation: 0x10806587c

// -[SCFeatureSettingsService hasMapInferredSchoolOnboardingSeen]
// Type encoding: B16@0:8
// Implementation: 0x10806588c

// -[SCFeatureSettingsService mapInferredSchoolOnboardingSeenServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108065898

// -[SCFeatureSettingsService setMapInferredSchoolOnboardingSeen:]
// Type encoding: v20@0:8B16
// Implementation: 0x1080658a4

// -[SCFeatureSettingsService map_inferred_school_onboarding_seen_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080658b4

// -[SCFeatureSettingsService map_inferred_school_onboarding_seen_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080658bc

// -[SCFeatureSettingsService mapInferredSchoolOnboardingSeen]
// Type encoding: B16@0:8
// Implementation: 0x1080658c4

// -[SCFeatureSettingsService hasMapShareBackBannerLastSeenTimestamp]
// Type encoding: B16@0:8
// Implementation: 0x1080658d4

// -[SCFeatureSettingsService mapShareBackBannerLastSeenTimestampServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1080658e0

// -[SCFeatureSettingsService setMapShareBackBannerLastSeenTimestamp:]
// Type encoding: v24@0:8q16
// Implementation: 0x1080658ec

// -[SCFeatureSettingsService map_share_back_banner_last_seen_timestamp_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080658fc

// -[SCFeatureSettingsService map_share_back_banner_last_seen_timestamp_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108065904

// -[SCFeatureSettingsService mapShareBackBannerLastSeenTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x10806590c

// -[SCFeatureSettingsService hasMapNavBarTooltipFlowLastUpdated]
// Type encoding: B16@0:8
// Implementation: 0x10806591c

// -[SCFeatureSettingsService mapNavBarTooltipFlowLastUpdatedServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108065928

// -[SCFeatureSettingsService setMapNavBarTooltipFlowLastUpdated:]
// Type encoding: v24@0:8q16
// Implementation: 0x108065934

// -[SCFeatureSettingsService map_nav_bar_tooltip_flow_last_updated_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108065944

// -[SCFeatureSettingsService map_nav_bar_tooltip_flow_last_updated_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10806594c

// -[SCFeatureSettingsService mapNavBarTooltipFlowLastUpdated]
// Type encoding: q16@0:8
// Implementation: 0x108065954

// -[SCFeatureSettingsService hasMapNavBarTooltipShownCount]
// Type encoding: B16@0:8
// Implementation: 0x108065964

// -[SCFeatureSettingsService mapNavBarTooltipShownCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108065970

// -[SCFeatureSettingsService setMapNavBarTooltipShownCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x10806597c

// -[SCFeatureSettingsService map_nav_bar_tooltip_shown_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10806598c

// -[SCFeatureSettingsService map_nav_bar_tooltip_shown_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108065994

// -[SCFeatureSettingsService mapNavBarTooltipShownCount]
// Type encoding: q16@0:8
// Implementation: 0x10806599c

// -[SCFeatureSettingsService hasMapMusicOnboardingPromptSeenTimestamp]
// Type encoding: B16@0:8
// Implementation: 0x1080659ac

// -[SCFeatureSettingsService mapMusicOnboardingPromptSeenTimestampServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1080659b8

// -[SCFeatureSettingsService setMapMusicOnboardingPromptSeenTimestamp:]
// Type encoding: v24@0:8q16
// Implementation: 0x1080659c4

// -[SCFeatureSettingsService map_music_onboarding_prompt_seen_timestamp_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080659d4

// -[SCFeatureSettingsService map_music_onboarding_prompt_seen_timestamp_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080659dc

// -[SCFeatureSettingsService mapMusicOnboardingPromptSeenTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x1080659e4

// -[SCFeatureSettingsService hasMapMusicOnboardingPromptSeenCount]
// Type encoding: B16@0:8
// Implementation: 0x1080659f4

// -[SCFeatureSettingsService mapMusicOnboardingPromptSeenCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108065a00

// -[SCFeatureSettingsService setMapMusicOnboardingPromptSeenCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x108065a0c

// -[SCFeatureSettingsService map_music_onboarding_prompt_seen_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108065a1c

// -[SCFeatureSettingsService map_music_onboarding_prompt_seen_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108065a24

// -[SCFeatureSettingsService mapMusicOnboardingPromptSeenCount]
// Type encoding: q16@0:8
// Implementation: 0x108065a2c

// -[SCFeatureSettingsService hasMapGhostModeBannerLastSeenTimestamp]
// Type encoding: B16@0:8
// Implementation: 0x108065a3c

// -[SCFeatureSettingsService mapGhostModeBannerLastSeenTimestampServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108065a48

// -[SCFeatureSettingsService setMapGhostModeBannerLastSeenTimestamp:]
// Type encoding: v24@0:8q16
// Implementation: 0x108065a54

// -[SCFeatureSettingsService map_ghost_mode_banner_last_seen_timestamp_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108065a64

// -[SCFeatureSettingsService map_ghost_mode_banner_last_seen_timestamp_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108065a6c

// -[SCFeatureSettingsService mapGhostModeBannerLastSeenTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x108065a74

// -[SCFeatureSettingsService isSendFlowSaveableSnapAcceptedCountAvailable]
// Type encoding: B16@0:8
// Implementation: 0x108064f24

// -[SCFeatureSettingsService sendFlowSaveableSnapAcceptedCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108064f30

// -[SCFeatureSettingsService setSendFlowSaveableSnapAcceptedCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108064f3c

// -[SCFeatureSettingsService send_flow_saveable_snap_accepted_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108064f4c

// -[SCFeatureSettingsService send_flow_saveable_snap_accepted_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108064f54

// -[SCFeatureSettingsService sendFlowSaveableSnapAcceptedCount]
// Type encoding: Q16@0:8
// Implementation: 0x108064f5c

// -[SCFeatureSettingsService isSendFlowSaveableSnapVideoAcceptedCountAvailable]
// Type encoding: B16@0:8
// Implementation: 0x108064f6c

// -[SCFeatureSettingsService sendFlowSaveableSnapVideoAcceptedCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108064f78

// -[SCFeatureSettingsService setSendFlowSaveableSnapVideoAcceptedCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108064f84

// -[SCFeatureSettingsService send_flow_saveable_snap_video_accepted_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108064f94

// -[SCFeatureSettingsService send_flow_saveable_snap_video_accepted_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108064f9c

// -[SCFeatureSettingsService sendFlowSaveableSnapVideoAcceptedCount]
// Type encoding: Q16@0:8
// Implementation: 0x108064fa4

// -[SCFeatureSettingsService isPostSaveSnapEducationTooltipCountAvailable]
// Type encoding: B16@0:8
// Implementation: 0x108064fb4

// -[SCFeatureSettingsService postSaveSnapEducationTooltipCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108064fc0

// -[SCFeatureSettingsService setPostSaveSnapEducationTooltipCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108064fcc

// -[SCFeatureSettingsService post_save_snap_education_tooltip_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108064fdc

// -[SCFeatureSettingsService post_save_snap_education_tooltip_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108064fe4

// -[SCFeatureSettingsService postSaveSnapEducationTooltipCount]
// Type encoding: Q16@0:8
// Implementation: 0x108064fec

// -[SCFeatureSettingsService isSavedStoryEducationInSendToSeenCountAvailable]
// Type encoding: B16@0:8
// Implementation: 0x108064ffc

// -[SCFeatureSettingsService savedStoryEducationInSendToSeenCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108065008

// -[SCFeatureSettingsService setSavedStoryEducationInSendToSeenCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x108065014

// -[SCFeatureSettingsService SAVED_STORY_EDUCATION_IN_SENDTO_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108065024

// -[SCFeatureSettingsService SAVED_STORY_EDUCATION_IN_SENDTO_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10806502c

// -[SCFeatureSettingsService savedStoryEducationInSendToSeenCount]
// Type encoding: q16@0:8
// Implementation: 0x108065034

// -[SCFeatureSettingsService hasCommunitySectionUserInteracted]
// Type encoding: B16@0:8
// Implementation: 0x108061004

// -[SCFeatureSettingsService communitySectionUserInteractedServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108061010

// -[SCFeatureSettingsService setCommunitySectionUserInteracted:]
// Type encoding: v20@0:8B16
// Implementation: 0x10806101c

// -[SCFeatureSettingsService COMMUNITIES_SECTION_HAS_INTERACTED_PUBLIC_ALERT_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10806102c

// -[SCFeatureSettingsService COMMUNITIES_SECTION_HAS_INTERACTED_PUBLIC_ALERT_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108061034

// -[SCFeatureSettingsService communitySectionUserInteracted]
// Type encoding: B16@0:8
// Implementation: 0x10806103c

// -[SCFeatureSettingsService hasCommunityHeaderUserInteracted]
// Type encoding: B16@0:8
// Implementation: 0x10806104c

// -[SCFeatureSettingsService communityHeaderUserInteractedServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108061058

// -[SCFeatureSettingsService setCommunityHeaderUserInteracted:]
// Type encoding: v20@0:8B16
// Implementation: 0x108061064

// -[SCFeatureSettingsService COMMUNITIES_PROFILE_HEADER_HAS_INTERACTED_PUBLIC_ALERT_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108061074

// -[SCFeatureSettingsService COMMUNITIES_PROFILE_HEADER_HAS_INTERACTED_PUBLIC_ALERT_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10806107c

// -[SCFeatureSettingsService communityHeaderUserInteracted]
// Type encoding: B16@0:8
// Implementation: 0x108061084

// -[SCFeatureSettingsService hasCommunitiesSectionImpressionTimestampMillis]
// Type encoding: B16@0:8
// Implementation: 0x108060f2c

// -[SCFeatureSettingsService communitiesSectionImpressionTimestampMillisServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108060f38

// -[SCFeatureSettingsService setCommunitiesSectionImpressionTimestampMillis:]
// Type encoding: v24@0:8q16
// Implementation: 0x108060f44

// -[SCFeatureSettingsService COMMUNITIES_SECTION_IMPRESSION_TIMESTAMP_MILLIS_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108060f54

// -[SCFeatureSettingsService COMMUNITIES_SECTION_IMPRESSION_TIMESTAMP_MILLIS_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108060f5c

// -[SCFeatureSettingsService communitiesSectionImpressionTimestampMillis]
// Type encoding: q16@0:8
// Implementation: 0x108060f64

// -[SCFeatureSettingsService hasCommunitiesSectionInteractionTimestampMillis]
// Type encoding: B16@0:8
// Implementation: 0x108060f74

// -[SCFeatureSettingsService communitiesSectionInteractionTimestampMillisServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108060f80

// -[SCFeatureSettingsService setCommunitiesSectionInteractionTimestampMillis:]
// Type encoding: v24@0:8q16
// Implementation: 0x108060f8c

// -[SCFeatureSettingsService COMMUNITIES_SECTION_INTERACTION_TIMESTAMP_MILLIS_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108060f9c

// -[SCFeatureSettingsService COMMUNITIES_SECTION_INTERACTION_TIMESTAMP_MILLIS_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108060fa4

// -[SCFeatureSettingsService communitiesSectionInteractionTimestampMillis]
// Type encoding: q16@0:8
// Implementation: 0x108060fac

// -[SCFeatureSettingsService hasCommunitiesSectionInteractionCount]
// Type encoding: B16@0:8
// Implementation: 0x108060fbc

// -[SCFeatureSettingsService communitiesSectionInteractionCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108060fc8

// -[SCFeatureSettingsService setCommunitiesSectionInteractionCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x108060fd4

// -[SCFeatureSettingsService COMMUNITIES_SECTION_INTERACTION_COUNT_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108060fe4

// -[SCFeatureSettingsService COMMUNITIES_SECTION_INTERACTION_COUNT_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108060fec

// -[SCFeatureSettingsService communitiesSectionInteractionCount]
// Type encoding: q16@0:8
// Implementation: 0x108060ff4

// -[SCFeatureSettingsService isNotificationGroupCommunitiesOn]
// Type encoding: B16@0:8
// Implementation: 0x108060ee4

// -[SCFeatureSettingsService notificationGroupCommunitiesServerParam]
// Type encoding: @16@0:8
// Implementation: 0x108060ef0

// -[SCFeatureSettingsService setNotificationGroupCommunities:]
// Type encoding: v20@0:8B16
// Implementation: 0x108060efc

// -[SCFeatureSettingsService NOTIFICATION_GROUP_COMMUNITIES_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108060f0c

// -[SCFeatureSettingsService NOTIFICATION_GROUP_COMMUNITIES_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x108060f14

// -[SCFeatureSettingsService notificationGroupCommunities]
// Type encoding: B16@0:8
// Implementation: 0x108060f1c

// -[SCFeatureSettingsService hasSpotlightRepliesAutoApprovalSetting]
// Type encoding: B16@0:8
// Implementation: 0x10805e71c

// -[SCFeatureSettingsService spotlightRepliesAutoApprovalSettingServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10805e728

// -[SCFeatureSettingsService setSpotlightRepliesAutoApprovalSetting:]
// Type encoding: v24@0:8q16
// Implementation: 0x10805e734

// -[SCFeatureSettingsService spotlight_replies_auto_approval_setting_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805e744

// -[SCFeatureSettingsService spotlight_replies_auto_approval_setting_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805e74c

// -[SCFeatureSettingsService spotlightRepliesAutoApprovalSetting]
// Type encoding: q16@0:8
// Implementation: 0x10805e754

// -[SCFeatureSettingsService hasSeenSpotlightSubmissionOnboardingPromptV2]
// Type encoding: B16@0:8
// Implementation: 0x10805e764

// -[SCFeatureSettingsService seenSpotlightSubmissionOnboardingPromptV2ServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10805e770

// -[SCFeatureSettingsService setSeenSpotlightSubmissionOnboardingPromptV2:]
// Type encoding: v20@0:8B16
// Implementation: 0x10805e77c

// -[SCFeatureSettingsService spotlight_submission_onboarding_prompt_v2_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805e78c

// -[SCFeatureSettingsService spotlight_submission_onboarding_prompt_v2_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805e794

// -[SCFeatureSettingsService seenSpotlightSubmissionOnboardingPromptV2]
// Type encoding: B16@0:8
// Implementation: 0x10805e79c

// -[SCFeatureSettingsService hasSeenSpotlightPolicyVersion]
// Type encoding: B16@0:8
// Implementation: 0x10805e7ac

// -[SCFeatureSettingsService seenSpotlightPolicyVersionServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10805e7b8

// -[SCFeatureSettingsService setSeenSpotlightPolicyVersion:]
// Type encoding: v24@0:8q16
// Implementation: 0x10805e7c4

// -[SCFeatureSettingsService spotlight_accepted_policy_version_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805e7d4

// -[SCFeatureSettingsService spotlight_accepted_policy_version_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805e7dc

// -[SCFeatureSettingsService seenSpotlightPolicyVersion]
// Type encoding: q16@0:8
// Implementation: 0x10805e7e4

// -[SCFeatureSettingsService hasSeenSpotlightTrendingButtonLabel]
// Type encoding: B16@0:8
// Implementation: 0x10805e7f4

// -[SCFeatureSettingsService seenSpotlightTrendingButtonLabelTimesServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10805e800

// -[SCFeatureSettingsService setSeenSpotlightTrendingButtonLabelTimes:]
// Type encoding: v24@0:8q16
// Implementation: 0x10805e80c

// -[SCFeatureSettingsService spotlight_trending_button_label_impressions_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805e81c

// -[SCFeatureSettingsService spotlight_trending_button_label_impressions_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805e824

// -[SCFeatureSettingsService seenSpotlightTrendingButtonLabelTimes]
// Type encoding: q16@0:8
// Implementation: 0x10805e82c

// -[SCFeatureSettingsService hasSeenSpotlightShowMyNameWarning]
// Type encoding: B16@0:8
// Implementation: 0x10805e83c

// -[SCFeatureSettingsService seenSpotlightShowMyNameWarningServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10805e848

// -[SCFeatureSettingsService setSeenSpotlightShowMyNameWarning:]
// Type encoding: v20@0:8B16
// Implementation: 0x10805e854

// -[SCFeatureSettingsService spotlight_submission_attribution_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805e864

// -[SCFeatureSettingsService spotlight_submission_attribution_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805e86c

// -[SCFeatureSettingsService seenSpotlightShowMyNameWarning]
// Type encoding: B16@0:8
// Implementation: 0x10805e874

// -[SCFeatureSettingsService hasSeenSnapMapSubmissionOnboardingPrompt]
// Type encoding: B16@0:8
// Implementation: 0x10805e884

// -[SCFeatureSettingsService seenSnapMapSubmissionOnboardingPromptServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10805e890

// -[SCFeatureSettingsService setSeenSnapMapSubmissionOnboardingPrompt:]
// Type encoding: v20@0:8B16
// Implementation: 0x10805e89c

// -[SCFeatureSettingsService snap_map_story_onboarding_prompt_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805e8ac

// -[SCFeatureSettingsService snap_map_story_onboarding_prompt_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805e8b4

// -[SCFeatureSettingsService seenSnapMapSubmissionOnboardingPrompt]
// Type encoding: B16@0:8
// Implementation: 0x10805e8bc

// -[SCFeatureSettingsService hasSeenSnapMapOnboardingPromptV2]
// Type encoding: B16@0:8
// Implementation: 0x10805e8cc

// -[SCFeatureSettingsService seenSnapMapOnboardingPromptV2ServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10805e8d8

// -[SCFeatureSettingsService setSeenSnapMapOnboardingPromptV2:]
// Type encoding: v20@0:8B16
// Implementation: 0x10805e8e4

// -[SCFeatureSettingsService snap_map_story_onboarding_prompt_v2_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805e8f4

// -[SCFeatureSettingsService snap_map_story_onboarding_prompt_v2_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805e8fc

// -[SCFeatureSettingsService seenSnapMapOnboardingPromptV2]
// Type encoding: B16@0:8
// Implementation: 0x10805e904

// -[SCFeatureSettingsService hasSeenSnapMapShowMyNameWarning]
// Type encoding: B16@0:8
// Implementation: 0x10805e914

// -[SCFeatureSettingsService seenSnapMapShowMyNameWarningServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10805e920

// -[SCFeatureSettingsService setSeenSnapMapShowMyNameWarning:]
// Type encoding: v20@0:8B16
// Implementation: 0x10805e92c

// -[SCFeatureSettingsService snap_map_story_submission_attribution_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805e93c

// -[SCFeatureSettingsService snap_map_story_submission_attribution_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805e944

// -[SCFeatureSettingsService seenSnapMapShowMyNameWarning]
// Type encoding: B16@0:8
// Implementation: 0x10805e94c

// -[SCFeatureSettingsService hasSeenDiscoverNewUserOverlay]
// Type encoding: B16@0:8
// Implementation: 0x10805e95c

// -[SCFeatureSettingsService seenDiscoverNewUserOverlayServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10805e968

// -[SCFeatureSettingsService setSeenDiscoverNewUserOverlay:]
// Type encoding: v20@0:8B16
// Implementation: 0x10805e974

// -[SCFeatureSettingsService discover_onboarding_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805e984

// -[SCFeatureSettingsService discover_onboarding_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805e98c

// -[SCFeatureSettingsService seenDiscoverNewUserOverlay]
// Type encoding: B16@0:8
// Implementation: 0x10805e994

// -[SCFeatureSettingsService hasSeenDiscoverTapOnboarding]
// Type encoding: B16@0:8
// Implementation: 0x10805e9a4

// -[SCFeatureSettingsService seenDiscoverTapOnboardingServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10805e9b0

// -[SCFeatureSettingsService setSeenDiscoverTapOnboarding:]
// Type encoding: v20@0:8B16
// Implementation: 0x10805e9bc

// -[SCFeatureSettingsService discover_tap_onboarding_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805e9cc

// -[SCFeatureSettingsService discover_tap_onboarding_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805e9d4

// -[SCFeatureSettingsService seenDiscoverTapOnboarding]
// Type encoding: B16@0:8
// Implementation: 0x10805e9dc

// -[SCFeatureSettingsService hasSeenDiscoverTapOnboardingCount]
// Type encoding: B16@0:8
// Implementation: 0x10805e9ec

// -[SCFeatureSettingsService seenDiscoverTapOnboardingCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10805e9f8

// -[SCFeatureSettingsService setSeenDiscoverTapOnboardingCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10805ea04

// -[SCFeatureSettingsService seen_discover_tap_onboarding_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805ea14

// -[SCFeatureSettingsService seen_discover_tap_onboarding_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805ea1c

// -[SCFeatureSettingsService seenDiscoverTapOnboardingCount]
// Type encoding: Q16@0:8
// Implementation: 0x10805ea24

// -[SCFeatureSettingsService hasSeenAutoAdvanceTooltip]
// Type encoding: B16@0:8
// Implementation: 0x10805ea34

// -[SCFeatureSettingsService seenAutoAdvanceTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10805ea40

// -[SCFeatureSettingsService setSeenAutoAdvanceTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x10805ea4c

// -[SCFeatureSettingsService auto_advance_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805ea5c

// -[SCFeatureSettingsService auto_advance_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805ea64

// -[SCFeatureSettingsService seenAutoAdvanceTooltip]
// Type encoding: B16@0:8
// Implementation: 0x10805ea6c

// -[SCFeatureSettingsService hasSeenStoryLeftTapOnboarding]
// Type encoding: B16@0:8
// Implementation: 0x10805ea7c

// -[SCFeatureSettingsService seenStoryLeftTapOnboardingServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10805ea88

// -[SCFeatureSettingsService setSeenStoryLeftTapOnboarding:]
// Type encoding: v20@0:8B16
// Implementation: 0x10805ea94

// -[SCFeatureSettingsService stories_left_tap_onboarding_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805eaa4

// -[SCFeatureSettingsService stories_left_tap_onboarding_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805eaac

// -[SCFeatureSettingsService seenStoryLeftTapOnboarding]
// Type encoding: B16@0:8
// Implementation: 0x10805eab4

// -[SCFeatureSettingsService hasSeenStoryInterstitialSwipeTooltip]
// Type encoding: B16@0:8
// Implementation: 0x10805eac4

// -[SCFeatureSettingsService seenStoryInterstitialSwipeTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10805ead0

// -[SCFeatureSettingsService setSeenStoryInterstitialSwipeTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x10805eadc

// -[SCFeatureSettingsService story_interstitial_swipe_tooltip_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805eaec

// -[SCFeatureSettingsService story_interstitial_swipe_tooltip_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805eaf4

// -[SCFeatureSettingsService seenStoryInterstitialSwipeTooltip]
// Type encoding: B16@0:8
// Implementation: 0x10805eafc

// -[SCFeatureSettingsService hasSeenStoriesForInterstitialSwipeTooltipCount]
// Type encoding: B16@0:8
// Implementation: 0x10805eb0c

// -[SCFeatureSettingsService seenStoriesForInterstitialSwipeTooltipCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10805eb18

// -[SCFeatureSettingsService setSeenStoriesForInterstitialSwipeTooltipCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10805eb24

// -[SCFeatureSettingsService seen_stories_for_interstitial_swipe_tooltip_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805eb34

// -[SCFeatureSettingsService seen_stories_for_interstitial_swipe_tooltip_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805eb3c

// -[SCFeatureSettingsService seenStoriesForInterstitialSwipeTooltipCount]
// Type encoding: Q16@0:8
// Implementation: 0x10805eb44

// -[SCFeatureSettingsService isNotificationSubmittedStoryEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10805eb54

// -[SCFeatureSettingsService notificationSubmittedStoryServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10805eb60

// -[SCFeatureSettingsService setNotificationSubmittedStory:]
// Type encoding: v20@0:8B16
// Implementation: 0x10805eb6c

// -[SCFeatureSettingsService notification_submitted_story_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805eb7c

// -[SCFeatureSettingsService notification_submitted_story_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805eb84

// -[SCFeatureSettingsService notificationSubmittedStory]
// Type encoding: B16@0:8
// Implementation: 0x10805eb8c

// -[SCFeatureSettingsService isNotificationOurStoryViewCountAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10805eb9c

// -[SCFeatureSettingsService notificationOurStoryViewCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10805eba8

// -[SCFeatureSettingsService setNotificationOurStoryViewCount:]
// Type encoding: v20@0:8B16
// Implementation: 0x10805ebb4

// -[SCFeatureSettingsService notification_our_story_view_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805ebc4

// -[SCFeatureSettingsService notification_our_story_view_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805ebcc

// -[SCFeatureSettingsService notificationOurStoryViewCount]
// Type encoding: B16@0:8
// Implementation: 0x10805ebd4

// -[SCFeatureSettingsService hasSharedStoryModerationPromptAccepted]
// Type encoding: B16@0:8
// Implementation: 0x10805ebe4

// -[SCFeatureSettingsService sharedStoryModerationPromptAcceptedServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10805ebf0

// -[SCFeatureSettingsService setSharedStoryModerationPromptAccepted:]
// Type encoding: v20@0:8B16
// Implementation: 0x10805ebfc

// -[SCFeatureSettingsService shared_story_moderation_prompt_accepted_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805ec0c

// -[SCFeatureSettingsService shared_story_moderation_prompt_accepted_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805ec14

// -[SCFeatureSettingsService sharedStoryModerationPromptAccepted]
// Type encoding: B16@0:8
// Implementation: 0x10805ec1c

// -[SCFeatureSettingsService isNotificationOurStoryReplyCountAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10805ec2c

// -[SCFeatureSettingsService notificationOurStoryReplyCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10805ec38

// -[SCFeatureSettingsService setNotificationOurStoryReplyCount:]
// Type encoding: v20@0:8B16
// Implementation: 0x10805ec44

// -[SCFeatureSettingsService notification_our_story_reply_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805ec54

// -[SCFeatureSettingsService notification_our_story_reply_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805ec5c

// -[SCFeatureSettingsService notificationOurStoryReplyCount]
// Type encoding: B16@0:8
// Implementation: 0x10805ec64

// -[SCFeatureSettingsService hasSharedStoryNewStoryMenuBadgeAccepted]
// Type encoding: B16@0:8
// Implementation: 0x10805ec74

// -[SCFeatureSettingsService sharedStoryNewStoryMenuBadgeServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10805ec80

// -[SCFeatureSettingsService setSharedStoryNewStoryMenuBadgeAccepted:]
// Type encoding: v20@0:8B16
// Implementation: 0x10805ec8c

// -[SCFeatureSettingsService shared_story_new_story_menu_badge_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805ec9c

// -[SCFeatureSettingsService shared_story_new_story_menu_badge_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805eca4

// -[SCFeatureSettingsService sharedStoryNewStoryMenuBadge]
// Type encoding: B16@0:8
// Implementation: 0x10805ecac

// -[SCFeatureSettingsService hasSharedStoryNewStoryActionBadgeAccepted]
// Type encoding: B16@0:8
// Implementation: 0x10805ecbc

// -[SCFeatureSettingsService sharedStoryNewStoryActionBadgeServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10805ecc8

// -[SCFeatureSettingsService setSharedStoryNewStoryActionBadgeAccepted:]
// Type encoding: v20@0:8B16
// Implementation: 0x10805ecd4

// -[SCFeatureSettingsService shared_story_new_story_action_badge_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805ece4

// -[SCFeatureSettingsService shared_story_new_story_action_badge_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805ecec

// -[SCFeatureSettingsService sharedStoryNewStoryActionBadge]
// Type encoding: B16@0:8
// Implementation: 0x10805ecf4

// -[SCFeatureSettingsService hasPrivateStoryIntroPromptAccepted]
// Type encoding: B16@0:8
// Implementation: 0x10805ed04

// -[SCFeatureSettingsService privateStoryIntroPromptAcceptedServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10805ed10

// -[SCFeatureSettingsService setPrivateStoryIntroPromptAccepted:]
// Type encoding: v20@0:8B16
// Implementation: 0x10805ed1c

// -[SCFeatureSettingsService private_story_intro_prompt_accepted_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805ed2c

// -[SCFeatureSettingsService private_story_intro_prompt_accepted_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805ed34

// -[SCFeatureSettingsService privateStoryIntroPromptAccepted]
// Type encoding: B16@0:8
// Implementation: 0x10805ed3c

// -[SCFeatureSettingsService hasCustomStoryIntroPromptAccepted]
// Type encoding: B16@0:8
// Implementation: 0x10805ed4c

// -[SCFeatureSettingsService customStoryIntroPromptAcceptedServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10805ed58

// -[SCFeatureSettingsService setCustomStoryIntroPromptAccepted:]
// Type encoding: v20@0:8B16
// Implementation: 0x10805ed64

// -[SCFeatureSettingsService custom_story_intro_prompt_accepted_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805ed74

// -[SCFeatureSettingsService custom_story_intro_prompt_accepted_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805ed7c

// -[SCFeatureSettingsService customStoryIntroPromptAccepted]
// Type encoding: B16@0:8
// Implementation: 0x10805ed84

// -[SCFeatureSettingsService hasCommunityStoryIntroPromptAccepted]
// Type encoding: B16@0:8
// Implementation: 0x10805ed94

// -[SCFeatureSettingsService communityStoryIntroPromptAcceptedServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10805eda0

// -[SCFeatureSettingsService setCommunityStoryIntroPromptAccepted:]
// Type encoding: v20@0:8B16
// Implementation: 0x10805edac

// -[SCFeatureSettingsService community_story_intro_prompt_accepted_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805edbc

// -[SCFeatureSettingsService community_story_intro_prompt_accepted_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805edc4

// -[SCFeatureSettingsService communityStoryIntroPromptAccepted]
// Type encoding: B16@0:8
// Implementation: 0x10805edcc

// -[SCFeatureSettingsService hasSeenMyStorySettingsPrompt]
// Type encoding: B16@0:8
// Implementation: 0x10805eddc

// -[SCFeatureSettingsService seenMyStorySettingsPromptServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10805ede8

// -[SCFeatureSettingsService setSeenMyStorySettingsPrompt:]
// Type encoding: v20@0:8B16
// Implementation: 0x10805edf4

// -[SCFeatureSettingsService my_story_settings_prompt_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805ee04

// -[SCFeatureSettingsService my_story_settings_prompt_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805ee0c

// -[SCFeatureSettingsService seenMyStorySettingsPrompt]
// Type encoding: B16@0:8
// Implementation: 0x10805ee14

// -[SCFeatureSettingsService hasSeenSpotlightPostButtonTooltip]
// Type encoding: B16@0:8
// Implementation: 0x10805ee24

// -[SCFeatureSettingsService spotlightHasSeenPostButtonTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10805ee30

// -[SCFeatureSettingsService setSeenSpotlightPostButtonTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x10805ee3c

// -[SCFeatureSettingsService spotlight_has_seen_post_button_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805ee4c

// -[SCFeatureSettingsService spotlight_has_seen_post_button_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805ee54

// -[SCFeatureSettingsService spotlightHasSeenPostButtonTooltip]
// Type encoding: B16@0:8
// Implementation: 0x10805ee5c

// -[SCFeatureSettingsService hasSpotlightPostButtonTapped]
// Type encoding: B16@0:8
// Implementation: 0x10805ee6c

// -[SCFeatureSettingsService spotlightHasTappedPostButtonServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10805ee78

// -[SCFeatureSettingsService setSpotlightPostButtonTapped:]
// Type encoding: v20@0:8B16
// Implementation: 0x10805ee84

// -[SCFeatureSettingsService spotlight_has_tapped_post_button_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805ee94

// -[SCFeatureSettingsService spotlight_has_tapped_post_button_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805ee9c

// -[SCFeatureSettingsService spotlightHasTappedPostButton]
// Type encoding: B16@0:8
// Implementation: 0x10805eea4

// -[SCFeatureSettingsService hasSpotlightPostButtonTooltipLastSeenTimestamp]
// Type encoding: B16@0:8
// Implementation: 0x10805eeb4

// -[SCFeatureSettingsService spotlightPostButtonTooltipLastSeenTimestampServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10805eec0

// -[SCFeatureSettingsService setSpotlightPostButtonTooltipLastSeenTimestamp:]
// Type encoding: v24@0:8q16
// Implementation: 0x10805eecc

// -[SCFeatureSettingsService spotlight_post_button_tooltip_last_seen_timestamp_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805eedc

// -[SCFeatureSettingsService spotlight_post_button_tooltip_last_seen_timestamp_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805eee4

// -[SCFeatureSettingsService spotlightPostButtonTooltipLastSeenTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x10805eeec

// -[SCFeatureSettingsService hasSpotlightPostButtonTooltipSeenCount]
// Type encoding: B16@0:8
// Implementation: 0x10805eefc

// -[SCFeatureSettingsService spotlightPostButtonTooltipSeenCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10805ef08

// -[SCFeatureSettingsService setSpotlightPostButtonTooltipSeenCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x10805ef14

// -[SCFeatureSettingsService spotlight_post_button_tooltip_seen_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805ef24

// -[SCFeatureSettingsService spotlight_post_button_tooltip_seen_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805ef2c

// -[SCFeatureSettingsService spotlightPostButtonTooltipSeenCount]
// Type encoding: q16@0:8
// Implementation: 0x10805ef34

// -[SCFeatureSettingsService isDsaOptOutOfFullPersonalization]
// Type encoding: B16@0:8
// Implementation: 0x10805ef44

// -[SCFeatureSettingsService dsaOptOutOfFullPersonalizationServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10805ef50

// -[SCFeatureSettingsService setDsaOptOutOfFullPersonalization:]
// Type encoding: v20@0:8B16
// Implementation: 0x10805ef5c

// -[SCFeatureSettingsService eu_dsa_opt_out_of_full_personalization_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805ef6c

// -[SCFeatureSettingsService eu_dsa_opt_out_of_full_personalization_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805ef74

// -[SCFeatureSettingsService dsaOptOutOfFullPersonalization]
// Type encoding: B16@0:8
// Implementation: 0x10805ef7c

// -[SCFeatureSettingsService isLastSnoozedFofTimestampMs]
// Type encoding: B16@0:8
// Implementation: 0x10805ef8c

// -[SCFeatureSettingsService lastSnoozedFofTimestampMsServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10805ef98

// -[SCFeatureSettingsService setLastSnoozedFofTimestampMs:]
// Type encoding: v24@0:8q16
// Implementation: 0x10805efa4

// -[SCFeatureSettingsService last_snoozed_fof_timestamp_ms_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805efb4

// -[SCFeatureSettingsService last_snoozed_fof_timestamp_ms_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805efbc

// -[SCFeatureSettingsService lastSnoozedFofTimestampMs]
// Type encoding: q16@0:8
// Implementation: 0x10805efc4

// -[SCFeatureSettingsService hasContentRecommendNotifImpressionLimit]
// Type encoding: B16@0:8
// Implementation: 0x10805efd4

// -[SCFeatureSettingsService contentRecommendNotifImpressionLimitServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10805efe0

// -[SCFeatureSettingsService setContentRecommendNotifImpressionLimit:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10805efec

// -[SCFeatureSettingsService content_recommend_notif_impression_limit_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805effc

// -[SCFeatureSettingsService content_recommend_notif_impression_limit_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805f004

// -[SCFeatureSettingsService contentRecommendNotifImpressionLimit]
// Type encoding: Q16@0:8
// Implementation: 0x10805f00c

// -[SCFeatureSettingsService hasMyStoriesInCarouselLearningSeen]
// Type encoding: B16@0:8
// Implementation: 0x10805f01c

// -[SCFeatureSettingsService myStoriesInCarouselLearningSeenServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10805f028

// -[SCFeatureSettingsService setMyStoriesInCarouselLearningSeen:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10805f034

// -[SCFeatureSettingsService my_stories_in_carousel_learning_seen_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805f044

// -[SCFeatureSettingsService my_stories_in_carousel_learning_seen_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805f04c

// -[SCFeatureSettingsService myStoriesInCarouselLearningSeen]
// Type encoding: Q16@0:8
// Implementation: 0x10805f054

// -[SCFeatureSettingsService hasContentViewingHistoryResetTimestamp]
// Type encoding: B16@0:8
// Implementation: 0x10805f064

// -[SCFeatureSettingsService contentViewingHistoryResetTimestampServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10805f070

// -[SCFeatureSettingsService setContentViewingHistoryResetTimestamp:]
// Type encoding: v24@0:8q16
// Implementation: 0x10805f07c

// -[SCFeatureSettingsService content_viewing_history_reset_timestamp_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805f08c

// -[SCFeatureSettingsService content_viewing_history_reset_timestamp_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805f094

// -[SCFeatureSettingsService contentViewingHistoryResetTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x10805f09c

// -[SCFeatureSettingsService hasSeenCommentFavoritedByCreatorModal]
// Type encoding: B16@0:8
// Implementation: 0x10805f0ac

// -[SCFeatureSettingsService commentFavoritedByCreatorModalSeenServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10805f0b8

// -[SCFeatureSettingsService setCommentFavoritedByCreatorModalSeen:]
// Type encoding: v20@0:8B16
// Implementation: 0x10805f0c4

// -[SCFeatureSettingsService comment_favorited_by_creator_modal_seen_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805f0d4

// -[SCFeatureSettingsService comment_favorited_by_creator_modal_seen_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805f0dc

// -[SCFeatureSettingsService commentFavoritedByCreatorModalSeen]
// Type encoding: B16@0:8
// Implementation: 0x10805f0e4

// -[SCFeatureSettingsService hasContentQuickShareEducationSeenCount]
// Type encoding: B16@0:8
// Implementation: 0x10805f0f4

// -[SCFeatureSettingsService contentQuickShareEducationSeenCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10805f100

// -[SCFeatureSettingsService setContentQuickShareEducationSeenCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10805f10c

// -[SCFeatureSettingsService content_quick_share_education_seen_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805f11c

// -[SCFeatureSettingsService content_quick_share_education_seen_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805f124

// -[SCFeatureSettingsService contentQuickShareEducationSeenCount]
// Type encoding: Q16@0:8
// Implementation: 0x10805f12c

// -[SCFeatureSettingsService hasContentQuickShareEducationLastSeenTimestamp]
// Type encoding: B16@0:8
// Implementation: 0x10805f13c

// -[SCFeatureSettingsService contentQuickShareEducationLastSeenTimestampServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10805f148

// -[SCFeatureSettingsService setContentQuickShareEducationLastSeenTimestamp:]
// Type encoding: v24@0:8q16
// Implementation: 0x10805f154

// -[SCFeatureSettingsService content_quick_share_education_last_seen_timestamp_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805f164

// -[SCFeatureSettingsService content_quick_share_education_last_seen_timestamp_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805f16c

// -[SCFeatureSettingsService contentQuickShareEducationLastSeenTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x10805f174

// -[SCFeatureSettingsService hasContentRecommendToStoriesImpressionCount]
// Type encoding: B16@0:8
// Implementation: 0x10805f184

// -[SCFeatureSettingsService contentRecommendToStoriesImpressionCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10805f190

// -[SCFeatureSettingsService setContentRecommendToStoriesImpressionCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10805f19c

// -[SCFeatureSettingsService content_recommend_to_stories_impression_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805f1ac

// -[SCFeatureSettingsService content_recommend_to_stories_impression_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805f1b4

// -[SCFeatureSettingsService contentRecommendToStoriesImpressionCount]
// Type encoding: Q16@0:8
// Implementation: 0x10805f1bc

// -[SCFeatureSettingsService hasSpotlightPauseShareUpsellSeenCount]
// Type encoding: B16@0:8
// Implementation: 0x10805f1cc

// -[SCFeatureSettingsService spotlightPauseShareUpsellSeenCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10805f1d8

// -[SCFeatureSettingsService setSpotlightPauseShareUpsellSeenCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10805f1e4

// -[SCFeatureSettingsService spotlight_pause_share_upsell_seen_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805f1f4

// -[SCFeatureSettingsService spotlight_pause_share_upsell_seen_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805f1fc

// -[SCFeatureSettingsService spotlightPauseShareUpsellSeenCount]
// Type encoding: Q16@0:8
// Implementation: 0x10805f204

// -[SCFeatureSettingsService hasSpotlightPauseShareUpsellLastSeenTimestamp]
// Type encoding: B16@0:8
// Implementation: 0x10805f214

// -[SCFeatureSettingsService spotlightPauseShareUpsellLastSeenTimestampServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10805f220

// -[SCFeatureSettingsService setSpotlightPauseShareUpsellLastSeenTimestamp:]
// Type encoding: v24@0:8q16
// Implementation: 0x10805f22c

// -[SCFeatureSettingsService spotlight_pause_share_upsell_last_seen_timestamp_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805f23c

// -[SCFeatureSettingsService spotlight_pause_share_upsell_last_seen_timestamp_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10805f244

// -[SCFeatureSettingsService spotlightPauseShareUpsellLastSeenTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x10805f24c

// -[SCFeatureSettingsService hasSeenPublicProfileNux]
// Type encoding: B16@0:8
// Implementation: 0x10803f5f4

// -[SCFeatureSettingsService seenPublicProfileNuxServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10803f600

// -[SCFeatureSettingsService setSeenPublicProfileNux:]
// Type encoding: v20@0:8B16
// Implementation: 0x10803f60c

// -[SCFeatureSettingsService PUBLIC_PROFILE_MY_PUBLIC_PROFILE_NUX_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10803f61c

// -[SCFeatureSettingsService PUBLIC_PROFILE_MY_PUBLIC_PROFILE_NUX_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10803f624

// -[SCFeatureSettingsService seenPublicProfileNux]
// Type encoding: B16@0:8
// Implementation: 0x10803f62c

// -[SCFeatureSettingsService hasSeenPublicStoryNux]
// Type encoding: B16@0:8
// Implementation: 0x10803f63c

// -[SCFeatureSettingsService seenPublicStoryNuxServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10803f648

// -[SCFeatureSettingsService setSeenPublicStoryNux:]
// Type encoding: v20@0:8B16
// Implementation: 0x10803f654

// -[SCFeatureSettingsService PUBLIC_PROFILE_PUBLIC_STORY_NUX_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10803f664

// -[SCFeatureSettingsService PUBLIC_PROFILE_PUBLIC_STORY_NUX_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10803f66c

// -[SCFeatureSettingsService seenPublicStoryNux]
// Type encoding: B16@0:8
// Implementation: 0x10803f674

// -[SCFeatureSettingsService hasSeenSpotlightMapNux]
// Type encoding: B16@0:8
// Implementation: 0x10803f684

// -[SCFeatureSettingsService seenSpotlightMapNuxServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10803f690

// -[SCFeatureSettingsService setSeenSpotlightMapNux:]
// Type encoding: v20@0:8B16
// Implementation: 0x10803f69c

// -[SCFeatureSettingsService PUBLIC_PROFILE_SPOTLIGHT_MAP_NUX_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10803f6ac

// -[SCFeatureSettingsService PUBLIC_PROFILE_SPOTLIGHT_MAP_NUX_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10803f6b4

// -[SCFeatureSettingsService seenSpotlightMapNux]
// Type encoding: B16@0:8
// Implementation: 0x10803f6bc

// -[SCFeatureSettingsService doesHideSavedStoryInsightsNewBanner]
// Type encoding: B16@0:8
// Implementation: 0x10803f6cc

// -[SCFeatureSettingsService hideSavedStoryInsightsNewBannerServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10803f6d8

// -[SCFeatureSettingsService setHideSavedStoryInsightsNewBanner:]
// Type encoding: v20@0:8B16
// Implementation: 0x10803f6e4

// -[SCFeatureSettingsService HIDE_SAVED_STORY_INSIGHTS_NEW_BANNER_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10803f6f4

// -[SCFeatureSettingsService HIDE_SAVED_STORY_INSIGHTS_NEW_BANNER_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10803f6fc

// -[SCFeatureSettingsService hideSavedStoryInsightsNewBanner]
// Type encoding: B16@0:8
// Implementation: 0x10803f704

// -[SCFeatureSettingsService doesHideProfileInsightsNewBanner]
// Type encoding: B16@0:8
// Implementation: 0x10803f714

// -[SCFeatureSettingsService hideProfileInsightsNewBannerServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10803f720

// -[SCFeatureSettingsService setHideProfileInsightsNewBanner:]
// Type encoding: v20@0:8B16
// Implementation: 0x10803f72c

// -[SCFeatureSettingsService HIDE_PROFILE_INSIGHTS_NEW_BANNER_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10803f73c

// -[SCFeatureSettingsService HIDE_PROFILE_INSIGHTS_NEW_BANNER_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10803f744

// -[SCFeatureSettingsService hideProfileInsightsNewBanner]
// Type encoding: B16@0:8
// Implementation: 0x10803f74c

// -[SCFeatureSettingsService doesHideStoriesPinnedTooltip]
// Type encoding: B16@0:8
// Implementation: 0x10803f75c

// -[SCFeatureSettingsService hideStoriesPinnedTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10803f768

// -[SCFeatureSettingsService setHideStoriesPinnedTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x10803f774

// -[SCFeatureSettingsService PINNED_STORY_TOOLTIP_DISABLED_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10803f784

// -[SCFeatureSettingsService PINNED_STORY_TOOLTIP_DISABLED_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10803f78c

// -[SCFeatureSettingsService hideStoriesPinnedTooltip]
// Type encoding: B16@0:8
// Implementation: 0x10803f794

// -[SCFeatureSettingsService doesHideSpotlightPinnedTooltip]
// Type encoding: B16@0:8
// Implementation: 0x10803f7a4

// -[SCFeatureSettingsService hideSpotlightPinnedTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10803f7b0

// -[SCFeatureSettingsService setHideSpotlightPinnedTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x10803f7bc

// -[SCFeatureSettingsService PINNED_SPOTLIGHT_TOOLTIP_DISABLED_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10803f7cc

// -[SCFeatureSettingsService PINNED_SPOTLIGHT_TOOLTIP_DISABLED_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10803f7d4

// -[SCFeatureSettingsService hideSpotlightPinnedTooltip]
// Type encoding: B16@0:8
// Implementation: 0x10803f7dc

// -[SCFeatureSettingsService hasSeenPublicStoryReplyModal]
// Type encoding: B16@0:8
// Implementation: 0x10803f7ec

// -[SCFeatureSettingsService seenPublicStoryReplyModalServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10803f7f8

// -[SCFeatureSettingsService setSeenPublicStoryReplyModal:]
// Type encoding: v20@0:8B16
// Implementation: 0x10803f804

// -[SCFeatureSettingsService PUBLIC_PROFILE_STORY_REPLY_NU_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10803f814

// -[SCFeatureSettingsService PUBLIC_PROFILE_STORY_REPLY_NU_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10803f81c

// -[SCFeatureSettingsService seenPublicStoryReplyModal]
// Type encoding: B16@0:8
// Implementation: 0x10803f824

// -[SCFeatureSettingsService publicStoryAutoSavingEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10803f834

// -[SCFeatureSettingsService publicStoryAutoSavingServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10803f840

// -[SCFeatureSettingsService setPublicStoryAutoSaving:]
// Type encoding: v20@0:8B16
// Implementation: 0x10803f84c

// -[SCFeatureSettingsService PUBLIC_STORY_AUTO_SAVING_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10803f85c

// -[SCFeatureSettingsService PUBLIC_STORY_AUTO_SAVING_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10803f864

// -[SCFeatureSettingsService publicStoryAutoSaving]
// Type encoding: B16@0:8
// Implementation: 0x10803f86c

// -[SCFeatureSettingsService hasSeenactivityFeedMentionsNux]
// Type encoding: B16@0:8
// Implementation: 0x10803f87c

// -[SCFeatureSettingsService seenActivityFeedMentionsNuxServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10803f888

// -[SCFeatureSettingsService ACTIVITY_FEED_MENTIONS_NUX_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10803f894

// -[SCFeatureSettingsService ACTIVITY_FEED_MENTIONS_NUX_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10803f89c

// -[SCFeatureSettingsService seenActivityFeedMentionsNux]
// Type encoding: B16@0:8
// Implementation: 0x10803f8a4

// -[SCFeatureSettingsService hasSeenSpotlightNux]
// Type encoding: B16@0:8
// Implementation: 0x10803f8b4

// -[SCFeatureSettingsService seenSpotlightNuxServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10803f8c0

// -[SCFeatureSettingsService setSeenSpotlightNux:]
// Type encoding: v20@0:8B16
// Implementation: 0x10803f8cc

// -[SCFeatureSettingsService PUBLIC_PROFILE_SPOTLIGHT_NUX_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10803f8dc

// -[SCFeatureSettingsService PUBLIC_PROFILE_SPOTLIGHT_NUX_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10803f8e4

// -[SCFeatureSettingsService seenSpotlightNux]
// Type encoding: B16@0:8
// Implementation: 0x10803f8ec

// -[SCFeatureSettingsService hasSeenPublicProfileNux1617]
// Type encoding: B16@0:8
// Implementation: 0x10803f8fc

// -[SCFeatureSettingsService seenPublicProfileNux1617ServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10803f908

// -[SCFeatureSettingsService setSeenPublicProfileNux1617:]
// Type encoding: v20@0:8B16
// Implementation: 0x10803f914

// -[SCFeatureSettingsService PUBLIC_PROFILE_MY_PUBLIC_PROFILE_NUX_16_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10803f924

// -[SCFeatureSettingsService PUBLIC_PROFILE_MY_PUBLIC_PROFILE_NUX_16_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10803f92c

// -[SCFeatureSettingsService seenPublicProfileNux1617]
// Type encoding: B16@0:8
// Implementation: 0x10803f934

// -[SCFeatureSettingsService isBusinessIdsOnboardedToStoryAutoSavingAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10803f944

// -[SCFeatureSettingsService businessIdsOnboardedToStoryAutoSavingServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10803f950

// -[SCFeatureSettingsService setBusinessIdsOnboardedToStoryAutoSaving:]
// Type encoding: v24@0:8@16
// Implementation: 0x10803f95c

// -[SCFeatureSettingsService SEEN_AUTO_SAVING_PUBLIC_SOTY_IDS_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10803f96c

// -[SCFeatureSettingsService SEEN_AUTO_SAVING_PUBLIC_SOTY_IDS_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10803f994

// -[SCFeatureSettingsService businessIdsOnboardedToStoryAutoSaving]
// Type encoding: @16@0:8
// Implementation: 0x10803f9bc

// -[SCFeatureSettingsService isHasUserSeenDwebAvailable]
// Type encoding: B16@0:8
// Implementation: 0x1070bd78c

// -[SCFeatureSettingsService hasUserSeenDwebServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1070bd798

// -[SCFeatureSettingsService dweb_seen_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1070bd7a4

// -[SCFeatureSettingsService dweb_seen_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1070bd7ac

// -[SCFeatureSettingsService hasUserSeenDweb]
// Type encoding: B16@0:8
// Implementation: 0x1070bd7b4

// -[SCFeatureSettingsService isMerlinBioAvailable]
// Type encoding: B16@0:8
// Implementation: 0x1070baa34

// -[SCFeatureSettingsService merlinBioServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1070baa40

// -[SCFeatureSettingsService setMerlinBio:]
// Type encoding: v24@0:8@16
// Implementation: 0x1070baa4c

// -[SCFeatureSettingsService merlin_bio_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1070baa5c

// -[SCFeatureSettingsService merlin_bio_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1070baa84

// -[SCFeatureSettingsService merlinBio]
// Type encoding: @16@0:8
// Implementation: 0x1070baaac

// -[SCFeatureSettingsService isCameraSettingsShutterSoundOn]
// Type encoding: B16@0:8
// Implementation: 0x10703c8a8

// -[SCFeatureSettingsService cameraSettingsShutterSoundOnServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10703c8b4

// -[SCFeatureSettingsService setCameraSettingsShutterSoundOn:]
// Type encoding: v20@0:8B16
// Implementation: 0x10703c8c0

// -[SCFeatureSettingsService camera_settings_shutter_sound_on_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10703c8d0

// -[SCFeatureSettingsService camera_settings_shutter_sound_on_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10703c8d8

// -[SCFeatureSettingsService cameraSettingsShutterSoundOn]
// Type encoding: B16@0:8
// Implementation: 0x10703c8e0

// -[SCFeatureSettingsService isCameraSettingsShutterSoundSeenPrompt]
// Type encoding: B16@0:8
// Implementation: 0x10703c8f0

// -[SCFeatureSettingsService cameraSettingsShutterSoundSeenPromptServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10703c8fc

// -[SCFeatureSettingsService setCameraSettingsShutterSoundSeenPrompt:]
// Type encoding: v20@0:8B16
// Implementation: 0x10703c908

// -[SCFeatureSettingsService camera_settings_shutter_sound_seen_prompt_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10703c918

// -[SCFeatureSettingsService camera_settings_shutter_sound_seen_prompt_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10703c920

// -[SCFeatureSettingsService cameraSettingsShutterSoundSeenPrompt]
// Type encoding: B16@0:8
// Implementation: 0x10703c928

// -[SCFeatureSettingsService bipaAcceptedPolicyVersion]
// Type encoding: q16@0:8
// Implementation: 0x1008b8b2c

// -[SCFeatureSettingsService setBipaAcceptedPolicyVersion:completion:]
// Type encoding: v32@0:8q16@?24
// Implementation: 0x10703c938

// -[SCFeatureSettingsService resetBipaAcceptedPolicyVersion]
// Type encoding: v16@0:8
// Implementation: 0x10703cae0

// -[SCFeatureSettingsService hasLockScreenWidgetEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10703caf0

// -[SCFeatureSettingsService lockScreenWidgetEnabledServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10703cafc

// -[SCFeatureSettingsService setLockScreenWidgetEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10703cb08

// -[SCFeatureSettingsService IOS_LOCK_SCREEN_WIDGET_ENABLED_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10703cb18

// -[SCFeatureSettingsService IOS_LOCK_SCREEN_WIDGET_ENABLED_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10703cb20

// -[SCFeatureSettingsService lockScreenWidgetEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10703cb28

// -[SCFeatureSettingsService isCPRAOptoutEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10703cb38

// -[SCFeatureSettingsService setCPRAOptoutEnabled:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x10703cb78

// -[SCFeatureSettingsService isFDBROptoutEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10703cc84

// -[SCFeatureSettingsService setFDBROptoutEnabled:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x10703ccc4

// -[SCFeatureSettingsService usedSpectaclesAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106fd3c58

// -[SCFeatureSettingsService hasUsedSpectaclesServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106fd3c64

// -[SCFeatureSettingsService setHasUsedSpectacles:]
// Type encoding: v20@0:8B16
// Implementation: 0x106fd3c70

// -[SCFeatureSettingsService has_paired_laguna_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fd3c80

// -[SCFeatureSettingsService has_paired_laguna_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fd3c88

// -[SCFeatureSettingsService hasUsedSpectacles]
// Type encoding: B16@0:8
// Implementation: 0x106fd3c90

// -[SCFeatureSettingsService hasSeenHdOnlyTooltip]
// Type encoding: B16@0:8
// Implementation: 0x106fd3ca0

// -[SCFeatureSettingsService seenHdOnlyTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106fd3cac

// -[SCFeatureSettingsService setSeenHdOnlyTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x106fd3cb8

// -[SCFeatureSettingsService hd_only_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fd3cc8

// -[SCFeatureSettingsService hd_only_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fd3cd0

// -[SCFeatureSettingsService seenHdOnlyTooltip]
// Type encoding: B16@0:8
// Implementation: 0x106fd3cd8

// -[SCFeatureSettingsService hasSeenGetHdV3]
// Type encoding: B16@0:8
// Implementation: 0x106fd3ce8

// -[SCFeatureSettingsService seenGetHdV3ServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106fd3cf4

// -[SCFeatureSettingsService setSeenGetHdV3:]
// Type encoding: v20@0:8B16
// Implementation: 0x106fd3d00

// -[SCFeatureSettingsService get_hd_v3_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fd3d10

// -[SCFeatureSettingsService get_hd_v3_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fd3d18

// -[SCFeatureSettingsService seenGetHdV3]
// Type encoding: B16@0:8
// Implementation: 0x106fd3d20

// -[SCFeatureSettingsService hasSeenSpecsTabIncompatibleWithMyEyesOnlyByDefault]
// Type encoding: B16@0:8
// Implementation: 0x106fd3d30

// -[SCFeatureSettingsService seenSpecsTabIncompatibleWithMyEyesOnlyByDefaultServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106fd3d3c

// -[SCFeatureSettingsService setSeenSpecsTabIncompatibleWithMyEyesOnlyByDefault:]
// Type encoding: v20@0:8B16
// Implementation: 0x106fd3d48

// -[SCFeatureSettingsService specs_incompatible_my_eyes_only_default_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fd3d58

// -[SCFeatureSettingsService specs_incompatible_my_eyes_only_default_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fd3d60

// -[SCFeatureSettingsService seenSpecsTabIncompatibleWithMyEyesOnlyByDefault]
// Type encoding: B16@0:8
// Implementation: 0x106fd3d68

// -[SCFeatureSettingsService hasInitiatedLagunaHDTransfer]
// Type encoding: B16@0:8
// Implementation: 0x106fd3d78

// -[SCFeatureSettingsService initiatedLagunaHDTransferServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106fd3d84

// -[SCFeatureSettingsService setIinitiatedLagunaHDTransfer:]
// Type encoding: v20@0:8B16
// Implementation: 0x106fd3d90

// -[SCFeatureSettingsService specs_initiated_hd_transfer_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fd3da0

// -[SCFeatureSettingsService specs_initiated_hd_transfer_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fd3da8

// -[SCFeatureSettingsService initiatedLagunaHDTransfer]
// Type encoding: B16@0:8
// Implementation: 0x106fd3db0

// -[SCFeatureSettingsService hasBeganLagunaHDTransfer]
// Type encoding: B16@0:8
// Implementation: 0x106fd3dc0

// -[SCFeatureSettingsService beganLagunaHDTransferServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106fd3dcc

// -[SCFeatureSettingsService setBeganLagunaHDTransfer:]
// Type encoding: v20@0:8B16
// Implementation: 0x106fd3dd8

// -[SCFeatureSettingsService specs_began_hd_transfer_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fd3de8

// -[SCFeatureSettingsService specs_began_hd_transfer_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fd3df0

// -[SCFeatureSettingsService beganLagunaHDTransfer]
// Type encoding: B16@0:8
// Implementation: 0x106fd3df8

// -[SCFeatureSettingsService hasAddedHomeWifiNetwork]
// Type encoding: B16@0:8
// Implementation: 0x106fd3e08

// -[SCFeatureSettingsService addedHomeWifiNetworkServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106fd3e14

// -[SCFeatureSettingsService setAddedHomeWifiNetwork:]
// Type encoding: v20@0:8B16
// Implementation: 0x106fd3e20

// -[SCFeatureSettingsService added_home_wifi_network_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fd3e30

// -[SCFeatureSettingsService added_home_wifi_network_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fd3e38

// -[SCFeatureSettingsService addedHomeWifiNetwork]
// Type encoding: B16@0:8
// Implementation: 0x106fd3e40

// -[SCFeatureSettingsService isNotificationFriendSuggestionsAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106e41194

// -[SCFeatureSettingsService notificationFriendSuggestionsContactsServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106e411a0

// -[SCFeatureSettingsService setNotificationFriendSuggestionsContacts:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e411ac

// -[SCFeatureSettingsService notification_friend_suggestions_contacts_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e411bc

// -[SCFeatureSettingsService notification_friend_suggestions_contacts_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e411c4

// -[SCFeatureSettingsService notificationFriendSuggestionsContacts]
// Type encoding: B16@0:8
// Implementation: 0x106e411cc

// -[SCFeatureSettingsService isNotificationFriendSuggestionsRegularAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106e411dc

// -[SCFeatureSettingsService notificationFriendSuggestionsRegularServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106e411e8

// -[SCFeatureSettingsService setNotificationFriendSuggestionsRegular:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e411f4

// -[SCFeatureSettingsService notification_friend_suggestions_regular_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e41204

// -[SCFeatureSettingsService notification_friend_suggestions_regular_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e4120c

// -[SCFeatureSettingsService notificationFriendSuggestionsRegular]
// Type encoding: B16@0:8
// Implementation: 0x106e41214

// -[SCFeatureSettingsService isNotificationFriendSuggestionsPendingAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106e41224

// -[SCFeatureSettingsService notificationFriendSuggestionsPendingServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106e41230

// -[SCFeatureSettingsService setNotificationFriendSuggestionsPending:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e4123c

// -[SCFeatureSettingsService notification_friend_suggestions_pending_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e4124c

// -[SCFeatureSettingsService notification_friend_suggestions_pending_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e41254

// -[SCFeatureSettingsService notificationFriendSuggestionsPending]
// Type encoding: B16@0:8
// Implementation: 0x106e4125c

// -[SCFeatureSettingsService isNotificationMessageRemindersFriendAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106e4126c

// -[SCFeatureSettingsService notificationMessageRemindersFriendServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106e41278

// -[SCFeatureSettingsService setNotificationMessageRemindersFriend:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e41284

// -[SCFeatureSettingsService notification_message_reminders_friend_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e41294

// -[SCFeatureSettingsService notification_message_reminders_friend_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e4129c

// -[SCFeatureSettingsService notificationMessageRemindersFriend]
// Type encoding: B16@0:8
// Implementation: 0x106e412a4

// -[SCFeatureSettingsService isNotificationMessageRemindersPendingAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106e412b4

// -[SCFeatureSettingsService notificationMessageRemindersPendingServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106e412c0

// -[SCFeatureSettingsService setNotificationMessageRemindersPending:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e412cc

// -[SCFeatureSettingsService notification_message_reminders_pending_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e412dc

// -[SCFeatureSettingsService notification_message_reminders_pending_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e412e4

// -[SCFeatureSettingsService notificationMessageRemindersPending]
// Type encoding: B16@0:8
// Implementation: 0x106e412ec

// -[SCFeatureSettingsService isNotificationPublicContentTrendingAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106e412fc

// -[SCFeatureSettingsService notificationPublicContentTrendingServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106e41308

// -[SCFeatureSettingsService setNotificationPublicContentTrending:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e41314

// -[SCFeatureSettingsService notification_public_content_trending_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e41324

// -[SCFeatureSettingsService notification_public_content_trending_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e4132c

// -[SCFeatureSettingsService notificationPublicContentTrending]
// Type encoding: B16@0:8
// Implementation: 0x106e41334

// -[SCFeatureSettingsService isNotificationPublicContentSubscriptionAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106e41344

// -[SCFeatureSettingsService notificationPublicContentSubscriptionServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106e41350

// -[SCFeatureSettingsService setNotificationPublicContentSubscription:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e4135c

// -[SCFeatureSettingsService notification_public_content_subscription_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e4136c

// -[SCFeatureSettingsService notification_public_content_subscription_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e41374

// -[SCFeatureSettingsService notificationPublicContentSubscription]
// Type encoding: B16@0:8
// Implementation: 0x106e4137c

// -[SCFeatureSettingsService isNotificationPublicContentFriendsOfFriendsAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106e4138c

// -[SCFeatureSettingsService notificationPublicContentFriendsOfFriendsServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106e41398

// -[SCFeatureSettingsService setNotificationPublicContentFriendsOfFriends:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e413a4

// -[SCFeatureSettingsService notification_public_content_friends_of_friends_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e413b4

// -[SCFeatureSettingsService notification_public_content_friends_of_friends_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e413bc

// -[SCFeatureSettingsService notificationPublicContentFriendsOfFriends]
// Type encoding: B16@0:8
// Implementation: 0x106e413c4

// -[SCFeatureSettingsService isNotificationPublicContentContactsAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106e413d4

// -[SCFeatureSettingsService notificationPublicContentContactsServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106e413e0

// -[SCFeatureSettingsService setNotificationPublicContentContacts:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e413ec

// -[SCFeatureSettingsService notification_public_content_contacts_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e413fc

// -[SCFeatureSettingsService notification_public_content_contacts_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e41404

// -[SCFeatureSettingsService notificationPublicContentContacts]
// Type encoding: B16@0:8
// Implementation: 0x106e4140c

// -[SCFeatureSettingsService isNotificationFriendStoriesPrivateAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106e4141c

// -[SCFeatureSettingsService notificationFriendStoriesPrivateServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106e41428

// -[SCFeatureSettingsService setNotificationFriendStoriesPrivate:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e41434

// -[SCFeatureSettingsService notification_friend_stories_private_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e41444

// -[SCFeatureSettingsService notification_friend_stories_private_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e4144c

// -[SCFeatureSettingsService notificationFriendStoriesPrivate]
// Type encoding: B16@0:8
// Implementation: 0x106e41454

// -[SCFeatureSettingsService isNotificationFriendStoriesRegularAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106e41464

// -[SCFeatureSettingsService notificationFriendStoriesRegularServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106e41470

// -[SCFeatureSettingsService setNotificationFriendStoriesRegular:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e4147c

// -[SCFeatureSettingsService notification_friend_stories_regular_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e4148c

// -[SCFeatureSettingsService notification_friend_stories_regular_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e41494

// -[SCFeatureSettingsService notificationFriendStoriesRegular]
// Type encoding: B16@0:8
// Implementation: 0x106e4149c

// -[SCFeatureSettingsService isNotificationMemoriesDailyFlashbackAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106e414ac

// -[SCFeatureSettingsService notificationMemoriesDailyFlashbackServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106e414b8

// -[SCFeatureSettingsService setNotificationMemoriesDailyFlashback:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e414c4

// -[SCFeatureSettingsService notification_memories_daily_flashback_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e414d4

// -[SCFeatureSettingsService notification_memories_daily_flashback_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e414dc

// -[SCFeatureSettingsService notificationMemoriesDailyFlashback]
// Type encoding: B16@0:8
// Implementation: 0x106e414e4

// -[SCFeatureSettingsService isNotificationMemoriesThemedFlashbackAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106e414f4

// -[SCFeatureSettingsService notificationMemoriesThemedFlashbackServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106e41500

// -[SCFeatureSettingsService setNotificationMemoriesThemedFlashback:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e4150c

// -[SCFeatureSettingsService notification_memories_themed_flashback_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e4151c

// -[SCFeatureSettingsService notification_memories_themed_flashback_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e41524

// -[SCFeatureSettingsService notificationMemoriesThemedFlashback]
// Type encoding: B16@0:8
// Implementation: 0x106e4152c

// -[SCFeatureSettingsService isNotificationMemoriesChatFlashbackAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106e4153c

// -[SCFeatureSettingsService notificationMemoriesChatFlashbackServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106e41548

// -[SCFeatureSettingsService setNotificationMemoriesChatFlashback:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e41554

// -[SCFeatureSettingsService notification_memories_chat_flashback_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e41564

// -[SCFeatureSettingsService notification_memories_chat_flashback_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e4156c

// -[SCFeatureSettingsService notificationMemoriesChatFlashback]
// Type encoding: B16@0:8
// Implementation: 0x106e41574

// -[SCFeatureSettingsService isCreatorsMidrollNotificationsDisabledAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106e41584

// -[SCFeatureSettingsService creatorsMidrollNotificationsDisabledServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106e41590

// -[SCFeatureSettingsService setCreatorsMidrollNotificationsDisabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e4159c

// -[SCFeatureSettingsService creators_midroll_notifications_disabled_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e415ac

// -[SCFeatureSettingsService creators_midroll_notifications_disabled_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e415b4

// -[SCFeatureSettingsService creatorsMidrollNotificationsDisabled]
// Type encoding: B16@0:8
// Implementation: 0x106e415bc

// -[SCFeatureSettingsService isCreatorsMilestoneNotificationsDisabledAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106e415cc

// -[SCFeatureSettingsService creatorsMilestoneNotificationsDisabledServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106e415d8

// -[SCFeatureSettingsService setCreatorsMilestoneNotificationsDisabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e415e4

// -[SCFeatureSettingsService creators_success_notifications_disabled_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e415f4

// -[SCFeatureSettingsService creators_success_notifications_disabled_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e415fc

// -[SCFeatureSettingsService creatorsMilestoneNotificationsDisabled]
// Type encoding: B16@0:8
// Implementation: 0x106e41604

// -[SCFeatureSettingsService isOpmTransactionalAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106e41614

// -[SCFeatureSettingsService opmTransactionalServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106e41620

// -[SCFeatureSettingsService setOpmTransactional:]
// Type encoding: v24@0:8q16
// Implementation: 0x106e4162c

// -[SCFeatureSettingsService opm_transactional_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e4163c

// -[SCFeatureSettingsService opm_transactional_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e41644

// -[SCFeatureSettingsService opmTransactional]
// Type encoding: q16@0:8
// Implementation: 0x106e4164c

// -[SCFeatureSettingsService isOpmPromotionalAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106e4165c

// -[SCFeatureSettingsService opmPromotionalServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106e41668

// -[SCFeatureSettingsService setOpmPromotional:]
// Type encoding: v24@0:8q16
// Implementation: 0x106e41674

// -[SCFeatureSettingsService opm_promotional_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e41684

// -[SCFeatureSettingsService opm_promotional_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e4168c

// -[SCFeatureSettingsService opmPromotional]
// Type encoding: q16@0:8
// Implementation: 0x106e41694

// -[SCFeatureSettingsService isPlusPromotionsDisabledAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106e416a4

// -[SCFeatureSettingsService plusPromotionsDisabledServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106e416b0

// -[SCFeatureSettingsService setPlusPromotionsDisabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e416bc

// -[SCFeatureSettingsService notification_splus_promotions_disabled_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e416cc

// -[SCFeatureSettingsService notification_splus_promotions_disabled_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e416d4

// -[SCFeatureSettingsService plusPromotionsDisabled]
// Type encoding: B16@0:8
// Implementation: 0x106e416dc

// -[SCFeatureSettingsService isPlusUpdatesDisabledAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106e416ec

// -[SCFeatureSettingsService plusUpdatesDisabledServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106e416f8

// -[SCFeatureSettingsService setPlusUpdatesDisabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e41704

// -[SCFeatureSettingsService notification_splus_updates_disabled_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e41714

// -[SCFeatureSettingsService notification_splus_updates_disabled_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e4171c

// -[SCFeatureSettingsService plusUpdatesDisabled]
// Type encoding: B16@0:8
// Implementation: 0x106e41724

// -[SCFeatureSettingsService isFriendPostOnSpotlightAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106e41734

// -[SCFeatureSettingsService friendPostOnSpotlightServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106e41740

// -[SCFeatureSettingsService setFriendPostOnSpotlight:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e4174c

// -[SCFeatureSettingsService notification_friend_post_on_spotlight_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e4175c

// -[SCFeatureSettingsService notification_friend_post_on_spotlight_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e41764

// -[SCFeatureSettingsService friendPostOnSpotlight]
// Type encoding: B16@0:8
// Implementation: 0x106e4176c

// -[SCFeatureSettingsService isFriendRepostOnSpotlightAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106e4177c

// -[SCFeatureSettingsService friendRepostOnSpotlightServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106e41788

// -[SCFeatureSettingsService setFriendRepostOnSpotlight:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e41794

// -[SCFeatureSettingsService notification_friend_repost_on_spotlight_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e417a4

// -[SCFeatureSettingsService notification_friend_repost_on_spotlight_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e417ac

// -[SCFeatureSettingsService friendRepostOnSpotlight]
// Type encoding: B16@0:8
// Implementation: 0x106e417b4

// -[SCFeatureSettingsService isNotificationPublicContentSpotlightTopRankDisabledAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106e417c4

// -[SCFeatureSettingsService notificationPublicContentSpotlightTopRankDisabledServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106e417d0

// -[SCFeatureSettingsService setNotificationPublicContentSpotlightTopRankDisabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e417dc

// -[SCFeatureSettingsService notification_public_content_spotlight_top_rank_disabled_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e417ec

// -[SCFeatureSettingsService notification_public_content_spotlight_top_rank_disabled_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e417f4

// -[SCFeatureSettingsService notificationPublicContentSpotlightTopRankDisabled]
// Type encoding: B16@0:8
// Implementation: 0x106e417fc

// -[SCFeatureSettingsService isNotificationPublicContentDiscoverStoriesDisabledAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106e4180c

// -[SCFeatureSettingsService notificationPublicContentDiscoverStoriesDisabledServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106e41818

// -[SCFeatureSettingsService setNotificationPublicContentDiscoverStoriesDisabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e41824

// -[SCFeatureSettingsService notification_public_content_discover_stories_disabled_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e41834

// -[SCFeatureSettingsService notification_public_content_discover_stories_disabled_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e4183c

// -[SCFeatureSettingsService notificationPublicContentDiscoverStoriesDisabled]
// Type encoding: B16@0:8
// Implementation: 0x106e41844

// -[SCFeatureSettingsService isTopicChatsIFollowEnabledAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106e41854

// -[SCFeatureSettingsService topicChatsIFollowEnabledServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106e41860

// -[SCFeatureSettingsService setTopicChatsIFollowEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e4186c

// -[SCFeatureSettingsService notification_topic_chats_i_follow_enabled_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e4187c

// -[SCFeatureSettingsService notification_topic_chats_i_follow_enabled_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e41884

// -[SCFeatureSettingsService topicChatsIFollowEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106e4188c

// -[SCFeatureSettingsService isSuggestedTopicChatsEnabledAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106e4189c

// -[SCFeatureSettingsService suggestedTopicChatsEnabledServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106e418a8

// -[SCFeatureSettingsService setSuggestedTopicChatsEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e418b4

// -[SCFeatureSettingsService notification_suggested_topic_chats_enabled_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e418c4

// -[SCFeatureSettingsService notification_suggested_topic_chats_enabled_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e418cc

// -[SCFeatureSettingsService suggestedTopicChatsEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106e418d4

// -[SCFeatureSettingsService isFamilyCenterUpdatesEnabledAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106e418e4

// -[SCFeatureSettingsService familyCenterUpdatesEnabledServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106e418f0

// -[SCFeatureSettingsService setFamilyCenterUpdatesEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e418fc

// -[SCFeatureSettingsService family_center_proactive_notifications_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e4190c

// -[SCFeatureSettingsService family_center_proactive_notifications_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e41914

// -[SCFeatureSettingsService familyCenterUpdatesEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106e4191c

// -[SCFeatureSettingsService isNotificationGameActivityAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106e4192c

// -[SCFeatureSettingsService notificationGameActivityServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106e41938

// -[SCFeatureSettingsService setNotificationGameActivity:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e41944

// -[SCFeatureSettingsService notification_game_activity_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e41954

// -[SCFeatureSettingsService notification_game_activity_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e4195c

// -[SCFeatureSettingsService notificationGameActivity]
// Type encoding: B16@0:8
// Implementation: 0x106e41964

// -[SCFeatureSettingsService getCommerceFavoritesPDPTooltipShownCount]
// Type encoding: B16@0:8
// Implementation: 0x106cf785c

// -[SCFeatureSettingsService commerceFavoritesPDPTooltipShownCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106cf7868

// -[SCFeatureSettingsService setCommerceFavoritesPDPTooltipShownCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x106cf7874

// -[SCFeatureSettingsService COMMERCE_FAVORITES_PDP_TOOLTIP_SHOWN_COUNT_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106cf7884

// -[SCFeatureSettingsService COMMERCE_FAVORITES_PDP_TOOLTIP_SHOWN_COUNT_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106cf788c

// -[SCFeatureSettingsService commerceFavoritesPDPTooltipShownCount]
// Type encoding: q16@0:8
// Implementation: 0x106cf7894

// -[SCFeatureSettingsService getCommerceFavoritesProfileTooltipShownCount]
// Type encoding: B16@0:8
// Implementation: 0x106cf78a4

// -[SCFeatureSettingsService commerceFavoritesProfileTooltipShownCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106cf78b0

// -[SCFeatureSettingsService setCommerceFavoritesProfileTooltipShownCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x106cf78bc

// -[SCFeatureSettingsService COMMERCE_FAVORITES_PROFILE_TOOLTIP_SHOWN_COUNT_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106cf78cc

// -[SCFeatureSettingsService COMMERCE_FAVORITES_PROFILE_TOOLTIP_SHOWN_COUNT_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106cf78d4

// -[SCFeatureSettingsService commerceFavoritesProfileTooltipShownCount]
// Type encoding: q16@0:8
// Implementation: 0x106cf78dc

// -[SCFeatureSettingsService getCommerceScreenshopSwipingTooltipShownCount]
// Type encoding: B16@0:8
// Implementation: 0x106cf78ec

// -[SCFeatureSettingsService commerceScreenshopSwipingTooltipShownCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106cf78f8

// -[SCFeatureSettingsService setCommerceScreenshopSwipingTooltipShownCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x106cf7904

// -[SCFeatureSettingsService COMMERCE_SCREENSHOP_SWIPING_TOOLTIP_SHOWN_COUNT_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106cf7914

// -[SCFeatureSettingsService COMMERCE_SCREENSHOP_SWIPING_TOOLTIP_SHOWN_COUNT_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106cf791c

// -[SCFeatureSettingsService commerceScreenshopSwipingTooltipShownCount]
// Type encoding: q16@0:8
// Implementation: 0x106cf7924

// -[SCFeatureSettingsService getCommerceScreenshopOnContextTooltipShownCount]
// Type encoding: B16@0:8
// Implementation: 0x106cf7934

// -[SCFeatureSettingsService commerceScreenshopOnContextTooltipShownCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106cf7940

// -[SCFeatureSettingsService setCommerceScreenshopOnContextTooltipShownCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x106cf794c

// -[SCFeatureSettingsService COMMERCE_SCREENSHOP_ON_CONTEXT_TOOLTIP_SHOWN_COUNT_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106cf795c

// -[SCFeatureSettingsService COMMERCE_SCREENSHOP_ON_CONTEXT_TOOLTIP_SHOWN_COUNT_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106cf7964

// -[SCFeatureSettingsService commerceScreenshopOnContextTooltipShownCount]
// Type encoding: q16@0:8
// Implementation: 0x106cf796c

// -[SCFeatureSettingsService getCommerceHangerTabTooltipSeenCount]
// Type encoding: B16@0:8
// Implementation: 0x106cf797c

// -[SCFeatureSettingsService commerceHangerTabTooltipSeenCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106cf7988

// -[SCFeatureSettingsService setCommerceHangerTabTooltipSeenCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x106cf7994

// -[SCFeatureSettingsService COMMERCE_HANGER_TAB_TOOLTIP_SEEN_COUNT_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106cf79a4

// -[SCFeatureSettingsService COMMERCE_HANGER_TAB_TOOLTIP_SEEN_COUNT_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106cf79ac

// -[SCFeatureSettingsService commerceHangerTabTooltipSeenCount]
// Type encoding: q16@0:8
// Implementation: 0x106cf79b4

// -[SCFeatureSettingsService getCommerceScreenshopDotShownCount]
// Type encoding: B16@0:8
// Implementation: 0x106cf79c4

// -[SCFeatureSettingsService commerceScreenshopDotShownCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106cf79d0

// -[SCFeatureSettingsService setCommerceScreenshopDotShownCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x106cf79dc

// -[SCFeatureSettingsService COMMERCE_SCREENSHOP_DOT_TOOLTIP_COUNT_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106cf79ec

// -[SCFeatureSettingsService COMMERCE_SCREENSHOP_DOT_TOOLTIP_COUNT_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106cf79f4

// -[SCFeatureSettingsService commerceScreenshopDotShownCount]
// Type encoding: q16@0:8
// Implementation: 0x106cf79fc

// -[SCFeatureSettingsService getCommerceScreenshopOnboardingShownCount]
// Type encoding: B16@0:8
// Implementation: 0x106cf7a0c

// -[SCFeatureSettingsService commerceScreenshopOnboardingShownCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106cf7a18

// -[SCFeatureSettingsService setCommerceScreenshopOnboardingShownCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x106cf7a24

// -[SCFeatureSettingsService COMMERCE_SCREENSHOP_ONBOARDING_TOOLTIP_COUNT_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106cf7a34

// -[SCFeatureSettingsService COMMERCE_SCREENSHOP_ONBOARDING_TOOLTIP_COUNT_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106cf7a3c

// -[SCFeatureSettingsService commerceScreenshopOnboardingShownCount]
// Type encoding: q16@0:8
// Implementation: 0x106cf7a44

// -[SCFeatureSettingsService isPlusAppIconNameAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106c75908

// -[SCFeatureSettingsService plusAppIconNameServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106c75914

// -[SCFeatureSettingsService setPlusAppIconName:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c75920

// -[SCFeatureSettingsService plus_custom_icon_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c75930

// -[SCFeatureSettingsService plus_custom_icon_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c75958

// -[SCFeatureSettingsService plusAppIconName]
// Type encoding: @16@0:8
// Implementation: 0x106c75980

// -[SCFeatureSettingsService isPostViewEmojiAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106c75994

// -[SCFeatureSettingsService postViewEmojiServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106c759a0

// -[SCFeatureSettingsService setPostViewEmoji:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c759ac

// -[SCFeatureSettingsService post_view_emoji_string_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c759bc

// -[SCFeatureSettingsService post_view_emoji_string_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c759e4

// -[SCFeatureSettingsService postViewEmoji]
// Type encoding: @16@0:8
// Implementation: 0x106c75a0c

// -[SCFeatureSettingsService isPlusUnredeemedBuddyPassTimestampAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106c75a20

// -[SCFeatureSettingsService plusUnredeemedBuddyPassTimestampMsServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106c75a2c

// -[SCFeatureSettingsService plus_unredeemed_buddy_pass_timestamp_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c75a38

// -[SCFeatureSettingsService plus_unredeemed_buddy_pass_timestamp_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c75a40

// -[SCFeatureSettingsService plusUnredeemedBuddyPassTimestampMs]
// Type encoding: Q16@0:8
// Implementation: 0x106c75a48

// -[SCFeatureSettingsService isPlusCustomAppThemeProtoAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106c4f154

// -[SCFeatureSettingsService plusCustomAppThemeProtoServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106c4f160

// -[SCFeatureSettingsService setPlusCustomAppThemeProto:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c4f16c

// -[SCFeatureSettingsService plus_custom_app_theme_proto_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c4f17c

// -[SCFeatureSettingsService plus_custom_app_theme_proto_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c4f1a4

// -[SCFeatureSettingsService plusCustomAppThemeProto]
// Type encoding: @16@0:8
// Implementation: 0x1005291d0

// -[SCFeatureSettingsService isAppThemeCaptureColorAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106c4f1cc

// -[SCFeatureSettingsService appThemeCaptureColorServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106c4f1d8

// -[SCFeatureSettingsService setAppThemeCaptureColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c4f1e4

// -[SCFeatureSettingsService app_theme_capture_color_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c4f1f4

// -[SCFeatureSettingsService app_theme_capture_color_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c4f21c

// -[SCFeatureSettingsService appThemeCaptureColor]
// Type encoding: @16@0:8
// Implementation: 0x106c4f244

// -[SCFeatureSettingsService isPlusAppStartConfigAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106c4e6b8

// -[SCFeatureSettingsService plusAppStartConfigServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106c4e6c4

// -[SCFeatureSettingsService setPlusAppStartConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c4e6d0

// -[SCFeatureSettingsService plus_app_start_config_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c4e6e0

// -[SCFeatureSettingsService plus_app_start_config_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c4e708

// -[SCFeatureSettingsService plusAppStartConfig]
// Type encoding: @16@0:8
// Implementation: 0x106c4e730

// -[SCFeatureSettingsService isPlusUpsellMyProfileStateAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106c4313c

// -[SCFeatureSettingsService plusUpsellMyProfileStateServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106c43148

// -[SCFeatureSettingsService setPlusUpsellMyProfileState:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c43154

// -[SCFeatureSettingsService plus_upsell_my_profile_state_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c43164

// -[SCFeatureSettingsService plus_upsell_my_profile_state_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c4318c

// -[SCFeatureSettingsService plusUpsellMyProfileState]
// Type encoding: @16@0:8
// Implementation: 0x106c431b4

// -[SCFeatureSettingsService isPlusUpsellStoryManagementStateAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106c431c8

// -[SCFeatureSettingsService plusUpsellStoryManagementStateServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106c431d4

// -[SCFeatureSettingsService setPlusUpsellStoryManagementState:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c431e0

// -[SCFeatureSettingsService plus_upsell_story_management_state_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c431f0

// -[SCFeatureSettingsService plus_upsell_story_management_state_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c43218

// -[SCFeatureSettingsService plusUpsellStoryManagementState]
// Type encoding: @16@0:8
// Implementation: 0x106c43240

// -[SCFeatureSettingsService isPlusUpsellStoryRepliesStateAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106c43254

// -[SCFeatureSettingsService plusUpsellStoryRepliesStateServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106c43260

// -[SCFeatureSettingsService setPlusUpsellStoryRepliesState:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c4326c

// -[SCFeatureSettingsService plus_upsell_story_replies_state_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c4327c

// -[SCFeatureSettingsService plus_upsell_story_replies_state_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c432a4

// -[SCFeatureSettingsService plusUpsellStoryRepliesState]
// Type encoding: @16@0:8
// Implementation: 0x106c432cc

// -[SCFeatureSettingsService isPlusUpsellCreatorStoryRepliesStateAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106c432e0

// -[SCFeatureSettingsService plusUpsellCreatorStoryRepliesStateServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106c432ec

// -[SCFeatureSettingsService setPlusUpsellCreatorStoryRepliesState:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c432f8

// -[SCFeatureSettingsService plus_upsell_creator_story_replies_state_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c43308

// -[SCFeatureSettingsService plus_upsell_creator_story_replies_state_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c43330

// -[SCFeatureSettingsService plusUpsellCreatorStoryRepliesState]
// Type encoding: @16@0:8
// Implementation: 0x106c43358

// -[SCFeatureSettingsService isPlusUpsellSettingsStateAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106c4336c

// -[SCFeatureSettingsService plusUpsellSettingsStateServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106c43378

// -[SCFeatureSettingsService setPlusUpsellSettingsState:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c43384

// -[SCFeatureSettingsService plus_upsell_settings_state_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c43394

// -[SCFeatureSettingsService plus_upsell_settings_state_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c433bc

// -[SCFeatureSettingsService plusUpsellSettingsState]
// Type encoding: @16@0:8
// Implementation: 0x106c433e4

// -[SCFeatureSettingsService isPlusUpsellStorageMemoriesPostSaveStateAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106c433f8

// -[SCFeatureSettingsService plusUpsellStorageMemoriesPostSaveStateServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106c43404

// -[SCFeatureSettingsService setPlusUpsellStorageMemoriesPostSaveState:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c43410

// -[SCFeatureSettingsService plus_upsell_storage_memories_post_save_state_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c43420

// -[SCFeatureSettingsService plus_upsell_storage_memories_post_save_state_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c43448

// -[SCFeatureSettingsService plusUpsellStorageMemoriesPostSaveState]
// Type encoding: @16@0:8
// Implementation: 0x106c43470

// -[SCFeatureSettingsService isPlusUpsellStorageMemoriesFeaturedStoryStateAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106c43484

// -[SCFeatureSettingsService plusUpsellStorageMemoriesFeaturedStoryStateServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106c43490

// -[SCFeatureSettingsService setPlusUpsellStorageMemoriesFeaturedStoryState:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c4349c

// -[SCFeatureSettingsService plus_upsell_storage_memories_featured_story_state_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c434ac

// -[SCFeatureSettingsService plus_upsell_storage_memories_featured_story_state_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c434d4

// -[SCFeatureSettingsService plusUpsellStorageMemoriesFeaturedStoryState]
// Type encoding: @16@0:8
// Implementation: 0x106c434fc

// -[SCFeatureSettingsService isPlusBadgeImpressionMsAvailable_sectionBadge]
// Type encoding: B16@0:8
// Implementation: 0x106c42fe4

// -[SCFeatureSettingsService plusBadgeImpressionMs_sectionBadgeServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106c42ff0

// -[SCFeatureSettingsService setPlusBadgeImpressionMs_sectionBadge:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106c42ffc

// -[SCFeatureSettingsService plus_new_badge_timestamp_my_profile_card_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c4300c

// -[SCFeatureSettingsService plus_new_badge_timestamp_my_profile_card_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c43014

// -[SCFeatureSettingsService plusBadgeImpressionMs_sectionBadge]
// Type encoding: Q16@0:8
// Implementation: 0x106c4301c

// -[SCFeatureSettingsService isPlusBadgeImpressionMsAvailable_management]
// Type encoding: B16@0:8
// Implementation: 0x106c4302c

// -[SCFeatureSettingsService plusBadgeImpressionMs_managementServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106c43038

// -[SCFeatureSettingsService setPlusBadgeImpressionMs_management:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106c43044

// -[SCFeatureSettingsService plus_new_badge_last_view_timestamp_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c43054

// -[SCFeatureSettingsService plus_new_badge_last_view_timestamp_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c4305c

// -[SCFeatureSettingsService plusBadgeImpressionMs_management]
// Type encoding: Q16@0:8
// Implementation: 0x106c43064

// -[SCFeatureSettingsService isPlusBadgeImpressionMsAvailable_appIcon]
// Type encoding: B16@0:8
// Implementation: 0x106c43074

// -[SCFeatureSettingsService plusBadgeImpressionMs_appIconServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106c43080

// -[SCFeatureSettingsService setPlusBadgeImpressionMs_appIcon:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106c4308c

// -[SCFeatureSettingsService plus_new_badge_timestamp_app_icon_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c4309c

// -[SCFeatureSettingsService plus_new_badge_timestamp_app_icon_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c430a4

// -[SCFeatureSettingsService plusBadgeImpressionMs_appIcon]
// Type encoding: Q16@0:8
// Implementation: 0x106c430ac

// -[SCFeatureSettingsService isPlusUnredeemedGiftTimestampAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106c430bc

// -[SCFeatureSettingsService plusUnredeemedGiftTimestampMsServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106c430c8

// -[SCFeatureSettingsService plus_unredeemed_gift_timestamp_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c430d4

// -[SCFeatureSettingsService plus_unredeemed_gift_timestamp_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c430dc

// -[SCFeatureSettingsService plusUnredeemedGiftTimestampMs]
// Type encoding: Q16@0:8
// Implementation: 0x106c430e4

// -[SCFeatureSettingsService isPlusFamilyPlanOnboardingSeenAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106c430f4

// -[SCFeatureSettingsService plusFamilyPlanOnboardingSeenServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106c43100

// -[SCFeatureSettingsService setPlusFamilyPlanOnboardingSeen:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106c4310c

// -[SCFeatureSettingsService plus_family_plan_added_seen_timestamp_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c4311c

// -[SCFeatureSettingsService plus_family_plan_added_seen_timestamp_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c43124

// -[SCFeatureSettingsService plusFamilyPlanOnboardingSeen]
// Type encoding: Q16@0:8
// Implementation: 0x106c4312c

// -[SCFeatureSettingsService isPlusBadgeVisibilityAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106c42c94

// -[SCFeatureSettingsService plusBadgeVisibilityServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106c42ca0

// -[SCFeatureSettingsService setPlusBadgeVisibility:]
// Type encoding: v24@0:8q16
// Implementation: 0x106c42cac

// -[SCFeatureSettingsService plus_badge_visibility_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c42cbc

// -[SCFeatureSettingsService plus_badge_visibility_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c42cc4

// -[SCFeatureSettingsService plusBadgeVisibility]
// Type encoding: q16@0:8
// Implementation: 0x1008129cc

// -[SCFeatureSettingsService isPlusStoryRewatchCountDisabledAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106c42ccc

// -[SCFeatureSettingsService plusStoryRewatchCountDisabledServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106c42cd8

// -[SCFeatureSettingsService setPlusStoryRewatchCountDisabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106c42ce4

// -[SCFeatureSettingsService plus_story_rewatch_count_disabled_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c42cf4

// -[SCFeatureSettingsService plus_story_rewatch_count_disabled_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c42cfc

// -[SCFeatureSettingsService plusStoryRewatchCountDisabled]
// Type encoding: B16@0:8
// Implementation: 0x106c42d04

// -[SCFeatureSettingsService isPlusPeekAPeekDisabledAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106c42d14

// -[SCFeatureSettingsService plusPeekAPeekDisabledServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106c42d20

// -[SCFeatureSettingsService setPlusPeekAPeekDisabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106c42d2c

// -[SCFeatureSettingsService plus_peek_a_peek_disabled_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c42d3c

// -[SCFeatureSettingsService plus_peek_a_peek_disabled_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c42d44

// -[SCFeatureSettingsService plusPeekAPeekDisabled]
// Type encoding: B16@0:8
// Implementation: 0x106c42d4c

// -[SCFeatureSettingsService isPlusSnapscoreMultiplierEnabledAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106c42d5c

// -[SCFeatureSettingsService plusSnapscoreMultiplierEnabledServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106c42d68

// -[SCFeatureSettingsService setPlusSnapscoreMultiplierEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106c42d74

// -[SCFeatureSettingsService plus_snapscore_multiplier_enabled_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c42d84

// -[SCFeatureSettingsService plus_snapscore_multiplier_enabled_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c42d8c

// -[SCFeatureSettingsService plusSnapscoreMultiplierEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106c42d94

// -[SCFeatureSettingsService isPlusClosestFriendScoreDisabledAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106c42da4

// -[SCFeatureSettingsService plusClosestFriendScoreDisabledServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106c42db0

// -[SCFeatureSettingsService setPlusClosestFriendScoreDisabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106c42dbc

// -[SCFeatureSettingsService plus_closest_friend_score_disabled_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c42dcc

// -[SCFeatureSettingsService plus_closest_friend_score_disabled_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c42dd4

// -[SCFeatureSettingsService plusClosestFriendScoreDisabled]
// Type encoding: B16@0:8
// Implementation: 0x106c42ddc

// -[SCFeatureSettingsService isPlusSnapscoreChangeDisabledAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106c42dec

// -[SCFeatureSettingsService plusSnapscoreChangeDisabledServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106c42df8

// -[SCFeatureSettingsService setPlusSnapscoreChangeDisabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106c42e04

// -[SCFeatureSettingsService plus_snapscore_change_disabled_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c42e14

// -[SCFeatureSettingsService plus_snapscore_change_disabled_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c42e1c

// -[SCFeatureSettingsService plusSnapscoreChangeDisabled]
// Type encoding: B16@0:8
// Implementation: 0x106c42e24

// -[SCFeatureSettingsService isPlusExtendedBestFriendsDisabledAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106c42e34

// -[SCFeatureSettingsService plusExtendedBestFriendsDisabledServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106c42e40

// -[SCFeatureSettingsService setPlusExtendedBestFriendsDisabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106c42e4c

// -[SCFeatureSettingsService plus_extended_best_friends_disabled_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c42e5c

// -[SCFeatureSettingsService plus_extended_best_friends_disabled_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c42e64

// -[SCFeatureSettingsService plusExtendedBestFriendsDisabled]
// Type encoding: B16@0:8
// Implementation: 0x106c42e6c

// -[SCFeatureSettingsService isPlusStoryTimestampsDisabledAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106c42e7c

// -[SCFeatureSettingsService plusStoryTimestampsDisabledServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106c42e88

// -[SCFeatureSettingsService setPlusStoryTimestampsDisabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106c42e94

// -[SCFeatureSettingsService plus_story_timestamps_disabled_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c42ea4

// -[SCFeatureSettingsService plus_story_timestamps_disabled_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c42eac

// -[SCFeatureSettingsService plusStoryTimestampsDisabled]
// Type encoding: B16@0:8
// Implementation: 0x106c42eb4

// -[SCFeatureSettingsService isPlusLightningSnapsDisabledAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106c42ec4

// -[SCFeatureSettingsService plusLightningSnapsDisabledServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106c42ed0

// -[SCFeatureSettingsService setPlusLightningSnapsDisabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106c42edc

// -[SCFeatureSettingsService plus_lightning_snaps_disabled_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c42eec

// -[SCFeatureSettingsService plus_lightning_snaps_disabled_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c42ef4

// -[SCFeatureSettingsService plusLightningSnapsDisabled]
// Type encoding: B16@0:8
// Implementation: 0x106c42efc

// -[SCFeatureSettingsService isPlusPublicMutualPinnedBFFEnabledAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106c42f0c

// -[SCFeatureSettingsService plusPublicMutualPinnedBFFEnabledServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106c42f18

// -[SCFeatureSettingsService setPlusPublicMutualPinnedBFFEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106c42f24

// -[SCFeatureSettingsService mutually_pinned_bff_public_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c42f34

// -[SCFeatureSettingsService mutually_pinned_bff_public_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c42f3c

// -[SCFeatureSettingsService plusPublicMutualPinnedBFFEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106c42f44

// -[SCFeatureSettingsService isPresenceHintsEnabledAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106c42f54

// -[SCFeatureSettingsService presenceHintsEnabledServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106c42f60

// -[SCFeatureSettingsService setPresenceHintsEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106c42f6c

// -[SCFeatureSettingsService presence_hints_enabled_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c42f7c

// -[SCFeatureSettingsService presence_hints_enabled_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c42f84

// -[SCFeatureSettingsService presenceHintsEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106c42f8c

// -[SCFeatureSettingsService isPlusInstantStreaksEnabledAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106c42f9c

// -[SCFeatureSettingsService instantStreaksEnabledServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106c42fa8

// -[SCFeatureSettingsService setInstantStreaksEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106c42fb4

// -[SCFeatureSettingsService plus_instant_streak_toggle_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c42fc4

// -[SCFeatureSettingsService plus_instant_streak_toggle_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c42fcc

// -[SCFeatureSettingsService instantStreaksEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106c42fd4

// -[SCFeatureSettingsService hasTosPromptAckedVersion]
// Type encoding: B16@0:8
// Implementation: 0x106c01798

// -[SCFeatureSettingsService tosPromptAckedVersionServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106c017a4

// -[SCFeatureSettingsService setTosPromptAckedVersion:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106c017b0

// -[SCFeatureSettingsService tos_prompt_acked_version_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c017c0

// -[SCFeatureSettingsService tos_prompt_acked_version_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c017c8

// -[SCFeatureSettingsService tosPromptAckedVersion]
// Type encoding: Q16@0:8
// Implementation: 0x106c017d0

// -[SCFeatureSettingsService isLogoutVerificationCoolDownCountAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106bfeb3c

// -[SCFeatureSettingsService logoutVerificationCoolDownCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106bfeb48

// -[SCFeatureSettingsService setLogoutVerificationCoolDownCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x106bfeb54

// -[SCFeatureSettingsService logout_verification_cool_down_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bfeb64

// -[SCFeatureSettingsService logout_verification_cool_down_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bfeb6c

// -[SCFeatureSettingsService logoutVerificationCoolDownCount]
// Type encoding: q16@0:8
// Implementation: 0x106bfeb74

// -[SCFeatureSettingsService isDeclaredAgeRangeResultAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106bfeb84

// -[SCFeatureSettingsService declaredAgeRangeResultServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106bfeb90

// -[SCFeatureSettingsService setDeclaredAgeRangeResult:]
// Type encoding: v24@0:8q16
// Implementation: 0x106bfeb9c

// -[SCFeatureSettingsService activation_declared_age_range_result_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bfebac

// -[SCFeatureSettingsService activation_declared_age_range_result_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bfebb4

// -[SCFeatureSettingsService declaredAgeRangeResult]
// Type encoding: q16@0:8
// Implementation: 0x106bfebbc

// -[SCFeatureSettingsService isAudienceMatchOptOut]
// Type encoding: B16@0:8
// Implementation: 0x106bf9fe4

// -[SCFeatureSettingsService audienceMatchOptOutServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106bf9ff0

// -[SCFeatureSettingsService setAudienceMatchOptOut:]
// Type encoding: v20@0:8B16
// Implementation: 0x106bf9ffc

// -[SCFeatureSettingsService audience_match_opt_out_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bfa00c

// -[SCFeatureSettingsService audience_match_opt_out_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bfa014

// -[SCFeatureSettingsService audienceMatchOptOut]
// Type encoding: B16@0:8
// Implementation: 0x106bfa01c

// -[SCFeatureSettingsService isExternalActivityMatchOptOut]
// Type encoding: B16@0:8
// Implementation: 0x106bfa02c

// -[SCFeatureSettingsService externalActivityMatchOptOutServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106bfa038

// -[SCFeatureSettingsService setExternalActivityMatchOptOut:]
// Type encoding: v20@0:8B16
// Implementation: 0x106bfa044

// -[SCFeatureSettingsService external_activity_match_opt_out_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bfa054

// -[SCFeatureSettingsService external_activity_match_opt_out_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bfa05c

// -[SCFeatureSettingsService externalActivityMatchOptOut]
// Type encoding: B16@0:8
// Implementation: 0x106bfa064

// -[SCFeatureSettingsService isThirdPartyAdNetworkOptOut]
// Type encoding: B16@0:8
// Implementation: 0x106bfa074

// -[SCFeatureSettingsService thirdPartyAdNetworkOptOutServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106bfa080

// -[SCFeatureSettingsService setThirdPartyAdNetworkOptOut:]
// Type encoding: v20@0:8B16
// Implementation: 0x106bfa08c

// -[SCFeatureSettingsService third_party_ad_network_opt_out_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bfa09c

// -[SCFeatureSettingsService third_party_ad_network_opt_out_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bfa0a4

// -[SCFeatureSettingsService thirdPartyAdNetworkOptOut]
// Type encoding: B16@0:8
// Implementation: 0x106bfa0ac

// -[SCFeatureSettingsService hasSponsoredSnapEUModalOptInStatus]
// Type encoding: B16@0:8
// Implementation: 0x106bfa0bc

// -[SCFeatureSettingsService sponsoredSnapEUModalOptInStatusServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106bfa0c8

// -[SCFeatureSettingsService setSponsoredSnapEUModalOptInStatus:]
// Type encoding: v24@0:8q16
// Implementation: 0x106bfa0d4

// -[SCFeatureSettingsService sponsored_snap_eu_modal_opt_in_status_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bfa0e4

// -[SCFeatureSettingsService sponsored_snap_eu_modal_opt_in_status_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bfa0ec

// -[SCFeatureSettingsService sponsoredSnapEUModalOptInStatus]
// Type encoding: q16@0:8
// Implementation: 0x106bfa0f4

// -[SCFeatureSettingsService hasSponsoredSnapEUModalLastShownTimestampMs]
// Type encoding: B16@0:8
// Implementation: 0x106bfa104

// -[SCFeatureSettingsService sponsoredSnapEUModalLastShownTimestampMsServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106bfa110

// -[SCFeatureSettingsService setSponsoredSnapEUModalLastShownTimestampMs:]
// Type encoding: v24@0:8q16
// Implementation: 0x106bfa11c

// -[SCFeatureSettingsService sponsored_snap_eu_modal_last_shown_timestamp_ms_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bfa12c

// -[SCFeatureSettingsService sponsored_snap_eu_modal_last_shown_timestamp_ms_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bfa134

// -[SCFeatureSettingsService sponsoredSnapEUModalLastShownTimestampMs]
// Type encoding: q16@0:8
// Implementation: 0x106bfa13c

// -[SCFeatureSettingsService hasSponsoredSnapEUModalShownCount]
// Type encoding: B16@0:8
// Implementation: 0x106bfa14c

// -[SCFeatureSettingsService sponsoredSnapEUModalShownCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106bfa158

// -[SCFeatureSettingsService setSponsoredSnapEUModalShownCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x106bfa164

// -[SCFeatureSettingsService sponsored_snap_eu_modal_shown_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bfa174

// -[SCFeatureSettingsService sponsored_snap_eu_modal_shown_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bfa17c

// -[SCFeatureSettingsService sponsoredSnapEUModalShownCount]
// Type encoding: q16@0:8
// Implementation: 0x106bfa184

// -[SCFeatureSettingsService hasInternalDreamsFeatureViewUserPolicy]
// Type encoding: B16@0:8
// Implementation: 0x106bdeb7c

// -[SCFeatureSettingsService internalDreamsFeatureViewUserPolicyServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106bdeb88

// -[SCFeatureSettingsService setInternalDreamsFeatureViewUserPolicy:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106bdeb94

// -[SCFeatureSettingsService dreams_view_policy_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bdeba4

// -[SCFeatureSettingsService dreams_view_policy_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bdebac

// -[SCFeatureSettingsService internalDreamsFeatureViewUserPolicy]
// Type encoding: Q16@0:8
// Implementation: 0x106bdebb4

// -[SCFeatureSettingsService hasInternalDreamsFeatureGenerationPolicy]
// Type encoding: B16@0:8
// Implementation: 0x106bdebc4

// -[SCFeatureSettingsService internalDreamsFeatureGenerationPolicyServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106bdebd0

// -[SCFeatureSettingsService setInternalDreamsFeatureGenerationPolicy:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106bdebdc

// -[SCFeatureSettingsService dreams_generation_policy_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bdebec

// -[SCFeatureSettingsService dreams_generation_policy_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bdebf4

// -[SCFeatureSettingsService internalDreamsFeatureGenerationPolicy]
// Type encoding: Q16@0:8
// Implementation: 0x106bdebfc

// -[SCFeatureSettingsService hasGenAILensFreemiumGroupCountersProto]
// Type encoding: B16@0:8
// Implementation: 0x106bdec0c

// -[SCFeatureSettingsService genAILensFreemiumGroupCountersProtoServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106bdec18

// -[SCFeatureSettingsService setGenAILensFreemiumGroupCountersProto:]
// Type encoding: v24@0:8@16
// Implementation: 0x106bdec24

// -[SCFeatureSettingsService genai_lens_freemium_group_counters_proto_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bdec34

// -[SCFeatureSettingsService genai_lens_freemium_group_counters_proto_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bdec5c

// -[SCFeatureSettingsService genAILensFreemiumGroupCountersProto]
// Type encoding: @16@0:8
// Implementation: 0x106bdec84

// -[SCFeatureSettingsService hasAiCreditsStateSnapshotProto]
// Type encoding: B16@0:8
// Implementation: 0x106bdec98

// -[SCFeatureSettingsService aiCreditsStateSnapshotProtoServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106bdeca4

// -[SCFeatureSettingsService setAiCreditsStateSnapshotProto:]
// Type encoding: v24@0:8@16
// Implementation: 0x106bdecb0

// -[SCFeatureSettingsService ai_credits_state_snapshot_proto_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bdecc0

// -[SCFeatureSettingsService ai_credits_state_snapshot_proto_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bdece8

// -[SCFeatureSettingsService aiCreditsStateSnapshotProto]
// Type encoding: @16@0:8
// Implementation: 0x106bded10

// -[SCFeatureSettingsService hasGenAIFeatureRestricted]
// Type encoding: B16@0:8
// Implementation: 0x106bde074

// -[SCFeatureSettingsService genAIFeatureRestrictedServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106bde080

// -[SCFeatureSettingsService setGenAIFeatureRestricted:]
// Type encoding: v20@0:8B16
// Implementation: 0x106bde08c

// -[SCFeatureSettingsService gen_ai_feature_restricted_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bde09c

// -[SCFeatureSettingsService gen_ai_feature_restricted_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bde0a4

// -[SCFeatureSettingsService genAIFeatureRestricted]
// Type encoding: B16@0:8
// Implementation: 0x106bde0ac

// -[SCFeatureSettingsService hasGenAIIdentityOnboarded]
// Type encoding: B16@0:8
// Implementation: 0x106bde0bc

// -[SCFeatureSettingsService genAIIdentityOnboardedServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106bde0c8

// -[SCFeatureSettingsService setGenAIIdentityOnboarded:]
// Type encoding: v20@0:8B16
// Implementation: 0x106bde0d4

// -[SCFeatureSettingsService gen_ai_identity_onboarded_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bde0e4

// -[SCFeatureSettingsService gen_ai_identity_onboarded_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bde0ec

// -[SCFeatureSettingsService genAIIdentityOnboarded]
// Type encoding: B16@0:8
// Implementation: 0x106bde0f4

// -[SCFeatureSettingsService dreamsFeatureViewUserPolicy]
// Type encoding: i16@0:8
// Implementation: 0x106bde104

// -[SCFeatureSettingsService setDreamsFeatureViewUserPolicy:]
// Type encoding: v20@0:8i16
// Implementation: 0x106bde118

// -[SCFeatureSettingsService dreamsFeatureGenerationPolicy]
// Type encoding: i16@0:8
// Implementation: 0x106bde120

// -[SCFeatureSettingsService setDreamsFeatureGenerationPolicy:]
// Type encoding: v20@0:8i16
// Implementation: 0x106bde134

// -[SCFeatureSettingsService hasDreamsFeatureGenerationPolicy]
// Type encoding: B16@0:8
// Implementation: 0x106bde13c

// -[SCFeatureSettingsService dreamsFeatureGenerationPolicyObservable]
// Type encoding: @16@0:8
// Implementation: 0x106bde140

// -[SCFeatureSettingsService hasDreamsSponsoredDisclaimerShownCount]
// Type encoding: B16@0:8
// Implementation: 0x106bde3f4

// -[SCFeatureSettingsService dreamsSponsoredDisclaimerShownCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106bde400

// -[SCFeatureSettingsService setDreamsSponsoredDisclaimerShownCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x106bde40c

// -[SCFeatureSettingsService dreams_sponsored_disclaimer_shown_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bde41c

// -[SCFeatureSettingsService dreams_sponsored_disclaimer_shown_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bde424

// -[SCFeatureSettingsService dreamsSponsoredDisclaimerShownCount]
// Type encoding: q16@0:8
// Implementation: 0x106bde42c

// -[SCFeatureSettingsService hasDreamsSnapchatPlusPopupShownCount]
// Type encoding: B16@0:8
// Implementation: 0x106bde43c

// -[SCFeatureSettingsService dreamsSnapchatPlusPopupShownCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106bde448

// -[SCFeatureSettingsService setDreamsSnapchatPlusPopupShownCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x106bde454

// -[SCFeatureSettingsService dreams_snapchat_plus_popup_shown_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bde464

// -[SCFeatureSettingsService dreams_snapchat_plus_popup_shown_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bde46c

// -[SCFeatureSettingsService dreamsSnapchatPlusPopupShownCount]
// Type encoding: q16@0:8
// Implementation: 0x106bde474

// -[SCFeatureSettingsService hasAICaptionsJitAcceptedVersion]
// Type encoding: B16@0:8
// Implementation: 0x106bde484

// -[SCFeatureSettingsService AICaptionsJitAcceptedVersionServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106bde490

// -[SCFeatureSettingsService setAICaptionsJitAcceptedVersion:]
// Type encoding: v24@0:8q16
// Implementation: 0x106bde49c

// -[SCFeatureSettingsService ai_caption_jit_accepted_version_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bde4ac

// -[SCFeatureSettingsService ai_caption_jit_accepted_version_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bde4b4

// -[SCFeatureSettingsService AICaptionsJitAcceptedVersion]
// Type encoding: q16@0:8
// Implementation: 0x106bde4bc

// -[SCFeatureSettingsService hasDreamsBadgeLastSeenTimestampMs]
// Type encoding: B16@0:8
// Implementation: 0x106bde4cc

// -[SCFeatureSettingsService dreamsBadgeLastSeenTimestampMsServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106bde4d8

// -[SCFeatureSettingsService setDreamsBadgeLastSeenTimestampMs:]
// Type encoding: v24@0:8q16
// Implementation: 0x106bde4e4

// -[SCFeatureSettingsService dreams_tab_last_seen_timestamp_ms_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bde4f4

// -[SCFeatureSettingsService dreams_tab_last_seen_timestamp_ms_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bde4fc

// -[SCFeatureSettingsService dreamsBadgeLastSeenTimestampMs]
// Type encoding: q16@0:8
// Implementation: 0x106bde504

// -[SCFeatureSettingsService hasGenerativeAICameraTextToImageDisclaimerAccepted]
// Type encoding: B16@0:8
// Implementation: 0x106bde514

// -[SCFeatureSettingsService generativeAICameraTextToImageDisclaimerAcceptedServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106bde520

// -[SCFeatureSettingsService setGenerativeAICameraTextToImageDisclaimerAccepted:]
// Type encoding: v20@0:8B16
// Implementation: 0x106bde52c

// -[SCFeatureSettingsService generative_ai_camera_text_to_image_disclaimer_accepted_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bde53c

// -[SCFeatureSettingsService generative_ai_camera_text_to_image_disclaimer_accepted_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bde544

// -[SCFeatureSettingsService generativeAICameraTextToImageDisclaimerAccepted]
// Type encoding: B16@0:8
// Implementation: 0x106bde54c

// -[SCFeatureSettingsService hasDreamsNewPackDreamsTabTopBannerSeenPacks]
// Type encoding: B16@0:8
// Implementation: 0x106bde55c

// -[SCFeatureSettingsService dreamsNewPackDreamsTabTopBannerSeenPacksServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106bde568

// -[SCFeatureSettingsService setDreamsNewPackDreamsTabTopBannerSeenPacks:]
// Type encoding: v24@0:8@16
// Implementation: 0x106bde574

// -[SCFeatureSettingsService dreams_new_pack_dreams_tab_top_banner_seen_packs_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bde584

// -[SCFeatureSettingsService dreams_new_pack_dreams_tab_top_banner_seen_packs_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bde5ac

// -[SCFeatureSettingsService dreamsNewPackDreamsTabTopBannerSeenPacks]
// Type encoding: @16@0:8
// Implementation: 0x106bde5d4

// -[SCFeatureSettingsService hasDreamsNewPackSnapsTabBottomBannerSeenPacks]
// Type encoding: B16@0:8
// Implementation: 0x106bde5e8

// -[SCFeatureSettingsService dreamsNewPackSnapsTabBottomBannerSeenPacksServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106bde5f4

// -[SCFeatureSettingsService setDreamsNewPackSnapsTabBottomBannerSeenPacks:]
// Type encoding: v24@0:8@16
// Implementation: 0x106bde600

// -[SCFeatureSettingsService dreams_new_pack_snaps_tab_bottom_banner_seen_packs_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bde610

// -[SCFeatureSettingsService dreams_new_pack_snaps_tab_bottom_banner_seen_packs_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bde638

// -[SCFeatureSettingsService dreamsNewPackSnapsTabBottomBannerSeenPacks]
// Type encoding: @16@0:8
// Implementation: 0x106bde660

// -[SCFeatureSettingsService hasMySelfieSeeInAdsEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106bde674

// -[SCFeatureSettingsService mySelfieSeeInAdsEnabledServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106bde680

// -[SCFeatureSettingsService setMySelfieSeeInAdsEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106bde68c

// -[SCFeatureSettingsService my_selfie_see_in_ads_enabled_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bde69c

// -[SCFeatureSettingsService my_selfie_see_in_ads_enabled_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bde6a4

// -[SCFeatureSettingsService mySelfieSeeInAdsEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106bde6ac

// -[SCFeatureSettingsService hasMySelfieHasSeenOnboardingJit]
// Type encoding: B16@0:8
// Implementation: 0x106bde6bc

// -[SCFeatureSettingsService mySelfieHasSeenOnboardingJitServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106bde6c8

// -[SCFeatureSettingsService setMySelfieHasSeenOnboardingJit:]
// Type encoding: v20@0:8B16
// Implementation: 0x106bde6d4

// -[SCFeatureSettingsService my_selfie_has_seen_onboarding_jit_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bde6e4

// -[SCFeatureSettingsService my_selfie_has_seen_onboarding_jit_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bde6ec

// -[SCFeatureSettingsService mySelfieHasSeenOnboardingJit]
// Type encoding: B16@0:8
// Implementation: 0x106bde6f4

// -[SCFeatureSettingsService hasMySelfieAiSnapsEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106bde704

// -[SCFeatureSettingsService mySelfieAiSnapsEnabledServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106bde710

// -[SCFeatureSettingsService setMySelfieAiSnapsEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106bde71c

// -[SCFeatureSettingsService my_selfie_ai_snaps_enabled_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bde72c

// -[SCFeatureSettingsService my_selfie_ai_snaps_enabled_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bde734

// -[SCFeatureSettingsService mySelfieAiSnapsEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106bde73c

// -[SCFeatureSettingsService hasAIStoryReplyDisclaimerAccepted]
// Type encoding: B16@0:8
// Implementation: 0x106bde74c

// -[SCFeatureSettingsService AIStoryReplyDisclaimerAcceptedServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106bde758

// -[SCFeatureSettingsService setAIStoryReplyDisclaimerAccepted:]
// Type encoding: v20@0:8B16
// Implementation: 0x106bde764

// -[SCFeatureSettingsService ai_story_reply_disclaimer_accepted_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bde774

// -[SCFeatureSettingsService ai_story_reply_disclaimer_accepted_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bde77c

// -[SCFeatureSettingsService AIStoryReplyDisclaimerAccepted]
// Type encoding: B16@0:8
// Implementation: 0x106bde784

// -[SCFeatureSettingsService hasAISnapInChatTooltipShownVersion]
// Type encoding: B16@0:8
// Implementation: 0x106bde794

// -[SCFeatureSettingsService AISnapInChatTooltipShownVersionServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106bde7a0

// -[SCFeatureSettingsService setAISnapInChatTooltipShownVersion:]
// Type encoding: v24@0:8q16
// Implementation: 0x106bde7ac

// -[SCFeatureSettingsService ai_snap_in_chat_tooltip_version_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bde7bc

// -[SCFeatureSettingsService ai_snap_in_chat_tooltip_version_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bde7c4

// -[SCFeatureSettingsService AISnapInChatTooltipShownVersion]
// Type encoding: q16@0:8
// Implementation: 0x106bde7cc

// -[SCFeatureSettingsService hasAISnapInChatDisclaimerVersion]
// Type encoding: B16@0:8
// Implementation: 0x106bde7dc

// -[SCFeatureSettingsService AISnapInChatDisclaimerVersionServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106bde7e8

// -[SCFeatureSettingsService setAISnapInChatDisclaimerVersion:]
// Type encoding: v24@0:8q16
// Implementation: 0x106bde7f4

// -[SCFeatureSettingsService ai_snap_in_chat_disclaimer_version_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bde804

// -[SCFeatureSettingsService ai_snap_in_chat_disclaimer_version_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bde80c

// -[SCFeatureSettingsService AISnapInChatDisclaimerVersion]
// Type encoding: q16@0:8
// Implementation: 0x106bde814

// -[SCFeatureSettingsService freemiumLensGroupUsageCountersList:]
// Type encoding: @24@0:8^@16
// Implementation: 0x106bde824

// -[SCFeatureSettingsService setFreemiumLensGroupUsageCountersList:]
// Type encoding: v24@0:8@16
// Implementation: 0x106bde9a4

// -[SCFeatureSettingsService aiCreditsStateSnapshot:]
// Type encoding: @24@0:8^@16
// Implementation: 0x106bdea28

// -[SCFeatureSettingsService aiCreditsStateSnapshotRawString]
// Type encoding: @16@0:8
// Implementation: 0x106bdeb78

// -[SCFeatureSettingsService hasSpotlightInterstitialImpressionCount]
// Type encoding: B16@0:8
// Implementation: 0x106a63738

// -[SCFeatureSettingsService spotlightInterstitialImpressionCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106a63744

// -[SCFeatureSettingsService setSpotlightInterstitialImpressionCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106a63750

// -[SCFeatureSettingsService spotlight_interstitial_impression_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a63760

// -[SCFeatureSettingsService spotlight_interstitial_impression_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a63768

// -[SCFeatureSettingsService spotlightInterstitialImpressionCount]
// Type encoding: Q16@0:8
// Implementation: 0x106a63770

// -[SCFeatureSettingsService getExpressiveTextSizeGrabberTooltipSeenV2]
// Type encoding: B16@0:8
// Implementation: 0x106a2f4dc

// -[SCFeatureSettingsService expressiveTextSizeGrabberTooltipSeenV2ServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106a2f4e8

// -[SCFeatureSettingsService setExpressiveTextSizeGrabberTooltipSeenV2:]
// Type encoding: v24@0:8q16
// Implementation: 0x106a2f4f4

// -[SCFeatureSettingsService expressive_text_size_grabber_tooltip_seen_v2_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a2f504

// -[SCFeatureSettingsService expressive_text_size_grabber_tooltip_seen_v2_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a2f50c

// -[SCFeatureSettingsService expressiveTextSizeGrabberTooltipSeenV2]
// Type encoding: q16@0:8
// Implementation: 0x106a2f514

// -[SCFeatureSettingsService getExpressiveTextSizeGrabberTooltipSeen]
// Type encoding: B16@0:8
// Implementation: 0x106a2f494

// -[SCFeatureSettingsService expressiveTextSizeGrabberTooltipSeenServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106a2f4a0

// -[SCFeatureSettingsService setExpressiveTextSizeGrabberTooltipSeen:]
// Type encoding: v24@0:8q16
// Implementation: 0x106a2f4ac

// -[SCFeatureSettingsService expressive_text_size_grabber_tooltip_seen_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a2f4bc

// -[SCFeatureSettingsService expressive_text_size_grabber_tooltip_seen_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a2f4c4

// -[SCFeatureSettingsService expressiveTextSizeGrabberTooltipSeen]
// Type encoding: q16@0:8
// Implementation: 0x106a2f4cc

// -[SCFeatureSettingsService isHasFavoritedMemoriesSnap]
// Type encoding: B16@0:8
// Implementation: 0x106a0c444

// -[SCFeatureSettingsService hasFavoritedMemoriesSnapServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106a0c450

// -[SCFeatureSettingsService setHasFavoritedMemoriesSnap:]
// Type encoding: v20@0:8B16
// Implementation: 0x106a0c45c

// -[SCFeatureSettingsService has_favorited_memories_snap_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a0c46c

// -[SCFeatureSettingsService has_favorited_memories_snap_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a0c474

// -[SCFeatureSettingsService hasFavoritedMemoriesSnap]
// Type encoding: B16@0:8
// Implementation: 0x106a0c47c

// -[SCFeatureSettingsService isHasSeenConsolidatedStoryPageAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106a09b4c

// -[SCFeatureSettingsService hasSeenConsolidatedStoryPageServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106a09b58

// -[SCFeatureSettingsService setHasSeenConsolidatedStoryPage:]
// Type encoding: v20@0:8B16
// Implementation: 0x106a09b64

// -[SCFeatureSettingsService has_seen_consolidated_story_page_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a09b74

// -[SCFeatureSettingsService has_seen_consolidated_story_page_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a09b7c

// -[SCFeatureSettingsService hasSeenConsolidatedStoryPage]
// Type encoding: B16@0:8
// Implementation: 0x106a09b84

// -[SCFeatureSettingsService isHideLegacyAutoSavedStoriesAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106a09b94

// -[SCFeatureSettingsService hideLegacyAutoSavedStoriesServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106a09ba0

// -[SCFeatureSettingsService setHideLegacyAutoSavedStories:]
// Type encoding: v20@0:8B16
// Implementation: 0x106a09bac

// -[SCFeatureSettingsService hide_legacy_auto_saved_stories_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a09bbc

// -[SCFeatureSettingsService hide_legacy_auto_saved_stories_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a09bc4

// -[SCFeatureSettingsService hideLegacyAutoSavedStories]
// Type encoding: B16@0:8
// Implementation: 0x106a09bcc

// -[SCFeatureSettingsService isOneTapQuickPostToolTipShownCountAvailable]
// Type encoding: B16@0:8
// Implementation: 0x1068c840c

// -[SCFeatureSettingsService oneTapQuickPostToolTipShownCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1068c8418

// -[SCFeatureSettingsService setSeenOneTapQuickPostToolTipShownCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x1068c8424

// -[SCFeatureSettingsService one_tap_quick_post_preview_long_press_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1068c8434

// -[SCFeatureSettingsService one_tap_quick_post_preview_long_press_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1068c843c

// -[SCFeatureSettingsService oneTapQuickPostToolTipShownCount]
// Type encoding: q16@0:8
// Implementation: 0x1068c8444

// -[SCFeatureSettingsService isCompletedVOperaV2Onboarding]
// Type encoding: B16@0:8
// Implementation: 0x1068c8334

// -[SCFeatureSettingsService completedVOperaV2OnboardingServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1068c8340

// -[SCFeatureSettingsService setCompletedVOperaV2Onboarding:]
// Type encoding: v20@0:8B16
// Implementation: 0x1068c834c

// -[SCFeatureSettingsService completed_vopera_v2_onboarding_with_swiep_left_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1068c835c

// -[SCFeatureSettingsService completed_vopera_v2_onboarding_with_swiep_left_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1068c8364

// -[SCFeatureSettingsService completedVOperaV2Onboarding]
// Type encoding: B16@0:8
// Implementation: 0x1068c836c

// -[SCFeatureSettingsService getDateLastCompletedVOperaOnboardingExitTooltipMilliseconds]
// Type encoding: B16@0:8
// Implementation: 0x1068c837c

// -[SCFeatureSettingsService dateLastCompletedVOperaOnboardingExitTooltipMillisecondsServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1068c8388

// -[SCFeatureSettingsService setDateLastCompletedVOperaOnboardingExitTooltipMilliseconds:]
// Type encoding: v24@0:8q16
// Implementation: 0x1068c8394

// -[SCFeatureSettingsService completed_vertical_opera_onboarding_exit_tooltip_date_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1068c83a4

// -[SCFeatureSettingsService completed_vertical_opera_onboarding_exit_tooltip_date_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1068c83ac

// -[SCFeatureSettingsService dateLastCompletedVOperaOnboardingExitTooltipMilliseconds]
// Type encoding: q16@0:8
// Implementation: 0x1068c83b4

// -[SCFeatureSettingsService isCompletedSpotlightFeedOnboarding]
// Type encoding: B16@0:8
// Implementation: 0x1068c83c4

// -[SCFeatureSettingsService completedSpotlightFeedOnboardingServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1068c83d0

// -[SCFeatureSettingsService setCompletedSpotlightFeedOnboarding:]
// Type encoding: v20@0:8B16
// Implementation: 0x1068c83dc

// -[SCFeatureSettingsService completed_spotlight_feed_onboarding_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1068c83ec

// -[SCFeatureSettingsService completed_spotlight_feed_onboarding_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1068c83f4

// -[SCFeatureSettingsService completedSpotlightFeedOnboarding]
// Type encoding: B16@0:8
// Implementation: 0x1068c83fc

// -[SCFeatureSettingsService hasSpotlightStoryShareAlertAccepted]
// Type encoding: B16@0:8
// Implementation: 0x10689d04c

// -[SCFeatureSettingsService spotlightStoryShareAlertAcceptedServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10689d058

// -[SCFeatureSettingsService setSpotlightStoryShareAlertAccepted:]
// Type encoding: v20@0:8B16
// Implementation: 0x10689d064

// -[SCFeatureSettingsService SPOTLIGHT_STORY_SHARE_ALERT_ACCEPTED_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10689d074

// -[SCFeatureSettingsService SPOTLIGHT_STORY_SHARE_ALERT_ACCEPTED_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10689d07c

// -[SCFeatureSettingsService spotlightStoryShareAlertAccepted]
// Type encoding: B16@0:8
// Implementation: 0x10689d084

// -[SCFeatureSettingsService isHasSeenMemoryLinkPrivacyAlertAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106833f88

// -[SCFeatureSettingsService hasSeenMemoryLinkPrivacyAlertServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106833f94

// -[SCFeatureSettingsService setHasSeenMemoryLinkPrivacyAlert:]
// Type encoding: v20@0:8B16
// Implementation: 0x106833fa0

// -[SCFeatureSettingsService SHARING_HAS_SEEN_MEDIA_LINK_PRIVACY_ALERT_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106833fb0

// -[SCFeatureSettingsService SHARING_HAS_SEEN_MEDIA_LINK_PRIVACY_ALERT_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106833fb8

// -[SCFeatureSettingsService hasSeenMemoryLinkPrivacyAlert]
// Type encoding: B16@0:8
// Implementation: 0x106833fc0

// -[SCFeatureSettingsService hasSeenMainCameraSharePrompt]
// Type encoding: B16@0:8
// Implementation: 0x1067f90e8

// -[SCFeatureSettingsService seenMainCameraSharePromptServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1067f90f4

// -[SCFeatureSettingsService setSeenMainCameraSharePrompt:]
// Type encoding: v20@0:8B16
// Implementation: 0x1067f9100

// -[SCFeatureSettingsService SEEN_MAIN_CAMERA_SHARE_PROMPT_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1067f9110

// -[SCFeatureSettingsService SEEN_MAIN_CAMERA_SHARE_PROMPT_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1067f9118

// -[SCFeatureSettingsService seenMainCameraSharePrompt]
// Type encoding: B16@0:8
// Implementation: 0x1067f9120

// -[SCFeatureSettingsService hasSeenPreselectPrivateStoryModal]
// Type encoding: B16@0:8
// Implementation: 0x1067ee89c

// -[SCFeatureSettingsService seenPreselectPrivateStoryModalServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1067ee8a8

// -[SCFeatureSettingsService setSeenPreselectPrivateStoryModal:]
// Type encoding: v20@0:8B16
// Implementation: 0x1067ee8b4

// -[SCFeatureSettingsService QUICK_POST_PRESELECTION_PROMPT_ACCEPTED_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1067ee8c4

// -[SCFeatureSettingsService QUICK_POST_PRESELECTION_PROMPT_ACCEPTED_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1067ee8cc

// -[SCFeatureSettingsService seenPreselectPrivateStoryModal]
// Type encoding: B16@0:8
// Implementation: 0x1067ee8d4

// -[SCFeatureSettingsService isStoryBoostStartTimestampAvailable]
// Type encoding: B16@0:8
// Implementation: 0x1067a2c30

// -[SCFeatureSettingsService storyBoostStartTimestampServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1067a2c3c

// -[SCFeatureSettingsService setStoryBoostStartTimestamp:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1067a2c48

// -[SCFeatureSettingsService story_boost_start_timestamp_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1067a2c58

// -[SCFeatureSettingsService story_boost_start_timestamp_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1067a2c60

// -[SCFeatureSettingsService storyBoostStartTimestamp]
// Type encoding: Q16@0:8
// Implementation: 0x1067a2c68

// -[SCFeatureSettingsService isStoryBoostEndTimestampAvailable]
// Type encoding: B16@0:8
// Implementation: 0x1067a2c78

// -[SCFeatureSettingsService storyBoostEndTimestampServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1067a2c84

// -[SCFeatureSettingsService setStoryBoostEndTimestamp:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1067a2c90

// -[SCFeatureSettingsService story_boost_end_timestamp_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1067a2ca0

// -[SCFeatureSettingsService story_boost_end_timestamp_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1067a2ca8

// -[SCFeatureSettingsService storyBoostEndTimestamp]
// Type encoding: Q16@0:8
// Implementation: 0x1067a2cb0

// -[SCFeatureSettingsService isGenAIStickersLegalAcceptedAvailable]
// Type encoding: B16@0:8
// Implementation: 0x1067999b0

// -[SCFeatureSettingsService genAIStickersLegalAcceptedServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1067999bc

// -[SCFeatureSettingsService setGenAIStickersLegalAccepted:]
// Type encoding: v20@0:8B16
// Implementation: 0x1067999c8

// -[SCFeatureSettingsService gen_ai_stickers_p_and_l_accepted_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1067999d8

// -[SCFeatureSettingsService gen_ai_stickers_p_and_l_accepted_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1067999e0

// -[SCFeatureSettingsService genAIStickersLegalAccepted]
// Type encoding: B16@0:8
// Implementation: 0x1067999e8

// -[SCFeatureSettingsService areOSShareIntentsEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1065bbc20

// -[SCFeatureSettingsService enableOSShareIntentsServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1065bbc2c

// -[SCFeatureSettingsService setEnableOSShareIntents:]
// Type encoding: v20@0:8B16
// Implementation: 0x1065bbc38

// -[SCFeatureSettingsService enable_ios_share_intents_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1065bbc48

// -[SCFeatureSettingsService enable_ios_share_intents_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1065bbc50

// -[SCFeatureSettingsService enableOSShareIntents]
// Type encoding: B16@0:8
// Implementation: 0x10095a2cc

// -[SCFeatureSettingsService getContextLinkfireDisclaimerAccepted]
// Type encoding: B16@0:8
// Implementation: 0x106466c14

// -[SCFeatureSettingsService contextLinkfireDisclaimerAcceptedServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106466c20

// -[SCFeatureSettingsService setContextLinkfireDisclaimerAccepted:]
// Type encoding: v20@0:8B16
// Implementation: 0x106466c2c

// -[SCFeatureSettingsService context_linkfire_disclaimer_accepted_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106466c3c

// -[SCFeatureSettingsService context_linkfire_disclaimer_accepted_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106466c44

// -[SCFeatureSettingsService contextLinkfireDisclaimerAccepted]
// Type encoding: B16@0:8
// Implementation: 0x106466c4c

// -[SCFeatureSettingsService hasSeenHelperTooltipForStory]
// Type encoding: B16@0:8
// Implementation: 0x1062da9f0

// -[SCFeatureSettingsService seenHelperTooltipForStoryServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1062da9fc

// -[SCFeatureSettingsService setSeenHelperTooltipForStory:]
// Type encoding: v20@0:8B16
// Implementation: 0x1062daa08

// -[SCFeatureSettingsService pay_to_promote_button_tooltip_highlight_seen_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1062daa18

// -[SCFeatureSettingsService pay_to_promote_button_tooltip_highlight_seen_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1062daa20

// -[SCFeatureSettingsService seenHelperTooltipForStory]
// Type encoding: B16@0:8
// Implementation: 0x1062daa28

// -[SCFeatureSettingsService hasSeenHelperTooltipForHighlight]
// Type encoding: B16@0:8
// Implementation: 0x1062daa38

// -[SCFeatureSettingsService seenHelperTooltipForHighlightServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1062daa44

// -[SCFeatureSettingsService setSeenHelperTooltipForHighlight:]
// Type encoding: v20@0:8B16
// Implementation: 0x1062daa50

// -[SCFeatureSettingsService pay_to_promote_button_tooltip_story_seen_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1062daa60

// -[SCFeatureSettingsService pay_to_promote_button_tooltip_story_seen_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1062daa68

// -[SCFeatureSettingsService seenHelperTooltipForHighlight]
// Type encoding: B16@0:8
// Implementation: 0x1062daa70

// -[SCFeatureSettingsService hasSeenHelperTooltipForSpotlight]
// Type encoding: B16@0:8
// Implementation: 0x1062daa80

// -[SCFeatureSettingsService seenHelperTooltipForSpotlightServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1062daa8c

// -[SCFeatureSettingsService setSeenHelperTooltipForSpotlight:]
// Type encoding: v20@0:8B16
// Implementation: 0x1062daa98

// -[SCFeatureSettingsService pay_to_promote_button_tooltip_spotlight_seen_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1062daaa8

// -[SCFeatureSettingsService pay_to_promote_button_tooltip_spotlight_seen_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1062daab0

// -[SCFeatureSettingsService seenHelperTooltipForSpotlight]
// Type encoding: B16@0:8
// Implementation: 0x1062daab8

// -[SCFeatureSettingsService getPollsVotingAcknowledged]
// Type encoding: B16@0:8
// Implementation: 0x10626b0a8

// -[SCFeatureSettingsService pollsVotingAcknowledgedServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10626b0b4

// -[SCFeatureSettingsService setPollsVotingAcknowledged:]
// Type encoding: v20@0:8B16
// Implementation: 0x10626b0c0

// -[SCFeatureSettingsService interactions_poll_voting_acknowledged_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10626b0d0

// -[SCFeatureSettingsService interactions_poll_voting_acknowledged_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10626b0d8

// -[SCFeatureSettingsService pollsVotingAcknowledged]
// Type encoding: B16@0:8
// Implementation: 0x10626b0e0

// -[SCFeatureSettingsService hasZoomFactorsPillTapMoreTooltipSeen]
// Type encoding: B16@0:8
// Implementation: 0x106199404

// -[SCFeatureSettingsService zoomFactorsPillTapMoreTooltipSeenServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106199410

// -[SCFeatureSettingsService setZoomFactorsPillTapMoreTooltipSeen:]
// Type encoding: v20@0:8B16
// Implementation: 0x10619941c

// -[SCFeatureSettingsService ZOOM_FACTORS_PILL_TAP_MORE_TOOLTIP_SEEN_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10619942c

// -[SCFeatureSettingsService ZOOM_FACTORS_PILL_TAP_MORE_TOOLTIP_SEEN_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106199434

// -[SCFeatureSettingsService zoomFactorsPillTapMoreTooltipSeen]
// Type encoding: B16@0:8
// Implementation: 0x10619943c

// -[SCFeatureSettingsService isRingFlashEnabledCountAvailable]
// Type encoding: B16@0:8
// Implementation: 0x106188f24

// -[SCFeatureSettingsService ringFlashEnabledCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106188f30

// -[SCFeatureSettingsService setRingFlashEnabledCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x106188f3c

// -[SCFeatureSettingsService ring_flash_enabled_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106188f4c

// -[SCFeatureSettingsService ring_flash_enabled_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106188f54

// -[SCFeatureSettingsService ringFlashEnabledCount]
// Type encoding: q16@0:8
// Implementation: 0x106188f5c

// -[SCFeatureSettingsService hasRingFlashWidgetTooltipShownCount]
// Type encoding: B16@0:8
// Implementation: 0x106188f6c

// -[SCFeatureSettingsService ringFlashWidgetTooltipShownCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106188f78

// -[SCFeatureSettingsService setRingFlashWidgetTooltipShownCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x106188f84

// -[SCFeatureSettingsService RING_FLASH_WIDGET_TOOLTIP_SHOWN_COUNT_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106188f94

// -[SCFeatureSettingsService RING_FLASH_WIDGET_TOOLTIP_SHOWN_COUNT_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106188f9c

// -[SCFeatureSettingsService ringFlashWidgetTooltipShownCount]
// Type encoding: q16@0:8
// Implementation: 0x106188fa4

// -[SCFeatureSettingsService hasLastUsedRingFlashState]
// Type encoding: B16@0:8
// Implementation: 0x106188fb4

// -[SCFeatureSettingsService lastUsedRingFlashStateServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106188fc0

// -[SCFeatureSettingsService setLastUsedRingFlashState:]
// Type encoding: v24@0:8q16
// Implementation: 0x106188fcc

// -[SCFeatureSettingsService LAST_USED_RING_FLASH_STATE_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106188fdc

// -[SCFeatureSettingsService LAST_USED_RING_FLASH_STATE_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106188fe4

// -[SCFeatureSettingsService lastUsedRingFlashState]
// Type encoding: q16@0:8
// Implementation: 0x10085eb78

// -[SCFeatureSettingsService hasLastUsedRingFlashColor]
// Type encoding: B16@0:8
// Implementation: 0x106188fec

// -[SCFeatureSettingsService lastUsedRingFlashColorServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106188ff8

// -[SCFeatureSettingsService setLastUsedRingFlashColor:]
// Type encoding: v24@0:8q16
// Implementation: 0x106189004

// -[SCFeatureSettingsService LAST_USED_RING_FLASH_COLOR_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106189014

// -[SCFeatureSettingsService LAST_USED_RING_FLASH_COLOR_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10618901c

// -[SCFeatureSettingsService lastUsedRingFlashColor]
// Type encoding: q16@0:8
// Implementation: 0x106189024

// -[SCFeatureSettingsService hasLastUsedRingFlashSize]
// Type encoding: B16@0:8
// Implementation: 0x106189034

// -[SCFeatureSettingsService lastUsedRingFlashSizeServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106189040

// -[SCFeatureSettingsService setLastUsedRingFlashSize:]
// Type encoding: v24@0:8q16
// Implementation: 0x10618904c

// -[SCFeatureSettingsService LAST_USED_RING_FLASH_SIZE_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10618905c

// -[SCFeatureSettingsService LAST_USED_RING_FLASH_SIZE_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106189064

// -[SCFeatureSettingsService lastUsedRingFlashSize]
// Type encoding: q16@0:8
// Implementation: 0x10618906c

// -[SCFeatureSettingsService hasHDModeStateEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10617420c

// -[SCFeatureSettingsService hdModeStateEnabledServerParam]
// Type encoding: @16@0:8
// Implementation: 0x106174218

// -[SCFeatureSettingsService setHDModeStateEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106174224

// -[SCFeatureSettingsService HD_MODE_STATE_ENABLED_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106174234

// -[SCFeatureSettingsService HD_MODE_STATE_ENABLED_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10617423c

// -[SCFeatureSettingsService hdModeStateEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106174244

// -[SCFeatureSettingsService hasEntryPointLastTriggeredTimeMs]
// Type encoding: B16@0:8
// Implementation: 0x106151170

// -[SCFeatureSettingsService entryPointLastTriggeredTimeMsServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10615117c

// -[SCFeatureSettingsService setEntryPointLastTriggeredTimeMs:]
// Type encoding: v24@0:8q16
// Implementation: 0x106151188

// -[SCFeatureSettingsService MQS_ENTRY_POINT_LAST_TRIGGERED_TIME_MS_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x106151198

// -[SCFeatureSettingsService MQS_ENTRY_POINT_LAST_TRIGGERED_TIME_MS_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1061511a0

// -[SCFeatureSettingsService entryPointLastTriggeredTimeMs]
// Type encoding: q16@0:8
// Implementation: 0x1061511a8

// -[SCFeatureSettingsService isEntryPointConsecutiveSurveyDenyCountAvailable]
// Type encoding: B16@0:8
// Implementation: 0x1061511b8

// -[SCFeatureSettingsService entryPointConsecutiveSurveyDenyCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1061511c4

// -[SCFeatureSettingsService setEntryPointConsecutiveSurveyDenyCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x1061511d0

// -[SCFeatureSettingsService MQS_ENTRY_POINT_CONSECUTIVE_SURVEY_DENY_COUNT_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1061511e0

// -[SCFeatureSettingsService MQS_ENTRY_POINT_CONSECUTIVE_SURVEY_DENY_COUNT_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1061511e8

// -[SCFeatureSettingsService entryPointConsecutiveSurveyDenyCount]
// Type encoding: q16@0:8
// Implementation: 0x1061511f0

// -[SCFeatureSettingsService hasDismissedCameraRollQuotedReplyBadge]
// Type encoding: B16@0:8
// Implementation: 0x10612b9d4

// -[SCFeatureSettingsService dismissedCameraRollQuotedReplyBadgeServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10612b9e0

// -[SCFeatureSettingsService setDismissedCameraRollQuotedReplyBadge:]
// Type encoding: v20@0:8B16
// Implementation: 0x10612b9ec

// -[SCFeatureSettingsService CAMERA_ROLL_QUOTED_BADGE_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10612b9fc

// -[SCFeatureSettingsService CAMERA_ROLL_QUOTED_BADGE_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10612ba04

// -[SCFeatureSettingsService dismissedCameraRollQuotedReplyBadge]
// Type encoding: B16@0:8
// Implementation: 0x10612ba0c

// -[SCFeatureSettingsService hasSeenTakeSnap]
// Type encoding: B16@0:8
// Implementation: 0x10611d110

// -[SCFeatureSettingsService seenTakeSnapServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10611d11c

// -[SCFeatureSettingsService setSeenTakeSnap:]
// Type encoding: v20@0:8B16
// Implementation: 0x10611d128

// -[SCFeatureSettingsService snap_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d138

// -[SCFeatureSettingsService snap_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d140

// -[SCFeatureSettingsService seenTakeSnap]
// Type encoding: B16@0:8
// Implementation: 0x1007f9c48

// -[SCFeatureSettingsService hasSeenNewFriendRequest]
// Type encoding: B16@0:8
// Implementation: 0x10611d148

// -[SCFeatureSettingsService seenNewFriendRequestServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10611d154

// -[SCFeatureSettingsService setSeenNewFriendRequest:]
// Type encoding: v20@0:8B16
// Implementation: 0x10611d160

// -[SCFeatureSettingsService new_friend_request_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d170

// -[SCFeatureSettingsService new_friend_request_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d190

// -[SCFeatureSettingsService seenNewFriendRequest]
// Type encoding: B16@0:8
// Implementation: 0x10611d1b0

// -[SCFeatureSettingsService hasSeenLensesActivationTooltip]
// Type encoding: B16@0:8
// Implementation: 0x10611d1c0

// -[SCFeatureSettingsService seenLensesActivationTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10611d1cc

// -[SCFeatureSettingsService setSeenLensesActivationTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x10611d1d8

// -[SCFeatureSettingsService lenses_first_appearance_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d1e8

// -[SCFeatureSettingsService lenses_first_appearance_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d1f0

// -[SCFeatureSettingsService seenLensesActivationTooltip]
// Type encoding: B16@0:8
// Implementation: 0x10611d1f8

// -[SCFeatureSettingsService hasSeenMultiSnapCaptureTooltip]
// Type encoding: B16@0:8
// Implementation: 0x10611d208

// -[SCFeatureSettingsService seenMultiSnapCaptureTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10611d214

// -[SCFeatureSettingsService setSeenMultiSnapCaptureTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x10611d220

// -[SCFeatureSettingsService multisnap_capture_tooltip_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d230

// -[SCFeatureSettingsService multisnap_capture_tooltip_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d238

// -[SCFeatureSettingsService seenMultiSnapCaptureTooltip]
// Type encoding: B16@0:8
// Implementation: 0x10611d240

// -[SCFeatureSettingsService hasSeenCreativeKitOnboardingTooltip]
// Type encoding: B16@0:8
// Implementation: 0x10611d250

// -[SCFeatureSettingsService seenCreativeKitOnboardingTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10611d25c

// -[SCFeatureSettingsService setSeenCreativeKitOnboardingTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x10611d268

// -[SCFeatureSettingsService snap_kit_creative_kit_onboarding_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d278

// -[SCFeatureSettingsService snap_kit_creative_kit_onboarding_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d280

// -[SCFeatureSettingsService seenCreativeKitOnboardingTooltip]
// Type encoding: B16@0:8
// Implementation: 0x10611d288

// -[SCFeatureSettingsService hasSeenMyStoryManagementTooltip]
// Type encoding: B16@0:8
// Implementation: 0x10611d298

// -[SCFeatureSettingsService seenMyStoryManagementTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10611d2a4

// -[SCFeatureSettingsService setSeenMyStoryManagementTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x10611d2b0

// -[SCFeatureSettingsService my_story_management_tooltip_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d2c0

// -[SCFeatureSettingsService my_story_management_tooltip_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d2c8

// -[SCFeatureSettingsService seenMyStoryManagementTooltip]
// Type encoding: B16@0:8
// Implementation: 0x10611d2d0

// -[SCFeatureSettingsService hasSeenMyStoryViewTooltip]
// Type encoding: B16@0:8
// Implementation: 0x10611d2e0

// -[SCFeatureSettingsService seenMyStoryViewTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10611d2ec

// -[SCFeatureSettingsService setSeenMyStoryViewTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x10611d2f8

// -[SCFeatureSettingsService my_story_view_tooltip_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d308

// -[SCFeatureSettingsService my_story_view_tooltip_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d310

// -[SCFeatureSettingsService seenMyStoryViewTooltip]
// Type encoding: B16@0:8
// Implementation: 0x10611d318

// -[SCFeatureSettingsService hasSeenSeenTimelineMemoriesAddFromCameraRollTooltip]
// Type encoding: B16@0:8
// Implementation: 0x10611d328

// -[SCFeatureSettingsService seenSeenTimelineMemoriesAddFromCameraRollTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10611d334

// -[SCFeatureSettingsService setSeenSeenTimelineMemoriesAddFromCameraRollTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x10611d340

// -[SCFeatureSettingsService seen_timeline_memories_add_from_camera_roll_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d350

// -[SCFeatureSettingsService seen_timeline_memories_add_from_camera_roll_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d358

// -[SCFeatureSettingsService seenSeenTimelineMemoriesAddFromCameraRollTooltip]
// Type encoding: B16@0:8
// Implementation: 0x10611d360

// -[SCFeatureSettingsService hasSeenTimelineModeOnboardingDialog]
// Type encoding: B16@0:8
// Implementation: 0x10611d370

// -[SCFeatureSettingsService seenTimelineModeOnboardingDialogServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10611d37c

// -[SCFeatureSettingsService setSeenTimelineModeOnboardingDialog:]
// Type encoding: v20@0:8B16
// Implementation: 0x10611d388

// -[SCFeatureSettingsService timeline_mode_onboarding_dialog_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d398

// -[SCFeatureSettingsService timeline_mode_onboarding_dialog_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d3a0

// -[SCFeatureSettingsService seenTimelineModeOnboardingDialog]
// Type encoding: B16@0:8
// Implementation: 0x10611d3a8

// -[SCFeatureSettingsService hasSeenTimelineModePreviewSnapTooltip]
// Type encoding: B16@0:8
// Implementation: 0x10611d3b8

// -[SCFeatureSettingsService seenTimelineModePreviewSnapTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10611d3c4

// -[SCFeatureSettingsService setSeenTimelineModePreviewSnapTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x10611d3d0

// -[SCFeatureSettingsService timeline_mode_preview_snap_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d3e0

// -[SCFeatureSettingsService timeline_mode_preview_snap_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d3e8

// -[SCFeatureSettingsService seenTimelineModePreviewSnapTooltip]
// Type encoding: B16@0:8
// Implementation: 0x10611d3f0

// -[SCFeatureSettingsService hasSeenVideoTimerModeTooltip]
// Type encoding: B16@0:8
// Implementation: 0x10611d400

// -[SCFeatureSettingsService seenVideoTimerModeTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10611d40c

// -[SCFeatureSettingsService setSeenVideoTimerModeTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x10611d418

// -[SCFeatureSettingsService video_timer_mode_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d428

// -[SCFeatureSettingsService video_timer_mode_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d430

// -[SCFeatureSettingsService seenVideoTimerModeTooltip]
// Type encoding: B16@0:8
// Implementation: 0x10611d438

// -[SCFeatureSettingsService isSeenTimelinePromotionOnboardingDialogAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10611d448

// -[SCFeatureSettingsService hasSeenTimelinePromotionOnboardingDialogServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10611d454

// -[SCFeatureSettingsService setSeenTimelinePromotionOnboardingDialog:]
// Type encoding: v20@0:8B16
// Implementation: 0x10611d460

// -[SCFeatureSettingsService timeline_promotion_onboarding_dialog_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d470

// -[SCFeatureSettingsService timeline_promotion_onboarding_dialog_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d478

// -[SCFeatureSettingsService hasSeenTimelinePromotionOnboardingDialog]
// Type encoding: B16@0:8
// Implementation: 0x10611d480

// -[SCFeatureSettingsService isSeenTimelinePromotionTimelineEnabledTooltipAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10611d490

// -[SCFeatureSettingsService hasSeenTimelinePromotionTimelineEnabledTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10611d49c

// -[SCFeatureSettingsService setSeenTimelinePromotionTimelineEnabledTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x10611d4a8

// -[SCFeatureSettingsService timeline_promotion_timeline_enabled_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d4b8

// -[SCFeatureSettingsService timeline_promotion_timeline_enabled_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d4c0

// -[SCFeatureSettingsService hasSeenTimelinePromotionTimelineEnabledTooltip]
// Type encoding: B16@0:8
// Implementation: 0x10611d4c8

// -[SCFeatureSettingsService isDirectorModeNewBadgeShownDateAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10611d4d8

// -[SCFeatureSettingsService directorModeNewBadgeShownDateServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10611d4e4

// -[SCFeatureSettingsService setDirectorModeNewBadgeShownDate:]
// Type encoding: v24@0:8q16
// Implementation: 0x10611d4f0

// -[SCFeatureSettingsService director_mode_new_badge_shown_date_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d500

// -[SCFeatureSettingsService director_mode_new_badge_shown_date_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d508

// -[SCFeatureSettingsService directorModeNewBadgeShownDate]
// Type encoding: q16@0:8
// Implementation: 0x10611d510

// -[SCFeatureSettingsService isDirectorModeOnboardingPromptSeenAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10611d520

// -[SCFeatureSettingsService hasSeenDirectorModeOnboardingPromptServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10611d52c

// -[SCFeatureSettingsService setDirectorModeOnboardingPromptSeen:]
// Type encoding: v20@0:8B16
// Implementation: 0x10611d538

// -[SCFeatureSettingsService director_mode_onboarding_prompt_seen_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d548

// -[SCFeatureSettingsService director_mode_onboarding_prompt_seen_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d550

// -[SCFeatureSettingsService hasSeenDirectorModeOnboardingPrompt]
// Type encoding: B16@0:8
// Implementation: 0x10611d558

// -[SCFeatureSettingsService isUltraWideNewBadgeShownCountAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10611d568

// -[SCFeatureSettingsService ultraWideNewBadgeShownCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10611d574

// -[SCFeatureSettingsService setUltraWideNewBadgeShownCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x10611d580

// -[SCFeatureSettingsService ultra_wide_new_badge_shown_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d590

// -[SCFeatureSettingsService ultra_wide_new_badge_shown_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d598

// -[SCFeatureSettingsService ultraWideNewBadgeShownCount]
// Type encoding: q16@0:8
// Implementation: 0x10611d5a0

// -[SCFeatureSettingsService isMultiCamModeNewBadgeShownDateAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10611d5b0

// -[SCFeatureSettingsService multiCamModeNewBadgeShownDateServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10611d5bc

// -[SCFeatureSettingsService setMultiCamModeNewBadgeShownDate:]
// Type encoding: v24@0:8q16
// Implementation: 0x10611d5c8

// -[SCFeatureSettingsService dual_camera_new_badge_shown_date_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d5d8

// -[SCFeatureSettingsService dual_camera_new_badge_shown_date_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d5e0

// -[SCFeatureSettingsService multiCamModeNewBadgeShownDate]
// Type encoding: q16@0:8
// Implementation: 0x10611d5e8

// -[SCFeatureSettingsService isMultiCamModeOnboardingPromptSeenAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10611d5f8

// -[SCFeatureSettingsService hasSeenMultiCamModeOnboardingPromptServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10611d604

// -[SCFeatureSettingsService setMultiCamModeOnboardingPromptSeen:]
// Type encoding: v20@0:8B16
// Implementation: 0x10611d610

// -[SCFeatureSettingsService dual_camera_onboarding_prompt_seen_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d620

// -[SCFeatureSettingsService dual_camera_onboarding_prompt_seen_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d628

// -[SCFeatureSettingsService hasSeenMultiCamModeOnboardingPrompt]
// Type encoding: B16@0:8
// Implementation: 0x10611d630

// -[SCFeatureSettingsService isDualCamInLensCarouselLabelSeenCountAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10611d640

// -[SCFeatureSettingsService dualCamInLensCarouselLabelSeenCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10611d64c

// -[SCFeatureSettingsService setDualCamInLensCarouselLabelSeenCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x10611d658

// -[SCFeatureSettingsService dual_cam_in_lens_carousel_label_seen_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d668

// -[SCFeatureSettingsService dual_cam_in_lens_carousel_label_seen_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d670

// -[SCFeatureSettingsService dualCamInLensCarouselLabelSeenCount]
// Type encoding: q16@0:8
// Implementation: 0x10611d678

// -[SCFeatureSettingsService isDualCamInLensCarouselTooltipSeenCountAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10611d688

// -[SCFeatureSettingsService dualCamInLensCarouselTooltipSeenCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10611d694

// -[SCFeatureSettingsService setDualCamInLensCarouselTooltipSeenCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x10611d6a0

// -[SCFeatureSettingsService dual_cam_in_lens_carousel_tooltip_seen_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d6b0

// -[SCFeatureSettingsService dual_cam_in_lens_carousel_tooltip_seen_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d6b8

// -[SCFeatureSettingsService dualCamInLensCarouselTooltipSeenCount]
// Type encoding: q16@0:8
// Implementation: 0x10611d6c0

// -[SCFeatureSettingsService isToneModeNewBadgeShownDateAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10611d6d0

// -[SCFeatureSettingsService toneModeNewBadgeShownDateServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10611d6dc

// -[SCFeatureSettingsService setToneModeNewBadgeShownDate:]
// Type encoding: v24@0:8q16
// Implementation: 0x10611d6e8

// -[SCFeatureSettingsService tone_mode_new_badge_shown_date_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d6f8

// -[SCFeatureSettingsService tone_mode_new_badge_shown_date_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d700

// -[SCFeatureSettingsService toneModeNewBadgeShownDate]
// Type encoding: q16@0:8
// Implementation: 0x10611d708

// -[SCFeatureSettingsService isHasSeenToneModeOnboardingPromptAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10611d718

// -[SCFeatureSettingsService hasSeenToneModeOnboardingPromptServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10611d724

// -[SCFeatureSettingsService setHasSeenToneModeOnboardingPrompt:]
// Type encoding: v20@0:8B16
// Implementation: 0x10611d730

// -[SCFeatureSettingsService has_seen_tone_mode_onboarding_prompt_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d740

// -[SCFeatureSettingsService has_seen_tone_mode_onboarding_prompt_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d748

// -[SCFeatureSettingsService hasSeenToneModeOnboardingPrompt]
// Type encoding: B16@0:8
// Implementation: 0x10611d750

// -[SCFeatureSettingsService isToneModeNewBadgeShownCountAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10611d760

// -[SCFeatureSettingsService toneModeNewBadgeShownCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10611d76c

// -[SCFeatureSettingsService setToneModeNewBadgeShownCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x10611d778

// -[SCFeatureSettingsService tone_mode_new_badge_shown_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d788

// -[SCFeatureSettingsService tone_mode_new_badge_shown_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d790

// -[SCFeatureSettingsService toneModeNewBadgeShownCount]
// Type encoding: q16@0:8
// Implementation: 0x10611d798

// -[SCFeatureSettingsService isVideoStabilizerNewBadgeShownCountAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10611d7a8

// -[SCFeatureSettingsService videoStabilizerNewBadgeShownCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10611d7b4

// -[SCFeatureSettingsService setVideoStabilizerNewBadgeShownCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x10611d7c0

// -[SCFeatureSettingsService video_stabilizer_new_badge_shown_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d7d0

// -[SCFeatureSettingsService video_stabilizer_new_badge_shown_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d7d8

// -[SCFeatureSettingsService videoStabilizerNewBadgeShownCount]
// Type encoding: q16@0:8
// Implementation: 0x10611d7e0

// -[SCFeatureSettingsService hasSeenTakeSnapInCameraRollCamera]
// Type encoding: B16@0:8
// Implementation: 0x10611d7f0

// -[SCFeatureSettingsService seenTakeSnapInCameraRollCameraServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10611d7fc

// -[SCFeatureSettingsService setSeenTakeSnapInCameraRollCamera:]
// Type encoding: v20@0:8B16
// Implementation: 0x10611d808

// -[SCFeatureSettingsService camera_roll_camera_snap_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d818

// -[SCFeatureSettingsService camera_roll_camera_snap_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d820

// -[SCFeatureSettingsService seenTakeSnapInCameraRollCamera]
// Type encoding: B16@0:8
// Implementation: 0x10611d828

// -[SCFeatureSettingsService hasTimerTooltipSeenCount]
// Type encoding: B16@0:8
// Implementation: 0x10611d838

// -[SCFeatureSettingsService timerTooltipSeenCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10611d844

// -[SCFeatureSettingsService setTimerTooltipSeenCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x10611d850

// -[SCFeatureSettingsService TIMER_MODE_TOOLTIP_SEEN_COUNT_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d860

// -[SCFeatureSettingsService TIMER_MODE_TOOLTIP_SEEN_COUNT_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d868

// -[SCFeatureSettingsService timerTooltipSeenCount]
// Type encoding: q16@0:8
// Implementation: 0x10611d870

// -[SCFeatureSettingsService isHasSeenSelfieSettingsOnboardingPromptAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10611d880

// -[SCFeatureSettingsService hasSeenSelfieSettingsOnboardingPromptServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10611d88c

// -[SCFeatureSettingsService setHasSeenSelfieSettingsOnboardingPrompt:]
// Type encoding: v20@0:8B16
// Implementation: 0x10611d898

// -[SCFeatureSettingsService HAS_SEEN_SELFIE_SETTING_ONBOARDING_PROMPT_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d8a8

// -[SCFeatureSettingsService HAS_SEEN_SELFIE_SETTING_ONBOARDING_PROMPT_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d8b0

// -[SCFeatureSettingsService hasSeenSelfieSettingsOnboardingPrompt]
// Type encoding: B16@0:8
// Implementation: 0x10611d8b8

// -[SCFeatureSettingsService isSelfieSettingsNewBadgeShownDateAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10611d8c8

// -[SCFeatureSettingsService selfieSettingsNewBadgeShownDateServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10611d8d4

// -[SCFeatureSettingsService setSelfieSettingsNewBadgeShownDate:]
// Type encoding: v24@0:8q16
// Implementation: 0x10611d8e0

// -[SCFeatureSettingsService SELFIE_SETTINGS_NEW_BADGE_SHOWN_DATE_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d8f0

// -[SCFeatureSettingsService SELFIE_SETTINGS_NEW_BADGE_SHOWN_DATE_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d8f8

// -[SCFeatureSettingsService selfieSettingsNewBadgeShownDate]
// Type encoding: q16@0:8
// Implementation: 0x10611d900

// -[SCFeatureSettingsService isAutoEnableRingLightTooltipSeenCountAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10611d910

// -[SCFeatureSettingsService autoEnableRingLightTooltipSeenCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10611d91c

// -[SCFeatureSettingsService setAutoEnableRingLightTooltipSeenCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x10611d928

// -[SCFeatureSettingsService AUTO_ENABLE_RING_LIGHT_TOOLTIP_SEEN_COUNT_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d938

// -[SCFeatureSettingsService AUTO_ENABLE_RING_LIGHT_TOOLTIP_SEEN_COUNT_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611d940

// -[SCFeatureSettingsService autoEnableRingLightTooltipSeenCount]
// Type encoding: q16@0:8
// Implementation: 0x10611d948

// -[SCFeatureSettingsService hasSeenListsFirstCreationTooltip]
// Type encoding: B16@0:8
// Implementation: 0x10607f8dc

// -[SCFeatureSettingsService seenListsFirstCreationTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10607f8e8

// -[SCFeatureSettingsService setSeenListsFirstCreationTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x10607f8f4

// -[SCFeatureSettingsService lists_first_creation_tooltip_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10607f904

// -[SCFeatureSettingsService lists_first_creation_tooltip_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10607f90c

// -[SCFeatureSettingsService seenListsFirstCreationTooltip]
// Type encoding: B16@0:8
// Implementation: 0x10607f914

// -[SCFeatureSettingsService hasSpotlightShareUpsellLastTimeSeenTimestampMs]
// Type encoding: B16@0:8
// Implementation: 0x10607b100

// -[SCFeatureSettingsService spotlightShareUpsellLastTimeSeenTimestampMsServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10607b10c

// -[SCFeatureSettingsService setSpotlightShareUpsellLastTimeSeenTimestampMs:]
// Type encoding: v24@0:8q16
// Implementation: 0x10607b118

// -[SCFeatureSettingsService SHARING_SPOTLIGHT_SHARE_UPSELL_LAST_TIME_SEEN_TIMESTAMP_MS_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10607b128

// -[SCFeatureSettingsService SHARING_SPOTLIGHT_SHARE_UPSELL_LAST_TIME_SEEN_TIMESTAMP_MS_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10607b130

// -[SCFeatureSettingsService spotlightShareUpsellLastTimeSeenTimestampMs]
// Type encoding: q16@0:8
// Implementation: 0x10607b138

// -[SCFeatureSettingsService isPlusMyProfileUpsellCardImpressionCountAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10603ccc8

// -[SCFeatureSettingsService plusMyProfileUpsellCardImpressionCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10603ccd4

// -[SCFeatureSettingsService setPlusMyProfileUpsellCardImpressionCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x10603cce0

// -[SCFeatureSettingsService plus_my_profile_upsell_card_impression_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10603ccf0

// -[SCFeatureSettingsService plus_my_profile_upsell_card_impression_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10603ccf8

// -[SCFeatureSettingsService plusMyProfileUpsellCardImpressionCount]
// Type encoding: q16@0:8
// Implementation: 0x10603cd00

// -[SCFeatureSettingsService isSavedStoryMessageTooltipSeenCountAvailable]
// Type encoding: B16@0:8
// Implementation: 0x105fb4ed8

// -[SCFeatureSettingsService savedStoryMessageTooltipSeenCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x105fb4ee4

// -[SCFeatureSettingsService setSavedStoryMessageTooltipSeenCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x105fb4ef0

// -[SCFeatureSettingsService SAVED_STORY_MESSAGE_TOOLTIP_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105fb4f00

// -[SCFeatureSettingsService SAVED_STORY_MESSAGE_TOOLTIP_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105fb4f08

// -[SCFeatureSettingsService savedStoryMessageTooltipSeenCount]
// Type encoding: q16@0:8
// Implementation: 0x105fb4f10

// -[SCFeatureSettingsService hasBitmojiCreateAvatarCTAInChatImpressionsCount]
// Type encoding: B16@0:8
// Implementation: 0x105f7b8bc

// -[SCFeatureSettingsService bitmojiCreateAvatarCTAInChatImpressionsCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x105f7b8c8

// -[SCFeatureSettingsService setBitmojiCreateAvatarCTAInChatImpressionsCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x105f7b8d4

// -[SCFeatureSettingsService BITMOJI_CREATE_AVATAR_CTA_IN_CHAT_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f7b8e4

// -[SCFeatureSettingsService BITMOJI_CREATE_AVATAR_CTA_IN_CHAT_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f7b8ec

// -[SCFeatureSettingsService bitmojiCreateAvatarCTAInChatImpressionsCount]
// Type encoding: q16@0:8
// Implementation: 0x105f7b8f4

// -[SCFeatureSettingsService hasShouldOverrideRemixToggleBehavior]
// Type encoding: B16@0:8
// Implementation: 0x105e634c4

// -[SCFeatureSettingsService shouldOverrideRemixToggleBehaviorServerParam]
// Type encoding: @16@0:8
// Implementation: 0x105e634d0

// -[SCFeatureSettingsService setShouldOverrideRemixToggleBehavior:]
// Type encoding: v20@0:8B16
// Implementation: 0x105e634dc

// -[SCFeatureSettingsService remix_spotlight_toggle_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105e634ec

// -[SCFeatureSettingsService remix_spotlight_toggle_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105e634f4

// -[SCFeatureSettingsService shouldOverrideRemixToggleBehavior]
// Type encoding: B16@0:8
// Implementation: 0x105e634fc

// -[SCFeatureSettingsService getRemixMentionPrivacyPromptAccepted]
// Type encoding: B16@0:8
// Implementation: 0x105df7de8

// -[SCFeatureSettingsService remixMentionPrivacyPromptAcceptedServerParam]
// Type encoding: @16@0:8
// Implementation: 0x105df7df4

// -[SCFeatureSettingsService setRemixMentionPrivacyPromptAccepted:]
// Type encoding: v20@0:8B16
// Implementation: 0x105df7e00

// -[SCFeatureSettingsService remix_mention_privacy_prompt_accepted_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105df7e10

// -[SCFeatureSettingsService remix_mention_privacy_prompt_accepted_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105df7e18

// -[SCFeatureSettingsService remixMentionPrivacyPromptAccepted]
// Type encoding: B16@0:8
// Implementation: 0x105df7e20

// -[SCFeatureSettingsService hasSeenMultiSnapUserNotice]
// Type encoding: B16@0:8
// Implementation: 0x105dd79e4

// -[SCFeatureSettingsService seenMultiSnapUserNoticeServerParam]
// Type encoding: @16@0:8
// Implementation: 0x105dd79f0

// -[SCFeatureSettingsService setSeenMultiSnapUserNotice:]
// Type encoding: v20@0:8B16
// Implementation: 0x105dd79fc

// -[SCFeatureSettingsService preview_has_seen_multisnap_user_notice_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105dd7a0c

// -[SCFeatureSettingsService preview_has_seen_multisnap_user_notice_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105dd7a14

// -[SCFeatureSettingsService seenMultiSnapUserNotice]
// Type encoding: B16@0:8
// Implementation: 0x105dd7a1c

// -[SCFeatureSettingsService hasAcceptedTextToSpeechPermissionsPrompt]
// Type encoding: B16@0:8
// Implementation: 0x105dbed34

// -[SCFeatureSettingsService acceptedTextToSpeechPermissionsPromptServerParam]
// Type encoding: @16@0:8
// Implementation: 0x105dbed40

// -[SCFeatureSettingsService setAcceptedTextToSpeechPermissionsPrompt:]
// Type encoding: v20@0:8B16
// Implementation: 0x105dbed4c

// -[SCFeatureSettingsService text_to_speech_permissions_prompt_accepted_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105dbed5c

// -[SCFeatureSettingsService text_to_speech_permissions_prompt_accepted_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105dbed64

// -[SCFeatureSettingsService acceptedTextToSpeechPermissionsPrompt]
// Type encoding: B16@0:8
// Implementation: 0x105dbed6c

// -[SCFeatureSettingsService hasUserPermissionForRemoteInference]
// Type encoding: B16@0:8
// Implementation: 0x105d37bc8

// -[SCFeatureSettingsService userPermissionForRemoteInferenceServerParam]
// Type encoding: @16@0:8
// Implementation: 0x105d37bd4

// -[SCFeatureSettingsService setUserPermissionForRemoteInference:]
// Type encoding: v20@0:8B16
// Implementation: 0x105d37be0

// -[SCFeatureSettingsService PREVIEW_CT_LENS_TOOL_REMOTE_INFERENCE_USER_PERMISSION_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d37bf0

// -[SCFeatureSettingsService PREVIEW_CT_LENS_TOOL_REMOTE_INFERENCE_USER_PERMISSION_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d37bf8

// -[SCFeatureSettingsService userPermissionForRemoteInference]
// Type encoding: B16@0:8
// Implementation: 0x105d37c00

// -[SCFeatureSettingsService hasSeenDisclaimerNoticeSeenForAiTool]
// Type encoding: B16@0:8
// Implementation: 0x105d37af0

// -[SCFeatureSettingsService seenDisclaimerNoticeForAiToolServerParam]
// Type encoding: @16@0:8
// Implementation: 0x105d37afc

// -[SCFeatureSettingsService setSeenDisclaimerNoticeForAiTool:]
// Type encoding: v20@0:8B16
// Implementation: 0x105d37b08

// -[SCFeatureSettingsService PREVIEW_CT_LENS_TOOL_AI_MODE_DISCLAIMER_SEEN_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d37b18

// -[SCFeatureSettingsService PREVIEW_CT_LENS_TOOL_AI_MODE_DISCLAIMER_SEEN_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d37b20

// -[SCFeatureSettingsService seenDisclaimerNoticeForAiTool]
// Type encoding: B16@0:8
// Implementation: 0x105d37b28

// -[SCFeatureSettingsService hasNonPlusButtonSeenCount]
// Type encoding: B16@0:8
// Implementation: 0x105d37b38

// -[SCFeatureSettingsService nonPlusButtonSeenCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x105d37b44

// -[SCFeatureSettingsService setNonPlusButtonSeenCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x105d37b50

// -[SCFeatureSettingsService POST_CAPTURE_AI_MODE_BUTTON_NON_SNAPCHAT_PLUS_SEEN_COUNT_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d37b60

// -[SCFeatureSettingsService POST_CAPTURE_AI_MODE_BUTTON_NON_SNAPCHAT_PLUS_SEEN_COUNT_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d37b68

// -[SCFeatureSettingsService nonPlusButtonSeenCount]
// Type encoding: q16@0:8
// Implementation: 0x105d37b70

// -[SCFeatureSettingsService hasPlusUpsellCount]
// Type encoding: B16@0:8
// Implementation: 0x105d37b80

// -[SCFeatureSettingsService plusUpsellCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x105d37b8c

// -[SCFeatureSettingsService setPlusUpsellCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x105d37b98

// -[SCFeatureSettingsService POST_CAPTURE_AI_MODE_SNAPCHAT_PLUS_POPUP_SEEN_COUNT_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d37ba8

// -[SCFeatureSettingsService POST_CAPTURE_AI_MODE_SNAPCHAT_PLUS_POPUP_SEEN_COUNT_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d37bb0

// -[SCFeatureSettingsService plusUpsellCount]
// Type encoding: q16@0:8
// Implementation: 0x105d37bb8

// -[SCFeatureSettingsService isCommerceAttachmentToolEnabledAvailable]
// Type encoding: B16@0:8
// Implementation: 0x105ce6c34

// -[SCFeatureSettingsService commerceAttachmentToolEnabledServerParam]
// Type encoding: @16@0:8
// Implementation: 0x105ce6c40

// -[SCFeatureSettingsService commerce_attachment_tool_enabled_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105ce6c4c

// -[SCFeatureSettingsService commerce_attachment_tool_enabled_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105ce6c54

// -[SCFeatureSettingsService commerceAttachmentToolEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105ce6c5c

// -[SCFeatureSettingsService hasFriendmojiPolicy]
// Type encoding: B16@0:8
// Implementation: 0x105c5a4b8

// -[SCFeatureSettingsService friendmojiPolicyServerParam]
// Type encoding: @16@0:8
// Implementation: 0x105c5a4c4

// -[SCFeatureSettingsService setFriendmojiPolicy:]
// Type encoding: v24@0:8q16
// Implementation: 0x105c5a4d0

// -[SCFeatureSettingsService BITMOJI_FRIENDMOJI_USER_POLICY_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105c5a4e0

// -[SCFeatureSettingsService BITMOJI_FRIENDMOJI_USER_POLICY_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105c5a4e8

// -[SCFeatureSettingsService friendmojiPolicy]
// Type encoding: q16@0:8
// Implementation: 0x105c5a4f0

// -[SCFeatureSettingsService isRecentlyActiveIndicatorEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105c446c0

// -[SCFeatureSettingsService recentlyActiveIndicatorEnabledServerParam]
// Type encoding: @16@0:8
// Implementation: 0x105c446cc

// -[SCFeatureSettingsService setRecentlyActiveIndicatorEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x105c446d8

// -[SCFeatureSettingsService recently_active_indicator_toggle_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105c446e8

// -[SCFeatureSettingsService recently_active_indicator_toggle_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105c446f0

// -[SCFeatureSettingsService recentlyActiveIndicatorEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105c446f8

// -[SCFeatureSettingsService isRecentlyActiveIndicatorHasForceDisabledByDefault]
// Type encoding: B16@0:8
// Implementation: 0x105c44708

// -[SCFeatureSettingsService recentlyActiveIndicatorHasForceDisabledByDefaultServerParam]
// Type encoding: @16@0:8
// Implementation: 0x105c44714

// -[SCFeatureSettingsService setRecentlyActiveIndicatorHasForceDisabledByDefault:]
// Type encoding: v20@0:8B16
// Implementation: 0x105c44720

// -[SCFeatureSettingsService recently_active_indicator_has_force_disabled_by_default_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105c44730

// -[SCFeatureSettingsService recently_active_indicator_has_force_disabled_by_default_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105c44738

// -[SCFeatureSettingsService recentlyActiveIndicatorHasForceDisabledByDefault]
// Type encoding: B16@0:8
// Implementation: 0x105c44740

// -[SCFeatureSettingsService hasProfileExpandedIdentityViewImpressionCount]
// Type encoding: B16@0:8
// Implementation: 0x105be7664

// -[SCFeatureSettingsService profileExpandedIdentityViewImpressionCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x105be7670

// -[SCFeatureSettingsService setProfileExpandedIdentityViewImpressionCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x105be767c

// -[SCFeatureSettingsService profile_expanded_identity_view_impression_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105be768c

// -[SCFeatureSettingsService profile_expanded_identity_view_impression_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105be7694

// -[SCFeatureSettingsService profileExpandedIdentityViewImpressionCount]
// Type encoding: q16@0:8
// Implementation: 0x105be769c

// -[SCFeatureSettingsService hasSeenLagunaOnboarding]
// Type encoding: B16@0:8
// Implementation: 0x105aa6f04

// -[SCFeatureSettingsService seenLagunaOnboardingServerParam]
// Type encoding: @16@0:8
// Implementation: 0x105aa6f10

// -[SCFeatureSettingsService setSeenLagunaOnboarding:]
// Type encoding: v20@0:8B16
// Implementation: 0x105aa6f1c

// -[SCFeatureSettingsService laguna_onboarding_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105aa6f2c

// -[SCFeatureSettingsService laguna_onboarding_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105aa6f34

// -[SCFeatureSettingsService seenLagunaOnboarding]
// Type encoding: B16@0:8
// Implementation: 0x105aa6f3c

// -[SCFeatureSettingsService hasSeenPsychomantisOnboarding]
// Type encoding: B16@0:8
// Implementation: 0x105aa6f4c

// -[SCFeatureSettingsService seenPsychomantisOnboardingServerParam]
// Type encoding: @16@0:8
// Implementation: 0x105aa6f58

// -[SCFeatureSettingsService setSeenPsychomantisOnboarding:]
// Type encoding: v20@0:8B16
// Implementation: 0x105aa6f64

// -[SCFeatureSettingsService psychomantis_onboarding_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105aa6f74

// -[SCFeatureSettingsService psychomantis_onboarding_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105aa6f7c

// -[SCFeatureSettingsService seenPsychomantisOnboarding]
// Type encoding: B16@0:8
// Implementation: 0x105aa6f84

// -[SCFeatureSettingsService hasSeenMalibuOnboarding]
// Type encoding: B16@0:8
// Implementation: 0x105aa6f94

// -[SCFeatureSettingsService seenMalibuOnboardingServerParam]
// Type encoding: @16@0:8
// Implementation: 0x105aa6fa0

// -[SCFeatureSettingsService setSeenMalibuOnboarding:]
// Type encoding: v20@0:8B16
// Implementation: 0x105aa6fac

// -[SCFeatureSettingsService malibu_onboarding_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105aa6fbc

// -[SCFeatureSettingsService malibu_onboarding_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105aa6fc4

// -[SCFeatureSettingsService seenMalibuOnboarding]
// Type encoding: B16@0:8
// Implementation: 0x105aa6fcc

// -[SCFeatureSettingsService hasSeenNeptuneOnboarding]
// Type encoding: B16@0:8
// Implementation: 0x105aa6fdc

// -[SCFeatureSettingsService seenNeptuneOnboardingServerParam]
// Type encoding: @16@0:8
// Implementation: 0x105aa6fe8

// -[SCFeatureSettingsService setSeenNeptuneOnboarding:]
// Type encoding: v20@0:8B16
// Implementation: 0x105aa6ff4

// -[SCFeatureSettingsService neptune_onboarding_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105aa7004

// -[SCFeatureSettingsService neptune_onboarding_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105aa700c

// -[SCFeatureSettingsService seenNeptuneOnboarding]
// Type encoding: B16@0:8
// Implementation: 0x105aa7014

// -[SCFeatureSettingsService hasSeenNewportOnboarding]
// Type encoding: B16@0:8
// Implementation: 0x105aa7024

// -[SCFeatureSettingsService seenNewportOnboardingServerParam]
// Type encoding: @16@0:8
// Implementation: 0x105aa7030

// -[SCFeatureSettingsService setSeenNewportOnboarding:]
// Type encoding: v20@0:8B16
// Implementation: 0x105aa703c

// -[SCFeatureSettingsService newport_onboarding_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105aa704c

// -[SCFeatureSettingsService newport_onboarding_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105aa7054

// -[SCFeatureSettingsService seenNewportOnboarding]
// Type encoding: B16@0:8
// Implementation: 0x105aa705c

// -[SCFeatureSettingsService hasSeenCheeriosOnboarding]
// Type encoding: B16@0:8
// Implementation: 0x105aa706c

// -[SCFeatureSettingsService seenCheeriosOnboardingServerParam]
// Type encoding: @16@0:8
// Implementation: 0x105aa7078

// -[SCFeatureSettingsService setSeenCheeriosOnboarding:]
// Type encoding: v20@0:8B16
// Implementation: 0x105aa7084

// -[SCFeatureSettingsService cheerios_onboarding_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105aa7094

// -[SCFeatureSettingsService cheerios_onboarding_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105aa709c

// -[SCFeatureSettingsService seenCheeriosOnboarding]
// Type encoding: B16@0:8
// Implementation: 0x105aa70a4

// -[SCFeatureSettingsService hasSeenMyStoryFriendsLastTimePostedTimestamp]
// Type encoding: B16@0:8
// Implementation: 0x1059ba960

// -[SCFeatureSettingsService myStoryFriendsLastTimePostedTimestampServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1059ba96c

// -[SCFeatureSettingsService setMyStoryFriendsLastTimePostedTimestamp:]
// Type encoding: v24@0:8q16
// Implementation: 0x1059ba978

// -[SCFeatureSettingsService SEND_TO_MY_STORY_FRIENDS_LAST_TIME_POSTED_TIMESTAMP_MS_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1059ba988

// -[SCFeatureSettingsService SEND_TO_MY_STORY_FRIENDS_LAST_TIME_POSTED_TIMESTAMP_MS_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1059ba990

// -[SCFeatureSettingsService myStoryFriendsLastTimePostedTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x1059ba998

// -[SCFeatureSettingsService hasSeenMyStoryPublicLastTimePostedTimestamp]
// Type encoding: B16@0:8
// Implementation: 0x1059ba9a8

// -[SCFeatureSettingsService myStoryPublicLastTimePostedTimestampServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1059ba9b4

// -[SCFeatureSettingsService setMyStoryPublicLastTimePostedTimestamp:]
// Type encoding: v24@0:8q16
// Implementation: 0x1059ba9c0

// -[SCFeatureSettingsService SEND_TO_MY_STORY_PUBLIC_LAST_TIME_POSTED_TIMESTAMP_MS_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1059ba9d0

// -[SCFeatureSettingsService SEND_TO_MY_STORY_PUBLIC_LAST_TIME_POSTED_TIMESTAMP_MS_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1059ba9d8

// -[SCFeatureSettingsService myStoryPublicLastTimePostedTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x1059ba9e0

// -[SCFeatureSettingsService hasSeenMapsStoryLastTimePostedTimestamp]
// Type encoding: B16@0:8
// Implementation: 0x1059ba9f0

// -[SCFeatureSettingsService mapsStoryLastTimePostedTimestampServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1059ba9fc

// -[SCFeatureSettingsService setMapsStoryLastTimePostedTimestamp:]
// Type encoding: v24@0:8q16
// Implementation: 0x1059baa08

// -[SCFeatureSettingsService SEND_TO_MAPS_STORY_LAST_TIME_POSTED_TIMESTAMP_MS_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1059baa18

// -[SCFeatureSettingsService SEND_TO_MAPS_STORY_LAST_TIME_POSTED_TIMESTAMP_MS_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1059baa20

// -[SCFeatureSettingsService mapsStoryLastTimePostedTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x1059baa28

// -[SCFeatureSettingsService hasSeenMusicPickerFavoritesTooltip]
// Type encoding: B16@0:8
// Implementation: 0x1058e32cc

// -[SCFeatureSettingsService seenMusicPickerFavoritesTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1058e32d8

// -[SCFeatureSettingsService setSeenMusicPickerFavoritesTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x1058e32e4

// -[SCFeatureSettingsService music_picker_favorites_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1058e32f4

// -[SCFeatureSettingsService music_picker_favorites_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1058e32fc

// -[SCFeatureSettingsService seenMusicPickerFavoritesTooltip]
// Type encoding: B16@0:8
// Implementation: 0x1058e3304

// -[SCFeatureSettingsService hasSeenMusicContextCardFavoritesTooltip]
// Type encoding: B16@0:8
// Implementation: 0x1058e3314

// -[SCFeatureSettingsService seenMusicContextCardFavoritesTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1058e3320

// -[SCFeatureSettingsService setSeenMusicContextCardFavoritesTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x1058e332c

// -[SCFeatureSettingsService music_context_card_favorites_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1058e333c

// -[SCFeatureSettingsService music_context_card_favorites_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1058e3344

// -[SCFeatureSettingsService seenMusicContextCardFavoritesTooltip]
// Type encoding: B16@0:8
// Implementation: 0x1058e334c

// -[SCFeatureSettingsService hasSeenSoundTopicsFavoritesTooltip]
// Type encoding: B16@0:8
// Implementation: 0x1058e335c

// -[SCFeatureSettingsService seenSoundTopicsFavoritesTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1058e3368

// -[SCFeatureSettingsService setSeenSoundTopicsFavoritesTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x1058e3374

// -[SCFeatureSettingsService sound_topics_favorites_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1058e3384

// -[SCFeatureSettingsService sound_topics_favorites_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1058e338c

// -[SCFeatureSettingsService seenSoundTopicsFavoritesTooltip]
// Type encoding: B16@0:8
// Implementation: 0x1058e3394

// -[SCFeatureSettingsService hasSeenCreateSoundOnFeaturedPage]
// Type encoding: B16@0:8
// Implementation: 0x1058e33a4

// -[SCFeatureSettingsService seenCreateSoundOnFeaturedPageServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1058e33b0

// -[SCFeatureSettingsService setSeenCreateSoundOnFeaturedPage:]
// Type encoding: v20@0:8B16
// Implementation: 0x1058e33bc

// -[SCFeatureSettingsService music_create_sound_featured_page_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1058e33cc

// -[SCFeatureSettingsService music_create_sound_featured_page_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1058e33d4

// -[SCFeatureSettingsService seenCreateSoundOnFeaturedPage]
// Type encoding: B16@0:8
// Implementation: 0x1058e33dc

// -[SCFeatureSettingsService getMusicSyncMemoriesPreviewSoundTooltipTimesSeen]
// Type encoding: B16@0:8
// Implementation: 0x1058e33ec

// -[SCFeatureSettingsService musicSyncMemoriesPreviewSoundTooltipTimesSeenServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1058e33f8

// -[SCFeatureSettingsService setMusicSyncMemoriesPreviewSoundTooltipTimesSeen:]
// Type encoding: v24@0:8q16
// Implementation: 0x1058e3404

// -[SCFeatureSettingsService music_sync_memories_preview_sound_tooltip_times_seen_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1058e3414

// -[SCFeatureSettingsService music_sync_memories_preview_sound_tooltip_times_seen_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1058e341c

// -[SCFeatureSettingsService musicSyncMemoriesPreviewSoundTooltipTimesSeen]
// Type encoding: q16@0:8
// Implementation: 0x1058e3424

// -[SCFeatureSettingsService getMusicSyncMemoriesOnboardingBannerTimesSeen]
// Type encoding: B16@0:8
// Implementation: 0x1058e3434

// -[SCFeatureSettingsService musicSyncMemoriesOnboardingBannerTimesSeenServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1058e3440

// -[SCFeatureSettingsService setMusicSyncMemoriesOnboardingBannerTimesSeen:]
// Type encoding: v24@0:8q16
// Implementation: 0x1058e344c

// -[SCFeatureSettingsService music_sync_memories_onboarding_banner_times_seen_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1058e345c

// -[SCFeatureSettingsService music_sync_memories_onboarding_banner_times_seen_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1058e3464

// -[SCFeatureSettingsService musicSyncMemoriesOnboardingBannerTimesSeen]
// Type encoding: q16@0:8
// Implementation: 0x1058e346c

// -[SCFeatureSettingsService getMusicSyncMemoriesFabTooltipTimesSeen]
// Type encoding: B16@0:8
// Implementation: 0x1058e347c

// -[SCFeatureSettingsService musicSyncMemoriesFabTooltipTimesSeenServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1058e3488

// -[SCFeatureSettingsService setMusicSyncMemoriesFabTooltipTimesSeen:]
// Type encoding: v24@0:8q16
// Implementation: 0x1058e3494

// -[SCFeatureSettingsService music_sync_memories_fab_tooltip_times_seen_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1058e34a4

// -[SCFeatureSettingsService music_sync_memories_fab_tooltip_times_seen_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1058e34ac

// -[SCFeatureSettingsService musicSyncMemoriesFabTooltipTimesSeen]
// Type encoding: q16@0:8
// Implementation: 0x1058e34b4

// -[SCFeatureSettingsService isMerlinJitAcceptedVersionAvailable]
// Type encoding: B16@0:8
// Implementation: 0x1057dedc4

// -[SCFeatureSettingsService merlinJitAcceptedVersionServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1057dedd0

// -[SCFeatureSettingsService setMerlinJitAcceptedVersion:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057deddc

// -[SCFeatureSettingsService merlin_jit_accepted_version_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1057dedec

// -[SCFeatureSettingsService merlin_jit_accepted_version_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1057dee14

// -[SCFeatureSettingsService merlinJitAcceptedVersion]
// Type encoding: @16@0:8
// Implementation: 0x1057dee3c

// -[SCFeatureSettingsService isMerlinMentionsReaderJitAcceptedVersionAvailable]
// Type encoding: B16@0:8
// Implementation: 0x1057dee50

// -[SCFeatureSettingsService merlinMentionsReaderJitAcceptedVersionServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1057dee5c

// -[SCFeatureSettingsService setMerlinMentionsReaderJitAcceptedVersion:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057dee68

// -[SCFeatureSettingsService merlin_mentions_reader_jit_accepted_version_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1057dee78

// -[SCFeatureSettingsService merlin_mentions_reader_jit_accepted_version_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1057deea0

// -[SCFeatureSettingsService merlinMentionsReaderJitAcceptedVersion]
// Type encoding: @16@0:8
// Implementation: 0x1057deec8

// -[SCFeatureSettingsService isMerlinMentionsSenderJitAcceptedVersionAvailable]
// Type encoding: B16@0:8
// Implementation: 0x1057deedc

// -[SCFeatureSettingsService merlinMentionsSenderJitAcceptedVersionServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1057deee8

// -[SCFeatureSettingsService setMerlinMentionsSenderJitAcceptedVersion:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057deef4

// -[SCFeatureSettingsService merlin_mentions_sender_jit_accepted_version_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1057def04

// -[SCFeatureSettingsService merlin_mentions_sender_jit_accepted_version_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1057def2c

// -[SCFeatureSettingsService merlinMentionsSenderJitAcceptedVersion]
// Type encoding: @16@0:8
// Implementation: 0x1057def54

// -[SCFeatureSettingsService isMerlinQuickCaptureJitAcceptedVersionAvailable]
// Type encoding: B16@0:8
// Implementation: 0x1057def68

// -[SCFeatureSettingsService merlinQuickCaptureJitAcceptedVersionServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1057def74

// -[SCFeatureSettingsService setMerlinQuickCaptureJitAcceptedVersion:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057def80

// -[SCFeatureSettingsService merlin_quick_capture_jit_accepted_version_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1057def90

// -[SCFeatureSettingsService merlin_quick_capture_jit_accepted_version_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1057defb8

// -[SCFeatureSettingsService merlinQuickCaptureJitAcceptedVersion]
// Type encoding: @16@0:8
// Implementation: 0x1057defe0

// -[SCFeatureSettingsService isMerlinGroupJitAcceptedVersionAvailable]
// Type encoding: B16@0:8
// Implementation: 0x1057deff4

// -[SCFeatureSettingsService merlinGroupJitAcceptedVersionServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1057df000

// -[SCFeatureSettingsService setMerlinGroupJitAcceptedVersion:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057df00c

// -[SCFeatureSettingsService merlin_group_jit_accepted_version_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1057df01c

// -[SCFeatureSettingsService merlin_group_jit_accepted_version_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1057df044

// -[SCFeatureSettingsService merlinGroupJitAcceptedVersion]
// Type encoding: @16@0:8
// Implementation: 0x1057df06c

// -[SCFeatureSettingsService isMerlinSpotlightMentionsSenderJitAcceptedVersionAvailable]
// Type encoding: B16@0:8
// Implementation: 0x1057df080

// -[SCFeatureSettingsService merlinSpotlightMentionsSenderJitAcceptedVersionServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1057df08c

// -[SCFeatureSettingsService setMerlinSpotlightMentionsSenderJitAcceptedVersion:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057df098

// -[SCFeatureSettingsService merlin_spotlight_mentions_sender_jit_accepted_version_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1057df0a8

// -[SCFeatureSettingsService merlin_spotlight_mentions_sender_jit_accepted_version_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1057df0d0

// -[SCFeatureSettingsService merlinSpotlightMentionsSenderJitAcceptedVersion]
// Type encoding: @16@0:8
// Implementation: 0x1057df0f8

// -[SCFeatureSettingsService isMerlinTeamSnapchatJitAcceptedVersionAvailable]
// Type encoding: B16@0:8
// Implementation: 0x1057df10c

// -[SCFeatureSettingsService merlinTeamSnapchatJitAcceptedVersionServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1057df118

// -[SCFeatureSettingsService setMerlinTeamSnapchatJitAcceptedVersion:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057df124

// -[SCFeatureSettingsService merlin_team_snapchat_jit_accepted_version_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1057df134

// -[SCFeatureSettingsService merlin_team_snapchat_jit_accepted_version_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1057df15c

// -[SCFeatureSettingsService merlinTeamSnapchatJitAcceptedVersion]
// Type encoding: @16@0:8
// Implementation: 0x1057df184

// -[SCFeatureSettingsService hasChatHeaderLocationContextTooltipSeenCount]
// Type encoding: B16@0:8
// Implementation: 0x1057de7c8

// -[SCFeatureSettingsService chatHeaderLocationContextTooltipSeenCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1057de7d4

// -[SCFeatureSettingsService setChatHeaderLocationContextTooltipSeenCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x1057de7e0

// -[SCFeatureSettingsService CHAT_HEADER_LOCATION_CONTEXT_TOOLTIP_SEEN_COUNT_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1057de7f0

// -[SCFeatureSettingsService CHAT_HEADER_LOCATION_CONTEXT_TOOLTIP_SEEN_COUNT_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1057de7f8

// -[SCFeatureSettingsService chatHeaderLocationContextTooltipSeenCount]
// Type encoding: q16@0:8
// Implementation: 0x1057de800

// -[SCFeatureSettingsService hasChatHeaderLocationContextTooltipSeenTimestamp]
// Type encoding: B16@0:8
// Implementation: 0x1057de810

// -[SCFeatureSettingsService chatHeaderLocationContextTooltipSeenTimestampServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1057de81c

// -[SCFeatureSettingsService setChatHeaderLocationContextTooltipSeenTimestamp:]
// Type encoding: v24@0:8q16
// Implementation: 0x1057de828

// -[SCFeatureSettingsService CHAT_HEADER_LOCATION_CONTEXT_TOOLTIP_SEEN_TIMESTAMP_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1057de838

// -[SCFeatureSettingsService CHAT_HEADER_LOCATION_CONTEXT_TOOLTIP_SEEN_TIMESTAMP_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1057de840

// -[SCFeatureSettingsService chatHeaderLocationContextTooltipSeenTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x1057de848

// -[SCFeatureSettingsService hasChatBackButtonHasMovedTooltipSeenCount]
// Type encoding: B16@0:8
// Implementation: 0x1057de738

// -[SCFeatureSettingsService chatBackButtonHasMovedTooltipSeenCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1057de744

// -[SCFeatureSettingsService setChatBackButtonHasMovedTooltipSeenCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x1057de750

// -[SCFeatureSettingsService CHAT_BACK_BUTTON_HAS_MOVED_TOOLTIP_SEEN_COUNT_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1057de760

// -[SCFeatureSettingsService CHAT_BACK_BUTTON_HAS_MOVED_TOOLTIP_SEEN_COUNT_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1057de768

// -[SCFeatureSettingsService chatBackButtonHasMovedTooltipSeenCount]
// Type encoding: q16@0:8
// Implementation: 0x1057de770

// -[SCFeatureSettingsService hasChatBackButtonHasMovedTooltipSeenTimestamp]
// Type encoding: B16@0:8
// Implementation: 0x1057de780

// -[SCFeatureSettingsService chatBackButtonHasMovedTooltipSeenTimestampServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1057de78c

// -[SCFeatureSettingsService setChatBackButtonHasMovedTooltipSeenTimestamp:]
// Type encoding: v24@0:8q16
// Implementation: 0x1057de798

// -[SCFeatureSettingsService CHAT_BACK_BUTTON_HAS_MOVED_TOOLTIP_SEEN_TIMESTAMP_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1057de7a8

// -[SCFeatureSettingsService CHAT_BACK_BUTTON_HAS_MOVED_TOOLTIP_SEEN_TIMESTAMP_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1057de7b0

// -[SCFeatureSettingsService chatBackButtonHasMovedTooltipSeenTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x1057de7b8

// -[SCFeatureSettingsService isViewedSaturnPrivacySettingsAvailable]
// Type encoding: B16@0:8
// Implementation: 0x1056c7438

// -[SCFeatureSettingsService viewedSaturnPrivacySettingsServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1056c7444

// -[SCFeatureSettingsService setViewedSaturnPrivacySettings:]
// Type encoding: v20@0:8B16
// Implementation: 0x1056c7450

// -[SCFeatureSettingsService viewed_saturn_privacy_settings_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056c7460

// -[SCFeatureSettingsService viewed_saturn_privacy_settings_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056c7468

// -[SCFeatureSettingsService viewedSaturnPrivacySettings]
// Type encoding: B16@0:8
// Implementation: 0x1056c7470

// -[SCFeatureSettingsService isHasAcceptedScanFromLensOnboarding]
// Type encoding: B16@0:8
// Implementation: 0x1055ee694

// -[SCFeatureSettingsService hasAcceptedScanFromLensOnboardingServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1055ee6a0

// -[SCFeatureSettingsService setHasAcceptedScanFromLensOnboarding:]
// Type encoding: v20@0:8B16
// Implementation: 0x1055ee6ac

// -[SCFeatureSettingsService SCAN_LENS_ONBOARDING_PROMPT_ACCEPTED_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1055ee6bc

// -[SCFeatureSettingsService SCAN_LENS_ONBOARDING_PROMPT_ACCEPTED_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1055ee6c4

// -[SCFeatureSettingsService hasAcceptedScanFromLensOnboarding]
// Type encoding: B16@0:8
// Implementation: 0x1055ee6cc

// -[SCFeatureSettingsService hasSeenChatDeletionMsg]
// Type encoding: B16@0:8
// Implementation: 0x1055300c4

// -[SCFeatureSettingsService seenChatDeletionMsgServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1055300d0

// -[SCFeatureSettingsService setSeenChatDeletionMsg:]
// Type encoding: v20@0:8B16
// Implementation: 0x1055300dc

// -[SCFeatureSettingsService chat_deletion_msg_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1055300ec

// -[SCFeatureSettingsService chat_deletion_msg_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1055300f4

// -[SCFeatureSettingsService seenChatDeletionMsg]
// Type encoding: B16@0:8
// Implementation: 0x1055300fc

// -[SCFeatureSettingsService hasSeenMischiefChatDeletionMsg]
// Type encoding: B16@0:8
// Implementation: 0x10553010c

// -[SCFeatureSettingsService seenMischiefChatDeletionMsgServerParam]
// Type encoding: @16@0:8
// Implementation: 0x105530118

// -[SCFeatureSettingsService setSeenMischiefChatDeletionMsg:]
// Type encoding: v20@0:8B16
// Implementation: 0x105530124

// -[SCFeatureSettingsService mischief_chat_deletion_msg_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105530134

// -[SCFeatureSettingsService mischief_chat_deletion_msg_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10553013c

// -[SCFeatureSettingsService seenMischiefChatDeletionMsg]
// Type encoding: B16@0:8
// Implementation: 0x105530144

// -[SCFeatureSettingsService hasSeenFirstReplayDialog]
// Type encoding: B16@0:8
// Implementation: 0x105530154

// -[SCFeatureSettingsService seenFirstReplayDialogServerParam]
// Type encoding: @16@0:8
// Implementation: 0x105530160

// -[SCFeatureSettingsService setSeenFirstReplayDialog:]
// Type encoding: v20@0:8B16
// Implementation: 0x10553016c

// -[SCFeatureSettingsService first_replay_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10553017c

// -[SCFeatureSettingsService first_replay_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105530184

// -[SCFeatureSettingsService seenFirstReplayDialog]
// Type encoding: B16@0:8
// Implementation: 0x10553018c

// -[SCFeatureSettingsService getShouldShowPinConversationNewBadge]
// Type encoding: B16@0:8
// Implementation: 0x1054ec1e8

// -[SCFeatureSettingsService shouldShowPinConversationNewBadgeServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1054ec1f4

// -[SCFeatureSettingsService setShouldShowPinConversationNewBadge:]
// Type encoding: v20@0:8B16
// Implementation: 0x1054ec200

// -[SCFeatureSettingsService should_show_pin_conversation_new_badge_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1054ec210

// -[SCFeatureSettingsService should_show_pin_conversation_new_badge_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1054ec218

// -[SCFeatureSettingsService shouldShowPinConversationNewBadge]
// Type encoding: B16@0:8
// Implementation: 0x1054ec220

// -[SCFeatureSettingsService hasWebBrowsingEnablePrivacyConsent]
// Type encoding: B16@0:8
// Implementation: 0x10547d1d8

// -[SCFeatureSettingsService webBrowsingEnablePrivacyConsentServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10547d1e4

// -[SCFeatureSettingsService setWebBrowsingEnablePrivacyConsent:]
// Type encoding: v24@0:8q16
// Implementation: 0x10547d1f0

// -[SCFeatureSettingsService web_browsing_enable_privacy_consent_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10547d200

// -[SCFeatureSettingsService web_browsing_enable_privacy_consent_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10547d208

// -[SCFeatureSettingsService webBrowsingEnablePrivacyConsent]
// Type encoding: q16@0:8
// Implementation: 0x10547d210

// -[SCFeatureSettingsService hasWebBrowsingShouldPresentPrivacyPrompt]
// Type encoding: B16@0:8
// Implementation: 0x10547d220

// -[SCFeatureSettingsService webBrowsingShouldPresentPrivacyPromptServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10547d22c

// -[SCFeatureSettingsService setWebBrowsingShouldPresentPrivacyPrompt:]
// Type encoding: v24@0:8q16
// Implementation: 0x10547d238

// -[SCFeatureSettingsService web_browsing_should_present_privacy_prompt_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10547d248

// -[SCFeatureSettingsService web_browsing_should_present_privacy_prompt_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10547d250

// -[SCFeatureSettingsService webBrowsingShouldPresentPrivacyPrompt]
// Type encoding: q16@0:8
// Implementation: 0x10547d258

// -[SCFeatureSettingsService hasWebBrowsingLastPromptPresentTsMs]
// Type encoding: B16@0:8
// Implementation: 0x10547d268

// -[SCFeatureSettingsService webBrowsingLastPromptPresentTsMsServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10547d274

// -[SCFeatureSettingsService setWebBrowsingLastPromptPresentTsMs:]
// Type encoding: v24@0:8d16
// Implementation: 0x10547d280

// -[SCFeatureSettingsService web_browsing_last_prompt_present_ts_ms_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10547d28c

// -[SCFeatureSettingsService web_browsing_last_prompt_present_ts_ms_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10547d294

// -[SCFeatureSettingsService webBrowsingLastPromptPresentTsMs]
// Type encoding: d16@0:8
// Implementation: 0x10547d29c

// -[SCFeatureSettingsService hasContactSyncUserLevelPermissionGrantedDeviceList]
// Type encoding: B16@0:8
// Implementation: 0x1053eab3c

// -[SCFeatureSettingsService contactSyncUserLevelPermissionGrantedDeviceListServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1053eab48

// -[SCFeatureSettingsService setContactSyncUserLevelPermissionGrantedDeviceList:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053eab54

// -[SCFeatureSettingsService contact_sync_user_level_permission_granted_device_list_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1053eab64

// -[SCFeatureSettingsService contact_sync_user_level_permission_granted_device_list_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1053eab8c

// -[SCFeatureSettingsService contactSyncUserLevelPermissionGrantedDeviceList]
// Type encoding: @16@0:8
// Implementation: 0x1053eabb4

// -[SCFeatureSettingsService grantedDevices]
// Type encoding: @16@0:8
// Implementation: 0x1053eabc8

// -[SCFeatureSettingsService storeGrantedDevices:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053eac90

// -[SCFeatureSettingsService grantedContactType]
// Type encoding: i16@0:8
// Implementation: 0x1053ead28

// -[SCFeatureSettingsService isLevelV1Granted]
// Type encoding: B16@0:8
// Implementation: 0x1053ead6c

// -[SCFeatureSettingsService isLevelV2Granted]
// Type encoding: B16@0:8
// Implementation: 0x1053ead88

// -[SCFeatureSettingsService grantLevelV2]
// Type encoding: v16@0:8
// Implementation: 0x1053eada4

// -[SCFeatureSettingsService clearGrantedDevices]
// Type encoding: v16@0:8
// Implementation: 0x1053eb0b8

// -[SCFeatureSettingsService isHasAcceptedVoiceMLLensVoiceControlOnboarding]
// Type encoding: B16@0:8
// Implementation: 0x1053e241c

// -[SCFeatureSettingsService hasAcceptedVoiceMLLensVoiceControlOnboardingServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1053e2428

// -[SCFeatureSettingsService setHasAcceptedVoiceMLLensVoiceControlOnboarding:]
// Type encoding: v20@0:8B16
// Implementation: 0x1053e2434

// -[SCFeatureSettingsService VOICE_ML_LENSES_ACCEPTED_FTUE_PROMPT_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1053e2444

// -[SCFeatureSettingsService VOICE_ML_LENSES_ACCEPTED_FTUE_PROMPT_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1053e244c

// -[SCFeatureSettingsService hasAcceptedVoiceMLLensVoiceControlOnboarding]
// Type encoding: B16@0:8
// Implementation: 0x1053e2454

// -[SCFeatureSettingsService getVoicemlLensVoiceControlOnboardingBannerSeenCount]
// Type encoding: B16@0:8
// Implementation: 0x1053e2464

// -[SCFeatureSettingsService voicemlLensVoiceControlOnboardingBannerSeenCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1053e2470

// -[SCFeatureSettingsService setVoicemlLensVoiceControlOnboardingBannerSeenCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x1053e247c

// -[SCFeatureSettingsService VOICE_ML_LENS_VOICE_CONTROL_ONBOARDING_BANNER_SEEN_COUNT_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1053e248c

// -[SCFeatureSettingsService VOICE_ML_LENS_VOICE_CONTROL_ONBOARDING_BANNER_SEEN_COUNT_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1053e2494

// -[SCFeatureSettingsService voicemlLensVoiceControlOnboardingBannerSeenCount]
// Type encoding: q16@0:8
// Implementation: 0x1053e249c

// -[SCFeatureSettingsService isCreatorSubscriptionsLastUpdateTimestamp]
// Type encoding: B16@0:8
// Implementation: 0x1053dbaec

// -[SCFeatureSettingsService creatorSubscriptionsLastUpdateTimestampServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1053dbaf8

// -[SCFeatureSettingsService setCreatorSubscriptionsLastUpdateTimestamp:]
// Type encoding: v24@0:8q16
// Implementation: 0x1053dbb04

// -[SCFeatureSettingsService creator_subscriptions_last_update_timestamp_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1053dbb14

// -[SCFeatureSettingsService creator_subscriptions_last_update_timestamp_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1053dbb1c

// -[SCFeatureSettingsService creatorSubscriptionsLastUpdateTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x1053dbb24

// -[SCFeatureSettingsService getContextV3TappableCaptionsTooltipShown]
// Type encoding: B16@0:8
// Implementation: 0x1051fd500

// -[SCFeatureSettingsService contextV3TappableCaptionsTooltipShownServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1051fd50c

// -[SCFeatureSettingsService setContextV3TappableCaptionsTooltipShown:]
// Type encoding: v20@0:8B16
// Implementation: 0x1051fd518

// -[SCFeatureSettingsService contextv3_tappable_captions_tooltip_shown_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1051fd528

// -[SCFeatureSettingsService contextv3_tappable_captions_tooltip_shown_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1051fd530

// -[SCFeatureSettingsService contextV3TappableCaptionsTooltipShown]
// Type encoding: B16@0:8
// Implementation: 0x1051fd538

// -[SCFeatureSettingsService hasSeenSponsorMoreButtonTooltip]
// Type encoding: B16@0:8
// Implementation: 0x1051491b8

// -[SCFeatureSettingsService seenSponsorMoreButtonTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1051491c4

// -[SCFeatureSettingsService setSeenSponsorMoreButtonTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x1051491d0

// -[SCFeatureSettingsService sponsor_more_button_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1051491e0

// -[SCFeatureSettingsService sponsor_more_button_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1051491e8

// -[SCFeatureSettingsService seenSponsorMoreButtonTooltip]
// Type encoding: B16@0:8
// Implementation: 0x1051491f0

// -[SCFeatureSettingsService hasSeenExternalLinkSendingModal]
// Type encoding: B16@0:8
// Implementation: 0x105149200

// -[SCFeatureSettingsService seenExternalLinkSendingModalServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10514920c

// -[SCFeatureSettingsService setSeenExternalLinkSendingModal:]
// Type encoding: v20@0:8B16
// Implementation: 0x105149218

// -[SCFeatureSettingsService sharing_has_seen_contact_privacy_alert_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105149228

// -[SCFeatureSettingsService sharing_has_seen_contact_privacy_alert_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105149230

// -[SCFeatureSettingsService seenExternalLinkSendingModal]
// Type encoding: B16@0:8
// Implementation: 0x105149238

// -[SCFeatureSettingsService hasSeenSnapAnyoneSendingModal]
// Type encoding: B16@0:8
// Implementation: 0x105149248

// -[SCFeatureSettingsService seenSnapAnyoneSendingModalServerParam]
// Type encoding: @16@0:8
// Implementation: 0x105149254

// -[SCFeatureSettingsService setSeenSnapAnyoneSendingModal:]
// Type encoding: v20@0:8B16
// Implementation: 0x105149260

// -[SCFeatureSettingsService sharing_has_seen_snap_anyone_privacy_alert_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105149270

// -[SCFeatureSettingsService sharing_has_seen_snap_anyone_privacy_alert_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105149278

// -[SCFeatureSettingsService seenSnapAnyoneSendingModal]
// Type encoding: B16@0:8
// Implementation: 0x105149280

// -[SCFeatureSettingsService hasSeenScheduleMoreButtonTooltip]
// Type encoding: B16@0:8
// Implementation: 0x105149290

// -[SCFeatureSettingsService seenScheduleMoreButtonTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10514929c

// -[SCFeatureSettingsService setSeenScheduleMoreButtonTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x1051492a8

// -[SCFeatureSettingsService schedule_more_button_tooltip_seen_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1051492b8

// -[SCFeatureSettingsService schedule_more_button_tooltip_seen_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1051492c0

// -[SCFeatureSettingsService seenScheduleMoreButtonTooltip]
// Type encoding: B16@0:8
// Implementation: 0x1051492c8

// -[SCFeatureSettingsService hasNewGroupButtonOnboardingAnimationShownCount]
// Type encoding: B16@0:8
// Implementation: 0x1051492d8

// -[SCFeatureSettingsService newGroupButtonOnboardingAnimationShownCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1051492e4

// -[SCFeatureSettingsService setNewGroupButtonOnboardingAnimationShownCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x1051492f0

// -[SCFeatureSettingsService NEW_GROUP_IN_RECIPIENTS_BAR_SEND_TO_EDUCATION_SHOWN_COUNT_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105149300

// -[SCFeatureSettingsService NEW_GROUP_IN_RECIPIENTS_BAR_SEND_TO_EDUCATION_SHOWN_COUNT_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105149308

// -[SCFeatureSettingsService newGroupButtonOnboardingAnimationShownCount]
// Type encoding: q16@0:8
// Implementation: 0x105149310

// -[SCFeatureSettingsService hasSeenDragToSelectTooltip]
// Type encoding: B16@0:8
// Implementation: 0x105149320

// -[SCFeatureSettingsService seenDragToSelectTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10514932c

// -[SCFeatureSettingsService setSeenDragToSelectTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x105149338

// -[SCFeatureSettingsService SEEN_DRAG_TO_SELECT_TOOLTIP_IN_SENDTO_PAGE_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105149348

// -[SCFeatureSettingsService SEEN_DRAG_TO_SELECT_TOOLTIP_IN_SENDTO_PAGE_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105149350

// -[SCFeatureSettingsService seenDragToSelectTooltip]
// Type encoding: B16@0:8
// Implementation: 0x105149358

// -[SCFeatureSettingsService hasRecentlyActiveEducationShownCount]
// Type encoding: B16@0:8
// Implementation: 0x105149368

// -[SCFeatureSettingsService recentlyActiveEducationShownCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x105149374

// -[SCFeatureSettingsService setRecentlyActiveEducationShownCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x105149380

// -[SCFeatureSettingsService RECENTLY_ACTIVE_INDICATOR_EXPLANATION_SHOWN_COUNT_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105149390

// -[SCFeatureSettingsService RECENTLY_ACTIVE_INDICATOR_EXPLANATION_SHOWN_COUNT_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105149398

// -[SCFeatureSettingsService recentlyActiveEducationShownCount]
// Type encoding: q16@0:8
// Implementation: 0x1051493a0

// -[SCFeatureSettingsService hasSeenQueuedOffPlatformSharingTooltip]
// Type encoding: B16@0:8
// Implementation: 0x1051493b0

// -[SCFeatureSettingsService seenQueuedOffPlatformSharingTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1051493bc

// -[SCFeatureSettingsService setSeenQueuedOffPlatformSharingTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x1051493c8

// -[SCFeatureSettingsService SEEN_QUEUED_OFF_PLATFORM_SHARING_TOOLTIP_IN_SENDTO_PAGE_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1051493d8

// -[SCFeatureSettingsService SEEN_QUEUED_OFF_PLATFORM_SHARING_TOOLTIP_IN_SENDTO_PAGE_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1051493e0

// -[SCFeatureSettingsService seenQueuedOffPlatformSharingTooltip]
// Type encoding: B16@0:8
// Implementation: 0x1051493e8

// -[SCFeatureSettingsService hasUserReachabilityTakeoverTimestampSeconds]
// Type encoding: B16@0:8
// Implementation: 0x105124e84

// -[SCFeatureSettingsService lastUserReachabilityTakeoverTimestampSecondsServerParam]
// Type encoding: @16@0:8
// Implementation: 0x105124e90

// -[SCFeatureSettingsService setLastUserReachabilityTakeoverTimestampSeconds:]
// Type encoding: v24@0:8q16
// Implementation: 0x105124e9c

// -[SCFeatureSettingsService USER_REACHABILITY_TAKEOVER_LAST_SEEN_TIMESTAMP_SECONDS_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105124eac

// -[SCFeatureSettingsService USER_REACHABILITY_TAKEOVER_LAST_SEEN_TIMESTAMP_SECONDS_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105124eb4

// -[SCFeatureSettingsService lastUserReachabilityTakeoverTimestampSeconds]
// Type encoding: q16@0:8
// Implementation: 0x105124ebc

// -[SCFeatureSettingsService hasCommunicationChannelEnrollmentTakeoverTimestampSeconds]
// Type encoding: B16@0:8
// Implementation: 0x105123dd4

// -[SCFeatureSettingsService lastCommunicationChannelEnrollmentTakeoverTimestampSecondsServerParam]
// Type encoding: @16@0:8
// Implementation: 0x105123de0

// -[SCFeatureSettingsService setLastCommunicationChannelEnrollmentTakeoverTimestampSeconds:]
// Type encoding: v24@0:8q16
// Implementation: 0x105123dec

// -[SCFeatureSettingsService CC_ENROLLMENT_TAKEOVER_LAST_SEEN_TIMESTAMP_SECONDS_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105123dfc

// -[SCFeatureSettingsService CC_ENROLLMENT_TAKEOVER_LAST_SEEN_TIMESTAMP_SECONDS_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105123e04

// -[SCFeatureSettingsService lastCommunicationChannelEnrollmentTakeoverTimestampSeconds]
// Type encoding: q16@0:8
// Implementation: 0x105123e0c

// -[SCFeatureSettingsService hasCommunicationChannelEnrollmentTakeoverDismissCount]
// Type encoding: B16@0:8
// Implementation: 0x105123e1c

// -[SCFeatureSettingsService lastCommunicationChannelEnrollmentTakeoverDismissCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x105123e28

// -[SCFeatureSettingsService setLastCommunicationChannelEnrollmentTakeoverDismissCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x105123e34

// -[SCFeatureSettingsService CC_ENROLLMENT_TAKEOVER_SKIP_COUNT_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105123e44

// -[SCFeatureSettingsService CC_ENROLLMENT_TAKEOVER_SKIP_COUNT_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105123e4c

// -[SCFeatureSettingsService lastCommunicationChannelEnrollmentTakeoverDismissCount]
// Type encoding: q16@0:8
// Implementation: 0x105123e54

// -[SCFeatureSettingsService hasUserInteracted]
// Type encoding: B16@0:8
// Implementation: 0x1050f56d8

// -[SCFeatureSettingsService userInteractedServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1050f56e4

// -[SCFeatureSettingsService setUserInteracted:]
// Type encoding: v20@0:8B16
// Implementation: 0x1050f56f0

// -[SCFeatureSettingsService COMMUNITIES_BITMOJI_FASHION_BANNER_HAS_INTERACTED_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1050f5700

// -[SCFeatureSettingsService COMMUNITIES_BITMOJI_FASHION_BANNER_HAS_INTERACTED_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1050f5708

// -[SCFeatureSettingsService userInteracted]
// Type encoding: B16@0:8
// Implementation: 0x1050f5710

// -[SCFeatureSettingsService hasGroupInviteLinkShareInSnapEducationSeenCount]
// Type encoding: B16@0:8
// Implementation: 0x1050dd240

// -[SCFeatureSettingsService groupInviteLinkShareInSnapEducationSeenCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1050dd24c

// -[SCFeatureSettingsService setGroupInviteLinkShareInSnapEducationSeenCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x1050dd258

// -[SCFeatureSettingsService group_invite_link_share_in_snap_education_seen_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1050dd268

// -[SCFeatureSettingsService group_invite_link_share_in_snap_education_seen_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1050dd270

// -[SCFeatureSettingsService groupInviteLinkShareInSnapEducationSeenCount]
// Type encoding: q16@0:8
// Implementation: 0x1050dd278

// -[SCFeatureSettingsService hasBitmojiTakeoverTimestampSeconds]
// Type encoding: B16@0:8
// Implementation: 0x10502dcb0

// -[SCFeatureSettingsService bitmojiTakeoverTimestampSecondsServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10502dcbc

// -[SCFeatureSettingsService setBitmojiTakeoverTimestampSeconds:]
// Type encoding: v24@0:8q16
// Implementation: 0x10502dcc8

// -[SCFeatureSettingsService bitmoji_takeover_timestamp_seconds_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10502dcd8

// -[SCFeatureSettingsService bitmoji_takeover_timestamp_seconds_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10502dce0

// -[SCFeatureSettingsService bitmojiTakeoverTimestampSeconds]
// Type encoding: q16@0:8
// Implementation: 0x10502dce8

// -[SCFeatureSettingsService hasBitmojiTakeoverImpressionCount]
// Type encoding: B16@0:8
// Implementation: 0x10502dcf8

// -[SCFeatureSettingsService bitmojiTakeoverImpressionCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10502dd04

// -[SCFeatureSettingsService setBitmojiTakeoverImpressionCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x10502dd10

// -[SCFeatureSettingsService bitmoji_takeover_impression_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10502dd20

// -[SCFeatureSettingsService bitmoji_takeover_impression_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10502dd28

// -[SCFeatureSettingsService bitmojiTakeoverImpressionCount]
// Type encoding: q16@0:8
// Implementation: 0x10502dd30

// -[SCFeatureSettingsService hasBitmojiGesturesEducationOverlayViewed]
// Type encoding: B16@0:8
// Implementation: 0x10502b6e4

// -[SCFeatureSettingsService bitmojiGesturesEducationOverlayViewedServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10502b6f0

// -[SCFeatureSettingsService setBitmojiGesturesEducationOverlayViewed:]
// Type encoding: v20@0:8B16
// Implementation: 0x10502b6fc

// -[SCFeatureSettingsService PROFILE_BITMOJI_GESTURES_EDUCATION_OVERLAY_VIEWED_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10502b70c

// -[SCFeatureSettingsService PROFILE_BITMOJI_GESTURES_EDUCATION_OVERLAY_VIEWED_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x10502b714

// -[SCFeatureSettingsService bitmojiGesturesEducationOverlayViewed]
// Type encoding: B16@0:8
// Implementation: 0x10502b71c

// -[SCFeatureSettingsService hasSeenMyUnifiedProfilePhoneNumberVerificationActivityCard]
// Type encoding: B16@0:8
// Implementation: 0x105018470

// -[SCFeatureSettingsService seenMyUnifiedProfilePhoneNumberVerificationActivityCardServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10501847c

// -[SCFeatureSettingsService setSeenMyUnifiedProfilePhoneNumberVerificationActivityCard:]
// Type encoding: v20@0:8B16
// Implementation: 0x105018488

// -[SCFeatureSettingsService profile_v3_phone_number_verification_prompt_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105018498

// -[SCFeatureSettingsService profile_v3_phone_number_verification_prompt_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1050184a0

// -[SCFeatureSettingsService seenMyUnifiedProfilePhoneNumberVerificationActivityCard]
// Type encoding: B16@0:8
// Implementation: 0x1050184a8

// -[SCFeatureSettingsService hasSeenMyUnifiedProfileStoryManagementLinkSharingBadge]
// Type encoding: B16@0:8
// Implementation: 0x1050184b8

// -[SCFeatureSettingsService seenMyUnifiedProfileStoryManagementLinkSharingBadgeServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1050184c4

// -[SCFeatureSettingsService setSeenMyUnifiedProfileStoryManagementLinkSharingBadge:]
// Type encoding: v20@0:8B16
// Implementation: 0x1050184d0

// -[SCFeatureSettingsService story_management_link_sharing_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1050184e0

// -[SCFeatureSettingsService story_management_link_sharing_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1050184e8

// -[SCFeatureSettingsService seenMyUnifiedProfileStoryManagementLinkSharingBadge]
// Type encoding: B16@0:8
// Implementation: 0x1050184f0

// -[SCFeatureSettingsService isBirthdayMiniSeenCountAvailable]
// Type encoding: B16@0:8
// Implementation: 0x105018500

// -[SCFeatureSettingsService birthdayMiniSeenCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10501850c

// -[SCFeatureSettingsService setBirthdayMiniSeenCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x105018518

// -[SCFeatureSettingsService birthday_mini_seen_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105018528

// -[SCFeatureSettingsService birthday_mini_seen_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105018530

// -[SCFeatureSettingsService birthdayMiniSeenCount]
// Type encoding: q16@0:8
// Implementation: 0x105018538

// -[SCFeatureSettingsService isBirthdayMiniDismissedAvailable]
// Type encoding: B16@0:8
// Implementation: 0x105018548

// -[SCFeatureSettingsService birthdayMiniDismissedServerParam]
// Type encoding: @16@0:8
// Implementation: 0x105018554

// -[SCFeatureSettingsService setBirthdayMiniDismissed:]
// Type encoding: v20@0:8B16
// Implementation: 0x105018560

// -[SCFeatureSettingsService birthday_mini_dismissed_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105018570

// -[SCFeatureSettingsService birthday_mini_dismissed_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105018578

// -[SCFeatureSettingsService birthdayMiniDismissed]
// Type encoding: B16@0:8
// Implementation: 0x105018580

// -[SCFeatureSettingsService isRunForOfficeMiniSeenCountAvailable]
// Type encoding: B16@0:8
// Implementation: 0x105018590

// -[SCFeatureSettingsService runForOfficeMiniSeenCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10501859c

// -[SCFeatureSettingsService setRunForOfficeMiniSeenCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x1050185a8

// -[SCFeatureSettingsService run_for_office_mini_seen_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1050185b8

// -[SCFeatureSettingsService run_for_office_mini_seen_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1050185c0

// -[SCFeatureSettingsService runForOfficeMiniSeenCount]
// Type encoding: q16@0:8
// Implementation: 0x1050185c8

// -[SCFeatureSettingsService isRunForOfficeMiniDismissedAvailable]
// Type encoding: B16@0:8
// Implementation: 0x1050185d8

// -[SCFeatureSettingsService runForOfficeMiniDismissedServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1050185e4

// -[SCFeatureSettingsService setRunForOfficeMiniDismissed:]
// Type encoding: v20@0:8B16
// Implementation: 0x1050185f0

// -[SCFeatureSettingsService run_for_office_mini_dismissed_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105018600

// -[SCFeatureSettingsService run_for_office_mini_dismissed_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105018608

// -[SCFeatureSettingsService runForOfficeMiniDismissed]
// Type encoding: B16@0:8
// Implementation: 0x105018610

// -[SCFeatureSettingsService isFriendCheckupShownTimeAvailable]
// Type encoding: B16@0:8
// Implementation: 0x105018620

// -[SCFeatureSettingsService friendCheckupShownTimeServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10501862c

// -[SCFeatureSettingsService setFriendCheckupShownTime:]
// Type encoding: v24@0:8q16
// Implementation: 0x105018638

// -[SCFeatureSettingsService friend_checkup_shown_time_millis_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105018648

// -[SCFeatureSettingsService friend_checkup_shown_time_millis_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105018650

// -[SCFeatureSettingsService friendCheckupShownTime]
// Type encoding: q16@0:8
// Implementation: 0x105018658

// -[SCFeatureSettingsService isFriendCheckupImpressionCountAvailable]
// Type encoding: B16@0:8
// Implementation: 0x105018668

// -[SCFeatureSettingsService friendCheckupImpressionCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x105018674

// -[SCFeatureSettingsService setFriendCheckupImpressionCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x105018680

// -[SCFeatureSettingsService friend_checkup_impression_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105018690

// -[SCFeatureSettingsService friend_checkup_impression_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105018698

// -[SCFeatureSettingsService friendCheckupImpressionCount]
// Type encoding: q16@0:8
// Implementation: 0x1050186a0

// -[SCFeatureSettingsService isFriendCheckupClickCountAvailable]
// Type encoding: B16@0:8
// Implementation: 0x1050186b0

// -[SCFeatureSettingsService friendCheckupClickCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x1050186bc

// -[SCFeatureSettingsService setFriendCheckupClickCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x1050186c8

// -[SCFeatureSettingsService friend_checkup_click_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1050186d8

// -[SCFeatureSettingsService friend_checkup_click_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1050186e0

// -[SCFeatureSettingsService friendCheckupClickCount]
// Type encoding: q16@0:8
// Implementation: 0x1050186e8

// -[SCFeatureSettingsService isFriendCheckupDismissCountAvailable]
// Type encoding: B16@0:8
// Implementation: 0x1050186f8

// -[SCFeatureSettingsService friendCheckupDismissCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x105018704

// -[SCFeatureSettingsService setFriendCheckupDismissCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x105018710

// -[SCFeatureSettingsService friend_checkup_dismiss_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105018720

// -[SCFeatureSettingsService friend_checkup_dismiss_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105018728

// -[SCFeatureSettingsService friendCheckupDismissCount]
// Type encoding: q16@0:8
// Implementation: 0x105018730

// -[SCFeatureSettingsService isPrivacyChatContactCTACountAvailable]
// Type encoding: B16@0:8
// Implementation: 0x105018740

// -[SCFeatureSettingsService privacyChatContactCTACountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x10501874c

// -[SCFeatureSettingsService setPrivacyChatContactCTACount:]
// Type encoding: v24@0:8q16
// Implementation: 0x105018758

// -[SCFeatureSettingsService privacy_chat_contact_cta_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105018768

// -[SCFeatureSettingsService privacy_chat_contact_cta_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x105018770

// -[SCFeatureSettingsService privacyChatContactCTACount]
// Type encoding: q16@0:8
// Implementation: 0x105018778

// -[SCFeatureSettingsService isbitmojiCreateAvatarFriendProfileCTAViewsAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10501348c

// -[SCFeatureSettingsService bitmojiCreateAvatarFriendProfileCTAViewsServerParam]
// Type encoding: @16@0:8
// Implementation: 0x105013498

// -[SCFeatureSettingsService setBitmojiCreateAvatarFriendProfileCTAViews:]
// Type encoding: v24@0:8q16
// Implementation: 0x1050134a4

// -[SCFeatureSettingsService BITMOJI_CREATE_AVATAR_FRIEND_PROFILE_CTA_VIEWS_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1050134b4

// -[SCFeatureSettingsService BITMOJI_CREATE_AVATAR_FRIEND_PROFILE_CTA_VIEWS_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x1050134bc

// -[SCFeatureSettingsService bitmojiCreateAvatarFriendProfileCTAViews]
// Type encoding: q16@0:8
// Implementation: 0x1050134c4

// -[SCFeatureSettingsService isAuraBirthInfoSettingsBase64Set]
// Type encoding: B16@0:8
// Implementation: 0x104fee83c

// -[SCFeatureSettingsService auraBirthInfoSettingsBase64ServerParam]
// Type encoding: @16@0:8
// Implementation: 0x104fee848

// -[SCFeatureSettingsService setAuraBirthInfoSettingsBase64:]
// Type encoding: v24@0:8@16
// Implementation: 0x104fee854

// -[SCFeatureSettingsService aura_birth_info_settings_base64_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x104fee864

// -[SCFeatureSettingsService aura_birth_info_settings_base64_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x104fee88c

// -[SCFeatureSettingsService auraBirthInfoSettingsBase64]
// Type encoding: @16@0:8
// Implementation: 0x104fee8b4

// -[SCFeatureSettingsService isDisplayedBirthInfoPageVersionAvailable]
// Type encoding: B16@0:8
// Implementation: 0x104fee8c4

// -[SCFeatureSettingsService displayedBirthInfoPageVersionServerParam]
// Type encoding: @16@0:8
// Implementation: 0x104fee8d0

// -[SCFeatureSettingsService setDisplayedBirthInfoPageVersion:]
// Type encoding: v24@0:8q16
// Implementation: 0x104fee8dc

// -[SCFeatureSettingsService aura_displayed_birth_info_page_version_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x104fee8ec

// -[SCFeatureSettingsService aura_displayed_birth_info_page_version_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x104fee8f4

// -[SCFeatureSettingsService displayedBirthInfoPageVersion]
// Type encoding: q16@0:8
// Implementation: 0x104fee8fc

// -[SCFeatureSettingsService hasAcceptedAutoCaptionsOnboarding]
// Type encoding: B16@0:8
// Implementation: 0x104fe38bc

// -[SCFeatureSettingsService acceptedAutoCaptionsOnboardingServerParam]
// Type encoding: @16@0:8
// Implementation: 0x104fe38c8

// -[SCFeatureSettingsService setAcceptedAutoCaptionsOnboarding:]
// Type encoding: v20@0:8B16
// Implementation: 0x104fe38d4

// -[SCFeatureSettingsService auto_captions_onboarding_prompt_accepted_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x104fe38e4

// -[SCFeatureSettingsService auto_captions_onboarding_prompt_accepted_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x104fe38ec

// -[SCFeatureSettingsService acceptedAutoCaptionsOnboarding]
// Type encoding: B16@0:8
// Implementation: 0x104fe38f4

// -[SCFeatureSettingsService isStoryViewerNotificationsSettingsAvailable]
// Type encoding: B16@0:8
// Implementation: 0x104fd2528

// -[SCFeatureSettingsService storyViewerNotificationsSettingsServerParam]
// Type encoding: @16@0:8
// Implementation: 0x104fd2534

// -[SCFeatureSettingsService setStoryViewerNotificationsSettings:]
// Type encoding: v24@0:8@16
// Implementation: 0x104fd2540

// -[SCFeatureSettingsService plus_story_viewed_notification_settings_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x104fd2550

// -[SCFeatureSettingsService plus_story_viewed_notification_settings_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x104fd2578

// -[SCFeatureSettingsService storyViewerNotificationsSettings]
// Type encoding: @16@0:8
// Implementation: 0x104fd25a0

// -[SCFeatureSettingsService hasResurrectedStreakFirstLogInTimeMs]
// Type encoding: B16@0:8
// Implementation: 0x104f8da98

// -[SCFeatureSettingsService resurrectedStreakFirstLogInTimeMsServerParam]
// Type encoding: @16@0:8
// Implementation: 0x104f8daa4

// -[SCFeatureSettingsService setResurrectedStreakFirstLogInTimeMs:]
// Type encoding: v24@0:8d16
// Implementation: 0x104f8dab0

// -[SCFeatureSettingsService FHP_STREAK_RESURRECTED_ELIGIBILITY_TIMESTAMP_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x104f8dac0

// -[SCFeatureSettingsService FHP_STREAK_RESURRECTED_ELIGIBILITY_TIMESTAMP_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x104f8dac8

// -[SCFeatureSettingsService resurrectedStreakFirstLogInTimeMs]
// Type encoding: d16@0:8
// Implementation: 0x104f8dad0

// -[SCFeatureSettingsService hasResurrectedStreakRestoreCount]
// Type encoding: B16@0:8
// Implementation: 0x104f8daf4

// -[SCFeatureSettingsService resurrectedStreakRestoreCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x104f8db00

// -[SCFeatureSettingsService setResurrectedStreakRestoreCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x104f8db0c

// -[SCFeatureSettingsService FHP_STREAK_RESURRECTED_RESTORE_USED_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x104f8db1c

// -[SCFeatureSettingsService FHP_STREAK_RESURRECTED_RESTORE_USED_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x104f8db24

// -[SCFeatureSettingsService resurrectedStreakRestoreCount]
// Type encoding: Q16@0:8
// Implementation: 0x104f8db2c

// -[SCFeatureSettingsService hasFriendshipDayRestoreCount]
// Type encoding: B16@0:8
// Implementation: 0x104f8db3c

// -[SCFeatureSettingsService friendshipDayRestoreCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x104f8db48

// -[SCFeatureSettingsService setFriendshipDayRestoreCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x104f8db54

// -[SCFeatureSettingsService FHP_STREAK_RESTORE_FRIENDSHIP_DAY_RESTORES_USED_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x104f8db64

// -[SCFeatureSettingsService FHP_STREAK_RESTORE_FRIENDSHIP_DAY_RESTORES_USED_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x104f8db6c

// -[SCFeatureSettingsService friendshipDayRestoreCount]
// Type encoding: Q16@0:8
// Implementation: 0x104f8db74

// -[SCFeatureSettingsService hasSeenSendToCreateGroupTooltip]
// Type encoding: B16@0:8
// Implementation: 0x104f48dd4

// -[SCFeatureSettingsService seenSendToCreateGroupTooltipServerParam]
// Type encoding: @16@0:8
// Implementation: 0x104f48de0

// -[SCFeatureSettingsService setSeenSendToCreateGroupTooltip:]
// Type encoding: v20@0:8B16
// Implementation: 0x104f48dec

// -[SCFeatureSettingsService sendto_create_group_tooltip_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x104f48dfc

// -[SCFeatureSettingsService sendto_create_group_tooltip_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x104f48e04

// -[SCFeatureSettingsService seenSendToCreateGroupTooltip]
// Type encoding: B16@0:8
// Implementation: 0x104f48e0c

// -[SCFeatureSettingsService hasSeenSendToGroupInviteLinkBadgeInAddToGroup]
// Type encoding: B16@0:8
// Implementation: 0x104f48e1c

// -[SCFeatureSettingsService seenSendToGroupInviteLinkBadgeInAddToGroupServerParam]
// Type encoding: @16@0:8
// Implementation: 0x104f48e28

// -[SCFeatureSettingsService setSeenSendToGroupInviteLinkBadgeInAddToGroup:]
// Type encoding: v20@0:8B16
// Implementation: 0x104f48e34

// -[SCFeatureSettingsService sendto_group_invite_link_badge_in_add_to_group_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x104f48e44

// -[SCFeatureSettingsService sendto_group_invite_link_badge_in_add_to_group_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x104f48e4c

// -[SCFeatureSettingsService seenSendToGroupInviteLinkBadgeInAddToGroup]
// Type encoding: B16@0:8
// Implementation: 0x104f48e54

// -[SCFeatureSettingsService hasSeenSendToGroupInviteLinkBadgeInNewGroup]
// Type encoding: B16@0:8
// Implementation: 0x104f48e64

// -[SCFeatureSettingsService seenSendToGroupInviteLinkBadgeInNewGroupServerParam]
// Type encoding: @16@0:8
// Implementation: 0x104f48e70

// -[SCFeatureSettingsService setSeenSendToGroupInviteLinkBadgeInNewGroup:]
// Type encoding: v20@0:8B16
// Implementation: 0x104f48e7c

// -[SCFeatureSettingsService sendto_group_invite_link_badge_in_new_group_tooltip_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x104f48e8c

// -[SCFeatureSettingsService sendto_group_invite_link_badge_in_new_group_tooltip_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x104f48e94

// -[SCFeatureSettingsService seenSendToGroupInviteLinkBadgeInNewGroup]
// Type encoding: B16@0:8
// Implementation: 0x104f48e9c

// -[SCFeatureSettingsService isAcceptedInviteContactToGroupPromptAvailable]
// Type encoding: B16@0:8
// Implementation: 0x104f328ec

// -[SCFeatureSettingsService hasAcceptedInviteContactToGroupPromptServerParam]
// Type encoding: @16@0:8
// Implementation: 0x104f328f8

// -[SCFeatureSettingsService setAcceptedInviteContactToGroupPrompt:]
// Type encoding: v20@0:8B16
// Implementation: 0x104f32904

// -[SCFeatureSettingsService SHARING_CONTACT_GROUP_INVITE_PROMPT_SEEN_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x104f32914

// -[SCFeatureSettingsService SHARING_CONTACT_GROUP_INVITE_PROMPT_SEEN_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x104f3291c

// -[SCFeatureSettingsService hasAcceptedInviteContactToGroupPrompt]
// Type encoding: B16@0:8
// Implementation: 0x104f32924

// -[SCFeatureSettingsService isFfCommunitiesShortcutImpressionCountAvailable]
// Type encoding: B16@0:8
// Implementation: 0x104e64770

// -[SCFeatureSettingsService ffCommunitiesShortcutImpressionCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x104e6477c

// -[SCFeatureSettingsService setFfCommunitiesShortcutImpressionCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x104e64788

// -[SCFeatureSettingsService FF_COMMUNITIES_SHORTCUT_IMPRESSION_COUNT_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x104e64798

// -[SCFeatureSettingsService FF_COMMUNITIES_SHORTCUT_IMPRESSION_COUNT_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x104e647a0

// -[SCFeatureSettingsService ffCommunitiesShortcutImpressionCount]
// Type encoding: q16@0:8
// Implementation: 0x104e647a8

// -[SCFeatureSettingsService hasSeenOnboardingNuxInAdCreation]
// Type encoding: B16@0:8
// Implementation: 0x104d6443c

// -[SCFeatureSettingsService seenOnboardingNuxInAdCreationServerParam]
// Type encoding: @16@0:8
// Implementation: 0x104d64448

// -[SCFeatureSettingsService setSeenOnboardingNuxInAdCreation:]
// Type encoding: v20@0:8B16
// Implementation: 0x104d64454

// -[SCFeatureSettingsService pay_to_promote_nux_seen_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x104d64464

// -[SCFeatureSettingsService pay_to_promote_nux_seen_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x104d6446c

// -[SCFeatureSettingsService seenOnboardingNuxInAdCreation]
// Type encoding: B16@0:8
// Implementation: 0x104d64474

// -[SCFeatureSettingsService hasIncentiveCampaignSnapPlusRewardClaimable]
// Type encoding: B16@0:8
// Implementation: 0x104ca42d4

// -[SCFeatureSettingsService isIncentiveCampaignSnapPlusRewardClaimableServerParam]
// Type encoding: @16@0:8
// Implementation: 0x104ca42e0

// -[SCFeatureSettingsService setIncentiveCampaignSnapPlusRewardClaimable:]
// Type encoding: v20@0:8B16
// Implementation: 0x104ca42ec

// -[SCFeatureSettingsService IS_INCENTIVE_CAMPAIGN_SNAP_PLUS_REWARD_CLAIMABLE_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x104ca42fc

// -[SCFeatureSettingsService IS_INCENTIVE_CAMPAIGN_SNAP_PLUS_REWARD_CLAIMABLE_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x104ca4304

// -[SCFeatureSettingsService isIncentiveCampaignSnapPlusRewardClaimable]
// Type encoding: B16@0:8
// Implementation: 0x104ca430c

// -[SCFeatureSettingsService hasIncentiveCampaignSnapPlusInviteDisabled]
// Type encoding: B16@0:8
// Implementation: 0x104ca429c

// -[SCFeatureSettingsService isIncentiveCampaignSnapPlusInviteDisabledServerParam]
// Type encoding: @16@0:8
// Implementation: 0x104ca42a8

// -[SCFeatureSettingsService IS_INCENTIVE_CAMPAIGN_SNAP_PLUS_INVITE_DISABLED_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x104ca42b4

// -[SCFeatureSettingsService IS_INCENTIVE_CAMPAIGN_SNAP_PLUS_INVITE_DISABLED_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x104ca42bc

// -[SCFeatureSettingsService isIncentiveCampaignSnapPlusInviteDisabled]
// Type encoding: B16@0:8
// Implementation: 0x104ca42c4

// -[SCFeatureSettingsService hasTakeoverTimestampSeconds]
// Type encoding: B16@0:8
// Implementation: 0x104ca4254

// -[SCFeatureSettingsService lastTakeoverTimestampSecondsServerParam]
// Type encoding: @16@0:8
// Implementation: 0x104ca4260

// -[SCFeatureSettingsService setLastTakeoverTimestampSeconds:]
// Type encoding: v24@0:8q16
// Implementation: 0x104ca426c

// -[SCFeatureSettingsService LAST_TAKEOVER_TIMESTAMP_SECONDS_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x104ca427c

// -[SCFeatureSettingsService LAST_TAKEOVER_TIMESTAMP_SECONDS_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x104ca4284

// -[SCFeatureSettingsService lastTakeoverTimestampSeconds]
// Type encoding: q16@0:8
// Implementation: 0x104ca428c

// -[SCFeatureSettingsService hasVerificationTakeoverTimestampSeconds]
// Type encoding: B16@0:8
// Implementation: 0x104c9c470

// -[SCFeatureSettingsService lastVerificationTakeoverTimestampSecondsServerParam]
// Type encoding: @16@0:8
// Implementation: 0x104c9c47c

// -[SCFeatureSettingsService setLastVerificationTakeoverTimestampSeconds:]
// Type encoding: v24@0:8q16
// Implementation: 0x104c9c488

// -[SCFeatureSettingsService LAST_VERIFICATION_TAKEOVER_TIMESTAMP_SECONDS_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x104c9c498

// -[SCFeatureSettingsService LAST_VERIFICATION_TAKEOVER_TIMESTAMP_SECONDS_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x104c9c4a0

// -[SCFeatureSettingsService lastVerificationTakeoverTimestampSeconds]
// Type encoding: q16@0:8
// Implementation: 0x104c9c4a8

// -[SCFeatureSettingsService hasVerificationTakeoverImpressionCount]
// Type encoding: B16@0:8
// Implementation: 0x104c9c4b8

// -[SCFeatureSettingsService verificationTakeoverImpressionCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x104c9c4c4

// -[SCFeatureSettingsService setVerificationTakeoverImpressionCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x104c9c4d0

// -[SCFeatureSettingsService VERIFICATION_TAKEOVER_IMPRESSION_COUNT_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x104c9c4e0

// -[SCFeatureSettingsService VERIFICATION_TAKEOVER_IMPRESSION_COUNT_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x104c9c4e8

// -[SCFeatureSettingsService verificationTakeoverImpressionCount]
// Type encoding: Q16@0:8
// Implementation: 0x104c9c4f0

// -[SCFeatureSettingsService isRatingInAppPromptRecordsAvailable]
// Type encoding: B16@0:8
// Implementation: 0x104c9b1b4

// -[SCFeatureSettingsService ratingInAppPromptRecordsServerParam]
// Type encoding: @16@0:8
// Implementation: 0x104c9b1c0

// -[SCFeatureSettingsService setRatingInAppPromptRecords:]
// Type encoding: v24@0:8@16
// Implementation: 0x104c9b1cc

// -[SCFeatureSettingsService rating_inapp_prompt_records_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x104c9b1dc

// -[SCFeatureSettingsService rating_inapp_prompt_records_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x104c9b204

// -[SCFeatureSettingsService ratingInAppPromptRecords]
// Type encoding: @16@0:8
// Implementation: 0x104c9b22c

// -[SCFeatureSettingsService isContactsEnableDialogLastSeenTimestampAvailable]
// Type encoding: B16@0:8
// Implementation: 0x104c986d8

// -[SCFeatureSettingsService contactsEnableDialogLastSeenTimestampServerParam]
// Type encoding: @16@0:8
// Implementation: 0x104c986e4

// -[SCFeatureSettingsService setContactsEnableDialogLastSeenTimestamp:]
// Type encoding: v24@0:8q16
// Implementation: 0x104c986f0

// -[SCFeatureSettingsService contacts_enable_dialog_last_seen_timestamp_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x104c98700

// -[SCFeatureSettingsService contacts_enable_dialog_last_seen_timestamp_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x104c98708

// -[SCFeatureSettingsService contactsEnableDialogLastSeenTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x104c98710

// -[SCFeatureSettingsService isContactsEnableDialogSeenCountAvailable]
// Type encoding: B16@0:8
// Implementation: 0x104c98720

// -[SCFeatureSettingsService contactsEnableDialogSeenCountServerParam]
// Type encoding: @16@0:8
// Implementation: 0x104c9872c

// -[SCFeatureSettingsService setContactsEnableDialogSeenCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x104c98738

// -[SCFeatureSettingsService contacts_enable_dialog_seen_count_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x104c98748

// -[SCFeatureSettingsService contacts_enable_dialog_seen_count_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x104c98750

// -[SCFeatureSettingsService contactsEnableDialogSeenCount]
// Type encoding: q16@0:8
// Implementation: 0x104c98758

// -[SCFeatureSettingsService isSuicidePreventionFlaggedAtSecsAvailable]
// Type encoding: B16@0:8
// Implementation: 0x104c76660

// -[SCFeatureSettingsService suicidePreventionFlaggedAtSecsServerParam]
// Type encoding: @16@0:8
// Implementation: 0x104c7666c

// -[SCFeatureSettingsService setSuicidePreventionFlaggedAtSecs:]
// Type encoding: v24@0:8q16
// Implementation: 0x104c76678

// -[SCFeatureSettingsService suicide_prevention_flagged_at_secs_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x104c76688

// -[SCFeatureSettingsService suicide_prevention_flagged_at_secs_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x104c76690

// -[SCFeatureSettingsService suicidePreventionFlaggedAtSecs]
// Type encoding: q16@0:8
// Implementation: 0x104c76698

// -[SCFeatureSettingsService isSuicidePreventionFirstSeenAtSecsAvailable]
// Type encoding: B16@0:8
// Implementation: 0x104c766a8

// -[SCFeatureSettingsService suicidePreventionFirstSeenAtSecsServerParam]
// Type encoding: @16@0:8
// Implementation: 0x104c766b4

// -[SCFeatureSettingsService setSuicidePreventionFirstSeenAtSecs:]
// Type encoding: v24@0:8q16
// Implementation: 0x104c766c0

// -[SCFeatureSettingsService suicide_prevention_first_seen_at_secs_client_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x104c766d0

// -[SCFeatureSettingsService suicide_prevention_first_seen_at_secs_server_value:]
// Type encoding: @24@0:8@16
// Implementation: 0x104c766d8

// -[SCFeatureSettingsService suicidePreventionFirstSeenAtSecs]
// Type encoding: q16@0:8
// Implementation: 0x104c766e0

// -[SCFeatureSettingsService customRingtoneId]
// Type encoding: Q16@0:8
// Implementation: 0x103c19d70

// -[SCFeatureSettingsService setCustomRingtoneId:]
// Type encoding: v24@0:8Q16
// Implementation: 0x103c19e98

// -[SCFeatureSettingsService performChanges:queue:completionHandler:]
// Type encoding: v40@0:8@?16@24@?32
// Implementation: 0x10b257d28

// -[SCFeatureSettingsService performChangesToServer:successQueue:failureQueue:successBlock:failureBlock:]
// Type encoding: v56@0:8@?16@24@32@?40@?48
// Implementation: 0x10b257d2c

// -[SCFeatureSettingsService observeKeys:queue:changeHandler:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x10b257d30

// -[SCFeatureSettingsService observeItemIds:queue:changeHandler:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x10b257d38

// -[SCFeatureSettingsService hasSyncedLogInResponse]
// Type encoding: B16@0:8
// Implementation: 0x10b257d40

// -[SCFeatureSettingsService valueForFeatureSetting:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b257d48

// -[SCFeatureSettingsService valueForFeatureSettingItemId:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10b257d50

// -[SCFeatureSettingsService setFeatureSetting:value:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b257d58

// -[SCFeatureSettingsService setFeatureSettingWithItemId:value:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x10b257d5c

// -[SCFeatureSettingsService setFeatureSettingWithItemId:value:queue:completionHandler:]
// Type encoding: v48@0:8Q16@24@32@?40
// Implementation: 0x10b257d60

// -[SCFeatureSettingsService setLargerValueFeatureSetting:value:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b257e44

// -[SCFeatureSettingsService setLargerValueFeatureSettingWithItemId:value:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x10b257e48

// -[SCFeatureSettingsService setLargerValueFeatureSettingWithItemId:value:queue:completionHandler:]
// Type encoding: v48@0:8Q16@24@32@?40
// Implementation: 0x10b257e4c

// -[SCFeatureSettingsService addFeatureSetting:withValue:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10b257f30

// -[SCFeatureSettingsService addFeatureSettingWithItemId:withValue:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x10b257f34

// -[SCFeatureSettingsService addFeatureSettingWithItemId:withValue:queue:completionHandler:]
// Type encoding: v48@0:8Q16Q24@32@?40
// Implementation: 0x10b257f38

// -[SCFeatureSettingsService observeLoginComplete]
// Type encoding: @16@0:8
// Implementation: 0x10b258000

// +[SCFeatureSettingsService dataSaverEnabledWithTravelModeEnabled:dataSaverExpirationMillis:]
// Type encoding: B28@0:8B16q20
// Implementation: 0x10036aa34

@end
