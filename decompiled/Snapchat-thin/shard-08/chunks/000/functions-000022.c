/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105c050a0; end: 105c0510f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c050a0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c0720c0();
    if (iVar1 != 0) {
      func_0x00010c1a9f00(*(undefined8 *)(param_1 + 0x28));
    }
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c05110; end: 105c0520f; -[SCGalleryBackupViewController _attachStoryBackgroundViewForOperation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c05110(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127321a8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07b280();
  if ((int)uVar2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112732158);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c07b300(param_3,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      func_0x00010bdd05a0(param_1);
      goto LAB_105c051f8;
    }
  }
  else {
    _objc_release(uVar1);
  }
  uVar2 = param_3;
  func_0x00010c2424c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf6f620(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd03a0(param_1,param_2,uVar2,uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
LAB_105c051f8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c05210; end: 105c0527b; -[SCGalleryBackupViewController _dismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c05210(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273214c);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c7ea0();
  _objc_release(uVar1);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a00();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c0527c; end: 105c0527f; -[SCGalleryBackupViewController leftButtonPressed] */

void FUN_105c0527c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be02270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismiss_11255e238);
  return;
}



/* Entry: 105c05280; end: 105c05283; -[SCGalleryBackupViewController dialogDidDismiss:] */

void FUN_105c05280(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be02270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismiss_11255e238);
  return;
}



/* Entry: 105c05284; end: 105c052c7; -[SCGalleryBackupViewController backgroundColorForHeader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c05284(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_1127321fc) & 1) == 0) {
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf3ae40();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c052c8; end: 105c052f7; -[SCGalleryBackupViewController titleForHeader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c052c8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112732224);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105c052f8; end: 105c0533f; -[SCGalleryBackupViewController textColorForHeader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c052f8(long param_1,undefined8 param_2)

{
  if ((*(byte *)(param_1 + _DAT_1127321fc) & 1) == 0) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x90);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c2a4b20();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c05340; end: 105c0534f; -[SCGalleryBackupViewController fontForHeader:] */

void FUN_105c05340(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c7350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4035000000000000,PTR__OBJC_CLASS___UIFont_1126aec38,
             PTR_s_mediumAvenirNextFontOfSize__11260f6e8);
  return;
}



/* Entry: 105c05350; end: 105c053bf; -[SCGalleryBackupViewController imageForLeftButtonInState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c05350(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  
  if (*(char *)(param_1 + _DAT_1127321fc) == '\x01') {
    if (param_3 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e22318;
    }
    else {
      if (param_3 != 1) goto _objc_autoreleaseReturnValue;
      ppuVar1 = &PTR____CFConstantStringClassReference_110e22338;
    }
  }
  else {
    if (param_3 != 0) goto _objc_autoreleaseReturnValue;
    ppuVar1 = &PTR____CFConstantStringClassReference_110e22358;
  }
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c053c0; end: 105c053c7; -[SCGalleryBackupViewController imageForRightButtonInState:] */

undefined8 FUN_105c053c0(void)

{
  return 0;
}



/* Entry: 105c053c8; end: 105c0543b; -[SCGalleryBackupViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c053c8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c281a60(*(undefined8 *)(param_1 + _DAT_1127321ec));
  func_0x00010c281a60(*(undefined8 *)(param_1 + _DAT_1127321f0));
  func_0x00010bddfa40(param_1);
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + _DAT_112732238));
  puStack_28 = PTR_PTR_1126ec590;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105c0543c; end: 105c05447; -[SCGalleryBackupViewController defaultProjectNameV3] */

void FUN_105c0543c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c7a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_memories_11260f8a8);
  return;
}



/* Entry: 105c05448; end: 105c05453; -[SCGalleryBackupViewController defaultProjectNameV2] */

void FUN_105c05448(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c7a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_memories_11260f8a8);
  return;
}



/* Entry: 105c05454; end: 105c0577f; -[SCGalleryBackupViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c05454(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127321c4,0);
  _objc_storeStrong(param_1 + _DAT_1127321c0,0);
  _objc_storeStrong(param_1 + _DAT_1127321b8,0);
  _objc_storeStrong(param_1 + _DAT_1127321b4,0);
  _objc_storeStrong(param_1 + _DAT_1127321b0,0);
  _objc_storeStrong(param_1 + _DAT_1127321ac,0);
  _objc_storeStrong(param_1 + _DAT_1127321a8,0);
  _objc_storeStrong(param_1 + _DAT_1127321a4,0);
  _objc_storeStrong(param_1 + _DAT_11273219c,0);
  _objc_destroyWeak(param_1 + _DAT_112732198);
  _objc_storeStrong(param_1 + _DAT_1127321bc,0);
  _objc_storeStrong(param_1 + _DAT_11273214c,0);
  _objc_storeStrong(param_1 + _DAT_112732194,0);
  _objc_storeStrong(param_1 + _DAT_112732190,0);
  _objc_storeStrong(param_1 + _DAT_11273222c,0);
  _objc_storeStrong(param_1 + _DAT_112732184,0);
  _objc_storeStrong(param_1 + _DAT_112732180,0);
  _objc_storeStrong(param_1 + _DAT_11273218c,0);
  _objc_storeStrong(param_1 + _DAT_112732188,0);
  _objc_storeStrong(param_1 + _DAT_11273217c,0);
  _objc_storeStrong(param_1 + _DAT_112732178,0);
  _objc_storeStrong(param_1 + _DAT_112732174,0);
  _objc_storeStrong(param_1 + _DAT_112732170,0);
  _objc_storeStrong(param_1 + _DAT_11273216c,0);
  _objc_storeStrong(param_1 + _DAT_112732168,0);
  _objc_storeStrong(param_1 + _DAT_1127321a0,0);
  _objc_storeStrong(param_1 + _DAT_112732164,0);
  _objc_storeStrong(param_1 + _DAT_112732158,0);
  _objc_storeStrong(param_1 + _DAT_112732154,0);
  _objc_storeStrong(param_1 + _DAT_112732150,0);
  _objc_storeStrong(param_1 + _DAT_112732238,0);
  _objc_storeStrong(param_1 + _DAT_112732220,0);
  _objc_storeStrong(param_1 + _DAT_11273221c,0);
  _objc_storeStrong(param_1 + _DAT_112732218,0);
  _objc_storeStrong(param_1 + _DAT_112732234,0);
  _objc_storeStrong(param_1 + _DAT_112732210,0);
  _objc_storeStrong(param_1 + _DAT_112732228,0);
  _objc_storeStrong(param_1 + _DAT_112732230,0);
  _objc_storeStrong(param_1 + _DAT_1127321c8,0);
  _objc_storeStrong(param_1 + _DAT_1127321e0,0);
  _objc_storeStrong(param_1 + _DAT_1127321f0,0);
  _objc_storeStrong(param_1 + _DAT_1127321ec,0);
  _objc_storeStrong(param_1 + _DAT_1127321cc,0);
  _objc_storeStrong(param_1 + _DAT_1127321d4,0);
  _objc_storeStrong(param_1 + _DAT_1127321d0,0);
  _objc_storeStrong(param_1 + _DAT_1127321d8,0);
  _objc_storeStrong(param_1 + _DAT_1127321dc,0);
  _objc_storeStrong(param_1 + _DAT_112732224,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112732200,0);
  return;
}



/* Entry: 105c05780; end: 105c057cf; -[SCGalleryEntryFailedViewCell initWithFrame:] */

undefined1 * FUN_105c05780(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ec598;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_105c057d0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105c057d0; end: 105c05c67;  */

undefined * FUN_105c057d0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60();
  _objc_release(puVar2);
  func_0x00010befbb60(param_1);
  func_0x00010c219b60(puVar1);
  puStack_c8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar2 = puVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  puStack_b0 = puVar2;
  uStack_a0 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  uStack_a8 = uVar3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uStack_b8 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  puStack_c0 = puVar2;
  puStack_88 = puVar2;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  puStack_80 = puVar2;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf49420(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  puStack_78 = puVar6;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf49420(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_c8);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puStack_c0);
  _objc_release(uStack_b8);
  _objc_release(uStack_a8);
  _objc_release(puStack_b0);
  puVar4 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  ppuVar10 = &PTR____CFConstantStringClassReference_110e22398;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e22398,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar4);
  _objc_release(ppuVar10);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4024000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar4);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar4);
  _objc_release(puVar2);
  func_0x00010c213040(puVar4);
  func_0x00010c23d620(puVar4);
  func_0x00010befbb60(uStack_a0);
  func_0x00010c219b60(puVar4);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar5 = puVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010bf34860(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar4;
  puStack_98 = puVar7;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  func_0x00010bf1ff80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar8;
  func_0x00010bf493c0(0x4000000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_90 = puVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  uVar3 = uStack_a0;
  uVar13 = uStack_a0;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010c1677c0(0x3fe0000000000000,uVar13);
  _objc_release(uVar13);
  _objc_release(puVar4);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar2;
  }
  ___stack_chk_fail();
  ppuVar10 = &puStack_100;
  pcStack_d8 = FUN_105c05c68;
  puStack_f8 = PTR_PTR_1126ec5a0;
  puStack_100 = puVar2;
  puStack_f0 = puVar1;
  uStack_e8 = uVar13;
  puStack_e0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_100,PTR_s_initWithFrame__1125e2948);
  if (ppuVar10 != (undefined **)0x0) {
    FUN_105c057d0(ppuVar10);
  }
  return (undefined *)ppuVar10;
}



/* Entry: 105c05c68; end: 105c05cb7; -[SCGalleryLagunaStoryFailedViewCell initWithFrame:] */

