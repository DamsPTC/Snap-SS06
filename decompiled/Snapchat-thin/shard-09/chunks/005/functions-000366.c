/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106e98ac8; end: 106e98adf; -[SCSpectaclesDevice supportsDeveloperMode] */

ulong FUN_106e98ac8(ulong param_1)

{
  func_0x00010bf2f9e0();
  return param_1 >> 0x28 & 1;
}



/* Entry: 106e98ae0; end: 106e98af7; -[SCSpectaclesDevice requiresPowerWatchdog] */

ulong FUN_106e98ae0(ulong param_1)

{
  func_0x00010bf2f9e0();
  return param_1 >> 0x1e & 1;
}



/* Entry: 106e98af8; end: 106e98b0f; -[SCSpectaclesDevice supportsProximityUnlock] */

ulong FUN_106e98af8(ulong param_1)

{
  func_0x00010bf2f9e0();
  return param_1 >> 0x1f & 1;
}



/* Entry: 106e98b10; end: 106e98b27; -[SCSpectaclesDevice wifiCanUse5GhzChannelInAllCountries] */

ulong FUN_106e98b10(ulong param_1)

{
  func_0x00010bf2f9e0();
  return param_1 >> 0xb & 1;
}



/* Entry: 106e98b28; end: 106e98b8b; -[SCSpectaclesDevice _checkCapabilities] */

