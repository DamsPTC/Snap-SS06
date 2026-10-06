/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10525c5d8; end: 10525c6c3; -[SCSpectaclesSettingsViewController _activateDevice:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525c5d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11272081c;
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + lVar2));
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010beef9e0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10525c6c4; end: 10525c7d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525c6c4(long param_1,uint param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be88580(lVar1);
    if (((param_2 & 1) == 0) && ((param_3 & 1) == 0)) {
      lVar2 = *(long *)(param_1 + 0x20);
      func_0x00010bfd38e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf70e00();
      _objc_release(lVar2);
      if (lVar3 == 1) {
        func_0x000109026710();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
      }
      else if (lVar3 == 0) {
        func_0x000109026680();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
      }
      else {
        lVar3 = 0;
      }
      func_0x000109026668();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beb7b40(lVar1);
      _objc_release(lVar2);
      func_0x00010c0af4e0(*(undefined8 *)(lVar1 + _DAT_112720820));
      _objc_release(lVar3);
    }
    else if (param_2 != 0) {
      func_0x00010c0af500(*(undefined8 *)(lVar1 + _DAT_112720820));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10525c7d4; end: 10525cabf; -[SCSpectaclesSettingsViewController settingsDeviceCell:didTapConnectButtonForDeviceWithSerialNumber:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525c7d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 unaff_x22;
  undefined8 uVar7;
  long lVar8;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  long lStack_148;
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
  lVar6 = param_1;
  func_0x00010bdfbdc0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  lStack_140 = (long)_DAT_112720820;
  func_0x00010c0af520(*(undefined8 *)(param_1 + lStack_140),param_2,lVar6);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar4 = *(long *)(param_1 + _DAT_112720870);
  _objc_retain(lVar4);
  lVar1 = lVar4;
  lStack_138 = lVar4;
  func_0x00010bf52a60(lVar4,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar1 != 0) {
    lVar8 = *plStack_120;
    lStack_148 = lVar6;
    do {
      lVar4 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lStack_138);
        }
        uVar7 = *(undefined8 *)(lStack_128 + lVar4 * 8);
        lVar6 = (long)_DAT_112720818;
        unaff_x22 = *(undefined8 *)(param_1 + lVar6);
        func_0x00010c253460();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = unaff_x22;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar2;
        func_0x00010c070920();
        _objc_release(uVar2);
        _objc_release();
        if ((int)uVar5 != 0) {
          func_0x000109026668();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = unaff_x22;
          func_0x000109026698();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010beb7b40(param_1,param_2,0,unaff_x22,uVar2);
          uVar5 = 1;
LAB_10525ca4c:
          lVar4 = lStack_140;
          _objc_release(uVar2);
          _objc_release(unaff_x22);
          lVar6 = lStack_148;
          lVar1 = lStack_148;
          func_0x00010c0af4e0(*(undefined8 *)(param_1 + lVar4),param_2,lStack_148,uVar5);
          _objc_release(lStack_138);
          goto LAB_10525ca7c;
        }
        unaff_x22 = *(undefined8 *)(param_1 + lVar6);
        func_0x00010c253460();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = unaff_x22;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar2;
        func_0x00010c070960();
        _objc_release(uVar2);
        _objc_release();
        if ((int)uVar5 != 0) {
          func_0x000109026668();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          uVar2 = unaff_x22;
          func_0x0001090266b0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0d4f60();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar7;
          func_0x00010bf85d80();
          _objc_retainAutoreleasedReturnValue();
          uStack_150 = uVar5;
          func_0x00010c14de00(puVar3,param_2,uVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010beb7b40(param_1,param_2,0,unaff_x22,puVar3);
          _objc_release(puVar3);
          _objc_release(uVar5);
          _objc_release(uVar7);
          uVar5 = 2;
          goto LAB_10525ca4c;
        }
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      lVar1 = lStack_138;
      func_0x00010bf52a60(lStack_138,param_2,&uStack_130,auStack_f0,0x10);
      unaff_x22 = 0;
      lVar6 = lStack_148;
    } while (lVar1 != 0);
  }
  _objc_release(lStack_138);
  lVar1 = lVar6;
  func_0x00010bdc4c00(param_1);
LAB_10525ca7c:
  lVar8 = lVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_158 = FUN_10525cac0;
  uStack_180 = unaff_x22;
  lStack_178 = lVar6;
  lStack_170 = param_1;
  lStack_168 = lVar4;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(lVar1);
  uVar5 = *(undefined8 *)(lVar8 + _DAT_112720870);
  puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a0 = 0xc2000000;
  pcStack_198 = FUN_10525cb80;
  puStack_190 = &UNK_1108718f8;
  lStack_188 = lVar1;
  _objc_retain(lVar1);
  func_0x00010bfaea20(uVar5,param_2,&puStack_1a8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lStack_188);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10525cac0; end: 10525cb7f; -[SCSpectaclesSettingsViewController _deviceFromSerialNumber:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525cac0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112720870);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10525cb80;
  puStack_40 = &UNK_1108718f8;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bfaea20(uVar2,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10525cb80; end: 10525cbc7;  */

undefined8 FUN_10525cb80(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c15e740(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 10525cbc8; end: 10525cbdf; -[SCSpectaclesSettingsViewController pairingHeaderViewDidPressInfoButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525cbc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7d230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__presentPairingPageWithSource_de_11257ce28,4,
             *(undefined8 *)(param_1 + _DAT_11272080c),0);
  return;
}



/* Entry: 10525cbe0; end: 10525cc17; -[SCSpectaclesSettingsViewController pairingHeaderViewDidPressActionButton:] */

void FUN_10525cbe0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10525cc18; end: 10525cc23; -[SCSpectaclesSettingsViewController pairingHeaderViewDidTapInfoCard:] */

void FUN_10525cc18(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beba3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__showPageForUrlString__11258c298,
             &PTR____CFConstantStringClassReference_110dcd7d8);
  return;
}



/* Entry: 10525cc24; end: 10525cc3b; -[SCSpectaclesSettingsViewController didPressPairNowButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525cc24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7d230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__presentPairingPageWithSource_de_11257ce28,3,
             *(undefined8 *)(param_1 + _DAT_11272080c),0);
  return;
}



/* Entry: 10525cc3c; end: 10525cc8b; -[SCSpectaclesSettingsViewController getTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525cc3c(long param_1)

{
  if (*(long *)(param_1 + _DAT_11272080c) == 1) {
    func_0x000109025108();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (*(long *)(param_1 + _DAT_11272080c) == 0) {
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db1e38,0);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10525cc8c; end: 10525cd0b; -[SCSpectaclesSettingsViewController leftButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525cc8c(long param_1)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e72e8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_leftButtonPressed_112601348);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112720820);
  func_0x00010bf529e0(*(undefined8 *)(param_1 + _DAT_112720870));
  func_0x00010be1e9e0(param_1);
  func_0x00010c0b29a0(uVar1);
  return;
}



/* Entry: 10525cd0c; end: 10525cd47; -[SCSpectaclesSettingsViewController spectaclesOnboardingScopeWantsDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525cd0c(long param_1)

{
  param_1 = param_1 + _DAT_112720848;
  _objc_loadWeakRetained(param_1);
  func_0x00010c12e1c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10525cd48; end: 10525cec3; -[SCSpectaclesSettingsViewController _showAlertWithAccessibilityIdentifier:title:dialogText:] */

void FUN_10525cd48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar2 = PTR_PTR_1126aed70;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  uVar5 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar4);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0();
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar5,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0)
  ;
  return;
}



