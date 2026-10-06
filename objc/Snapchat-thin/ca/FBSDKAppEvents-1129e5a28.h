// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKAppEvents
// Superclass: NSObject
// Address: 0x1129e5a28

@interface FBSDKAppEvents

// Property: applicationState; attributes: Tq,N,V_applicationState
// Property: pushNotificationsDeviceTokenString; attributes: T@"NSString",C,N,V_pushNotificationsDeviceTokenString
// Property: flushTimer; attributes: T@"NSObject<OS_dispatch_source>",&,N,V_flushTimer
// Property: isConfigured; attributes: TB,N,V_isConfigured
// Property: serverConfiguration; attributes: T@"FBSDKServerConfiguration",&,N,V_serverConfiguration
// Property: appEventsState; attributes: T@"FBSDKAppEventsState",&,N,V_appEventsState
// Property: _isUnityInitialized; attributes: TB,N,V__isUnityInitialized
// Property: gateKeeperManager; attributes: T#,&,N,V_gateKeeperManager
// Property: appEventsConfigurationProvider; attributes: T@"<FBSDKAppEventsConfigurationProviding>",&,N,V_appEventsConfigurationProvider
// Property: serverConfigurationProvider; attributes: T@"<FBSDKServerConfigurationProviding>",&,N,V_serverConfigurationProvider
// Property: graphRequestFactory; attributes: T@"<FBSDKGraphRequestFactory>",&,N,V_graphRequestFactory
// Property: featureChecker; attributes: T@"<FBSDKFeatureChecking>",&,N,V_featureChecker
// Property: primaryDataStore; attributes: T@"<FBSDKDataPersisting>",&,N,V_primaryDataStore
// Property: logger; attributes: T#,&,N,V_logger
// Property: settings; attributes: T@"<FBSDKSettings>",&,N,V_settings
// Property: paymentObserver; attributes: T@"<FBSDKPaymentObserving>",&,N,V_paymentObserver
// Property: timeSpentRecorder; attributes: T@"<FBSDKSourceApplicationTracking><FBSDKTimeSpentRecording>",&,N,V_timeSpentRecorder
// Property: appEventsStateStore; attributes: T@"<FBSDKAppEventsStatePersisting>",&,N,V_appEventsStateStore
// Property: eventDeactivationParameterProcessor; attributes: T@"<FBSDKAppEventsParameterProcessing><FBSDKEventsProcessing>",&,N,V_eventDeactivationParameterProcessor
// Property: restrictiveDataFilterParameterProcessor; attributes: T@"<FBSDKAppEventsParameterProcessing><FBSDKEventsProcessing>",&,N,V_restrictiveDataFilterParameterProcessor
// Property: protectedModeManager; attributes: T@"<FBSDKAppEventsParameterProcessing>",&,N,V_protectedModeManager
// Property: macaRuleMatchingManager; attributes: T@"<FBSDKMACARuleMatching>",&,N,V_macaRuleMatchingManager
// Property: blocklistEventsManager; attributes: T@"<FBSDKEventsProcessing>",&,N,V_blocklistEventsManager
// Property: redactedEventsManager; attributes: T@"<FBSDKEventsProcessing>",&,N,V_redactedEventsManager
// Property: sensitiveParamsManager; attributes: T@"<FBSDKAppEventsParameterProcessing>",&,N,V_sensitiveParamsManager
// Property: atePublisherFactory; attributes: T@"<FBSDKATEPublisherCreating>",&,N,V_atePublisherFactory
// Property: atePublisher; attributes: T@"<FBSDKATEPublishing>",&,N,V_atePublisher
// Property: appEventsStateProvider; attributes: T@"<FBSDKAppEventsStateProviding>",&,N,V_appEventsStateProvider
// Property: advertiserIDProvider; attributes: T@"<FBSDKAdvertiserIDProviding>",&,N,V_advertiserIDProvider
// Property: userDataStore; attributes: T@"<FBSDKUserDataPersisting>",&,N,V_userDataStore
// Property: appEventsUtility; attributes: T@"<FBSDKAppEventDropDetermining><FBSDKAppEventParametersExtracting><FBSDKAppEventsUtility><FBSDKLoggingNotifying>",&,N,V_appEventsUtility
// Property: internalUtility; attributes: T@"<FBSDKInternalUtility>",&,N,V_internalUtility
// Property: capiReporter; attributes: T@"<FBSDKCAPIReporter>",&,N,V_capiReporter
// Property: onDeviceMLModelManager; attributes: T@"<FBSDKEventProcessing><FBSDKIntegrityParametersProcessorProvider>",&,N,V_onDeviceMLModelManager
// Property: metadataIndexer; attributes: T@"<FBSDKMetadataIndexing>",&,N,V_metadataIndexer
// Property: skAdNetworkReporter; attributes: T@"<FBSDKAppEventsReporter>",&,N,V_skAdNetworkReporter
// Property: skAdNetworkReporterV2; attributes: T@"<FBSDKAppEventsReporter>",&,N,V_skAdNetworkReporterV2
// Property: codelessIndexer; attributes: T#,&,N,V_codelessIndexer
// Property: swizzler; attributes: T#,&,N,V_swizzler
// Property: eventBindingManager; attributes: T@"FBSDKEventBindingManager",&,N,V_eventBindingManager
// Property: aemReporter; attributes: T#,&,N,V_aemReporter
// Property: flushBehavior; attributes: TQ,N,V_flushBehavior
// Property: loggingOverrideAppID; attributes: T@"NSString",C,N
// Property: userID; attributes: T@"NSString",C,N
// Property: anonymousID; attributes: T@"NSString",R,N

