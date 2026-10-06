// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKModelParser
// Superclass: NSObject
// Address: 0x1129e6e50

@interface FBSDKModelParser


// +[FBSDKModelParser parseWeightsData:]
// Type encoding: {unordered_map<std::string, fbsdk::MTensor, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, fbsdk::MTensor>>>={__hash_table<std::__hash_value_type<std::string, fbsdk::MTensor>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, fbsdk::MTensor>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, fbsdk::MTensor>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, fbsdk::MTensor>>>={unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, fbsdk::MTensor>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, fbsdk::MTensor>, void *> *> *>>>=^^v{__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, fbsdk::MTensor>, void *> *> *>>=Q}}{__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, fbsdk::MTensor>, void *> *>=^v}Qf}}24@0:8@16
// Implementation: 0x104978b90

// +[FBSDKModelParser validateWeights:forKey:]
// Type encoding: B64@0:8{unordered_map<std::string, fbsdk::MTensor, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, fbsdk::MTensor>>>={__hash_table<std::__hash_value_type<std::string, fbsdk::MTensor>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, fbsdk::MTensor>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, fbsdk::MTensor>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, fbsdk::MTensor>>>={unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, fbsdk::MTensor>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, fbsdk::MTensor>, void *> *> *>>>=^^v{__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, fbsdk::MTensor>, void *> *> *>>=Q}}{__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, fbsdk::MTensor>, void *> *>=^v}Qf}}16@56
// Implementation: 0x1049791e4

// +[FBSDKModelParser getKeysMapping]
// Type encoding: @16@0:8
// Implementation: 0x1049792f4

// +[FBSDKModelParser getMTMLWeightsInfo]
// Type encoding: @16@0:8
// Implementation: 0x1049793e8

// +[FBSDKModelParser checkWeights:withExpectedInfo:]
// Type encoding: B64@0:8{unordered_map<std::string, fbsdk::MTensor, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, fbsdk::MTensor>>>={__hash_table<std::__hash_value_type<std::string, fbsdk::MTensor>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, fbsdk::MTensor>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, fbsdk::MTensor>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, fbsdk::MTensor>>>={unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, fbsdk::MTensor>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, fbsdk::MTensor>, void *> *> *>>>=^^v{__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, fbsdk::MTensor>, void *> *> *>>=Q}}{__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, fbsdk::MTensor>, void *> *>=^v}Qf}}16@56
// Implementation: 0x104979dd8

@end
