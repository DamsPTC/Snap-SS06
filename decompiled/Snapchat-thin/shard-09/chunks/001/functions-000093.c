/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1069b7d40; end: 1069b7d47; -[SCModularCallController disableLenses] */

void FUN_1069b7d40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf802d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x70),PTR_s_disableLenses_1125bda58);
  return;
}



/* Entry: 1069b7d48; end: 1069b7d4b; -[SCModularCallController onDismiss] */

void FUN_1069b7d48(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be051b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dispose_11255ee08);
  return;
}



/* Entry: 1069b7d4c; end: 1069b7d9f; -[SCModularCallController setIsAppBackgrounded:] */

void FUN_1069b7d4c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1069b7da0;
  puStack_28 = &UNK_110845ce0;
  uStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010be97d00(param_1,param_2,&puStack_40);
  return;
}



/* Entry: 1069b7da0; end: 1069b7daf;  */

void FUN_1069b7da0(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x32) = *(undefined1 *)(param_1 + 0x28);
  return;
}



/* Entry: 1069b7db0; end: 1069b7e93; -[SCModularCallController createRemoteVideoViewWithType:] */

void FUN_1069b7db0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_60 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1069b6adc;
  uStack_30 = 0x1069b6aec;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1069b7e94;
  puStack_68 = &UNK_110951030;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1069b7ed8;
  puStack_90 = &UNK_110842e18;
  uStack_88 = param_1;
  uStack_58 = param_3;
  puStack_48 = puStack_60;
  func_0x00010bdced20(param_1,param_2,&puStack_80,&puStack_a8);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1069b7e94; end: 1069b7ed7;  */

void FUN_1069b7e94(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bf5a000(param_2,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069b7ed8; end: 1069b7edb;  */

void FUN_1069b7ed8(void)

{
  return;
}



/* Entry: 1069b7edc; end: 1069b7f4b; -[SCModularCallController notifyScreenShotTaken] */

void FUN_1069b7edc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x00010be3e8e0();
  if ((int)uVar1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x1069b7f54;
    puStack_30 = &UNK_110842e18;
    uStack_28 = param_1;
    func_0x00010bdced20(param_1,param_2,&PTR___NSConcreteGlobalBlock_110951060,&puStack_48);
  }
  return;
}



/* Entry: 1069b7f4c; end: 1069b7f6b;  */

void FUN_1069b7f4c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dd550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_notifyScreenShotTaken_112614f68);
  return;
}



/* Entry: 1069b7f6c; end: 1069b7fdb; -[SCModularCallController notifyScreenRecorded] */

void FUN_1069b7f6c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x00010be3e8e0();
  if ((int)uVar1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x1069b7fe4;
    puStack_30 = &UNK_110842e18;
    uStack_28 = param_1;
    func_0x00010bdced20(param_1,param_2,&PTR___NSConcreteGlobalBlock_110951080,&puStack_48);
  }
  return;
}



/* Entry: 1069b7fdc; end: 1069b7ffb;  */

void FUN_1069b7fdc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dd510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_notifyScreenRecorded_112614f58);
  return;
}



/* Entry: 1069b7ffc; end: 1069b809f; -[SCModularCallController reportCallingAddedParticipants:] */

void FUN_1069b7ffc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1069b80a0;
  puStack_30 = &UNK_110950f90;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x1069b80ac;
  puStack_58 = &UNK_110842e18;
  uStack_50 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bdced20(param_1,param_2,&puStack_48,&puStack_70);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1069b80a0; end: 1069b80af;  */

void FUN_1069b80a0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c132890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_reportCallingAddedParticipants__11262a440,*(undefined8 *)(param_1 + 0x20)
            );
  return;
}



/* Entry: 1069b80b0; end: 1069b8127; -[SCModularCallController setNativeAudioSelectorOpened:] */

void FUN_1069b80b0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined1 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_1069b8128;
  puStack_20 = &UNK_1109510a0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1069b8134;
  puStack_48 = &UNK_110842e18;
  uStack_40 = param_1;
  uStack_18 = param_3;
  func_0x00010bdced20(param_1,param_2,&puStack_38,&puStack_60);
  return;
}



/* Entry: 1069b8128; end: 1069b8137;  */

void FUN_1069b8128(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1cb250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setNativeAudioSelectorOpened__1126506b8,*(undefined1 *)(param_1 + 0x20));
  return;
}



/* Entry: 1069b8138; end: 1069b813f; -[SCModularCallController isSponsoredLensAttachmentVisible] */

undefined1 FUN_1069b8138(long param_1)

{
  return *(undefined1 *)(param_1 + 0x35);
}



/* Entry: 1069b8140; end: 1069b8267; -[SCModularCallController setSponsoredLensAttachmentVisible:] */