// -[FBSDKAppEvents init]
// Type encoding: @16@0:8
// Implementation: 0x104940d80

// -[FBSDKAppEvents initWithFlushBehavior:flushPeriodInSeconds:]
// Type encoding: @28@0:8Q16i24
// Implementation: 0x104940d8c

// -[FBSDKAppEvents startObservingApplicationLifecycleNotifications]
// Type encoding: v16@0:8
// Implementation: 0x104940ee0

// -[FBSDKAppEvents dealloc]
// Type encoding: v16@0:8
// Implementation: 0x104940fb8

// -[FBSDKAppEvents logEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10494102c

// -[FBSDKAppEvents logEvent:valueToSum:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x10494103c

// -[FBSDKAppEvents logEvent:parameters:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10494104c

// -[FBSDKAppEvents logEvent:valueToSum:parameters:]
// Type encoding: v40@0:8@16d24@32
// Implementation: 0x10494105c

// -[FBSDKAppEvents logEvent:valueToSum:parameters:accessToken:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1049410f4

// -[FBSDKAppEvents logPurchase:currency:]
// Type encoding: v32@0:8d16@24
// Implementation: 0x1049411c4

// -[FBSDKAppEvents logPurchase:currency:parameters:]
// Type encoding: v40@0:8d16@24@32
// Implementation: 0x1049411d4

// -[FBSDKAppEvents logPurchase:currency:parameters:accessToken:]
// Type encoding: v48@0:8d16@24@32@40
// Implementation: 0x1049411dc

// -[FBSDKAppEvents logPushNotificationOpen:]
// Type encoding: v24@0:8@16
// Implementation: 0x104941374

// -[FBSDKAppEvents logPushNotificationOpen:action:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104941380

// -[FBSDKAppEvents logProductItem:availability:condition:description:imageLink:link:title:priceAmount:currency:gtin:mpn:brand:parameters:]
// Type encoding: v120@0:8@16Q24Q32@40@48@56@64d72@80@88@96@104@112
// Implementation: 0x104941520

// -[FBSDKAppEvents activateApp]
// Type encoding: v16@0:8
// Implementation: 0x104941a0c

// -[FBSDKAppEvents setPushNotificationsDeviceToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x104941ad4

// -[FBSDKAppEvents setPushNotificationsDeviceTokenString:]
// Type encoding: v24@0:8@16
// Implementation: 0x104941b58

// -[FBSDKAppEvents loggingOverrideAppID]
// Type encoding: @16@0:8
// Implementation: 0x104941c40

// -[FBSDKAppEvents setLoggingOverrideAppID:]
// Type encoding: v24@0:8@16
// Implementation: 0x104941c4c