/* Entry: 10525cec4; end: 10525ced3;  */

void FUN_10525cec4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 10525ced4; end: 10525cedf; -[SCSpectaclesSettingsViewController defaultProjectNameV2] */

void FUN_10525ced4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c248470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_spectacles_11266fb40);
  return;
}



/* Entry: 10525cee0; end: 10525cee7; -[SCSpectaclesSettingsViewController defaultSubProjectName] */

undefined8 FUN_10525cee0(void)

{
  return 0;
}



/* Entry: 10525cee8; end: 10525cf03; -[SCSpectaclesSettingsViewController pairingFullscreenMediaViewDidTapBack:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525cee8(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + _DAT_112720874) != param_3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c08e4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_leftButtonPressed_112601348);
  return;
}



/* Entry: 10525cf04; end: 10525cf33; -[SCSpectaclesSettingsViewController pairingFullscreenMediaViewDidTapPrimaryButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525cf04(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + _DAT_112720874) != param_3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be7d230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__presentPairingPageWithSource_de_11257ce28,3,
             *(undefined8 *)(param_1 + _DAT_11272080c),0);
  return;
}



/* Entry: 10525cf34; end: 10525cfa7; -[SCSpectaclesSettingsViewController pairingFullscreenMediaViewDidTapSecondaryButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525cf34(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + _DAT_112720874) == param_3) {
    if (*(long *)(param_1 + _DAT_11272080c) == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dcd7d8;
    }
    else {
      if (*(long *)(param_1 + _DAT_11272080c) != 1) goto LAB_10525cf98;
      ppuVar1 = &PTR____CFConstantStringClassReference_110dcd7f8;
    }
    func_0x00010beba3c0(param_1,param_2,ppuVar1);
  }
LAB_10525cf98:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10525cfa8; end: 10525d1c3; -[SCSpectaclesSettingsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525cfa8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272085c);
  _objc_destroyWeak(param_1 + _DAT_112720858);
  _objc_destroyWeak(param_1 + _DAT_112720854);
  _objc_destroyWeak(param_1 + _DAT_112720850);
  _objc_destroyWeak(param_1 + _DAT_11272084c);
  _objc_destroyWeak(param_1 + _DAT_112720848);
  _objc_destroyWeak(param_1 + _DAT_112720844);
  _objc_destroyWeak(param_1 + _DAT_112720840);
  _objc_destroyWeak(param_1 + _DAT_112720800);
  _objc_storeStrong(param_1 + _DAT_11272082c,0);
  _objc_storeStrong(param_1 + _DAT_112720838,0);
  _objc_storeStrong(param_1 + _DAT_112720834,0);
  _objc_storeStrong(param_1 + _DAT_112720830,0);
  _objc_storeStrong(param_1 + _DAT_11272086c,0);
  _objc_storeStrong(param_1 + _DAT_112720868,0);
  _objc_storeStrong(param_1 + _DAT_112720864,0);
  _objc_storeStrong(param_1 + _DAT_112720860,0);
  _objc_storeStrong(param_1 + _DAT_11272083c,0);
  _objc_storeStrong(param_1 + _DAT_112720824,0);
  _objc_storeStrong(param_1 + _DAT_112720828,0);
  _objc_storeStrong(param_1 + _DAT_112720820,0);
  _objc_storeStrong(param_1 + _DAT_11272088c,0);
  _objc_storeStrong(param_1 + _DAT_11272081c,0);
  _objc_storeStrong(param_1 + _DAT_112720888,0);
  _objc_storeStrong(param_1 + _DAT_112720870,0);
  _objc_storeStrong(param_1 + _DAT_112720810,0);
  _objc_storeStrong(param_1 + _DAT_112720808,0);
  _objc_storeStrong(param_1 + _DAT_112720818,0);
  _objc_storeStrong(param_1 + _DAT_112720814,0);
  _objc_storeStrong(param_1 + _DAT_112720804,0);
  _objc_storeStrong(param_1 + _DAT_112720874,0);
  _objc_storeStrong(param_1 + _DAT_112720878,0);
  _objc_storeStrong(param_1 + _DAT_11272087c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127207fc,0);
  return;
}



/* Entry: 10525d1c4; end: 10525d22f; -[SCAppShortcutDeepLinkPlugin initWithNavigationDelegate:] */