void FUN_1069b8140(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (param_3 == 0) {
    _objc_initWeak(auStack_48,param_1);
    puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c150360(0x4008000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar1;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  else {
    func_0x00010bea7cc0(param_1,param_2,1);
  }
  func_0x00010be97d00(param_1);
  return;
}



/* Entry: 1069b8268; end: 1069b8297;  */

void FUN_1069b8268(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea7cc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069b8298; end: 1069b82a7;  */

void FUN_1069b8298(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x35) = *(undefined1 *)(param_1 + 0x28);
  return;
}



/* Entry: 1069b82a8; end: 1069b8317; -[SCModularCallController retryCall:] */

void FUN_1069b82a8(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0x21) = 0;
  if (param_3 - 1U < 4) {
    uVar2 = *(undefined8 *)(&UNK_10dde32c0 + (ulong)(param_3 - 1U) * 8);
  }
  else {
    uVar2 = 0;
  }
  puVar1 = PTR_PTR_1126b55c0;
  func_0x00010c24e1c0(PTR_PTR_1126b55c0,param_2,uVar2,0x6a,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf3240(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1069b8318; end: 1069b83f7; -[SCModularCallController sendScreenshot:] */

void FUN_1069b8318(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c1519a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126cf838;
  _objc_alloc(PTR_PTR_1126cf838);
  func_0x00010c024da0();
  uVar5 = *(undefined8 *)(param_1 + 0x78);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf5e540(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf517c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15d9c0(uVar5,param_2,param_3,uVar4,puVar2);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069b83f8; end: 1069b8437; -[SCModularCallController alertDialogUiContainer] */

void FUN_1069b83f8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x90;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010beff540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1069b8438; end: 1069b849b; -[SCModularCallController _setCallInfo:] */

void FUN_1069b8438(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010be052c0(param_1,param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069b849c; end: 1069b8697; -[SCModularCallController _applyCallLaunchAction:pendingCallMedia:toSession:completion:] */

void FUN_1069b849c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1069b8698;
  puStack_88 = &UNK_1109510c0;
  _objc_retain(param_4);
  uStack_80 = param_4;
  uStack_78 = param_1;
  _objc_retain(param_5);
  uStack_70 = param_5;
  _objc_retain(param_6);
  puStack_e0 = puVar1;
  uStack_d8 = 0xc2000000;
  uStack_d0 = 0x1069b86f8;
  puStack_c8 = &UNK_1109510f0;
  uStack_68 = param_6;
  _objc_retain(param_4);
  uStack_c0 = param_4;
  uStack_b8 = param_1;
  _objc_retain(param_5);
  uStack_b0 = param_5;
  _objc_retain(param_6);
  puStack_120 = puVar1;
  uStack_118 = 0xc2000000;
  uStack_110 = 0x1069b8750;
  puStack_108 = &UNK_110951120;
  uStack_a8 = param_6;
  _objc_retain(param_4);
  uStack_100 = param_4;
  uStack_f8 = param_1;
  _objc_retain(param_5);
  uStack_f0 = param_5;
  _objc_retain(param_6);
  puStack_160 = puVar1;
  uStack_158 = 0xc2000000;
  uStack_150 = 0x1069b87c8;
  puStack_148 = &UNK_1109510f0;
  uStack_140 = param_4;
  uStack_138 = param_1;
  uStack_130 = param_5;
  uStack_128 = param_6;
  uStack_e8 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0c0280(param_3,param_2,&puStack_a0,&puStack_e0,&puStack_120,&puStack_160);
  _objc_release(uStack_128);
  _objc_release(uStack_130);
  _objc_release(uStack_140);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(uStack_100);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_c0);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_80);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1069b8698; end: 1069b8837;  */

void FUN_1069b8698(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    func_0x00010c2827c0();
    param_2 = lVar1;
  }
  puVar2 = PTR_PTR_1126cf840;
  func_0x00010c24e1a0(PTR_PTR_1126cf840,param_2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beefee0(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1069b8838; end: 1069b88d3; -[SCModularCallController _enableCameraAndLensesEagerlyIfNeeded:] */

void FUN_1069b8838(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfd8960();
  if ((int)lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x70);
    lVar1 = param_3;
    func_0x00010bf2b540(param_3);
    func_0x00010c24e380(uVar3,param_2,lVar1);
    lVar1 = param_3;
    func_0x00010c097660();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      func_0x00010bf90ac0(*(undefined8 *)(param_1 + 0x70),param_2,lVar2);
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069b88d4; end: 1069b895b; -[SCModularCallController _applyToSession:fallback:] */

void FUN_1069b88d4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x18) == 0) {
    if (param_4 == 0) goto LAB_1069b8940;
  }
  else {
    if ((param_3 != 0) && (*(byte *)(param_1 + 0x20) != 0)) {
      (**(code **)(param_3 + 0x10))(param_3);
      goto LAB_1069b8940;
    }
    if ((param_4 == 0) || ((*(byte *)(param_1 + 0x20) & 1) != 0)) goto LAB_1069b8940;
  }
  (**(code **)(param_4 + 0x10))(param_4);
LAB_1069b8940:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069b895c; end: 1069b898b; -[SCModularCallController _dispose] */

void FUN_1069b895c(long param_1)

{
  if ((*(byte *)(param_1 + 0x21) & 1) == 0) {
    func_0x00010be052a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x70),PTR_s_dispose_1125bf4f8);
  return;
}



/* Entry: 1069b898c; end: 1069b8a2f; -[SCModularCallController _disposeSession] */

void FUN_1069b898c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar1);
  *(undefined2 *)(param_1 + 0x20) = 0x100;
  lVar2 = param_1 + 0x90;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf3bac0();
  _objc_release(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf4e8a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c114680(uVar1,param_2,uVar3,0);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069b8a30; end: 1069b8ac3; -[SCModularCallController _endCallBeforeSessionIsReady] */

void FUN_1069b8a30(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126cf848;
    func_0x00010bf8eba0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar2;
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + 8);
  }
  func_0x00010c1b2440(lVar1);
  func_0x00010c1b0240(*(undefined8 *)(param_1 + 8));
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c09dd00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c175940();
  _objc_release(uVar3);
  func_0x00010bea27c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be051b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dispose_11255ee08);
  return;
}



/* Entry: 1069b8ac4; end: 1069b8b5f; -[SCModularCallController _disposeSessionIfCallEnded:] */

void FUN_1069b8ac4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c09dd00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf282e0();
  if ((int)uVar2 == 0) {
    _objc_release(uVar1);
  }
  else {
    uVar2 = param_3;
    func_0x00010c09dd00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf282e0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar3 == 0) {
      func_0x00010be052a0(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069b8b60; end: 1069b8cc3; -[SCModularCallController _runBlockAndUpdateCallVisiblityIfNeeded:] */

void FUN_1069b8b60(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar3 = param_1;
  func_0x00010be3e8e0();
  cVar1 = *(char *)(param_1 + 0x35);
  (**(code **)(param_3 + 0x10))(param_3);
  _objc_release(param_3);
  lVar4 = param_1;
  func_0x00010be3e8e0();
  if (((int)lVar3 == (int)lVar4) && (cVar1 == *(char *)(param_1 + 0x35))) {
    bVar2 = false;
  }
  else {
    func_0x00010bed49c0(param_1);
    uVar6 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010bf4e8a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c114680(uVar6,param_2,uVar5,lVar4);
    _objc_release(uVar5);
    _objc_release(uVar6);
    bVar2 = true;
  }
  if ((*(char *)(param_1 + 0x33) == '\x01') && ((*(byte *)(param_1 + 0x34) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x34) = 1;
    if (*(long *)(param_1 + 0x40) != 0) {
      (**(code **)(*(long *)(param_1 + 0x40) + 0x10))();
      uVar6 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x40) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar6);
      return;
    }
  }
  if (bVar2) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1069b8cc4;
    puStack_40 = &UNK_110950f90;
    lStack_38 = param_1;
    func_0x00010bdced20(param_1,param_2,&puStack_58,0);
  }
  return;
}



/* Entry: 1069b8cc4; end: 1069b8ccf;  */

void FUN_1069b8cc4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed49f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateCallVisibilityForSession__112592c20,
             param_2);
  return;
}



/* Entry: 1069b8cd0; end: 1069b8cfb; -[SCModularCallController _isCallVisible] */

byte FUN_1069b8cd0(long param_1)

{
  byte bVar1;
  
  if (((*(byte *)(param_1 + 0x32) & 1) == 0) && (*(char *)(param_1 + 0x33) == '\x01')) {
    bVar1 = *(byte *)(param_1 + 0x35) ^ 1;
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 1069b8cfc; end: 1069b8d33; -[SCModularCallController _updateCallVisibilityForCameraManager] */

void FUN_1069b8cfc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be3e8e0();
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010beef6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x70),PTR_s_activate_112599760)
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf13c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x70),PTR_s_background_1125a28b0)
  ;
  return;
}



/* Entry: 1069b8d34; end: 1069b8d7f; -[SCModularCallController _updateCallVisibilityForSession:] */

void FUN_1069b8d34(int param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010be3e8e0();
  if (param_1 == 0) {
    func_0x00010bf13c20(param_3);
  }
  else {
    func_0x00010beef6e0(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069b8d80; end: 1069b8e2b; -[SCModularCallController _setSponsoredLensAttachmentVisible:] */

void FUN_1069b8d80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 uStack_28;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x38));
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
  func_0x00010c208040(*(undefined8 *)(param_1 + 0x70),param_2,param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_1069b8e2c;
  puStack_30 = &UNK_1109510a0;
  uStack_28 = (undefined1)param_3;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x1069b8e38;
  puStack_58 = &UNK_110842e18;
  lStack_50 = param_1;
  func_0x00010bdced20(param_1,param_2,&puStack_48,&puStack_70);
  return;
}



/* Entry: 1069b8e2c; end: 1069b8e3b;  */

void FUN_1069b8e2c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24a2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_sponsoredLensAttachmentPresentat_1126702e0,
             *(undefined1 *)(param_1 + 0x20));
  return;
}



/* Entry: 1069b8e3c; end: 1069b8e53; -[SCModularCallController delegate] */

void FUN_1069b8e3c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069b8e54; end: 1069b8e5f; -[SCModularCallController setDelegate:] */

void FUN_1069b8e54(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x90,param_3);
  return;
}



/* Entry: 1069b8e60; end: 1069b8f33; -[SCModularCallController .cxx_destruct] */

void FUN_1069b8e60(long param_1)