void FUN_106e98b28(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bfb0d20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bfd38e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  FUN_106e98b8c(lVar1,lVar2);
  *(long *)(param_1 + 0x200) = lVar3;
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106e98b8c; end: 106e98eff;  */

ulong FUN_106e98b8c(long param_1,ulong param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar6 = param_2;
  func_0x00010c074bc0();
  iVar1 = (int)uVar6;
  lVar4 = param_1;
  if (iVar1 == 0) {
    uVar6 = param_2;
    func_0x00010c078aa0();
    if ((uVar6 & 1) != 0) {
      uVar6 = 0x1000401a7fdd;
      goto LAB_106e98cc4;
    }
    uVar6 = param_2;
    func_0x00010c0774a0();
    if ((int)uVar6 == 0) {
      uVar6 = param_2;
      func_0x00010c075fc0();
      if ((int)uVar6 == 0) {
        uVar6 = param_2;
        func_0x00010c06e7e0();
        if ((uVar6 & 1) == 0) {
          uVar6 = param_2;
          func_0x00010c0776e0();
          if ((int)uVar6 == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = 0x233a120130;
            if (param_1 != 0) {
              uVar6 = 0x2e33a120130;
            }
          }
        }
        else {
          uVar6 = 0x100e40003630;
        }
        goto LAB_106e98cc4;
      }
      uVar6 = 0x100040088000;
      if (param_1 == 0) goto LAB_106e98cc4;
      puVar2 = PTR_PTR_1126c0c68;
      func_0x00010c087c20(PTR_PTR_1126c0c68);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010bf433a0();
      _objc_release(puVar2);
      if (lVar3 != -1) {
        uVar6 = 0x100040088001;
      }
      puVar2 = PTR_PTR_1126c0c68;
      func_0x00010c087b40(PTR_PTR_1126c0c68);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010bf433a0();
      _objc_release(puVar2);
      if (lVar3 != -1) {
        uVar6 = uVar6 | 6;
      }
      puVar2 = PTR_PTR_1126c0c68;
      func_0x00010c087b60(PTR_PTR_1126c0c68);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010bf433a0();
      _objc_release(puVar2);
      if (lVar3 != -1) {
        uVar6 = uVar6 | 0x60;
      }
      puVar2 = PTR_PTR_1126c0c68;
      func_0x00010c087b80(PTR_PTR_1126c0c68);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf433a0();
      _objc_release(puVar2);
      uVar5 = uVar6 | 8;
    }
    else {
      uVar6 = 0x1000400985dd;
      if (param_1 == 0) goto LAB_106e98cc4;
      puVar2 = PTR_PTR_1126c0c68;
      func_0x00010c0b7bc0(PTR_PTR_1126c0c68);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010bf433a0();
      _objc_release(puVar2);
      if (lVar3 != -1) {
        uVar6 = 0x100040098fdd;
      }
      puVar2 = PTR_PTR_1126c0c68;
      func_0x00010c0b7be0(PTR_PTR_1126c0c68);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010bf433a0();
      _objc_release(puVar2);
      if (lVar3 != -1) {
        uVar6 = uVar6 | 0x1000;
      }
      puVar2 = PTR_PTR_1126c0c68;
      func_0x00010c0b7c00(PTR_PTR_1126c0c68);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf433a0();
      _objc_release(puVar2);
      uVar5 = uVar6 | 0x20000;
    }
  }
  else {
    func_0x00010b6fc180();
    uVar5 = 0x1001e540130;
    if (iVar1 == 0) {
      uVar5 = 0x1e540130;
    }
    uVar6 = uVar5 | 0x82320020000;
    if (param_1 == 0) goto LAB_106e98cc4;
    puVar2 = PTR_PTR_1126c0c68;
    func_0x00010bfe0bc0(PTR_PTR_1126c0c68);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf433a0();
    _objc_release(puVar2);
    if (lVar3 != -1) {
      uVar6 = uVar5 | 0x86320020000;
    }
    puVar2 = PTR_PTR_1126c0c68;
    func_0x00010bfe0b80(PTR_PTR_1126c0c68);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf433a0();
    _objc_release(puVar2);
    if (lVar3 != -1) {
      uVar6 = uVar6 | 0x8000000000;
    }
    puVar2 = PTR_PTR_1126c0c68;
    func_0x00010bfe0b40(PTR_PTR_1126c0c68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf433a0();
    _objc_release(puVar2);
    uVar5 = uVar6 | 0x20000000000;
  }
  if (lVar4 != -1) {
    uVar6 = uVar5;
  }
LAB_106e98cc4:
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar6;
}



/* Entry: 106e98f00; end: 106e98f1f; +[SCSpectaclesDevice supportsPsychomantisWithFirmware:hardware:] */

ulong FUN_106e98f00(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  FUN_106e98b8c(param_3,param_4);
  return param_3 >> 3 & 1;
}



/* Entry: 106e98f20; end: 106e98f37; -[SCSpectaclesDevice supportBLENetworkClient] */

ulong FUN_106e98f20(ulong param_1)

{
  func_0x00010bf2f9e0();
  return param_1 >> 0x21 & 1;
}



/* Entry: 106e98f38; end: 106e98f4f; -[SCSpectaclesDevice supportsFlight] */

ulong FUN_106e98f38(ulong param_1)

{
  func_0x00010bf2f9e0();
  return param_1 >> 0x22 & 1;
}



/* Entry: 106e98f50; end: 106e98f67; -[SCSpectaclesDevice supportsUsbImport] */

ulong FUN_106e98f50(ulong param_1)

{
  func_0x00010bf2f9e0();
  return param_1 >> 0x23 & 1;
}



/* Entry: 106e98f68; end: 106e98f7f; -[SCSpectaclesDevice supportsPinLens] */

ulong FUN_106e98f68(ulong param_1)

{
  func_0x00010bf2f9e0();
  return param_1 >> 0x25 & 1;
}



/* Entry: 106e98f80; end: 106e98f97; -[SCSpectaclesDevice supportsLaunchLens] */

ulong FUN_106e98f80(ulong param_1)

{
  func_0x00010bf2f9e0();
  return param_1 >> 0x26 & 1;
}



/* Entry: 106e98f98; end: 106e98fcb; -[SCSpectaclesDevice supportLensExplorer] */

void FUN_106e98f98(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c263960();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c263870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_supportsLaunchLens_112676840);
    return;
  }
  return;
}



/* Entry: 106e98fcc; end: 106e99007; -[SCSpectaclesDevice isMarkContentTransferredNeeded] */

