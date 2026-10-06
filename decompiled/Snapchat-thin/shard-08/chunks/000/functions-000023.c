/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105c0bef0; end: 105c0c003; -[SCGallerySettingsViewController storageUsageCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0bef0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = *(undefined **)(param_1 + _DAT_11273239c);
  func_0x00010bf6e060(puVar1,param_2,&PTR____CFConstantStringClassReference_110e225b8);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126c31d8;
    _objc_alloc(PTR_PTR_1126c31d8);
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127322fc);
    func_0x00010c27ece0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + _DAT_112732368);
    uVar6 = *(undefined8 *)(param_1 + _DAT_11273236c);
    uVar7 = *(undefined8 *)(param_1 + _DAT_112732370);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112732374);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0400c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e225b8,uVar2,uVar5,
                        uVar6,uVar7,uVar4,param_1);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105c0c004; end: 105c0c13f; -[SCGallerySettingsViewController faceTaggingCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0c004(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = *(undefined **)(param_1 + _DAT_11273239c);
  func_0x00010bf6e060(puVar1,param_2,&PTR____CFConstantStringClassReference_110e225d8);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126c31f8;
    _objc_alloc(PTR_PTR_1126c31f8);
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127322fc);
    func_0x00010c27ece0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + _DAT_112732368);
    lVar7 = (long)_DAT_112732374;
    uVar3 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c0d66a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0400e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e225d8,uVar2,uVar6,
                        uVar4,lVar5,*(undefined8 *)(param_1 + lVar7),
                        *(undefined8 *)(param_1 + _DAT_112732388),
                        *(undefined8 *)(param_1 + _DAT_11273238c));
    _objc_release(lVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105c0c140; end: 105c0c213; -[SCGallerySettingsViewController _reloadCellForSettingTag:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0c140(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010be38e20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar5 = (long)_DAT_11273239c;
    func_0x00010bf18e80(*(undefined8 *)(param_1 + lVar5));
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_50 = lVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_50,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128f40(uVar3,param_2,puVar2,5);
    _objc_release(puVar2);
    func_0x00010bf95a20(*(undefined8 *)(param_1 + lVar5));
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lVar4 = (long)_DAT_11273230c;
  lVar5 = *(long *)(lVar1 + lVar4);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    return;
  }
  *(undefined1 *)(lVar1 + _DAT_1127323a0) = 1;
  puVar2 = PTR_PTR_1126aead0;
  _objc_alloc(PTR_PTR_1126aead0);
  lVar5 = lVar1;
  func_0x00010c0d66a0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02e4c0(puVar2,param_2,lVar5);
  _objc_release(lVar5);
  uVar3 = *(undefined8 *)(lVar1 + _DAT_112732310);
  func_0x00010bf23e00(uVar3,param_2,puVar2,0,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(lVar1 + lVar4),param_2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105c0c214; end: 105c0c303; -[SCGallerySettingsViewController _presentBackupProgress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0c214(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11273230c;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    return;
  }
  *(undefined1 *)(param_1 + _DAT_1127323a0) = 1;
  puVar2 = PTR_PTR_1126aead0;
  _objc_alloc(PTR_PTR_1126aead0);
  lVar1 = param_1;
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02e4c0(puVar2,param_2,lVar1);
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112732310);
  func_0x00010bf23e00(uVar3,param_2,puVar2,0,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar4),param_2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105c0c304; end: 105c0c3df; -[SCGallerySettingsViewController _presentMyMemoriesLink] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0c304(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_1127323cc;
  if (*(long *)(param_1 + lVar5) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126b42c0;
  _objc_alloc();
  func_0x00010c0616e0();
  puVar2 = puVar1;
  func_0x00010c0d6d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (puVar2 != (undefined *)0x0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112732384);
    func_0x00010bf24360(uVar3,param_2,puVar2,0,param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = uVar3;
    _objc_retain();
    _objc_release(uVar4);
    func_0x00010bf17a60(uVar3);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105c0c3e0; end: 105c0c3e7;  */

undefined8 FUN_105c0c3e0(void)

{
  return 1;
}



/* Entry: 105c0c3e8; end: 105c0c45b; -[SCGallerySettingsViewController _presentSaveTo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0c3e8(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c3200;
  _objc_alloc(PTR_PTR_1126c3200);
  func_0x00010c02b060();
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c0c45c; end: 105c0c4c3; -[SCGallerySettingsViewController _presentAutosave] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0c45c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c3208;
  _objc_alloc(PTR_PTR_1126c3208);
  func_0x00010c02a380();
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c0c4c4; end: 105c0c74b; -[SCGallerySettingsViewController _presentImportCameraRoll] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0c4c4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x00010bf10fa0();
  if (puVar1 == (undefined *)0x0) {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112732308);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c134a40(uVar2);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    return;
  }
  puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x00010bf10fa0();
  if ((puVar1 == (undefined *)0x2) ||
     (puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30, func_0x00010bf10fa0(),
     puVar1 == (undefined *)0x1)) {
    puVar1 = *(undefined **)(param_1 + _DAT_112732308);
    func_0x00010c269d40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x000108dfd77c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1184e0(puVar1);
    _objc_release(puVar3);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x00010bf10fa0();
    if (puVar1 != (undefined *)0x3) {
      return;
    }
    puVar1 = PTR_PTR_1126c3210;
    _objc_alloc(PTR_PTR_1126c3210);
    puVar3 = PTR_PTR_1126c3218;
    func_0x00010bfbaf60(PTR_PTR_1126c3218);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03aa60(puVar1);
    _objc_release(puVar3);
    func_0x00010c18b5e0(puVar1);
    func_0x00010c0d66a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11c520();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c0c74c; end: 105c0c7f3;  */

void FUN_105c0c74c(long param_1,int param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  if (param_2 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x105c0c7c8;
    puStack_30 = &UNK_1108434b0;
    _objc_copyWeak(auStack_28,param_1 + 0x20);
    func_0x000100162d98("APPSTORE",&puStack_48);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 105c0c7f4; end: 105c0c8bb; -[SCGallerySettingsViewController _presentCancelSubscription] */

void FUN_105c0c7f4(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  puVar1 = auStack_28;
  _objc_initWeak(puVar1,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(puVar1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105c0c8bc; end: 105c0c97f;  */

void FUN_105c0c8bc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0d66a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c275140();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105c0c980;
  puStack_40 = &UNK_1108434b0;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  func_0x000108dfa118(uVar2,&puStack_58);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105c0c980; end: 105c0c9b3;  */

void FUN_105c0c980(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be6d720(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c0c9b4; end: 105c0ca6b; -[SCGallerySettingsViewController _enableDefaultToMyEyesOnly] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0c9b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112732314;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfbd4e0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    puVar3 = PTR_PTR_1126c3220;
    _objc_alloc(PTR_PTR_1126c3220);
    func_0x00010c016880();
    param_1 = param_1 + _DAT_11273233c;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf9d620();
    _objc_release(param_1);
  }
  else {
    puVar3 = *(undefined **)(param_1 + lVar4);
    func_0x00010c269d40(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1be0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105c0ca6c; end: 105c0caab; -[SCGallerySettingsViewController _disableDefaultToMyEyesOnly] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0ca6c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112732314);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1be0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c0caac; end: 105c0cb4b; -[SCGallerySettingsViewController _vendCommerceSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0caac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b0308;
  _objc_alloc(PTR_PTR_1126b0308);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112732350);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112732360);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04a840(puVar1,param_2,3,0x14,0x1c,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105c0cb4c; end: 105c0cc0f; -[SCGallerySettingsViewController _shouldShowSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_105c0cb4c(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar4 = 1;
  if (param_3 < 2) {
    if (param_3 == 0) goto LAB_105c0cc08;
    if ((param_3 == 1) && (*(char *)(param_1 + _DAT_112732390) == '\x01')) {
      uVar1 = *(ulong *)(param_1 + _DAT_11273236c);
      func_0x00010c2572e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c077f20();
      _objc_release(uVar2);
      _objc_release(uVar1);
      return uVar3;
    }
  }
  else {
    if (param_3 - 2U < 2) goto LAB_105c0cc08;
    if (param_3 == 5) {
      uVar4 = (uint)*(byte *)(param_1 + _DAT_11273237c);
      goto LAB_105c0cc08;
    }
  }
  uVar4 = 0;
LAB_105c0cc08:
  return (ulong)(uVar4 & 1);
}



/* Entry: 105c0cc10; end: 105c0cd53; -[SCGallerySettingsViewController _visibleSections] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0cc10(int param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR__OBJC_CLASS___NSConstantArray_11117f348;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  if (ppuVar3 != (undefined **)0x0) {
    do {
      ppuVar10 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_11117f348);
        }
        func_0x00010c067fc0(*(undefined8 *)((long)ppuVar10 * 8));
        iVar1 = param_1;
        func_0x00010beb65e0();
        if (iVar1 != 0) {
          func_0x00010befa120(puVar2);
        }
        ppuVar10 = (undefined **)((long)ppuVar10 + 1);
      } while (ppuVar3 != ppuVar10);
      ppuVar3 = &PTR__OBJC_CLASS___NSConstantArray_11117f348;
      func_0x00010bf52a60();
    } while (ppuVar3 != (undefined **)0x0);
  }
  puVar4 = puVar2;
  func_0x00010bf51e00();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)(puVar2 + _DAT_112732370);
  if (lVar5 != 0) {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar5;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar9;
    func_0x00010c080180();
    puVar2[_DAT_112732390] = (char)lVar6;
    _objc_release(lVar9);
    lVar9 = lVar5;
    func_0x00010bf60aa0(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf018a0();
    func_0x00010c28a460(puVar2);
    _objc_release(lVar9);
    _objc_initWeak(auStack_178,puVar2);
    lVar9 = lVar5;
    func_0x00010c28d760(lVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar9;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar9;
    func_0x00010c0e0ea0(lVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_180,auStack_178);
    lVar8 = lVar7;
    func_0x00010c25ff60(lVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar9);
    _objc_destroyWeak(auStack_180);
    _objc_destroyWeak(auStack_178);
    _objc_release(lVar5);
  }
  return;
}



/* Entry: 105c0cd54; end: 105c0cf0b; -[SCGallerySettingsViewController _setupStorageSubscriptionObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0cd54(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar1 = *(long *)(param_1 + _DAT_112732370);
  if (lVar1 != 0) {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c080180();
    *(char *)(param_1 + _DAT_112732390) = (char)lVar3;
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010bf60aa0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf018a0();
    func_0x00010c28a460(param_1);
    _objc_release(lVar2);
    _objc_initWeak(auStack_58,param_1);
    lVar2 = lVar1;
    func_0x00010c28d760(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0e0ea0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    lVar5 = lVar4;
    func_0x00010c25ff60(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 105c0cf0c; end: 105c0cf77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0cf0c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010c080180();
    *(char *)(param_1 + _DAT_112732390) = (char)uVar1;
    func_0x00010bf018a0(param_2);
    func_0x00010c28a460(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c0cf78; end: 105c0d02f; -[SCGallerySettingsViewController _setupFaceTaggingSettingVisibility] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0cf78(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  lVar2 = (long)_DAT_112732378;
  if (*(long *)(param_1 + lVar2) != 0) {
    _objc_initWeak(auStack_28,param_1);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010c2337a0(uVar1);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 105c0d030; end: 105c0d0df;  */

void FUN_105c0d030(long param_1,undefined1 param_2)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  
  lVar1 = param_1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,param_1 + 0x20);
  uStack_38 = param_2;
  func_0x00010c0f7fc0(lVar1);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_40);
  return;
}



/* Entry: 105c0d0e0; end: 105c0d133;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0d0e0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + _DAT_11273237c) != *(char *)(param_1 + 0x28)) {
      *(char *)(lVar1 + _DAT_11273237c) = *(char *)(param_1 + 0x28);
      func_0x00010be94440(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105c0d134; end: 105c0d1c7; -[SCGallerySettingsViewController updateStorageSubscriptionPlanCell:] */

void FUN_105c0d134(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_1;
  func_0x000108dfdcd4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c257340(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e2a80();
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c0d1c8; end: 105c0d33b; -[SCGallerySettingsViewController _tagsForSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0d1c8(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  ppuVar3 = (undefined **)PTR____NSArray0__struct_11034ab48;
  if (param_3 < 2) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        ppuVar3 = &PTR__OBJC_CLASS___NSConstantArray_11117f378;
      }
      goto LAB_105c0d328;
    }
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    if (*(char *)(param_1 + _DAT_1127323ac) == '\x01') {
      func_0x00010befa120(ppuVar2,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c32b0);
    }
    func_0x00010befa160(ppuVar2,param_2,&PTR__OBJC_CLASS___NSConstantArray_11117f360);
  }
  else {
    if (param_3 == 2) {
      ppuVar3 = &PTR__OBJC_CLASS___NSConstantArray_11117f390;
      goto LAB_105c0d328;
    }
    if (param_3 != 3) {
      if (param_3 == 5) {
        ppuVar3 = &PTR__OBJC_CLASS___NSConstantArray_11117f3a8;
      }
      goto LAB_105c0d328;
    }
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    if ((*(long *)(param_1 + _DAT_112732380) != 0) && (*(long *)(param_1 + _DAT_112732384) != 0)) {
      iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11273235c);
      func_0x000106dbdcd8();
      if (iVar1 != 0) {
        func_0x00010befa120(ppuVar2,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c32f8);
      }
    }
    func_0x00010befa120(ppuVar2,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3310);
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11273235c);
    func_0x000106dbdc94();
    if (iVar1 != 0) {
      func_0x00010befa120(ppuVar2,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3328);
    }
  }
  ppuVar3 = ppuVar2;
  func_0x00010bf51e00(ppuVar2);
  _objc_release(ppuVar2);
LAB_105c0d328:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 105c0d33c; end: 105c0d39f; -[SCGallerySettingsViewController _sectionTypeAtIndex:] */

undefined8 FUN_105c0d33c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010beea240();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067fc0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 105c0d3a0; end: 105c0d3f3; -[SCGallerySettingsViewController _openSubscriptionManagement] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0d3a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112732348);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127322fc);
  func_0x00010c27ece0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e9920(uVar2,param_2,uVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c0d3f4; end: 105c0d42f; -[SCGallerySettingsViewController galleryImportCameraRollViewControllerDidFinish:] */

void FUN_105c0d3f4(undefined8 param_1)

{
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a00();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c0d430; end: 105c0d4eb; -[SCGallerySettingsViewController privateGallerySetupFlowDidCancel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0d430(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112732314);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1be0();
  _objc_release(uVar1);
  func_0x00010be8a720(param_1,param_2,5);
  lVar4 = (long)_DAT_11273233c;
  lVar2 = param_1 + lVar4;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    param_1 = param_1 + lVar4;
    _objc_loadWeakRetained(param_1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105c0d4ec; end: 105c0d5a3; -[SCGallerySettingsViewController privateGallerySetupFlowDidFinish:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0d4ec(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112732314);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1be0();
  _objc_release(uVar1);
  func_0x00010be94440(param_1);
  lVar4 = (long)_DAT_11273233c;
  lVar2 = param_1 + lVar4;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    param_1 = param_1 + lVar4;
    _objc_loadWeakRetained(param_1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105c0d5a4; end: 105c0d5b7; -[SCGallerySettingsViewController exit:] */

void FUN_105c0d5a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105c0d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3);
    return;
  }
  return;
}



/* Entry: 105c0d5b8; end: 105c0d5d7; -[SCGallerySettingsViewController canHandleNotification:] */

bool FUN_105c0d5b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c26a060(param_3);
  return param_3 == 9;
}



/* Entry: 105c0d5d8; end: 105c0d62f; -[SCGallerySettingsViewController memoriesBackupUIWillDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0d5d8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273230c;
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



/* Entry: 105c0d630; end: 105c0d663; -[SCGallerySettingsViewController memoriesLinkManagementUIDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0d630(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127323cc;
  func_0x00010bf940a0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c0d664; end: 105c0d6bb; -[SCGallerySettingsViewController plusSubscribeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0d664(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112732340;
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



/* Entry: 105c0d6bc; end: 105c0d77b; -[SCGallerySettingsViewController storageUsageCellWantsToPresentSnapchatPlusUpsell] */

void FUN_105c0d6bc(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  puVar1 = auStack_28;
  _objc_initWeak(puVar1,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(puVar1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105c0d77c; end: 105c0d877;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0d77c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126b1da8;
    _objc_alloc(PTR_PTR_1126b1da8);
    func_0x00010c04abe0();
    lVar2 = param_1;
    func_0x000105c08db8(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + _DAT_112732344);
    puVar3 = PTR_PTR_1126b5af8;
    func_0x00010c257080(PTR_PTR_1126b5af8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf23e60(uVar4,param_2,lVar2,puVar1,param_1,0,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_112732340),param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c0d878; end: 105c0d87b; -[SCGallerySettingsViewController storageUsageCellWantsToPresentSubscriptionManagement] */

void FUN_105c0d878(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6d730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__openSubscriptionManagement_112578f68);
  return;
}



/* Entry: 105c0d87c; end: 105c0d887; -[SCGallerySettingsViewController defaultProjectNameV3] */

void FUN_105c0d87c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c7a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_memories_11260f8a8);
  return;
}



/* Entry: 105c0d888; end: 105c0d893; -[SCGallerySettingsViewController defaultProjectNameV2] */

void FUN_105c0d888(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c7a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_memories_11260f8a8);
  return;
}



/* Entry: 105c0d894; end: 105c0dbaf; -[SCGallerySettingsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0d894(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273238c,0);
  _objc_storeStrong(param_1 + _DAT_112732388,0);
  _objc_storeStrong(param_1 + _DAT_1127323cc,0);
  _objc_storeStrong(param_1 + _DAT_112732384,0);
  _objc_storeStrong(param_1 + _DAT_112732380,0);
  _objc_storeStrong(param_1 + _DAT_112732374,0);
  _objc_storeStrong(param_1 + _DAT_112732370,0);
  _objc_storeStrong(param_1 + _DAT_11273236c,0);
  _objc_storeStrong(param_1 + _DAT_112732394,0);
  _objc_storeStrong(param_1 + _DAT_112732378,0);
  _objc_storeStrong(param_1 + _DAT_112732398,0);
  _objc_storeStrong(param_1 + _DAT_112732368,0);
  _objc_storeStrong(param_1 + _DAT_112732364,0);
  _objc_storeStrong(param_1 + _DAT_112732360,0);
  _objc_storeStrong(param_1 + _DAT_11273235c,0);
  _objc_storeStrong(param_1 + _DAT_112732358,0);
  _objc_storeStrong(param_1 + _DAT_112732354,0);
  _objc_storeStrong(param_1 + _DAT_112732350,0);
  _objc_storeStrong(param_1 + _DAT_11273232c,0);
  _objc_storeStrong(param_1 + _DAT_112732328,0);
  _objc_storeStrong(param_1 + _DAT_112732324,0);
  _objc_storeStrong(param_1 + _DAT_112732320,0);
  _objc_storeStrong(param_1 + _DAT_112732318,0);
  _objc_storeStrong(param_1 + _DAT_112732314,0);
  _objc_storeStrong(param_1 + _DAT_1127322fc,0);
  _objc_storeStrong(param_1 + _DAT_112732310,0);
  _objc_storeStrong(param_1 + _DAT_11273230c,0);
  _objc_storeStrong(param_1 + _DAT_112732308,0);
  _objc_storeStrong(param_1 + _DAT_11273234c,0);
  _objc_storeStrong(param_1 + _DAT_112732348,0);
  _objc_storeStrong(param_1 + _DAT_112732344,0);
  _objc_storeStrong(param_1 + _DAT_112732340,0);
  _objc_destroyWeak(param_1 + _DAT_11273233c);
  _objc_storeStrong(param_1 + _DAT_112732338,0);
  _objc_storeStrong(param_1 + _DAT_112732334,0);
  _objc_storeStrong(param_1 + _DAT_112732330,0);
  _objc_storeStrong(param_1 + _DAT_112732304,0);
  _objc_storeStrong(param_1 + _DAT_112732300,0);
  _objc_storeStrong(param_1 + _DAT_1127323a8,0);
  _objc_storeStrong(param_1 + _DAT_1127323c8,0);
  _objc_storeStrong(param_1 + _DAT_1127323c4,0);
  _objc_storeStrong(param_1 + _DAT_1127323c0,0);
  _objc_storeStrong(param_1 + _DAT_1127323bc,0);
  _objc_storeStrong(param_1 + _DAT_1127323b8,0);
  _objc_storeStrong(param_1 + _DAT_1127323b4,0);
  _objc_storeStrong(param_1 + _DAT_1127323b0,0);
  _objc_storeStrong(param_1 + _DAT_11273231c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273239c,0);
  return;
}



/* Entry: 105c0dbb0; end: 105c0dcc3; -[SCMemoriesSettingsUIEntryPoint begin] */

void FUN_105c0dbb0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1;
  FUN_105c0dcc4();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0c9820();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (((int)lVar4 == 0) || (lVar1 = param_1, func_0x00010be63460(), lVar1 == 0)) {
    lVar1 = param_1;
    func_0x000105c0dce8(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4a160(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
  }
  else {
    func_0x000105c0dce8(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
  }
  func_0x00010bf0c980();
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105c0dcc4; end: 105c0dd0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0dcc4(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11273241c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c0dd0c; end: 105c0e293; -[SCMemoriesSettingsUIEntryPoint _newSettingsViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_105c0dd0c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined8 *puStack_f8;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  
  lVar1 = param_1;
  FUN_105c0e294();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar4 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126afe50;
    _objc_alloc();
    func_0x00010c040b80();
    puVar6 = PTR_PTR_1126c3228;
    _objc_alloc();
    func_0x00010c02ecc0();
    _objc_initWeak(auStack_b8,param_1);
    uStack_e8 = 0;
    uStack_d8 = 0x3042000000;
    pcStack_d0 = FUN_105c0e2b8;
    uStack_c8 = 0x105c0e2c4;
    puStack_e0 = &uStack_e8;
    _objc_initWeak(auStack_c0,0);
    puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_110 = 0xc2000000;
    pcStack_108 = FUN_105c0e2cc;
    puStack_100 = &UNK_110850308;
    _objc_copyWeak(auStack_f0,auStack_b8);
    ppuVar7 = &puStack_118;
    puStack_f8 = &uStack_e8;
    _objc_retainBlock();
    lVar1 = param_1;
    FUN_105c0e3bc(param_1);
    _objc_retainAutoreleasedReturnValue();
    FUN_105c10318(puVar6,lVar1,ppuVar7);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x000105c0e3e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0c94e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x000105c0e3e0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar3;
    func_0x00010c0c8780();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar2);
    _objc_retain(lVar8);
    puVar9 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    puVar13 = PTR_PTR_1126ae6b8;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_105c0f918;
    puStack_98 = &UNK_1108683b8;
    lStack_90 = lVar2;
    lStack_88 = lVar8;
    puStack_80 = puVar9;
    _objc_retain();
    _objc_retain(lVar8);
    _objc_retain(lVar2);
    func_0x00010bf54280(puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar13;
    func_0x00010c25ffc0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar10;
    func_0x00010c0e0e60(puVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar13);
    _objc_release(puStack_80);
    _objc_release(lStack_88);
    _objc_release(lStack_90);
    _objc_release(puVar9);
    _objc_release(lVar8);
    _objc_release(lVar2);
    puVar13 = puVar12;
    func_0x00010c272120(puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21b400(puVar6);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(lVar8);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar13 = PTR_PTR_1126c3230;
    _objc_alloc(PTR_PTR_1126c3230);
    lVar1 = param_1;
    func_0x000105c0e404(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    FUN_105c0e294(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c295440();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = *(undefined8 *)(param_1 + _DAT_112732448);
    }
    _objc_retain(uVar14);
    func_0x000105c0dce8(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0043a0(puVar13);
    _objc_release(lVar8);
    _objc_release(param_1);
    _objc_release(uVar14);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_storeWeak(puStack_e0 + 5,puVar13);
    func_0x00010c1c1bc0(puVar5);
    _objc_initWeak(&puStack_b0,puVar13);
    _objc_copyWeak(auStack_128,auStack_b8);
    _objc_copyWeak(auStack_120,&puStack_b0);
    func_0x00010c1ab020(puVar6);
    _objc_destroyWeak(auStack_120);
    _objc_destroyWeak(auStack_128);
    _objc_destroyWeak(&puStack_b0);
    _objc_release(ppuVar7);
    _objc_destroyWeak(auStack_f0);
    __Block_object_dispose(&uStack_e8,8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_b8);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(lVar4);
  return puVar13;
}



/* Entry: 105c0e294; end: 105c0e2b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0e294(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112732424);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c0e2b8; end: 105c0e2cb;  */

void FUN_105c0e2b8(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_moveWeak_11034d280)(param_1 + 0x28,param_2 + 0x28);
  return;
}



/* Entry: 105c0e2cc; end: 105c0e35f;  */

void FUN_105c0e2cc(long param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105c0e360;
  puStack_38 = &UNK_110850308;
  _objc_copyWeak(auStack_28,param_1 + 0x28);
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105c0e360; end: 105c0e3bb;  */

void FUN_105c0e360(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28;
    _objc_loadWeakRetained();
    if (lVar2 != 0) {
      func_0x00010be0d0c0(lVar1,param_2,lVar2);
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105c0e3bc; end: 105c0e427;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0e3bc(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112732418);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c0e428; end: 105c0e4cf;  */

void FUN_105c0e428(long param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105c0e4d0;
  puStack_38 = &UNK_110854350;
  _objc_copyWeak(auStack_30,param_1 + 0x20);
  _objc_copyWeak(auStack_28,param_1 + 0x28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_28);
  _objc_destroyWeak(auStack_30);
  return;
}



/* Entry: 105c0e4d0; end: 105c0e523;  */

void FUN_105c0e4d0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      func_0x00010be7bda0(lVar1,param_2,param_1);
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105c0e524; end: 105c0eccb; -[SCMemoriesSettingsUIEntryPoint _legacySettingsViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0e524(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  undefined8 uStack_d8;
  
  puVar1 = PTR_PTR_1126c3238;
  _objc_alloc();
  lVar2 = param_1;
  func_0x000105c0dce8();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x000105c0e3e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0c94e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x000105c0e3e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  FUN_105c0eccc();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c0fb4c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + _DAT_112732438);
  }
  _objc_retain();
  lVar10 = param_1;
  func_0x000105c0ecf0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar46 = 0;
  }
  else {
    lVar46 = param_1 + _DAT_1127323e4;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar46;
  func_0x00010c0c7e00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar47 = 0;
  }
  else {
    lVar47 = param_1 + _DAT_1127323e8;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar47;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x000105c0ed14();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x000105c0ed38();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c29a4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x000105c0ed5c();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar18;
  func_0x00010c112160();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar48 = 0;
  }
  else {
    lVar48 = param_1 + _DAT_1127323fc;
    _objc_loadWeakRetained();
  }
  lVar20 = lVar48;
  func_0x00010bf3e340();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1;
  func_0x000105c0ed80();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar21;
  func_0x00010befb6a0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1;
  func_0x000105c0eda4();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar23;
  func_0x00010c08f100();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uStack_d8 = 0;
    lVar49 = 0;
  }
  else {
    uStack_d8 = *(undefined8 *)(param_1 + _DAT_112732434);
    _objc_retain();
    lVar49 = param_1 + _DAT_112732408;
    _objc_loadWeakRetained();
  }
  lVar25 = lVar49;
  func_0x00010c0ca000();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1;
  FUN_105c0eccc();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar26;
  func_0x00010bf522a0();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1;
  func_0x000105c0edc8();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar28;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_1;
  func_0x000105c0edec();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = lVar30;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_1;
  func_0x000105c0ee10();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = lVar32;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar50 = 0;
  }
  else {
    lVar50 = param_1 + _DAT_112732410;
    _objc_loadWeakRetained();
  }
  lVar34 = lVar50;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1;
  func_0x000105c0ee34();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = lVar35;
  func_0x00010c0c9680();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = param_1;
  func_0x000105c0dcc4();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = lVar37;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = param_1;
  func_0x000105c0e3bc();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar51 = 0;
  }
  else {
    lVar51 = param_1 + _DAT_112732420;
    _objc_loadWeakRetained();
  }
  lVar40 = lVar51;
  func_0x00010c260800();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = param_1;
  FUN_105c0e294();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = lVar41;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uVar53 = 0;
  }
  else {
    uVar53 = *(undefined8 *)(param_1 + _DAT_112732444);
  }
  _objc_retain(uVar53);
  lVar43 = param_1;
  func_0x000105c0ee58();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar55 = 0;
    lVar52 = 0;
  }
  else {
    lVar55 = param_1 + _DAT_11273243c;
    _objc_loadWeakRetained();
    lVar52 = param_1 + _DAT_112732428;
    _objc_loadWeakRetained();
  }
  lVar44 = lVar52;
  func_0x00010bf9f280();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = param_1;
  func_0x000105c0e404();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    lVar56 = 0;
    uVar54 = 0;
    lVar57 = 0;
    param_1 = 0;
  }
  else {
    uVar54 = *(undefined8 *)(param_1 + _DAT_112732448);
    _objc_retain(uVar54);
    lVar57 = param_1 + _DAT_11273242c;
    _objc_loadWeakRetained();
    lVar56 = param_1 + _DAT_11273244c;
    _objc_loadWeakRetained();
    param_1 = param_1 + _DAT_112732450;
    _objc_loadWeakRetained();
  }
  func_0x00010c02ad40(puVar1,param_2,lVar2,lVar4,lVar6,lVar8,uVar9,lVar11,lVar12,lVar13,lVar15,
                      lVar17,lVar19,lVar20,lVar22,lVar24,uStack_d8,lVar25,lVar27,lVar29,lVar31,
                      lVar33,lVar34,lVar36,lVar38,lVar39,lVar40,lVar42,uVar53,lVar43,lVar55,lVar44,
                      lVar45,uVar54,lVar57,lVar56,param_1);
  _objc_release(uVar54);
  _objc_release(param_1);
  _objc_release(lVar56);
  _objc_release(lVar57);
  _objc_release(uVar53);
  _objc_release(lVar45);
  _objc_release(lVar44);
  _objc_release(lVar52);
  _objc_release(lVar55);
  _objc_release(lVar43);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar51);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar50);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar49);
  _objc_release(uStack_d8);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar48);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar47);
  _objc_release(lVar12);
  _objc_release(lVar46);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105c0eccc; end: 105c0ee7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0eccc(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_1127323dc);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c0ee7c; end: 105c0eee7; -[SCMemoriesSettingsUIEntryPoint plusSubscribeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0ee7c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112732444);
  }
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    if (param_1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + _DAT_112732444);
    }
    func_0x00010c12e1c0(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105c0eee8; end: 105c0f057; -[SCMemoriesSettingsUIEntryPoint _exposePlusSubscribeScopeFromViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0eee8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(param_1 + _DAT_112732444);
  }
  _objc_retain(param_3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 != 0) {
    if (param_1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + _DAT_112732444);
    }
    func_0x00010c12e1c0(uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar2 = PTR_PTR_1126b1da8;
  _objc_alloc(PTR_PTR_1126b1da8);
  func_0x00010c04abe0();
  uVar1 = param_3;
  func_0x000105c08db8(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar6 = param_1;
  func_0x000105c0ee58(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b5af8;
  func_0x00010c257080(PTR_PTR_1126b5af8);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar6;
  func_0x00010bf23e60(lVar6,param_2,uVar1,puVar2,param_1,0,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar6);
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + _DAT_112732444);
  }
  func_0x00010bf9d620(uVar5,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105c0f058; end: 105c0f097; -[SCMemoriesSettingsUIEntryPoint galleryImportCameraRollViewControllerDidFinish:] */

void FUN_105c0f058(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0d66a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a00();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c0f098; end: 105c0f677; -[SCMemoriesSettingsUIEntryPoint _presentImportCameraRollFromViewController:] */

void FUN_105c0f098(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined8 uVar32;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x00010bf10fa0();
  if (puVar1 == (undefined *)0x0) {
    _objc_initWeak(auStack_70,param_1);
    _objc_initWeak(auStack_78,param_3);
    FUN_105c0eccc(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    func_0x00010c0fb4c0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_70);
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x00010c134a40(puVar2);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_70);
    goto LAB_105c0f250;
  }
  puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x00010bf10fa0();
  if (puVar1 == (undefined *)0x2) {
LAB_105c0f0f8:
    FUN_105c0eccc(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    func_0x00010c0fb4c0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x000108dfd77c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1184e0(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = param_1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x00010bf10fa0();
    if (puVar1 == (undefined *)0x1) goto LAB_105c0f0f8;
    puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x00010bf10fa0();
    if (puVar1 != (undefined *)0x3) goto LAB_105c0f250;
    puVar1 = PTR_PTR_1126c3210;
    _objc_alloc();
    puVar2 = param_1;
    func_0x000105c0e3e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0c94e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x000105c0e3e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0c8780();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126c3218;
    func_0x00010bfbaf60();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_1;
    func_0x000105c0ed14();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf5f860();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_1;
    func_0x000105c0ed38();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c29a4c0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = param_1;
    func_0x000105c0ed5c();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c112160();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = param_1;
    FUN_105c0eccc();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010c0fb4c0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = param_1;
    func_0x000105c0ed80();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar15;
    func_0x00010befb6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = param_1;
    func_0x000105c0eda4();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    func_0x00010c08f100();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = param_1;
    func_0x000105c0ecf0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar19;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = param_1;
    FUN_105c0eccc();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar21;
    func_0x00010bf522a0();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = param_1;
    func_0x000105c0edc8();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar23;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = param_1;
    func_0x000105c0edec();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = puVar25;
    func_0x00010bf07a00();
    _objc_retainAutoreleasedReturnValue();
    puVar27 = param_1;
    func_0x000105c0ee10();
    _objc_retainAutoreleasedReturnValue();
    puVar28 = puVar27;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    puVar29 = param_1;
    func_0x000105c0ee34();
    _objc_retainAutoreleasedReturnValue();
    puVar30 = puVar29;
    func_0x00010c0c9680();
    _objc_retainAutoreleasedReturnValue();
    FUN_105c0dcc4();
    _objc_retainAutoreleasedReturnValue();
    puVar31 = param_1;
    func_0x00010c0c8940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03aa60();
    _objc_release(puVar31);
    _objc_release(param_1);
    _objc_release(puVar30);
    _objc_release(puVar29);
    _objc_release(puVar28);
    _objc_release(puVar27);
    _objc_release(puVar26);
    _objc_release(puVar25);
    _objc_release(puVar24);
    _objc_release(puVar23);
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
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
    _objc_release(puVar2);
    func_0x00010c18b5e0(puVar1);
    uVar32 = param_3;
    func_0x00010c0d66a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11c520();
    _objc_release(uVar32);
  }
  _objc_release(puVar1);
LAB_105c0f250:
  _objc_release(param_3);
  return;
}



/* Entry: 105c0f678; end: 105c0f75b;  */

void FUN_105c0f678(long param_1,int param_2)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (param_2 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    uStack_40 = 0x105c0f708;
    puStack_38 = &UNK_110854350;
    _objc_copyWeak(auStack_30,param_1 + 0x20);
    _objc_copyWeak(auStack_28,param_1 + 0x28);
    func_0x000100162d98("APPSTORE",&puStack_50);
    _objc_destroyWeak(auStack_28);
    _objc_destroyWeak(auStack_30);
  }
  return;
}



/* Entry: 105c0f75c; end: 105c0f917; -[SCMemoriesSettingsUIEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0f75c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112732450);
  _objc_destroyWeak(param_1 + _DAT_11273244c);
  _objc_storeStrong(param_1 + _DAT_112732448,0);
  _objc_storeStrong(param_1 + _DAT_112732444,0);
  _objc_destroyWeak(param_1 + _DAT_112732440);
  _objc_destroyWeak(param_1 + _DAT_11273243c);
  _objc_storeStrong(param_1 + _DAT_112732438,0);
  _objc_storeStrong(param_1 + _DAT_112732434,0);
  _objc_destroyWeak(param_1 + _DAT_112732430);
  _objc_destroyWeak(param_1 + _DAT_11273242c);
  _objc_destroyWeak(param_1 + _DAT_112732428);
  _objc_destroyWeak(param_1 + _DAT_112732424);
  _objc_destroyWeak(param_1 + _DAT_112732420);
  _objc_destroyWeak(param_1 + _DAT_11273241c);
  _objc_destroyWeak(param_1 + _DAT_112732418);
  _objc_destroyWeak(param_1 + _DAT_112732414);
  _objc_destroyWeak(param_1 + _DAT_112732410);
  _objc_destroyWeak(param_1 + _DAT_11273240c);
  _objc_destroyWeak(param_1 + _DAT_112732408);
  _objc_destroyWeak(param_1 + _DAT_112732404);
  _objc_destroyWeak(param_1 + _DAT_112732400);
  _objc_destroyWeak(param_1 + _DAT_1127323fc);
  _objc_destroyWeak(param_1 + _DAT_1127323f8);
  _objc_destroyWeak(param_1 + _DAT_1127323f4);
  _objc_destroyWeak(param_1 + _DAT_1127323f0);
  _objc_destroyWeak(param_1 + _DAT_1127323ec);
  _objc_destroyWeak(param_1 + _DAT_1127323e8);
  _objc_destroyWeak(param_1 + _DAT_1127323e4);
  _objc_destroyWeak(param_1 + _DAT_1127323e0);
  _objc_destroyWeak(param_1 + _DAT_1127323dc);
  _objc_destroyWeak(param_1 + _DAT_1127323d8);
  _objc_destroyWeak(param_1 + _DAT_1127323d4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127323d0);
  return;
}



/* Entry: 105c0f918; end: 105c0fb5b;  */

void FUN_105c0f918(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar1 == 0 || lVar2 == 0) {
    puVar3 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_105c0fb5c(lVar1,lVar2);
    func_0x00010c0df840(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(param_2);
    _objc_release(puVar3);
    _objc_initWeak(auStack_68,lVar2);
    puVar4 = PTR_PTR_1126b2500;
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_70,auStack_68);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar5);
    _objc_retain(param_2);
    func_0x00010c0e0700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(PTR___dispatch_main_q_11034be20);
    puVar3 = PTR_PTR_1126b0418;
    _objc_retain(puVar4);
    func_0x00010bf54280(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar4);
    _objc_release(param_2);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105c0fb5c; end: 105c0fccb;  */

undefined * FUN_105c0fb5c(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126bc7e0;
  func_0x00010bfa5a80(PTR_PTR_1126bc7e0,param_2,param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 == (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = (undefined *)0x0;
    lVar9 = *plStack_120;
    do {
      puVar10 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(puVar1);
        }
        puVar4 = PTR_PTR_1126c3198;
        uVar8 = *(undefined8 *)(lStack_128 + (long)puVar10 * 8);
        uVar3 = uVar8;
        func_0x00010c0f6420();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1356e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0df3e0();
        puVar7 = puVar4 + (long)puVar7;
        _objc_release(uVar8);
        _objc_release(uVar3);
        puVar10 = puVar10 + 1;
      } while (puVar2 != puVar10);
      puVar2 = puVar1;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(param_2);
    _objc_retain(puVar6);
    puVar2 = puVar1 + 0x30;
    _objc_loadWeakRetained();
    if ((puVar2 != (undefined *)0x0) &&
       (puVar5 = (undefined1 *)puVar6, func_0x00010bf4b900(), (int)puVar5 != 0)) {
      uVar3 = *(undefined8 *)(puVar1 + 0x20);
      uVar8 = *(undefined8 *)(puVar1 + 0x28);
      _objc_retain(uVar8);
      _objc_retain(param_2);
      _objc_retain(puVar2);
      func_0x00010c0f7fc0(uVar3);
      _objc_release(puVar2);
      _objc_release(param_2);
      _objc_release(uVar8);
    }
    _objc_release(puVar2);
    _objc_release(puVar6);
    _objc_release(param_2);
    return param_2;
  }
  return puVar7;
}



/* Entry: 105c0fccc; end: 105c0fdcf;  */

void FUN_105c0fccc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar2 != 0) && (uVar3 = param_3, func_0x00010bf4b900(), (int)uVar3 != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar1);
    _objc_retain(param_2);
    _objc_retain(lVar2);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(lVar2);
    _objc_release(param_2);
    _objc_release(uVar1);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105c0fdd0; end: 105c0fe27;  */

void FUN_105c0fdd0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_105c0fb5c(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  func_0x00010c0df840(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105c0fe28; end: 105c0fe2f;  */

void FUN_105c0fe28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c281a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_unobserve_11267e0c0);
  return;
}



/* Entry: 105c0fe30; end: 105c0ff63; -[SCMemoriesSettingsV2ContainerViewController initWithContext:runtime:deckServices:valdiRuntimeProvider:webBrowsingScopeExposer:uiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105c0fe30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ec5c8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bde4f60(puVar1);
    puVar2 = PTR_PTR_1126c3240;
    _objc_alloc();
    func_0x00010c061d40();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112732454);
    *(undefined **)((long)puVar1 + (long)_DAT_112732454) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105c0ff64; end: 105c101ab; -[SCMemoriesSettingsV2ContainerViewController _configureContext:deckServices:valdiRuntimeProvider:webBrowsingScopeExposer:uiContainer:] */

void FUN_105c0ff64(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_6);
  lVar1 = param_4;
  func_0x00010bf66980();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf66920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    lVar1 = param_4;
    func_0x00010bf66980();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf66920();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf55bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar4 != 0) {
      lVar1 = lVar4;
      func_0x00010bf553a0(lVar4,param_2,param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf668c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18a1e0(param_3,param_2,lVar2);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    _objc_release(lVar4);
  }
  puVar5 = PTR_PTR_1126ae630;
  func_0x00010bfe6000(PTR_PTR_1126ae630);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c2b9b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126afe88;
  _objc_alloc(PTR_PTR_1126afe88);
  lVar1 = param_4;
  func_0x00010bf66980(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf44a60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c062da0(puVar5,param_2,param_6,puVar6,param_7,lVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  func_0x00010c224e20(param_3,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(puVar6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c101ac; end: 105c101bb; -[SCMemoriesSettingsV2ContainerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c101ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + _DAT_112732454));
  return;
}



/* Entry: 105c101bc; end: 105c1021f; -[SCMemoriesSettingsV2ContainerViewController viewDidLoad] */

void FUN_105c101bc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ec5c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cb760();
  _objc_release(param_1);
  return;
}



/* Entry: 105c10220; end: 105c102a3; -[SCMemoriesSettingsV2ContainerViewController viewWillAppear:] */

void FUN_105c10220(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ec5c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewWillAppear__1126853f0);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c068d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return;
}



/* Entry: 105c102a4; end: 105c10303; -[SCMemoriesSettingsV2ContainerViewController gestureRecognizerShouldBegin:] */

bool FUN_105c102a4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29c580();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return 1 < uVar2;
}



/* Entry: 105c10304; end: 105c10317; -[SCMemoriesSettingsV2ContainerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c10304(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112732454,0);
  return;
}



/* Entry: 105c10318; end: 105c10413;  */

void FUN_105c10318(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  uVar1 = param_2;
  func_0x00010c2954a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20c120(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c295480(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar1;
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20c100(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c1c1b40(param_1);
  func_0x00010c1d5080(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c10414; end: 105c10b63; -[SCGallerySettingStorageUsageTableViewCell initWithReuseIdentifier:uiContainer:memoriesExperimentService:memoriesMonetizationServices:plusSubscriptionInfoProvider:runtime:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105c10414(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5,
             ulong param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined4 uVar29;
  undefined8 uVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_a8 = PTR_PTR_1126ec5d0;
  puVar2 = &uStack_b0;
  uStack_b0 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithStyle_reuseIdentifier__1125f1528,1,param_3);
  if (puVar2 == (undefined8 *)0x0) goto LAB_105c10a84;
  lVar31 = (long)_DAT_112732458;
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar31);
  *(undefined8 *)((long)puVar2 + lVar31) = param_4;
  _objc_release(uVar3);
  lVar31 = (long)_DAT_11273245c;
  _objc_retain(param_5);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar31);
  *(ulong *)((long)puVar2 + lVar31) = param_5;
  _objc_release(uVar3);
  lVar33 = (long)_DAT_112732460;
  _objc_retain(param_6);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar33);
  *(ulong *)((long)puVar2 + lVar33) = param_6;
  _objc_release(uVar3);
  uVar3 = param_7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = (long)_DAT_112732464;
  uVar30 = *(undefined8 *)((long)puVar2 + lVar31);
  *(undefined8 *)((long)puVar2 + lVar31) = uVar3;
  _objc_release(uVar30);
  lVar32 = (long)_DAT_112732468;
  _objc_retain(param_8);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar32);
  *(undefined8 *)((long)puVar2 + lVar32) = param_8;
  _objc_release(uVar3);
  _objc_storeWeak((long)puVar2 + (long)_DAT_11273246c,param_9);
  uVar4 = param_6;
  func_0x00010c2572e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010c08b180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar4);
  uVar6 = *(ulong *)((long)puVar2 + lVar31);
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x000106c78cc0();
  if ((uVar4 & 1) == 0) {
    _objc_release(uVar6);
LAB_105c10644:
    if (uVar5 == 0) {
      uVar29 = 7;
    }
    else {
      uVar4 = uVar5;
      func_0x00010c079740();
      if ((uVar4 & 1) == 0) {
        uVar4 = uVar5;
        func_0x00010c1292c0();
        uVar6 = param_5;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c0c8fa0();
        uVar29 = 7;
        if (uVar4 < uVar7) {
          uVar29 = 8;
        }
        _objc_release(uVar6);
      }
      else {
        uVar29 = 9;
      }
    }
  }
  else {
    uVar7 = *(ulong *)((long)puVar2 + lVar31);
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar7;
    func_0x00010c080180();
    _objc_release(uVar7);
    _objc_release(uVar6);
    if ((uVar4 & 1) == 0) goto LAB_105c10644;
    uVar29 = 6;
  }
  *(undefined4 *)((long)puVar2 + (long)_DAT_112732470) = uVar29;
  _objc_initWeak(auStack_b8,puVar2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_105c10b64;
  puStack_c8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_c0,auStack_b8);
  ppuVar8 = &puStack_e0;
  _objc_retainBlock();
  puVar9 = PTR_PTR_1126c3248;
  _objc_alloc();
  func_0x00010c055e40();
  puVar10 = PTR_PTR_1126c3250;
  _objc_alloc_init();
  uVar30 = *(undefined8 *)((long)puVar2 + lVar33);
  func_0x00010c2954a0(uVar30);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar30;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20c120(puVar10);
  _objc_release(uVar3);
  _objc_release(uVar30);
  puStack_108 = puVar1;
  uStack_100 = 0xc2000000;
  uStack_f8 = 0x105c10bb0;
  puStack_f0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_e8,auStack_b8);
  func_0x00010c1d5080(puVar10);
  _objc_copyWeak(auStack_110,auStack_b8);
  func_0x00010c1d5120(puVar10);
  puVar11 = PTR_PTR_1126c3258;
  _objc_alloc();
  func_0x00010c061d40();
  func_0x00010c219b60();
  puVar12 = puVar2;
  func_0x00010bf4dce0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar12);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar13 = puVar11;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar2;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar12;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar11;
  puStack_a0 = puVar15;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar2;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar17;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar16;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar11;
  puStack_98 = puVar19;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar2;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar21;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar11;
  puStack_90 = puVar23;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar2;
  func_0x00010bf4dce0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar25;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar24;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar27;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar12);
  _objc_release(puVar13);
  _objc_release(puVar11);
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_e8);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(ppuVar8);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_b8);
  _objc_release(uVar5);
LAB_105c10a84:
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_e8);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_b8);
  __Unwind_Resume();
  puVar2 = (undefined8 *)(param_3 + 0x20);
  _objc_loadWeakRetained();
  if (puVar2 != (undefined8 *)0x0) {
    lVar31 = (long)puVar2 + (long)_DAT_11273246c;
    _objc_loadWeakRetained(lVar31);
    func_0x00010c257380();
    _objc_release(lVar31);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return puVar2;
}



/* Entry: 105c10b64; end: 105c10c47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c10b64(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_11273246c;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c257380();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c10c48; end: 105c10c7b; -[SCGallerySettingStorageUsageTableViewCell height] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105c10c48(long param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + _DAT_112732470) - 6;
  if (uVar1 < 4) {
    return *(undefined8 *)(&UNK_10ddcb3b8 + (ulong)uVar1 * 8);
  }
  return 0x4054000000000000;
}



/* Entry: 105c10c7c; end: 105c10cf7; -[SCGallerySettingStorageUsageTableViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c10c7c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273246c);
  _objc_storeStrong(param_1 + _DAT_112732464,0);
  _objc_storeStrong(param_1 + _DAT_112732468,0);
  _objc_storeStrong(param_1 + _DAT_112732458,0);
  _objc_storeStrong(param_1 + _DAT_112732460,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273245c,0);
  return;
}



/* Entry: 105c10cf8; end: 105c10d6b; -[SCGalleryImportCameraRollAssetItem initWithCircumstanceEngine:] */

undefined1 * FUN_105c10cf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ec5d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105c10d6c; end: 105c10ea7; +[SCGalleryImportCameraRollAssetItem estimateSizeInBytesForAsset:] */

ulong FUN_105c10d6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_4);
  uVar4 = param_4;
  func_0x00010c0c6c20();
  puVar1 = PTR_PTR_1126bc3f0;
  if (uVar4 == 2) {
    _objc_retain(param_4);
    _objc_opt_new(puVar1);
    uVar4 = param_4;
    func_0x00010c0fce40(param_4);
    uVar2 = param_4;
    func_0x00010c0fcaa0(param_4);
    func_0x00010bf8b160(param_4);
    puVar3 = puVar1;
    func_0x00010bf134e0((double)uVar4,(double)uVar2,param_1,0,0x3ff0000000000000,puVar1,param_3,0,1,
                        0,0,0,0,0);
    _objc_release(puVar1);
    dVar5 = (double)(long)puVar3;
    dVar6 = dVar5 * 1.2;
    func_0x00010bf8b160(param_4);
    _objc_release(param_4);
    uVar4 = (ulong)(dVar6 * dVar5 * 0.125);
  }
  else if (uVar4 == 1) {
    uVar4 = param_4;
    FUN_105c10f08(param_4);
  }
  else {
    uVar4 = 0;
  }
  _objc_release(param_4);
  _objc_release(param_4);
  return uVar4;
}