// -[FBSDKAppEvents flush]
// Type encoding: v16@0:8
// Implementation: 0x104941ce0

// -[FBSDKAppEvents userID]
// Type encoding: @16@0:8
// Implementation: 0x104941d08

// -[FBSDKAppEvents setUserID:]
// Type encoding: v24@0:8@16
// Implementation: 0x104941d30

// -[FBSDKAppEvents setUserEmail:firstName:lastName:phone:dateOfBirth:gender:city:state:zip:country:]
// Type encoding: v96@0:8@16@24@32@40@48@56@64@72@80@88
// Implementation: 0x104941da8

// -[FBSDKAppEvents getUserData]
// Type encoding: @16@0:8
// Implementation: 0x104941f28

// -[FBSDKAppEvents clearUserData]
// Type encoding: v16@0:8
// Implementation: 0x104941f6c

// -[FBSDKAppEvents setUserData:forType:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104941f9c

// -[FBSDKAppEvents clearUserDataForType:]
// Type encoding: v24@0:8@16
// Implementation: 0x104942010

// -[FBSDKAppEvents anonymousID]
// Type encoding: @16@0:8
// Implementation: 0x104942060

// -[FBSDKAppEvents augmentHybridWebView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10494206c

// -[FBSDKAppEvents setIsUnityInitialized:]
// Type encoding: v20@0:8B16
// Implementation: 0x104942260

// -[FBSDKAppEvents sendEventBindingsToUnity]
// Type encoding: v16@0:8
// Implementation: 0x104942264

// -[FBSDKAppEvents configureWithGateKeeperManager:appEventsConfigurationProvider:serverConfigurationProvider:graphRequestFactory:featureChecker:primaryDataStore:logger:settings:paymentObserver:timeSpentRecorder:appEventsStateStore:eventDeactivationParameterProcessor:restrictiveDataFilterParameterProcessor:atePublisherFactory:appEventsStateProvider:advertiserIDProvider:userDataStore:appEventsUtility:internalUtility:capiReporter:protectedModeManager:macaRuleMatchingManager:blocklistEventsManager:redactedEventsManager:sensitiveParamsManager:]
// Type encoding: v216@0:8#16@24@32@40@48@56#64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208
// Implementation: 0x1049423f4

// -[FBSDKAppEvents configureNonTVComponentsWithOnDeviceMLModelManager:metadataIndexer:skAdNetworkReporter:skAdNetworkReporterV2:codelessIndexer:swizzler:aemReporter:]
// Type encoding: v72@0:8@16@24@32@40#48#56#64
// Implementation: 0x10494285c

// -[FBSDKAppEvents logInternalEvent:isImplicitlyLogged:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x104942934

// -[FBSDKAppEvents logInternalEvent:valueToSum:isImplicitlyLogged:]
// Type encoding: v36@0:8@16d24B32
// Implementation: 0x104942948

// -[FBSDKAppEvents logInternalEvent:parameters:isImplicitlyLogged:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x10494295c

// -[FBSDKAppEvents logInternalEvent:parameters:isImplicitlyLogged:accessToken:]
// Type encoding: v44@0:8@16@24B32@36
// Implementation: 0x104942970

// -[FBSDKAppEvents logInternalEvent:valueToSum:parameters:isImplicitlyLogged:]
// Type encoding: v44@0:8@16d24@32B40
// Implementation: 0x104942984

// -[FBSDKAppEvents logInternalEvent:valueToSum:parameters:isImplicitlyLogged:accessToken:]
// Type encoding: v52@0:8@16@24@32B40@44
// Implementation: 0x104942a2c

// -[FBSDKAppEvents logImplicitEvent:valueToSum:parameters:accessToken:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x104942b00

// -[FBSDKAppEvents flushForReason:]
// Type encoding: v24@0:8Q16
// Implementation: 0x104942ba8

// -[FBSDKAppEvents setSourceApplication:openURL:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104942d60

// -[FBSDKAppEvents setSourceApplication:isFromAppLink:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x104942dd4

// -[FBSDKAppEvents registerAutoResetSourceApplication]
// Type encoding: v16@0:8
// Implementation: 0x104942e34

