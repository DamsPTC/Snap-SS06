/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105a955b8; end: 105a95603; -[SCSpectaclesOTAUpdatePageEntryPoint otaUpdatePageViewControllerDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a955b8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_11272e814;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c249180();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a95604; end: 105a95647; -[SCSpectaclesOTAUpdatePageEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a95604(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272e810);
  _objc_destroyWeak(param_1 + _DAT_11272e80c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272e814);
  return;
}



/* Entry: 105a95648; end: 105a9576b; -[SCSpectaclesOTAUpdatePageController initWithDevice:spectaclesAppStatusProvider:firmwareManager:otaManager:] */

undefined1 *
FUN_105a95648(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126eba30;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    func_0x00010bef9980(*(undefined8 *)((long)puVar1 + 0x10));
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a9576c; end: 105a957ab; -[SCSpectaclesOTAUpdatePageController _canDeviceUpdateSettings] */

undefined8 FUN_105a9576c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf48d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf48920();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105a957ac; end: 105a957e3; -[SCSpectaclesOTAUpdatePageController _shouldShowAutoUpdateSettings] */

bool FUN_105a957ac(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf11e40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



/* Entry: 105a957e4; end: 105a9592b; -[SCSpectaclesOTAUpdatePageController _updateAutomaticallySectionViewModel] */

void FUN_105a957e4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  uVar1 = param_1;
  func_0x00010beb5ba0();
  if ((uVar1 & 1) == 0) {
    puVar4 = PTR_PTR_1126b69e0;
    _objc_alloc(PTR_PTR_1126b69e0);
    func_0x00010c0535a0();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b69d8;
    _objc_alloc(PTR_PTR_1126b69d8);
    puVar4 = puVar3;
    FUN_105a98990();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    if (*(char *)(param_1 + 0x40) == '\x01') {
      func_0x000105a98af8();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000105a98b10();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bdd9a20(param_1);
    func_0x00010c053a00(puVar3,param_2,puVar4,puVar5,0,0,3,param_1,0);
    _objc_release(puVar5);
    _objc_release(puVar4);
    func_0x00010befa120(puVar2,param_2,puVar3);
    puVar4 = PTR_PTR_1126b69e0;
    _objc_alloc(PTR_PTR_1126b69e0);
    func_0x00010c0535a0();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105a9592c; end: 105a95a1b; -[SCSpectaclesOTAUpdatePageController _updateAvailableSectionViewModel] */

void FUN_105a9592c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  func_0x00010bed37c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b69e0;
    _objc_alloc(PTR_PTR_1126b69e0);
    lVar3 = param_1;
    func_0x00010bed37c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed37a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf51e00(puVar2);
    func_0x00010c0535a0(puVar5,param_2,lVar3,param_1,puVar4);
    _objc_release(puVar4);
    _objc_release(param_1);
    _objc_release(lVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105a95a1c; end: 105a95ad7; -[SCSpectaclesOTAUpdatePageController _updateAvailableSectionTitle] */

void FUN_105a95a1c(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x38);
  if (uVar1 == 0) goto LAB_105a95acc;
  func_0x00010c252d60();
  if (uVar1 < 0xf) {
    if ((1L << (uVar1 & 0x3f) & 0x6400U) == 0) {
      if ((1L << (uVar1 & 0x3f) & 0xc0U) != 0) {
        func_0x00010be3cec0(param_1);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_105a95acc;
      }
      if (uVar1 == 5) {
        func_0x00010bee5c80(param_1);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_105a95acc;
      }
      goto LAB_105a95a94;
    }
  }
  else {
LAB_105a95a94:
    if (uVar1 == 4) {
      func_0x00010be06080(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105a95acc;
    }
    if (uVar1 != 2) goto LAB_105a95acc;
  }
  func_0x000105a989c0();
  _objc_retainAutoreleasedReturnValue();
LAB_105a95acc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a95ad8; end: 105a95b5f; -[SCSpectaclesOTAUpdatePageController _updateAvailableSectionSubtitle] */

void FUN_105a95ad8(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x38);
  if (uVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010c252d60();
    lVar2 = 0;
    if (uVar1 < 0xf) {
      if ((1L << (uVar1 & 0x3f) & 0xf0U) == 0) {
        if ((1L << (uVar1 & 0x3f) & 0x6404U) != 0) {
          func_0x00010be18bc0(param_1);
          _objc_retainAutoreleasedReturnValue();
          lVar2 = param_1;
        }
      }
      else {
        lVar2 = *(long *)(param_1 + 0x50);
        _objc_retain(lVar2);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105a95b60; end: 105a95bef; -[SCSpectaclesOTAUpdatePageController _formattedAvailableVersion] */

void FUN_105a95b60(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c283a60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar2 = lVar1;
    func_0x000105a989d8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105a95bf0; end: 105a95e33; -[SCSpectaclesOTAUpdatePageController _newFooterViewModel] */

/* WARNING: Possible PIC construction at 0x000105a95e0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105a95d40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105a95e10) */
/* WARNING: Removing unreachable block (ram,0x000105a95d44) */

undefined * FUN_105a95bf0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x38);
  if (uVar1 == 0) {
    return (undefined *)0x0;
  }
  func_0x00010c252d60();
  puVar4 = PTR_PTR_1126c1e78;
  if ((long)uVar1 < 4) {
    if (uVar1 != 1) {
      if (uVar1 != 2) {
        if (uVar1 != 3) {
          return (undefined *)0x0;
        }
        uVar2 = *(undefined8 *)(param_1 + 8);
        func_0x00010bfd38e0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c06e7e0();
        _objc_release(uVar2);
        puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if ((int)uVar3 == 0) {
          func_0x000105a98a08();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x000109026068();
          _objc_retainAutoreleasedReturnValue();
        }
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010bf60ae0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        _objc_release(uVar2);
        puVar4 = PTR_PTR_1126c1e78;
        _objc_alloc(PTR_PTR_1126c1e78);
        goto code_r0x00010c04c500;
      }
      goto LAB_105a95cf4;
    }
  }
  else {
    if (0xe < uVar1) {
      return (undefined *)0x0;
    }
    if ((1L << (uVar1 & 0x3f) & 0x6400U) != 0) {
LAB_105a95cf4:
      _objc_alloc(PTR_PTR_1126c1e78);
      func_0x00010c0692a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf17500();
      _objc_retainAutoreleasedReturnValue();
      goto code_r0x00010c04c500;
    }
    if ((1L << (uVar1 & 0x3f) & 0x30U) != 0) {
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010bfd38e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c074be0();
      _objc_release(uVar2);
      if ((int)uVar3 == 0) {
        return (undefined *)0x0;
      }
      puVar4 = PTR_PTR_1126c1e78;
      _objc_alloc(PTR_PTR_1126c1e78);
      goto code_r0x00010c04c500;
    }
    if (uVar1 != 0xc) {
      return (undefined *)0x0;
    }
  }
  _objc_alloc(PTR_PTR_1126c1e78);
  func_0x000105a989f0();
  _objc_retainAutoreleasedReturnValue();
code_r0x00010c04c500:
                    /* WARNING: Could not recover jumptable at 0x00010c04c510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return puVar4;
}



/* Entry: 105a95e34; end: 105a95fbb; -[SCSpectaclesOTAUpdatePageController _downloadProgressText] */

void FUN_105a95e34(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c252d60();
  if (lVar1 == 4) {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 0;
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bfed8e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bc9a0();
    _objc_release(uVar2);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000105a98a20();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
    __Block_object_dispose(&uStack_50,8);
  }
  else {
    puVar5 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105a95fbc; end: 105a95fd3;  */

void FUN_105a95fbc(void)

{
  return;
}



/* Entry: 105a95fd4; end: 105a96157; -[SCSpectaclesOTAUpdatePageController _uploadProgressText] */

void FUN_105a95fd4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c252d60();
  if (lVar1 == 5) {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 0;
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bfed8e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bc9a0();
    _objc_release(uVar2);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000105a98a38();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
    __Block_object_dispose(&uStack_50,8);
  }
  else {
    puVar5 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105a96158; end: 105a9616b;  */

void FUN_105a96158(long param_1,undefined8 param_2)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 105a9616c; end: 105a9631f; -[SCSpectaclesOTAUpdatePageController _installProgressText] */

void FUN_105a9616c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c252d60();
  if (lVar1 != 6) {
    lVar1 = *(long *)(param_1 + 0x38);
    func_0x00010c252d60();
    if (lVar1 != 7) {
      puVar2 = (undefined *)0x0;
      goto LAB_105a962f0;
    }
  }
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puVar2 = *(undefined **)(param_1 + 0x38);
  func_0x00010bfed8e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bc9a0();
  _objc_release(puVar2);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puStack_48[3] == 0) {
    func_0x000105a989a8();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000105a98a50();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = puVar5;
  }
  __Block_object_dispose(&uStack_50,8);
LAB_105a962f0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105a96320; end: 105a96333;  */

void FUN_105a96320(long param_1,undefined8 param_2)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 105a96334; end: 105a9645f; -[SCSpectaclesOTAUpdatePageController _setupOTAStateObservableIfNeeded] */

void FUN_105a96334(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c252740(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e0ea0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105a96460; end: 105a964a7;  */

void FUN_105a96460(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedc4a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a964a8; end: 105a965fb; -[SCSpectaclesOTAUpdatePageController _setupOTAAutoUpdateSettingsObervableIfNeeded] */

void FUN_105a964a8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar1 = param_1;
  func_0x00010beb5ba0();
  if ((int)lVar1 != 0) {
    _objc_initWeak(auStack_58,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf11e40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf11e60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0e0ea0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    uVar6 = uVar5;
    func_0x00010c25ff60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  return;
}



/* Entry: 105a965fc; end: 105a96643;  */

void FUN_105a965fc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedc480();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a96644; end: 105a966bb; -[SCSpectaclesOTAUpdatePageController fetchViewModels] */

void FUN_105a96644(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x00010bdf9940(param_1);
  }
  func_0x00010c266260(*(undefined8 *)(param_1 + 0x20));
  func_0x00010beae6e0(param_1);
  lVar1 = param_1;
  func_0x00010beb5ba0();
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf11e40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c266240();
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010beae6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupOTAAutoUpdateSettingsOberv_112589350)
    ;
    return;
  }
  return;
}



/* Entry: 105a966bc; end: 105a96707; -[SCSpectaclesOTAUpdatePageController updateOTA] */

void FUN_105a966bc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010be18bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  *(long *)(param_1 + 0x50) = lVar2;
  _objc_release(uVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c288070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_updateOTA_11267fa40);
  return;
}



/* Entry: 105a96708; end: 105a96743; -[SCSpectaclesOTAUpdatePageController setOTAAutoUpdateEnabled:] */

void FUN_105a96708(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf11e40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a96744; end: 105a968a7; -[SCSpectaclesOTAUpdatePageController retrieveActionSheetCellViewModel] */

void FUN_105a96744(long param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf70e00();
  _objc_release();
  if (lVar4 == 1) {
    func_0x000109025108();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
  }
  else {
    lVar3 = *(long *)(param_1 + 8);
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf70e00();
    _objc_release();
    if (lVar4 == 0) {
      func_0x000105a98b40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
    }
    else {
      lVar4 = 0;
    }
  }
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000105a98b28();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar5,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  cVar1 = *(char *)(param_1 + 0x40);
  puVar6 = PTR_PTR_1126c1e80;
  _objc_alloc(PTR_PTR_1126c1e80);
  bVar2 = cVar1 != '\x01';
  puVar7 = puVar6;
  if (bVar2) {
    func_0x000105a98ab0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000105a98ac8();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bffa0c0(puVar6,param_2,puVar7,!bVar2,puVar5);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105a968a8; end: 105a968e7; -[SCSpectaclesOTAUpdatePageController cancelOTAUpdate] */

void FUN_105a968a8(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  _objc_opt_respondsToSelector(uVar1,PTR_s_cancelUpdate_1125a96a8);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf2f410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_cancelUpdate_1125a96a8);
    return;
  }
  return;
}



/* Entry: 105a968e8; end: 105a9692f; -[SCSpectaclesOTAUpdatePageController currentBatteryLevel] */

void FUN_105a968e8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0692a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf17500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105a96930; end: 105a96a0f; -[SCSpectaclesOTAUpdatePageController _delayAndUpdateViewModels] */

void FUN_105a96930(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010bddb000();
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x105a969e4;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  uVar1 = 0;
  func_0x0001008553e8(0,&puStack_50);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  _objc_release(uVar2);
  func_0x000100c749e0(0x3e4ccccd,"APPSTORE",*(undefined8 *)(param_1 + 0x58));
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105a96a10; end: 105a96a4b; -[SCSpectaclesOTAUpdatePageController _cancelViewModelUpdateBlock] */

void FUN_105a96a10(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    _dispatch_block_cancel();
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105a96a4c; end: 105a96b6f; -[SCSpectaclesOTAUpdatePageController _updateViewModels] */

void FUN_105a96a4c(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bed36e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 != 0) {
    func_0x00010befa120(puVar1,param_2,uVar2);
  }
  uVar3 = param_1;
  func_0x00010bed37e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 != 0) {
    func_0x00010befa120(puVar1,param_2,uVar3);
  }
  uVar4 = param_1;
  func_0x00010be62fe0();
  puVar5 = puVar1;
  func_0x00010c071b60(puVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  if (((int)puVar5 == 0) ||
     (uVar6 = uVar4, func_0x00010c071ae0(uVar4,param_2,*(undefined8 *)(param_1 + 0x30)),
     (uVar6 & 1) == 0)) {
    _objc_retain(puVar1);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar1;
    _objc_release(uVar7);
    _objc_retain(uVar4);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    *(ulong *)(param_1 + 0x30) = uVar4;
    _objc_release(uVar7);
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c249120();
    _objc_release(param_1);
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a96b70; end: 105a96b83; -[SCSpectaclesOTAUpdatePageController statusCoordinator:needsToUpdateStateForDevice:] */

void FUN_105a96b70(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != *(long *)(param_1 + 8)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdf9950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__delayAndUpdateViewModels_11255bff0);
  return;
}



/* Entry: 105a96b84; end: 105a96c2f; -[SCSpectaclesOTAUpdatePageController _updateOTAUpdateAppState:] */

void FUN_105a96b84(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c252d60();
  if (lVar1 != 10) {
    uVar2 = *(ulong *)(param_1 + 0x38);
    func_0x00010c071ae0(uVar2,param_2,param_3);
    if ((uVar2 & 1) != 0) goto LAB_105a96c1c;
  }
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar3);
  func_0x00010bdf9940(param_1);
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c252d60();
  if (lVar1 == 0xb) {
    param_1 = param_1 + 0x60;
    _objc_loadWeakRetained(param_1);
    func_0x00010c249140();
    _objc_release(param_1);
  }
  else {
    func_0x00010be2d0e0(param_1,param_2,param_3);
  }
LAB_105a96c1c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a96c30; end: 105a96cbf; -[SCSpectaclesOTAUpdatePageController _updateOTAAutoUpdateSettings:] */

void FUN_105a96c30(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((lVar1 != 0) && (lVar1 = param_3, func_0x00010bf98ba0(), (int)lVar1 != 0)) {
    lVar1 = param_1 + 0x60;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c249160();
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010bf926c0();
  *(char *)(param_1 + 0x40) = (char)lVar1;
  func_0x00010bdf9940(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a96cc0; end: 105a96e3b; -[SCSpectaclesOTAUpdatePageController _handleOTAUpdateErrorIfNeeded:] */

void FUN_105a96cc0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c252d60();
  if (lVar1 == 9) {
    param_1 = param_1 + 0x60;
    _objc_loadWeakRetained(param_1);
    func_0x00010c249160();
    _objc_release(param_1);
  }
  else if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010bfed8e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puStack_48 = &uStack_50;
      uStack_50 = 0;
      uStack_40 = 0x2020000000;
      uStack_38 = 0;
      lVar1 = param_3;
      func_0x00010bfed8e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0bc9a0();
      _objc_release(lVar1);
      if (puStack_48[3] != 0) {
        func_0x00010bdc3900(param_1);
        param_1 = param_1 + 0x60;
        _objc_loadWeakRetained(param_1);
        func_0x00010c249160();
        _objc_release(param_1);
      }
      __Block_object_dispose(&uStack_50,8);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105a96e3c; end: 105a96e53;  */

void FUN_105a96e3c(void)

{
  return;
}



/* Entry: 105a96e54; end: 105a96e73; -[SCSpectaclesOTAUpdatePageController _OTAUpdatePageErrorTypeFromOTAErrorType:] */

undefined8 FUN_105a96e54(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 0x12) {
    return *(undefined8 *)(&UNK_10ddca4b8 + param_3 * 8);
  }
  return 2;
}



/* Entry: 105a96e74; end: 105a96e8b; -[SCSpectaclesOTAUpdatePageController delegate] */

void FUN_105a96e74(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a96e8c; end: 105a96e97; -[SCSpectaclesOTAUpdatePageController setDelegate:] */

void FUN_105a96e8c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 105a96e98; end: 105a96f2f; -[SCSpectaclesOTAUpdatePageController .cxx_destruct] */

void FUN_105a96e98(long param_1)

{
  _objc_destroyWeak(param_1 + 0x60);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 105a96f30; end: 105a96f7f; -[SCSpectaclesOTAUpdatePageFooterView initWithFrame:] */

undefined1 * FUN_105a96f30(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126eba38;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb0340(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105a96f80; end: 105a97623; -[SCSpectaclesOTAUpdatePageFooterView _setupSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a96f80(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_11272e848;
  uVar6 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar1;
  _objc_release(uVar6);
  uVar7 = *(undefined8 *)(param_1 + lVar10);
  func_0x000105a98a68();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar7,param_2,uVar6,0);
  _objc_release(uVar6);
  func_0x00010c16e480(*(undefined8 *)(param_1 + lVar10),param_2,0x3a,0);
  func_0x00010c20eaa0(*(undefined8 *)(param_1 + lVar10),param_2,0);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar10),param_2,param_1,PTR_s__update_11252c320,0x40
                     );
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar10));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar10),param_2,1);
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_11272e84c;
  uVar6 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar1;
  _objc_release(uVar6);
  func_0x00010c16e480(*(undefined8 *)(param_1 + lVar9),param_2,0x6b,0);
  uVar6 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c216380(uVar6,param_2,0xbb,0);
  uVar7 = *(undefined8 *)(param_1 + lVar9);
  func_0x000105a98a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar7,param_2,uVar6,0);
  _objc_release(uVar6);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar9),param_2,param_1,PTR_s__cancel_112554250,0x40)
  ;
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar9));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar9),param_2,1);
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar11 = (long)_DAT_11272e850;
  uVar6 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar1;
  _objc_release(uVar6);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar11),param_2,1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7f);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar11),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar11),param_2,0x17);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar11),param_2,2);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar11));
  puVar1 = PTR_PTR_1126aeff0;
  _objc_alloc();
  func_0x00010bfffb60();
  lVar8 = (long)_DAT_11272e854;
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar1;
  _objc_release(uVar6);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar8));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar10),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf348e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar10);
  uStack_78 = uVar6;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010bf34860(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,lVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar7);
  _objc_release(lVar10);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar9),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf348e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar9);
  uStack_88 = uVar6;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010bf34860(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,lVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_80 = uVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar7);
  _objc_release(lVar10);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar11),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010bf493c0(0x4039000000000000,uVar2,param_2,lVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar11);
  uStack_98 = uVar7;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_90 = uVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_98,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(lVar10);
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar8),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar5 = *(long *)(param_1 + lVar8);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar5;
  func_0x00010bf493a0(lVar5,param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  lStack_a8 = lVar10;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010bf493c0(0x4014000000000000,uVar7,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_a0 = uVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_a8,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = lVar5 + _DAT_11272e858;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c2491c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 105a97624; end: 105a9765f; -[SCSpectaclesOTAUpdatePageFooterView _update] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a97624(long param_1)

{
  param_1 = param_1 + _DAT_11272e858;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2491c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a97660; end: 105a9769b; -[SCSpectaclesOTAUpdatePageFooterView _cancel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a97660(long param_1)

{
  param_1 = param_1 + _DAT_11272e858;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2491a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a9769c; end: 105a977bb; -[SCSpectaclesOTAUpdatePageFooterView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a9769c(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11272e85c;
  uVar2 = *(ulong *)(param_1 + lVar4);
  func_0x00010c071ae0(uVar2,param_2,param_3);
  if ((uVar2 & 1) == 0) {
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(long *)(param_1 + lVar4) = param_3;
    _objc_release(uVar3);
    lVar4 = param_3;
    func_0x00010bf25ae0();
    if (lVar4 == 1) {
      bVar1 = false;
    }
    else {
      lVar4 = param_3;
      func_0x00010bf25ae0(param_3);
      bVar1 = lVar4 != 2;
    }
    lVar5 = (long)_DAT_11272e848;
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5),param_2,bVar1);
    lVar4 = param_3;
    func_0x00010bf25ae0(param_3);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11272e84c),param_2,lVar4 != 3);
    lVar4 = param_3;
    func_0x00010bf25ae0(param_3);
    func_0x00010c195460(*(undefined8 *)(param_1 + lVar5),param_2,lVar4 == 1);
    lVar4 = param_3;
    func_0x00010c2534e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11272e850),param_2,lVar4);
    _objc_release(lVar4);
    lVar4 = param_3;
    func_0x00010c076be0();
    if ((int)lVar4 == 0) {
      func_0x00010c2558c0(*(undefined8 *)(param_1 + _DAT_11272e854));
    }
    else {
      func_0x00010c24dbc0();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a977bc; end: 105a977c7; +[SCSpectaclesOTAUpdatePageFooterView height] */

undefined8 FUN_105a977bc(void)

{
  return 0x4054000000000000;
}



/* Entry: 105a977c8; end: 105a977e7; -[SCSpectaclesOTAUpdatePageFooterView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a977c8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11272e858);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a977e8; end: 105a977fb; -[SCSpectaclesOTAUpdatePageFooterView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a977e8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11272e858,param_3);
  return;
}



/* Entry: 105a977fc; end: 105a97877; -[SCSpectaclesOTAUpdatePageFooterView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a977fc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272e858);
  _objc_storeStrong(param_1 + _DAT_11272e85c,0);
  _objc_storeStrong(param_1 + _DAT_11272e854,0);
  _objc_storeStrong(param_1 + _DAT_11272e850,0);
  _objc_storeStrong(param_1 + _DAT_11272e84c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272e848,0);
  return;
}



/* Entry: 105a97878; end: 105a97a03; -[SCSpectaclesOTAUpdatePageViewController initWithDevice:delegate:spectaclesAppStatusProvider:firmwareManager:otaManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105a97878(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126eba40;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar5 = (long)_DAT_11272e860;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf70e00();
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272e864) = uVar2;
    _objc_release(uVar3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11272e868),param_4);
    lVar5 = (long)_DAT_11272e86c;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126c1e88;
    _objc_alloc();
    func_0x00010c00c0a0();
    lVar5 = (long)_DAT_11272e870;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar4;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar5));
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a97a04; end: 105a97a63; -[SCSpectaclesOTAUpdatePageViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a97a04(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = param_1 + _DAT_11272e868;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0edde0();
  _objc_release(lVar1);
  puStack_28 = PTR_PTR_1126eba40;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105a97a64; end: 105a97a97; -[SCSpectaclesOTAUpdatePageViewController didSelectDismissalActionWithHeaderItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a97a64(long param_1)

{
  param_1 = param_1 + _DAT_11272e868;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0edde0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a97a98; end: 105a97b4b; -[SCSpectaclesOTAUpdatePageViewController viewDidLoad] */

void FUN_105a97a98(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126eba40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidLoad_112684cd8);
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126c1e90);
  puVar1 = PTR_PTR_1126c1e90;
  _objc_opt_class(PTR_PTR_1126c1e90);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126060(param_1);
  _objc_release(puVar1);
  _objc_release(param_1);
  return;
}



/* Entry: 105a97b4c; end: 105a97bab; -[SCSpectaclesOTAUpdatePageViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a97b4c(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126eba40;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillAppear__1126853f0,1);
  lVar1 = param_1;
  func_0x00010c06d1e0();
  if ((int)lVar1 != 0) {
    func_0x00010bfab560(*(undefined8 *)(param_1 + _DAT_11272e870));
  }
  return;
}



/* Entry: 105a97bac; end: 105a97baf; -[SCSpectaclesOTAUpdatePageViewController titleString] */

void FUN_105a97bac(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e1adf8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e1adf8,
                      &PTR____CFConstantStringClassReference_110e1acd8,0);
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



/* Entry: 105a97bb0; end: 105a97c1f; -[SCSpectaclesOTAUpdatePageViewController spectaclesOTAUpdatePageController:didUpdateSectionViewModels:footerViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a97bb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  func_0x00010c1f9700(param_1,param_2,param_4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272e874);
  *(undefined8 *)(param_1 + _DAT_11272e874) = param_5;
  _objc_release(uVar1);
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a97c20; end: 105a97e0f; -[SCSpectaclesOTAUpdatePageViewController spectaclesOTAUpdatePageControllerDidFailToUpdateSettings:errorType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a97c20(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  lVar1 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    return;
  }
  if ((long)param_4 < 5) {
    if (2 < (long)param_4) {
      if (param_4 == 3) {
        ppuVar3 = *(undefined ***)(param_1 + _DAT_11272e864);
        func_0x000105ac2c8c(ppuVar3,&PTR___NSConcreteGlobalBlock_1108d2c68);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        if (param_4 != 4) {
          return;
        }
        ppuVar3 = *(undefined ***)(param_1 + _DAT_11272e864);
        func_0x000105ac2d34(ppuVar3,&PTR___NSConcreteGlobalBlock_1108d2c88);
        _objc_retainAutoreleasedReturnValue();
      }
      goto joined_r0x000105a97d48;
    }
    if (param_4 < 2) goto LAB_105a97cd8;
    if (param_4 != 2) {
      return;
    }
    ppuVar2 = *(undefined ***)(param_1 + _DAT_11272e870);
    func_0x00010bf5e1e0(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = *(undefined ***)(param_1 + _DAT_11272e864);
    FUN_105ac2b90(ppuVar3,ppuVar2,&PTR___NSConcreteGlobalBlock_1108d2c48);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if ((long)param_4 < 7) {
      if (param_4 == 5) {
        ppuVar3 = *(undefined ***)(param_1 + _DAT_11272e864);
        func_0x000105ac2ddc(ppuVar3,&PTR___NSConcreteGlobalBlock_1108d2ca8);
        _objc_retainAutoreleasedReturnValue();
        goto joined_r0x000105a97d48;
      }
      if (param_4 != 6) {
        return;
      }
LAB_105a97cd8:
      ppuVar3 = *(undefined ***)(param_1 + _DAT_11272e864);
      FUN_105ac2ae8(ppuVar3,&PTR___NSConcreteGlobalBlock_1108d2c28);
      _objc_retainAutoreleasedReturnValue();
      goto joined_r0x000105a97d48;
    }
    if (param_4 == 7) {
      ppuVar3 = &PTR___NSConcreteGlobalBlock_1108d2cc8;
      func_0x000105ac2f04();
      _objc_retainAutoreleasedReturnValue();
      goto joined_r0x000105a97d48;
    }
    if (param_4 != 8) {
      return;
    }
    ppuVar2 = *(undefined ***)(param_1 + _DAT_11272e86c);
    func_0x00010c283a60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x000105ac2f84();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar2);
joined_r0x000105a97d48:
  if (ppuVar3 == (undefined **)0x0) {
    return;
  }
  func_0x00010c10eda0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar3);
  return;
}



/* Entry: 105a97e10; end: 105a97e7f;  */

void FUN_105a97e10(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105a97e80; end: 105a97f67; -[SCSpectaclesOTAUpdatePageViewController spectaclesOTAUpdatePageControllerDidEnterDirectBootState:] */

void FUN_105a97e80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  ppuVar1 = &puStack_60;
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105a97f68;
  puStack_48 = &UNK_1108482a8;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x000105ac2e84(&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0(param_1);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105a97f68; end: 105a9800f;  */

void FUN_105a97f68(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf84b00(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105a98010; end: 105a98043;  */

void FUN_105a98010(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf84b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a98044; end: 105a981c3; -[SCSpectaclesOTAUpdatePageViewController collectionView:layout:sizeForItemAtIndexPath:] */

undefined1  [16]
FUN_105a98044(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  long lStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar2 = param_4;
  func_0x00010c1569a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1554e0(param_8);
  lVar3 = lVar2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf343c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c142240(param_8);
  lVar5 = lVar4;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = lVar5;
  func_0x00010c27dd80();
  puVar1 = PTR_PTR_1126c1e98;
  if (lVar2 == 1) {
    func_0x00010bfb68e0(param_6);
    _CGRectGetWidth();
    func_0x00010bf33e80(puVar1);
    func_0x00010bfb68e0(param_6);
    param_2 = param_1;
    param_1 = param_3;
  }
  else {
    puStack_68 = PTR_PTR_1126eba40;
    lStack_70 = param_4;
    _objc_msgSendSuper2(&lStack_70,PTR_s_collectionView_layout_sizeForIte_1125adac8,param_6,param_7,
                        param_8);
  }
  _objc_release(lVar5);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 105a981c4; end: 105a9832b; -[SCSpectaclesOTAUpdatePageViewController collectionView:viewForSupplementaryElementOfKind:atIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a981c4(long param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  long lStack_60;
  undefined *puStack_58;
  
  plVar6 = &lStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  iVar1 = (int)*(undefined8 *)PTR__UICollectionElementKindSectionFooter_110345af8;
  func_0x00010c0720c0();
  if (iVar1 != 0) {
    lVar2 = param_5;
    func_0x00010c1554e0();
    lVar3 = param_1;
    func_0x00010c1569a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf529e0();
    _objc_release(lVar3);
    if (lVar2 == lVar4 + -1) {
      puVar5 = PTR_PTR_1126c1e90;
      _objc_opt_class(PTR_PTR_1126c1e90);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      plVar6 = (long *)param_3;
      func_0x00010bf6e120(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      func_0x00010c18b5e0(plVar6);
      func_0x00010c2226c0(plVar6);
      goto LAB_105a982f4;
    }
  }
  puStack_58 = PTR_PTR_1126eba40;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_collectionView_viewForSupplement_1125adaf0,param_3,param_4,
                      param_5);
  _objc_retainAutoreleasedReturnValue();
LAB_105a982f4:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar6);
  return;
}



/* Entry: 105a9832c; end: 105a983cf; -[SCSpectaclesOTAUpdatePageViewController collectionView:layout:referenceSizeForFooterInSection:] */

undefined1  [16]
FUN_105a9832c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  _objc_retain(param_6);
  func_0x00010c1569a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010bf529e0();
  _objc_release(param_4);
  if (param_8 == lVar1 + -1) {
    func_0x00010bfb68e0(param_6);
    func_0x00010bfe0640(PTR_PTR_1126c1e90);
  }
  else {
    param_3 = *(undefined8 *)PTR__CGSizeZero_110347620;
    param_1 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  }
  _objc_release(param_6);
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = param_3;
  return auVar2;
}



/* Entry: 105a983d0; end: 105a98687; -[SCSpectaclesOTAUpdatePageViewController didSelectSettings:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a983d0(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *unaff_x19;
  undefined *unaff_x20;
  undefined8 unaff_x21;
  undefined *unaff_x22;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_1;
  puStack_78 = unaff_x19;
  if (param_3 == (undefined *)0x0) {
    unaff_x20 = PTR_PTR_1126b0ac8;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    unaff_x21 = *(undefined8 *)(param_1 + _DAT_11272e870);
    func_0x00010c13e180();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = unaff_x21;
    func_0x00010bf6e620();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(unaff_x20);
    _objc_release(uVar1);
    func_0x00010c21ad00(unaff_x20);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(unaff_x20);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(unaff_x20);
    _objc_release(puVar2);
    func_0x00010c193a00(unaff_x20);
    func_0x00010c1f7b20(unaff_x20);
    func_0x00010bf25ae0();
    puVar2 = PTR_PTR_1126b10a0;
    uVar1 = unaff_x21;
    func_0x00010bf25a80(unaff_x21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb42c0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = puVar2;
    func_0x00010c269d60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126b10a0;
    func_0x000105a98ae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb42c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c269d60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126b10a8;
    _objc_alloc(PTR_PTR_1126b10a8);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = unaff_x22;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c019f40(puVar2);
    _objc_release(puVar4);
    param_3 = puVar2;
    func_0x00010c10af80(param_1);
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    puVar2 = unaff_x20;
    _objc_release(unaff_x20);
    puStack_78 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_105a98688;
  puStack_90 = unaff_x22;
  uStack_88 = unaff_x21;
  puStack_80 = unaff_x20;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  _objc_initWeak(auStack_98,puVar2);
  puVar2 = param_3;
  func_0x00010beeee80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a0,auStack_98);
  func_0x00010bf83000(puVar2);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  _objc_release(param_3);
  return;
}



/* Entry: 105a98688; end: 105a9876b; -[SCSpectaclesOTAUpdatePageViewController _enableAutomaticUpdates:] */

void FUN_105a98688(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_3;
  func_0x00010beeee80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf83000(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105a9876c; end: 105a9879b;  */

void FUN_105a9876c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea5fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a9879c; end: 105a9887f; -[SCSpectaclesOTAUpdatePageViewController _disableAutomaticUpdates:] */

void FUN_105a9879c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_3;
  func_0x00010beeee80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf83000(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105a98880; end: 105a988af;  */

void FUN_105a98880(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea5fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a988b0; end: 105a988e3; -[SCSpectaclesOTAUpdatePageViewController _actionSheetCancel:] */

void FUN_105a988b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010beeee80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf82fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a988e4; end: 105a988f3; -[SCSpectaclesOTAUpdatePageViewController _setOTAAutoUpdate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a988e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272e870),PTR_s_setOTAAutoUpdateEnabled__112651b28);
  return;
}



/* Entry: 105a988f4; end: 105a98903; -[SCSpectaclesOTAUpdatePageViewController spectaclesOTAUpdatePageFooterViewDidTapOnUpdateButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a988f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c288070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272e870),PTR_s_updateOTA_11267fa40);
  return;
}



/* Entry: 105a98904; end: 105a98913; -[SCSpectaclesOTAUpdatePageViewController spectaclesOTAUpdatePageFooterViewDidTapOnCancelButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a98904(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2e810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272e870),PTR_s_cancelOTAUpdate_1125a93a8);
  return;
}



/* Entry: 105a98914; end: 105a9898f; -[SCSpectaclesOTAUpdatePageViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a98914(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272e86c,0);
  _objc_destroyWeak(param_1 + _DAT_11272e868);
  _objc_storeStrong(param_1 + _DAT_11272e874,0);
  _objc_storeStrong(param_1 + _DAT_11272e878,0);
  _objc_storeStrong(param_1 + _DAT_11272e870,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272e860,0);
  return;
}



/* Entry: 105a98990; end: 105a98b57;  */

void FUN_105a98990(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e1acb8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e1acb8,
                      &PTR____CFConstantStringClassReference_110e1acd8,0);
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



/* Entry: 105a98b58; end: 105a98be7; -[SCSpectaclesOTAUpdatePageFooterViewModel initWithStatusText:buttonType:isLoading:] */

undefined1 *
FUN_105a98b58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126eba48;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a98be8; end: 105a98c0b; -[SCSpectaclesOTAUpdatePageFooterViewModel copyWithZone:] */

undefined8 FUN_105a98be8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105a98c0c; end: 105a98c7f; -[SCSpectaclesOTAUpdatePageFooterViewModel hash] */

undefined8 * FUN_105a98c0c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_38 = *(undefined8 *)(param_1 + 0x18);
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_40 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105a98d14;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(long *)((long)puVar2 + 0x18) != *(long *)(param_3 + 0x18) ||
        (*(char *)((long)puVar2 + 8) != param_3[8])))) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_105a98d14;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 0x10);
    if (puVar4 != *(undefined1 **)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_105a98d14;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_105a98d14:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 105a98c80; end: 105a98d2f; -[SCSpectaclesOTAUpdatePageFooterViewModel isEqual:] */

long FUN_105a98c80(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105a98d14;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18) ||
        (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))))) {
      lVar3 = 0;
      goto LAB_105a98d14;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_105a98d14;
    }
  }
  lVar3 = 1;
