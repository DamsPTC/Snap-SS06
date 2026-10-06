/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105a88434; end: 105a8843b; -[SCComposerSpectaclesHomeImportState__Enum init] */

void FUN_105a88434(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,7);
  return;
}



/* Entry: 105a8843c; end: 105a8843f; -[SCComposerSpectaclesHomePowerState__Enum init] */

void FUN_105a8843c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,5);
  return;
}



/* Entry: 105a88440; end: 105a88447; -[SCComposerSpectaclesHomeWiFiSignalLevel__Enum init] */

void FUN_105a88440(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,6);
  return;
}



/* Entry: 105a88448; end: 105a8844f; -[SCComposerSpectaclesOTAErrorType__Enum init] */

void FUN_105a88448(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,0x12);
  return;
}



/* Entry: 105a88450; end: 105a88457; -[SCComposerSpectaclesOTAStatus__Enum init] */

void FUN_105a88450(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,0x10);
  return;
}



/* Entry: 105a88458; end: 105a8845b; -[SCComposerSpectaclesTouchActionType__Enum init] */

void FUN_105a88458(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,5);
  return;
}



/* Entry: 105a8845c; end: 105a8848b; -[SCComposerSpectaclesHomeBatteryStatus initWithBatteryLevel:isCharging:isLowBattery:] */

void FUN_105a8845c(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000105a887f4(PTR_PTR_1126eb958);
  func_0x000105a88804(auStack_20);
  return;
}



/* Entry: 105a8848c; end: 105a8849f; +[SCComposerSpectaclesHomeBatteryStatus valdiMarshallableObjectDescriptor] */

void FUN_105a8848c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108d1c88;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105a884a0; end: 105a884cf; -[SCComposerSpectaclesHomeBluetoothConnectionStatus initWithConnectedOverBluetooth:] */

void FUN_105a884a0(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000105a887f4(PTR_PTR_1126eb960);
  func_0x000105a88804(auStack_20);
  return;
}



/* Entry: 105a884d0; end: 105a884e3; +[SCComposerSpectaclesHomeBluetoothConnectionStatus valdiMarshallableObjectDescriptor] */

void FUN_105a884d0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108d1ce8;
  param_1[1] = &PTR_DAT_1108d1d48;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105a884e4; end: 105a88503; -[SCComposerSpectaclesHomeContext init] */

void FUN_105a884e4(void)

{
  func_0x000105a887d8(PTR_PTR_1126eb968);
  return;
}



/* Entry: 105a88504; end: 105a88527; +[SCComposerSpectaclesHomeContext valdiMarshallableObjectDescriptor] */

void FUN_105a88504(undefined8 *param_1)

{
  *param_1 = &PTR_s_deviceContext_1108d1d88;
  param_1[1] = &PTR_s_SCBridgeObservable_1108d1e30;
  param_1[2] = &PTR_s_ob_v_1108d1d58;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105a88528; end: 105a8854f;  */

undefined8 FUN_105a88528(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(uint *)(param_2 + 1) & 1);
  return 0;
}



/* Entry: 105a88550; end: 105a885cf;  */