// -[FBSDKAppEvents appID]
// Type encoding: @16@0:8
// Implementation: 0x104942e64

// -[FBSDKAppEvents publishInstall]
// Type encoding: v16@0:8
// Implementation: 0x104942ee4

// -[FBSDKAppEvents publishATE]
// Type encoding: v16@0:8
// Implementation: 0x1049433f0

// -[FBSDKAppEvents appendInstallTimestamp:]
// Type encoding: v24@0:8@16
// Implementation: 0x10494359c

// -[FBSDKAppEvents enableCodelessEvents]
// Type encoding: v16@0:8
// Implementation: 0x1049436c4

// -[FBSDKAppEvents fetchServerConfiguration:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104943888

// -[FBSDKAppEvents logEvent:valueToSum:parameters:isImplicitlyLogged:accessToken:]
// Type encoding: v52@0:8@16@24@32B40@44
// Implementation: 0x1049444b0

// -[FBSDKAppEvents checkPersistedEvents]
// Type encoding: v16@0:8
// Implementation: 0x10494536c

// -[FBSDKAppEvents flushOnMainQueue:forReason:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1049456f8

// -[FBSDKAppEvents handleActivitiesPostCompletion:loggingEntry:appEventsState:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104945e6c

// -[FBSDKAppEvents flushTimerFired:]
// Type encoding: v24@0:8@16
// Implementation: 0x10494619c

// -[FBSDKAppEvents applicationDidBecomeActive]
// Type encoding: v16@0:8
// Implementation: 0x104946250

// -[FBSDKAppEvents applicationMovingFromActiveState]
// Type encoding: v16@0:8
// Implementation: 0x104946310

// -[FBSDKAppEvents applicationTerminating]
// Type encoding: v16@0:8
// Implementation: 0x1049463dc

// -[FBSDKAppEvents validateConfiguration]
// Type encoding: v16@0:8
// Implementation: 0x1049464e0

// -[FBSDKAppEvents requestForCustomAudienceThirdPartyIDWithAccessToken:]
// Type encoding: @24@0:8@16
// Implementation: 0x1049464e4

// -[FBSDKAppEvents flushBehavior]
// Type encoding: Q16@0:8
// Implementation: 0x104946834

// -[FBSDKAppEvents setFlushBehavior:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10494683c

// -[FBSDKAppEvents applicationState]
// Type encoding: q16@0:8
// Implementation: 0x104946844

// -[FBSDKAppEvents setApplicationState:]
// Type encoding: v24@0:8q16
// Implementation: 0x10494684c

// -[FBSDKAppEvents pushNotificationsDeviceTokenString]
// Type encoding: @16@0:8
// Implementation: 0x104946854

// -[FBSDKAppEvents flushTimer]
// Type encoding: @16@0:8
// Implementation: 0x10494685c

// -[FBSDKAppEvents setFlushTimer:]
// Type encoding: v24@0:8@16
// Implementation: 0x104946864

// -[FBSDKAppEvents isConfigured]
// Type encoding: B16@0:8
// Implementation: 0x104946870

// -[FBSDKAppEvents setIsConfigured:]
// Type encoding: v20@0:8B16
// Implementation: 0x104946878

// -[FBSDKAppEvents serverConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x104946880

// -[FBSDKAppEvents setServerConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x104946888

// -[FBSDKAppEvents appEventsState]
// Type encoding: @16@0:8
// Implementation: 0x104946894

// -[FBSDKAppEvents setAppEventsState:]
// Type encoding: v24@0:8@16
// Implementation: 0x10494689c

// -[FBSDKAppEvents _isUnityInitialized]
// Type encoding: B16@0:8
// Implementation: 0x1049468a8

// -[FBSDKAppEvents set_isUnityInitialized:]
// Type encoding: v20@0:8B16
// Implementation: 0x1049468b0

// -[FBSDKAppEvents gateKeeperManager]
// Type encoding: #16@0:8
// Implementation: 0x1049468b8

// -[FBSDKAppEvents setGateKeeperManager:]
// Type encoding: v24@0:8#16
// Implementation: 0x1049468c0

