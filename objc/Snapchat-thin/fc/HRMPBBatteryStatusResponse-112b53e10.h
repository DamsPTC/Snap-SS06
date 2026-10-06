// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: HRMPBBatteryStatusResponse
// Superclass: GPBMessage
// Address: 0x112b53e10

@interface HRMPBBatteryStatusResponse

// Property: soc; attributes: Ti,D,N
// Property: hasSoc; attributes: TB,D,N
// Property: voltage; attributes: Ti,D,N
// Property: hasVoltage; attributes: TB,D,N
// Property: temp; attributes: Ti,D,N
// Property: hasTemp; attributes: TB,D,N
// Property: current; attributes: Ti,D,N
// Property: hasCurrent; attributes: TB,D,N
// Property: socStatus; attributes: Ti,D,N
// Property: hasSocStatus; attributes: TB,D,N
// Property: hardwareStatus; attributes: Ti,D,N
// Property: hasHardwareStatus; attributes: TB,D,N
// Property: lSoc; attributes: Ti,D,N
// Property: hasLSoc; attributes: TB,D,N
// Property: lVoltage; attributes: Ti,D,N
// Property: hasLVoltage; attributes: TB,D,N
// Property: lTemp; attributes: Ti,D,N
// Property: hasLTemp; attributes: TB,D,N
// Property: lCurrent; attributes: Ti,D,N
// Property: hasLCurrent; attributes: TB,D,N
// Property: lFullcap; attributes: Ti,D,N
// Property: hasLFullcap; attributes: TB,D,N
// Property: rSoc; attributes: Ti,D,N
// Property: hasRSoc; attributes: TB,D,N
// Property: rVoltage; attributes: Ti,D,N
// Property: hasRVoltage; attributes: TB,D,N
// Property: rTemp; attributes: Ti,D,N
// Property: hasRTemp; attributes: TB,D,N
// Property: rCurrent; attributes: Ti,D,N
// Property: hasRCurrent; attributes: TB,D,N
// Property: rFullcap; attributes: Ti,D,N
// Property: hasRFullcap; attributes: TB,D,N
// Property: lNtcStatus; attributes: Ti,D,N
// Property: hasLNtcStatus; attributes: TB,D,N
// Property: rNtcStatus; attributes: Ti,D,N
// Property: hasRNtcStatus; attributes: TB,D,N
// Property: lCurrentAvg; attributes: Ti,D,N
// Property: hasLCurrentAvg; attributes: TB,D,N
// Property: rCurrentAvg; attributes: Ti,D,N
// Property: hasRCurrentAvg; attributes: TB,D,N
// Property: lVoltageAvg; attributes: Ti,D,N
// Property: hasLVoltageAvg; attributes: TB,D,N
// Property: rVoltageAvg; attributes: Ti,D,N
// Property: hasRVoltageAvg; attributes: TB,D,N
// Property: lCyclesPercent; attributes: Ti,D,N
// Property: hasLCyclesPercent; attributes: TB,D,N
// Property: rCyclesPercent; attributes: Ti,D,N
// Property: hasRCyclesPercent; attributes: TB,D,N
// Property: lAgePercent; attributes: Ti,D,N
// Property: hasLAgePercent; attributes: TB,D,N
// Property: rAgePercent; attributes: Ti,D,N
// Property: hasRAgePercent; attributes: TB,D,N
// Property: chargerInputPowerMw; attributes: Ti,D,N
// Property: hasChargerInputPowerMw; attributes: TB,D,N
// Property: vbusVoltageMv; attributes: Ti,D,N
// Property: hasVbusVoltageMv; attributes: TB,D,N
// Property: vbusCurrentMa; attributes: Ti,D,N
// Property: hasVbusCurrentMa; attributes: TB,D,N
// Property: lInternalResistance; attributes: Ti,D,N
// Property: hasLInternalResistance; attributes: TB,D,N
// Property: rInternalResistance; attributes: Ti,D,N
// Property: hasRInternalResistance; attributes: TB,D,N
// Property: batteryPreservationModeStatus; attributes: Ti,D,N
// Property: hasBatteryPreservationModeStatus; attributes: TB,D,N
// Property: lBatteryType; attributes: Ti,D,N
// Property: hasLBatteryType; attributes: TB,D,N
// Property: rBatteryType; attributes: Ti,D,N
// Property: hasRBatteryType; attributes: TB,D,N
// Property: isBpmEnabled; attributes: TB,D,N
// Property: hasIsBpmEnabled; attributes: TB,D,N
// Property: systemPowerConsumptionMw; attributes: Ti,D,N
// Property: hasSystemPowerConsumptionMw; attributes: TB,D,N
// Property: lCurrentMaxMA; attributes: Ti,D,N
// Property: hasLCurrentMaxMA; attributes: TB,D,N
// Property: rCurrentMaxMA; attributes: Ti,D,N
// Property: hasRCurrentMaxMA; attributes: TB,D,N
// Property: lCurrentMinMA; attributes: Ti,D,N
// Property: hasLCurrentMinMA; attributes: TB,D,N
// Property: rCurrentMinMA; attributes: Ti,D,N
// Property: hasRCurrentMinMA; attributes: TB,D,N
// Property: lDurationMsMinMax; attributes: TQ,D,N
// Property: hasLDurationMsMinMax; attributes: TB,D,N
// Property: rDurationMsMinMax; attributes: TQ,D,N
// Property: hasRDurationMsMinMax; attributes: TB,D,N
// Property: lBatteryIdVoltage; attributes: Tf,D,N
// Property: hasLBatteryIdVoltage; attributes: TB,D,N
// Property: rBatteryIdVoltage; attributes: Tf,D,N
// Property: hasRBatteryIdVoltage; attributes: TB,D,N
// Property: userSoc; attributes: Ti,D,N
// Property: hasUserSoc; attributes: TB,D,N
// Property: cvPmic8350CPowerMw; attributes: Ti,D,N
// Property: hasCvPmic8350CPowerMw; attributes: TB,D,N
// Property: cvPmic8350CVoltageMv; attributes: Ti,D,N
// Property: hasCvPmic8350CVoltageMv; attributes: TB,D,N
// Property: cvPmic8350CCurrentMa; attributes: Ti,D,N
// Property: hasCvPmic8350CCurrentMa; attributes: TB,D,N
// Property: batteryPowerMw; attributes: Ti,D,N
// Property: hasBatteryPowerMw; attributes: TB,D,N
// Property: lBatteryPowerMw; attributes: Ti,D,N
// Property: hasLBatteryPowerMw; attributes: TB,D,N
// Property: rBatteryPowerMw; attributes: Ti,D,N
// Property: hasRBatteryPowerMw; attributes: TB,D,N
// Property: batteryPowerAvgMw; attributes: Ti,D,N
// Property: hasBatteryPowerAvgMw; attributes: TB,D,N
// Property: lBatteryPowerAvgMw; attributes: Ti,D,N
// Property: hasLBatteryPowerAvgMw; attributes: TB,D,N
// Property: rBatteryPowerAvgMw; attributes: Ti,D,N
// Property: hasRBatteryPowerAvgMw; attributes: TB,D,N
// Property: cvPmic8350PowerMw; attributes: Ti,D,N
// Property: hasCvPmic8350PowerMw; attributes: TB,D,N
// Property: cvPmic8350VoltageMv; attributes: Ti,D,N
// Property: hasCvPmic8350VoltageMv; attributes: TB,D,N
// Property: cvPmic8350CurrentMa; attributes: Ti,D,N
// Property: hasCvPmic8350CurrentMa; attributes: TB,D,N
// Property: lIsBatteryBad; attributes: TB,D,N
// Property: hasLIsBatteryBad; attributes: TB,D,N
// Property: rIsBatteryBad; attributes: TB,D,N
// Property: hasRIsBatteryBad; attributes: TB,D,N
// Property: lIsPreqRunning; attributes: TB,D,N
// Property: hasLIsPreqRunning; attributes: TB,D,N
// Property: rIsPreqRunning; attributes: TB,D,N
// Property: hasRIsPreqRunning; attributes: TB,D,N
// Property: lMixSoc; attributes: Ti,D,N
// Property: hasLMixSoc; attributes: TB,D,N
// Property: rMixSoc; attributes: Ti,D,N
// Property: hasRMixSoc; attributes: TB,D,N
// Property: lCycleCount; attributes: TI,D,N
// Property: hasLCycleCount; attributes: TB,D,N
// Property: rCycleCount; attributes: TI,D,N
// Property: hasRCycleCount; attributes: TB,D,N
// Property: lRemainingCapacityMah; attributes: TI,D,N
// Property: hasLRemainingCapacityMah; attributes: TB,D,N
// Property: rRemainingCapacityMah; attributes: TI,D,N
// Property: hasRRemainingCapacityMah; attributes: TB,D,N

// +[HRMPBBatteryStatusResponse descriptor]
// Type encoding: @16@0:8
// Implementation: 0x106fc17a4

@end