uint FUN_106e98fcc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c06e7e0();
  _objc_release(param_1);
  return (uint)uVar1 ^ 1;
}



/* Entry: 106e99008; end: 106e99043; -[SCSpectaclesDevice shouldSortTasksInDescendingOrder] */

undefined8 FUN_106e99008(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c06e7e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106e99044; end: 106e9905b; -[SCSpectaclesDevice supportsForgetNetwork] */

ulong FUN_106e99044(ulong param_1)

{
  func_0x00010bf2f9e0();
  return param_1 >> 0x27 & 1;
}



/* Entry: 106e9905c; end: 106e99073; -[SCSpectaclesDevice supportsDeviceSecurityBootCompleteEvents] */

ulong FUN_106e9905c(ulong param_1)

{
  func_0x00010bf2f9e0();
  return param_1 >> 0x29 & 1;
}



/* Entry: 106e99074; end: 106e9908b; -[SCSpectaclesDevice supportsBatteryPreservationMode] */

ulong FUN_106e99074(ulong param_1)

{
  func_0x00010bf2f9e0();
  return param_1 >> 0x2a & 1;
}



/* Entry: 106e9908c; end: 106e990c7; -[SCSpectaclesDevice supportsRealTimeDeletion] */

undefined8 FUN_106e9908c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c06e7e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106e990c8; end: 106e99103; -[SCSpectaclesDevice supportsRestartBeforeFetchingDebugLogs] */

uint FUN_106e990c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c06e7e0();
  _objc_release(param_1);
  return (uint)uVar1 ^ 1;
}



/* Entry: 106e99104; end: 106e9913f; -[SCSpectaclesDevice supportRepeatedDeviceUpdateRequest] */

uint FUN_106e99104(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c06e7e0();
  _objc_release(param_1);
  return (uint)uVar1 ^ 1;
}



/* Entry: 106e99140; end: 106e9933f; -[SCSpectaclesDevice debugMetaInfo] */