LAB_105a98d14:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105a98d30; end: 105a98d37; -[SCSpectaclesOTAUpdatePageFooterViewModel statusText] */

undefined8 FUN_105a98d30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105a98d38; end: 105a98d3f; -[SCSpectaclesOTAUpdatePageFooterViewModel buttonType] */

undefined8 FUN_105a98d38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105a98d40; end: 105a98d47; -[SCSpectaclesOTAUpdatePageFooterViewModel isLoading] */

undefined1 FUN_105a98d40(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105a98d48; end: 105a98d53; -[SCSpectaclesOTAUpdatePageFooterViewModel .cxx_destruct] */

void FUN_105a98d48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105a98d54; end: 105a98e07; -[SCSpectaclesOTAUpdatePageActionSheetCellViewModel initWithButtonTitle:buttonType:descriptionText:] */

undefined1 *
FUN_105a98d54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126eba50;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a98e08; end: 105a98e2b; -[SCSpectaclesOTAUpdatePageActionSheetCellViewModel copyWithZone:] */

undefined8 FUN_105a98e08(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105a98e2c; end: 105a98ea3; -[SCSpectaclesOTAUpdatePageActionSheetCellViewModel hash] */

undefined8 * FUN_105a98e2c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_38 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_105a98f34:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105a98f40;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10)))
    {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_105a98f40;
        }
        goto LAB_105a98f34;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_105a98f40:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105a98ea4; end: 105a98f5b; -[SCSpectaclesOTAUpdatePageActionSheetCellViewModel isEqual:] */

