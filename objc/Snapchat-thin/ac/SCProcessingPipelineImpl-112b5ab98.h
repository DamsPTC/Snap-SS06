// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCProcessingPipelineImpl
// Superclass: NSObject
// Address: 0x112b5ab98

@interface SCProcessingPipelineImpl

// Property: performer; attributes: T@"<SCPerforming>",&,N,V_performer
// Property: orderedModules; attributes: T@"NSArray",&,N,V_orderedModules
// Property: pipelineOrder; attributes: T@"<SCProcessingPipelineOrdering>",&,N,V_pipelineOrder
// Property: processingModulesSet; attributes: T@"NSMutableSet",&,N,V_processingModulesSet
// Property: shouldUpdateOrderedModules; attributes: TB,N,V_shouldUpdateOrderedModules
// Property: renderPipeline; attributes: T@"NSArray",R,N,V_renderPipeline
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCProcessingPipelineImpl initWithPipelineOrder:performer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1003527f0

// -[SCProcessingPipelineImpl addProcessingModule:]
// Type encoding: v24@0:8@16
// Implementation: 0x107031660

// -[SCProcessingPipelineImpl removeProcessingModule:]
// Type encoding: v24@0:8@16
// Implementation: 0x1070317d0

// -[SCProcessingPipelineImpl renderPipeline]
// Type encoding: @16@0:8
// Implementation: 0x100709214

// -[SCProcessingPipelineImpl render:]
// Type encoding: ^{opaqueCMSampleBuffer=}64@0:8{RenderData=^{opaqueCMSampleBuffer}dq{?=qiIq}}16
// Implementation: 0x107031914

// -[SCProcessingPipelineImpl processImage:metadata:]
// Type encoding: @36@0:8@16{SampleBufferMetadata=iff}24
// Implementation: 0x107031a24

// -[SCProcessingPipelineImpl _buildOrderedPipelineIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x100709238

// -[SCProcessingPipelineImpl _removeModuleEqualTo:]
// Type encoding: v24@0:8@16
// Implementation: 0x107031b88

// -[SCProcessingPipelineImpl performer]
// Type encoding: @16@0:8
// Implementation: 0x107031dac

// -[SCProcessingPipelineImpl setPerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1003529c0

// -[SCProcessingPipelineImpl orderedModules]
// Type encoding: @16@0:8
// Implementation: 0x100709358

// -[SCProcessingPipelineImpl setOrderedModules:]
// Type encoding: v24@0:8@16
// Implementation: 0x100352990

// -[SCProcessingPipelineImpl pipelineOrder]
// Type encoding: @16@0:8
// Implementation: 0x107031db4

// -[SCProcessingPipelineImpl setPipelineOrder:]
// Type encoding: v24@0:8@16
// Implementation: 0x100352960

// -[SCProcessingPipelineImpl processingModulesSet]
// Type encoding: @16@0:8
// Implementation: 0x107031dbc

// -[SCProcessingPipelineImpl setProcessingModulesSet:]
// Type encoding: v24@0:8@16
// Implementation: 0x100352930

// -[SCProcessingPipelineImpl shouldUpdateOrderedModules]
// Type encoding: B16@0:8
// Implementation: 0x100709350

// -[SCProcessingPipelineImpl setShouldUpdateOrderedModules:]
// Type encoding: v20@0:8B16
// Implementation: 0x107031dc4

// -[SCProcessingPipelineImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107031dcc

@end