void FUN_106e99140(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  
  lVar1 = param_1;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf17500();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar9 = &PTR____CFConstantStringClassReference_110daafd8;
  if (lVar2 != 0) {
    lVar3 = param_1;
    func_0x00010c0692a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf17500();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c0692a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06e420();
    func_0x00010c14de00(ppuVar6,param_2,&PTR____CFConstantStringClassReference_110e8ab38);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    ppuVar9 = ppuVar6;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar1 = param_1;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bfb0d20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c15e740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c252800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar8,param_2,&PTR____CFConstantStringClassReference_110e8ab78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(ppuVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 106e99340; end: 106e99347; -[SCSpectaclesDevice serialNumber] */

undefined8 FUN_106e99340(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 106e99348; end: 106e9934f; -[SCSpectaclesDevice setSerialNumber:] */

void FUN_106e99348(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106e99350; end: 106e99357; -[SCSpectaclesDevice displayName] */

undefined8 FUN_106e99350(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 106e99358; end: 106e9935f; -[SCSpectaclesDevice firmwareVersion] */

undefined8 FUN_106e99358(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 106e99360; end: 106e9938f; -[SCSpectaclesDevice setFirmwareVersion:] */

void FUN_106e99360(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e99390; end: 106e99397; -[SCSpectaclesDevice hardwareVersion] */

undefined8 FUN_106e99390(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 106e99398; end: 106e993c7; -[SCSpectaclesDevice setHardwareVersion:] */

void FUN_106e99398(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e993c8; end: 106e993f7; -[SCSpectaclesDevice setBatteryLevel:] */

void FUN_106e993c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e993f8; end: 106e993ff; -[SCSpectaclesDevice setBatteryLevelStatus:] */

void FUN_106e993f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x88) = param_3;
  return;
}



/* Entry: 106e99400; end: 106e9942f; -[SCSpectaclesDevice setGuppyBatteryLevel:] */

void FUN_106e99400(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e99430; end: 106e99437; -[SCSpectaclesDevice voltageLevel] */

undefined8 FUN_106e99430(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 106e99438; end: 106e99467; -[SCSpectaclesDevice setVoltageLevel:] */

void FUN_106e99438(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e99468; end: 106e9946f; -[SCSpectaclesDevice storageLevel] */

undefined8 FUN_106e99468(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 106e99470; end: 106e9949f; -[SCSpectaclesDevice setStorageLevel:] */

void FUN_106e99470(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e994a0; end: 106e994a7; -[SCSpectaclesDevice storageLevelStatus] */

undefined8 FUN_106e994a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 106e994a8; end: 106e994af; -[SCSpectaclesDevice setStorageLevelStatus:] */

void FUN_106e994a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xa8) = param_3;
  return;
}



/* Entry: 106e994b0; end: 106e994b7; -[SCSpectaclesDevice hasSpaceToRecord] */

undefined1 FUN_106e994b0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x50);
}



/* Entry: 106e994b8; end: 106e994bf; -[SCSpectaclesDevice setHasSpaceToRecord:] */

void FUN_106e994b8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 106e994c0; end: 106e994c7; -[SCSpectaclesDevice calibration] */

undefined8 FUN_106e994c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 106e994c8; end: 106e994cf; -[SCSpectaclesDevice deviceNumber] */

undefined8 FUN_106e994c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 106e994d0; end: 106e994d7; -[SCSpectaclesDevice setDeviceNumber:] */

void FUN_106e994d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb8) = param_3;
  return;
}



/* Entry: 106e994d8; end: 106e994df; -[SCSpectaclesDevice color] */

undefined8 FUN_106e994d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 106e994e0; end: 106e994e7; -[SCSpectaclesDevice setColor:] */

void FUN_106e994e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xc0) = param_3;
  return;
}



/* Entry: 106e994e8; end: 106e994ef; -[SCSpectaclesDevice firstPairedTimestamp] */

undefined8 FUN_106e994e8(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 106e994f0; end: 106e994f7; -[SCSpectaclesDevice setFirstPairedTimestamp:] */

void FUN_106e994f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 200) = param_3;
  return;
}



/* Entry: 106e994f8; end: 106e994ff; -[SCSpectaclesDevice lastPairedStatusUpdatedTimestamp] */

undefined8 FUN_106e994f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 106e99500; end: 106e99507; -[SCSpectaclesDevice setLastPairedStatusUpdatedTimestamp:] */

void FUN_106e99500(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xd0) = param_3;
  return;
}



/* Entry: 106e99508; end: 106e9950f; -[SCSpectaclesDevice lastPairFromUnpairedStateTimestamp] */

undefined8 FUN_106e99508(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 106e99510; end: 106e99517; -[SCSpectaclesDevice lastNameUpdatedTimestamp] */

undefined8 FUN_106e99510(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 106e99518; end: 106e9951f; -[SCSpectaclesDevice setLastNameUpdatedTimestamp:] */

void FUN_106e99518(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xe0) = param_3;
  return;
}



/* Entry: 106e99520; end: 106e99527; -[SCSpectaclesDevice lastGPSAlmanacUpdatedTimestamp] */

undefined8 FUN_106e99520(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 106e99528; end: 106e9952f; -[SCSpectaclesDevice setLastGPSAlmanacUpdatedTimestamp:] */

void FUN_106e99528(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xe8) = param_3;
  return;
}



/* Entry: 106e99530; end: 106e99537; -[SCSpectaclesDevice lastConnectedTimestamp] */

undefined8 FUN_106e99530(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 106e99538; end: 106e9953f; -[SCSpectaclesDevice setLastConnectedTimestamp:] */

void FUN_106e99538(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xf0) = param_3;
  return;
}



/* Entry: 106e99540; end: 106e99547; -[SCSpectaclesDevice lastActivatedTimestamp] */

undefined8 FUN_106e99540(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 106e99548; end: 106e9954f; -[SCSpectaclesDevice setLastActivatedTimestamp:] */

void FUN_106e99548(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xf8) = param_3;
  return;
}



/* Entry: 106e99550; end: 106e99557; -[SCSpectaclesDevice locationEnabled] */

undefined1 FUN_106e99550(long param_1)

{
  return *(undefined1 *)(param_1 + 0x51);
}



/* Entry: 106e99558; end: 106e9955f; -[SCSpectaclesDevice setLocationEnabled:] */

void FUN_106e99558(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x51) = param_3;
  return;
}



/* Entry: 106e99560; end: 106e99567; -[SCSpectaclesDevice nordicTemperature] */

undefined8 FUN_106e99560(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 106e99568; end: 106e9956f; -[SCSpectaclesDevice setNordicTemperature:] */

void FUN_106e99568(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x100) = param_3;
  return;
}



/* Entry: 106e99570; end: 106e99577; -[SCSpectaclesDevice setCoulombCounterTemperature:] */

void FUN_106e99570(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x108) = param_3;
  return;
}



/* Entry: 106e99578; end: 106e9957f; -[SCSpectaclesDevice setSocTemperature:] */

void FUN_106e99578(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x110) = param_3;
  return;
}



/* Entry: 106e99580; end: 106e99587; -[SCSpectaclesDevice wifiTemperature] */

undefined8 FUN_106e99580(long param_1)

{
  return *(undefined8 *)(param_1 + 0x118);
}



/* Entry: 106e99588; end: 106e9958f; -[SCSpectaclesDevice setWifiTemperature:] */

void FUN_106e99588(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x118) = param_3;
  return;
}



