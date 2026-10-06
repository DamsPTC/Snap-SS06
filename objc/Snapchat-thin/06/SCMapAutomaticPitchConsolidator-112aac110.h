// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapAutomaticPitchConsolidator
// Superclass: NSObject
// Address: 0x112aac110

@interface SCMapAutomaticPitchConsolidator

// Property: startPitch; attributes: Td,N,V_startPitch
// Property: endPitch; attributes: Td,N,V_endPitch
// Property: startZoom; attributes: Td,R,N,V_startZoom
// Property: endZoom; attributes: Td,R,N,V_endZoom
// Property: customZoom; attributes: Td,N,V_customZoom
// Property: customPitch; attributes: Td,N,V_customPitch

// -[SCMapAutomaticPitchConsolidator initInternal]
// Type encoding: @16@0:8
// Implementation: 0x105f1d544

// -[SCMapAutomaticPitchConsolidator consolidatedPitchForZoomLevel:]
// Type encoding: d24@0:8d16
// Implementation: 0x105f1d634

// -[SCMapAutomaticPitchConsolidator setCustomPitch:customZoom:]
// Type encoding: v32@0:8d16d24
// Implementation: 0x105f1d63c

// -[SCMapAutomaticPitchConsolidator setCustomZoom:]
// Type encoding: v24@0:8d16
// Implementation: 0x105f1d670

// -[SCMapAutomaticPitchConsolidator setCustomPitch:]
// Type encoding: v24@0:8d16
// Implementation: 0x105f1d678

// -[SCMapAutomaticPitchConsolidator resetCustomZoomAndPitch]
// Type encoding: v16@0:8
// Implementation: 0x105f1d680

// -[SCMapAutomaticPitchConsolidator startZoom]
// Type encoding: d16@0:8
// Implementation: 0x105f1d684

// -[SCMapAutomaticPitchConsolidator endZoom]
// Type encoding: d16@0:8
// Implementation: 0x105f1d68c

// -[SCMapAutomaticPitchConsolidator customZoom]
// Type encoding: d16@0:8
// Implementation: 0x105f1d694

// -[SCMapAutomaticPitchConsolidator customPitch]
// Type encoding: d16@0:8
// Implementation: 0x105f1d69c

// -[SCMapAutomaticPitchConsolidator startPitch]
// Type encoding: d16@0:8
// Implementation: 0x105f1d6a4

// -[SCMapAutomaticPitchConsolidator setStartPitch:]
// Type encoding: v24@0:8d16
// Implementation: 0x105f1d6ac

// -[SCMapAutomaticPitchConsolidator endPitch]
// Type encoding: d16@0:8
// Implementation: 0x105f1d6b4

// -[SCMapAutomaticPitchConsolidator setEndPitch:]
// Type encoding: v24@0:8d16
// Implementation: 0x105f1d6bc

// +[SCMapAutomaticPitchConsolidator multiPitchConsolidatorWithPitches:atZoomLevels:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105f1d578

// +[SCMapAutomaticPitchConsolidator consolidatorWithAutomaticPitchStartZoom:startPitch:endZoom:endPitch:]
// Type encoding: @48@0:8d16d24d32d40
// Implementation: 0x105f1d5e4

@end