// -[FBSDKAppEvents appEventsConfigurationProvider]
// Type encoding: @16@0:8
// Implementation: 0x1049468cc

// -[FBSDKAppEvents setAppEventsConfigurationProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049468d4

// -[FBSDKAppEvents serverConfigurationProvider]
// Type encoding: @16@0:8
// Implementation: 0x1049468e0

// -[FBSDKAppEvents setServerConfigurationProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049468e8

// -[FBSDKAppEvents graphRequestFactory]
// Type encoding: @16@0:8
// Implementation: 0x1049468f4

// -[FBSDKAppEvents setGraphRequestFactory:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049468fc

// -[FBSDKAppEvents featureChecker]
// Type encoding: @16@0:8
// Implementation: 0x104946908

// -[FBSDKAppEvents setFeatureChecker:]
// Type encoding: v24@0:8@16
// Implementation: 0x104946910

// -[FBSDKAppEvents primaryDataStore]
// Type encoding: @16@0:8
// Implementation: 0x10494691c

// -[FBSDKAppEvents setPrimaryDataStore:]
// Type encoding: v24@0:8@16
// Implementation: 0x104946924

// -[FBSDKAppEvents logger]
// Type encoding: #16@0:8
// Implementation: 0x104946930

// -[FBSDKAppEvents setLogger:]
// Type encoding: v24@0:8#16
// Implementation: 0x104946938

// -[FBSDKAppEvents settings]
// Type encoding: @16@0:8
// Implementation: 0x104946944

// -[FBSDKAppEvents setSettings:]
// Type encoding: v24@0:8@16
// Implementation: 0x10494694c

// -[FBSDKAppEvents paymentObserver]
// Type encoding: @16@0:8
// Implementation: 0x104946958

// -[FBSDKAppEvents setPaymentObserver:]
// Type encoding: v24@0:8@16
// Implementation: 0x104946960

// -[FBSDKAppEvents timeSpentRecorder]
// Type encoding: @16@0:8
// Implementation: 0x10494696c

// -[FBSDKAppEvents setTimeSpentRecorder:]
// Type encoding: v24@0:8@16
// Implementation: 0x104946974

// -[FBSDKAppEvents appEventsStateStore]
// Type encoding: @16@0:8
// Implementation: 0x104946980

// -[FBSDKAppEvents setAppEventsStateStore:]
// Type encoding: v24@0:8@16
// Implementation: 0x104946988

// -[FBSDKAppEvents eventDeactivationParameterProcessor]
// Type encoding: @16@0:8
// Implementation: 0x104946994

// -[FBSDKAppEvents setEventDeactivationParameterProcessor:]
// Type encoding: v24@0:8@16
// Implementation: 0x10494699c

// -[FBSDKAppEvents restrictiveDataFilterParameterProcessor]
// Type encoding: @16@0:8
// Implementation: 0x1049469a8

// -[FBSDKAppEvents setRestrictiveDataFilterParameterProcessor:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049469b0

// -[FBSDKAppEvents protectedModeManager]
// Type encoding: @16@0:8
// Implementation: 0x1049469bc

// -[FBSDKAppEvents setProtectedModeManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049469c4

// -[FBSDKAppEvents macaRuleMatchingManager]
// Type encoding: @16@0:8
// Implementation: 0x1049469d0

// -[FBSDKAppEvents setMacaRuleMatchingManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049469d8

// -[FBSDKAppEvents blocklistEventsManager]
// Type encoding: @16@0:8
// Implementation: 0x1049469e4

// -[FBSDKAppEvents setBlocklistEventsManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049469ec

// -[FBSDKAppEvents redactedEventsManager]
// Type encoding: @16@0:8
// Implementation: 0x1049469f8

// -[FBSDKAppEvents setRedactedEventsManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x104946a00

// -[FBSDKAppEvents sensitiveParamsManager]
// Type encoding: @16@0:8
// Implementation: 0x104946a0c

// -[FBSDKAppEvents setSensitiveParamsManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x104946a14

// -[FBSDKAppEvents atePublisherFactory]
// Type encoding: @16@0:8
// Implementation: 0x104946a20