undefined1 * FUN_105c05c68(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ec5a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_105c057d0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105c05cb8; end: 105c06473; -[SCMemoriesBackupUIEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c05cb8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
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
  undefined8 uStack_190;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  
  if (param_1 == 0) {
    lVar48 = 0;
  }
  else {
    lVar48 = param_1 + _DAT_112732260;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar48;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar48);
  puVar2 = PTR_PTR_1126c31c0;
  _objc_alloc();
  lVar48 = param_1;
  FUN_105c06474();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x000105c06498();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0c94e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x000105c06498();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar30 = 0;
  }
  else {
    lVar30 = param_1 + _DAT_11273225c;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar30;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uStack_98 = 0;
    lVar31 = 0;
  }
  else {
    uStack_98 = param_1 + _DAT_112732264;
    _objc_loadWeakRetained();
    lVar31 = param_1 + _DAT_112732268;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar31;
  func_0x00010bef1320();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar32 = 0;
  }
  else {
    lVar32 = param_1 + _DAT_11273226c;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar32;
  func_0x00010bf69900();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uStack_a8 = 0;
    lVar33 = 0;
  }
  else {
    uStack_a8 = param_1 + _DAT_112732270;
    _objc_loadWeakRetained();
    lVar33 = param_1 + _DAT_112732274;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar33;
  func_0x00010c243b20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar34 = 0;
  }
  else {
    lVar34 = param_1 + _DAT_112732278;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar34;
  func_0x00010c26a1c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar35 = 0;
  }
  else {
    lVar35 = param_1 + _DAT_11273227c;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar35;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x000105c064bc();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010bfe8e40();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x000105c064bc();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010bfe8ea0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar36 = 0;
  }
  else {
    lVar36 = param_1 + _DAT_112732244;
    _objc_loadWeakRetained();
  }
  lVar17 = lVar36;
  func_0x00010bf145c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar37 = 0;
  }
  else {
    lVar37 = param_1 + _DAT_112732284;
    _objc_loadWeakRetained();
  }
  lVar18 = lVar37;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar38 = 0;
  }
  else {
    lVar38 = param_1 + _DAT_112732250;
    _objc_loadWeakRetained();
  }
  lVar19 = lVar38;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uStack_190 = 0;
    lVar39 = 0;
  }
  else {
    uStack_190 = *(undefined8 *)(param_1 + _DAT_1127322bc);
    _objc_retain();
    lVar39 = param_1 + _DAT_11273228c;
    _objc_loadWeakRetained();
  }
  lVar20 = lVar39;
  func_0x00010bf27760();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar40 = 0;
  }
  else {
    lVar40 = param_1 + _DAT_11273229c;
    _objc_loadWeakRetained();
  }
  lVar21 = lVar40;
  func_0x00010bf3e340();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar41 = 0;
  }
  else {
    lVar41 = param_1 + _DAT_112732290;
    _objc_loadWeakRetained();
  }
  lVar22 = lVar41;
  func_0x00010c13f8a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar42 = 0;
  }
  else {
    lVar42 = param_1 + _DAT_112732294;
    _objc_loadWeakRetained();
  }
  lVar23 = lVar42;
  func_0x00010c0c84c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar43 = 0;
  }
  else {
    lVar43 = param_1 + _DAT_1127322a0;
    _objc_loadWeakRetained();
  }
  lVar24 = lVar43;
  func_0x00010c0c94c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar44 = 0;
  }
  else {
    lVar44 = param_1 + _DAT_1127322a4;
    _objc_loadWeakRetained();
  }
  lVar25 = lVar44;
  func_0x00010bf97800();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar45 = 0;
  }
  else {
    lVar45 = param_1 + _DAT_1127322a8;
    _objc_loadWeakRetained();
  }
  lVar26 = lVar45;
  func_0x00010c2666c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar46 = 0;
  }
  else {
    lVar46 = param_1 + _DAT_1127322ac;
    _objc_loadWeakRetained();
  }
  lVar27 = lVar46;
  func_0x00010c0c9f60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar49 = 0;
    lVar47 = 0;
  }
  else {
    lVar49 = param_1 + _DAT_1127322b0;
    _objc_loadWeakRetained();
    lVar47 = param_1 + _DAT_1127322b4;
    _objc_loadWeakRetained();
  }
  lVar28 = lVar47;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar50 = 0;
  }
  else {
    lVar50 = param_1 + _DAT_1127322b8;
    _objc_loadWeakRetained();
  }
  lVar29 = lVar50;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff6780(puVar2,param_2,lVar48,lVar1,lVar4,lVar6,lVar7,uStack_98,lVar8,lVar9,uStack_a8,
                      lVar10,lVar11,lVar12,lVar14,lVar16,lVar17,lVar18,lVar19,uStack_190,lVar20,
                      lVar21,lVar22,lVar23,lVar24,lVar25,lVar26,lVar27,lVar49,lVar28,lVar29);
  _objc_release(uStack_190);
  _objc_release(lVar29);
  _objc_release(lVar50);
  _objc_release(lVar28);
  _objc_release(lVar47);
  _objc_release(lVar49);
  _objc_release(lVar27);
  _objc_release(lVar46);
  _objc_release(lVar26);
  _objc_release(lVar45);
  _objc_release(lVar25);
  _objc_release(lVar44);
  _objc_release(lVar24);
  _objc_release(lVar43);
  _objc_release(lVar23);
  _objc_release(lVar42);
  _objc_release(lVar22);
  _objc_release(lVar41);
  _objc_release(lVar21);
  _objc_release(lVar40);
  _objc_release(lVar20);
  _objc_release(lVar39);
  _objc_release(lVar19);
  _objc_release(lVar38);
  _objc_release(lVar18);
  _objc_release(lVar37);
  _objc_release(lVar17);
  _objc_release(lVar36);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar35);
  _objc_release(lVar11);
  _objc_release(lVar34);
  _objc_release(lVar10);
  _objc_release(lVar33);
  _objc_release(uStack_a8);
  _objc_release(lVar9);
  _objc_release(lVar32);
  _objc_release(lVar8);
  _objc_release(lVar31);
  _objc_release(uStack_98);
  _objc_release(lVar7);
  _objc_release(lVar30);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar48);
  FUN_105c06474(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar48 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar48);
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105c06474; end: 105c064df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c06474(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11273223c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c064e0; end: 105c0668f; -[SCMemoriesBackupUIEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c064e0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127322bc,0);
  _objc_destroyWeak(param_1 + _DAT_1127322b8);
  _objc_destroyWeak(param_1 + _DAT_1127322b4);
  _objc_destroyWeak(param_1 + _DAT_1127322b0);
  _objc_destroyWeak(param_1 + _DAT_1127322ac);
  _objc_destroyWeak(param_1 + _DAT_1127322a8);
  _objc_destroyWeak(param_1 + _DAT_1127322a4);
  _objc_destroyWeak(param_1 + _DAT_1127322a0);
  _objc_destroyWeak(param_1 + _DAT_11273229c);
  _objc_destroyWeak(param_1 + _DAT_112732298);
  _objc_destroyWeak(param_1 + _DAT_112732294);
  _objc_destroyWeak(param_1 + _DAT_112732290);
  _objc_destroyWeak(param_1 + _DAT_11273228c);
  _objc_destroyWeak(param_1 + _DAT_112732288);
  _objc_destroyWeak(param_1 + _DAT_112732284);
  _objc_destroyWeak(param_1 + _DAT_112732280);
  _objc_destroyWeak(param_1 + _DAT_11273227c);
  _objc_destroyWeak(param_1 + _DAT_112732278);
  _objc_destroyWeak(param_1 + _DAT_112732274);
  _objc_destroyWeak(param_1 + _DAT_112732270);
  _objc_destroyWeak(param_1 + _DAT_11273226c);
  _objc_destroyWeak(param_1 + _DAT_112732268);
  _objc_destroyWeak(param_1 + _DAT_112732264);
  _objc_destroyWeak(param_1 + _DAT_112732260);
  _objc_destroyWeak(param_1 + _DAT_11273225c);
  _objc_destroyWeak(param_1 + _DAT_112732258);
  _objc_destroyWeak(param_1 + _DAT_112732254);
  _objc_destroyWeak(param_1 + _DAT_112732250);
  _objc_destroyWeak(param_1 + _DAT_11273224c);
  _objc_destroyWeak(param_1 + _DAT_112732248);
  _objc_destroyWeak(param_1 + _DAT_112732244);
  _objc_destroyWeak(param_1 + _DAT_112732240);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273223c);
  return;
}