void FUN_105a88550(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105a88798;
  puStack_30 = &UNK_110842508;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105a885d0; end: 105a885ef; -[SCComposerSpectaclesHomeDeviceContext init] */

void FUN_105a885d0(void)

{
  func_0x000105a887d8(PTR_PTR_1126eb970);
  return;
}



/* Entry: 105a885f0; end: 105a88603; +[SCComposerSpectaclesHomeDeviceContext valdiMarshallableObjectDescriptor] */

void FUN_105a885f0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108d1e68;
  param_1[1] = &PTR_DAT_1108d20f0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105a88604; end: 105a8863f; -[SCComposerSpectaclesHomeImportStatus initWithCurrentState:totalTransferCount:untransferredCount:transferringCount:transferProgress:] */

void FUN_105a88604(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000105a887f4(PTR_PTR_1126eb978);
  func_0x000105a88804(auStack_20);
  return;
}



/* Entry: 105a88640; end: 105a88653; +[SCComposerSpectaclesHomeImportStatus valdiMarshallableObjectDescriptor] */

void FUN_105a88640(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108d2188;
  param_1[1] = &PTR_DAT_1108d2230;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105a88654; end: 105a88673; -[SCComposerSpectaclesHomeTweaks init] */

void FUN_105a88654(void)

{
  func_0x000105a887d8(PTR_PTR_1126eb980);
  return;
}



/* Entry: 105a88674; end: 105a88687; +[SCComposerSpectaclesHomeTweaks valdiMarshallableObjectDescriptor] */

void FUN_105a88674(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108d2240;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105a88688; end: 105a886bf; -[SCComposerSpectaclesHomeWiFiConnectionStatus initWithSignalLevel:] */

void FUN_105a88688(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eb988;
  uStack_20 = param_1;
  func_0x000105a88804(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 105a886c0; end: 105a886d3; +[SCComposerSpectaclesHomeWiFiConnectionStatus valdiMarshallableObjectDescriptor] */

void FUN_105a886c0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108d2300;
  param_1[1] = &PTR_DAT_1108d2348;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105a886d4; end: 105a886f3; -[SCComposerSpectaclesOTAInfo init] */

void FUN_105a886d4(void)

{
  func_0x000105a887d8(PTR_PTR_1126eb990);
  return;
}



/* Entry: 105a886f4; end: 105a88707; +[SCComposerSpectaclesOTAInfo valdiMarshallableObjectDescriptor] */

void FUN_105a886f4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108d2358;
  param_1[1] = &PTR_DAT_1108d23a0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105a88708; end: 105a8873f; -[SCComposerSpectaclesOTAState initWithStatus:info:] */

void FUN_105a88708(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eb998;
  uStack_20 = param_1;
  func_0x000105a88804(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 105a88740; end: 105a88753; +[SCComposerSpectaclesOTAState valdiMarshallableObjectDescriptor] */

void FUN_105a88740(undefined8 *param_1)

{
  *param_1 = &PTR_s_status_1108d23b0;
  param_1[1] = &PTR_DAT_1108d23f8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105a88754; end: 105a88783; -[SCComposerSpectaclesTouchpadPointer initWithPointerId:x:y:] */

void FUN_105a88754(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000105a887f4(PTR_PTR_1126eb9a0);
  func_0x000105a88804(auStack_20);
  return;
}



/* Entry: 105a88784; end: 105a88797; +[SCComposerSpectaclesTouchpadPointer valdiMarshallableObjectDescriptor] */

void FUN_105a88784(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108d2410;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105a88798; end: 105a887c7;  */

void FUN_105a88798(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105a887c8; end: 105a88823;  */

void FUN_105a887c8(undefined8 *param_1)

{
  undefined8 in_x9;
  undefined8 in_x10;
  
  *param_1 = in_x9;
  param_1[1] = in_x10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105a88824; end: 105a8882b; -[SCComposerSpectaclesTouchEventAction__Enum init] */

void FUN_105a88824(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,5);
  return;
}



/* Entry: 105a8882c; end: 105a8886b; -[SCComposerSpectaclesTomaTouch initWithX:y:] */

void FUN_105a8882c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eb9a8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 105a8886c; end: 105a88883; +[SCComposerSpectaclesTomaTouch valdiMarshallableObjectDescriptor] */

void FUN_105a8886c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_timestamp_1108d2470;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105a88884; end: 105a889bf; -[SCSpectaclesDeviceStatusBarEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a88884(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126c1db0;
  _objc_alloc(PTR_PTR_1126c1db0);
  lVar2 = param_1 + _DAT_11272e6bc;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c253460();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11272e6c0;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c249020();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11272e6c4;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c0e35c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3760(puVar1,param_2,lVar3,lVar5,lVar7,param_1);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_11272e6c8;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c252e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a889c0; end: 105a88aeb; -[SCSpectaclesDeviceStatusBarEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a889c0(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lStack_40;
  undefined *puStack_38;
  
  lVar5 = param_1 + _DAT_11272e6c8;
  _objc_loadWeakRetained();
  lVar1 = lVar5;
  func_0x00010c252e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  if (lVar1 == 0) {
    puStack_38 = PTR_PTR_1126eb9b0;
    plVar4 = &lStack_40;
    lStack_40 = param_1;
    _objc_msgSendSuper2(plVar4,PTR_s_end_1125c29d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    plVar2 = (long *)PTR_PTR_1126afc98;
    func_0x00010bf0c040();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_11272e6cc;
    _objc_retain();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(long **)(param_1 + lVar5) = plVar2;
    _objc_release(uVar3);
    _objc_retain(plVar2);
    func_0x00010bf6f440(lVar1);
    plVar4 = plVar2;
    func_0x00010c117720(plVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(plVar2);
    _objc_release(plVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 105a88aec; end: 105a88af3;  */

void FUN_105a88aec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 105a88af4; end: 105a88c37; -[SCSpectaclesDeviceStatusBarEntryPoint deviceStatusBarViewControllerDidTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a88af4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar3 = param_1 + _DAT_11272e6bc;
  _objc_loadWeakRetained();
  lVar6 = lVar3;
  func_0x00010c253460();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf486e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar6);
  _objc_release(lVar3);
  if (lVar2 != 0) {
    lVar6 = (long)_DAT_11272e6d0;
    lVar3 = *(long *)(param_1 + lVar6);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      lVar3 = param_1 + _DAT_11272e6d4;
      _objc_loadWeakRetained(lVar3);
      lVar1 = param_1 + _DAT_11272e6c8;
      _objc_loadWeakRetained(lVar1);
      lVar4 = lVar1;
      func_0x00010bfe3f40();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010bf22e20(lVar3,param_2,lVar2,lVar4,param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar1);
      _objc_release(lVar3);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar6),param_2,lVar5);
      _objc_release(lVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105a88c38; end: 105a88caf; -[SCSpectaclesDeviceStatusBarEntryPoint spectaclesHomeScopeWantsToDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a88c38(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272e6d0;
  lVar1 = *(long *)(param_1 + lVar2);
  _objc_retain(param_3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  if (lVar1 == param_3) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105a88cb0; end: 105a88d27; -[SCSpectaclesDeviceStatusBarEntryPoint spectaclesHomeScopeDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a88cb0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272e6d0;
  lVar1 = *(long *)(param_1 + lVar2);
  _objc_retain(param_3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  if (lVar1 == param_3) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105a88d28; end: 105a88da3; -[SCSpectaclesDeviceStatusBarEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a88d28(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272e6d0,0);
  _objc_destroyWeak(param_1 + _DAT_11272e6c8);
  _objc_destroyWeak(param_1 + _DAT_11272e6c4);
  _objc_destroyWeak(param_1 + _DAT_11272e6c0);
  _objc_destroyWeak(param_1 + _DAT_11272e6d4);
  _objc_destroyWeak(param_1 + _DAT_11272e6bc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272e6cc,0);
  return;
}



/* Entry: 105a88da4; end: 105a88ef3; -[SCSpectaclesDeviceStatusBarViewController initWithAppStatusProvider:spectaclesManager:onDemandResourceFetching:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105a88da4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126eb9b8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar4 = (long)_DAT_11272e6d8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11272e6dc;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b68a8;
    _objc_alloc();
    func_0x00010c0312e0();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272e6e0);
    *(undefined **)((long)puVar1 + (long)_DAT_11272e6e0) = puVar3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11272e6e4),param_6);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272e6e8);
    *(undefined **)((long)puVar1 + (long)_DAT_11272e6e8) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a88ef4; end: 105a8934b; -[SCSpectaclesDeviceStatusBarViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a88ef4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126eb9b8;
  lStack_98 = param_1;
  _objc_msgSendSuper2(&lStack_98,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar2);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4024000000000000);
  _objc_release(lVar20);
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126b08d8;
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100b74f58(0x4000000000000000,0x3fd0000000000000,0,0x3ff0000000000000,puVar1,lVar2,puVar3
                     );
  _objc_release(puVar3);
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126c1db8;
  _objc_alloc_init();
  lVar19 = (long)_DAT_11272e6ec;
  uVar18 = *(undefined8 *)(param_1 + lVar19);
  *(undefined **)(param_1 + lVar19) = puVar1;
  _objc_release(uVar18);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar19));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar19));
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar19);
  uStack_88 = uVar18;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar19);
  uStack_80 = uVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar19);
  uStack_78 = uVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar19;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar15;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar3);
  _objc_release(uVar15);
  _objc_release(lVar14);
  _objc_release(lVar19);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar18);
  _objc_release(lVar20);
  _objc_release(lVar2);
  _objc_release(uVar4);
  func_0x00010bee5500(param_1);
  uVar18 = *(undefined8 *)(param_1 + _DAT_11272e6d8);
  func_0x00010c269d40(uVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(uVar18);
  uVar18 = *(undefined8 *)(param_1 + _DAT_11272e6dc);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(uVar18);
  func_0x00010bee3540();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = param_1;
  func_0x00010be635a0();
  lVar20 = (long)_DAT_11272e6ec;
  uVar16 = *(ulong *)(param_1 + lVar20);
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010c071ae0();
  _objc_release(uVar16);
  if ((uVar17 & 1) == 0) {
    func_0x00010c2226c0(*(undefined8 *)(param_1 + lVar20));
    uVar18 = *(undefined8 *)(param_1 + lVar20);
    func_0x00010c29d560(uVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(param_1);
    _objc_release(uVar18);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105a8934c; end: 105a8940b; -[SCSpectaclesDeviceStatusBarViewController _updateView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a8934c(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = param_1;
  func_0x00010be635a0();
  lVar5 = (long)_DAT_11272e6ec;
  uVar2 = *(ulong *)(param_1 + lVar5);
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c071ae0();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    func_0x00010c2226c0(*(undefined8 *)(param_1 + lVar5),param_2,lVar1);
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c29d560(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(param_1);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a8940c; end: 105a894bf; -[SCSpectaclesDeviceStatusBarViewController _newViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_105a8940c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  lVar1 = param_1;
  func_0x00010bde6320();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b6a58;
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11272e6d8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b7160(puVar3,param_2,lVar1,uVar2,*(undefined8 *)(param_1 + _DAT_11272e6e0),
                        *(undefined8 *)(param_1 + _DAT_11272e6f0),
                        *(undefined8 *)(param_1 + _DAT_11272e6f4));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  return puVar3;
}



/* Entry: 105a894c0; end: 105a89513; -[SCSpectaclesDeviceStatusBarViewController _connectedDevice] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a894c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272e6d8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf486e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105a89514; end: 105a897b7; -[SCSpectaclesDeviceStatusBarViewController _updateflightManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a89514(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  lVar8 = param_1;
  func_0x00010bde6320();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar8;
  func_0x00010bfa1c80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb2940();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar8);
  if (lVar3 != 0) {
    lVar8 = (long)_DAT_11272e6f8;
    if (*(long *)(param_1 + lVar8) != lVar3) {
      _objc_retain(lVar3);
      uVar4 = *(undefined8 *)(param_1 + lVar8);
      *(long *)(param_1 + lVar8) = lVar3;
      _objc_release(uVar4);
      func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_11272e6e8));
      _objc_initWeak(auStack_78,param_1);
      uVar5 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010bfb2a80(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0e0ea0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_105a897b8;
      puStack_88 = &UNK_110842a38;
      _objc_copyWeak(auStack_80,auStack_78);
      uVar7 = uVar6;
      func_0x00010c25ff60(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar4);
      _objc_release(uVar5);
      uVar5 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010bfb2960(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0e0ea0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_a8,auStack_78);
      uVar7 = uVar6;
      func_0x00010c25ff60(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar4);
      _objc_release(uVar5);
      _objc_destroyWeak(auStack_a8);
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_78);
    }
  }
  _objc_release(lVar3);
  return;
}



/* Entry: 105a897b8; end: 105a898af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a897b8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = (long)_DAT_11272e6f0;
    lVar3 = *(long *)(param_1 + lVar2);
    lVar1 = param_2;
    func_0x00010c2827c0();
    if (lVar3 != lVar1) {
      lVar1 = param_2;
      func_0x00010c2827c0();
      *(long *)(param_1 + lVar2) = lVar1;
      func_0x00010bee3540(param_1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105a898b0; end: 105a898bf; -[SCSpectaclesDeviceStatusBarViewController deviceInfoViewDidClickAbortFlightButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a898b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c134750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272e6f8),PTR_s_requestAbortFlight_11262abf0);
  return;
}



/* Entry: 105a898c0; end: 105a898fb; -[SCSpectaclesDeviceStatusBarViewController deviceInfoViewDidTapBackground:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a898c0(long param_1)

{
  param_1 = param_1 + _DAT_11272e6e4;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf71020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a898fc; end: 105a8991f; -[SCSpectaclesDeviceStatusBarViewController statusCoordinator:needsToUpdateStateForDevice:] */

void FUN_105a898fc(undefined8 param_1)

{
  func_0x00010bee5500();
                    /* WARNING: Could not recover jumptable at 0x00010bee3550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateView_1125966f8);
  return;
}



/* Entry: 105a89920; end: 105a8999f; -[SCSpectaclesDeviceStatusBarViewController spectaclesDevice:didUpdateInfo:] */

void FUN_105a89920(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bde6320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  if (((param_4 & 0x801) != 0) && (param_3 == lVar1)) {
                    /* WARNING: Could not recover jumptable at 0x00010bee3550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateView_1125966f8);
    return;
  }
  return;
}



/* Entry: 105a899a0; end: 105a899a3; -[SCSpectaclesDeviceStatusBarViewController spectaclesDeviceDidUpdateDeviceName:] */

void FUN_105a899a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee3550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateView_1125966f8);
  return;
}



/* Entry: 105a899a4; end: 105a89a2f; -[SCSpectaclesDeviceStatusBarViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a899a4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272e6e8,0);
  _objc_storeStrong(param_1 + _DAT_11272e6ec,0);
  _objc_storeStrong(param_1 + _DAT_11272e6f8,0);
  _objc_destroyWeak(param_1 + _DAT_11272e6e4);
  _objc_storeStrong(param_1 + _DAT_11272e6e0,0);
  _objc_storeStrong(param_1 + _DAT_11272e6dc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272e6d8,0);
  return;
}



/* Entry: 105a89a30; end: 105a89a3b; -[SCSpectaclesComposerImageLoadRequest cancel] */

void FUN_105a89a30(long param_1)

{
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



/* Entry: 105a89a3c; end: 105a89a43; -[SCSpectaclesComposerImageLoadRequest isCancelled] */

undefined1 FUN_105a89a3c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105a89a44; end: 105a89b27; -[SCSpectaclesComposerThumbnailLoader initWithSpectaclesManager:asyncQueueProvider:] */

undefined1 *
FUN_105a89a44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126eb9c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c11e0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a89b28; end: 105a89b93; -[SCSpectaclesComposerThumbnailLoader supportedURLSchemes] */

undefined * FUN_105a89b28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined ***pppuVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [128];
  long lStack_88;
  undefined **ppuStack_20;
  long lStack_18;
  
  pppuVar6 = &ppuStack_20;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110e1a858;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar2 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    func_0x00010bf44780(PTR__OBJC_CLASS___NSURLComponents_1126ae5c8,param_2,pppuVar6,0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    puVar3 = puVar2;
    func_0x00010c11d4e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf529e0();
    func_0x00010bf71fe0(puVar1,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    lStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    puVar3 = puVar2;
    func_0x00010c11d4e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf52a60();
    if (puVar4 != (undefined *)0x0) {
      lVar8 = *plStack_140;
      do {
        puVar9 = (undefined *)0x0;
        do {
          if (*plStack_140 != lVar8) {
            _objc_enumerationMutation(puVar3);
          }
          uVar7 = *(undefined8 *)(lStack_148 + (long)puVar9 * 8);
          uVar5 = uVar7;
          func_0x00010c296d80(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0d4f60(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar1,param_2,uVar5,uVar7);
          _objc_release(uVar7);
          _objc_release(uVar5);
          puVar9 = puVar9 + 1;
        } while (puVar4 != puVar9);
        puVar4 = puVar3;
        func_0x00010bf52a60(puVar3,param_2,&uStack_150,auStack_108,0x10);
      } while (puVar4 != (undefined *)0x0);
    }
    _objc_release(puVar3);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
      ___stack_chk_fail();
      if ((undefined *)0x11 < puVar2 + -4) {
        return (undefined *)0x5;
      }
      return (undefined *)(ulong)*(uint *)(&UNK_10df358a8 + (long)(puVar2 + -4) * 4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar1;
}



/* Entry: 105a89b94; end: 105a89b9b; -[SCSpectaclesComposerThumbnailLoader requestPayloadWithURL:error:] */

undefined * FUN_105a89b94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  func_0x00010bf44780(PTR__OBJC_CLASS___NSURLComponents_1126ae5c8,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puVar2 = puVar1;
  func_0x00010c11d4e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf529e0();
  func_0x00010bf71fe0(puVar4,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  puVar2 = puVar1;
  func_0x00010c11d4e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    lVar7 = *plStack_120;
    do {
      puVar8 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(puVar2);
        }
        uVar6 = *(undefined8 *)(lStack_128 + (long)puVar8 * 8);
        uVar5 = uVar6;
        func_0x00010c296d80(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d4f60(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar4,param_2,uVar5,uVar6);
        _objc_release(uVar6);
        _objc_release(uVar5);
        puVar8 = puVar8 + 1;
      } while (puVar3 != puVar8);
      puVar3 = puVar2;
      func_0x00010bf52a60(puVar2,param_2,&uStack_130,auStack_e8,0x10);
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  ___stack_chk_fail();
  if (puVar1 + -4 < (undefined *)0x12) {
    return (undefined *)(ulong)*(uint *)(&UNK_10df358a8 + (long)(puVar1 + -4) * 4);
  }
  return (undefined *)0x5;
}



/* Entry: 105a89b9c; end: 105a89e2f; -[SCSpectaclesComposerThumbnailLoader loadImageWithRequestPayload:parameters:completion:] */

void FUN_105a89b9c(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126c1dc0;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_retain(param_3);
  _objc_opt_class(puVar3);
  ppuVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  ppuVar1 = param_3;
  if (((ulong)ppuVar4 & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
  _objc_release(param_3);
  ppuVar5 = ppuVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  ppuVar6 = ppuVar5;
  _objc_opt_isKindOfClass(ppuVar5,puVar3);
  ppuVar4 = ppuVar5;
  if (((ulong)ppuVar6 & 1) == 0) {
    ppuVar4 = (undefined **)0x0;
  }
  _objc_retain(ppuVar4);
  _objc_release(ppuVar5);
  ppuVar5 = ppuVar4;
  func_0x00010c08fa60();
  if (ppuVar5 == (undefined **)0x0) {
    if (param_6 == 0) goto LAB_105a89dd0;
    ppuVar5 = &PTR____CFConstantStringClassReference_110e1a8b8;
    func_0x000108543ce4(&PTR____CFConstantStringClassReference_110e1a8b8);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_6 + 0x10))(param_6,0,ppuVar5);
  }
  else {
    ppuVar6 = ppuVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    ppuVar7 = ppuVar6;
    _objc_opt_isKindOfClass(ppuVar6,puVar3);
    ppuVar5 = ppuVar6;
    if (((ulong)ppuVar7 & 1) == 0) {
      ppuVar5 = (undefined **)0x0;
    }
    _objc_retain(ppuVar5);
    _objc_release(ppuVar6);
    _objc_initWeak(auStack_68,param_1);
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_105a89e30;
    puStack_a8 = &UNK_1108b0750;
    _objc_retain(puVar2);
    puStack_a0 = puVar2;
    _objc_copyWeak(auStack_80,auStack_68);
    _objc_retain(ppuVar4);
    ppuStack_98 = ppuVar4;
    _objc_retain(ppuVar5);
    ppuStack_90 = ppuVar5;
    uStack_78 = param_4;
    uStack_70 = param_5;
    _objc_retain(param_6);
    lStack_88 = param_6;
    func_0x000100a0df38(uVar8,&puStack_c0);
    _objc_release(lStack_88);
    _objc_release(ppuStack_90);
    _objc_release(ppuStack_98);
    _objc_destroyWeak(auStack_80);
    _objc_release(puStack_a0);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(ppuVar5);
LAB_105a89dd0:
  _objc_release(ppuVar4);
  _objc_release(ppuVar1);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105a89e30; end: 105a89e83;  */

void FUN_105a89e30(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c06e0e0();
  if ((uVar1 & 1) != 0) {
    return;
  }
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be72000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a89e84; end: 105a8a087; -[SCSpectaclesComposerThumbnailLoader _performLoadingImageWithContentId:deviceSerialNumber:parameters:completion:] */

void FUN_105a89e84(long param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5,
                  ulong param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  if (param_4 == 0) {
    uVar8 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0b8300();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010bf71260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf4df00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = lVar4;
  func_0x00010bf63a60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    if (param_7 == 0) goto LAB_105a8a040;
    ppuVar7 = &PTR____CFConstantStringClassReference_110e1a8d8;
    func_0x000108543ce4(&PTR____CFConstantStringClassReference_110e1a8d8);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_7 + 0x10))(param_7,0,ppuVar7);
  }
  else {
    ppuVar5 = (undefined **)PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar5;
    if ((0 < (long)param_5) && (0 < (long)param_6)) {
      func_0x00010c14e680((double)param_5,(double)param_6,ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar5);
    }
    if (param_7 != 0) {
      puVar6 = PTR_PTR_1126b27a8;
      func_0x00010bfe9800(PTR_PTR_1126b27a8);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_7 + 0x10))(param_7,puVar6,0);
      _objc_release(puVar6);
    }
  }
  _objc_release(ppuVar7);
LAB_105a8a040:
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(uVar8);
  _objc_release(param_7);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a8a088; end: 105a8a0c3; -[SCSpectaclesComposerThumbnailLoader .cxx_destruct] */

void FUN_105a8a088(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a8a0c4; end: 105a8a277; -[SCSpectaclesHomeComposerImageLoaderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a8a0c4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar1 = param_1 + _DAT_11272e70c;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c074be0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar4 != 0) {
    puVar5 = PTR_PTR_1126c1dc8;
    _objc_alloc();
    lVar1 = param_1 + _DAT_11272e710;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar1;
    func_0x00010c249020();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + _DAT_11272e714;
    _objc_loadWeakRetained(lVar2);
    lVar4 = lVar2;
    func_0x00010bf0c120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04af00(puVar5,param_2,lVar3,lVar4);
    lVar7 = (long)_DAT_11272e718;
    uVar6 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar5;
    _objc_release(uVar6);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar3);
    _objc_release(lVar1);
    lVar1 = param_1 + _DAT_11272e71c;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf44b60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,*(undefined8 *)(param_1 + lVar7));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c126840(lVar3,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(lVar3);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 105a8a278; end: 105a8a35b; -[SCSpectaclesHomeComposerImageLoaderEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a8a278(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lStack_50;
  undefined *puStack_48;
  
  if (*(long *)(param_1 + _DAT_11272e718) != 0) {
    lVar1 = param_1 + _DAT_11272e71c;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf44b60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2820a0(lVar3);
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  puStack_48 = PTR_PTR_1126eb9c8;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a8a35c; end: 105a8a3bb; -[SCSpectaclesHomeComposerImageLoaderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a8a35c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272e710);
  _objc_destroyWeak(param_1 + _DAT_11272e714);
  _objc_destroyWeak(param_1 + _DAT_11272e71c);
  _objc_destroyWeak(param_1 + _DAT_11272e70c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272e718,0);
  return;
}



/* Entry: 105a8a3bc; end: 105a8a4c7; -[SCSpectaclesKnobsController initWithKnobsRPCManager:locationManager:blizzardLogger:] */

undefined1 *
FUN_105a8a3bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126eb9d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar3);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + 0x18));
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar3);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + 0x20));
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x38) = 0;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a8a4c8; end: 105a8a517; +[SCSpectaclesKnobsController _restartRequiredKnobsFromKnobs:] */

void FUN_105a8a4c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf00d20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105a8a518; end: 105a8a60f;  */

undefined1 FUN_105a8a518(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = param_2;
  func_0x00010c087200(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0be2c0();
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 105a8a610; end: 105a8a633;  */

void FUN_105a8a610(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 105a8a634; end: 105a8a7bf; +[SCSpectaclesKnobsController _knobArray:isEqualTo:] */

undefined8 FUN_105a8a634(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar8 = param_3;
  func_0x00010bf529e0();
  uVar1 = param_4;
  func_0x00010bf529e0();
  if (uVar8 == uVar1) {
    uVar8 = param_3;
    func_0x00010bf529e0();
    if (uVar8 != 0) {
      uVar8 = 0;
      do {
        uVar1 = param_3;
        func_0x00010c0dfd40(param_3,param_2,uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_4;
        func_0x00010c0dfd40(param_4,param_2,uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar1;
        func_0x00010c071ae0(uVar1,param_2,uVar2);
        if ((uVar3 & 1) == 0) {
          uVar3 = uVar1;
          func_0x00010c159c20();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c296d80();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar2;
          func_0x00010c159c20(uVar2);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010c296d80();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar4;
          func_0x00010c071ae0(uVar4,param_2,uVar6);
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(uVar4);
          _objc_release(uVar3);
          if ((uVar7 & 1) == 0) {
            _objc_release(uVar2);
            _objc_release(uVar1);
            goto LAB_105a8a78c;
          }
        }
        _objc_release(uVar2);
        _objc_release(uVar1);
        uVar8 = uVar8 + 1;
        uVar1 = param_3;
        func_0x00010bf529e0();
      } while (uVar8 < uVar1);
    }
    uVar9 = 1;
  }
  else {
LAB_105a8a78c:
    uVar9 = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar9;
}



/* Entry: 105a8a7c0; end: 105a8a98f; +[SCSpectaclesKnobsController _changedKnobsBetweenOldKnobs:currentKnobs:] */

void FUN_105a8a7c0(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_208 [128];
  long lStack_188;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar9 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf51e00();
  _objc_release(uVar1);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(uVar2);
  uVar1 = uVar2;
  func_0x00010bf52a60();
  if (uVar1 != 0) {
    lVar13 = *plStack_120;
    do {
      uVar14 = 0;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(uVar2);
        }
        uVar12 = *(undefined8 *)(lStack_128 + uVar14 * 8);
        uVar3 = param_3;
        func_0x00010c0e00e0(param_3,param_2,uVar12);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_4;
        func_0x00010c0e00e0(param_4,param_2,uVar12);
        _objc_retainAutoreleasedReturnValue();
        if ((uVar3 != 0 && lVar4 != 0) &&
           (uVar5 = uVar3, func_0x00010c071ae0(uVar3,param_2,lVar4), (uVar5 & 1) == 0)) {
          func_0x00010befa120(puVar10,param_2,lVar4);
        }
        _objc_release(lVar4);
        _objc_release(uVar3);
        uVar14 = uVar14 + 1;
      } while (uVar1 != uVar14);
      uVar1 = uVar2;
      puVar9 = &uStack_130;
      func_0x00010bf52a60();
    } while (uVar1 != 0);
  }
  _objc_release(uVar2);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    plStack_240 = (long *)0x0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    puVar6 = *(undefined **)(param_3 + 0x10);
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf52a60();
    if (puVar7 != (undefined *)0x0) {
      lVar13 = *plStack_240;
      do {
        puVar11 = (undefined *)0x0;
        do {
          if (*plStack_240 != lVar13) {
            _objc_enumerationMutation(puVar6);
          }
          puVar10 = *(undefined **)(lStack_248 + (long)puVar11 * 8);
          puVar8 = puVar10;
          func_0x00010bfde980();
          if ((undefined8 *)puVar8 == puVar9) {
            _objc_retain(puVar10);
            goto LAB_105a8aa6c;
          }
          puVar11 = puVar11 + 1;
        } while (puVar7 != puVar11);
        puVar7 = puVar6;
        func_0x00010bf52a60(puVar6,param_2,&uStack_250,auStack_208,0x10);
      } while (puVar7 != (undefined *)0x0);
    }
    puVar10 = (undefined *)0x0;
LAB_105a8aa6c:
    _objc_release(puVar6);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
      ___stack_chk_fail();
      puVar10 = puVar6;
      func_0x00010c087220();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be46a00(puVar6,param_2,puVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      puVar10 = puVar6;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 105a8a990; end: 105a8aaaf; -[SCSpectaclesKnobsController knobIdFromHash:] */

void FUN_105a8a990(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(lVar1);
        }
        lVar4 = *(long *)(lStack_118 + lVar6 * 8);
        lVar3 = lVar4;
        func_0x00010bfde980();
        if (lVar3 == param_3) {
          _objc_retain(lVar4);
          goto LAB_105a8aa6c;
        }
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
  lVar4 = 0;
LAB_105a8aa6c:
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    lVar2 = lVar1;
    func_0x00010c087220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be46a00(lVar1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar4 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 105a8aab0; end: 105a8aaff; -[SCSpectaclesKnobsController knobFromHash:] */

void FUN_105a8aab0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c087220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be46a00(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105a8ab00; end: 105a8ad5f; -[SCSpectaclesKnobsController fetchAllKnobs] */

void FUN_105a8ab00(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined1 *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  puVar2 = auStack_78;
  _objc_initWeak(puVar2,param_1);
  _dispatch_group_create();
  _dispatch_group_enter();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_105a8ad60;
  puStack_98 = &UNK_1108576a8;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(puVar3);
  puStack_90 = puVar3;
  _objc_retain(puVar2);
  puStack_88 = puVar2;
  func_0x00010be11fe0(param_1);
  _dispatch_group_enter(puVar2);
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puStack_e8 = puVar1;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_105a8aef4;
  puStack_d0 = &UNK_1108576a8;
  _objc_copyWeak(auStack_b8,auStack_78);
  _objc_retain(puVar4);
  puStack_c8 = puVar4;
  _objc_retain(puVar2);
  puStack_c0 = puVar2;
  func_0x00010be12340(param_1);
  uVar5 = 0;
  _dispatch_get_global_queue(0,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_130 = puVar1;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_105a8b088;
  puStack_118 = &UNK_11085ae98;
  puStack_110 = puVar2;
  uStack_108 = param_1;
  puStack_100 = puVar3;
  puStack_f8 = puVar4;
  _objc_retain(puVar4);
  _objc_retain(puVar3);
  _objc_retain(puVar2);
  _objc_copyWeak(auStack_f0,auStack_78);
  func_0x00010007380c(uVar5,&puStack_130);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_f0);
  _objc_release(puStack_f8);
  _objc_release(puStack_100);
  _objc_release(puStack_110);
  _objc_release(puStack_c0);
  _objc_release(puStack_c8);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_b8);
  _objc_release(puStack_88);
  _objc_release(puStack_90);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 105a8ad60; end: 105a8aef3;  */

void FUN_105a8ad60(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  code *pcStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined1 auStack_298 [8];
  undefined8 uStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_2;
  _objc_retain(param_2);
  lVar4 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar4 != 0) {
    _os_unfair_lock_lock(lVar4 + 0x38);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_2);
    lVar1 = param_2;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar7 = *plStack_120;
      do {
        lVar8 = 0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(param_2);
          }
          uVar5 = *(undefined8 *)(lStack_128 + lVar8 * 8);
          uVar6 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010c087200();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(uVar6);
          _objc_release(uVar5);
          lVar8 = lVar8 + 1;
        } while (lVar1 != lVar8);
        lVar1 = param_2;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    unaff_x22 = 0;
    _objc_release(param_2);
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
    _os_unfair_lock_unlock(lVar4 + 0x38);
  }
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(lVar4 + 0x38);
  __Unwind_Resume();
  pcStack_138 = FUN_105a8aef4;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(lVar2);
  lVar4 = param_2 + 0x30;
  _objc_loadWeakRetained();
  if (lVar4 != 0) {
    _os_unfair_lock_lock(lVar4 + 0x38);
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    _objc_retain(lVar2);
    lVar1 = lVar2;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar7 = *plStack_250;
      do {
        lVar8 = 0;
        do {
          if (*plStack_250 != lVar7) {
            _objc_enumerationMutation(lVar2);
          }
          uVar5 = *(undefined8 *)(lStack_258 + lVar8 * 8);
          uVar6 = *(undefined8 *)(param_2 + 0x20);
          func_0x00010c087200(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(uVar6);
          _objc_release(uVar5);
          lVar8 = lVar8 + 1;
        } while (lVar1 != lVar8);
        lVar1 = lVar2;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    unaff_x22 = 0;
    _objc_release(lVar2);
    _dispatch_group_leave(*(undefined8 *)(param_2 + 0x28));
    _os_unfair_lock_unlock(lVar4 + 0x38);
  }
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(lVar4 + 0x38);
  lVar1 = lVar2;
  __Unwind_Resume();
  pcStack_268 = FUN_105a8b088;
  uVar6 = *(undefined8 *)(lVar1 + 0x20);
  uVar5 = 0;
  uStack_290 = unaff_x22;
  lStack_288 = param_2;
  lStack_280 = lVar2;
  lStack_278 = lVar4;
  ppuStack_270 = &puStack_140;
  _dispatch_time(0,5000000000);
  _dispatch_group_wait(uVar6,uVar5);
  lVar4 = *(long *)(lVar1 + 0x28);
  _os_unfair_lock_lock(lVar4 + 0x38);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
  func_0x00010bef7f60(puVar3);
  puStack_2c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2b8 = 0xc2000000;
  pcStack_2b0 = FUN_105a8b19c;
  puStack_2a8 = &UNK_110841fb0;
  _objc_copyWeak(auStack_298,lVar1 + 0x40);
  puStack_2a0 = puVar3;
  _objc_retain(puVar3);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_2c0);
  _objc_release(puStack_2a0);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_298);
  _os_unfair_lock_unlock(lVar4 + 0x38);
  return;
}



/* Entry: 105a8aef4; end: 105a8b087;  */

void FUN_105a8aef4(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined1 auStack_168 [8];
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    _os_unfair_lock_lock(lVar3 + 0x38);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_2);
    lVar1 = param_2;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar6 = *plStack_120;
      do {
        lVar7 = 0;
        do {
          if (*plStack_120 != lVar6) {
            _objc_enumerationMutation(param_2);
          }
          uVar4 = *(undefined8 *)(lStack_128 + lVar7 * 8);
          uVar5 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010c087200(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(uVar5);
          _objc_release(uVar4);
          lVar7 = lVar7 + 1;
        } while (lVar1 != lVar7);
        lVar1 = param_2;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    unaff_x22 = 0;
    _objc_release(param_2);
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
    _os_unfair_lock_unlock(lVar3 + 0x38);
  }
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(lVar3 + 0x38);
  lVar1 = param_2;
  __Unwind_Resume();
  pcStack_138 = FUN_105a8b088;
  uVar5 = *(undefined8 *)(lVar1 + 0x20);
  uVar4 = 0;
  uStack_160 = unaff_x22;
  lStack_158 = param_1;
  lStack_150 = param_2;
  lStack_148 = lVar3;
  puStack_140 = &stack0xfffffffffffffff0;
  _dispatch_time(0,5000000000);
  _dispatch_group_wait(uVar5,uVar4);
  lVar3 = *(long *)(lVar1 + 0x28);
  _os_unfair_lock_lock(lVar3 + 0x38);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
  func_0x00010bef7f60(puVar2);
  puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_188 = 0xc2000000;
  pcStack_180 = FUN_105a8b19c;
  puStack_178 = &UNK_110841fb0;
  _objc_copyWeak(auStack_168,lVar1 + 0x40);
  puStack_170 = puVar2;
  _objc_retain(puVar2);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_190);
  _objc_release(puStack_170);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_168);
  _os_unfair_lock_unlock(lVar3 + 0x38);
  return;
}



/* Entry: 105a8b088; end: 105a8b19b;  */

void FUN_105a8b088(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = 0;
  _dispatch_time(0,5000000000);
  _dispatch_group_wait(uVar3,uVar1);
  lVar4 = *(long *)(param_1 + 0x28);
  _os_unfair_lock_lock(lVar4 + 0x38);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
  func_0x00010bef7f60(puVar2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105a8b19c;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x40);
  puStack_40 = puVar2;
  _objc_retain(puVar2);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_60);
  _objc_release(puStack_40);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_38);
  _os_unfair_lock_unlock(lVar4 + 0x38);
  return;
}



/* Entry: 105a8b19c; end: 105a8b24f;  */

void FUN_105a8b19c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(lVar1 + 8);
    *(undefined8 *)(lVar1 + 8) = uVar2;
    _objc_release(uVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0d3c80();
    uVar4 = *(undefined8 *)(lVar1 + 0x10);
    *(undefined8 *)(lVar1 + 0x10) = uVar2;
    _objc_release(uVar4);
    lVar3 = lVar1;
    func_0x00010bf6b020(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf00d20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c087360(lVar3,param_2,lVar1,uVar2,0);
    _objc_release(uVar2);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a8b250; end: 105a8b307; -[SCSpectaclesKnobsController didToggleKnob:enabled:] */

void FUN_105a8b250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105a8b308;
  puStack_50 = &UNK_1108a0880;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105a8b318;
  puStack_80 = &UNK_1108d2510;
  uStack_78 = param_1;
  uStack_70 = param_4;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x00010c0be2c0(param_3,param_2,&puStack_68,&puStack_98);
  _objc_release(uStack_40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a8b308; end: 105a8b317;  */

void FUN_105a8b308(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be013b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__didToggleHermosaKnobWithKnobId__11255de88,
             *(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x30));
  return;
}



/* Entry: 105a8b318; end: 105a8b373;  */

void FUN_105a8b318(long param_1,long param_2)

{
  long lVar1;
  
  if (param_2 == 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010be013c0(lVar1,0,*(undefined1 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      func_0x00010c0a92c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 105a8b374; end: 105a8b377; -[SCSpectaclesKnobsController didSelectOption:fromOptions:forKnob:] */

void FUN_105a8b374(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be002d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didSelectOption_fromOptions_for_11255da50);
  return;
}



/* Entry: 105a8b378; end: 105a8b5a3; -[SCSpectaclesKnobsController submitChanges] */

void FUN_105a8b378(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  _objc_opt_class();
  func_0x00010be953e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar6 = *plStack_130;
    do {
      lVar4 = 0;
      do {
        if (*plStack_130 != lVar6) {
          _objc_enumerationMutation(lVar2);
        }
        uVar5 = *(undefined8 *)(lStack_138 + lVar4 * 8);
        uStack_170 = 0;
        uStack_160 = 0x3032000000;
        pcStack_158 = FUN_105a8b5a4;
        uStack_150 = 0x105a8b5b4;
        uStack_148 = 0;
        puStack_168 = &uStack_170;
        func_0x00010c087200(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0be2c0();
        _objc_release(uVar5);
        func_0x00010befa120(puVar1);
        param_2 = 8;
        __Block_object_dispose(&uStack_170);
        _objc_release(uStack_148);
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  func_0x00010c16f920(*(undefined8 *)(param_1 + 0x20));
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(puVar1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105a8b5a4; end: 105a8b5bb;  */

void FUN_105a8b5a4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105a8b5bc; end: 105a8b6e7;  */

void FUN_105a8b5bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126c1a20;
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c065640(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c227f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  puVar2 = PTR_PTR_1126c1dd0;
  func_0x00010c227ee0(PTR_PTR_1126c1dd0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c1a18;
  _objc_alloc();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c087300(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0871c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c045800();
  _objc_release(param_2);
  lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined **)(lVar6 + 0x28) = puVar3;
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar7);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a8b6e8; end: 105a8b6eb;  */

void FUN_105a8b6e8(void)

{
  return;
}



/* Entry: 105a8b6ec; end: 105a8b6f3; -[SCSpectaclesKnobsController restartSpectacles] */

void FUN_105a8b6ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13bff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_restartSpectacles_11262ca18);
  return;
}



/* Entry: 105a8b6f4; end: 105a8b6fb; -[SCSpectaclesKnobsController _knobForKnobId:] */

void FUN_105a8b6f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 105a8b6fc; end: 105a8b703; -[SCSpectaclesKnobsController _setKnob:forKnobId:] */

void FUN_105a8b6fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_setObject_forKeyedSubscript__112651bb8);
  return;
}



/* Entry: 105a8b704; end: 105a8b7f7; -[SCSpectaclesKnobsController _updateKnobWithKnobId:toNewInput:] */

void FUN_105a8b704(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be46a00(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c1dd8;
  _objc_alloc(PTR_PTR_1126c1dd8);
  uVar3 = uVar1;
  func_0x00010c087300(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0871c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021280(puVar2,param_2,param_3,uVar3,uVar4,param_4);
  _objc_release(param_4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010bea5060(param_1,param_2,puVar2,param_3);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105a8b7f8; end: 105a8b8c7; -[SCSpectaclesKnobsController _fetchKnobsFromHermosaWithCompletion:] */

void FUN_105a8b7f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfbc3e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105a8b8c8;
  puStack_40 = &UNK_11084e3a0;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c297260(uVar2,param_2,&puStack_58,0);
  _objc_release(uVar2);
  func_0x00010bfc2340(*(undefined8 *)(param_1 + 0x20));
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105a8b8c8; end: 105a8b8d3;  */

void FUN_105a8b8c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105a8b8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105a8b8d4; end: 105a8ba3f; -[SCSpectaclesKnobsController _fetchLocalKnobsWithCompletion:] */

undefined * FUN_105a8b8d4(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  puVar2 = PTR_PTR_1126c1de0;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c09e1a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c1de8;
  func_0x00010bf146c0(*(undefined8 *)(param_1 + 0x18));
  func_0x00010c272dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c1dd8;
  _objc_alloc();
  puVar5 = puVar4;
  func_0x000105a90780();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x000105a90798();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021280();
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_3 + 0x10))(param_3,puVar5);
  _objc_release(param_3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = puVar2;
  _objc_opt_class();
  func_0x00010be953e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  _objc_opt_class(puVar2);
  func_0x00010be953e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(puVar2);
  uVar1 = (uint)puVar2;
  func_0x00010be469e0();
  _objc_release(puVar4);
  _objc_release(puVar3);
  return (undefined *)(ulong)(uVar1 ^ 1);
}



/* Entry: 105a8ba40; end: 105a8bac3; -[SCSpectaclesKnobsController _needsSave] */

uint FUN_105a8ba40(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1;
  _objc_opt_class();
  func_0x00010be953e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  _objc_opt_class(param_1);
  func_0x00010be953e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_1);
  uVar1 = (uint)param_1;
  func_0x00010be469e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  return uVar1 ^ 1;
}



/* Entry: 105a8bac4; end: 105a8bc6f; -[SCSpectaclesKnobsController _didToggleLocationSharingTo:] */

void FUN_105a8bac4(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if ((int)param_3 == 0) {
    func_0x00010c255ae0();
LAB_105a8bb10:
    puVar6 = PTR_PTR_1126c1de8;
    func_0x00010c272dc0(PTR_PTR_1126c1de8,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c1de0;
    func_0x00010c09e1a0(PTR_PTR_1126c1de0,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_1;
    func_0x00010beda180(param_1,param_2,puVar2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    func_0x00010be627e0(param_1);
    puVar4 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf00d20(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c087360(puVar4,param_2,param_1,uVar5,puVar3);
    _objc_release(uVar5);
  }
  else {
    func_0x00010c24dee0();
    if (lVar1 == 2) {
      uVar5 = 1;
LAB_105a8bbbc:
      puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                          &PTR____CFConstantStringClassReference_110e1a8f8,uVar5,0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (lVar1 == 1) goto LAB_105a8bb10;
      if (lVar1 == 0) {
        uVar5 = 0;
        goto LAB_105a8bbbc;
      }
      puVar6 = (undefined *)0x0;
    }
    puVar7 = param_1;
    func_0x00010be627e0(param_1);
    puVar2 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = *(undefined **)(param_1 + 0x10);
    func_0x00010bf00d20(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c087320(puVar2,param_2,param_1,puVar6,puVar4,puVar7);
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105a8bc70; end: 105a8bd43; -[SCSpectaclesKnobsController _didToggleHermosaKnobWithKnobId:toEnabled:] */

void FUN_105a8bc70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c1de8;
  func_0x00010c272dc0(PTR_PTR_1126c1de8,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beda180(param_1,param_2,param_3,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be627e0(param_1);
  lVar3 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf00d20(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c087360(lVar3,param_2,param_1,uVar4,lVar2);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a8bd44; end: 105a8be1f; -[SCSpectaclesKnobsController _didSelectOption:fromOptions:forKnob:] */

void FUN_105a8bd44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c1de8;
  func_0x00010c0d1e00(PTR_PTR_1126c1de8,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beda180(param_1,param_2,param_5,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be627e0(param_1);
  lVar3 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf00d20(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c087360(lVar3,param_2,param_1,uVar4,lVar2);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105a8be20; end: 105a8c087; -[SCSpectaclesKnobsController spectaclesKnobsRPCManager:didReceiveSettingsInKnobsCategoryResponse:] */

void FUN_105a8be20(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined **unaff_x20;
  undefined8 unaff_x22;
  undefined *unaff_x23;
  undefined8 unaff_x24;
  undefined *puVar8;
  undefined8 unaff_x27;
  long unaff_x28;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_218 [128];
  long lStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined **ppuStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_140 = param_1;
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_4);
  puVar5 = auStack_f0;
  lStack_138 = param_4;
  func_0x00010bf52a60(param_4,param_2,&uStack_130,puVar5,0x10);
  if (param_4 != 0) {
    unaff_x28 = *plStack_120;
    unaff_x20 = &PTR_PTR_1126c1000;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != unaff_x28) {
          _objc_enumerationMutation(lStack_138);
        }
        unaff_x23 = PTR_PTR_1126c1de8;
        unaff_x24 = *(undefined8 *)(lStack_128 + lVar7 * 8);
        uVar3 = unaff_x24;
        func_0x00010c296d80(unaff_x24);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = unaff_x24;
        func_0x00010c0ec860(unaff_x24);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c087240(unaff_x23,param_2,uVar3,uVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        _objc_release(uVar3);
        puVar6 = PTR_PTR_1126c1de0;
        uVar3 = unaff_x24;
        func_0x00010c227ea0(unaff_x24);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfe0c20(puVar6,param_2,uVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        puVar8 = PTR_PTR_1126c1dd8;
        _objc_alloc(PTR_PTR_1126c1dd8);
        unaff_x27 = unaff_x24;
        func_0x00010c2711a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf6e2c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c021280(puVar8,param_2,puVar6,unaff_x27,unaff_x24,unaff_x23);
        _objc_release(unaff_x24);
        _objc_release(unaff_x27);
        func_0x00010befa120(puVar1,param_2,puVar8);
        _objc_release(puVar8);
        _objc_release(puVar6);
        _objc_release(unaff_x23);
        lVar7 = lVar7 + 1;
      } while (param_4 != lVar7);
      puVar5 = auStack_f0;
      param_4 = lStack_138;
      func_0x00010bf52a60(lStack_138,param_2,&uStack_130,puVar5,0x10);
      unaff_x22 = 0;
    } while (param_4 != 0);
  }
  lVar7 = lStack_138;
  _objc_release(lStack_138);
  func_0x00010bf43d60(*(undefined8 *)(lStack_140 + 0x28),param_2,puVar1);
  _objc_release(puVar1);
  lVar2 = lVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = PTR_PTR_1126c1df0;
  lStack_158 = lVar7;
  pcStack_148 = FUN_105a8c088;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_190 = unaff_x28;
  uStack_188 = unaff_x27;
  uStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  uStack_170 = unaff_x22;
  puStack_168 = puVar1;
  ppuStack_160 = unaff_x20;
  puStack_150 = &stack0xfffffffffffffff0;
  if ((int)puVar5 == 0) {
    uVar3 = *(undefined8 *)(lVar2 + 8);
    func_0x00010c0d3c80();
    puVar6 = *(undefined **)(lVar2 + 0x10);
    *(undefined8 *)(lVar2 + 0x10) = uVar3;
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + 8);
    func_0x00010bf51e00(uVar3);
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
    func_0x00010bf51e00(uVar4);
    func_0x00010bddcc00(puVar6,param_2,uVar3,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    _objc_retain(puVar6);
    puVar1 = puVar6;
    func_0x00010bf52a60(puVar6,param_2,&uStack_260,auStack_218,0x10);
    if (puVar1 != (undefined *)0x0) {
      lVar7 = *plStack_250;
      do {
        puVar8 = (undefined *)0x0;
        do {
          if (*plStack_250 != lVar7) {
            _objc_enumerationMutation(puVar6);
          }
          func_0x00010c0a92c0(*(undefined8 *)(lVar2 + 0x30),param_2,
                              *(undefined8 *)(lStack_258 + (long)puVar8 * 8));
          puVar8 = puVar8 + 1;
        } while (puVar1 != puVar8);
        puVar1 = puVar6;
        func_0x00010bf52a60(puVar6,param_2,&uStack_260,auStack_218,0x10);
      } while (puVar1 != (undefined *)0x0);
    }
    _objc_release(puVar6);
    uVar3 = *(undefined8 *)(lVar2 + 0x10);
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(lVar2 + 8);
    *(undefined8 *)(lVar2 + 8) = uVar3;
    _objc_release(uVar4);
  }
  _objc_release(puVar6);
  lVar7 = lVar2 + 0x40;
  _objc_loadWeakRetained(lVar7);
  uVar3 = *(undefined8 *)(lVar2 + 0x10);
  func_0x00010bf00d20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c087340(lVar7,param_2,lVar2,uVar3,puVar5);
  _objc_release(uVar3);
  _objc_release(lVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = lVar7 + 0x40;
  _objc_loadWeakRetained(lVar7);
  func_0x00010c087380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar7);
  return;
}



/* Entry: 105a8c088; end: 105a8c253; -[SCSpectaclesKnobsController spectaclesKnobsRPCManager:didReceiveSetBatchSettingsResponseWithSuccess:] */

void FUN_105a8c088(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar4 = PTR_PTR_1126c1df0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((int)param_4 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0d3c80();
    puVar4 = *(undefined **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf51e00(uVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf51e00(uVar2);
    func_0x00010bddcc00(puVar4,param_2,uVar1,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    _objc_retain(puVar4);
    puVar3 = puVar4;
    func_0x00010bf52a60(puVar4,param_2,&uStack_120,auStack_d8,0x10);
    if (puVar3 != (undefined *)0x0) {
      lVar5 = *plStack_110;
      do {
        puVar6 = (undefined *)0x0;
        do {
          if (*plStack_110 != lVar5) {
            _objc_enumerationMutation(puVar4);
          }
          func_0x00010c0a92c0(*(undefined8 *)(param_1 + 0x30),param_2,
                              *(undefined8 *)(lStack_118 + (long)puVar6 * 8));
          puVar6 = puVar6 + 1;
        } while (puVar3 != puVar6);
        puVar3 = puVar4;
        func_0x00010bf52a60(puVar4,param_2,&uStack_120,auStack_d8,0x10);
      } while (puVar3 != (undefined *)0x0);
    }
    _objc_release(puVar4);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uVar1;
    _objc_release(uVar2);
  }
  _objc_release(puVar4);
  lVar5 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar5);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf00d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c087340(lVar5,param_2,param_1,uVar1,param_4);
  _objc_release(uVar1);
  _objc_release(lVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = lVar5 + 0x40;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c087380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 105a8c254; end: 105a8c287; -[SCSpectaclesKnobsController spectaclesKnobsRPCManagerDidReceiveDeviceRestartResponse:] */

void FUN_105a8c254(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010c087380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