{
  _objc_destroyWeak(param_1 + 0x90);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1069b8f34; end: 1069b8f87; -[SCModularCallNavigationContainer initWithValdiView:] */

undefined1 * FUN_1069b8f34(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f4170;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithValdiView__1125f5a88);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1c8b80(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1069b8f88; end: 1069baa57; -[SCModularCallViewController initWithDelegate:talkContext:modularCallController:cameraUIProvider:lensUIProvider:notificationPool:valdiRuntime:composerCoreUIServices:composerPeopleServices:groupsDataMutator:applicationLifecycleEvents:applicationStateProvider:forceFullscreen:currentPageTracker:sharedLensUIController:callPageConfig:adReportServices:lensMetadataProvider:supStore:outOfAppPipCallLifecycleObservable:isFromInvite:deckHierarchyFactory:valdiRuntimeProvider:sharedLensTouchAlwaysEnabled:connectedLensLetterboxingEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1069b8f88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined1 param_15,undefined4 param_16,
             undefined8 param_17,undefined8 param_18,long param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined4 param_24,
             undefined4 param_25,undefined8 param_26,undefined8 param_27)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_7a0 [8];
  undefined *puStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined *puStack_780;
  undefined1 auStack_778 [8];
  undefined *puStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined *puStack_758;
  undefined1 auStack_750 [8];
  undefined *puStack_748;
  undefined8 uStack_740;
  code *pcStack_738;
  undefined *puStack_730;
  undefined1 auStack_728 [8];
  undefined *puStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined *puStack_708;
  undefined1 auStack_700 [8];
  undefined8 uStack_6f8;
  undefined *puStack_6f0;
  undefined8 uStack_6e8;
  code *pcStack_6e0;
  undefined *puStack_6d8;
  undefined1 auStack_6d0 [8];
  undefined8 uStack_6c8;
  undefined *puStack_6c0;
  undefined8 uStack_6b8;
  code *pcStack_6b0;
  undefined *puStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined1 auStack_690 [8];
  undefined8 uStack_688;
  undefined *puStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined *puStack_668;
  undefined1 auStack_660 [8];
  undefined *puStack_658;
  undefined8 uStack_650;
  code *pcStack_648;
  undefined *puStack_640;
  undefined1 auStack_638 [8];
  undefined *puStack_630;
  undefined8 uStack_628;
  code *pcStack_620;
  undefined *puStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined1 auStack_600 [8];
  undefined *puStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined *puStack_5e0;
  undefined1 auStack_5d8 [8];
  undefined *puStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined *puStack_5b8;
  undefined1 auStack_5b0 [8];
  undefined *puStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined *puStack_590;
  undefined1 auStack_588 [8];
  undefined *puStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined *puStack_568;
  undefined1 auStack_560 [8];
  undefined *puStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined *puStack_540;
  undefined1 auStack_538 [8];
  undefined *puStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined *puStack_518;
  undefined1 auStack_510 [8];
  undefined *puStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined *puStack_4f0;
  undefined1 auStack_4e8 [8];
  undefined *puStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined *puStack_4c8;
  undefined1 auStack_4c0 [8];
  undefined *puStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined *puStack_4a0;
  undefined1 auStack_498 [8];
  undefined *puStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined *puStack_478;
  undefined1 auStack_470 [8];
  undefined *puStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined *puStack_450;
  undefined1 auStack_448 [8];
  undefined *puStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined *puStack_428;
  undefined1 auStack_420 [8];
  undefined *puStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined *puStack_400;
  undefined1 auStack_3f8 [8];
  undefined *puStack_3f0;
  undefined8 uStack_3e8;
  code *pcStack_3e0;
  undefined *puStack_3d8;
  undefined1 auStack_3d0 [8];
  undefined *puStack_3c8;
  undefined8 uStack_3c0;
  code *pcStack_3b8;
  undefined *puStack_3b0;
  undefined1 auStack_3a8 [8];
  undefined *puStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined *puStack_388;
  undefined1 auStack_380 [8];
  undefined *puStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined *puStack_360;
  undefined1 auStack_358 [8];
  undefined *puStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined *puStack_338;
  undefined1 auStack_330 [8];
  undefined *puStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined *puStack_310;
  undefined1 auStack_308 [8];
  undefined *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined *puStack_2e8;
  undefined1 auStack_2e0 [8];
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined *puStack_2c0;
  undefined1 auStack_2b8 [8];
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  code *pcStack_2a0;
  undefined *puStack_298;
  undefined1 auStack_290 [8];
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined1 auStack_268 [8];
  undefined *puStack_260;
  undefined8 uStack_258;
  code *pcStack_250;
  undefined *puStack_248;
  undefined1 auStack_240 [8];
  undefined *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined *puStack_220;
  undefined1 auStack_218 [8];
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined1 auStack_1f0 [8];
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [8];
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_26);
  _objc_retain(param_27);
  puStack_80 = PTR_PTR_1126f4178;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((long)puVar1 + (long)_DAT_112754f24,param_3);
    lVar15 = (long)_DAT_112754f28;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined8 *)((long)puVar1 + lVar15) = param_4;
    _objc_release(uVar2);
    lVar15 = (long)_DAT_112754f2c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined8 *)((long)puVar1 + lVar15) = param_5;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar15));
    lVar16 = (long)_DAT_112754f30;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar16);
    *(undefined8 *)((long)puVar1 + lVar16) = param_6;
    _objc_release(uVar2);
    lVar16 = (long)_DAT_112754f34;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar16);
    *(undefined8 *)((long)puVar1 + lVar16) = param_7;
    _objc_release(uVar2);
    lVar17 = (long)_DAT_112754f38;
    _objc_retain(param_18);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar17);
    *(undefined8 *)((long)puVar1 + lVar17) = param_18;
    _objc_release(uVar2);
    lVar17 = (long)_DAT_112754f3c;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar17);
    *(undefined8 *)((long)puVar1 + lVar17) = param_11;
    _objc_release(uVar2);
    lVar17 = (long)_DAT_112754f40;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar17);
    *(undefined8 *)((long)puVar1 + lVar17) = param_12;
    _objc_release(uVar2);
    lVar17 = (long)_DAT_112754f44;
    _objc_retain(param_20);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar17);
    *(undefined8 *)((long)puVar1 + lVar17) = param_20;
    _objc_release(uVar2);
    lVar17 = (long)_DAT_112754f48;
    _objc_retain(param_21);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar17);
    *(undefined8 *)((long)puVar1 + lVar17) = param_21;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112754f4c) = param_15;
    lVar17 = (long)_DAT_112754f50;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar17);
    *(undefined8 *)((long)puVar1 + lVar17) = param_17;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126cf850;
    _objc_alloc_init();
    lVar17 = (long)_DAT_112754f54;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar17);
    *(undefined **)((long)puVar1 + lVar17) = puVar3;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar17));
    _objc_initWeak(auStack_90,puVar1);
    puVar3 = PTR_PTR_1126cf858;
    _objc_alloc();
    func_0x00010c039020();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112754f58);
    *(undefined **)((long)puVar1 + (long)_DAT_112754f58) = puVar3;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1069baa58;
    puStack_a0 = &UNK_110951150;
    _objc_retain(param_8);
    uStack_98 = param_8;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112754f5c);
    *(undefined **)((long)puVar1 + (long)_DAT_112754f5c) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126b1678;
    _objc_alloc();
    puStack_e0 = puVar3;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x1069baa88;
    puStack_c8 = &UNK_11084e7a0;
    _objc_copyWeak(auStack_c0,auStack_90);
    func_0x00010c017a80();
    puVar5 = PTR_PTR_1126b1678;
    _objc_alloc();
    puStack_110 = puVar3;
    uStack_108 = 0xc2000000;
    pcStack_100 = FUN_1069baae0;
    puStack_f8 = &UNK_110867030;
    _objc_copyWeak(auStack_e8,auStack_90);
    _objc_retain(param_10);
    uStack_f0 = param_10;
    func_0x00010c017a80();
    puVar6 = PTR_PTR_1126b1678;
    _objc_alloc();
    puStack_140 = puVar3;
    uStack_138 = 0xc2000000;
    uStack_130 = 0x1069bab70;
    puStack_128 = &UNK_110867030;
    _objc_copyWeak(auStack_118,auStack_90);
    _objc_retain(param_10);
    uStack_120 = param_10;
    func_0x00010c017a80();
    puVar7 = PTR_PTR_1126b1678;
    _objc_alloc();
    puStack_170 = puVar3;
    uStack_168 = 0xc2000000;
    pcStack_160 = FUN_1069bac08;
    puStack_158 = &UNK_110951180;
    _objc_copyWeak(auStack_148,auStack_90);
    _objc_retain(param_9);
    uStack_150 = param_9;
    func_0x00010c017a80();
    puVar8 = PTR_PTR_1126b1678;
    _objc_alloc();
    puStack_198 = puVar3;
    uStack_190 = 0xc2000000;
    pcStack_188 = FUN_1069bac80;
    puStack_180 = &UNK_11084e7a0;
    _objc_copyWeak(auStack_178,auStack_90);
    func_0x00010c017a80();
    puVar9 = PTR_PTR_1126b1678;
    _objc_alloc();
    puStack_1c0 = puVar3;
    uStack_1b8 = 0xc2000000;
    pcStack_1b0 = FUN_1069bad44;
    puStack_1a8 = &UNK_110855710;
    _objc_retain(param_22);
    uStack_1a0 = param_22;
    func_0x00010c017a80();
    puVar13 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf07b60();
    _objc_release(puVar13);
    func_0x00010c1af300(param_5);
    puVar13 = PTR_PTR_1126cf870;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112754f60);
    *(undefined **)((long)puVar1 + (long)_DAT_112754f60) = puVar13;
    _objc_release(uVar2);
    puVar13 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112754f64);
    *(undefined **)((long)puVar1 + (long)_DAT_112754f64) = puVar13;
    _objc_release(uVar2);
    uVar2 = param_13;
    func_0x00010c2a6420(param_13);
    _objc_retainAutoreleasedReturnValue();
    puStack_1e8 = puVar3;
    uStack_1e0 = 0xc2000000;
    pcStack_1d8 = FUN_1069bad4c;
    puStack_1d0 = &UNK_110846510;
    _objc_copyWeak(auStack_1c8,auStack_90);
    uVar11 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar11);
    _objc_release(uVar2);
    uVar11 = param_13;
    func_0x00010bf75dc0();
    _objc_retainAutoreleasedReturnValue();
    puStack_210 = puVar3;
    uStack_208 = 0xc2000000;
    uStack_200 = 0x1069bad8c;
    puStack_1f8 = &UNK_110846510;
    _objc_copyWeak(auStack_1f0,auStack_90);
    uVar2 = uVar11;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_release(uVar11);
    uVar11 = param_13;
    func_0x00010bf72840();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar11;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_release(uVar11);
    puVar13 = PTR_PTR_1126cf878;
    _objc_alloc_init();
    lVar17 = (long)_DAT_112754f68;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar17);
    *(undefined **)((long)puVar1 + lVar17) = puVar13;
    _objc_release(uVar2);
    puVar10 = PTR_PTR_1126cf880;
    _objc_alloc();
    puStack_238 = puVar3;
    uStack_230 = 0xc2000000;
    pcStack_228 = FUN_1069badd0;
    puStack_220 = &UNK_1108434b0;
    _objc_copyWeak(auStack_218,auStack_90);
    puStack_260 = puVar3;
    uStack_258 = 0xc2000000;
    pcStack_250 = FUN_1069badfc;
    puStack_248 = &UNK_1109511d0;
    _objc_copyWeak(auStack_240,auStack_90);
    puStack_288 = puVar3;
    uStack_280 = 0xc2000000;
    uStack_278 = 0x1069bae58;
    puStack_270 = &UNK_1109511d0;
    _objc_copyWeak(auStack_268,auStack_90);
    func_0x00010c046440();
    func_0x00010c1aee40(*(undefined8 *)((long)puVar1 + lVar17));
    uVar2 = param_4;
    func_0x00010bf5e540(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar2;
    func_0x00010bf517c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ac9a0(*(undefined8 *)((long)puVar1 + lVar17));
    _objc_release(uVar11);
    _objc_release(uVar2);
    puStack_2b0 = puVar3;
    uStack_2a8 = 0xc2000000;
    pcStack_2a0 = FUN_1069baeb4;
    puStack_298 = &UNK_1108434b0;
    _objc_copyWeak(auStack_290,auStack_90);
    func_0x00010c18a3c0(*(undefined8 *)((long)puVar1 + lVar17));
    puStack_2d8 = puVar3;
    uStack_2d0 = 0xc2000000;
    uStack_2c8 = 0x1069baee0;
    puStack_2c0 = &UNK_1108434b0;
    _objc_copyWeak(auStack_2b8,auStack_90);
    func_0x00010c210a40(*(undefined8 *)((long)puVar1 + lVar17));
    puStack_300 = puVar3;
    uStack_2f8 = 0xc2000000;
    uStack_2f0 = 0x1069baf0c;
    puStack_2e8 = &UNK_110951200;
    _objc_copyWeak(auStack_2e0,auStack_90);
    func_0x00010c1fabc0(*(undefined8 *)((long)puVar1 + lVar17));
    puStack_328 = puVar3;
    uStack_320 = 0xc2000000;
    uStack_318 = 0x1069baf54;
    puStack_310 = &UNK_11085df68;
    _objc_copyWeak(auStack_308,auStack_90);
    func_0x00010c21c720(*(undefined8 *)((long)puVar1 + lVar17));
    puStack_350 = puVar3;
    uStack_348 = 0xc2000000;
    uStack_340 = 0x1069baf88;
    puStack_338 = &UNK_110849200;
    _objc_copyWeak(auStack_330,auStack_90);
    func_0x00010c2098a0(*(undefined8 *)((long)puVar1 + lVar17));
    puStack_378 = puVar3;
    uStack_370 = 0xc2000000;
    uStack_368 = 0x1069bafbc;
    puStack_360 = &UNK_1108434b0;
    _objc_copyWeak(auStack_358,auStack_90);
    func_0x00010c20bf60(*(undefined8 *)((long)puVar1 + lVar17));
    puStack_3a0 = puVar3;
    uStack_398 = 0xc2000000;
    uStack_390 = 0x1069bafe8;
    puStack_388 = &UNK_110849200;
    _objc_copyWeak(auStack_380,auStack_90);
    func_0x00010c21c620(*(undefined8 *)((long)puVar1 + lVar17));
    puStack_3c8 = puVar3;
    uStack_3c0 = 0xc2000000;
    pcStack_3b8 = FUN_1069bb01c;
    puStack_3b0 = &UNK_110951230;
    _objc_copyWeak(auStack_3a8,auStack_90);
    func_0x00010c194e40(*(undefined8 *)((long)puVar1 + lVar17));
    puStack_3f0 = puVar3;
    uStack_3e8 = 0xc2000000;
    pcStack_3e0 = FUN_1069bb08c;
    puStack_3d8 = &UNK_1108434b0;
    _objc_copyWeak(auStack_3d0,auStack_90);
    func_0x00010c18e960(*(undefined8 *)((long)puVar1 + lVar17));
    puStack_418 = puVar3;
    uStack_410 = 0xc2000000;
    uStack_408 = 0x1069bb0b8;
    puStack_400 = &UNK_1108434b0;
    _objc_copyWeak(auStack_3f8,auStack_90);
    func_0x00010c1d2040(*(undefined8 *)((long)puVar1 + lVar17));
    puStack_440 = puVar3;
    uStack_438 = 0xc2000000;
    uStack_430 = 0x1069bb0e4;
    puStack_428 = &UNK_1108434b0;
    _objc_copyWeak(auStack_420,auStack_90);
    func_0x00010c1d2b20(*(undefined8 *)((long)puVar1 + lVar17));
    puStack_468 = puVar3;
    uStack_460 = 0xc2000000;
    uStack_458 = 0x1069bb110;
    puStack_450 = &UNK_110849200;
    _objc_copyWeak(auStack_448,auStack_90);
    func_0x00010c1d25c0(*(undefined8 *)((long)puVar1 + lVar17));
    puStack_490 = puVar3;
    uStack_488 = 0xc2000000;
    uStack_480 = 0x1069bb144;
    puStack_478 = &UNK_1108434b0;
    _objc_copyWeak(auStack_470,auStack_90);
    func_0x00010c1900a0(*(undefined8 *)((long)puVar1 + lVar17));
    puStack_4b8 = puVar3;
    uStack_4b0 = 0xc2000000;
    uStack_4a8 = 0x1069bb170;
    puStack_4a0 = &UNK_110951260;
    _objc_copyWeak(auStack_498,auStack_90);
    func_0x00010c18f980(*(undefined8 *)((long)puVar1 + lVar17));
    puStack_4e0 = puVar3;
    uStack_4d8 = 0xc2000000;
    uStack_4d0 = 0x1069bb1b8;
    puStack_4c8 = &UNK_110951260;
    _objc_copyWeak(auStack_4c0,auStack_90);
    func_0x00010c1eb560(*(undefined8 *)((long)puVar1 + lVar17));
    puStack_508 = puVar3;
    uStack_500 = 0xc2000000;
    uStack_4f8 = 0x1069bb200;
    puStack_4f0 = &UNK_110843540;
    _objc_copyWeak(auStack_4e8,auStack_90);
    func_0x00010c1fc320(*(undefined8 *)((long)puVar1 + lVar17));
    uVar11 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010bf27f20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar11;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1757e0(*(undefined8 *)((long)puVar1 + lVar17));
    _objc_release(uVar2);
    _objc_release(uVar11);
    func_0x00010c1ce4c0(*(undefined8 *)((long)puVar1 + lVar17));
    func_0x00010c161e00(*(undefined8 *)((long)puVar1 + lVar17));
    func_0x00010c166b20(*(undefined8 *)((long)puVar1 + lVar17));
    func_0x00010c19e900(*(undefined8 *)((long)puVar1 + lVar17));
    func_0x00010c1cba60(*(undefined8 *)((long)puVar1 + lVar17));
    func_0x00010c1a0100(*(undefined8 *)((long)puVar1 + lVar17));
    puStack_530 = puVar3;
    uStack_528 = 0xc2000000;
    uStack_520 = 0x1069bb248;
    puStack_518 = &UNK_110842c58;
    _objc_copyWeak(auStack_510,auStack_90);
    func_0x00010c165480(*(undefined8 *)((long)puVar1 + lVar17));
    puVar12 = puVar1;
    func_0x00010bdeba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c175b80(*(undefined8 *)((long)puVar1 + lVar17));
    _objc_release(puVar12);
    puStack_558 = puVar3;
    uStack_550 = 0xc2000000;
    uStack_548 = 0x1069bb290;
    puStack_540 = &UNK_11085df68;
    _objc_copyWeak(auStack_538,auStack_90);
    func_0x00010c1ed940(*(undefined8 *)((long)puVar1 + lVar17));
    puStack_580 = puVar3;
    uStack_578 = 0xc2000000;
    uStack_570 = 0x1069bb2c4;
    puStack_568 = &UNK_1108434b0;
    _objc_copyWeak(auStack_560,auStack_90);
    func_0x00010c18fe80(*(undefined8 *)((long)puVar1 + lVar17));
    func_0x00010c20fd40(*(undefined8 *)((long)puVar1 + lVar17));
    puStack_5a8 = puVar3;
    uStack_5a0 = 0xc2000000;
    uStack_598 = 0x1069bb2f0;
    puStack_590 = &UNK_110843540;
    _objc_copyWeak(auStack_588,auStack_90);
    func_0x00010c18f3c0(*(undefined8 *)((long)puVar1 + lVar17));
    puStack_5d0 = puVar3;
    uStack_5c8 = 0xc2000000;
    uStack_5c0 = 0x1069bb338;
    puStack_5b8 = &UNK_1108434b0;
    _objc_copyWeak(auStack_5b0,auStack_90);
    func_0x00010c1d2980(*(undefined8 *)((long)puVar1 + lVar17));
    puStack_5f8 = puVar3;
    uStack_5f0 = 0xc2000000;
    uStack_5e8 = 0x1069bb364;
    puStack_5e0 = &UNK_1108434b0;
    _objc_copyWeak(auStack_5d8,auStack_90);
    func_0x00010c1840c0(*(undefined8 *)((long)puVar1 + lVar17));
    func_0x00010c1b1420(*(undefined8 *)((long)puVar1 + lVar17));
    func_0x00010c1ff040(*(undefined8 *)((long)puVar1 + lVar17));
    func_0x00010c180d60(*(undefined8 *)((long)puVar1 + lVar17));
    func_0x00010c1b2c20(*(undefined8 *)((long)puVar1 + lVar17));
    func_0x00010c074420(param_19);
    func_0x00010c1a21c0(*(undefined8 *)((long)puVar1 + lVar17));
    lVar15 = param_19;
    func_0x00010c09e000(param_19);
    func_0x00010c1bf320((double)lVar15,*(undefined8 *)((long)puVar1 + lVar17));
    func_0x00010c0764a0();
    func_0x00010c1bad60(*(undefined8 *)((long)puVar1 + lVar17));
    func_0x00010c076540();
    func_0x00010c1bb700(*(undefined8 *)((long)puVar1 + lVar17));
    puVar13 = PTR_PTR_1126b1678;
    _objc_alloc();
    puStack_630 = puVar3;
    uStack_628 = 0xc2000000;
    pcStack_620 = FUN_1069bb390;
    puStack_618 = &UNK_1108cc668;
    _objc_copyWeak(auStack_600,auStack_90);
    _objc_retain(param_26);
    uStack_610 = param_26;
    _objc_retain(param_27);
    uStack_608 = param_27;
    func_0x00010c017a80();
    func_0x00010c18a1e0(*(undefined8 *)((long)puVar1 + lVar17));
    uVar11 = *(undefined8 *)((long)puVar1 + lVar16);
    func_0x00010c27b380(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar11;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219de0(*(undefined8 *)((long)puVar1 + lVar17));
    _objc_release(uVar2);
    _objc_release(uVar11);
    uVar11 = *(undefined8 *)((long)puVar1 + lVar16);
    func_0x00010bf39180(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar11;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17c4c0(*(undefined8 *)((long)puVar1 + lVar17));
    _objc_release(uVar2);
    _objc_release(uVar11);
    puStack_658 = puVar3;
    uStack_650 = 0xc2000000;
    pcStack_648 = FUN_1069bb45c;
    puStack_640 = &UNK_1108434b0;
    _objc_copyWeak(auStack_638,auStack_90);
    func_0x00010c18f7a0(*(undefined8 *)((long)puVar1 + lVar17));
    puStack_680 = puVar3;
    uStack_678 = 0xc2000000;
    uStack_670 = 0x1069bb488;
    puStack_668 = &UNK_1108434b0;
    _objc_copyWeak(auStack_660,auStack_90);
    func_0x00010c1e10c0(*(undefined8 *)((long)puVar1 + lVar17));
    puVar14 = PTR_PTR_1126cf888;
    _objc_alloc();
    func_0x00010c032a60();
    lVar15 = (long)_DAT_112754f6c;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined **)((long)puVar1 + lVar15) = puVar14;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010c295200();
    _objc_retainAutoreleasedReturnValue();
    puStack_6c0 = puVar3;
    uStack_6b8 = 0xc2000000;
    pcStack_6b0 = FUN_1069bb4b4;
    puStack_6a8 = &UNK_110951290;
    _objc_copyWeak(auStack_690,auStack_90);
    uStack_688 = param_2;
    _objc_retain(param_13);
    uStack_6a0 = param_13;
    _objc_retain(param_14);
    uStack_698 = param_14;
    _objc_opt_class(PTR_PTR_1126cf890);
    func_0x00010c1275a0(uVar2);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010c295200();
    _objc_retainAutoreleasedReturnValue();
    puStack_6f0 = puVar3;
    uStack_6e8 = 0xc2000000;
    pcStack_6e0 = FUN_1069bb574;
    puStack_6d8 = &UNK_1109512c0;
    _objc_copyWeak(auStack_6d0,auStack_90);
    uStack_6c8 = param_2;
    _objc_opt_class();
    func_0x00010c1275a0(uVar2);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010c295200();
    _objc_retainAutoreleasedReturnValue();
    puStack_720 = puVar3;
    uStack_718 = 0xc2000000;
    uStack_710 = 0x1069bb618;
    puStack_708 = &UNK_1109512c0;
    _objc_copyWeak(auStack_700,auStack_90);
    uStack_6f8 = param_2;
    _objc_opt_class();
    func_0x00010c1275a0(uVar2);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010c295200(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_748 = puVar3;
    uStack_740 = 0xc2000000;
    pcStack_738 = FUN_1069bb6ac;
    puStack_730 = &UNK_110858d90;
    _objc_copyWeak(auStack_728,auStack_90);
    _objc_opt_class();
    func_0x00010c1275a0(uVar2);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010c295200();
    _objc_retainAutoreleasedReturnValue();
    puStack_770 = puVar3;
    uStack_768 = 0xc2000000;
    uStack_760 = 0x1069bb718;
    puStack_758 = &UNK_110858d90;
    _objc_copyWeak(auStack_750,auStack_90);
    _objc_opt_class();
    func_0x00010c1275a0(uVar2);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010c295200();
    _objc_retainAutoreleasedReturnValue();
    puStack_798 = puVar3;
    uStack_790 = 0xc2000000;
    uStack_788 = 0x1069bb784;
    puStack_780 = &UNK_110858d90;
    _objc_copyWeak(auStack_778,auStack_90);
    _objc_opt_class();
    func_0x00010c1275a0(uVar2);
    _objc_release(uVar2);
    _objc_copyWeak(auStack_7a0,auStack_90);
    uVar2 = param_23;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_7a0);
    _objc_destroyWeak(auStack_778);
    _objc_destroyWeak(auStack_750);
    _objc_destroyWeak(auStack_728);
    _objc_destroyWeak(auStack_700);
    _objc_destroyWeak(auStack_6d0);
    _objc_release(uStack_698);
    _objc_release(uStack_6a0);
    _objc_destroyWeak(auStack_690);
    _objc_destroyWeak(auStack_660);
    _objc_destroyWeak(auStack_638);
    _objc_release(puVar13);
    _objc_release(uStack_608);
    _objc_release(uStack_610);
    _objc_destroyWeak(auStack_600);
    _objc_destroyWeak(auStack_5d8);
    _objc_destroyWeak(auStack_5b0);
    _objc_destroyWeak(auStack_588);
    _objc_destroyWeak(auStack_560);
    _objc_destroyWeak(auStack_538);
    _objc_destroyWeak(auStack_510);
    _objc_destroyWeak(auStack_4e8);
    _objc_destroyWeak(auStack_4c0);
    _objc_destroyWeak(auStack_498);
    _objc_destroyWeak(auStack_470);
    _objc_destroyWeak(auStack_448);
    _objc_destroyWeak(auStack_420);
    _objc_destroyWeak(auStack_3f8);
    _objc_destroyWeak(auStack_3d0);
    _objc_destroyWeak(auStack_3a8);
    _objc_destroyWeak(auStack_380);
    _objc_destroyWeak(auStack_358);
    _objc_destroyWeak(auStack_330);
    _objc_destroyWeak(auStack_308);
    _objc_destroyWeak(auStack_2e0);
    _objc_destroyWeak(auStack_2b8);
    _objc_destroyWeak(auStack_290);
    _objc_release(puVar10);
    _objc_destroyWeak(auStack_268);
    _objc_destroyWeak(auStack_240);
    _objc_destroyWeak(auStack_218);
    _objc_destroyWeak(auStack_1f0);
    _objc_destroyWeak(auStack_1c8);
    _objc_release(puVar9);
    _objc_release(uStack_1a0);
    _objc_release(puVar8);
    _objc_destroyWeak(auStack_178);
    _objc_release(puVar7);
    _objc_release(uStack_150);
    _objc_destroyWeak(auStack_148);
    _objc_release(puVar6);
    _objc_release(uStack_120);
    _objc_destroyWeak(auStack_118);
    _objc_release(puVar5);
    _objc_release(uStack_f0);
    _objc_destroyWeak(auStack_e8);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_c0);
    _objc_release(uStack_98);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1069baa58; end: 1069baadf;  */

void FUN_1069baa58(void)

{
  _objc_alloc(PTR_PTR_1126cf860);
  func_0x00010c030020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069baae0; end: 1069bac07;  */

void FUN_1069baae0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010beef000(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0b7620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1069bac08; end: 1069bac7f;  */

void FUN_1069bac08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126afe50;
    _objc_alloc(PTR_PTR_1126afe50);
    func_0x00010c040b80();
    func_0x00010c1c1bc0();
    puVar1 = PTR_PTR_1126cf868;
    _objc_opt_class(PTR_PTR_1126cf868);
    func_0x00010c181960(puVar2,param_2,puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1069bac80; end: 1069bad43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bac80(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + _DAT_112754f3c);
    func_0x00010bfb8b80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b0c98;
    _objc_alloc(PTR_PTR_1126b0c98);
    func_0x00010c0368e0();
    lVar3 = lVar1;
    (**(code **)(lVar1 + 0x10))(lVar1,puVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1069bad44; end: 1069bad4b;  */

void FUN_1069bad44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_target_112678178);
  return;
}



/* Entry: 1069bad4c; end: 1069badcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bad4c(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c1af300(*(undefined8 *)(param_1 + _DAT_112754f2c),param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069badcc; end: 1069badcf;  */

/* WARNING: Possible PIC construction at 0x0001000d7714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000d774c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000d779c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000d7750) */
/* WARNING: Removing unreachable block (ram,0x0001000d7718) */
/* WARNING: Removing unreachable block (ram,0x0001000d77a0) */

void FUN_1069badcc(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  
  iVar1 = 2;
  func_0x000107c31924(2,0x1a,0,0);
  if (iVar1 != 0) {
    puVar2 = PTR_PTR_1126e06c0;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c14fb00();
    _objc_release(puVar2);
    if (((ulong)puVar3 & 1) != 0) {
      ppuVar4 = &PTR___NSConcreteGlobalBlock_110d5b230;
      goto SUB_1000d76cc;
    }
  }
  func_0x00010c22b6a0(PTR_PTR_1126e06c0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  ppuVar4 = &PTR___NSConcreteGlobalBlock_110d5b250;
SUB_1000d76cc:
  puVar2 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61174(ppuVar4);
  func_0x000107c4a02c();
  if ((int)puVar2 == 0) {
    func_0x0001000d77b8();
    func_0x000107c61180();
  }
  else {
    func_0x0001005855a8();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar4);
  return;
}



/* Entry: 1069badd0; end: 1069badfb;  */

void FUN_1069badd0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde3f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069badfc; end: 1069baeb3;  */

void FUN_1069badfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  param_5 = param_5 + 0x20;
  _objc_loadWeakRetained(param_5);
  func_0x00010be69ca0(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1069baeb4; end: 1069bb01b;  */

void FUN_1069baeb4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde3ce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069bb01c; end: 1069bb08b;  */

void FUN_1069bb01c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bde3d20(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069bb08c; end: 1069bb38f;  */

void FUN_1069bb08c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde3d00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069bb390; end: 1069bb45b;  */

void FUN_1069bb390(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uVar6 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf55bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c141520();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf55380();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf668c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 1069bb45c; end: 1069bb4b3;  */

void FUN_1069bb45c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be038c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069bb4b4; end: 1069bb573;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bb4b4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126cf890;
    _objc_alloc(PTR_PTR_1126cf890);
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112754f2c);
    func_0x00010bf583c0(uVar2,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c015180(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar3,param_2,uVar2,
                        *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
    _objc_release(uVar2);
    func_0x00010c126f60(*(undefined8 *)(lVar1 + _DAT_112754f38),param_2,puVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1069bb574; end: 1069bb6ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bb574(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126cf898;
    _objc_alloc(PTR_PTR_1126cf898);
    func_0x00010c013fa0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar2 = (long)_DAT_112754f60;
    func_0x00010c1275c0(*(undefined8 *)(param_1 + lVar2),param_2,puVar1);
    func_0x00010bf0c620(puVar1);
    func_0x00010c1269c0(*(undefined8 *)(param_1 + _DAT_112754f38),param_2,
                        *(undefined8 *)(param_1 + lVar2));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1069bb6ac; end: 1069bb7ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bb6ac(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126cf8a8;
    _objc_alloc(PTR_PTR_1126cf8a8);
    func_0x00010c014820(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1069bb7f0; end: 1069bb8c3;  */

void FUN_1069bb7f0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_1);
    _objc_retain(param_1);
    func_0x00010c0c1920(param_2);
    _objc_release(param_1);
    _objc_release(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069bb8c4; end: 1069bb8fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bb8c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb7770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112754f60),
             PTR_s_freezeViewForConsumer__1125cb780,&PTR____CFConstantStringClassReference_110e66cf8
            );
  return;
}



/* Entry: 1069bb8fc; end: 1069bb90b; -[SCModularCallViewController isFullscreen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1069bb8fc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112754f4c);
}



/* Entry: 1069bb90c; end: 1069bba77; -[SCModularCallViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bb90c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  func_0x00010c222380(param_1,param_2,*(undefined8 *)(param_1 + _DAT_112754f6c));
  puVar1 = PTR__OBJC_CLASS___AVRoutePickerView_1126cf8c0;
  _objc_alloc_init();
  func_0x00010c18b5e0();
  func_0x00010c1a7f60(puVar1,param_2,1);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112754f70);
  *(undefined **)(param_1 + _DAT_112754f70) = puVar1;
  _objc_retain(puVar1);
  _objc_release(uVar6);
  puVar3 = PTR__OBJC_CLASS___RPSystemBroadcastPickerView_1126b6760;
  _objc_alloc_init();
  puVar4 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf24a60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar5;
  func_0x00010c25ce40(puVar5,param_2,&PTR____CFConstantStringClassReference_110e66d18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dff80(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  func_0x00010c202600(puVar3,param_2,0);
  func_0x00010c1a7f60(puVar3,param_2,1);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112754f74);
  *(undefined **)(param_1 + _DAT_112754f74) = puVar3;
  _objc_release(uVar6);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1069bba78; end: 1069bbb27; -[SCModularCallViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bba78(long param_1)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f4178;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillAppear__1126853f0);
  func_0x00010c1b53e0(*(undefined8 *)(param_1 + _DAT_112754f2c));
  uVar1 = *(undefined8 *)(param_1 + _DAT_112754f50);
  func_0x00010c0f2220(param_1);
  func_0x00010c24fc40(uVar1);
  func_0x00010c24f400(*(undefined8 *)(param_1 + _DAT_112754f54));
  param_1 = param_1 + _DAT_112754f24;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0d0820();
  _objc_release(param_1);
  return;
}



/* Entry: 1069bbb28; end: 1069bbb97; -[SCModularCallViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bbb28(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f4178;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__112685438);
  func_0x00010c256220(*(undefined8 *)(param_1 + _DAT_112754f54));
  lVar1 = param_1;
  func_0x00010c06d1a0();
  if ((int)lVar1 != 0) {
    func_0x00010bf6f440(*(undefined8 *)(param_1 + _DAT_112754f58));
  }
  return;
}



/* Entry: 1069bbb98; end: 1069bbc4f; -[SCModularCallViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bbb98(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f4178;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidDisappear__112684c48);
  lVar1 = param_1;
  func_0x00010c06d1a0();
  if ((int)lVar1 == 0) {
    func_0x00010c1b53e0(*(undefined8 *)(param_1 + _DAT_112754f2c));
  }
  else {
    lVar1 = param_1 + _DAT_112754f24;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c0d0860();
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112754f5c);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3be20();
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 1069bbc50; end: 1069bbc7f; -[SCModularCallViewController alertDialogUiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bbc50(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112754f58);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1069bbc80; end: 1069bbcd3; -[SCModularCallViewController clearNotificationWithDidAcceptCall:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bbc80(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + _DAT_112754f24;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf3bac0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1b05f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setIsDelayingInAppNotifications__112649ba0,0)
  ;
  return;
}



/* Entry: 1069bbcd4; end: 1069bbce3; -[SCModularCallViewController modularCallScreenCaptureMonitorDetectedScreenShot:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bbcd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dd550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112754f2c),PTR_s_notifyScreenShotTaken_112614f68);
  return;
}



/* Entry: 1069bbce4; end: 1069bbcf3; -[SCModularCallViewController modularCallScreenCaptureMonitorDetectedScreenRecording:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bbce4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dd510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112754f2c),PTR_s_notifyScreenRecorded_112614f58);
  return;
}



/* Entry: 1069bbcf4; end: 1069bbd53; -[SCModularCallViewController exit:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bbcf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112754f24;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf83e20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069bbd54; end: 1069bbd5f; -[SCModularCallViewController backgroundExitBehavior] */

void FUN_1069bbd54(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d83d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aecb0,PTR_s_neverExit_112613b08);
  return;
}



/* Entry: 1069bbd60; end: 1069bbd67; -[SCModularCallViewController canExit] */

undefined8 FUN_1069bbd60(void)

{
  return 1;
}



/* Entry: 1069bbd68; end: 1069bbd6f; -[SCModularCallViewController shouldPopToRootViewController] */

undefined8 FUN_1069bbd68(void)

{
  return 0;
}



/* Entry: 1069bbd70; end: 1069bbd77; -[SCModularCallViewController shouldPopToRootViewControllerLater] */

undefined8 FUN_1069bbd70(void)

{
  return 0;
}



/* Entry: 1069bbd78; end: 1069bbef3; -[SCModularCallViewController policyForHandlingInAppNotification:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1069bbd78(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c070640();
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010c0dc140();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0dc140(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar4 = PTR_PTR_1126b1370;
    if ((uVar3 & 1) == 0) {
      _objc_retain(param_3);
      _objc_opt_class(puVar4);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      uVar1 = param_3;
      if ((uVar2 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(param_3);
      uVar2 = uVar1;
      func_0x00010c11c420();
      if ((uVar2 - 0x1f & 0xfffffffffffffffa) == 0) {
        uVar5 = *(ulong *)(param_1 + (long)_DAT_112754f28);
        func_0x00010bf5e540();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar5;
        func_0x00010bf517c0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar1;
        func_0x000108616f18(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar2;
        func_0x00010c0720c0();
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar5);
        uVar7 = 0;
        if ((uVar6 & 1) == 0) {
          uVar7 = 3;
        }
      }
      else {
        uVar7 = 3;
      }
      _objc_release(uVar1);
      goto LAB_1069bbed4;
    }
  }
  uVar7 = 0;
LAB_1069bbed4:
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 1069bbef4; end: 1069bbfaf; -[SCModularCallViewController didVisibleNotificationGetPressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bbef4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0dc140();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0dc140(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar1;
  func_0x00010c0720c0(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    return;
  }
  lVar4 = param_1 + (long)_DAT_112754f24;
  _objc_loadWeakRetained(lVar4);
  func_0x00010bf83e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 1069bbfb0; end: 1069bc007; -[SCModularCallViewController _composerDeclineCall] */

void FUN_1069bbfb0(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1069bc008;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 1069bc008; end: 1069bc01b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bc008(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf66b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112754f2c),
             PTR_s_declineCall_1125b7488);
  return;
}



/* Entry: 1069bc01c; end: 1069bc073; -[SCModularCallViewController _composerSwitchCamera] */

void FUN_1069bc01c(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1069bc074;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 1069bc074; end: 1069bc087;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bc074(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2655d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112754f2c),
             PTR_s_switchCamera_112676f98);
  return;
}



/* Entry: 1069bc088; end: 1069bc10f; -[SCModularCallViewController _composerSelectAudioDevice:] */

void FUN_1069bc088(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1069bc110;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1069bc110; end: 1069bc123;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bc110(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c158750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112754f2c),
             PTR_s_selectAudioDevice__112633bf0,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1069bc124; end: 1069bc17b; -[SCModularCallViewController _composerShowNativeAudioDeviceSelector] */

void FUN_1069bc124(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1069bc17c;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 1069bc17c; end: 1069bc2ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bc17c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined4 uStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  uVar5 = SUB84(&uStack_120,0);
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_112754f70);
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(lVar1);
        }
        uVar6 = *(ulong *)(lStack_118 + lVar8 * 8);
        puVar3 = PTR__OBJC_CLASS___UIButton_1126aec48;
        _objc_opt_class(PTR__OBJC_CLASS___UIButton_1126aec48);
        uVar4 = uVar6;
        _objc_opt_isKindOfClass(uVar6,puVar3);
        if ((uVar4 & 1) != 0) {
          uVar5 = 0x40;
          func_0x00010c15b4c0(uVar6);
          goto LAB_1069bc26c;
        }
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar1;
      uVar5 = (int)&uStack_120;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
LAB_1069bc26c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_128 = FUN_1069bc2ac;
    puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_158 = 0xc2000000;
    pcStack_150 = FUN_1069bc308;
    puStack_148 = &UNK_110868698;
    lStack_140 = lVar1;
    uStack_138 = uVar5;
    puStack_130 = &stack0xfffffffffffffff0;
    func_0x000100162d98("APPSTORE",&puStack_160);
    return;
  }
  return;
}



/* Entry: 1069bc2ac; end: 1069bc307; -[SCModularCallViewController _composerUpdatePublishedMedia:] */

void FUN_1069bc2ac(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1069bc308;
  puStack_28 = &UNK_110868698;
  uStack_20 = param_1;
  uStack_18 = param_3;
  func_0x000100162d98("APPSTORE",&puStack_40);
  return;
}



/* Entry: 1069bc308; end: 1069bc323;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bc308(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c288f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112754f2c),
             PTR_s_updatePublishedMedia__11267fdf0,*(undefined4 *)(param_1 + 0x28));
  return;
}



/* Entry: 1069bc324; end: 1069bc44f; -[SCModularCallViewController _displayBroadcastPicker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bc324(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined1 uStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  lVar1 = *(long *)(param_1 + _DAT_112754f74);
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  uStack_138 = (char)&uStack_120;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(lVar1);
        }
        uVar5 = *(ulong *)(lStack_118 + lVar7 * 8);
        puVar3 = PTR__OBJC_CLASS___UIButton_1126aec48;
        _objc_opt_class(PTR__OBJC_CLASS___UIButton_1126aec48);
        uVar4 = uVar5;
        _objc_opt_isKindOfClass(uVar5,puVar3);
        if ((uVar4 & 1) != 0) {
          uStack_138 = 0x40;
          func_0x00010c15b4c0(uVar5);
          goto LAB_1069bc410;
        }
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar1;
      uStack_138 = (char)&uStack_120;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
LAB_1069bc410:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_128 = FUN_1069bc450;
    puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_158 = 0xc2000000;
    pcStack_150 = FUN_1069bc4ac;
    puStack_148 = &UNK_110845ce0;
    lStack_140 = lVar1;
    puStack_130 = &stack0xfffffffffffffff0;
    func_0x000100162d98("APPSTORE",&puStack_160);
    return;
  }
  return;
}



/* Entry: 1069bc450; end: 1069bc4ab; -[SCModularCallViewController _composerStartScreenSharing:] */

void FUN_1069bc450(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1069bc4ac;
  puStack_28 = &UNK_110845ce0;
  uStack_20 = param_1;
  uStack_18 = param_3;
  func_0x000100162d98("APPSTORE",&puStack_40);
  return;
}



/* Entry: 1069bc4ac; end: 1069bc4f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bc4ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112754f2c);
  func_0x00010c0dd520(uVar1,param_2,*(undefined1 *)(param_1 + 0x28));
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be04210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__displayBroadcastPicker_11255ea20);
    return;
  }
  return;
}



/* Entry: 1069bc4f4; end: 1069bc54b; -[SCModularCallViewController _composerStopScreenSharing] */

void FUN_1069bc4f4(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1069bc54c;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 1069bc54c; end: 1069bc55f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bc54c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c256950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112754f2c),
             PTR_s_stopScreenCapture_112673478);
  return;
}



/* Entry: 1069bc560; end: 1069bc5bb; -[SCModularCallViewController _composerUpdateLocalVideoState:] */

void FUN_1069bc560(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1069bc5bc;
  puStack_28 = &UNK_110845ce0;
  uStack_20 = param_1;
  uStack_18 = param_3;
  func_0x000100162d98("APPSTORE",&puStack_40);
  return;
}



/* Entry: 1069bc5bc; end: 1069bc5d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bc5bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2875f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112754f2c),
             PTR_s_updateLocalVideoState__11267f7a0,*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 1069bc5d8; end: 1069bc65f; -[SCModularCallViewController _composerEnabledLenses:] */

void FUN_1069bc5d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1069bc660;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1069bc660; end: 1069bc673;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bc660(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf90ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112754f2c),
             PTR_s_enableLenses__1125c1c50,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1069bc674; end: 1069bc6cb; -[SCModularCallViewController _composerDisableLenses] */

void FUN_1069bc674(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1069bc6cc;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 1069bc6cc; end: 1069bc6df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bc6cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf802d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112754f2c),
             PTR_s_disableLenses_1125bda58);
  return;
}



/* Entry: 1069bc6e0; end: 1069bc737; -[SCModularCallViewController _composerOnDismiss] */

void FUN_1069bc6e0(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1069bc738;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}