// -[FBSDKAppEvents setAtePublisherFactory:]
// Type encoding: v24@0:8@16
// Implementation: 0x104946a28

// -[FBSDKAppEvents atePublisher]
// Type encoding: @16@0:8
// Implementation: 0x104946a34

// -[FBSDKAppEvents setAtePublisher:]
// Type encoding: v24@0:8@16
// Implementation: 0x104946a3c

// -[FBSDKAppEvents appEventsStateProvider]
// Type encoding: @16@0:8
// Implementation: 0x104946a48

// -[FBSDKAppEvents setAppEventsStateProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x104946a50

// -[FBSDKAppEvents advertiserIDProvider]
// Type encoding: @16@0:8
// Implementation: 0x104946a5c

// -[FBSDKAppEvents setAdvertiserIDProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x104946a64

// -[FBSDKAppEvents userDataStore]
// Type encoding: @16@0:8
// Implementation: 0x104946a70

// -[FBSDKAppEvents setUserDataStore:]
// Type encoding: v24@0:8@16
// Implementation: 0x104946a78

// -[FBSDKAppEvents appEventsUtility]
// Type encoding: @16@0:8
// Implementation: 0x104946a84

// -[FBSDKAppEvents setAppEventsUtility:]
// Type encoding: v24@0:8@16
// Implementation: 0x104946a8c

// -[FBSDKAppEvents internalUtility]
// Type encoding: @16@0:8
// Implementation: 0x104946a98

// -[FBSDKAppEvents setInternalUtility:]
// Type encoding: v24@0:8@16
// Implementation: 0x104946aa0

// -[FBSDKAppEvents capiReporter]
// Type encoding: @16@0:8
// Implementation: 0x104946aac

// -[FBSDKAppEvents setCapiReporter:]
// Type encoding: v24@0:8@16
// Implementation: 0x104946ab4

// -[FBSDKAppEvents onDeviceMLModelManager]
// Type encoding: @16@0:8
// Implementation: 0x104946ac0

// -[FBSDKAppEvents setOnDeviceMLModelManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x104946ac8

// -[FBSDKAppEvents metadataIndexer]
// Type encoding: @16@0:8
// Implementation: 0x104946ad4

// -[FBSDKAppEvents setMetadataIndexer:]
// Type encoding: v24@0:8@16
// Implementation: 0x104946adc

// -[FBSDKAppEvents skAdNetworkReporter]
// Type encoding: @16@0:8
// Implementation: 0x104946ae8

// -[FBSDKAppEvents setSkAdNetworkReporter:]
// Type encoding: v24@0:8@16
// Implementation: 0x104946af0

// -[FBSDKAppEvents skAdNetworkReporterV2]
// Type encoding: @16@0:8
// Implementation: 0x104946afc

// -[FBSDKAppEvents setSkAdNetworkReporterV2:]
// Type encoding: v24@0:8@16
// Implementation: 0x104946b04

// -[FBSDKAppEvents codelessIndexer]
// Type encoding: #16@0:8
// Implementation: 0x104946b10

// -[FBSDKAppEvents setCodelessIndexer:]
// Type encoding: v24@0:8#16
// Implementation: 0x104946b18

// -[FBSDKAppEvents swizzler]
// Type encoding: #16@0:8
// Implementation: 0x104946b24

// -[FBSDKAppEvents setSwizzler:]
// Type encoding: v24@0:8#16
// Implementation: 0x104946b2c

// -[FBSDKAppEvents eventBindingManager]
// Type encoding: @16@0:8
// Implementation: 0x104946b38

// -[FBSDKAppEvents setEventBindingManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x104946b40

// -[FBSDKAppEvents aemReporter]
// Type encoding: #16@0:8
// Implementation: 0x104946b4c

// -[FBSDKAppEvents setAemReporter:]
// Type encoding: v24@0:8#16
// Implementation: 0x104946b54

// -[FBSDKAppEvents .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104946b60

// +[FBSDKAppEvents initialize]
// Type encoding: v16@0:8
// Implementation: 0x104940ca0

// +[FBSDKAppEvents shared]
// Type encoding: @16@0:8
// Implementation: 0x104942b0c

@end