/* Entry: 105c06690; end: 105c06d8b; -[SCGallerySettingFaceTaggingTableViewCell initWithReuseIdentifier:uiContainer:memoriesExperimentService:runtime:navigationController:valdiRuntimeProvider:deckServices:webBrowsingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105c06690(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6,long param_7,long param_8,long param_9,
             long param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  long lVar28;
  long lVar29;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_a0 = PTR_PTR_1126ec5a8;
  puVar1 = &uStack_a8;
  uStack_a8 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithStyle_reuseIdentifier__1125f1528,1,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    lVar28 = (long)_DAT_1127322c0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar28);
    *(undefined8 **)((long)puVar1 + lVar28) = param_4;
    _objc_release(uVar2);
    lVar28 = (long)_DAT_1127322c4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar28);
    *(undefined8 *)((long)puVar1 + lVar28) = param_5;
    _objc_release(uVar2);
    lVar28 = (long)_DAT_1127322c8;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar28);
    *(undefined8 *)((long)puVar1 + lVar28) = param_6;
    _objc_release(uVar2);
    lVar28 = (long)_DAT_1127322cc;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar28);
    *(long *)((long)puVar1 + lVar28) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126afe50;
    _objc_alloc();
    func_0x00010c040b80();
    lVar29 = (long)_DAT_1127322d0;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar29);
    *(undefined **)((long)puVar1 + lVar29) = puVar3;
    _objc_release(uVar2);
    lVar4 = param_7;
    func_0x00010c275140();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010010fab4();
    lVar28 = lVar4;
    if ((int)lVar5 == 0) {
      lVar28 = 0;
    }
    _objc_retain(lVar28);
    _objc_release(lVar4);
    if (lVar28 != 0) {
      func_0x00010c1c1bc0(*(undefined8 *)((long)puVar1 + lVar29));
    }
    puVar3 = PTR_PTR_1126c31c8;
    _objc_alloc_init();
    func_0x00010c1cba60();
    if (param_9 != 0) {
      lVar4 = param_9;
      func_0x00010bf66980();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf66920();
      _objc_retainAutoreleasedReturnValue();
      lVar29 = lVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar5);
      _objc_release(lVar4);
      if ((lVar28 != 0) && (lVar29 != 0)) {
        lVar4 = param_9;
        func_0x00010bf66980();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bf66920();
        _objc_retainAutoreleasedReturnValue();
        lVar29 = lVar5;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar29;
        func_0x00010bf55bc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar29);
        _objc_release(lVar5);
        _objc_release(lVar4);
        if ((param_8 != 0) && (lVar6 != 0)) {
          lVar4 = lVar6;
          func_0x00010bf553a0(lVar6);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010bf668c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c18a1e0(puVar3);
          _objc_release(lVar5);
          _objc_release(lVar4);
        }
        _objc_release(lVar6);
      }
    }
    if (param_10 != 0) {
      puVar7 = PTR_PTR_1126ae630;
      func_0x00010bfe6000(PTR_PTR_1126ae630);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c2b9b80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      puVar7 = PTR_PTR_1126afe88;
      _objc_alloc(PTR_PTR_1126afe88);
      if (param_9 == 0) {
        func_0x00010c062da0(puVar7);
      }
      else {
        lVar4 = param_9;
        func_0x00010bf66980(param_9);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bf44a60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c062da0(puVar7);
        _objc_release(lVar5);
        _objc_release(lVar4);
      }
      func_0x00010c224e20(puVar3);
      _objc_release(puVar7);
      _objc_release(puVar8);
    }
    puVar8 = PTR_PTR_1126c31d0;
    _objc_alloc();
    func_0x00010c061d40();
    func_0x00010c219b60();
    puVar9 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar9);
    puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar10 = puVar8;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar8;
    puStack_98 = puVar12;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar8;
    puStack_90 = puVar16;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar18;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar17;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar8;
    puStack_88 = puVar20;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar22;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar21;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar8;
    puStack_80 = puVar24;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = puVar25;
    func_0x00010bf494e0(0x4054000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar27 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar26;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar7);
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
    _objc_release(puVar9);
    _objc_release(puVar10);
    _objc_release(puVar8);
    _objc_release(puVar3);
    _objc_release(lVar28);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar1;
  }
  ___stack_chk_fail();
  return param_4;
}



/* Entry: 105c06d8c; end: 105c06d97; -[SCGallerySettingFaceTaggingTableViewCell height] */

undefined8 FUN_105c06d8c(void)

{
  return 0x4054000000000000;
}



/* Entry: 105c06d98; end: 105c06e07; -[SCGallerySettingFaceTaggingTableViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c06d98(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127322d0,0);
  _objc_storeStrong(param_1 + _DAT_1127322cc,0);
  _objc_storeStrong(param_1 + _DAT_1127322c8,0);
  _objc_storeStrong(param_1 + _DAT_1127322c0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127322c4,0);
  return;
}



/* Entry: 105c06e08; end: 105c06e0f; -[SCGalleryMyStorySaveSettingsViewController pageViewName] */

undefined8 FUN_105c06e08(void)

{
  return 0x7e;
}



/* Entry: 105c06e10; end: 105c06ecb; -[SCGalleryMyStorySaveSettingsViewController initWithMemoriesAutosaveMigrator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105c06e10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ec5b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar4 = (long)_DAT_1127322d4;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bfbda60();
    *(char *)((long)puVar1 + (long)_DAT_1127322d8) = (char)uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105c06ecc; end: 105c072e7; -[SCGalleryMyStorySaveSettingsViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c06ecc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126ec5b0;
  lStack_80 = param_1;
  _objc_msgSendSuper2(&lStack_80,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
  uVar9 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar12 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar9,uVar10,uVar11,uVar12);
  func_0x00010c213040();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1);
  _objc_release(puVar3);
  ppuVar4 = &PTR____CFConstantStringClassReference_110e223b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e223b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1);
  _objc_release(ppuVar4);
  func_0x00010c1cfce0(puVar1);
  dVar7 = 12.0;
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1);
  _objc_release(puVar3);
  func_0x00010c1bdb00(puVar1);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar7 = dVar7 + -64.0;
  func_0x00010c1e0180(dVar7,puVar1);
  _objc_release(lVar2);
  func_0x00010c106d40(puVar1);
  dVar8 = 1.79769313486232e+308;
  func_0x00010c23d5a0(puVar1);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  func_0x00010c013de0(0,0,dVar7,dVar8 + 32.0);
  _objc_release(lVar2);
  func_0x00010befbb60(puVar3);
  puVar5 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_alloc();
  func_0x00010c014e80(uVar9,uVar10,uVar11,uVar12);
  lVar6 = (long)_DAT_1127322dc;
  uVar9 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar5;
  _objc_release(uVar9);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar6));
  _objc_release(puVar5);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c16e9a0(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c167740(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c1f7b20(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c1fce00(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),
                      *(undefined8 *)(param_1 + lVar6));
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcde0(*(undefined8 *)(param_1 + lVar6));
  _objc_release(puVar5);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar6));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_retain(puVar3);
  func_0x00010c0bbfc0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c211680(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c128b60(*(undefined8 *)(param_1 + lVar6));
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(puVar1);
  return;
}



/* Entry: 105c072e8; end: 105c0745f;  */