/* Entry: 105c10ea8; end: 105c10f07; -[SCGalleryImportCameraRollAssetItem isEligibleForImport] */

uint FUN_105c10ea8(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010c0c6c20();
  if (lVar2 == 2) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x000107f70018(uVar3,*(undefined8 *)(param_1 + 8));
    uVar1 = (uint)uVar3 ^ 1;
  }
  else if (lVar2 == 1) {
    lVar2 = *(long *)(param_1 + 0x18);
    FUN_105c10f08(lVar2);
    uVar1 = (uint)(lVar2 < 0xa00001);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 105c10f08; end: 105c1101b;  */

long FUN_105c10f08(undefined8 param_1,undefined8 param_2,double param_3,double param_4,ulong param_5
                  )

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  _objc_retain();
  func_0x00010c0b6c20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  func_0x00010c14e120(puVar1);
  func_0x00010b690ad8(param_3,param_4,param_1);
  uVar2 = param_5;
  func_0x00010c0fce40();
  uVar3 = param_5;
  func_0x00010c0fcaa0();
  _objc_release(param_5);
  if ((double)uVar3 < (double)uVar2) {
    func_0x00010b690bf4(param_3,param_4);
  }
  if (uVar2 == 0) {
    dVar4 = 0.0;
  }
  else if (uVar3 == 0) {
    dVar4 = INFINITY;
  }
  else {
    dVar4 = (double)uVar2 / (double)uVar3;
  }
  func_0x00010b690934(param_3,param_4,dVar4);
  func_0x00010b690acc();
  _objc_release(puVar1);
  return (long)(param_4 * param_3 * 0.14);
}



