// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesScreenshopTabServices
// Superclass: NSObject
// Address: 0x112b34998

@interface SCMemoriesScreenshopTabServices

// Property: dataSource; attributes: T@"<SCMemoriesScreenshopDataSource>",R,N,V_dataSource
// Property: commerceEventLogger; attributes: T@"<SCCommerceEventLogger>",R,N,V_commerceEventLogger
// Property: composerBlizzardLogger; attributes: T@"<SCCBlizzardLogging>",R,N,V_composerBlizzardLogger
// Property: commerceTooltips; attributes: T@"SCCommerceTooltips",R,N,V_commerceTooltips
// Property: shoppableScreenshotsAssetObervable; attributes: T@"SCObservable",R,N,V_shoppableScreenshotsAssetObervable
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesScreenshopTabServices initWithUserTrackedLogger:composerCameraRollProvider:featureSettingsService:grapheneRegistry:configProvider:userPreferences:composerBlizzardLogger:screenshopComposerScopeExposer:webBrowsingScopeExposer:dataSource:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72@80@88
// Implementation: 0x106cf64a4

// -[SCMemoriesScreenshopTabServices setUpActionHandlerWithUIContainer:workFlowDelegate:screenshopTabStatusObservable:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106cf68cc

// -[SCMemoriesScreenshopTabServices dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106cf698c

// -[SCMemoriesScreenshopTabServices initializeActionHandler]
// Type encoding: v16@0:8
// Implementation: 0x106cf69dc

// -[SCMemoriesScreenshopTabServices getCommerceOnboardingShownCount]
// Type encoding: q16@0:8
// Implementation: 0x106cf6b30

// -[SCMemoriesScreenshopTabServices screenshopAdsDataPermissionEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106cf6b38

// -[SCMemoriesScreenshopTabServices screenshopEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106cf6b40

// -[SCMemoriesScreenshopTabServices screenshotTappedWithCameraRollItem:thumbnailCell:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106cf6b48

// -[SCMemoriesScreenshopTabServices shoppableScreenshotTappedWithCameraRollItem:thumbnailCell:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106cf6ca0

// -[SCMemoriesScreenshopTabServices shoppingPermissionButtonTapped]
// Type encoding: v16@0:8
// Implementation: 0x106cf6d28

// -[SCMemoriesScreenshopTabServices shoppingLearnMoreButtonTapped]
// Type encoding: v16@0:8
// Implementation: 0x106cf6d50

// -[SCMemoriesScreenshopTabServices shoppingGetStartedButtonTapped]
// Type encoding: v16@0:8
// Implementation: 0x106cf6ef4

// -[SCMemoriesScreenshopTabServices shoppableSeeMoreButtonTapped]
// Type encoding: v16@0:8
// Implementation: 0x106cf6f1c

// -[SCMemoriesScreenshopTabServices newUserAdsPermissionTryItNowButtonTapped]
// Type encoding: v16@0:8
// Implementation: 0x106cf6f28

// -[SCMemoriesScreenshopTabServices newUserAdsPermissionGreatButtonTapped]
// Type encoding: v16@0:8
// Implementation: 0x106cf6f2c

// -[SCMemoriesScreenshopTabServices newUseGrantAdsPermission]
// Type encoding: v16@0:8
// Implementation: 0x106cf6f30

// -[SCMemoriesScreenshopTabServices existingUserGrantAdsPermission]
// Type encoding: v16@0:8
// Implementation: 0x106cf6f5c

// -[SCMemoriesScreenshopTabServices shoppableCategoryTappedWithCameraRollItem:category:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106cf6f64

// -[SCMemoriesScreenshopTabServices _makeComposerCameraRollLibraryWithProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x106cf7010

// -[SCMemoriesScreenshopTabServices _lazyLaunchScreenshopCatalogForAssetId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106cf70a0

// -[SCMemoriesScreenshopTabServices _lazyLaunchScreenshopCatelogForAssetId:forCategory:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106cf7130

// -[SCMemoriesScreenshopTabServices _openCatalogWithEntryType:categoryName:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106cf71e0

// -[SCMemoriesScreenshopTabServices _handleCatalogClose]
// Type encoding: v16@0:8
// Implementation: 0x106cf724c

// -[SCMemoriesScreenshopTabServices _logScreenshopPermissionGranted]
// Type encoding: v16@0:8
// Implementation: 0x106cf7298

// -[SCMemoriesScreenshopTabServices _logSeeMoreButtonTapped]
// Type encoding: v16@0:8
// Implementation: 0x106cf72f4

// -[SCMemoriesScreenshopTabServices _handleScreenshotsTabDidChangeFocus:]
// Type encoding: v20@0:8B16
// Implementation: 0x106cf7348

// -[SCMemoriesScreenshopTabServices _handleMemoriesTabStatusType:]
// Type encoding: v24@0:8q16
// Implementation: 0x106cf73a4

// -[SCMemoriesScreenshopTabServices _handleGalleryViewWillDisappear]
// Type encoding: v16@0:8
// Implementation: 0x106cf742c

// -[SCMemoriesScreenshopTabServices _observeAppStateChanges]
// Type encoding: v16@0:8
// Implementation: 0x106cf7430

// -[SCMemoriesScreenshopTabServices _willEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x106cf74cc

// -[SCMemoriesScreenshopTabServices _didEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x106cf74e4

// -[SCMemoriesScreenshopTabServices _oberveDataSourceChanges]
// Type encoding: v16@0:8
// Implementation: 0x106cf74fc

// -[SCMemoriesScreenshopTabServices screenshopPageShouldDismiss]
// Type encoding: v16@0:8
// Implementation: 0x106cf7638

// -[SCMemoriesScreenshopTabServices webBrowserDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x106cf763c

// -[SCMemoriesScreenshopTabServices shouldRetainInstanceWhenMarshalling]
// Type encoding: B16@0:8
// Implementation: 0x106cf7684

// -[SCMemoriesScreenshopTabServices pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x106cf768c

// -[SCMemoriesScreenshopTabServices commerceTooltips]
// Type encoding: @16@0:8
// Implementation: 0x106cf7698

// -[SCMemoriesScreenshopTabServices composerBlizzardLogger]
// Type encoding: @16@0:8
// Implementation: 0x106cf76a0

// -[SCMemoriesScreenshopTabServices commerceEventLogger]
// Type encoding: @16@0:8
// Implementation: 0x106cf76a8

// -[SCMemoriesScreenshopTabServices shoppableScreenshotsAssetObervable]
// Type encoding: @16@0:8
// Implementation: 0x106cf76b0

// -[SCMemoriesScreenshopTabServices dataSource]
// Type encoding: @16@0:8
// Implementation: 0x106cf76b8

// -[SCMemoriesScreenshopTabServices .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106cf76c0

@end
