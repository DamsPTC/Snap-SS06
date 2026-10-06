/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105aad9b8; end: 105aad9ff;  */

undefined * FUN_105aad9b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1fe8;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x000105aada3c();
  func_0x000105aada58();
  return puVar1;
}



/* Entry: 105aada00; end: 105aada2f;  */

void FUN_105aada00(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105aada30; end: 105aada5f;  */

void FUN_105aada30(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 105aada60; end: 105aada67; -[SCComposerSpectaclesBluetoothConnectionStatus__Enum init] */

void FUN_105aada60(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 105aada68; end: 105aada6f; -[SCComposerSpectaclesPowerState__Enum init] */

void FUN_105aada68(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,5);
  return;
}



/* Entry: 105aada70; end: 105aada77; -[SCComposerSpectaclesWiFiErrorType__Enum init] */

void FUN_105aada70(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,5);
  return;
}



/* Entry: 105aada78; end: 105aada7f; -[SCComposerSpectaclesWiFiNetworkSignalLevel__Enum init] */

void FUN_105aada78(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 105aada80; end: 105aadaa7; -[SCComposerSpectaclesDeviceHardwareVersion initWithMajorVersionNumber:minorVersionNumber:] */

void FUN_105aada80(void)

{
  func_0x000105aadc00(PTR_PTR_1126ebb48);
  func_0x000105aadbf4();
  return;
}



/* Entry: 105aadaa8; end: 105aadab7; +[SCComposerSpectaclesDeviceHardwareVersion valdiMarshallableObjectDescriptor] */

void FUN_105aadaa8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108d3330;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105aadab8; end: 105aadaf7; -[SCComposerSpectaclesLensMetadata initWithLensId:lensName:lensIconUrl:] */

void FUN_105aadab8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ebb50;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 105aadaf8; end: 105aadb07; +[SCComposerSpectaclesLensMetadata valdiMarshallableObjectDescriptor] */

void FUN_105aadaf8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_lensId_1108d3378;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105aadb08; end: 105aadb2f; -[SCComposerSpectaclesWiFiError initWithType:message:] */

void FUN_105aadb08(void)

{
  func_0x000105aadc00(PTR_PTR_1126ebb58);
  func_0x000105aadbf4();
  return;
}



/* Entry: 105aadb30; end: 105aadb43; +[SCComposerSpectaclesWiFiError valdiMarshallableObjectDescriptor] */

void FUN_105aadb30(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108d33f0;
  param_1[1] = &PTR_DAT_1108d3438;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105aadb44; end: 105aadb93; -[SCComposerSpectaclesWiFiNetwork initWithWifiLevel:passwordSaved:] */

void FUN_105aadb44(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ebb60;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 105aadb94; end: 105aadba7; +[SCComposerSpectaclesWiFiNetwork valdiMarshallableObjectDescriptor] */

void FUN_105aadb94(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108d3448;
  param_1[1] = &PTR_DAT_1108d3538;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105aadba8; end: 105aadbcf; -[SCComposerSpectaclesWiFiStatus initWithWifiEnabled:] */

void FUN_105aadba8(void)

{
  func_0x000105aadc00(PTR_PTR_1126ebb68);
  func_0x000105aadbf4();
  return;
}



/* Entry: 105aadbd0; end: 105aadc23; +[SCComposerSpectaclesWiFiStatus valdiMarshallableObjectDescriptor] */

void FUN_105aadbd0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108d3548;
  param_1[1] = &PTR_DAT_1108d3590;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105aadc24; end: 105aadcc7; -[SCSpectaclesPasscodeViewController initWithDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105aadc24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ebb70;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11272eafc),param_3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272eb00) = 0;
    func_0x00010bee23a0(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105aadcc8; end: 105aae14b; -[SCSpectaclesPasscodeViewController viewDidLoad] */

/* WARNING: Possible PIC construction at 0x000105aae10c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105aae110) */
/* WARNING: Removing unreachable block (ram,0x000105aae148) */
/* WARNING: Removing unreachable block (ram,0x000105aae128) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aadcc8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126ebb70;
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
  puVar1 = PTR_PTR_1126c1ff0;
  _objc_alloc();
  func_0x00010c00b440();
  lVar10 = (long)_DAT_11272eb04;
  uVar8 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar1;
  _objc_release(uVar8);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = (long)_DAT_11272eb08;
  uVar8 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar1;
  _objc_release(uVar8);
  uVar3 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010befbd60(uVar3);
  uVar9 = *(undefined8 *)(param_1 + lVar11);
  FUN_105aae588();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar3);
  func_0x00010c16e480(*(undefined8 *)(param_1 + lVar11));
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar11));
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar10));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010bf493c0(0xc03e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar10);
  uStack_78 = uVar8;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar10;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar7);
  _objc_release(uVar3);
  _objc_release(lVar6);
  _objc_release(lVar10);
  _objc_release(uVar5);
  _objc_release(uVar8);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(uVar9);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar11));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar9 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010bf493c0(0xc040000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar11);
  uStack_88 = uVar8;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar10;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_80 = uVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar7);
  _objc_release(uVar3);
  _objc_release(lVar6);
  _objc_release(lVar10);
  _objc_release(uVar5);
  _objc_release(uVar8);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bec0850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startNewState_withFailure__11258dbb8,0,0);
  return;
}



/* Entry: 105aae14c; end: 105aae157; -[SCSpectaclesPasscodeViewController _userDidTapPickNewPasscode] */

void FUN_105aae14c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec0850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startNewState_withFailure__11258dbb8,0,0);
  return;
}



/* Entry: 105aae158; end: 105aae1d3; -[SCSpectaclesPasscodeViewController numericEntryView:didReachPincodeLengthWithPinCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aae158(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + _DAT_11272eb00) == 1) {
    func_0x00010be2dfe0(param_1,param_2,param_4);
  }
  else if (*(long *)(param_1 + _DAT_11272eb00) == 0) {
    func_0x00010be2e000(param_1,param_2,param_4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105aae1d4; end: 105aae21b; -[SCSpectaclesPasscodeViewController _handlePincodeEnteredForCreateState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aae1d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272eb0c);
  *(undefined8 *)(param_1 + _DAT_11272eb0c) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bec0850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startNewState_withFailure__11258dbb8,1,0);
  return;
}



/* Entry: 105aae21c; end: 105aae2a3; -[SCSpectaclesPasscodeViewController _handlePincodeEnteredForConfirmingState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aae21c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272eb0c);
  func_0x00010c0720c0(uVar1,param_2,param_3);
  if ((int)uVar1 == 0) {
    func_0x00010bec0840(param_1,param_2,1,1);
  }
  else {
    param_1 = param_1 + _DAT_11272eafc;
    _objc_loadWeakRetained(param_1);
    func_0x00010c2494c0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105aae2a4; end: 105aae353; -[SCSpectaclesPasscodeViewController _startNewState:withFailure:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aae2a4(long param_1,undefined8 param_2,long param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  *(long *)(param_1 + _DAT_11272eb00) = param_3;
  func_0x00010bee23a0();
  func_0x00010bedcf60(param_1);
  if (param_3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11272eb0c);
    *(undefined8 *)(param_1 + _DAT_11272eb0c) = 0;
    _objc_release(uVar1);
  }
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105aae354;
  puStack_48 = &UNK_110845ce0;
  lStack_40 = param_1;
  uStack_38 = param_4;
  func_0x000100c749e0(0x3e99999a,"APPSTORE",&puStack_60);
  return;
}



/* Entry: 105aae354; end: 105aae36f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aae354(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c138010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11272eb04),
             PTR_s_reset__11262ba20,*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 105aae370; end: 105aae42b; -[SCSpectaclesPasscodeViewController _updatePickNewPasscodeButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aae370(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  double dStack_38;
  
  lVar2 = *(long *)(param_1 + _DAT_11272eb00);
  dVar3 = 0.0;
  dVar4 = 1.0;
  if (lVar2 != 1) {
    dVar4 = 0.0;
  }
  func_0x00010bf01b40(*(undefined8 *)(param_1 + _DAT_11272eb08));
  if (dVar3 != dVar4) {
    lVar1 = 8;
    if (lVar2 != 1) {
      lVar1 = 0;
    }
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105aae42c;
    puStack_48 = &UNK_110848c48;
    lStack_40 = param_1;
    dStack_38 = dVar4;
    func_0x00010bf03400(*(undefined8 *)(&UNK_10ddca730 + lVar1),PTR__OBJC_CLASS___UIView_1126aec20,
                        param_2,&puStack_60);
  }
  return;
}



/* Entry: 105aae42c; end: 105aae443;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aae42c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11272eb08),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 105aae444; end: 105aae50b; -[SCSpectaclesPasscodeViewController _updateTitleString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aae444(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_1;
  if (*(long *)(param_1 + _DAT_11272eb00) == 1) {
    func_0x000105aae5a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (*(long *)(param_1 + _DAT_11272eb00) == 0) {
    func_0x000105aae5b8();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar3 = 0;
  }
  lVar4 = (long)_DAT_11272eb10;
  uVar1 = *(ulong *)(param_1 + lVar4);
  func_0x00010c0720c0(uVar1,param_2,lVar3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(lVar3);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(long *)(param_1 + lVar4) = lVar3;
    _objc_release(uVar2);
    lVar4 = param_1;
    func_0x00010c0834c0();
    if ((int)lVar4 != 0) {
      param_1 = param_1 + _DAT_11272eafc;
      _objc_loadWeakRetained(param_1);
      func_0x00010c2494e0();
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105aae50c; end: 105aae51b; -[SCSpectaclesPasscodeViewController titleString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105aae50c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272eb10);
}



/* Entry: 105aae51c; end: 105aae587; -[SCSpectaclesPasscodeViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aae51c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272eb10,0);
  _objc_destroyWeak(param_1 + _DAT_11272eafc);
  _objc_storeStrong(param_1 + _DAT_11272eb0c,0);
  _objc_storeStrong(param_1 + _DAT_11272eb08,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272eb04,0);
  return;
}



/* Entry: 105aae588; end: 105aae5cf;  */

void FUN_105aae588(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e1b878;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e1b878,
                      &PTR____CFConstantStringClassReference_110e1b898,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105aae5d0; end: 105aae69f; -[SCSpectaclesPairingLocationViewController initWithOnDemandResourceFetching:playerProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105aae5d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ebb78;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar3 = (long)_DAT_11272eb14;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11272eb18;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105aae6a0; end: 105aae6a3; -[SCSpectaclesPairingLocationViewController phaseTitle] */

void FUN_105aae6a0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e1b8f8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e1b8f8,
                      &PTR____CFConstantStringClassReference_110e1b918,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105aae6a4; end: 105aae6a7; -[SCSpectaclesPairingLocationViewController phaseSubtitle] */

void FUN_105aae6a4(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e1b938;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e1b938,
                      &PTR____CFConstantStringClassReference_110e1b918,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105aae6a8; end: 105aae6e3; -[SCSpectaclesPairingLocationViewController postPairingViewButtonClicked:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aae6a8(long param_1)

{
  param_1 = param_1 + _DAT_11272eb1c;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0f3220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105aae6e4; end: 105aae8ab; -[SCSpectaclesPairingLocationViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aae6e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126c1ff8;
  _objc_alloc(PTR_PTR_1126c1ff8);
  puVar2 = puVar1;
  func_0x000105aaea0c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000105aaea24();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052d00(puVar1,param_6,puVar2,puVar3,0,0,1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c2000;
  _objc_alloc(PTR_PTR_1126c2000);
  puVar3 = puVar2;
  func_0x000105aaea3c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff6520(puVar2,param_6,8,0xb,3,puVar3,puVar1);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c2008;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  uVar7 = *(undefined8 *)(param_5 + _DAT_11272eb14);
  uVar8 = *(undefined8 *)(param_5 + _DAT_11272eb18);
  lVar5 = param_5;
  func_0x00010c0d66a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c014a60(param_1,param_2,param_3,param_4,puVar3,param_6,uVar7,uVar8,puVar2,lVar5);
  lVar6 = (long)_DAT_11272eb20;
  uVar7 = *(undefined8 *)(param_5 + lVar6);
  *(undefined **)(param_5 + lVar6) = puVar3;
  _objc_release(uVar7);
  _objc_release(lVar5);
  _objc_release(puVar4);
  func_0x00010c18b5e0(*(undefined8 *)(param_5 + lVar6),param_6,param_5);
  func_0x00010c222380(param_5,param_6,*(undefined8 *)(param_5 + lVar6));
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105aae8ac; end: 105aae8fb; -[SCSpectaclesPairingLocationViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aae8ac(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ebb78;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillAppear__1126853f0);
  func_0x00010c262d20(*(undefined8 *)(param_1 + _DAT_11272eb20));
  return;
}



/* Entry: 105aae8fc; end: 105aae94b; -[SCSpectaclesPairingLocationViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aae8fc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ebb78;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidDisappear__112684c48);
  func_0x00010c262d00(*(undefined8 *)(param_1 + _DAT_11272eb20));
  return;
}



/* Entry: 105aae94c; end: 105aae96b; -[SCSpectaclesPairingLocationViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aae94c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11272eb1c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105aae96c; end: 105aae97f; -[SCSpectaclesPairingLocationViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aae96c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11272eb1c,param_3);
  return;
}



/* Entry: 105aae980; end: 105aae9db; -[SCSpectaclesPairingLocationViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aae980(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272eb1c);
  _objc_storeStrong(param_1 + _DAT_11272eb20,0);
  _objc_storeStrong(param_1 + _DAT_11272eb18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272eb14,0);
  return;
}



/* Entry: 105aae9dc; end: 105aaea53;  */

void FUN_105aae9dc(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e1b8f8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e1b8f8,
                      &PTR____CFConstantStringClassReference_110e1b918,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105aaea54; end: 105aaeb4f; -[SCSpectaclesPairingOTAViewController initWithOnDemandResourceFetching:playerProvider:otaManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105aaea54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ebb80;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar3 = (long)_DAT_11272eb24;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11272eb28;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11272eb2c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105aaeb50; end: 105aaeb53; -[SCSpectaclesPairingOTAViewController phaseTitle] */

void FUN_105aaeb50(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e1b8f8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e1b8f8,
                      &PTR____CFConstantStringClassReference_110e1b978,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105aaeb54; end: 105aaeb57; -[SCSpectaclesPairingOTAViewController phaseSubtitle] */

void FUN_105aaeb54(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e1b938;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e1b938,
                      &PTR____CFConstantStringClassReference_110e1b978,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105aaeb58; end: 105aaeb93; -[SCSpectaclesPairingOTAViewController postPairingViewButtonClicked:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aaeb58(long param_1)

{
  param_1 = param_1 + _DAT_11272eb30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc1d80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105aaeb94; end: 105aaed63; -[SCSpectaclesPairingOTAViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aaeb94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126c1ff8;
  _objc_alloc(PTR_PTR_1126c1ff8);
  puVar2 = puVar1;
  func_0x000105aaef34();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000105aaef4c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052d00(puVar1,param_6,puVar2,puVar3,0,0,1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c2000;
  _objc_alloc(PTR_PTR_1126c2000);
  puVar3 = puVar2;
  func_0x000105aaef64();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff6520(puVar2,param_6,9,0xc,4,puVar3,puVar1);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c2008;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  uVar7 = *(undefined8 *)(param_5 + _DAT_11272eb24);
  uVar8 = *(undefined8 *)(param_5 + _DAT_11272eb28);
  lVar5 = param_5;
  func_0x00010c0d66a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c014a60(param_1,param_2,param_3,param_4,puVar3,param_6,uVar7,uVar8,puVar2,lVar5);
  lVar6 = (long)_DAT_11272eb34;
  uVar7 = *(undefined8 *)(param_5 + lVar6);
  *(undefined **)(param_5 + lVar6) = puVar3;
  _objc_release(uVar7);
  _objc_release(lVar5);
  _objc_release(puVar4);
  func_0x00010c18b5e0(*(undefined8 *)(param_5 + lVar6),param_6,param_5);
  func_0x00010c222380(param_5,param_6,*(undefined8 *)(param_5 + lVar6));
  func_0x00010bfe17e0(*(undefined8 *)(param_5 + lVar6));
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105aaed64; end: 105aaedb3; -[SCSpectaclesPairingOTAViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aaed64(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ebb80;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010c266260(*(undefined8 *)(param_1 + _DAT_11272eb2c));
  return;
}



/* Entry: 105aaedb4; end: 105aaee03; -[SCSpectaclesPairingOTAViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aaedb4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ebb80;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillAppear__1126853f0);
  func_0x00010c262d20(*(undefined8 *)(param_1 + _DAT_11272eb34));
  return;
}



/* Entry: 105aaee04; end: 105aaee53; -[SCSpectaclesPairingOTAViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aaee04(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ebb80;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidDisappear__112684c48);
  func_0x00010c262d00(*(undefined8 *)(param_1 + _DAT_11272eb34));
  return;
}



/* Entry: 105aaee54; end: 105aaee63; -[SCSpectaclesPairingOTAViewController showView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aaee54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c235d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272eb34),PTR_s_showAllViews_11266b168);
  return;
}



/* Entry: 105aaee64; end: 105aaee83; -[SCSpectaclesPairingOTAViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aaee64(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11272eb30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105aaee84; end: 105aaee97; -[SCSpectaclesPairingOTAViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aaee84(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11272eb30,param_3);
  return;
}



/* Entry: 105aaee98; end: 105aaef03; -[SCSpectaclesPairingOTAViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aaee98(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272eb30);
  _objc_storeStrong(param_1 + _DAT_11272eb34,0);
  _objc_storeStrong(param_1 + _DAT_11272eb2c,0);
  _objc_storeStrong(param_1 + _DAT_11272eb28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272eb24,0);
  return;
}



/* Entry: 105aaef04; end: 105aaef7b;  */

void FUN_105aaef04(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e1b8f8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e1b8f8,
                      &PTR____CFConstantStringClassReference_110e1b978,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105aaef7c; end: 105aaf04b; -[SCSpectaclesPairingProximityUnlockViewController initWithOnDemandResourceFetching:playerProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105aaef7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ebb88;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar3 = (long)_DAT_11272eb38;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11272eb3c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105aaf04c; end: 105aaf04f; -[SCSpectaclesPairingProximityUnlockViewController phaseTitle] */

void FUN_105aaf04c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e1b8f8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e1b8f8,
                      &PTR____CFConstantStringClassReference_110e1b998,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105aaf050; end: 105aaf053; -[SCSpectaclesPairingProximityUnlockViewController phaseSubtitle] */

void FUN_105aaf050(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e1b938;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e1b938,
                      &PTR____CFConstantStringClassReference_110e1b998,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105aaf054; end: 105aaf08f; -[SCSpectaclesPairingProximityUnlockViewController postPairingViewButtonClicked:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aaf054(long param_1)

{
  param_1 = param_1 + _DAT_11272eb40;
  _objc_loadWeakRetained(param_1);
  func_0x00010c119d60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105aaf090; end: 105aaf257; -[SCSpectaclesPairingProximityUnlockViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aaf090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126c1ff8;
  _objc_alloc(PTR_PTR_1126c1ff8);
  puVar2 = puVar1;
  func_0x000105aaf3b8();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000105aaf3d0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052d00(puVar1,param_6,puVar2,puVar3,0,0,1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c2000;
  _objc_alloc(PTR_PTR_1126c2000);
  puVar3 = puVar2;
  func_0x000105aaf3e8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff6520(puVar2,param_6,7,10,2,puVar3,puVar1);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c2008;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  uVar7 = *(undefined8 *)(param_5 + _DAT_11272eb38);
  uVar8 = *(undefined8 *)(param_5 + _DAT_11272eb3c);
  lVar5 = param_5;
  func_0x00010c0d66a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c014a60(param_1,param_2,param_3,param_4,puVar3,param_6,uVar7,uVar8,puVar2,lVar5);
  lVar6 = (long)_DAT_11272eb44;
  uVar7 = *(undefined8 *)(param_5 + lVar6);
  *(undefined **)(param_5 + lVar6) = puVar3;
  _objc_release(uVar7);
  _objc_release(lVar5);
  _objc_release(puVar4);
  func_0x00010c18b5e0(*(undefined8 *)(param_5 + lVar6),param_6,param_5);
  func_0x00010c222380(param_5,param_6,*(undefined8 *)(param_5 + lVar6));
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105aaf258; end: 105aaf2a7; -[SCSpectaclesPairingProximityUnlockViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aaf258(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ebb88;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillAppear__1126853f0);
  func_0x00010c262d20(*(undefined8 *)(param_1 + _DAT_11272eb44));
  return;
}



/* Entry: 105aaf2a8; end: 105aaf2f7; -[SCSpectaclesPairingProximityUnlockViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aaf2a8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ebb88;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidDisappear__112684c48);
  func_0x00010c262d00(*(undefined8 *)(param_1 + _DAT_11272eb44));
  return;
}



/* Entry: 105aaf2f8; end: 105aaf317; -[SCSpectaclesPairingProximityUnlockViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aaf2f8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11272eb40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105aaf318; end: 105aaf32b; -[SCSpectaclesPairingProximityUnlockViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aaf318(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11272eb40,param_3);
  return;
}



/* Entry: 105aaf32c; end: 105aaf387; -[SCSpectaclesPairingProximityUnlockViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aaf32c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272eb40);
  _objc_storeStrong(param_1 + _DAT_11272eb44,0);
  _objc_storeStrong(param_1 + _DAT_11272eb3c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272eb38,0);
  return;
}



/* Entry: 105aaf388; end: 105aaf3ff;  */

void FUN_105aaf388(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e1b8f8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e1b8f8,
                      &PTR____CFConstantStringClassReference_110e1b998,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105aaf400; end: 105aaf45b; -[SCSpectaclesPairingInactivityMonitor initWithScanningTimeout:connectingTimeout:btPickerTimeout:] */

void FUN_105aaf400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ebb90;
  uStack_40 = param_4;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x28) = param_1;
    *(undefined8 *)((long)puVar1 + 0x30) = param_2;
    *(undefined8 *)((long)puVar1 + 0x38) = param_3;
  }
  return;
}



/* Entry: 105aaf45c; end: 105aaf45f; -[SCSpectaclesPairingInactivityMonitor pairingDidStart] */

void FUN_105aaf45c(void)

{
  return;
}



/* Entry: 105aaf460; end: 105aaf483; -[SCSpectaclesPairingInactivityMonitor pairingBeganScanning] */

void FUN_105aaf460(undefined8 param_1)

{
  func_0x00010bddf2a0();
                    /* WARNING: Could not recover jumptable at 0x00010bec1770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startScanningTimeoutTimer_11258df80);
  return;
}



/* Entry: 105aaf484; end: 105aaf4a7; -[SCSpectaclesPairingInactivityMonitor pairingBeganConnectingBLE] */

void FUN_105aaf484(undefined8 param_1)

{
  func_0x00010bddad20();
                    /* WARNING: Could not recover jumptable at 0x00010bec0ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startPairingTimeoutTimer_11258dd60);
  return;
}



/* Entry: 105aaf4a8; end: 105aaf4ab; -[SCSpectaclesPairingInactivityMonitor pairingDidConnectBLE] */

void FUN_105aaf4a8(void)

{
  return;
}



/* Entry: 105aaf4ac; end: 105aaf4af; -[SCSpectaclesPairingInactivityMonitor pairingDidSyncBLE] */

void FUN_105aaf4ac(void)

{
  return;
}



/* Entry: 105aaf4b0; end: 105aaf4b3; -[SCSpectaclesPairingInactivityMonitor pairingRequestsUnpair] */

void FUN_105aaf4b0(void)

{
  return;
}



/* Entry: 105aaf4b4; end: 105aaf4b7; -[SCSpectaclesPairingInactivityMonitor pairingBeganChoosingName] */

void FUN_105aaf4b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddab50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cancelPairingTimeoutTimer_112554470);
  return;
}



/* Entry: 105aaf4b8; end: 105aaf4bb; -[SCSpectaclesPairingInactivityMonitor pairingBeganRequestingLocation] */

void FUN_105aaf4b8(void)

{
  return;
}



/* Entry: 105aaf4bc; end: 105aaf4bf; -[SCSpectaclesPairingInactivityMonitor pairingBeganConnectingBTC] */

void FUN_105aaf4bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec0ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startPairingTimeoutTimer_11258dd60);
  return;
}



/* Entry: 105aaf4c0; end: 105aaf4c3; -[SCSpectaclesPairingInactivityMonitor pairingBeganSettingUpBTC] */

void FUN_105aaf4c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec0ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startPairingTimeoutTimer_11258dd60);
  return;
}



/* Entry: 105aaf4c4; end: 105aaf4e7; -[SCSpectaclesPairingInactivityMonitor pairingDidShowBTPicker] */

void FUN_105aaf4c4(undefined8 param_1)

{
  func_0x00010bddab40();
                    /* WARNING: Could not recover jumptable at 0x00010bebf850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startBTPickerTitleChangeTimer_11258d7b8);
  return;
}



/* Entry: 105aaf4e8; end: 105aaf4eb; -[SCSpectaclesPairingInactivityMonitor pairingDidFindBTPickerDevice] */

void FUN_105aaf4e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdda4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cancelBTPickerTitleChangeTimer_1125542d0);
  return;
}



/* Entry: 105aaf4ec; end: 105aaf4ef; -[SCSpectaclesPairingInactivityMonitor pairingDidCancelBTPicker] */

void FUN_105aaf4ec(void)

{
  return;
}



/* Entry: 105aaf4f0; end: 105aaf4f3; -[SCSpectaclesPairingInactivityMonitor pairingDidSucceedWithDeviceInformation:alreadyPaired:] */

void FUN_105aaf4f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddf2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanUpTimers_112555648);
  return;
}



/* Entry: 105aaf4f4; end: 105aaf4f7; -[SCSpectaclesPairingInactivityMonitor pairingDidFail:] */

void FUN_105aaf4f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddf2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanUpTimers_112555648);
  return;
}



/* Entry: 105aaf4f8; end: 105aaf4fb; -[SCSpectaclesPairingInactivityMonitor pairingDidFindMismatchUserWithPreviousUserMediaCount:] */

void FUN_105aaf4f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddf2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanUpTimers_112555648);
  return;
}



/* Entry: 105aaf4fc; end: 105aaf4ff; -[SCSpectaclesPairingInactivityMonitor userNamedDevice:changedFromDefault:] */

void FUN_105aaf4fc(void)

{
  return;
}



/* Entry: 105aaf500; end: 105aaf503; -[SCSpectaclesPairingInactivityMonitor userSetLocationPermissions:] */

void FUN_105aaf500(void)

{
  return;
}



/* Entry: 105aaf504; end: 105aaf507; -[SCSpectaclesPairingInactivityMonitor userRequestsPairingRetry] */

void FUN_105aaf504(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddf2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanUpTimers_112555648);
  return;
}



/* Entry: 105aaf508; end: 105aaf50b; -[SCSpectaclesPairingInactivityMonitor userOpenedTOS] */

void FUN_105aaf508(void)

{
  return;
}



/* Entry: 105aaf50c; end: 105aaf50f; -[SCSpectaclesPairingInactivityMonitor userClosedTOS] */

void FUN_105aaf50c(void)

{
  return;
}



/* Entry: 105aaf510; end: 105aaf513; -[SCSpectaclesPairingInactivityMonitor userAcceptedTOSWithIsBIPA:] */

void FUN_105aaf510(void)

{
  return;
}



/* Entry: 105aaf514; end: 105aaf517; -[SCSpectaclesPairingInactivityMonitor userTappedNeedHelp] */

void FUN_105aaf514(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddf2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanUpTimers_112555648);
  return;
}



/* Entry: 105aaf518; end: 105aaf523; -[SCSpectaclesPairingInactivityMonitor userViewedInactiveAlert] */

void FUN_105aaf518(long param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 105aaf524; end: 105aaf527; -[SCSpectaclesPairingInactivityMonitor userTappedKeepPairingFromInactiveAlert] */

void FUN_105aaf524(void)

{
  return;
}



/* Entry: 105aaf528; end: 105aaf52b; -[SCSpectaclesPairingInactivityMonitor userTappedSupportFromInactiveAlert] */

void FUN_105aaf528(void)

{
  return;
}



/* Entry: 105aaf52c; end: 105aaf52f; -[SCSpectaclesPairingInactivityMonitor userCancelledPairing:] */

void FUN_105aaf52c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddf2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanUpTimers_112555648);
  return;
}



/* Entry: 105aaf530; end: 105aaf5bf; -[SCSpectaclesPairingInactivityMonitor _timeout:] */

void FUN_105aaf530(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  if ((param_3 != 0) &&
     (((param_3 == *(long *)(param_1 + 0x10) || (param_3 == *(long *)(param_1 + 8))) ||
      (param_3 == *(long *)(param_1 + 0x18))))) {
    param_1 = param_1 + 0x40;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfeb900();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105aaf5c0; end: 105aaf623; -[SCSpectaclesPairingInactivityMonitor _startScanningTimeoutTimer] */

void FUN_105aaf5c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    return;
  }
  func_0x00010bddad20();
  puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x00010c1503c0(*(undefined8 *)(param_1 + 0x28),PTR__OBJC_CLASS___NSTimer_1126af1b0,param_2,
                      param_1,PTR_s__timeout__11252c498,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105aaf624; end: 105aaf64f; -[SCSpectaclesPairingInactivityMonitor _cancelScanningTimeoutTimer] */

void FUN_105aaf624(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105aaf650; end: 105aaf6a7; -[SCSpectaclesPairingInactivityMonitor _startBTPickerTitleChangeTimer] */

void FUN_105aaf650(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010bdda4c0();
  puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x00010c1503c0(*(undefined8 *)(param_1 + 0x38),PTR__OBJC_CLASS___NSTimer_1126af1b0,param_2,
                      param_1,PTR_s__timeout__11252c498,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105aaf6a8; end: 105aaf6d3; -[SCSpectaclesPairingInactivityMonitor _cancelBTPickerTitleChangeTimer] */

void FUN_105aaf6a8(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105aaf6d4; end: 105aaf72b; -[SCSpectaclesPairingInactivityMonitor _startPairingTimeoutTimer] */

void FUN_105aaf6d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010bddab40();
  puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x00010c1503c0(*(undefined8 *)(param_1 + 0x30),PTR__OBJC_CLASS___NSTimer_1126af1b0,param_2,
                      param_1,PTR_s__timeout__11252c498,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}