/* Entry: 106e99590; end: 106e99597; -[SCSpectaclesDevice lastTemperatureReportTime] */

undefined8 FUN_106e99590(long param_1)

{
  return *(undefined8 *)(param_1 + 0x120);
}



/* Entry: 106e99598; end: 106e995c7; -[SCSpectaclesDevice setLastTemperatureReportTime:] */

void FUN_106e99598(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x120) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e995c8; end: 106e995cf; -[SCSpectaclesDevice setTemperatureStatus:] */

void FUN_106e995c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x128) = param_3;
  return;
}



/* Entry: 106e995d0; end: 106e995d7; -[SCSpectaclesDevice wifiFrequency] */

undefined8 FUN_106e995d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x130);
}



/* Entry: 106e995d8; end: 106e995df; -[SCSpectaclesDevice hasReconciledContentList] */

undefined1 FUN_106e995d8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x52);
}



/* Entry: 106e995e0; end: 106e995e7; -[SCSpectaclesDevice setHasReconciledContentList:] */

void FUN_106e995e0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x52) = param_3;
  return;
}



/* Entry: 106e995e8; end: 106e995ef; -[SCSpectaclesDevice detectedBluetoothOverloadError] */

undefined1 FUN_106e995e8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x53);
}



/* Entry: 106e995f0; end: 106e995f7; -[SCSpectaclesDevice setDetectedBluetoothOverloadError:] */

void FUN_106e995f0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x53) = param_3;
  return;
}



/* Entry: 106e995f8; end: 106e995ff; -[SCSpectaclesDevice isCharging] */

undefined1 FUN_106e995f8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x54);
}



/* Entry: 106e99600; end: 106e99607; -[SCSpectaclesDevice setCharging:] */

void FUN_106e99600(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x54) = param_3;
  return;
}



/* Entry: 106e99608; end: 106e9960f; -[SCSpectaclesDevice hasChargingInfo] */

undefined1 FUN_106e99608(long param_1)

{
  return *(undefined1 *)(param_1 + 0x55);
}



/* Entry: 106e99610; end: 106e99617; -[SCSpectaclesDevice setHasChargingInfo:] */

void FUN_106e99610(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x55) = param_3;
  return;
}



/* Entry: 106e99618; end: 106e9961f; -[SCSpectaclesDevice lastUploadAnalyticsLogsTime] */

undefined8 FUN_106e99618(long param_1)

{
  return *(undefined8 *)(param_1 + 0x138);
}



/* Entry: 106e99620; end: 106e9964f; -[SCSpectaclesDevice setLastUploadAnalyticsLogsTime:] */