long FUN_105a98ea4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105a98f34:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105a98f40;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_105a98f40;
        }
        goto LAB_105a98f34;
      }
    }
    lVar3 = 0;
  }
LAB_105a98f40:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105a98f5c; end: 105a98f63; -[SCSpectaclesOTAUpdatePageActionSheetCellViewModel buttonTitle] */

undefined8 FUN_105a98f5c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105a98f64; end: 105a98f6b; -[SCSpectaclesOTAUpdatePageActionSheetCellViewModel buttonType] */

undefined8 FUN_105a98f64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105a98f6c; end: 105a98f73; -[SCSpectaclesOTAUpdatePageActionSheetCellViewModel descriptionText] */

undefined8 FUN_105a98f6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105a98f74; end: 105a98fa3; -[SCSpectaclesOTAUpdatePageActionSheetCellViewModel .cxx_destruct] */

void FUN_105a98f74(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a98fa4; end: 105a9903f; -[SCSpectaclesSettingsBaseCell setEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a98fa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  *(char *)(param_1 + _DAT_11272e894) = (char)param_3;
  lVar1 = param_1;
  func_0x00010c27f7a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(lVar1);
  uVar2 = 0x3ff0000000000000;
  if ((int)param_3 == 0) {
    uVar2 = 0x3fd3333333333333;
  }
  lVar1 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c21e910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setUserInteractionEnabled__112665468,param_3)
  ;
  return;
}