/* Entry: 105c1101c; end: 105c11023; -[SCGalleryImportCameraRollAssetItem asset] */

undefined8 FUN_105c1101c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105c11024; end: 105c11053; -[SCGalleryImportCameraRollAssetItem setAsset:] */

void FUN_105c11024(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c11054; end: 105c1105b; -[SCGalleryImportCameraRollAssetItem estimatedSizeInBytes] */

undefined8 FUN_105c11054(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105c1105c; end: 105c11063; -[SCGalleryImportCameraRollAssetItem setEstimatedSizeInBytes:] */

void FUN_105c1105c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 105c11064; end: 105c1106b; -[SCGalleryImportCameraRollAssetItem ineligible] */

undefined1 FUN_105c11064(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 105c1106c; end: 105c11073; -[SCGalleryImportCameraRollAssetItem setIneligible:] */

void FUN_105c1106c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 105c11074; end: 105c1107b; -[SCGalleryImportCameraRollAssetItem ineligibleReason] */

undefined8 FUN_105c11074(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105c1107c; end: 105c11083; -[SCGalleryImportCameraRollAssetItem setIneligibleReason:] */

void FUN_105c1107c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 105c11084; end: 105c110b3; -[SCGalleryImportCameraRollAssetItem .cxx_destruct] */

void FUN_105c11084(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c110b4; end: 105c111ff; -[SCGalleryImportCameraRollAssetItemsFetcher initWithProfile:dataObjectContext:photoPermissionCoordinator:coreConfigProvider:grapheneRegistry:applicationLifecycleEvents:circumstanceEngine:fetchLimit:] */

undefined1 *
FUN_105c110b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  puStack_58 = PTR_PTR_1126ec5e0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b2670;
    _objc_alloc();
    func_0x00010c035d40();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105c11200; end: 105c113a3; -[SCGalleryImportCameraRollAssetItemsFetcher fetchAssetItemsWithCompletion:] */

void FUN_105c11200(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  if ((param_3 != 0) && ((*(byte *)(param_1 + 0x28) & 1) == 0)) {
    puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x00010bf10fa0();
    if (puVar1 == (undefined *)0x3) {
      *(undefined1 *)(param_1 + 0x28) = 1;
      _objc_initWeak(auStack_70,param_1);
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      puVar1 = PTR_PTR_1126b2688;
      func_0x00010c0c9180(PTR_PTR_1126b2688);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_78,auStack_70);
      _objc_retain(param_3);
      func_0x00010bfab780(uVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_78);
      _objc_destroyWeak(auStack_70);
    }
    else {
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_105c113a4;
      puStack_50 = &UNK_110849530;
      _objc_retain(param_3);
      lStack_48 = param_3;
      func_0x000100162d98("APPSTORE",&puStack_68);
      _objc_release(lStack_48);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105c113a4; end: 105c113b3;  */

void FUN_105c113a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105c113b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105c113b4; end: 105c1140f;  */

void FUN_105c113b4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bde2c60(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c11410; end: 105c114e3; -[SCGalleryImportCameraRollAssetItemsFetcher _completeFetchWithAssets:completion:] */

void FUN_105c11410(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105c114e4;
  puStack_50 = &UNK_11084a9e8;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010007380c(uVar1,&puStack_68);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c114e4; end: 105c1189b;  */

void FUN_105c114e4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_78;
  
  puVar3 = PTR_PTR_1126af4d0;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa75a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010bf529e0(puVar3);
  func_0x00010c225ec0();
  _objc_retainAutoreleasedReturnValue();
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  _objc_retain(puVar3);
  puVar5 = puVar3;
  func_0x00010bf52a60();
  if (puVar5 != (undefined *)0x0) {
    lVar7 = *plStack_1b0;
    do {
      puVar8 = (undefined *)0x0;
      do {
        if (*plStack_1b0 != lVar7) {
          _objc_enumerationMutation(puVar3);
        }
        uVar1 = *(undefined8 *)(lStack_1b8 + (long)puVar8 * 8);
        func_0x00010bf2a8a0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14c720(puVar4);
        _objc_release(uVar1);
        puVar8 = puVar8 + 1;
      } while (puVar5 != puVar8);
      puVar5 = puVar3;
      func_0x00010bf52a60();
    } while (puVar5 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  plStack_1f0 = (long *)0x0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  lVar10 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar10);
  lVar7 = lVar10;
  func_0x00010bf52a60();
  if (lVar7 != 0) {
    lVar11 = *plStack_1f0;
    do {
      lVar9 = 0;
      do {
        if (*plStack_1f0 != lVar11) {
          _objc_enumerationMutation(lVar10);
        }
        uVar1 = *(undefined8 *)(lStack_1f8 + lVar9 * 8);
        puVar8 = PTR_PTR_1126c3260;
        _objc_alloc();
        func_0x00010bffe1e0();
        func_0x00010c16a7a0();
        func_0x00010bf99660(PTR_PTR_1126c3260);
        func_0x00010c197520(puVar8);
        func_0x00010c09da80(uVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar4;
        func_0x00010bf4b900();
        _objc_release(uVar1);
        if ((((ulong)puVar6 & 1) != 0) ||
           (puVar6 = puVar8, func_0x00010c0714c0(), ((ulong)puVar6 & 1) == 0)) {
          func_0x00010c1ac1c0(puVar8);
          func_0x00010c1ac200(puVar8);
        }
        func_0x00010befa120(puVar5);
        _objc_release(puVar8);
        lVar9 = lVar9 + 1;
      } while (lVar7 != lVar9);
      lVar7 = lVar10;
      func_0x00010bf52a60();
    } while (lVar7 != 0);
  }
  _objc_release(lVar10);
  puStack_238 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_230 = 0xc2000000;
  pcStack_228 = FUN_105c1189c;
  puStack_220 = &UNK_11084a9e8;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  uStack_210 = *(undefined8 *)(param_1 + 0x20);
  puStack_218 = puVar5;
  uStack_208 = uVar1;
  _objc_retain(puVar5);
  func_0x000100162d98("APPSTORE",&puStack_238);
  _objc_release(puStack_218);
  _objc_release(uStack_208);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    lVar7 = *(long *)(puVar3 + 0x30);
    uVar1 = *(undefined8 *)(puVar3 + 0x20);
    func_0x00010bf51e00(uVar1);
    (**(code **)(lVar7 + 0x10))(lVar7,uVar1);
    _objc_release(uVar1);
    *(undefined1 *)(*(long *)(puVar3 + 0x28) + 0x28) = 0;
    return;
  }
  return;
}



/* Entry: 105c1189c; end: 105c118ef;  */

void FUN_105c1189c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf51e00(uVar1);
  (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
  _objc_release(uVar1);
  *(undefined1 *)(*(long *)(param_1 + 0x28) + 0x28) = 0;
  return;
}



/* Entry: 105c118f0; end: 105c118f7; -[SCGalleryImportCameraRollAssetItemsFetcher fetching] */

undefined1 FUN_105c118f0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}



/* Entry: 105c118f8; end: 105c1193f; -[SCGalleryImportCameraRollAssetItemsFetcher .cxx_destruct] */

void FUN_105c118f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c11940; end: 105c11b43; -[SCGalleryImportCameraRollAssetItemsImporter initWithAssetItems:resultingSnapSource:resultingEntryIsPrivate:videoImporter:previewURLVideoProvider:addSnapMutator:memoriesSaveManager:memoriesExperimentService:progressBlock:completionBlock:] */

undefined8 *
FUN_105c11940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126ec5e8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x11];
    puVar1[0x11] = uVar4;
    _objc_release(uVar3);
    puVar1[1] = param_4;
    *(undefined1 *)(puVar1 + 2) = param_5;
    uVar4 = param_11;
    _objc_retainBlock();
    uVar3 = puVar1[3];
    puVar1[3] = uVar4;
    _objc_release(uVar3);
    uVar4 = param_12;
    _objc_retainBlock();
    uVar3 = puVar1[4];
    puVar1[4] = uVar4;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
    func_0x00010bfed2e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[9];
    puVar1[9] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
    func_0x00010bfed2e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[10];
    puVar1[10] = puVar2;
    _objc_release(uVar4);
    _objc_retain(param_6);
    uVar4 = puVar1[0xb];
    puVar1[0xb] = param_6;
    _objc_release(uVar4);
    _objc_retain(param_7);
    uVar4 = puVar1[0xc];
    puVar1[0xc] = param_7;
    _objc_release(uVar4);
    _objc_retain(param_8);
    uVar4 = puVar1[0xd];
    puVar1[0xd] = param_8;
    _objc_release(uVar4);
    _objc_retain(param_9);
    uVar4 = puVar1[0xe];
    puVar1[0xe] = param_9;
    _objc_release(uVar4);
    _objc_retain(param_10);
    uVar4 = puVar1[0xf];
    puVar1[0xf] = param_10;
    _objc_release(uVar4);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105c11b44; end: 105c11c77; -[SCGalleryImportCameraRollAssetItemsImporter import] */

void FUN_105c11b44(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
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
  if ((*(byte *)(param_1 + 0x80) & 1) == 0) {
    plVar4 = (long *)(param_1 + 0x28);
    *plVar4 = 0;
    *(undefined1 *)(param_1 + 0x80) = 1;
    *(undefined8 *)(param_1 + 0x30) = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lVar3 = *(long *)(param_1 + 0x88);
    _objc_retain(lVar3);
    lVar1 = lVar3;
    func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
    if (lVar1 != 0) {
      lVar5 = *plStack_110;
      do {
        lVar6 = 0;
        do {
          if (*plStack_110 != lVar5) {
            _objc_enumerationMutation(lVar3);
          }
          lVar2 = *(long *)(lStack_118 + lVar6 * 8);
          func_0x00010bf99840();
          *plVar4 = *plVar4 + lVar2;
          lVar6 = lVar6 + 1;
        } while (lVar1 != lVar6);
        lVar1 = lVar3;
        func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
      } while (lVar1 != 0);
    }
    _objc_release(lVar3);
    *(undefined8 *)(param_1 + 0x38) = 0xffffffffffffffff;
    func_0x00010bdc9740();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if (*(char *)(param_1 + 0x80) == '\x01') {
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  return;
}