void FUN_105c072e8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(lVar5,uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfdef60(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010c0bbea0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105c07460; end: 105c0775f;  */

void FUN_105c07460(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4030000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfce1a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c098960();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))(0xc040000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105c07760; end: 105c0776f; -[SCGalleryMyStorySaveSettingsViewController getTitle] */

void FUN_105c07760(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e223d8;
  func_0x000107c312f0(&PTR____CFConstantStringClassReference_110e223d8,0);
  _objc_retainAutoreleasedReturnValue();
  if (lRam00000001137fe070 != -1) {
    func_0x000107c27d9c(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x00010bcbea50(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105c07770; end: 105c077cf; -[SCGalleryMyStorySaveSettingsViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c07770(long param_1,undefined8 param_2)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = (long)_DAT_1127322dc;
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar1),param_2,0);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar1));
  puStack_28 = PTR_PTR_1126ec5b0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105c077d0; end: 105c077db; -[SCGalleryMyStorySaveSettingsViewController supportedInterfaceOrientations] */

undefined8 FUN_105c077d0(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  iVar1 = 0;
  uVar5 = 2;
  _objc_retain();
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar2 = (undefined *)0x0;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c252de0();
        _objc_release(puVar3);
      }
      else {
        puVar2 = puVar4;
        func_0x00010c0690e0();
      }
      if (puVar2 + -1 < (undefined *)0x4) {
        uVar5 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar2 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(0);
  return uVar5;
}



/* Entry: 105c077dc; end: 105c07863; -[SCGalleryMyStorySaveSettingsViewController _greenMark] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c077dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_1127322e0;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar2 = puVar1;
    func_0x000108e04dec();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60(puVar1,param_2,puVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    _objc_release(puVar2);
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 105c07864; end: 105c078bb; -[SCGalleryMyStorySaveSettingsViewController _emptyMark] */

void FUN_105c07864(undefined8 param_1)

{
  undefined *puVar1;
  
  func_0x00010be24760();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010bfb68e0(param_1);
  func_0x00010c013de0(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105c078bc; end: 105c078c3; -[SCGalleryMyStorySaveSettingsViewController numberOfSectionsInTableView:] */

undefined8 FUN_105c078bc(void)

{
  return 1;
}



/* Entry: 105c078c4; end: 105c078cb; -[SCGalleryMyStorySaveSettingsViewController tableView:numberOfRowsInSection:] */

undefined8 FUN_105c078c4(void)

{
  return 2;
}



/* Entry: 105c078cc; end: 105c078d7; -[SCGalleryMyStorySaveSettingsViewController tableView:estimatedHeightForRowAtIndexPath:] */

undefined8 FUN_105c078cc(void)

{
  return 0x4044000000000000;
}



/* Entry: 105c078d8; end: 105c07bdb; -[SCGalleryMyStorySaveSettingsViewController tableView:cellForRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c078d8(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  _objc_retain(param_4);
  func_0x00010bf6e060();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == (undefined *)0x0) {
    param_3 = PTR__OBJC_CLASS___UITableViewCell_1126afcb8;
    _objc_alloc(PTR__OBJC_CLASS___UITableViewCell_1126afcb8);
    func_0x00010c04ec80();
    func_0x00010c1fbac0();
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
    func_0x00010c26c280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
    func_0x00010c26c280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  lVar3 = param_4;
  func_0x00010c142240();
  if (lVar3 == 1) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110e1ef38;
    ppuVar4 = ppuVar5;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1ef38,0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_3;
    func_0x00010c26c280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(puVar1);
    _objc_release(ppuVar4);
    puVar1 = param_3;
    func_0x00010c26c280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0();
    _objc_release(puVar1);
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1ef38,0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_3;
    func_0x00010c26c280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020();
    _objc_release(puVar1);
    _objc_release(ppuVar5);
    if (*(char *)(param_1 + _DAT_1127322d8) != '\x01') goto LAB_105c07ab4;
LAB_105c07b94:
    func_0x00010be24760(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (lVar3 != 0) goto LAB_105c07bbc;
    ppuVar5 = &PTR____CFConstantStringClassReference_110e22418;
    ppuVar4 = ppuVar5;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e22418,0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_3;
    func_0x00010c26c280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(puVar1);
    _objc_release(ppuVar4);
    puVar1 = param_3;
    func_0x00010c26c280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0();
    _objc_release(puVar1);
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e22418,0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_3;
    func_0x00010c26c280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020();
    _objc_release(puVar1);
    _objc_release(ppuVar5);
    if ((*(byte *)(param_1 + _DAT_1127322d8) & 1) == 0) goto LAB_105c07b94;
LAB_105c07ab4:
    func_0x00010be08880(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c161280(param_3);
  _objc_release(param_1);
LAB_105c07bbc:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 105c07bdc; end: 105c07c9b; -[SCGalleryMyStorySaveSettingsViewController tableView:didSelectRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c07bdc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_4;
  func_0x00010c142240();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    if (lVar1 != 1) goto LAB_105c07c34;
    uVar3 = 1;
  }
  *(undefined1 *)(param_1 + _DAT_1127322d8) = uVar3;
LAB_105c07c34:
  func_0x00010bf6e880(param_3,param_2,param_4,1);
  _objc_release(param_4);
  func_0x00010c128b60(param_3);
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127322d4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28c4c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105c07c9c; end: 105c07ca7; -[SCGalleryMyStorySaveSettingsViewController defaultProjectNameV3] */

void FUN_105c07c9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c7a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_memories_11260f8a8);
  return;
}



/* Entry: 105c07ca8; end: 105c07cb3; -[SCGalleryMyStorySaveSettingsViewController defaultProjectNameV2] */

void FUN_105c07ca8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c7a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_memories_11260f8a8);
  return;
}



/* Entry: 105c07cb4; end: 105c07d03; -[SCGalleryMyStorySaveSettingsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c07cb4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127322e0,0);
  _objc_storeStrong(param_1 + _DAT_1127322d4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127322dc,0);
  return;
}



/* Entry: 105c07d04; end: 105c07d0b; -[SCGallerySaveToSettingsViewController pageViewName] */

undefined8 FUN_105c07d04(void)

{
  return 0x80;
}



/* Entry: 105c07d0c; end: 105c07e13; -[SCGallerySaveToSettingsViewController initWithMemoriesUserDefaultsManager:featureSettingsService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105c07d0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ec5b8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar5 = (long)_DAT_1127322e4;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127322e8;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bfbd880();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x000108e00c34();
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127322ec) = uVar4;
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105c07e14; end: 105c0822f; -[SCGallerySaveToSettingsViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c07e14(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126ec5b8;
  lStack_80 = param_1;
  _objc_msgSendSuper2(&lStack_80,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
  uVar9 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar12 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar9,uVar10,uVar11,uVar12);
  func_0x00010c213040();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1);
  _objc_release(puVar3);
  ppuVar4 = &PTR____CFConstantStringClassReference_110e22478;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e22478,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1);
  _objc_release(ppuVar4);
  func_0x00010c1cfce0(puVar1);
  dVar7 = 12.0;
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1);
  _objc_release(puVar3);
  func_0x00010c1bdb00(puVar1);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar7 = dVar7 + -64.0;
  func_0x00010c1e0180(dVar7,puVar1);
  _objc_release(lVar2);
  func_0x00010c106d40(puVar1);
  dVar8 = 1.79769313486232e+308;
  func_0x00010c23d5a0(puVar1);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  func_0x00010c013de0(0,0,dVar7,dVar8 + 32.0);
  _objc_release(lVar2);
  func_0x00010befbb60(puVar3);
  puVar5 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_alloc();
  func_0x00010c014e80(uVar9,uVar10,uVar11,uVar12);
  lVar6 = (long)_DAT_1127322f0;
  uVar9 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar5;
  _objc_release(uVar9);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar6));
  _objc_release(puVar5);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c16e9a0(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c167740(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c1f7b20(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c1fce00(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),
                      *(undefined8 *)(param_1 + lVar6));
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcde0(*(undefined8 *)(param_1 + lVar6));
  _objc_release(puVar5);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar6));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_retain(puVar3);
  func_0x00010c0bbfc0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c211680(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c128b60(*(undefined8 *)(param_1 + lVar6));
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(puVar1);
  return;
}



/* Entry: 105c08230; end: 105c083a7;  */

void FUN_105c08230(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(lVar5,uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfdef60(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010c0bbea0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105c083a8; end: 105c086a7;  */

void FUN_105c083a8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4030000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfce1a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c098960();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))(0xc040000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105c086a8; end: 105c0871f; -[SCGallerySaveToSettingsViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c086a8(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ec5b8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__112685438);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127322e4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1906a0();
  _objc_release(uVar1);
  return;
}



/* Entry: 105c08720; end: 105c0872f; -[SCGallerySaveToSettingsViewController getTitle] */

void FUN_105c08720(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e22498;
  func_0x000107c312f0(&PTR____CFConstantStringClassReference_110e22498,0);
  _objc_retainAutoreleasedReturnValue();
  if (lRam00000001137fe070 != -1) {
    func_0x000107c27d9c(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x00010bcbea50(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105c08730; end: 105c0878f; -[SCGallerySaveToSettingsViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c08730(long param_1,undefined8 param_2)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = (long)_DAT_1127322f0;
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar1),param_2,0);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar1));
  puStack_28 = PTR_PTR_1126ec5b8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105c08790; end: 105c0879b; -[SCGallerySaveToSettingsViewController supportedInterfaceOrientations] */

undefined8 FUN_105c08790(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  iVar1 = 0;
  uVar5 = 2;
  _objc_retain();
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar2 = (undefined *)0x0;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c252de0();
        _objc_release(puVar3);
      }
      else {
        puVar2 = puVar4;
        func_0x00010c0690e0();
      }
      if (puVar2 + -1 < (undefined *)0x4) {
        uVar5 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar2 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(0);
  return uVar5;
}



/* Entry: 105c0879c; end: 105c08823; -[SCGallerySaveToSettingsViewController _greenMark] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0879c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_1127322f8;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar2 = puVar1;
    func_0x000108e04dec();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60(puVar1,param_2,puVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    _objc_release(puVar2);
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 105c08824; end: 105c0887b; -[SCGallerySaveToSettingsViewController _emptyMark] */

void FUN_105c08824(undefined8 param_1)

{
  undefined *puVar1;
  
  func_0x00010be24760();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010bfb68e0(param_1);
  func_0x00010c013de0(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105c0887c; end: 105c08883; -[SCGallerySaveToSettingsViewController numberOfSectionsInTableView:] */

undefined8 FUN_105c0887c(void)

{
  return 1;
}



/* Entry: 105c08884; end: 105c0888b; -[SCGallerySaveToSettingsViewController tableView:numberOfRowsInSection:] */

undefined8 FUN_105c08884(void)

{
  return 3;
}



/* Entry: 105c0888c; end: 105c08897; -[SCGallerySaveToSettingsViewController tableView:estimatedHeightForRowAtIndexPath:] */

undefined8 FUN_105c0888c(void)

{
  return 0x4044000000000000;
}



/* Entry: 105c08898; end: 105c08c67; -[SCGallerySaveToSettingsViewController tableView:cellForRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c08898(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_4);
  func_0x00010bf6e060();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == (undefined *)0x0) {
    param_3 = PTR__OBJC_CLASS___UITableViewCell_1126afcb8;
    _objc_alloc(PTR__OBJC_CLASS___UITableViewCell_1126afcb8);
    func_0x00010c04ec80();
    func_0x00010c1fbac0();
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
    func_0x00010c26c280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
    func_0x00010c26c280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  lVar3 = param_4;
  func_0x00010c142240();
  if (lVar3 == 2) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110e22538;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e22538,0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_3;
    func_0x00010c26c280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(puVar1);
    _objc_release(ppuVar4);
    puVar1 = param_3;
    func_0x00010c26c280(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110e22558;
    func_0x00010c160fc0();
    _objc_release(puVar1);
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e22558,0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_3;
    func_0x00010c26c280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020();
    _objc_release(puVar1);
    _objc_release(ppuVar4);
    if (*(long *)(param_1 + _DAT_1127322ec) != 2) goto LAB_105c08a70;
LAB_105c08b50:
    func_0x00010be24760(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (lVar3 == 1) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110e224f8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e224f8,0);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = param_3;
      func_0x00010c26c280(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20();
      _objc_release(puVar1);
      _objc_release(ppuVar4);
      puVar1 = param_3;
      func_0x00010c26c280(param_3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = &PTR____CFConstantStringClassReference_110e22518;
      func_0x00010c160fc0();
      _objc_release(puVar1);
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e22518,0);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = param_3;
      func_0x00010c26c280(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c161020();
      _objc_release(puVar1);
      _objc_release(ppuVar4);
      if (*(long *)(param_1 + _DAT_1127322ec) == 1) goto LAB_105c08b50;
    }
    else {
      if (lVar3 != 0) goto LAB_105c08b78;
      ppuVar4 = &PTR____CFConstantStringClassReference_110e224d8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e224d8,0);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = param_3;
      func_0x00010c26c280(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20();
      _objc_release(puVar1);
      _objc_release(ppuVar4);
      puVar1 = param_3;
      func_0x00010c26c280(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c160fc0();
      _objc_release(puVar1);
      func_0x00010b0aea44();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_3;
      func_0x00010c26c280(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c161020();
      _objc_release(puVar2);
      _objc_release(puVar1);
      if (*(long *)(param_1 + _DAT_1127322ec) == 0) goto LAB_105c08b50;
    }
LAB_105c08a70:
    func_0x00010be08880(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c161280(param_3);
  _objc_release(param_1);
LAB_105c08b78:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 105c08c68; end: 105c08d3f; -[SCGallerySaveToSettingsViewController tableView:didSelectRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c08c68(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010c142240();
  if (uVar1 < 3) {
    *(ulong *)(param_1 + _DAT_1127322ec) = uVar1;
  }
  *(undefined1 *)(param_1 + _DAT_1127322f4) = 1;
  func_0x00010bf6e880(param_3,param_2,param_4,1);
  _objc_release(param_4);
  func_0x00010c128b60(param_3);
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127322ec);
  func_0x000108e00cbc(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127322e8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1ce0();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105c08d40; end: 105c08d4b; -[SCGallerySaveToSettingsViewController defaultProjectNameV3] */

void FUN_105c08d40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c7a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_memories_11260f8a8);
  return;
}



/* Entry: 105c08d4c; end: 105c08d57; -[SCGallerySaveToSettingsViewController defaultProjectNameV2] */

void FUN_105c08d4c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c7a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_memories_11260f8a8);
  return;
}



/* Entry: 105c08d58; end: 105c08e03; -[SCGallerySaveToSettingsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c08d58(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127322e8,0);
  _objc_storeStrong(param_1 + _DAT_1127322e4,0);
  _objc_storeStrong(param_1 + _DAT_1127322f8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127322f0,0);
  return;
}



/* Entry: 105c08e04; end: 105c09697; -[SCGallerySettingsViewController initWithMemoriesSettingsUIScope:profile:dataObjectContext:photoPermissionCoordinator:memoriesBackupScopeExposer:featureSettingsService:memoriesAutosaveMigrator:connectivityMonitor:currentPageTracker:mediaVideoImporter:previewURLVideoProviderFactory:cloudSync:addSnapMutator:galleryLogger:memoriesPrivateGallerySetupFlowScopeExposer:memoriesUserDefaultsManager:coreConfigProvider:grapheneRegistry:applicationLifecycleEvents:circumstanceEngine:userTrackedLogger:memoriesSaveManager:memoriesExperimentService:memoriesMonetizationServices:plusSubscriptionInfoProvider:valdiRuntimeProvider:plusSubscribeScopeExposer:plusSubscribeScopeServices:plusOpenSubscriptionManagementServices:faceTaggingPermissionsManager:deckServices:webBrowsingScopeExposer:boltURLMediaOperaService:memoriesLinkManagementUIScopeServices:memoriesBackupUIScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105c08e04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain();
  _objc_retain();
  puStack_70 = PTR_PTR_1126ec5c0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar4 = (long)_DAT_1127322fc;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112732300;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112732304;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112732308;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11273230c;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112732310;
    _objc_retain(param_37);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_37;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112732314;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112732318;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273231c);
    *(undefined **)((long)puVar1 + (long)_DAT_11273231c) = puVar3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112732320;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_10;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112732324;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_11;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112732328;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_12;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11273232c;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_13;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112732330;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_14;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112732334;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_15;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112732338;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_16;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11273233c,param_17);
    lVar4 = (long)_DAT_112732340;
    _objc_retain(param_29);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_29;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112732344;
    _objc_retain(param_30);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_30;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112732348;
    _objc_retain(param_31);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_31;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11273234c;
    _objc_retain(param_18);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_18;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112732350;
    _objc_retain(param_20);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_20;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112732354;
    _objc_retain(param_19);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_19;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112732358;
    _objc_retain(param_21);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_21;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11273235c;
    _objc_retain(param_22);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_22;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112732360;
    _objc_retain(param_23);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_23;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112732364;
    _objc_retain(param_24);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_24;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112732368;
    _objc_retain(param_25);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_25;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11273236c;
    _objc_retain(param_26);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_26;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112732370;
    _objc_retain(param_27);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_27;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112732374;
    _objc_retain(param_28);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_28;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112732378;
    _objc_retain(param_32);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_32;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11273237c) = 0;
    lVar4 = (long)_DAT_112732380;
    _objc_retain(param_35);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_35;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112732384;
    _objc_retain(param_36);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_36;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112732388;
    _objc_retain(param_33);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_33;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11273238c;
    _objc_retain(param_34);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_34;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112732390) = 0;
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112732394);
    *(undefined **)((long)puVar1 + (long)_DAT_112732394) = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_80,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_88,auStack_80);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112732398);
    *(undefined **)((long)puVar1 + (long)_DAT_112732398) = puVar3;
    _objc_release(uVar2);
    func_0x00010beaff80(puVar1);
    func_0x00010beac8c0(puVar1);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
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



/* Entry: 105c09698; end: 105c096d7;  */

void FUN_105c09698(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bee8020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105c096d8; end: 105c096df; -[SCGallerySettingsViewController pageViewName] */

undefined8 FUN_105c096d8(void)

{
  return 0x82;
}



/* Entry: 105c096e0; end: 105c096ef; -[SCGallerySettingsViewController getInfo] */

void FUN_105c096e0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e225f8;
  func_0x000107c312f0(&PTR____CFConstantStringClassReference_110e225f8,0);
  _objc_retainAutoreleasedReturnValue();
  if (lRam00000001137fe070 != -1) {
    func_0x000107c27d9c(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x00010bcbea50(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105c096f0; end: 105c09b53; -[SCGallerySettingsViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c096f0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_1126ec5c0;
  lStack_90 = param_1;
  _objc_msgSendSuper2(&lStack_90,PTR_s_loadView_112604be0);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
  uVar8 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar8,uVar9,uVar10,uVar11);
  func_0x00010c213040();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar2);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar2);
  _objc_release(puVar3);
  lVar1 = param_1;
  func_0x00010bfc65c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar2);
  _objc_release(lVar1);
  func_0x00010c1cfce0(puVar2);
  func_0x00010c1bdb00(puVar2);
  dVar6 = 12.0;
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar2);
  _objc_release(puVar3);
  func_0x00010c1bdb00(puVar2);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar6 = dVar6 + -64.0;
  func_0x00010c1e0180(dVar6,puVar2);
  _objc_release(lVar1);
  func_0x00010c106d40(puVar2);
  dVar7 = 1.79769313486232e+308;
  func_0x00010c23d5a0(puVar2);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  func_0x00010c013de0(0,0,dVar6,dVar7 + 16.0);
  _objc_release(lVar1);
  func_0x00010befbb60(puVar3);
  puVar4 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_alloc();
  func_0x00010c014e80(uVar8,uVar9,uVar10,uVar11);
  lVar5 = (long)_DAT_11273239c;
  uVar8 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar4;
  _objc_release(uVar8);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5));
  _objc_release(puVar4);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c16e9a0(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c167a20(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c2026e0(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c1f7b20(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c167740(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c1fce00(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),
                      *(undefined8 *)(param_1 + lVar5));
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcde0(*(undefined8 *)(param_1 + lVar5));
  _objc_release(puVar4);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar1);
  func_0x00010be94440(param_1);
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar5));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_retain(puVar3);
  func_0x00010c0bbfc0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c211680(*(undefined8 *)(param_1 + lVar5));
  *(undefined1 *)(param_1 + _DAT_1127323a0) = 0;
  uVar9 = *(undefined8 *)(param_1 + _DAT_112732314);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010bfbcb00();
  *(char *)(param_1 + _DAT_1127323a4) = (char)uVar8;
  _objc_release(uVar9);
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 105c09b54; end: 105c09ccb;  */

void FUN_105c09b54(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(lVar5,uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfdef60(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010c0bbea0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105c09ccc; end: 105c09fcb;  */

void FUN_105c09ccc(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4030000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfce1a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c098960();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))(0xc040000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105c09fcc; end: 105c0a04b; -[SCGallerySettingsViewController viewDidLoad] */

void FUN_105c09fcc(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ec5c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  return;
}



/* Entry: 105c0a04c; end: 105c0a1ff; -[SCGallerySettingsViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0a04c(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126ec5c0;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewWillAppear__1126853f0);
  func_0x00010be94440(param_1);
  lVar5 = (long)_DAT_112732314;
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbcb00();
  lVar4 = param_1;
  func_0x00010bf34500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c210a80();
  _objc_release(lVar4);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbd540();
  lVar4 = param_1;
  func_0x00010bf69ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c210a80();
  _objc_release(lVar4);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbce20();
  lVar4 = param_1;
  func_0x00010bfb2620(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c210a80();
  _objc_release(lVar4);
  _objc_release(uVar1);
  uVar2 = *(ulong *)(param_1 + lVar5);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c151680();
  if ((uVar3 & 1) == 0) {
    lVar4 = *(long *)(param_1 + lVar5);
    func_0x00010c269d40(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1514e0();
  }
  func_0x00010c151780(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c210a80();
  _objc_release(param_1);
  if ((uVar3 & 1) == 0) {
    _objc_release(lVar4);
  }
  _objc_release(uVar2);
  return;
}



/* Entry: 105c0a200; end: 105c0a6a3; -[SCGallerySettingsViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0a200(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 unaff_x22;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b8 = PTR_PTR_1126ec5c0;
  puStack_c0 = param_1;
  _objc_msgSendSuper2(&puStack_c0,PTR_s_viewDidAppear__112684bd0);
  puVar1 = &DAT_112732324;
  puVar8 = *(undefined **)(param_1 + _DAT_112732324);
  func_0x00010c0f2220(param_1);
  puVar2 = puVar8;
  func_0x00010c24fc40();
  lVar9 = (long)_DAT_1127323a8;
  if (*(long *)(param_1 + lVar9) == 0) {
    puVar8 = param_1;
    func_0x00010bf34500();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar8;
    func_0x00010c080700();
    puVar2 = puVar8;
    _objc_release();
    if (((ulong)puVar1 & 1) == 0) {
      puVar2 = *(undefined **)(param_1 + _DAT_1127322fc);
      func_0x00010c230ec0();
      if ((int)puVar2 != 0) {
        puVar1 = PTR_PTR_1126b0880;
        _objc_alloc();
        uVar10 = *(undefined8 *)PTR__CGRectZero_110347608;
        uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
        uVar12 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
        uVar13 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
        func_0x00010c013de0(uVar10,uVar11,uVar12,uVar13);
        uVar7 = *(undefined8 *)(param_1 + lVar9);
        *(undefined **)(param_1 + lVar9) = puVar1;
        _objc_release(uVar7);
        func_0x00010c219b60(*(undefined8 *)(param_1 + lVar9));
        puVar1 = param_1;
        func_0x00010bf34500(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60();
        _objc_release(puVar1);
        puStack_100 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        uVar7 = *(undefined8 *)(param_1 + lVar9);
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = param_1;
        uStack_d0 = uVar7;
        func_0x00010bf34500();
        _objc_retainAutoreleasedReturnValue();
        puStack_c8 = puVar1;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        puStack_d8 = puVar1;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_1 + lVar9);
        uStack_e0 = uVar7;
        uStack_b0 = uVar7;
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = param_1;
        uStack_f0 = uVar3;
        func_0x00010bf34500();
        _objc_retainAutoreleasedReturnValue();
        puStack_e8 = puVar1;
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        puStack_f8 = puVar1;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + lVar9);
        uStack_108 = uVar3;
        uStack_a8 = uVar3;
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = param_1;
        uStack_110 = uVar4;
        func_0x00010bf34500(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_1 + lVar9);
        uStack_a0 = uVar4;
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = param_1;
        func_0x00010bf34500(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar8;
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar3;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
        uStack_98 = uVar7;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef8c0(puStack_100);
        _objc_release(puVar6);
        _objc_release(uVar7);
        _objc_release(puVar5);
        _objc_release(puVar8);
        _objc_release(uVar3);
        _objc_release(uVar4);
        _objc_release(puVar2);
        _objc_release(puVar1);
        _objc_release(uStack_110);
        _objc_release(uStack_108);
        _objc_release(puStack_f8);
        _objc_release(puStack_e8);
        _objc_release(uStack_f0);
        _objc_release(uStack_e0);
        _objc_release(puStack_d8);
        _objc_release(puStack_c8);
        _objc_release(uStack_d0);
        puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
        _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
        func_0x00010c013de0(uVar10,uVar11,uVar12,uVar13);
        func_0x00010c182b00(*(undefined8 *)(param_1 + lVar9));
        _objc_release(puVar1);
        puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(param_1 + lVar9);
        func_0x00010bf4dce0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16e440();
        _objc_release(uVar7);
        _objc_release(puVar1);
        puVar8 = param_1;
        func_0x00010bf34500();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar8;
        func_0x00010c08c0e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf525a0();
        unaff_x22 = *(undefined8 *)(param_1 + lVar9);
        func_0x00010bf4dce0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = unaff_x22;
        func_0x00010c08c0e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1842e0(uVar10);
        _objc_release(uVar7);
        _objc_release(unaff_x22);
        _objc_release(puVar1);
        _objc_release(puVar8);
        func_0x00010c1ff520(*(undefined8 *)(param_1 + lVar9));
        puVar2 = *(undefined **)(param_1 + lVar9);
        func_0x00010c21e900();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_90) {
    ___stack_chk_fail();
    pcStack_118 = FUN_105c0a6a4;
    puStack_148 = PTR_PTR_1126ec5c0;
    puStack_150 = puVar2;
    uStack_140 = unaff_x22;
    puStack_138 = puVar1;
    puStack_130 = puVar8;
    puStack_128 = param_1;
    puStack_120 = &stack0xfffffffffffffff0;
    _objc_msgSendSuper2(&puStack_150,PTR_s_viewWillDisappear__112685438);
    puVar1 = puVar2;
    func_0x00010c06d1a0();
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = puVar2;
      func_0x00010c0d66a0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar1;
      func_0x00010c06d1a0();
      if ((int)puVar8 == 0) {
        puVar8 = puVar2;
        func_0x00010c077fc0();
        _objc_release(puVar1);
        if ((int)puVar8 == 0) {
          return;
        }
      }
      else {
        _objc_release(puVar1);
      }
    }
    uVar7 = *(undefined8 *)(puVar2 + _DAT_1127322fc);
    func_0x00010bf6b020(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c9840();
    _objc_release(uVar7);
    return;
  }
  return;
}



/* Entry: 105c0a6a4; end: 105c0a75f; -[SCGallerySettingsViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0a6a4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ec5c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewWillDisappear__112685438);
  uVar1 = param_1;
  func_0x00010c06d1a0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c06d1a0();
    if ((int)uVar2 == 0) {
      uVar2 = param_1;
      func_0x00010c077fc0();
      _objc_release(uVar1);
      if ((int)uVar2 == 0) {
        return;
      }
    }
    else {
      _objc_release(uVar1);
    }
  }
  uVar3 = *(undefined8 *)(param_1 + (long)_DAT_1127322fc);
  func_0x00010bf6b020(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c9840();
  _objc_release(uVar3);
  return;
}



/* Entry: 105c0a760; end: 105c0a7bf; -[SCGallerySettingsViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0a760(long param_1,undefined8 param_2)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = (long)_DAT_11273239c;
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar1),param_2,0);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar1));
  puStack_28 = PTR_PTR_1126ec5c0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105c0a7c0; end: 105c0a7cb; -[SCGallerySettingsViewController supportedInterfaceOrientations] */

undefined8 FUN_105c0a7c0(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  iVar1 = 0;
  uVar5 = 2;
  _objc_retain();
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar2 = (undefined *)0x0;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c252de0();
        _objc_release(puVar3);
      }
      else {
        puVar2 = puVar4;
        func_0x00010c0690e0();
      }
      if (puVar2 + -1 < (undefined *)0x4) {
        uVar5 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar2 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(0);
  return uVar5;
}



/* Entry: 105c0a7cc; end: 105c0a7cf; -[SCGallerySettingsViewController getTitle] */

void FUN_105c0a7cc(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dba938;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dba938,
                      &PTR____CFConstantStringClassReference_110e61f78,0);
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



/* Entry: 105c0a7d0; end: 105c0a80b; -[SCGallerySettingsViewController numberOfSectionsInTableView:] */

undefined8 FUN_105c0a7d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010beea240();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105c0a80c; end: 105c0a85b; -[SCGallerySettingsViewController tableView:numberOfRowsInSection:] */

undefined8
FUN_105c0a80c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be9d060(param_1,param_2,param_4);
  func_0x00010beca600(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105c0a85c; end: 105c0a887; -[SCGallerySettingsViewController tableView:cellForRowAtIndexPath:] */

void FUN_105c0a85c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010beca5a0(param_1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010be6e270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__optionsCellForSettingTag__112579238,uVar1);
  return;
}



/* Entry: 105c0a888; end: 105c0a8b3; -[SCGallerySettingsViewController tableView:estimatedHeightForRowAtIndexPath:] */

void FUN_105c0a888(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010beca5a0(param_1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010be0b410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__estimatedHeightForSettingTag__1125606a0,uVar1);
  return;
}



/* Entry: 105c0a8b4; end: 105c0aa2f; -[SCGallerySettingsViewController tableView:heightForRowAtIndexPath:] */

double FUN_105c0a8b4(double param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_5);
  uVar1 = param_2;
  func_0x00010c267f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08d140();
  func_0x00010beca5a0();
  _objc_release(param_5);
  uVar2 = uVar1;
  func_0x00010c26c280(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c26c280(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010c26c660(uVar2);
  _CGRectGetHeight();
  dVar5 = param_1;
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126c31d8;
  dVar6 = 0.0;
  if (param_2 < 0xd) {
    if ((1L << (param_2 & 0x3f) & 0x16f2U) == 0) {
      if ((1L << (param_2 & 0x3f) & 0xdU) == 0) {
        if (param_2 == 0xb) {
          _objc_retain(uVar1);
          _objc_opt_class(puVar4);
          uVar3 = uVar1;
          _objc_opt_isKindOfClass(uVar1,puVar4);
          uVar2 = uVar1;
          if ((uVar3 & 1) == 0) {
            uVar2 = 0;
          }
          _objc_retain(uVar2);
          _objc_release(uVar1);
          if (uVar2 != 0) {
            func_0x00010bfe0640(uVar1);
            dVar6 = dVar5;
          }
          _objc_release(uVar2);
        }
      }
      else {
        dVar6 = param_1 + 24.0;
      }
    }
    else {
      dVar6 = *(double *)PTR__UITableViewAutomaticDimension_110345db8;
    }
  }
  _objc_release(uVar1);
  return dVar6;
}



/* Entry: 105c0aa30; end: 105c0aa77; -[SCGallerySettingsViewController tableView:heightForHeaderInSection:] */

undefined8
FUN_105c0aa30(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  func_0x00010be9d060(param_2,param_3,param_5);
  if (param_2 == 1) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfe0830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b0710,PTR_s_heightForTableHeaderInSection__1125d5bc8,param_5);
  return param_1;
}



/* Entry: 105c0aa78; end: 105c0ab3f; -[SCGallerySettingsViewController tableView:viewForHeaderInSection:] */

void FUN_105c0aa78(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  func_0x00010be9d060(param_1,param_2,param_4);
  if ((long)param_1 < 2) {
    if (param_1 == (undefined **)0x0) {
      func_0x000108dfde24();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = param_1;
    }
    else {
      ppuVar2 = (undefined **)0x0;
      if (param_1 != (undefined **)0x1) {
        ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
      }
    }
  }
  else if (param_1 == (undefined **)0x2) {
    func_0x000108dfde3c();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = param_1;
  }
  else if (param_1 == (undefined **)0x3) {
    func_0x000108dfde54();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = param_1;
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
    if (param_1 == (undefined **)0x5) {
      func_0x000108dfde6c();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = param_1;
    }
  }
  puVar1 = PTR_PTR_1126b0710;
  func_0x00010c29cf80(PTR_PTR_1126b0710,param_2,param_4,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105c0ab40; end: 105c0accb; -[SCGallerySettingsViewController tableView:didSelectRowAtIndexPath:] */

void FUN_105c0ab40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010beca5a0(param_1,param_2,param_4);
  if (lVar1 < 3) {
    if (lVar1 == 0) {
      func_0x00010be7a3e0(param_1);
    }
    else if (lVar1 == 1) {
      lVar1 = param_1;
      func_0x00010bf34500(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010bf34500(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c080700();
      func_0x00010c228320(param_1,param_2,lVar1,(uint)lVar3 ^ 1);
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010bf34500(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c080700();
      func_0x00010bf34500(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c210a80();
      _objc_release(param_1);
      _objc_release(lVar1);
    }
    else if (lVar1 == 2) {
      func_0x00010be7bd80(param_1);
    }
  }
  else if (lVar1 < 6) {
    if (lVar1 == 3) {
      func_0x00010be7e400(param_1);
    }
    else if (lVar1 == 4) {
      func_0x00010be7a360(param_1);
    }
  }
  else if (lVar1 == 6) {
    func_0x00010be7ca20(param_1);
  }
  else if (lVar1 == 10) {
    func_0x00010be7a760(param_1);
  }
  func_0x00010bf6e880(param_3,param_2,param_4,1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c0accc; end: 105c0aea7; -[SCGallerySettingsViewController _resetView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0accc(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long lVar15;
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
  
  puVar11 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = (long)_DAT_11273231c;
  func_0x00010c12adc0(*(undefined8 *)(param_1 + lVar13));
  puVar2 = *(undefined1 **)(param_1 + _DAT_11273236c);
  func_0x00010c2572e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010c08b180();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c077f00();
  if ((int)puVar4 == 0 || puVar2 == (undefined1 *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar4 = puVar2;
    func_0x00010bfdabe0();
    uVar1 = SUB81(puVar4,0);
  }
  *(undefined1 *)(param_1 + _DAT_1127323ac) = uVar1;
  lVar5 = param_1;
  func_0x00010beea240();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  iVar12 = (int)auStack_e8;
  lVar6 = lVar5;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar14 = *plStack_120;
    do {
      lVar15 = 0;
      do {
        if (*plStack_120 != lVar14) {
          _objc_enumerationMutation(lVar5);
        }
        uVar7 = *(undefined8 *)(lStack_128 + lVar15 * 8);
        func_0x00010c067fc0(uVar7);
        lVar8 = param_1;
        func_0x00010beca600(param_1,param_2,uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(*(undefined8 *)(param_1 + lVar13),param_2,lVar8);
        _objc_release(lVar8);
        lVar15 = lVar15 + 1;
      } while (lVar6 != lVar15);
      iVar12 = (int)auStack_e8;
      lVar6 = lVar5;
      puVar11 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
  }
  func_0x00010c128b60(*(undefined8 *)(param_1 + _DAT_11273239c));
  _objc_release(lVar5);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar11);
  puVar2 = puVar3;
  func_0x00010bf34500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar11 == (undefined8 *)puVar2) {
    uVar7 = *(undefined8 *)(puVar3 + _DAT_112732314);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a19e0();
    _objc_release(uVar7);
    lVar13 = (long)_DAT_11273234c;
    uVar9 = *(ulong *)(puVar3 + lVar13);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c0b85c0();
    _objc_release(uVar9);
    if ((uVar10 & 1) == 0) {
      uVar7 = *(undefined8 *)(puVar3 + lVar13);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c1ce0();
      _objc_release(uVar7);
    }
    if (iVar12 != 0) {
      lVar13 = (long)_DAT_1127323a8;
      if (*(long *)(puVar3 + lVar13) != 0) {
        func_0x00010c1ff520(*(long *)(puVar3 + lVar13),param_2,0);
        func_0x00010c12c960(*(undefined8 *)(puVar3 + lVar13));
      }
    }
  }
  else {
    puVar2 = puVar3;
    func_0x00010bf69ce0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar11 == (undefined8 *)puVar2) {
      if (iVar12 == 0) {
        func_0x00010be01c40(puVar3);
      }
      else {
        func_0x00010be08ae0();
      }
    }
    else {
      puVar2 = puVar3;
      func_0x00010bfb2620();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar11 == (undefined8 *)puVar2) {
        uVar7 = *(undefined8 *)(puVar3 + _DAT_112732314);
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a1ae0();
      }
      else {
        puVar2 = puVar3;
        func_0x00010c151780();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar11 != (undefined8 *)puVar2) goto LAB_105c0b0b4;
        uVar7 = *(undefined8 *)(puVar3 + _DAT_112732398);
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0aece0();
        _objc_release(uVar7);
        lVar13 = (long)_DAT_112732314;
        uVar7 = *(undefined8 *)(puVar3 + lVar13);
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1f7780();
        _objc_release(uVar7);
        uVar7 = *(undefined8 *)(puVar3 + lVar13);
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1f7680();
      }
      _objc_release(uVar7);
    }
  }
LAB_105c0b0b4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar11);
  return;
}



/* Entry: 105c0aea8; end: 105c0b0cb; -[SCGallerySettingsViewController settingsSwitchTableViewCell:didToggleSwitch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0aea8(long param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = param_1;
  func_0x00010bf34500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (param_3 == lVar5) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112732314);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a19e0();
    _objc_release(uVar1);
    lVar5 = (long)_DAT_11273234c;
    uVar2 = *(ulong *)(param_1 + lVar5);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0b85c0();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      uVar1 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c1ce0();
      _objc_release(uVar1);
    }
    if (param_4 != 0) {
      lVar4 = (long)_DAT_1127323a8;
      lVar5 = *(long *)(param_1 + lVar4);
      if (lVar5 != 0) {
        func_0x00010c1ff520(lVar5,param_2,0);
        func_0x00010c12c960(*(undefined8 *)(param_1 + lVar4));
      }
    }
  }
  else {
    lVar5 = param_1;
    func_0x00010bf69ce0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (param_3 == lVar5) {
      if (param_4 == 0) {
        func_0x00010be01c40(param_1);
      }
      else {
        func_0x00010be08ae0();
      }
    }
    else {
      lVar5 = param_1;
      func_0x00010bfb2620();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (param_3 == lVar5) {
        uVar1 = *(undefined8 *)(param_1 + _DAT_112732314);
        func_0x00010c269d40(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a1ae0();
      }
      else {
        lVar5 = param_1;
        func_0x00010c151780();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (param_3 != lVar5) goto LAB_105c0b0b4;
        uVar1 = *(undefined8 *)(param_1 + _DAT_112732398);
        func_0x00010c269d40(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0aece0();
        _objc_release(uVar1);
        lVar5 = (long)_DAT_112732314;
        uVar1 = *(undefined8 *)(param_1 + lVar5);
        func_0x00010c269d40(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1f7780();
        _objc_release(uVar1);
        uVar1 = *(undefined8 *)(param_1 + lVar5);
        func_0x00010c269d40(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1f7680();
      }
      _objc_release(uVar1);
    }
  }
LAB_105c0b0b4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c0b0cc; end: 105c0b19f; -[SCGallerySettingsViewController cellularBackupCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0b0cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127323b0;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126b5550;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c17a3a0(uVar2,param_2,param_1);
    func_0x000108dfde84();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e2a80(*(undefined8 *)(param_1 + lVar4),param_2,uVar2);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c1e2aa0(uVar2,param_2,&PTR____CFConstantStringClassReference_110e22638);
    func_0x000108dfde9c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f9020(*(undefined8 *)(param_1 + lVar4),param_2,uVar2);
    _objc_release(uVar2);
    func_0x00010c210a20(*(undefined8 *)(param_1 + lVar4),param_2,
                        &PTR____CFConstantStringClassReference_110e22658);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105c0b1a0; end: 105c0b2d7; -[SCGallerySettingsViewController autosaveCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0b1a0(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_1127323b4;
  if (*(long *)(param_1 + lVar6) == 0) {
    puVar1 = PTR_PTR_1126c31e0;
    _objc_alloc_init();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar1;
    _objc_release(uVar5);
    ppuVar3 = &PTR____CFConstantStringClassReference_110e223d8;
    ppuVar2 = ppuVar3;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e223d8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e2a80(*(undefined8 *)(param_1 + lVar6));
    _objc_release(ppuVar2);
    func_0x00010c1e2aa0(*(undefined8 *)(param_1 + lVar6));
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e223d8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e2ac0(*(undefined8 *)(param_1 + lVar6));
    _objc_release(ppuVar3);
  }
  uVar4 = *(undefined8 *)(param_1 + _DAT_112732318);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfbda60();
  ppuVar3 = &PTR____CFConstantStringClassReference_110e1ef38;
  if ((int)uVar5 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110e22698;
  }
  func_0x00010bcbeaa8(ppuVar3,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9020(*(undefined8 *)(param_1 + lVar6));
  _objc_release(ppuVar3);
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  _objc_retain(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 105c0b2d8; end: 105c0b3cf; -[SCGallerySettingsViewController defaultMyEyesOnlyCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0b2d8(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_1127323b8;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126b5550;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    func_0x00010c17a3a0(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c1e2b20(*(undefined8 *)(param_1 + lVar5));
    ppuVar2 = &PTR____CFConstantStringClassReference_110e226b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e226b8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e2a80(*(undefined8 *)(param_1 + lVar5));
    _objc_release(ppuVar2);
    func_0x00010c1e2aa0(*(undefined8 *)(param_1 + lVar5));
    ppuVar2 = &PTR____CFConstantStringClassReference_110e226d8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e226d8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f9020(*(undefined8 *)(param_1 + lVar5));
    _objc_release(ppuVar2);
    func_0x00010c210a20(*(undefined8 *)(param_1 + lVar5));
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 105c0b3d0; end: 105c0b493; -[SCGallerySettingsViewController myMemoriesLinkCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0b3d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127323bc;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126c31e0;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x000108dfdefc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e2a80(*(undefined8 *)(param_1 + lVar4),param_2,uVar2);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c1e2aa0(uVar2,param_2,&PTR____CFConstantStringClassReference_110e22718);
    func_0x000108dfdf14();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f9020(*(undefined8 *)(param_1 + lVar4),param_2,uVar2);
    _objc_release(uVar2);
    func_0x00010c161260(*(undefined8 *)(param_1 + lVar4),param_2,1);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105c0b494; end: 105c0b567; -[SCGallerySettingsViewController flashbackStoriesCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0b494(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127323c0;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126b5550;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c17a3a0(uVar2,param_2,param_1);
    func_0x000108dfdeb4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e2a80(*(undefined8 *)(param_1 + lVar4),param_2,uVar2);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c1e2aa0(uVar2,param_2,&PTR____CFConstantStringClassReference_110e22738);
    func_0x000108dfdecc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f9020(*(undefined8 *)(param_1 + lVar4),param_2,uVar2);
    _objc_release(uVar2);
    func_0x00010c210a20(*(undefined8 *)(param_1 + lVar4),param_2,
                        &PTR____CFConstantStringClassReference_110e22758);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105c0b568; end: 105c0b653; -[SCGallerySettingsViewController screenshopOptOutCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0b568(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_1127323c4;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126b5550;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    func_0x00010c17a3a0(*(undefined8 *)(param_1 + lVar5));
    ppuVar2 = &PTR____CFConstantStringClassReference_110e22778;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e22778,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e2a80(*(undefined8 *)(param_1 + lVar5));
    _objc_release(ppuVar2);
    func_0x00010c1e2aa0(*(undefined8 *)(param_1 + lVar5));
    ppuVar2 = &PTR____CFConstantStringClassReference_110e22798;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e22798,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f9020(*(undefined8 *)(param_1 + lVar5));
    _objc_release(ppuVar2);
    func_0x00010c210a20(*(undefined8 *)(param_1 + lVar5));
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 105c0b654; end: 105c0b6f7; -[SCGallerySettingsViewController _tagForIndexPath:] */

undefined8 FUN_105c0b654(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c1554e0(param_3);
  uVar2 = param_1;
  func_0x00010be9d060(param_1,param_2,uVar1);
  func_0x00010beca600(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c142240(param_3);
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010c0dfd40(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c067fc0();
  _objc_release(uVar2);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105c0b6f8; end: 105c0b82b; -[SCGallerySettingsViewController _indexPathForTag:] */

void FUN_105c0b6f8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  uVar1 = param_1;
  func_0x00010beea240();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bf529e0();
  if (uVar5 != 0) {
    uVar5 = 0;
    do {
      uVar2 = uVar1;
      func_0x00010c0dfd40(uVar1,param_2,uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c067fc0();
      _objc_release(uVar2);
      uVar2 = param_1;
      func_0x00010beca600(param_1,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfecde0(uVar2,param_2,puVar4);
      _objc_release(puVar4);
      if (uVar3 != 0x7fffffffffffffff) {
        puVar4 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
        func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,uVar3,uVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        goto LAB_105c0b804;
      }
      _objc_release(uVar2);
      uVar5 = uVar5 + 1;
      uVar2 = uVar1;
      func_0x00010bf529e0();
    } while (uVar5 < uVar2);
  }
  puVar4 = (undefined *)0x0;
LAB_105c0b804:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105c0b82c; end: 105c0b94f; -[SCGallerySettingsViewController _optionsCellForSettingTag:] */

void FUN_105c0b82c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  switch(param_3) {
  case 0:
    func_0x00010bdd2580(param_1);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 1:
    func_0x00010bf34500(param_1);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 2:
    func_0x00010be37ba0(param_1);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 3:
    func_0x00010be9a240(param_1);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 4:
    func_0x00010bf12200(param_1);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 5:
    func_0x00010bf69ce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 6:
    func_0x00010c0d4760(param_1);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 7:
    func_0x00010bfb2620(param_1);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 9:
    func_0x00010c151780(param_1);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 10:
    func_0x00010c257340(param_1);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0xb:
    func_0x00010c257360(param_1);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0xc:
    func_0x00010bf9f180(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c0b950; end: 105c0b9a7; -[SCGallerySettingsViewController _estimatedHeightForSettingTag:] */

undefined8 FUN_105c0b950(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x4046000000000000;
  if (param_3 < 0xd) {
    if ((1L << (param_3 & 0x3f) & 0x16e2U) != 0) {
      return 0x4054000000000000;
    }
    if (param_3 == 8) {
      uVar1 = 0;
    }
    else if (param_3 == 0xb) {
      return *(undefined8 *)PTR__UITableViewAutomaticDimension_110345db8;
    }
  }
  return uVar1;
}



/* Entry: 105c0b9a8; end: 105c0ba87; -[SCGallerySettingsViewController _makeCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0b9a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = *(undefined **)(param_1 + _DAT_11273239c);
  func_0x00010bf6e060(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126b0708;
    _objc_alloc(PTR_PTR_1126b0708);
    func_0x00010c040040();
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x29);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2,param_2,puVar3);
    _objc_release(puVar3);
    func_0x00010c1faee0(puVar1,param_2,puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105c0ba88; end: 105c0bb6b; -[SCGallerySettingsViewController _backupProgressCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0ba88(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined **)(param_1 + _DAT_11273239c);
  func_0x00010bf6e060(puVar1,param_2,&PTR____CFConstantStringClassReference_110e22598);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126c31e8;
    _objc_alloc(PTR_PTR_1126c31e8);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112732330);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + _DAT_112732304);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c040080(puVar1,param_2,&PTR____CFConstantStringClassReference_110e22598,uVar2,uVar3,
                        *(undefined8 *)(param_1 + _DAT_112732314),
                        *(undefined8 *)(param_1 + _DAT_112732320),
                        *(undefined8 *)(param_1 + _DAT_112732300));
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105c0bb6c; end: 105c0bcff; -[SCGallerySettingsViewController _saveToCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0bb6c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  lVar1 = param_1;
  func_0x00010be5b600(param_1,param_2,&PTR____CFConstantStringClassReference_110e22578);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c138500();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e22498;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e22498,0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c26c280(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(lVar3);
  _objc_release(ppuVar2);
  lVar3 = lVar1;
  func_0x00010c26c280(lVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e227d8;
  func_0x00010c160fc0();
  _objc_release(lVar3);
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e227d8,0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c26c280(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020();
  _objc_release(lVar3);
  _objc_release(ppuVar2);
  lVar4 = *(long *)(param_1 + _DAT_112732314);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010bfbd880();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x000108e00c34();
  puVar6 = (&PTR_PTR_1108dd0d0)[lVar5];
  func_0x00010bcbeaa8(puVar6,0);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010bf6f720(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(lVar5);
  _objc_release(puVar6);
  _objc_release(lVar3);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105c0bd00; end: 105c0be13; -[SCGallerySettingsViewController _importCameraRollCell] */

void FUN_105c0bd00(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  
  func_0x00010be5b600(param_1,param_2,&PTR____CFConstantStringClassReference_110e22578);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c138500();
  func_0x000108dfdee4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c26c280(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c26c280(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110e227f8;
  func_0x00010c160fc0();
  _objc_release(uVar1);
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e227f8,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c26c280(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020();
  _objc_release(uVar1);
  _objc_release(ppuVar3);
  uVar1 = param_1;
  func_0x00010c26c280(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cfce0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105c0be14; end: 105c0beef; -[SCGallerySettingsViewController storageSubscriptionPlanCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0be14(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127323c8;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126c31f0;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x000108dfdc74();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e2a80(*(undefined8 *)(param_1 + lVar4),param_2,uVar2);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c1e2aa0(uVar2,param_2,&PTR____CFConstantStringClassReference_110e22818);
    func_0x000108dfdc74();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e2ac0(*(undefined8 *)(param_1 + lVar4),param_2,uVar2);
    _objc_release(uVar2);
    func_0x000108dfdc8c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f9020(*(undefined8 *)(param_1 + lVar4),param_2,uVar2);
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}