void FUN_106e99620(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x138);
  *(undefined8 *)(param_1 + 0x138) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e99650; end: 106e99657; -[SCSpectaclesDevice lastConnectionFailureReason] */

undefined8 FUN_106e99650(long param_1)

{
  return *(undefined8 *)(param_1 + 0x140);
}



/* Entry: 106e99658; end: 106e9965f; -[SCSpectaclesDevice setLastConnectionFailureReason:] */

void FUN_106e99658(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x140) = param_3;
  return;
}



/* Entry: 106e99660; end: 106e99667; -[SCSpectaclesDevice enableUsbImport] */

undefined1 FUN_106e99660(long param_1)

{
  return *(undefined1 *)(param_1 + 0x56);
}



/* Entry: 106e99668; end: 106e9966f; -[SCSpectaclesDevice countryCode] */

undefined8 FUN_106e99668(long param_1)

{
  return *(undefined8 *)(param_1 + 0x148);
}



/* Entry: 106e99670; end: 106e99677; -[SCSpectaclesDevice setCountryCode:] */

void FUN_106e99670(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106e99678; end: 106e9967f; -[SCSpectaclesDevice encryptionKey] */

undefined8 FUN_106e99678(long param_1)

{
  return *(undefined8 *)(param_1 + 0x150);
}



/* Entry: 106e99680; end: 106e996af; -[SCSpectaclesDevice setEncryptionKey:] */

void FUN_106e99680(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x150) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e996b0; end: 106e996b7; -[SCSpectaclesDevice identifier] */

undefined8 FUN_106e996b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x158);
}



/* Entry: 106e996b8; end: 106e996e7; -[SCSpectaclesDevice setIdentifier:] */

void FUN_106e996b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x158);
  *(undefined8 *)(param_1 + 0x158) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e996e8; end: 106e996ef; -[SCSpectaclesDevice lastMediaCountSeenInResponse] */

undefined8 FUN_106e996e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x160);
}



/* Entry: 106e996f0; end: 106e996f7; -[SCSpectaclesDevice state] */

undefined8 FUN_106e996f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x168);
}



/* Entry: 106e996f8; end: 106e996ff; -[SCSpectaclesDevice setupComplete] */

undefined1 FUN_106e996f8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x57);
}



/* Entry: 106e99700; end: 106e99707; -[SCSpectaclesDevice deviceIsUpdatingFromOTAPostPairingPhase] */

undefined1 FUN_106e99700(long param_1)

{
  return *(undefined1 *)(param_1 + 0x58);
}



/* Entry: 106e99708; end: 106e9970f; -[SCSpectaclesDevice setDeviceIsUpdatingFromOTAPostPairingPhase:] */

void FUN_106e99708(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 106e99710; end: 106e99727; -[SCSpectaclesDevice featureCatalog] */

void FUN_106e99710(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x170);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e99728; end: 106e9972f; -[SCSpectaclesDevice isConnectedToUSB] */

undefined1 FUN_106e99728(long param_1)

{
  return *(undefined1 *)(param_1 + 0x59);
}



/* Entry: 106e99730; end: 106e99737; -[SCSpectaclesDevice timeOfCaptureLastViewed] */

undefined8 FUN_106e99730(long param_1)

{
  return *(undefined8 *)(param_1 + 0x178);
}



/* Entry: 106e99738; end: 106e9973f; -[SCSpectaclesDevice outstandingBluetoothRequest] */

undefined8 FUN_106e99738(long param_1)

{
  return *(undefined8 *)(param_1 + 0x180);
}



/* Entry: 106e99740; end: 106e9976f; -[SCSpectaclesDevice setOutstandingBluetoothRequest:] */

void FUN_106e99740(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x180);
  *(undefined8 *)(param_1 + 0x180) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e99770; end: 106e99777; -[SCSpectaclesDevice performer] */

undefined8 FUN_106e99770(long param_1)

{
  return *(undefined8 *)(param_1 + 0x188);
}


