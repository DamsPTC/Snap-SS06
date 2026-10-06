/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105240e5c; end: 105240ecf; -[SCComposerSpectaclesHomeDeviceControlManager _updateBrightnessLevel:] */

void FUN_105240e5c(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,(long)(param_1 * 100.0));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  *(undefined **)(param_2 + 0x48) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105240ed0; end: 105240f43; -[SCComposerSpectaclesHomeDeviceControlManager _updateAudioLevel:] */

void FUN_105240ed0(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,(long)(param_1 * 100.0));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  *(undefined **)(param_2 + 0x40) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16be20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105240f44; end: 10524108f; -[SCComposerSpectaclesHomeDeviceControlManager _handleBrightnessData:] */

void FUN_105240f44(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
    lVar1 = param_3;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010bddae80(param_1);
      _objc_initWeak(auStack_38,param_1);
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_105241090;
      puStack_50 = &UNK_110841fb0;
      _objc_copyWeak(auStack_40,auStack_38);
      _objc_retain(param_3);
      uVar2 = 0;
      lStack_48 = param_3;
      func_0x0001008553e8(0,&puStack_68);
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x38) = uVar2;
      _objc_release(uVar3);
      fVar4 = 0.0;
      if (*(long *)(param_1 + 0x48) != 0) {
        fVar4 = 0.5;
      }
      if (fVar4 <= 0.0) {
        func_0x0001000d76cc("APPSTORE",*(undefined8 *)(param_1 + 0x38));
      }
      else {
        func_0x000100c749e0("APPSTORE");
      }
      _objc_release(lStack_48);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105241090; end: 1052410e3;  */

void FUN_105241090(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf21240(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed44a0(lVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1052410e4; end: 10524114b; -[SCComposerSpectaclesHomeDeviceControlManager _handleAudioLevelData:] */

void FUN_1052410e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_10524114c;
    puStack_20 = &UNK_1108544b0;
    lStack_18 = param_1;
    func_0x00010c0c0800(param_3,param_2,&puStack_38,&PTR___NSConcreteGlobalBlock_110871460);
  }
  return;
}



/* Entry: 10524114c; end: 10524127b;  */

void FUN_10524114c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  func_0x00010bddae60(*(undefined8 *)(param_1 + 0x20));
  _objc_initWeak(auStack_38,*(undefined8 *)(param_1 + 0x20));
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10524127c;
  puStack_50 = &UNK_110841fb0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_2);
  uVar1 = 0;
  uStack_48 = param_2;
  func_0x0001008553e8(0,&puStack_68);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30) = uVar1;
  _objc_release(uVar2);
  fVar3 = 0.0;
  if (*(long *)(*(long *)(param_1 + 0x20) + 0x40) != 0) {
    fVar3 = 0.5;
  }
  if (fVar3 <= 0.0) {
    func_0x0001000d76cc("APPSTORE",*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30));
  }
  else {
    func_0x000100c749e0("APPSTORE");
  }
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10524127c; end: 1052412af;  */

void FUN_10524127c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed3560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052412b0; end: 1052412b3;  */

void FUN_1052412b0(void)

{
  return;
}



/* Entry: 1052412b4; end: 1052412ef; -[SCComposerSpectaclesHomeDeviceControlManager _updateAudioFromDevice:] */

void FUN_1052412b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052412f0; end: 10524132b; -[SCComposerSpectaclesHomeDeviceControlManager _updateBrightnessFromDevice:] */

void FUN_1052412f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 8),param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10524132c; end: 1052413bb; -[SCComposerSpectaclesHomeDeviceControlManager _handleAutoBrightnessEnabledData:] */

void FUN_10524132c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_3;
    func_0x00010bf926c0(param_3);
    func_0x00010c0df6e0(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3,param_2,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1052413bc; end: 10524141b; -[SCComposerSpectaclesHomeDeviceControlManager _handleAudioMutedData:] */

void FUN_1052413bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10524141c;
  puStack_20 = &UNK_1108544b0;
  uStack_18 = param_1;
  func_0x00010c0c0800(param_3,param_2,&puStack_38,&PTR___NSConcreteGlobalBlock_110871480);
  return;
}



/* Entry: 10524141c; end: 10524142f;  */

void FUN_10524141c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),PTR_s_next__112614028,param_2);
  return;
}



/* Entry: 105241430; end: 105241437; -[SCComposerSpectaclesHomeDeviceControlManager brightnessLevel] */

