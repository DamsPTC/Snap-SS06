// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKModelManager
// Superclass: NSObject
// Address: 0x1129e6dd8

@interface FBSDKModelManager

// Property: featureChecker; attributes: T@"<FBSDKFeatureChecking>",&,N,V_featureChecker
// Property: graphRequestFactory; attributes: T@"<FBSDKGraphRequestFactory>",&,N,V_graphRequestFactory
// Property: fileManager; attributes: T@"<FBSDKFileManaging>",&,N,V_fileManager
// Property: store; attributes: T@"<FBSDKDataPersisting>",&,N,V_store
// Property: getAppID; attributes: T@?,C,N,V_getAppID
// Property: dataExtractor; attributes: T#,&,N,V_dataExtractor
// Property: gateKeeperManager; attributes: T#,&,N,V_gateKeeperManager
// Property: suggestedEventsIndexer; attributes: T@"<FBSDKSuggestedEventsIndexer>",&,N,V_suggestedEventsIndexer
// Property: featureExtractor; attributes: T#,&,N,V_featureExtractor
// Property: integrityParametersProcessor; attributes: T@"<FBSDKAppEventsParameterProcessing>",&,N,V_integrityParametersProcessor

// -[FBSDKModelManager configureWithFeatureChecker:graphRequestFactory:fileManager:store:getAppID:dataExtractor:gateKeeperManager:suggestedEventsIndexer:featureExtractor:]
// Type encoding: v88@0:8@16@24@32@40@?48#56#64@72#80
// Implementation: 0x10497303c

// -[FBSDKModelManager enable]
// Type encoding: v16@0:8
// Implementation: 0x1049731dc

// -[FBSDKModelManager getRulesForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x1049738b4

// -[FBSDKModelManager getWeightsForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x104973b28

// -[FBSDKModelManager getThresholdsForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x104973d2c

// -[FBSDKModelManager processIntegrity:]
// Type encoding: B24@0:8@16
// Implementation: 0x104973de0

// -[FBSDKModelManager processSuggestedEvents:denseData:]
// Type encoding: @32@0:8@16^f24
// Implementation: 0x10497559c

// -[FBSDKModelManager checkFeaturesAndExecuteForMTML]
// Type encoding: v16@0:8
// Implementation: 0x104975d20

// -[FBSDKModelManager getModelAndRules:onSuccess:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104976070

// -[FBSDKModelManager clearCacheForModel:suffix:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104976584

// -[FBSDKModelManager download:filePath:queue:group:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x104976860

// -[FBSDKModelManager integrityParametersProcessor]
// Type encoding: @16@0:8
// Implementation: 0x10497706c

// -[FBSDKModelManager setIntegrityParametersProcessor:]
// Type encoding: v24@0:8@16
// Implementation: 0x104977074

// -[FBSDKModelManager featureChecker]
// Type encoding: @16@0:8
// Implementation: 0x104977080

// -[FBSDKModelManager setFeatureChecker:]
// Type encoding: v24@0:8@16
// Implementation: 0x104977088

// -[FBSDKModelManager graphRequestFactory]
// Type encoding: @16@0:8
// Implementation: 0x104977094

// -[FBSDKModelManager setGraphRequestFactory:]
// Type encoding: v24@0:8@16
// Implementation: 0x10497709c

// -[FBSDKModelManager fileManager]
// Type encoding: @16@0:8
// Implementation: 0x1049770a8

// -[FBSDKModelManager setFileManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049770b0

// -[FBSDKModelManager store]
// Type encoding: @16@0:8
// Implementation: 0x1049770bc

// -[FBSDKModelManager setStore:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049770c4

// -[FBSDKModelManager getAppID]
// Type encoding: @?16@0:8
// Implementation: 0x1049770d0

// -[FBSDKModelManager setGetAppID:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1049770d8

// -[FBSDKModelManager dataExtractor]
// Type encoding: #16@0:8
// Implementation: 0x1049770e0

// -[FBSDKModelManager setDataExtractor:]
// Type encoding: v24@0:8#16
// Implementation: 0x1049770e8

// -[FBSDKModelManager gateKeeperManager]
// Type encoding: #16@0:8
// Implementation: 0x1049770f4

// -[FBSDKModelManager setGateKeeperManager:]
// Type encoding: v24@0:8#16
// Implementation: 0x1049770fc

// -[FBSDKModelManager suggestedEventsIndexer]
// Type encoding: @16@0:8
// Implementation: 0x104977108

// -[FBSDKModelManager setSuggestedEventsIndexer:]
// Type encoding: v24@0:8@16
// Implementation: 0x104977110

// -[FBSDKModelManager featureExtractor]
// Type encoding: #16@0:8
// Implementation: 0x10497711c

// -[FBSDKModelManager setFeatureExtractor:]
// Type encoding: v24@0:8#16
// Implementation: 0x104977124

// -[FBSDKModelManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104977130

// +[FBSDKModelManager shared]
// Type encoding: @16@0:8
// Implementation: 0x104972fa0

// +[FBSDKModelManager isValidTimestamp:]
// Type encoding: B24@0:8@16
// Implementation: 0x1049758cc

// +[FBSDKModelManager processMTML]
// Type encoding: v16@0:8
// Implementation: 0x10497596c

// +[FBSDKModelManager convertToDictionary:]
// Type encoding: @24@0:8@16
// Implementation: 0x104976a64

// +[FBSDKModelManager isPlistFormatDictionary:]
// Type encoding: B24@0:8@16
// Implementation: 0x104976d44

// +[FBSDKModelManager getIntegrityMapping]
// Type encoding: @16@0:8
// Implementation: 0x104976f48

// +[FBSDKModelManager getSuggestedEventsMapping]
// Type encoding: @16@0:8
// Implementation: 0x104976fc8

@end