undefined1 * FUN_10525d1c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e72f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10525d230; end: 10525d243; -[SCAppShortcutDeepLinkPlugin identifier] */

void FUN_10525d230(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 10525d244; end: 10525d24b; -[SCAppShortcutDeepLinkPlugin priority] */

undefined8 FUN_10525d244(void)

{
  return 1000;
}



/* Entry: 10525d24c; end: 10525d25f; -[SCAppShortcutDeepLinkPlugin canProvideProcessorForFeature:] */

void FUN_10525d24c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_isEqualToString__1125fa240,
             &PTR____CFConstantStringClassReference_110f83f98);
  return;
}



/* Entry: 10525d260; end: 10525d2ab; -[SCAppShortcutDeepLinkPlugin isValidDeepLink:] */

undefined8 FUN_10525d260(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bfa1820(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2d2a0(param_1,param_2,param_3);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10525d2ac; end: 10525d2ff; -[SCAppShortcutDeepLinkPlugin makeDeepLinkProcessor] */

void FUN_10525d2ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b6a60;
  _objc_alloc(PTR_PTR_1126b6a60);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c02e580(puVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10525d300; end: 10525d307; -[SCAppShortcutDeepLinkPlugin .cxx_destruct] */

void FUN_10525d300(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10525d308; end: 10525d3df; -[SCAppShortcutDeepLinkPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525d308(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b6a68;
  _objc_alloc(PTR_PTR_1126b6a68);
  lVar2 = param_1 + _DAT_112720894;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02e580(puVar1,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_112720898;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10525d3e0; end: 10525d423; -[SCAppShortcutDeepLinkPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525d3e0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112720894);
  _objc_destroyWeak(param_1 + _DAT_11272089c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112720898);
  return;
}



/* Entry: 10525d424; end: 10525d48f; -[SCAppShortcutDeepLinkProcessor initWithNavigationDelegate:] */

undefined1 * FUN_10525d424(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e72f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10525d490; end: 10525d61b; -[SCAppShortcutDeepLinkProcessor processDeepLinkURL:additionalInfo:delegate:] */

void FUN_10525d490(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf2d020();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a5fe0(param_5);
    func_0x00010bf94720(param_5);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c0a5fe0(param_5);
    _objc_initWeak(auStack_48,param_5);
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c10d100(param_1);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10525d61c; end: 10525d66b;  */

void FUN_10525d61c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0a6880();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf94720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10525d66c; end: 10525d673; -[SCAppShortcutDeepLinkProcessor shouldForceNavigation] */

undefined8 FUN_10525d66c(void)

{
  return 1;
}



/* Entry: 10525d674; end: 10525d677; -[SCAppShortcutDeepLinkProcessor processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_10525d674(void)

{
  return;
}



/* Entry: 10525d678; end: 10525d67f; -[SCAppShortcutDeepLinkProcessor .cxx_destruct] */

void FUN_10525d678(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10525d680; end: 10525d74b; -[SCUserFileManagementEntryPoint begin] */

void FUN_10525d680(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = param_1;
  FUN_10525d74c();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c293780();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c07c8c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126af970;
  if ((uVar4 & 1) != 0) {
    return;
  }
  FUN_10525d74c(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3a0c0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10525d74c; end: 10525d76f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525d74c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_1127208a4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10525d770; end: 10525d77f; -[SCUserFileManagementEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525d770(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127208a4);
  return;
}



/* Entry: 10525d780; end: 10525d783; -[SIGIconsNoOpCancelable cancel] */

void FUN_10525d780(void)

{
  return;
}



/* Entry: 10525d784; end: 10525d7ef; -[SIGIconsComposerImageLoader supportedURLSchemes] */

void FUN_10525d784(undefined8 param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined **ppuStack_20;
  long lStack_18;
  
  pppuVar1 = &ppuStack_20;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110dcd9f8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    _objc_retain(pppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10525d7f0; end: 10525d817; -[SIGIconsComposerImageLoader requestPayloadWithURL:error:] */

void FUN_10525d7f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10525d818; end: 10525dc17; -[SIGIconsComposerImageLoader loadImageWithRequestPayload:parameters:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525d818(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5,
                  ulong param_6,long param_7)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_7);
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
  uVar2 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar1);
  uVar3 = param_4;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  uVar2 = uVar3;
  func_0x000108543f0c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (uVar3 == 0) {
    _objc_opt_class(param_2);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
LAB_10525da74:
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
LAB_10525db30:
    _objc_release(puVar4);
    _objc_release(param_2);
    puVar4 = puVar1;
    if (puVar1 != (undefined *)0x0) {
      (**(code **)(param_7 + 0x10))(param_7,0,puVar1);
      goto LAB_10525db94;
    }
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    dVar8 = 1.0;
    if (0.0 < param_1) {
      puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e120();
      _objc_release(puVar4);
      dVar8 = param_1;
    }
    _objc_release(puVar1);
    if (((long)param_5 < 1) || ((long)param_6 < 1)) {
      if (0 < (long)param_5) {
        dVar7 = (double)param_5;
        goto LAB_10525d9d0;
      }
      if (0 < (long)param_6) {
        dVar7 = (double)param_6;
        goto LAB_10525d9d0;
      }
      dVar7 = 24.0;
    }
    else {
      if (param_6 <= param_5) {
        param_5 = param_6;
      }
      dVar7 = (double)param_5;
LAB_10525d9d0:
      dVar7 = dVar7 / dVar8;
    }
    puVar4 = PTR_PTR_1126b0c40;
    func_0x00010bfe5b20();
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (puVar4 == (undefined *)0x0) {
      _objc_opt_class(param_2);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      goto LAB_10525db30;
    }
    puVar4 = PTR_PTR_1126b0c40;
    func_0x00010bfe8d40(dVar7,dVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (puVar4 == (undefined *)0x0) {
      _objc_opt_class(param_2);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10525da74;
    }
  }
  puVar1 = PTR_PTR_1126b27a8;
  func_0x00010bfe9800(PTR_PTR_1126b27a8);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_7 + 0x10))(param_7,puVar1,0);
  _objc_release(puVar1);
LAB_10525db94:
  _objc_release(puVar4);
  puVar1 = PTR_PTR_1126b6a70;
  _objc_alloc_init(PTR_PTR_1126b6a70);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_7);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_4 + (long)_DAT_1127208a8);
  return;
}



/* Entry: 10525dc18; end: 10525dc27; -[SIGIconsComposerImageLoaderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525dc18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127208a8);
  return;
}



/* Entry: 10525dc28; end: 10525de13; -[SCAppDelegateDeepLinkHandler application:openURL:sourceApplication:annotation:] */

undefined8
FUN_10525dc28(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined *param_6)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_1;
  func_0x00010bfd03c0(param_1,param_2,param_4);
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf07b60();
    _objc_release(puVar2);
    puVar2 = PTR____NSDictionary0__struct_11034ab58;
    if (param_6 != (undefined *)0x0) {
      puVar2 = param_6;
    }
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf72020(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar3 != (undefined *)0x0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4,param_2,puVar2,&PTR____CFConstantStringClassReference_110f83d78);
    _objc_release(puVar2);
    func_0x00010be2d500(param_1,param_2,param_4,param_5,puVar4,puVar3 != (undefined *)0x0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126aec70;
    func_0x00010c22ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf777e0();
    _objc_release(puVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar2 = PTR_PTR_1126aec70;
      func_0x00010c22ba80(PTR_PTR_1126aec70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd1aa0();
      _objc_release(puVar2);
    }
    puVar2 = PTR_PTR_1126b6a80;
    _objc_alloc(PTR_PTR_1126b6a80);
    func_0x00010c059ec0();
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0e9bc0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840();
    _objc_release(uVar5);
    _objc_release(puVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return 1;
}



/* Entry: 10525de14; end: 10525de1b; -[SCAppDelegateDeepLinkHandler handleAppliveryURL:] */

undefined8 FUN_10525de14(void)

{
  return 0;
}



/* Entry: 10525de1c; end: 10525dfdf; -[SCAppDelegateDeepLinkHandler _handleOpenURL:sourceApplication:additionalInfo:fromExternal:] */

void FUN_10525de1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_5;
  _objc_retain();
  func_0x00010796d34c();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar4 = PTR_PTR_1126b6300;
    func_0x00010bf9ff00(PTR_PTR_1126b6300);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x3032000000;
    pcStack_58 = FUN_10525dfe0;
    uStack_50 = 0x10525dff0;
    uStack_48 = 0;
    func_0x00010bfd1c80(lVar2);
    puVar4 = (undefined *)puStack_68[5];
    if (puVar4 == (undefined *)0x0) {
      puVar4 = PTR_PTR_1126b6300;
      func_0x00010bf9ff00();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = puStack_68[5];
      puStack_68[5] = puVar4;
      _objc_release(uVar3);
      puVar4 = (undefined *)puStack_68[5];
    }
    _objc_retain(puVar4);
    __Block_object_dispose(&uStack_70,8);
    _objc_release(uStack_48);
  }
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10525dfe0; end: 10525dff7;  */

void FUN_10525dfe0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10525dff8; end: 10525e02f;  */

void FUN_10525dff8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10525e030; end: 10525e03b; -[SCAppDelegateDeepLinkHandler .cxx_destruct] */

void FUN_10525e030(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10525e03c; end: 10525e03f; -[SCAssertionLogger didAssert:] */

void FUN_10525e03c(void)

{
  return;
}



/* Entry: 10525e040; end: 10525e043; -[SCAssertionLogger didSendNonfatal:] */

void FUN_10525e040(void)

{
  return;
}



/* Entry: 10525e044; end: 10525e04b; -[SCAppDelegateProperties backgroundPrefetchHandler] */

undefined8 FUN_10525e044(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10525e04c; end: 10525e053; -[SCAppDelegateProperties notificationAPNSTokenEvents] */

undefined8 FUN_10525e04c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10525e054; end: 10525e05b; -[SCAppDelegateProperties notificationProcessingStepEventEmitter] */

undefined8 FUN_10525e054(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10525e05c; end: 10525e063; -[SCAppDelegateProperties inAppNotificationInteractionEvents] */

undefined8 FUN_10525e05c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10525e064; end: 10525e06b; -[SCAppDelegateProperties systemNotificationInteractionEventHandlingPluginRegistry] */

undefined8 FUN_10525e064(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10525e06c; end: 10525e073; -[SCAppDelegateProperties continueUserActivityEventHandlingPluginRegistry] */

undefined8 FUN_10525e06c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10525e074; end: 10525e07b; -[SCAppDelegateProperties applicationOpenFromQuickAction] */

undefined8 FUN_10525e074(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10525e07c; end: 10525e117; -[SCAppDelegateProperties .cxx_destruct] */

void FUN_10525e07c(long param_1)

{
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



/* Entry: 10525e118; end: 10525e27f; -[SCMainAppDelegate applicationWillResignActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525e118(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ae4e8;
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae520;
  func_0x00010c22b6a0(PTR_PTR_1126ae520);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06720();
  _objc_release(puVar1);
  func_0x00010bcb6428();
  puVar1 = PTR_PTR_1126b6b08;
  func_0x00010c22b6a0(PTR_PTR_1126b6b08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e20();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b6b10;
  func_0x00010c22ba80(PTR_PTR_1126b6b10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfb6f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bf07c60(puVar2);
  func_0x00010bf07c80(*(undefined8 *)(param_1 + _DAT_11272090c),param_2,param_3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127208e0);
  func_0x00010c2a6a20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
  _objc_release(param_3);
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10525e280; end: 10525e55b; -[SCMainAppDelegate applicationDidEnterBackground:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525e280(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ae4e8;
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae520;
  func_0x00010c22b6a0(PTR_PTR_1126ae520);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04f80();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126af680;
  func_0x00010c22ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0bb000();
  _objc_release();
  _mach_absolute_time();
  if (((ulong)puVar2 & 1) == 0) {
    uRam0000000113839534 = 1;
  }
  uRam00000001138394e8 = 1;
  puRam0000000113839498 = puVar1;
  func_0x00010aee6cbc();
  func_0x00010bf04f80(*(undefined8 *)(param_1 + _DAT_112720904));
  puVar1 = PTR_PTR_1126b6b18;
  func_0x00010c22b6a0(PTR_PTR_1126b6b18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3b100();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b6b08;
  func_0x00010c22b6a0(PTR_PTR_1126b6b08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e20();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126aec70;
  func_0x00010c22ba80(PTR_PTR_1126aec70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18d820();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104980();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126aec70;
  func_0x00010c22ba80(PTR_PTR_1126aec70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf75dc0();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b6b20;
  func_0x00010c22ba80(PTR_PTR_1126b6b20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27ab40();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b6b10;
  func_0x00010c22ba80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 != (undefined *)0x0) {
    puVar1 = PTR_PTR_1126b6b10;
    func_0x00010c22ba80(PTR_PTR_1126b6b10);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bfb6f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010bf077e0(puVar2);
    _objc_release(puVar2);
  }
  func_0x00010bf07800(*(undefined8 *)(param_1 + _DAT_11272090c),param_2,param_3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127208e0);
  func_0x00010bf75de0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
  _objc_release(param_3);
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b6a90;
  func_0x00010c22c420(PTR_PTR_1126b6a90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c256ca0();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10525e55c; end: 10525e6df; -[SCMainAppDelegate applicationWillEnterForeground:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525e55c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b6a90;
  _objc_retain(param_3);
  func_0x00010c22c420(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c251380();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar1);
  func_0x00010bf06700(*(undefined8 *)(param_1 + _DAT_112720904));
  puVar1 = PTR_PTR_1126ae520;
  func_0x00010c22b6a0(PTR_PTR_1126ae520);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06700();
  _objc_release(puVar1);
  func_0x00010aee6ddc();
  puVar1 = PTR_PTR_1126af680;
  func_0x00010c22ba80(PTR_PTR_1126af680);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c138b60();
  _objc_release(puVar1);
  func_0x00010bf07c40(*(undefined8 *)(param_1 + _DAT_11272090c),param_2,param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127208e0);
  func_0x00010c2a6440(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
  _objc_release(param_3);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10525e6e0; end: 10525e86f; -[SCMainAppDelegate applicationDidReceiveMemoryWarning:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525e6e0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c086b80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1417c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar4 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  while (PTR__OBJC_CLASS___UINavigationController_1126af6f0 = puVar4, uVar1 != 0) {
    uVar3 = uVar2;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar1 = uVar3;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar2 = uVar3;
    puVar4 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  }
  _objc_opt_class(puVar4);
  uVar1 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar4);
  uVar3 = uVar2;
  if ((uVar1 & 1) != 0) {
    func_0x00010c2a0180(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  uVar2 = uVar3;
  _objc_opt_class(uVar3);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf07840(*(undefined8 *)(param_1 + _DAT_11272090c));
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127208e0);
  func_0x00010bf79220(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b6b30;
  _objc_alloc(PTR_PTR_1126b6b30);
  func_0x00010c054300();
  func_0x00010c0d9840(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10525e870; end: 10525e96f; -[SCMainAppDelegate applicationWillTerminate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525e870(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ae4e8;
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b6b08;
  func_0x00010c22b6a0(PTR_PTR_1126b6b08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e20();
  _objc_release(puVar1);
  func_0x00010bf07cc0(*(undefined8 *)(param_1 + _DAT_11272090c),param_2,param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127208e0);
  func_0x00010c2a7000(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
  _objc_release(param_3);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10525e970; end: 10525ea6f; -[SCMainAppDelegate sceneDidDisconnect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525e970(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ae4e8;
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b6b08;
  func_0x00010c22b6a0(PTR_PTR_1126b6b08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e20();
  _objc_release(puVar1);
  func_0x00010c14fa20(*(undefined8 *)(param_1 + _DAT_11272090c),param_2,param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127208e0);
  func_0x00010c14fa40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
  _objc_release(param_3);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10525ea70; end: 10525eae7; -[SCMainAppDelegate application:didFailToRegisterForRemoteNotificationsWithError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525ea70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010bf763e0(PTR_PTR_1126af6d8,param_2,param_4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127208ec);
  func_0x00010c0dbba0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b6b38;
  func_0x00010bf9ffa0(PTR_PTR_1126b6b38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10525eae8; end: 10525eb8b; -[SCMainAppDelegate application:didRegisterForRemoteNotificationsWithDeviceToken:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525eae8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  func_0x00010c1e5f80(PTR_PTR_1126af568,param_2,param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127208ec);
    func_0x00010c0dbba0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b6b38;
    func_0x00010c261b00(PTR_PTR_1126b6b38,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10525eb8c; end: 10525ec13; -[SCMainAppDelegate handleInAppNotificationPressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525eb8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127208ec);
  _objc_retain(param_3);
  func_0x00010bfeb0c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b6b40;
  func_0x00010bfeb100(PTR_PTR_1126b6b40,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10525ec14; end: 10525eca3; -[SCMainAppDelegate handleInAppNotificationDismissed:reason:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525ec14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127208ec);
  _objc_retain(param_3);
  func_0x00010bfeb0c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b6b40;
  func_0x00010bfeb080(PTR_PTR_1126b6b40,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10525eca4; end: 10525ed33; -[SCMainAppDelegate handleInAppNotificationDisplayInterrupted:reason:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525eca4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127208ec);
  _objc_retain(param_3);
  func_0x00010bfeb0c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b6b40;
  func_0x00010bfeb0a0(PTR_PTR_1126b6b40,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10525ed34; end: 10525edc3; -[SCMainAppDelegate application:didReceiveRemoteNotification:fetchCompletionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525ed34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b6ac8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf677a0(puVar1);
  func_0x00010bf07600(*(undefined8 *)(param_1 + _DAT_1127208f4),param_2,param_3,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10525edc4; end: 10525edd3; -[SCMainAppDelegate userNotificationCenter:didReceiveNotificationResponse:withCompletionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525edc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c292f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127208f4),
             PTR_s_userNotificationCenter_didReceiv_112682608);
  return;
}



/* Entry: 10525edd4; end: 10525ede3; -[SCMainAppDelegate userNotificationCenter:willPresentNotification:withCompletionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525edd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c292fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127208f4),
             PTR_s_userNotificationCenter_willPrese_112682618);
  return;
}



/* Entry: 10525ede4; end: 10525edf3; -[SCMainAppDelegate userNotificationCenter:openSettingsForNotification:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525ede4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c292fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127208f4),
             PTR_s_userNotificationCenter_openSetti_112682610);
  return;
}



/* Entry: 10525edf4; end: 10525ee8b; -[SCMainAppDelegate application:performFetchWithCompletionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525edf4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b6ac8;
  _objc_retain(param_4);
  func_0x00010bf677a0(puVar1);
  puVar1 = PTR_PTR_1126b6b48;
  func_0x00010c26a960(PTR_PTR_1126b6b48,param_2,0,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127208ec);
  func_0x00010bf14340(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10525ee8c; end: 10525ef13; -[SCMainAppDelegate application:handleEventsForBackgroundURLSession:completionHandler:] */

void FUN_10525ee8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b6ac8;
  _objc_retain(param_4);
  func_0x00010bf677a0(puVar1);
  uVar2 = param_4;
  func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110e6e0d8);
  _objc_release(param_4);
  if ((int)uVar2 != 0) {
    func_0x00010c16e8c0(PTR_PTR_1126b6b50,param_2,param_5);
    func_0x00010bf96640(PTR_PTR_1126b6b50);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10525ef14; end: 10525efef; -[SCMainAppDelegate application:openURL:options:] */

undefined8
FUN_10525ef14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)PTR__UIApplicationOpenURLOptionsSourceApplicationKey_110345a98;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_5;
  func_0x00010c0e00e0(param_5,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c0e00e0(param_5,param_2,
                      *(undefined8 *)PTR__UIApplicationOpenURLOptionsAnnotationKey_110345a90);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010bdcd740(param_1,param_2,param_3,param_4,uVar1,uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10525eff0; end: 10525f133; -[SCMainAppDelegate _application:openURL:sourceApplication:annotation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_10525eff0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  
  puVar4 = PTR_PTR_1126b6b58;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf05260();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dcdd18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  uVar2 = param_4;
  func_0x00010c1504a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfda7c0();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar5 = (undefined **)(param_1 + _DAT_112720910);
  }
  else {
    ppuVar5 = &PTR_PTR_1126b6b60;
  }
  puVar4 = *ppuVar5;
  func_0x00010bf07640(puVar4,param_2,param_3,param_4,param_5,param_6);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar4;
}



/* Entry: 10525f134; end: 10525f137; -[SCMainAppDelegate application:openURL:sourceApplication:annotation:] */

void FUN_10525f134(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcd750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__application_openURL_sourceAppli_112550f70);
  return;
}



/* Entry: 10525f138; end: 10525f24f; -[SCMainAppDelegate application:continueUserActivity:restorationHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_10525f138(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127208ec);
  func_0x00010bf4fc60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1149c0();
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(puStack_58 + 3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10525f250; end: 10525f267;  */

void FUN_10525f250(long param_1,long param_2)

{
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2 == 0;
  return;
}



/* Entry: 10525f268; end: 10525f2d7; -[SCMainAppDelegate _canHandleShortcutItemType:] */

undefined8 FUN_10525f268(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f5b9f8);
  if (((uVar1 & 1) == 0) &&
     (uVar1 = param_3,
     func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f5ba18),
     (uVar1 & 1) == 0)) {
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f5ba38);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10525f2d8; end: 10525f3bb; -[SCMainAppDelegate application:performActionForShortcutItem:completionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525f2d8(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126aec70;
  func_0x00010c22ba80(PTR_PTR_1126aec70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd1ae0();
  _objc_release(puVar1);
  uVar2 = param_4;
  func_0x00010c27dd80(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bdd9b00();
  if ((uVar3 & 1) != 0) {
    uVar4 = *(undefined8 *)(param_1 + (long)_DAT_1127208ec);
    func_0x00010bf07ac0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840();
    _objc_release(uVar4);
  }
  if (param_5 != 0) {
    (**(code **)(param_5 + 0x10))(param_5,uVar3);
  }
  _objc_release(uVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10525f3bc; end: 10525f433; -[SCMainAppDelegate authenticatedWithActiveUserSession:isNewRegistration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525f3bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127208ec);
  _objc_retain(param_3);
  func_0x00010bfeb060(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfeb0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21f2c0();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10525f434; end: 10525f48b; -[SCMainAppDelegate logout:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525f434(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127208ec);
  func_0x00010bfeb060(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfeb0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21f2c0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10525f48c; end: 10525f48f; -[SCMainAppDelegate _userTriggeredEmergencyMode] */

void FUN_10525f48c(void)

{
  return;
}



/* Entry: 10525f490; end: 10525f57b; -[SCMainAppDelegate .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525f490(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127208f0,0);
  _objc_storeStrong(param_1 + _DAT_112720914,0);
  _objc_storeStrong(param_1 + _DAT_112720910,0);
  _objc_storeStrong(param_1 + _DAT_1127208f4,0);
  _objc_storeStrong(param_1 + _DAT_1127208ec,0);
  _objc_storeStrong(param_1 + _DAT_1127208e8,0);
  _objc_storeStrong(param_1 + _DAT_112720904,0);
  _objc_destroyWeak(param_1 + _DAT_1127208f8);
  _objc_storeStrong(param_1 + _DAT_1127208e0,0);
  _objc_storeStrong(param_1 + _DAT_11272090c,0);
  _objc_storeStrong(param_1 + _DAT_112720918,0);
  _objc_storeStrong(param_1 + _DAT_1127208dc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127208e4,0);
  return;
}



/* Entry: 10525f57c; end: 10525f57f;  */

void FUN_10525f57c(void)

{
  return;
}



/* Entry: 10525f580; end: 10525f6c3;  */

void FUN_10525f580(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  lVar2 = param_1;
  func_0x00010c0ec860();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2475e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    lVar2 = param_1;
    func_0x00010c0ec860(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c2475e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,lVar3,
                        *(undefined8 *)
                         PTR__UIApplicationOpenURLOptionsSourceApplicationKey_110345a98);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_1;
  func_0x00010c0ec860();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf04360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    lVar2 = param_1;
    func_0x00010c0ec860(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf04360();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,lVar3,
                        *(undefined8 *)PTR__UIApplicationOpenURLOptionsAnnotationKey_110345a90);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10525f6c4; end: 10525f6c7;  */

void FUN_10525f6c4(void)

{
  return;
}



/* Entry: 10525f6c8; end: 10525f71f; -[SCMainAppSceneDelegate sceneDidDisconnect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525f6c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11272091c;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010c14fa20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10525f720; end: 10525f77b; -[SCMainAppSceneDelegate sceneWillResignActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525f720(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  param_1 = param_1 + _DAT_11272091c;
  _objc_loadWeakRetained(param_1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf07c80(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10525f77c; end: 10525f7d7; -[SCMainAppSceneDelegate sceneDidEnterBackground:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525f77c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  param_1 = param_1 + _DAT_11272091c;
  _objc_loadWeakRetained(param_1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf07800(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10525f7d8; end: 10525f963; -[SCMainAppSceneDelegate scene:openURLContexts:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525f7d8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
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
  _objc_retain(param_4);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = param_4;
  func_0x00010bf52a60(param_4,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar1 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar5 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(param_4);
        }
        uVar6 = *(undefined8 *)(lStack_128 + lVar5 * 8);
        uVar2 = uVar6;
        FUN_10525f580(uVar6);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_1 + _DAT_11272091c;
        _objc_loadWeakRetained(lVar3);
        puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc2b80(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf07620(lVar3,param_2,puVar4,uVar6,uVar2);
        _objc_release(uVar6);
        _objc_release(puVar4);
        _objc_release(lVar3);
        _objc_release(uVar2);
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = param_4;
      func_0x00010bf52a60(param_4,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 10525f964; end: 10525f967; -[SCMainAppSceneDelegate scene:willContinueUserActivityWithType:] */

void FUN_10525f964(void)

{
  return;
}



/* Entry: 10525f968; end: 10525f9ef; -[SCMainAppSceneDelegate scene:continueUserActivity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525f968(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272091c;
  _objc_retain(param_4);
  param_1 = param_1 + lVar2;
  _objc_loadWeakRetained(param_1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf075c0(param_1,param_2,puVar1,param_4,&PTR___NSConcreteGlobalBlock_110871a48);
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10525f9f0; end: 10525f9f3;  */

void FUN_10525f9f0(void)

{
  return;
}



/* Entry: 10525f9f4; end: 10525f9f7; -[SCMainAppSceneDelegate scene:didFailToContinueUserActivityWithType:error:] */

void FUN_10525f9f4(void)

{
  return;
}



/* Entry: 10525f9f8; end: 10525fa8f; -[SCMainAppSceneDelegate windowScene:performActionForShortcutItem:completionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525f9f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272091c;
  _objc_retain(param_5);
  _objc_retain(param_4);
  param_1 = param_1 + lVar2;
  _objc_loadWeakRetained(param_1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf07660(param_1,param_2,puVar1,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10525fa90; end: 10525facb; -[SCMainAppSceneDelegate .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525fa90(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112720920,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272091c);
  return;
}