undefined8 FUN_105241430(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 105241438; end: 105241467; -[SCComposerSpectaclesHomeDeviceControlManager setBrightnessLevel:] */

void FUN_105241438(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105241468; end: 10524146f; -[SCComposerSpectaclesHomeDeviceControlManager audioLevel] */

undefined8 FUN_105241468(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 105241470; end: 10524149f; -[SCComposerSpectaclesHomeDeviceControlManager setAudioLevel:] */

void FUN_105241470(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052414a0; end: 1052414a7; -[SCComposerSpectaclesHomeDeviceControlManager muted] */

undefined8 FUN_1052414a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 1052414a8; end: 1052414d7; -[SCComposerSpectaclesHomeDeviceControlManager setMuted:] */

void FUN_1052414a8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1052414d8; end: 1052414df; -[SCComposerSpectaclesHomeDeviceControlManager autoBrightnessEnabled] */

undefined8 FUN_1052414d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 1052414e0; end: 10524150f; -[SCComposerSpectaclesHomeDeviceControlManager setAutoBrightnessEnabled:] */

void FUN_1052414e0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105241510; end: 1052415ff; -[SCComposerSpectaclesHomeDeviceControlManager .cxx_destruct] */

void FUN_105241510(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105241600; end: 1052417bf; -[SCSpectaclesCustomExportUIEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105241600(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  puVar1 = PTR_PTR_1126b68c8;
  _objc_alloc();
  lVar14 = (long)_DAT_112720514;
  lVar2 = param_1 + lVar14;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + lVar14;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf69de0();
  lVar6 = param_1 + lVar14;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c26dfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + lVar14;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_112720518;
  _objc_loadWeakRetained(lVar10);
  lVar11 = lVar10;
  func_0x00010c0e35c0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_11272051c;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010c0fb4c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00b3a0(puVar1,param_2,param_1,lVar3,lVar5,lVar7,lVar9,lVar11,lVar13);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + lVar14;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1052417c0; end: 10524184b; -[SCSpectaclesCustomExportUIEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052417c0(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1 + _DAT_112720514;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_1126e71a8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10524184c; end: 1052418cf; -[SCSpectaclesCustomExportUIEntryPoint customExportViewController:didShareWithOptionAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10524184c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112720514;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2486c0(lVar2,param_2,param_1,param_4);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1052418d0; end: 105241953; -[SCSpectaclesCustomExportUIEntryPoint customExportViewController:didSaveWithOptionAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052418d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112720514;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2486a0(lVar2,param_2,param_1,param_4);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105241954; end: 1052419c7; -[SCSpectaclesCustomExportUIEntryPoint customExportViewControllerDidPressCancel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105241954(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112720514;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2486e0(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1052419c8; end: 105241a17; -[SCSpectaclesCustomExportUIEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052419c8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112720518);
  _objc_destroyWeak(param_1 + _DAT_11272051c);
  _objc_destroyWeak(param_1 + _DAT_112720514);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112720520);
  return;
}



/* Entry: 105241a18; end: 105241ddb; -[SCSpectaclesPreviewCustomExportEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105241a18(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar21 = (long)_DAT_112720524;
  lVar1 = param_1 + lVar21;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf8c640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112720528;
  _objc_loadWeakRetained();
  lVar19 = param_1 + lVar21;
  _objc_loadWeakRetained();
  lVar3 = lVar19;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + lVar21;
  _objc_loadWeakRetained();
  lVar4 = lVar20;
  func_0x00010bfbb120();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + lVar21;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c26df80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + lVar21;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar14 = lVar1;
  lVar15 = lVar4;
  lVar16 = param_1;
  lVar18 = lVar6;
  if (lVar2 == 0) {
    lStack_88 = lVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,1);
    _objc_retainAutoreleasedReturnValue();
    lStack_e0 = param_1 + lVar21;
    _objc_loadWeakRetained();
    lStack_e8 = lStack_e0;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_90 = lStack_e8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_90,1);
    _objc_retainAutoreleasedReturnValue();
    lStack_f0 = param_1 + lVar21;
    _objc_loadWeakRetained();
    lVar11 = lStack_f0;
    func_0x00010bf8c5c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + lVar21;
    _objc_loadWeakRetained();
    lVar12 = lVar2;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = param_1 + lVar21;
    _objc_loadWeakRetained();
    lVar13 = lVar21;
    func_0x00010bf42a00();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = 0;
    func_0x00010bf23dc0(lVar1,param_2,lVar3,lVar4,param_1,0,lVar6,0,
                        PTR____NSArray0__struct_11034ab48,puVar9,puVar10,lVar11,lVar12,lVar13);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lStack_78 = lVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_78,1);
    _objc_retainAutoreleasedReturnValue();
    lStack_e0 = param_1 + lVar21;
    _objc_loadWeakRetained();
    lStack_e8 = lStack_e0;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_80 = lStack_e8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_80,1);
    _objc_retainAutoreleasedReturnValue();
    lStack_f0 = param_1 + lVar21;
    _objc_loadWeakRetained();
    lVar11 = lStack_f0;
    func_0x00010bf8c640();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + lVar21;
    _objc_loadWeakRetained();
    lVar12 = lVar2;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = param_1 + lVar21;
    _objc_loadWeakRetained();
    lVar13 = lVar21;
    func_0x00010bf42a00();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = 0;
    func_0x00010bf23de0(lVar1,param_2,lVar3,lVar4,param_1,0,lVar6,0,
                        PTR____NSArray0__struct_11034ab48,puVar9,puVar10,lVar11,lVar12,lVar13);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar13);
  _objc_release(lVar21);
  _objc_release(lVar12);
  _objc_release(lVar2);
  _objc_release(lVar11);
  _objc_release(lStack_f0);
  _objc_release(puVar10);
  _objc_release(lStack_e8);
  _objc_release(lStack_e0);
  _objc_release(puVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar20);
  _objc_release(lVar3);
  _objc_release(lVar19);
  _objc_release(lVar1);
  lVar1 = lVar14;
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11272052c));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar18);
  lVar20 = (long)_DAT_11272052c;
  lVar19 = *(long *)(lVar14 + lVar20);
  _objc_retain(lVar1);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar19);
  if (lVar19 == lVar1) {
    func_0x00010c12e1c0(*(undefined8 *)(lVar14 + lVar20));
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar20 = (long)_DAT_112720524;
    lVar1 = lVar14 + lVar20;
    _objc_loadWeakRetained(lVar1);
    lVar19 = lVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar14 + lVar20;
    _objc_loadWeakRetained(lVar14);
    func_0x00010c2495c0(lVar19,param_2,lVar14,lVar15,lVar16,uVar17,lVar18);
    _objc_release(lVar14);
    _objc_release(lVar19);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar18);
  return;
}



/* Entry: 105241ddc; end: 105241ee3; -[SCSpectaclesPreviewCustomExportEntryPoint customExportScope:didSucceedExporting:cancelled:alertDisplayed:activityType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105241ddc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_7);
  lVar2 = (long)_DAT_11272052c;
  lVar1 = *(long *)(param_1 + lVar2);
  _objc_retain(param_3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  if (lVar1 == param_3) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar3 = (long)_DAT_112720524;
    lVar1 = param_1 + lVar3;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010c2495c0(lVar2,param_2,param_1,param_4,param_5,param_6,param_7);
    _objc_release(param_1);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 105241ee4; end: 105241f37; -[SCSpectaclesPreviewCustomExportEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105241ee4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272052c,0);
  _objc_destroyWeak(param_1 + _DAT_112720528);
  _objc_destroyWeak(param_1 + _DAT_112720530);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112720524);
  return;
}



/* Entry: 105241f38; end: 1052420cf; -[SCGallerySnapsTabSpectaclesContentPromptSectionController initWithSelectMode:uiContainer:device:otaManager:spectaclesContentPageScopeExposer:otaUpdatePageScopeExposer:otaUpdatePageScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105241f38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126e71b0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189840(puVar1);
    func_0x00010c1facc0(puVar1);
    lVar3 = (long)_DAT_112720538;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11272053c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112720540;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112720544;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112720548;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11272054c;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1052420d0; end: 105242137; -[SCGallerySnapsTabSpectaclesContentPromptSectionController sectionController:viewModelsForObject:] */

void FUN_1052420d0(void)

{
  undefined *puVar1;
  ulong in_x3;
  ulong uVar2;
  
  _objc_retain(in_x3);
  puVar1 = PTR_PTR_1126b68d0;
  _objc_opt_class(PTR_PTR_1126b68d0);
  uVar2 = in_x3;
  _objc_opt_isKindOfClass(in_x3,puVar1);
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = in_x3;
    func_0x00010bf343c0(in_x3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(in_x3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105242138; end: 1052421c7; -[SCGallerySnapsTabSpectaclesContentPromptSectionController sectionController:cellForViewModel:atIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105242138(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bf3fd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126b68d8);
  lVar2 = lVar1;
  func_0x00010bf6e020(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010c18b5e0(lVar2);
  func_0x000107e8846c(lVar2,*(undefined1 *)(param_1 + _DAT_112720534));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1052421c8; end: 105242217; -[SCGallerySnapsTabSpectaclesContentPromptSectionController sectionController:sizeForViewModel:atIndex:] */

undefined1  [16] FUN_1052421c8(double param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  func_0x00010bf3fd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4afe0();
  _objc_release(param_2);
  auVar1._8_8_ = 0x4054000000000000;
  auVar1._0_8_ = param_1 + -4.0;
  return auVar1;
}



/* Entry: 105242218; end: 105242343; -[SCGallerySnapsTabSpectaclesContentPromptSectionController setSelectMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105242218(long param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
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
  
  puVar6 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = (long)_DAT_112720534;
  *(undefined1 *)(param_1 + lVar7) = param_3;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar9 = param_1;
  func_0x00010bf3fd40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar9;
  func_0x00010c29fc80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar8 = *plStack_110;
    do {
      lVar9 = 0;
      do {
        if (*plStack_110 != lVar8) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x000107e8846c(*(undefined8 *)(lStack_118 + lVar9 * 8),*(undefined1 *)(param_1 + lVar7)
                           );
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = lVar2;
      puVar6 = &uStack_120;
      func_0x00010bf52a60();
      lVar9 = 0;
    } while (lVar3 != 0);
  }
  lVar3 = lVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_105242344;
  lStack_150 = lVar7;
  lStack_148 = lVar9;
  lStack_140 = lVar2;
  lStack_138 = param_1;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  iVar1 = (int)*(undefined8 *)(lVar3 + _DAT_112720548);
  func_0x00010bfdb320();
  if (iVar1 == 0) {
    lVar9 = (long)_DAT_112720540;
    iVar1 = (int)*(undefined8 *)(lVar3 + lVar9);
    func_0x00010c071800();
    if (iVar1 != 0) {
      puVar5 = PTR_PTR_1126b68e0;
      _objc_alloc(PTR_PTR_1126b68e0);
      func_0x00010c00afc0();
      func_0x00010bf9d620(*(undefined8 *)(lVar3 + lVar9));
      _objc_release(puVar5);
    }
  }
  else {
    _objc_initWeak(auStack_158,lVar3);
    puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_178 = 0xc2000000;
    pcStack_170 = FUN_10524249c;
    puStack_168 = &UNK_1108482a8;
    _objc_copyWeak(auStack_160,auStack_158);
    uVar4 = 0;
    FUN_105ac3050(0,&puStack_180,&PTR___NSConcreteGlobalBlock_1108714a0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c980(*(undefined8 *)(lVar3 + _DAT_112720538));
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_160);
    _objc_destroyWeak(auStack_158);
  }
  _objc_release(puVar6);
  return;
}



/* Entry: 105242344; end: 10524249b; -[SCGallerySnapsTabSpectaclesContentPromptSectionController contentPromptTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105242344(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112720548);
  func_0x00010bfdb320();
  if (iVar1 == 0) {
    lVar4 = (long)_DAT_112720540;
    iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
    func_0x00010c071800();
    if (iVar1 != 0) {
      puVar3 = PTR_PTR_1126b68e0;
      _objc_alloc(PTR_PTR_1126b68e0);
      func_0x00010c00afc0();
      func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar4));
      _objc_release(puVar3);
    }
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10524249c;
    puStack_48 = &UNK_1108482a8;
    _objc_copyWeak(auStack_40,auStack_38);
    uVar2 = 0;
    FUN_105ac3050(0,&puStack_60,&PTR___NSConcreteGlobalBlock_1108714a0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c980(*(undefined8 *)(param_1 + _DAT_112720538));
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10524249c; end: 1052424ef;  */

void FUN_10524249c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be30d00();
  _objc_release(param_1);
  func_0x00010bf84b00(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1052424f0; end: 1052424ff;  */

void FUN_1052424f0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105242500; end: 10524256f; -[SCGallerySnapsTabSpectaclesContentPromptSectionController _handleStartingOTAUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105242500(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c288060(*(undefined8 *)(param_1 + _DAT_112720548));
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272054c);
  func_0x00010bf23000(uVar1,param_2,param_1,*(undefined8 *)(param_1 + _DAT_112720538));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_112720544),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105242570; end: 1052425c7; -[SCGallerySnapsTabSpectaclesContentPromptSectionController spectaclesContentPageExited] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105242570(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112720540;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1052425c8; end: 10524261f; -[SCGallerySnapsTabSpectaclesContentPromptSectionController spectaclesOTAUpdatePageDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052425c8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112720544;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105242620; end: 10524262f; -[SCGallerySnapsTabSpectaclesContentPromptSectionController selectMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105242620(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112720534);
}



/* Entry: 105242630; end: 1052426af; -[SCGallerySnapsTabSpectaclesContentPromptSectionController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105242630(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272054c,0);
  _objc_storeStrong(param_1 + _DAT_112720548,0);
  _objc_storeStrong(param_1 + _DAT_11272053c,0);
  _objc_storeStrong(param_1 + _DAT_112720544,0);
  _objc_storeStrong(param_1 + _DAT_112720540,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112720538,0);
  return;
}



/* Entry: 1052426b0; end: 10524270f; -[SCSpectaclesContentPromptCell initWithFrame:] */

undefined1 * FUN_1052426b0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e71b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c160fc0(puVar1);
    func_0x00010c229a20(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105242710; end: 10524309f; -[SCSpectaclesContentPromptCell setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105242710(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init();
  lVar28 = (long)_DAT_112720550;
  uVar25 = *(undefined8 *)(param_1 + lVar28);
  *(undefined **)(param_1 + lVar28) = puVar1;
  _objc_release(uVar25);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar28),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110dcc4d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c13a140(0x4022000000000000,0x4022000000000000,0x4022000000000000,0x4022000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar28),param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar25 = *(undefined8 *)(param_1 + lVar28);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x29);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(uVar25,param_2,puVar1);
  _objc_release(puVar1);
  lVar26 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar26);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar26;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,lVar27);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar28);
  uStack_a0 = uVar25;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = lVar29;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,lVar30);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar28);
  uStack_98 = uVar14;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar31;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar6;
  func_0x00010bf493c0(0x4008000000000000,uVar6,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar28);
  uStack_90 = uVar17;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar8;
  func_0x00010bf493a0(uVar8,param_2,lVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar20;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_a0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar20);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(uVar17);
  _objc_release(lVar7);
  _objc_release(lVar31);
  _objc_release(uVar6);
  _objc_release(uVar14);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(uVar5);
  _objc_release(uVar25);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(uVar4);
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  lVar27 = (long)_DAT_112720554;
  uVar25 = *(undefined8 *)(param_1 + lVar27);
  *(undefined **)(param_1 + lVar27) = puVar1;
  _objc_release(uVar25);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar27),param_2,10);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar27),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar27),param_2,0);
  func_0x00010c181f00(0x437a0000,*(undefined8 *)(param_1 + lVar27),param_2,0);
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  lVar26 = (long)_DAT_112720558;
  uVar25 = *(undefined8 *)(param_1 + lVar26);
  *(undefined **)(param_1 + lVar26) = puVar1;
  _objc_release(uVar25);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar26),param_2,0x17);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar26),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar26),param_2,0);
  func_0x00010c181f00(0x437a0000,*(undefined8 *)(param_1 + lVar26),param_2,0);
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  lVar30 = (long)_DAT_11272055c;
  uVar25 = *(undefined8 *)(param_1 + lVar30);
  *(undefined **)(param_1 + lVar30) = puVar1;
  _objc_release(uVar25);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar30),param_2,0x17);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar30),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar30),param_2,0);
  func_0x00010c181f00(0x437a0000,*(undefined8 *)(param_1 + lVar30),param_2,0);
  puVar1 = PTR_PTR_1126b68e8;
  _objc_alloc_init();
  lVar31 = (long)_DAT_112720560;
  uVar25 = *(undefined8 *)(param_1 + lVar31);
  *(undefined **)(param_1 + lVar31) = puVar1;
  _objc_release(uVar25);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar31),param_2,0);
  func_0x00010c181f00(0x437a0000,*(undefined8 *)(param_1 + lVar31),param_2,0);
  puVar1 = PTR_PTR_1126b68f0;
  _objc_alloc_init();
  lVar29 = (long)_DAT_112720564;
  uVar25 = *(undefined8 *)(param_1 + lVar29);
  *(undefined **)(param_1 + lVar29) = puVar1;
  _objc_release(uVar25);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar29),param_2,0);
  func_0x00010c181f00(0x443b8000,*(undefined8 *)(param_1 + lVar31),param_2,0);
  puVar23 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc();
  uStack_b8 = *(undefined8 *)(param_1 + lVar26);
  uStack_b0 = *(undefined8 *)(param_1 + lVar30);
  uStack_a8 = *(undefined8 *)(param_1 + lVar31);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_b8,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3fe0(puVar23,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c190b80(puVar23,param_2,0);
  func_0x00010c16e060(puVar23,param_2,0);
  func_0x00010c207380(0,puVar23);
  func_0x00010c219b60(puVar23,param_2,0);
  func_0x00010c181f00(0x437a0000,puVar23,param_2,0);
  puVar11 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc();
  uStack_c8 = *(undefined8 *)(param_1 + lVar27);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_c0 = puVar23;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_c8,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3fe0(puVar11,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c190b80(puVar11,param_2,1);
  func_0x00010c16e060(puVar11,param_2,1);
  func_0x00010c166c00(puVar11,param_2,1);
  func_0x00010c207380(0,puVar11);
  func_0x00010c219b60(puVar11,param_2,0);
  func_0x00010c181f00(0x437a0000,puVar11,param_2,0);
  puVar12 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc();
  uStack_d0 = *(undefined8 *)(param_1 + lVar29);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_d8 = puVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_d8,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3fe0(puVar12,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c190b80(puVar12,param_2,0);
  func_0x00010c16e060(puVar12,param_2,0);
  func_0x00010c166c00(puVar12,param_2,3);
  func_0x00010c207380(0x4020000000000000,puVar12);
  func_0x00010c219b60(puVar12,param_2,0);
  func_0x00010c1b9b80(0x4020000000000000,0x4030000000000000,0x4020000000000000,0x4020000000000000,
                      puVar12);
  func_0x00010c1b9ba0(puVar12,param_2,1);
  func_0x00010c21e900(puVar12,param_2,1);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  func_0x00010bef9040(puVar12,param_2,puVar1);
  _objc_release(puVar1);
  lVar26 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar26);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar13 = puVar12;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar13;
  func_0x00010bf493a0(puVar13,param_2,uVar25);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar12;
  puStack_f8 = puVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar3;
  func_0x00010bf493a0(puVar3,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar12;
  puStack_f0 = puVar15;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar16;
  func_0x00010bf493a0(puVar16,param_2,uVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar12;
  puStack_e8 = puVar18;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar19;
  func_0x00010bf493a0(puVar19,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_e0 = puVar21;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_f8,4);
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar22;
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(uVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(uVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(uVar14);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar25);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar24);
  lVar26 = (long)_DAT_112720568;
  _objc_retain(puVar24);
  uVar25 = *(undefined8 *)(puVar23 + lVar26);
  *(undefined **)(puVar23 + lVar26) = puVar24;
  _objc_release(uVar25);
  func_0x000109025180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(puVar23 + _DAT_112720554),param_2,uVar25);
  _objc_release(uVar25);
  puVar1 = puVar24;
  func_0x00010bfbb320(puVar24);
  _objc_retainAutoreleasedReturnValue();
  lVar26 = (long)_DAT_112720564;
  uVar25 = *(undefined8 *)(puVar23 + lVar26);
  func_0x00010bfbb300(uVar25);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea2f60(puVar23,param_2,puVar1,uVar25);
  _objc_release(uVar25);
  _objc_release(puVar1);
  puVar1 = puVar24;
  func_0x00010bf13a40(puVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(puVar23 + lVar26);
  func_0x00010bf13a20(uVar25);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea2f60(puVar23,param_2,puVar1,uVar25);
  _objc_release(uVar25);
  _objc_release(puVar1);
  puVar1 = puVar24;
  func_0x00010bfea540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = puVar24;
  if (puVar1 == (undefined *)0x0) {
    puVar1 = puVar24;
    func_0x00010c282560();
    func_0x00010c1a7f60(*(undefined8 *)(puVar23 + _DAT_112720560),param_2,1);
    lVar26 = (long)_DAT_11272055c;
    if (puVar1 == (undefined *)0x0) {
      func_0x00010c1a7f60(*(undefined8 *)(puVar23 + lVar26),param_2,0);
      func_0x00010c1a7f60(*(undefined8 *)(puVar23 + _DAT_112720558),param_2,1);
      func_0x00010c29eda0(puVar24);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c1a7f60(*(undefined8 *)(puVar23 + lVar26),param_2,1);
      lVar26 = (long)_DAT_112720558;
      func_0x00010c1a7f60(*(undefined8 *)(puVar23 + lVar26),param_2,0);
      func_0x00010c282580(puVar24);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c212f20(*(undefined8 *)(puVar23 + lVar26),param_2,puVar2);
  }
  else {
    func_0x00010c1a7f60(*(undefined8 *)(puVar23 + _DAT_112720558),param_2,1);
    func_0x00010c1a7f60(*(undefined8 *)(puVar23 + _DAT_11272055c),param_2,1);
    lVar26 = (long)_DAT_112720560;
    func_0x00010c1a7f60(*(undefined8 *)(puVar23 + lVar26),param_2,0);
    uVar25 = *(undefined8 *)(puVar23 + lVar26);
    func_0x00010bfea540(puVar24);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf47b60(uVar25,param_2,puVar2,1);
  }
  _objc_release(puVar2);
  func_0x00010c1cbe20(puVar23);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar24);
  return;
}



/* Entry: 1052430a0; end: 1052432e3; -[SCSpectaclesContentPromptCell configureWithModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052430a0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112720568;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(long *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
  func_0x000109025180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112720554),param_2,uVar1);
  _objc_release(uVar1);
  lVar2 = param_3;
  func_0x00010bfbb320(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_112720564;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bfbb300(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea2f60(param_1,param_2,lVar2,uVar1);
  _objc_release(uVar1);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bf13a40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf13a20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea2f60(param_1,param_2,lVar2,uVar1);
  _objc_release(uVar1);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bfea540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar4 = param_3;
  if (lVar2 == 0) {
    lVar2 = param_3;
    func_0x00010c282560();
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112720560),param_2,1);
    lVar3 = (long)_DAT_11272055c;
    if (lVar2 == 0) {
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3),param_2,0);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112720558),param_2,1);
      func_0x00010c29eda0(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3),param_2,1);
      lVar3 = (long)_DAT_112720558;
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3),param_2,0);
      func_0x00010c282580(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3),param_2,lVar4);
  }
  else {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112720558),param_2,1);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11272055c),param_2,1);
    lVar2 = (long)_DAT_112720560;
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2),param_2,0);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    func_0x00010bfea540(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf47b60(uVar1,param_2,lVar4,1);
  }
  _objc_release(lVar4);
  func_0x00010c1cbe20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1052432e4; end: 105243437; -[SCSpectaclesContentPromptCell _setContentThumb:toImageView:] */

void FUN_1052432e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = param_5;
  func_0x00010c074c20();
  if ((uVar1 & 1) == 0) {
    uVar2 = param_7;
    func_0x00010c070dc0();
    if ((int)uVar2 == 0) {
      func_0x00010c1a9f00(param_8);
    }
    else {
      func_0x00010c08cdc0(param_5);
      func_0x00010bf20c00(param_8);
      uVar2 = param_8;
      func_0x00010c08c0e0(param_8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf525a0();
      _objc_release(uVar2);
      uVar2 = 0;
      func_0x0001000819a8(0,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_105243438;
      puStack_80 = &UNK_1108714c0;
      _objc_retain(param_7);
      uStack_78 = param_7;
      uStack_68 = param_3;
      uStack_60 = param_4;
      uStack_58 = param_1;
      _objc_retain(param_8);
      uStack_70 = param_8;
      func_0x00010007380c(uVar2,&puStack_98);
      _objc_release(uVar2);
      _objc_release(uStack_70);
      _objc_release(uStack_78);
    }
  }
  _objc_release(param_8);
  _objc_release(param_7);
  return;
}



/* Entry: 105243438; end: 105243537;  */

void FUN_105243438(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf63a60(uVar1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = puVar2;
  func_0x00010bf5c8c0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105243538;
  puStack_48 = &UNK_110841f80;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  puStack_38 = puVar3;
  _objc_retain(puVar3);
  func_0x000100162d98("APPSTORE",&puStack_60);
  _objc_release(puStack_38);
  _objc_release(uStack_40);
  _objc_release(puVar3);
  return;
}



/* Entry: 105243538; end: 10524353f;  */

void FUN_105243538(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setImage__1126481e8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105243540; end: 1052435df; -[SCSpectaclesContentPromptCell _didTapContentPrompt:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105243540(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112720568;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c29ed60();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + lVar3);
    func_0x00010c282560();
    if (lVar1 == 0) {
      return;
    }
  }
  lVar1 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c088480(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4d0a0(lVar1);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf479f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_configureWithModel__1125af820,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 1052435e0; end: 1052435e3; -[SCSpectaclesContentPromptCell bindViewModel:] */

void FUN_1052435e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf479f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_configureWithModel__1125af820);
  return;
}



/* Entry: 1052435e4; end: 105243603; -[SCSpectaclesContentPromptCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052435e4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11272056c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105243604; end: 105243617; -[SCSpectaclesContentPromptCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105243604(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11272056c,param_3);
  return;
}



/* Entry: 105243618; end: 1052436b3; -[SCSpectaclesContentPromptCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105243618(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272056c);
  _objc_storeStrong(param_1 + _DAT_112720568,0);
  _objc_storeStrong(param_1 + _DAT_112720564,0);
  _objc_storeStrong(param_1 + _DAT_112720560,0);
  _objc_storeStrong(param_1 + _DAT_11272055c,0);
  _objc_storeStrong(param_1 + _DAT_112720558,0);
  _objc_storeStrong(param_1 + _DAT_112720554,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112720550,0);
  return;
}



/* Entry: 1052436b4; end: 105243a27; -[SCSpectaclesContentPromptImportingView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1052436b4(undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126e71c0;
  puVar1 = &uStack_98;
  uStack_98 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar2 = (undefined *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_alloc_init();
    func_0x00010c16e060();
    func_0x00010c207380(0x4024000000000000,puVar2);
    func_0x00010c166c00(puVar2);
    func_0x00010c219b60(puVar2);
    func_0x00010befbb60(puVar1);
    puVar16 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar3 = puVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    puStack_88 = puVar5;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    puStack_80 = puVar8;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010c08de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar2;
    puStack_78 = puVar11;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar1;
    func_0x00010c2793a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar14;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar16 = PTR_PTR_1126aeff0;
    _objc_alloc();
    param_4 = 0;
    func_0x00010bfffb60();
    lVar18 = (long)_DAT_112720570;
    uVar17 = *(undefined8 *)((long)puVar1 + lVar18);
    *(undefined **)((long)puVar1 + lVar18) = puVar16;
    _objc_release(uVar17);
    func_0x00010c1a8560(*(undefined8 *)((long)puVar1 + lVar18));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar18));
    func_0x00010bef6d60(puVar2);
    puVar16 = PTR_PTR_1126aea58;
    _objc_alloc_init();
    lVar18 = (long)_DAT_112720574;
    uVar17 = *(undefined8 *)((long)puVar1 + lVar18);
    *(undefined **)((long)puVar1 + lVar18) = puVar16;
    _objc_release(uVar17);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar18));
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar18));
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar18));
    puVar16 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar18));
    _objc_release(puVar16);
    param_3 = *(undefined8 **)((long)puVar1 + lVar18);
    func_0x00010bef6d60(puVar2);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
  uVar17 = *(undefined8 *)(puVar2 + _DAT_112720570);
  _objc_retain(param_3);
  if (param_4 == 0) {
    func_0x00010c2558c0(uVar17);
  }
  else {
    func_0x00010c24dbc0();
  }
  func_0x00010c212f20(*(undefined8 *)(puVar2 + _DAT_112720574));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return param_3;
}



/* Entry: 105243a28; end: 105243a93; -[SCSpectaclesContentPromptImportingView configureWithStatusText:shouldAnimate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105243a28(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112720570);
  _objc_retain(param_3);
  if (param_4 == 0) {
    func_0x00010c2558c0(uVar1);
  }
  else {
    func_0x00010c24dbc0();
  }
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112720574),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105243a94; end: 105243ad3; -[SCSpectaclesContentPromptImportingView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105243a94(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112720574,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112720570,0);
  return;
}



/* Entry: 105243ad4; end: 105243ccb; -[SCSpectaclesContentPromptMemoriesSnapsTabSectionPlugin initWithSpectaclesServices:contentStatusServices:uiContainer:spectaclesContentPageScopeExposer:otaUpdatePageScopeExposer:otaUpdatePageScopeServices:] */

undefined8 *
FUN_105243ad4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126e71c8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf4d720();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c2533a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar1[1];
    puVar1[1] = uVar6;
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105243ccc; end: 105243e1b;  */

void FUN_105243ccc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c282be0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c27a420(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c27a440(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126b68d0;
  _objc_alloc(PTR_PTR_1126b68d0);
  uVar1 = param_2;
  func_0x00010bf6fd20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4d740(param_2);
  _objc_release(param_2);
  func_0x00010c00bd80(puVar5);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105243e1c; end: 105243e63;  */

void FUN_105243e1c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf4bc60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105243e64; end: 105243f8b; -[SCSpectaclesContentPromptMemoriesSnapsTabSectionPlugin sectionControllerForViewModel:selectMode:] */

void FUN_105243e64(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  puVar5 = PTR_PTR_1126b68d0;
  _objc_opt_class(PTR_PTR_1126b68d0);
  uVar1 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar5);
  if ((uVar1 & 1) == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar1 = param_3;
    func_0x00010bf6fd20(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b68f8;
    _objc_alloc(PTR_PTR_1126b68f8);
    uVar2 = uVar1;
    func_0x00010bfa1c80(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0eddc0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c043b00(puVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105243f8c; end: 105243fb3; -[SCSpectaclesContentPromptMemoriesSnapsTabSectionPlugin viewModel] */

void FUN_105243f8c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105243fb4; end: 105244013; -[SCSpectaclesContentPromptMemoriesSnapsTabSectionPlugin .cxx_destruct] */

void FUN_105243fb4(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105244014; end: 105244153; -[SCSpectaclesContentPromptMemoriesSnapsTabSectionPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105244014(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar7 = (long)_DAT_112720590;
  lVar1 = param_1 + lVar7;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b6900;
  _objc_alloc(PTR_PTR_1126b6900);
  lVar4 = param_1 + _DAT_112720594;
  _objc_loadWeakRetained(lVar4);
  lVar5 = param_1 + _DAT_112720598;
  _objc_loadWeakRetained(lVar5);
  lVar7 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar7);
  lVar6 = lVar7;
  func_0x00010beff7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + _DAT_11272059c);
  uVar9 = *(undefined8 *)(param_1 + _DAT_1127205a0);
  param_1 = param_1 + _DAT_1127205a4;
  _objc_loadWeakRetained(param_1);
  func_0x00010c04b0a0(puVar3,param_2,lVar4,lVar5,lVar6,uVar8,uVar9,param_1);
  func_0x00010c125b60(lVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(param_1);
  _objc_release(lVar6);
  _objc_release(lVar7);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105244154; end: 1052441c3; -[SCSpectaclesContentPromptMemoriesSnapsTabSectionPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105244154(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127205a0,0);
  _objc_storeStrong(param_1 + _DAT_11272059c,0);
  _objc_destroyWeak(param_1 + _DAT_1127205a4);
  _objc_destroyWeak(param_1 + _DAT_112720598);
  _objc_destroyWeak(param_1 + _DAT_112720594);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112720590);
  return;
}



/* Entry: 1052441c4; end: 10524438f; -[SCSpectaclesContentPromptSectionViewModel initWithDevice:contentStatusState:untransferredContent:transferredContent:transferringContent:] */

undefined1 *
FUN_1052441c4(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar1 = &uStack_70;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126e71d0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 == (undefined8 *)0x0) goto LAB_105244324;
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)((long)puVar1 + 8);
  *(undefined1 **)((long)puVar1 + 8) = param_3;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
  *(undefined **)((long)puVar1 + 0x10) = PTR____NSArray0__struct_11034ab48;
  _objc_release(uVar2);
  puVar3 = param_3;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c06e7e0();
  _objc_release(puVar3);
  if ((int)puVar4 == 0) goto LAB_105244324;
  puVar5 = PTR_PTR_1126b6908;
  _objc_alloc();
  func_0x00010c003c20();
  puVar6 = puVar5;
  func_0x00010bfea540();
  _objc_retainAutoreleasedReturnValue();
  if ((puVar6 == (undefined *)0x0) &&
     (puVar7 = puVar5, func_0x00010c282560(), puVar7 == (undefined *)0x0)) {
    puVar6 = puVar5;
    func_0x00010c29ed60();
    if (puVar6 != (undefined *)0x0) goto LAB_1052442ec;
  }
  else {
    _objc_release(puVar6);
LAB_1052442ec:
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = puVar5;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar6;
    _objc_release(uVar2);
  }
  _objc_release(puVar5);
LAB_105244324:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__NSStringFromClass_1103455e8)();
    return param_3;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105244390; end: 1052443a3; -[SCSpectaclesContentPromptSectionViewModel diffIdentifier] */

void FUN_105244390(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 1052443a4; end: 1052443ab; -[SCSpectaclesContentPromptSectionViewModel isEqualToDiffableObject:] */

undefined8 FUN_1052443a4(void)

{
  return 1;
}



/* Entry: 1052443ac; end: 1052443b3; -[SCSpectaclesContentPromptSectionViewModel device] */

undefined8 FUN_1052443ac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1052443b4; end: 1052443e3; -[SCSpectaclesContentPromptSectionViewModel setDevice:] */

void FUN_1052443b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052443e4; end: 1052443eb; -[SCSpectaclesContentPromptSectionViewModel cellViewModels] */

undefined8 FUN_1052443e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1052443ec; end: 10524441b; -[SCSpectaclesContentPromptSectionViewModel .cxx_destruct] */

void FUN_1052443ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10524441c; end: 105244a07; -[SCSpectaclesContentPromptThumbnailView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10524441c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e0 = PTR_PTR_1126e71d8;
  puVar1 = &uStack_e8;
  uStack_e8 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  lVar14 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    uVar19 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar20 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar21 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar22 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
    lVar18 = (long)_DAT_1127205b0;
    uVar16 = *(undefined8 *)((long)puVar1 + lVar18);
    *(undefined **)((long)puVar1 + lVar18) = puVar2;
    _objc_release(uVar16);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar18));
    uVar16 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010c08c0e0(uVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4010000000000000);
    _objc_release(uVar16);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar18));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
    lVar17 = (long)_DAT_1127205b4;
    uVar16 = *(undefined8 *)((long)puVar1 + lVar17);
    *(undefined **)((long)puVar1 + lVar17) = puVar2;
    _objc_release(uVar16);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar17));
    uVar16 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010c08c0e0(uVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4010000000000000);
    _objc_release(uVar16);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar17));
    _objc_release(puVar2);
    func_0x00010befbb60(puVar1);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = uVar16;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar5;
    func_0x00010bf493c0(0x4020000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar19;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uVar20;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010bf1ff80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar21;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010bfe0660(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar11;
    func_0x00010bf49560(0x3ffb333333333333,0);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_98 = uVar22;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar13);
    _objc_release(uVar22);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar21);
    _objc_release(puVar10);
    _objc_release(uVar9);
    _objc_release(uVar20);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(uVar19);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar16);
    _objc_release(puVar4);
    _objc_release(uVar3);
    func_0x00010c1677c0(0x3fd999999999999a,*(undefined8 *)((long)puVar1 + lVar17));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar14 = *(long *)((long)puVar1 + lVar17);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar14;
    func_0x00010bf493c0(0x4010000000000000);
    _objc_retainAutoreleasedReturnValue();
    lStack_d8 = lVar15;
    uVar22 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar22;
    func_0x00010bf493c0(0xc010000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_d0 = uVar19;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar5;
    func_0x00010bf493c0(0xc010000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = uVar20;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar9;
    func_0x00010bf493c0(0xc010000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_c0 = uVar16;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar13);
    _objc_release(uVar16);
    _objc_release(uVar11);
    _objc_release(uVar9);
    _objc_release(uVar20);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar19);
    _objc_release(uVar3);
    _objc_release(uVar22);
    _objc_release(lVar15);
    _objc_release(uVar21);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar1;
  }
  ___stack_chk_fail();
  return *(undefined8 **)(lVar14 + _DAT_1127205b0);
}



/* Entry: 105244a08; end: 105244a17; -[SCSpectaclesContentPromptThumbnailView frontThumb] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105244a08(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127205b0);
}



/* Entry: 105244a18; end: 105244a27; -[SCSpectaclesContentPromptThumbnailView backThumb] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105244a18(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127205b4);
}



/* Entry: 105244a28; end: 105244a67; -[SCSpectaclesContentPromptThumbnailView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105244a28(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127205b4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127205b0,0);
  return;
}



/* Entry: 105244a68; end: 105244b7f; -[SCSpectaclesContentPromptViewModel initWithContentStatusState:device:untransferredContent:transferredContent:transferringContent:] */

undefined1 *
FUN_105244a68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e71e0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c246ca0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 105244b80; end: 105244c03;  */

undefined8 FUN_105244b80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  func_0x00010c26f500(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c26f500(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = param_3;
  func_0x00010bf433a0(param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 105244c04; end: 105244c5b; -[SCSpectaclesContentPromptViewModel importStatus] */

void FUN_105244c04(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 8) == 5) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf529e0(uVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf529e0(uVar2);
    func_0x00010604e480(uVar1,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105244c5c; end: 105244dab; -[SCSpectaclesContentPromptViewModel unseenSnapsCount] */

void FUN_105244c5c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bf4d6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c26f520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010bfece40();
    if (lVar2 != 0x7fffffffffffffff) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_count_1125b2420);
  return;
}



/* Entry: 105244dac; end: 105244ffb; -[SCSpectaclesContentPromptViewModel _snapsFromToday] */

undefined * FUN_105244dac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0();
  puVar4 = PTR____NSArray0__struct_11034ab48;
  if (lVar1 == 0) goto LAB_105244f40;
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bfece40();
  puVar4 = PTR____NSArray0__struct_11034ab48;
  if (lVar1 == 0) goto LAB_105244f40;
  if (lVar1 == 1) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
LAB_105244e74:
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (lVar1 == 0x7fffffffffffffff) {
      lVar1 = *(long *)(param_1 + 0x18);
      func_0x00010bf529e0();
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      if (lVar1 == 1) {
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_105244e74;
      }
      func_0x00010bf529e0();
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
LAB_105244f40:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    puVar4 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
    _objc_retain(param_2);
    func_0x00010bf5e300(puVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010c26f500(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    puVar5 = puVar4;
    func_0x00010c070320(puVar4);
    _objc_release(uVar2);
    _objc_release(puVar4);
    return (undefined *)(ulong)((uint)puVar5 ^ 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return puVar4;
}



/* Entry: 105244ffc; end: 10524503b; -[SCSpectaclesContentPromptViewModel unseenSnapsText] */

void FUN_105244ffc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c282560();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dcc4f8);
  return;
}



/* Entry: 10524503c; end: 10524506f; -[SCSpectaclesContentPromptViewModel viewedSnapsCount] */

long FUN_10524503c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0(lVar1);
  func_0x00010c282560(param_1);
  return lVar1 - param_1;
}



/* Entry: 105245070; end: 1052450d7; -[SCSpectaclesContentPromptViewModel viewedSnapsText] */

void FUN_105245070(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar2 != 0) {
    func_0x00010c29ed60();
    func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dcc538);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1052450d8; end: 10524511f; -[SCSpectaclesContentPromptViewModel lastCaptureDate] */

void FUN_1052450d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfb1920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c26f500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105245120; end: 10524517b; -[SCSpectaclesContentPromptViewModel frontThumbContent] */

void FUN_105245120(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bebda80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  lVar3 = lVar1;
  if (lVar2 == 0) {
    lVar3 = *(long *)(param_1 + 0x18);
  }
  func_0x00010bfb1920(lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10524517c; end: 1052451d7; -[SCSpectaclesContentPromptViewModel backThumbContent] */

void FUN_10524517c(long param_1)

{
  long lVar1;
  
  func_0x00010bebda80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf529e0();
  if (lVar1 == 2) {
    lVar1 = param_1;
    func_0x00010c089820(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = 0;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1052451d8; end: 1052451eb; -[SCSpectaclesContentPromptViewModel diffIdentifier] */

void FUN_1052451d8(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 1052451ec; end: 105245337; -[SCSpectaclesContentPromptViewModel isEqualToDiffableObject:] */

undefined8 FUN_1052451ec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bfea540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bfea540(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0720c0(lVar1,param_2,lVar2);
  if ((int)lVar3 != 0) {
    lVar3 = param_1;
    func_0x00010c282560();
    lVar4 = param_3;
    func_0x00010c282560();
    if (lVar3 == lVar4) {
      lVar3 = param_1;
      func_0x00010c29ed60();
      lVar4 = param_3;
      func_0x00010c29ed60();
      if (lVar3 == lVar4) {
        uVar5 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010bf4d6e0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c26f520();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(param_3 + 0x10);
        func_0x00010bf4d6e0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c26f520();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar6;
        func_0x00010c071ce0(uVar6,param_2,uVar8);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar5);
        goto LAB_105245304;
      }
    }
  }
  uVar9 = 0;
LAB_105245304:
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
  return uVar9;
}



/* Entry: 105245338; end: 10524533f; -[SCSpectaclesContentPromptViewModel setUnseenSnapsCount:] */

void FUN_105245338(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 105245340; end: 105245347; -[SCSpectaclesContentPromptViewModel setViewedSnapsCount:] */

void FUN_105245340(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 105245348; end: 10524538f; -[SCSpectaclesContentPromptViewModel .cxx_destruct] */

void FUN_105245348(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105245390; end: 10524553b; -[SCGallerySnapsTabSpectaclesImportSectionController initWithSelectMode:spectaclesServices:wifiTransferService:legacySpectaclesTooltipsService:alertUIContainer:appStatusCoordinator:spectaclesContentPageScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105245390(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126e71e8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127205d4;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127205d8;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127205dc) = param_3;
    lVar3 = (long)_DAT_1127205e0;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127205e4;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
    _objc_release(uVar2);
    func_0x00010c189840(puVar1);
    func_0x00010c1c82c0(0,puVar1);
    func_0x00010c1c8300(0x4000000000000000,puVar1);
    lVar3 = (long)_DAT_1127205e8;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127205ec;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10524553c; end: 10524557b; -[SCGallerySnapsTabSpectaclesImportSectionController inset] */

undefined8 FUN_10524553c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0deea0();
  uVar1 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  if (param_1 != 0) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 10524557c; end: 1052455e7; -[SCGallerySnapsTabSpectaclesImportSectionController sectionController:viewModelsForObject:] */

void FUN_10524557c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *in_x3;
  
  _objc_retain(in_x3);
  puVar1 = PTR_PTR_1126b6910;
  _objc_opt_class(PTR_PTR_1126b6910);
  puVar2 = in_x3;
  _objc_opt_isKindOfClass(in_x3,puVar1);
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (((ulong)puVar2 & 1) != 0) {
    puVar1 = in_x3;
    func_0x00010bf343c0(in_x3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(in_x3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1052455e8; end: 10524573f; -[SCGallerySnapsTabSpectaclesImportSectionController sectionController:cellForViewModel:atIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052455e8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b6918;
  _objc_opt_class(PTR_PTR_1126b6918);
  uVar2 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar1);
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR_PTR_1126b6928;
    _objc_opt_class(PTR_PTR_1126b6928);
    uVar2 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar1);
    lVar3 = param_1;
    func_0x00010bf3fd40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b6938;
    if ((uVar2 & 1) != 0) {
      puVar1 = PTR_PTR_1126b6930;
    }
    _objc_opt_class(puVar1);
    lVar4 = lVar3;
    func_0x00010bf6e020(lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  else {
    lVar3 = param_1;
    func_0x00010bf3fd40(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126b6920);
    lVar4 = lVar3;
    func_0x00010bf6e020(lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    func_0x00010c18b5e0(lVar4);
    func_0x00010c229c00(lVar4);
  }
  func_0x000107e8846c(lVar4,*(undefined1 *)(param_1 + _DAT_1127205dc));
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 105245740; end: 105245813; -[SCGallerySnapsTabSpectaclesImportSectionController sectionController:sizeForViewModel:atIndex:] */

undefined1  [16]
FUN_105245740(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  undefined *puVar1;
  ulong uVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  _objc_retain(param_5);
  func_0x00010bf3fd40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4afe0();
  dVar3 = param_1 + -4.0;
  _objc_release(param_2);
  puVar1 = PTR_PTR_1126b6918;
  _objc_opt_class(PTR_PTR_1126b6918);
  uVar2 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar1);
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR_PTR_1126b6928;
    _objc_opt_class(PTR_PTR_1126b6928);
    uVar2 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar1);
    puVar1 = PTR_PTR_1126b6938;
    if ((uVar2 & 1) != 0) {
      puVar1 = PTR_PTR_1126b6930;
    }
    func_0x00010bfe0640(puVar1);
  }
  else {
    param_1 = dVar3;
    func_0x00010bfe08c0(dVar3,PTR_PTR_1126b6920);
  }
  _objc_release(param_5);
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = dVar3;
  return auVar4;
}



/* Entry: 105245814; end: 105245947; -[SCGallerySnapsTabSpectaclesImportSectionController importUntransferredContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105245814(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127205d4);
  func_0x00010c249020();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0b8300();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfb0fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar3 = uVar5;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c06e7e0();
  _objc_release(uVar3);
  lVar7 = (long)_DAT_1127205e4;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar7);
  func_0x00010c071800();
  if (iVar1 == 0 || (int)uVar4 == 0) {
    puVar6 = *(undefined **)(param_1 + _DAT_1127205d8);
    func_0x00010c269d40(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c064e20();
  }
  else {
    puVar6 = PTR_PTR_1126b68e0;
    _objc_alloc(PTR_PTR_1126b68e0);
    func_0x00010c00afc0();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar7),param_2,puVar6);
  }
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 105245948; end: 105245ccb; -[SCGallerySnapsTabSpectaclesImportSectionController spectaclesImportCellDidTapImportButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105245948(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined **unaff_x28;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar11 = (long)_DAT_1127205e8;
  uVar1 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22f760();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    func_0x00010bfea560(param_1);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c222f20();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127205e0);
    _objc_retain(uVar2);
    _objc_initWeak(auStack_78,param_1);
    puVar3 = PTR_PTR_1126aed78;
    _objc_alloc(PTR_PTR_1126aed78);
    ppuVar4 = &PTR____CFConstantStringClassReference_110dcc558;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcc558,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = &PTR____CFConstantStringClassReference_110dcc578;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcc578,0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126aed70;
    ppuVar6 = &PTR____CFConstantStringClassReference_110dad758;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_105245ccc;
    puStack_90 = &UNK_110849410;
    unaff_x28 = &puStack_a8;
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(uVar2);
    uStack_88 = uVar2;
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052ec0(puVar3);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    func_0x00010bf0c980(uVar2);
    _objc_release(puVar3);
    _objc_release(uStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
    _objc_release(uVar2);
  }
  lVar11 = (long)_DAT_1127205d4;
  uVar9 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c249020(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0b8300();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar1;
  func_0x00010bfb0fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar9);
  uVar1 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bf027a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + _DAT_1127205ec);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06300();
  func_0x00010c0b02a0(uVar2);
  _objc_release(uVar9);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x28 + 5);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  lVar11 = param_3 + 0x28;
  _objc_loadWeakRetained(lVar11);
  func_0x00010bfea560();
  _objc_release(lVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_detachUI__1125b96b8,0);
  return;
}