/* Entry: 105a99040; end: 105a99043; -[SCSpectaclesSettingsBaseCell setSelected:] */

void FUN_105a99040(void)

{
  return;
}



/* Entry: 105a99044; end: 105a99053; -[SCSpectaclesSettingsBaseCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105a99044(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272e898);
}



/* Entry: 105a99054; end: 105a99093; -[SCSpectaclesSettingsBaseCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a99054(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272e898;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a99094; end: 105a990a3; -[SCSpectaclesSettingsBaseCell isEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105a99094(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11272e894);
}



/* Entry: 105a990a4; end: 105a990b7; -[SCSpectaclesSettingsBaseCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a990a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272e898,0);
  return;
}



/* Entry: 105a990b8; end: 105a9913f; -[SCSpectaclesSettingsBaseViewController initWithNibName:bundle:] */

undefined1 * FUN_105a990b8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126eba58;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithNibName_bundle__1125e9850);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c271640(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(puVar1);
    _objc_release(puVar2);
    func_0x00010c20eaa0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105a99140; end: 105a99193; -[SCSpectaclesSettingsBaseViewController titleString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a99140(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar2 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  _objc_alloc_init(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
  func_0x00010c1c8300(0);
  func_0x00010c1c82c0(0,puVar2);
  func_0x00010c1f93e0(0,0,0x4022000000000000,0,puVar2);
  puVar3 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_alloc(PTR__OBJC_CLASS___UICollectionView_1126afd20);
  func_0x00010c014040(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  _objc_opt_class(PTR_PTR_1126c1ea0);
  puVar4 = PTR_PTR_1126c1ea0;
  _objc_opt_class(PTR_PTR_1126c1ea0);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126000(puVar3);
  _objc_release(puVar4);
  _objc_opt_class(PTR_PTR_1126c1ea8);
  puVar4 = PTR_PTR_1126c1ea8;
  _objc_opt_class(PTR_PTR_1126c1ea8);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126000(puVar3);
  _objc_release(puVar4);
  _objc_opt_class(PTR_PTR_1126c1e98);
  puVar4 = PTR_PTR_1126c1e98;
  _objc_opt_class(PTR_PTR_1126c1e98);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126000(puVar3);
  _objc_release(puVar4);
  _objc_opt_class(PTR_PTR_1126c1eb0);
  puVar4 = PTR_PTR_1126c1eb0;
  _objc_opt_class(PTR_PTR_1126c1eb0);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126060(puVar3);
  _objc_release(puVar4);
  func_0x00010c189840(puVar3);
  func_0x00010c18b5e0(puVar3);
  func_0x00010bf40780(puVar1);
  func_0x00010c181f80(puVar3);
  _objc_storeWeak(puVar1 + _DAT_11272e89c,puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105a99194; end: 105a9937b; -[SCSpectaclesSettingsBaseViewController loadScrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a99194(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  _objc_alloc_init(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
  func_0x00010c1c8300(0);
  func_0x00010c1c82c0(0,puVar1);
  func_0x00010c1f93e0(0,0,0x4022000000000000,0,puVar1);
  puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_alloc(PTR__OBJC_CLASS___UICollectionView_1126afd20);
  func_0x00010c014040(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  _objc_opt_class(PTR_PTR_1126c1ea0);
  puVar3 = PTR_PTR_1126c1ea0;
  _objc_opt_class(PTR_PTR_1126c1ea0);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126000(puVar2);
  _objc_release(puVar3);
  _objc_opt_class(PTR_PTR_1126c1ea8);
  puVar3 = PTR_PTR_1126c1ea8;
  _objc_opt_class(PTR_PTR_1126c1ea8);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126000(puVar2);
  _objc_release(puVar3);
  _objc_opt_class(PTR_PTR_1126c1e98);
  puVar3 = PTR_PTR_1126c1e98;
  _objc_opt_class(PTR_PTR_1126c1e98);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126000(puVar2);
  _objc_release(puVar3);
  _objc_opt_class(PTR_PTR_1126c1eb0);
  puVar3 = PTR_PTR_1126c1eb0;
  _objc_opt_class(PTR_PTR_1126c1eb0);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126060(puVar2);
  _objc_release(puVar3);
  func_0x00010c189840(puVar2);
  func_0x00010c18b5e0(puVar2);
  func_0x00010bf40780(param_1);
  func_0x00010c181f80(puVar2);
  _objc_storeWeak(param_1 + _DAT_11272e89c,puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105a9937c; end: 105a9938f; -[SCSpectaclesSettingsBaseViewController collectionViewContentInsets] */

undefined8 FUN_105a9937c(void)

{
  return *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
}


