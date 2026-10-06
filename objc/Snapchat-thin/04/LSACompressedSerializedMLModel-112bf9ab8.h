// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: LSACompressedSerializedMLModel
// Superclass: NSObject
// Address: 0x112bf9ab8

@interface LSACompressedSerializedMLModel

// Property: adoptedPath; attributes: T{basic_string<char, std::char_traits<char>, std::allocator<char>>=(__rep={__short=[23c]b7b1}{__long=*Qb63b1})},V_adoptedPath
// Property: serializedModel; attributes: T{shared_ptr<snap::ml::SerializedMLModel>=^{SerializedMLModel}^{__shared_weak_count}},V_serializedModel
// Property: options; attributes: T@"LSASnapMLModelOptions",&,N,V_options

// -[LSACompressedSerializedMLModel initWithFilePath:]
// Type encoding: @24@0:8@16
// Implementation: 0x10adb59d4

// -[LSACompressedSerializedMLModel initWithFilePath:options:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10adb59dc

// -[LSACompressedSerializedMLModel serializedModelHandle:]
// Type encoding: {shared_ptr<snap::ml::SerializedMLModel>=^{SerializedMLModel}^{__shared_weak_count}}24@0:8^@16
// Implementation: 0x10adb5c2c

// -[LSACompressedSerializedMLModel adoptedPath]
// Type encoding: {basic_string<char, std::char_traits<char>, std::allocator<char>>=(__rep={__short=[23c]b7b1}{__long=*Qb63b1})}16@0:8
// Implementation: 0x10adb5fd4

// -[LSACompressedSerializedMLModel setAdoptedPath:]
// Type encoding: v40@0:8{basic_string<char, std::char_traits<char>, std::allocator<char>>=(__rep={__short=[23c]b7b1}{__long=*Qb63b1})}16
// Implementation: 0x10adb5fec

// -[LSACompressedSerializedMLModel serializedModel]
// Type encoding: {shared_ptr<snap::ml::SerializedMLModel>=^{SerializedMLModel}^{__shared_weak_count}}16@0:8
// Implementation: 0x10adb6028

// -[LSACompressedSerializedMLModel setSerializedModel:]
// Type encoding: v32@0:8{shared_ptr<snap::ml::SerializedMLModel>=^{SerializedMLModel}^{__shared_weak_count}}16
// Implementation: 0x10adb60b8

// -[LSACompressedSerializedMLModel options]
// Type encoding: @16@0:8
// Implementation: 0x10adb60cc

// -[LSACompressedSerializedMLModel setOptions:]
// Type encoding: v24@0:8@16
// Implementation: 0x10adb60d4

// -[LSACompressedSerializedMLModel .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10adb6104

// -[LSACompressedSerializedMLModel .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10adb6140

// +[LSACompressedSerializedMLModel setErrorWithCode:description:error:]
// Type encoding: v40@0:8q16@24^@32
// Implementation: 0x10adb5890

@end
