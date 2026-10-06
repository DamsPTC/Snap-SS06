/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105e488f0; end: 105e489db; -[SCTopicSendToAddTopicWithDescriptionCollectionViewCell _defaultTypingAttributes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_105e488f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  uStack_50 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_48 = puVar1;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_40 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_48,&uStack_58,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_b8 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_a8 = puVar1;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x88);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_a0 = puVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_a8,&uStack_b8,2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
      ___stack_chk_fail();
      lVar6 = (long)_DAT_112737e6c;
      puVar5 = *(undefined **)(puVar1 + lVar6);
      puVar2 = puVar5;
      func_0x00010bf193c0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(puVar1 + lVar6);
      func_0x00010c15a1e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf940a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e1ce0(puVar5,param_2,puVar2,uVar4);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(puVar2);
      return puVar5;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return puVar5;
}



/* Entry: 105e489dc; end: 105e48ac7; -[SCTopicSendToAddTopicWithDescriptionCollectionViewCell _hashtagTypingAttributes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_105e489dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  uStack_50 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_48 = puVar1;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x88);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_40 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_48,&uStack_58,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return puVar5;
  }
  ___stack_chk_fail();
  lVar6 = (long)_DAT_112737e6c;
  puVar5 = *(undefined **)(puVar1 + lVar6);
  puVar2 = puVar5;
  func_0x00010bf193c0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(puVar1 + lVar6);
  func_0x00010c15a1e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf940a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e1ce0(puVar5,param_2,puVar2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  return puVar5;
}



/* Entry: 105e48ac8; end: 105e48b5f; -[SCTopicSendToAddTopicWithDescriptionCollectionViewCell _currentCursorPosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105e48ac8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112737e6c;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  uVar1 = uVar4;
  func_0x00010bf193c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c15a1e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf940a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e1ce0(uVar4,param_2,uVar1,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 105e48b60; end: 105e48b6f; -[SCTopicSendToAddTopicWithDescriptionCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105e48b60(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112737e90);
}



/* Entry: 105e48b70; end: 105e48b7f; -[SCTopicSendToAddTopicWithDescriptionCollectionViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105e48b70(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112737e98);
}



/* Entry: 105e48b80; end: 105e48bbf; -[SCTopicSendToAddTopicWithDescriptionCollectionViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e48b80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112737e98;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e48bc0; end: 105e48bcf; -[SCTopicSendToAddTopicWithDescriptionCollectionViewCell circumstanceEngine] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105e48bc0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112737e94);
}



/* Entry: 105e48bd0; end: 105e48c0f; -[SCTopicSendToAddTopicWithDescriptionCollectionViewCell setCircumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e48bd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112737e94;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e48c10; end: 105e48c2f; -[SCTopicSendToAddTopicWithDescriptionCollectionViewCell searchDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e48c10(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112737ea0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e48c30; end: 105e48c43; -[SCTopicSendToAddTopicWithDescriptionCollectionViewCell setSearchDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e48c30(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112737ea0,param_3);
  return;
}



/* Entry: 105e48c44; end: 105e48c63; -[SCTopicSendToAddTopicWithDescriptionCollectionViewCell addTopicDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e48c44(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112737ea4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e48c64; end: 105e48c77; -[SCTopicSendToAddTopicWithDescriptionCollectionViewCell setAddTopicDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e48c64(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112737ea4,param_3);
  return;
}



/* Entry: 105e48c78; end: 105e48c87; -[SCTopicSendToAddTopicWithDescriptionCollectionViewCell remixConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105e48c78(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112737ea8);
}



/* Entry: 105e48c88; end: 105e48cc7; -[SCTopicSendToAddTopicWithDescriptionCollectionViewCell setRemixConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e48c88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112737ea8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e48cc8; end: 105e48ce7; -[SCTopicSendToAddTopicWithDescriptionCollectionViewCell spotlightPlaceTagsViewProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e48cc8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112737e84);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e48ce8; end: 105e48cfb; -[SCTopicSendToAddTopicWithDescriptionCollectionViewCell setSpotlightPlaceTagsViewProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e48ce8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112737e84,param_3);
  return;
}



/* Entry: 105e48cfc; end: 105e48d0b; -[SCTopicSendToAddTopicWithDescriptionCollectionViewCell snapCaptureLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105e48cfc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112737e88);
}



/* Entry: 105e48d0c; end: 105e48d4b; -[SCTopicSendToAddTopicWithDescriptionCollectionViewCell setSnapCaptureLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e48d0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112737e88;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e48d4c; end: 105e48e5f; -[SCTopicSendToAddTopicWithDescriptionCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e48d4c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112737e88,0);
  _objc_destroyWeak(param_1 + _DAT_112737e84);
  _objc_storeStrong(param_1 + _DAT_112737ea8,0);
  _objc_destroyWeak(param_1 + _DAT_112737ea4);
  _objc_destroyWeak(param_1 + _DAT_112737ea0);
  _objc_storeStrong(param_1 + _DAT_112737e94,0);
  _objc_storeStrong(param_1 + _DAT_112737e98,0);
  _objc_storeStrong(param_1 + _DAT_112737e90,0);
  _objc_storeStrong(param_1 + _DAT_112737e74,0);
  _objc_storeStrong(param_1 + _DAT_112737e8c,0);
  _objc_storeStrong(param_1 + _DAT_112737e80,0);
  _objc_storeStrong(param_1 + _DAT_112737e7c,0);
  _objc_storeStrong(param_1 + _DAT_112737e78,0);
  _objc_storeStrong(param_1 + _DAT_112737e68,0);
  _objc_storeStrong(param_1 + _DAT_112737e6c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112737e70,0);
  return;
}



/* Entry: 105e48e60; end: 105e4901b; -[SCTopicSendToCommunitySectionCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105e48e60(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126ed4f0;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17d4c0();
    _objc_release(puVar2);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar5 = (long)_DAT_112737eac;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar3;
    _objc_release(uVar4);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
    puVar3 = PTR_PTR_1126b52f0;
    _objc_opt_new();
    lVar6 = (long)_DAT_112737eb0;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c22a660(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(uVar4);
    _objc_release(puVar3);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar5));
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112737eb4);
    *(undefined **)((long)puVar1 + (long)_DAT_112737eb4) = puVar3;
    _objc_release(uVar4);
    func_0x00010b816670();
    *(undefined8 *)((long)puVar1 + (long)_DAT_112737eb8) = param_1;
    func_0x00010c21e900(puVar1);
    func_0x00010c1af000(puVar1);
    func_0x00010beabac0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105e4901c; end: 105e49323; -[SCTopicSendToCommunitySectionCollectionViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4901c(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  ulong uVar1;
  byte bVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  long lStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_1126ed4f0;
  lStack_90 = param_5;
  _objc_msgSendSuper2(&lStack_90,PTR_s_layoutSubviews_112600e60);
  bVar2 = *(byte *)(param_5 + _DAT_112737ebc);
  lVar8 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  if ((bVar2 & 1) == 0) {
    _CGRectInset(param_1,param_2,param_3,param_4,0x4000000000000000,0);
    _objc_release(lVar8);
  }
  else {
    _objc_release(lVar8);
    puVar3 = PTR_PTR_1126b52d0;
    uVar7 = *(ulong *)(param_5 + _DAT_112737ec0);
    _objc_retain(uVar7);
    _objc_opt_class(puVar3);
    uVar4 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar3);
    uVar1 = uVar7;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar7);
    uVar4 = uVar1;
    func_0x00010c073fc0();
    _objc_release(uVar1);
    dVar10 = 32.0;
    if ((int)uVar4 == 0) {
      dVar10 = 56.0;
    }
    param_3 = param_3 - dVar10;
  }
  lVar8 = (long)_DAT_112737ec4;
  dVar10 = 0.0;
  dVar16 = 0.0;
  if ((*(ulong *)(param_5 + lVar8) & 1) != 0) {
    dVar16 = *(double *)(param_5 + _DAT_112737eb8);
  }
  if (((uint)*(ulong *)(param_5 + lVar8) >> 1 & 1) != 0) {
    dVar10 = *(double *)(param_5 + _DAT_112737eb8);
  }
  lVar9 = (long)_DAT_112737eb0;
  uVar5 = *(undefined8 *)(param_5 + lVar9);
  func_0x00010c22a660(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar5);
  dVar14 = param_1 + 0.0;
  dVar15 = param_2 + dVar16;
  dVar10 = param_4 - (dVar16 + dVar10);
  func_0x00010bea6e60(param_1,param_2,param_3,param_4,param_5);
  func_0x000108fe9e04(0,0x3ff0000000000000,0x4018000000000000,0x3faeb851eb851eb8,
                      *(undefined8 *)(param_5 + lVar9));
  uVar6 = (uint)*(ulong *)(param_5 + lVar8);
  if ((*(ulong *)(param_5 + lVar8) & 1) != 0) {
    dVar16 = dVar14;
    _CGRectGetMinX(dVar14,dVar15,param_3,dVar10);
    dVar11 = dVar14;
    _CGRectGetMinY(dVar14,dVar15,param_3,dVar10);
    lVar9 = (long)_DAT_112737eb8;
    dVar13 = *(double *)(param_5 + lVar9);
    dVar12 = dVar14;
    _CGRectGetWidth(dVar14,dVar15,param_3,dVar10);
    func_0x00010b816528(dVar16,dVar11 - dVar13,dVar12,*(undefined8 *)(param_5 + lVar9));
    func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_112737ecc));
    uVar6 = (uint)*(undefined8 *)(param_5 + lVar8);
  }
  if ((uVar6 >> 1 & 1) != 0) {
    dVar16 = dVar14;
    _CGRectGetMinX(dVar14,dVar15,param_3,dVar10);
    dVar11 = dVar14;
    _CGRectGetMaxY(dVar14,dVar15,param_3,dVar10);
    _CGRectGetWidth(dVar14,dVar15,param_3,dVar10);
    func_0x00010b816528(dVar16,dVar11,dVar14,*(undefined8 *)(param_5 + _DAT_112737eb8));
    func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_112737ed0));
  }
  return;
}



/* Entry: 105e49324; end: 105e49cef; -[SCTopicSendToCommunitySectionCollectionViewCell _setupConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e49324(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  int iVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  ulong uStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = (long)_DAT_112737ed4;
  if (*(long *)(param_1 + lVar20) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  iVar23 = _DAT_112737eac;
  puVar9 = PTR_PTR_1126b52d0;
  uStack_138 = param_1;
  if ((*(byte *)(param_1 + (long)_DAT_112737ebc) & 1) == 0) {
    lVar22 = (long)_DAT_112737eac;
    uStack_128 = *(ulong *)(param_1 + lVar22);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    uStack_140 = uStack_138;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uStack_130 = uStack_128;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_148 = *(ulong *)(param_1 + lVar22);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uStack_150 = param_1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    uStack_158 = uStack_150;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uStack_160 = uStack_148;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_168 = *(ulong *)(param_1 + lVar22);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_170 = param_1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    uStack_178 = uStack_170;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_180 = uStack_168;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_188 = *(ulong *)(param_1 + lVar22);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uStack_190 = param_1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    uStack_198 = uStack_190;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uStack_1a0 = uStack_188;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = (long)_DAT_112737eb0;
    uStack_1a8 = *(ulong *)(param_1 + lVar24);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uStack_1b0 = *(undefined8 *)(param_1 + lVar22);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uStack_1b8 = uStack_1a8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_1c0 = *(undefined8 *)(param_1 + lVar24);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uStack_1c8 = *(undefined8 *)(param_1 + lVar22);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uStack_1d0 = uStack_1c0;
    func_0x00010bf493c0(0x4000000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar24);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar22);
    func_0x00010c2793a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar7;
    func_0x00010bf493c0(0xc000000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + lVar24);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = *(undefined **)(param_1 + lVar22);
    func_0x00010bf1ff80(puVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1);
  }
  else {
    uVar21 = *(ulong *)(param_1 + (long)_DAT_112737ec0);
    _objc_retain(uVar21);
    _objc_opt_class(puVar9);
    uVar2 = uVar21;
    _objc_opt_isKindOfClass(uVar21,puVar9);
    uStack_130 = uVar21;
    if ((uVar2 & 1) == 0) {
      uStack_130 = 0;
    }
    _objc_retain(uStack_130);
    _objc_release(uVar21);
    uVar2 = uStack_130;
    func_0x00010c073fc0();
    iVar23 = _DAT_112737eac;
    lVar24 = (long)_DAT_112737eac;
    uStack_128 = *(ulong *)(param_1 + lVar24);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    uStack_140 = uStack_138;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uStack_148 = uStack_128;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_150 = *(ulong *)(param_1 + lVar24);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uStack_158 = param_1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    uStack_160 = uStack_158;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uStack_168 = uStack_150;
    func_0x00010bf493c0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_170 = *(ulong *)(param_1 + lVar24);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_178 = param_1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    uStack_180 = uStack_178;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = 0xc030000000000000;
    if ((int)uVar2 == 0) {
      uVar25 = 0xc044000000000000;
    }
    uStack_188 = uStack_170;
    func_0x00010bf493c0(uVar25);
    _objc_retainAutoreleasedReturnValue();
    uStack_190 = *(ulong *)(param_1 + lVar24);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uStack_198 = param_1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    uStack_1a0 = uStack_198;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uStack_1a8 = uStack_190;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = (long)_DAT_112737eb0;
    uStack_1b0 = *(undefined8 *)(param_1 + lVar22);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uStack_1b8 = *(ulong *)(param_1 + lVar24);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uStack_1c0 = uStack_1b0;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_1c8 = *(undefined8 *)(param_1 + lVar22);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uStack_1d0 = *(undefined8 *)(param_1 + lVar24);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uStack_1c8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar22);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = *(undefined8 *)(param_1 + lVar24);
    func_0x00010c2793a0(uVar25);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = *(undefined **)(param_1 + lVar22);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar24);
    func_0x00010bf1ff80(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1);
    _objc_release(puVar6);
  }
  _objc_release(puVar9);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar8);
  _objc_release(uVar25);
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(uStack_1d0);
  _objc_release(uStack_1c8);
  _objc_release(uStack_1c0);
  _objc_release(uStack_1b8);
  _objc_release(uStack_1b0);
  _objc_release(uStack_1a8);
  _objc_release(uStack_1a0);
  _objc_release(uStack_198);
  _objc_release(uStack_190);
  _objc_release(uStack_188);
  _objc_release(uStack_180);
  _objc_release(uStack_178);
  _objc_release(uStack_170);
  _objc_release(uStack_168);
  _objc_release(uStack_160);
  _objc_release(uStack_158);
  _objc_release(uStack_150);
  _objc_release(uStack_148);
  _objc_release(uStack_130);
  _objc_release(uStack_140);
  _objc_release(uStack_138);
  _objc_release(uStack_128);
  lVar22 = (long)_DAT_112737ed8;
  lVar24 = *(long *)(param_1 + lVar22);
  if (lVar24 != 0) {
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar24;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + (long)iVar23);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar10;
    func_0x00010bf493c0(0x4014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_1 + lVar22);
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar13;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + (long)iVar23);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar25;
    func_0x00010bf493c0(0x4000000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_1 + lVar22);
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar15;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_1 + (long)iVar23);
    func_0x00010c2793a0(uVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf493c0(0xc000000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_1 + lVar22);
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar17;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be9ce00(PTR_PTR_1126c50a0);
    uVar18 = uVar3;
    func_0x00010bf49420();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1);
    _objc_release(puVar9);
    _objc_release(uVar18);
    _objc_release(uVar3);
    _objc_release(uVar17);
    _objc_release(uVar8);
    _objc_release(uVar16);
    _objc_release(uVar7);
    _objc_release(uVar15);
    _objc_release(uVar5);
    _objc_release(uVar14);
    _objc_release(uVar25);
    _objc_release(uVar13);
    _objc_release(lVar12);
    _objc_release(uVar11);
    _objc_release(lVar10);
    _objc_release(lVar24);
  }
  uVar25 = *(undefined8 *)(param_1 + lVar20);
  *(undefined **)(param_1 + lVar20) = puVar1;
  _objc_retain(puVar1);
  _objc_release(uVar25);
  uVar25 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf20c00(*(undefined8 *)(puVar1 + _DAT_112737eb0));
                    /* WARNING: Could not recover jumptable at 0x00010bea6e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar1,PTR_s__setRoundedCorners_roundedRect__112587540,uVar25);
  return;
}



/* Entry: 105e49cf0; end: 105e49d27; -[SCTopicSendToCommunitySectionCollectionViewCell setRoundedCorners:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e49cf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf20c00(*(undefined8 *)(param_1 + _DAT_112737eb0));
                    /* WARNING: Could not recover jumptable at 0x00010bea6e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setRoundedCorners_roundedRect__112587540,param_3);
  return;
}



/* Entry: 105e49d28; end: 105e49e5f; -[SCTopicSendToCommunitySectionCollectionViewCell _setRoundedCorners:roundedRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e49d28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,long param_7)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = (long)_DAT_112737ec8;
  lVar6 = (long)_DAT_112737edc;
  if (*(long *)(param_5 + lVar5) == param_7) {
    puVar1 = (undefined8 *)(param_5 + lVar6);
    uVar2 = param_5;
    _CGRectEqualToRect(param_1,param_2,param_3,param_4,*puVar1,puVar1[1],puVar1[2],puVar1[3]);
    if ((uVar2 & 1) != 0) {
      return;
    }
  }
  puVar1 = (undefined8 *)(param_5 + lVar6);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  *(long *)(param_5 + lVar5) = param_7;
  puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  lVar6 = (long)_DAT_112737eb0;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar6));
  func_0x00010bf199e0(puVar3,param_6,*(undefined8 *)(param_5 + lVar5));
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  uVar4 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010c22a660(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105e49e60; end: 105e49f07; -[SCTopicSendToCommunitySectionCollectionViewCell setSeparatorMask:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e49e60(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112737ec4;
  if (*(ulong *)(param_1 + lVar1) != param_3) {
    *(ulong *)(param_1 + lVar1) = param_3;
    if ((param_3 & 1) != 0) {
      func_0x00010be3a920(param_1);
    }
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112737ecc));
    if ((*(byte *)(param_1 + lVar1) >> 1 & 1) != 0) {
      func_0x00010be39620(param_1);
    }
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112737ed0));
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
    return;
  }
  return;
}



/* Entry: 105e49f08; end: 105e49f8f; -[SCTopicSendToCommunitySectionCollectionViewCell setSeparatorColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e49f08(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112737eb4;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = param_3;
    _objc_release(uVar2);
    func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_112737ecc),param_2,
                        *(undefined8 *)(param_1 + lVar3));
    func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_112737ed0),param_2,
                        *(undefined8 *)(param_1 + lVar3));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e49f90; end: 105e4a013; -[SCTopicSendToCommunitySectionCollectionViewCell _initTopSeparatorIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e49f90(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112737ecc;
  if (*(long *)(param_1 + lVar3) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112737eac),PTR_s_addSubview__11259c880,
             *(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 105e4a014; end: 105e4a097; -[SCTopicSendToCommunitySectionCollectionViewCell _initBottomSeparatorIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4a014(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112737ed0;
  if (*(long *)(param_1 + lVar3) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112737eac),PTR_s_addSubview__11259c880,
             *(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 105e4a098; end: 105e4a183; -[SCTopicSendToCommunitySectionCollectionViewCell setSelectedTopicsController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4a098(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112737ed8;
  lVar1 = *(long *)(param_1 + lVar4);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c960();
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
  }
  *(undefined8 *)(param_1 + lVar4) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112737eac);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar3);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010beabad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupConstraints_112588858);
  return;
}



/* Entry: 105e4a184; end: 105e4a1c7; -[SCTopicSendToCommunitySectionCollectionViewCell setMatchaSendToEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4a184(long param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  
  *(byte *)(param_1 + _DAT_112737ebc) = param_3;
  uVar1 = 0x3ff0000000000000;
  if ((param_3 & 1) == 0) {
    func_0x00010b816670();
  }
  *(undefined8 *)(param_1 + _DAT_112737eb8) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010beabad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupConstraints_112588858);
  return;
}



/* Entry: 105e4a1c8; end: 105e4a317; -[SCTopicSendToCommunitySectionCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4a1c8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_112737ec0;
  uVar4 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  if (uVar4 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar4);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar4);
    }
    else {
      uVar1 = uVar4;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar4);
      if ((uVar1 & 1) != 0) goto LAB_105e4a300;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b52d0;
    uVar5 = *(ulong *)(param_1 + lVar6);
    _objc_retain(uVar5);
    _objc_opt_class(puVar3);
    uVar1 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar3);
    uVar4 = uVar5;
    if ((uVar1 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar5);
    uVar1 = uVar4;
    func_0x00010bfbbf20();
    *(char *)(param_1 + _DAT_112737ee0) = (char)uVar1;
    uVar1 = uVar4;
    func_0x00010c076140();
    _objc_release(uVar4);
    if ((int)uVar1 == 0) {
      func_0x00010c1fce20(param_1);
    }
    else {
      func_0x00010c1ee980();
    }
    func_0x00010beabac0(param_1);
    func_0x00010c1cbe20(param_1);
  }
LAB_105e4a300:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e4a318; end: 105e4a34f; +[SCTopicSendToCommunitySectionCollectionViewCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16] FUN_105e4a318(double param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  
  dVar1 = param_1;
  func_0x00010be9ce00(PTR_PTR_1126c50a0);
  auVar2._8_8_ = dVar1 + 5.0 + 5.0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 105e4a350; end: 105e4a3d7; +[SCTopicSendToCommunitySectionCollectionViewCell _sectionHeightForViewModel:] */

double FUN_105e4a350(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  double dVar4;
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126b52d0;
  _objc_opt_class(PTR_PTR_1126b52d0);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c155f00(uVar1);
  dVar4 = 30.0;
  if (0.0 < param_1) {
    func_0x00010c155f00(uVar1);
    dVar4 = param_1;
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  return dVar4;
}



/* Entry: 105e4a3d8; end: 105e4a447; -[SCTopicSendToCommunitySectionCollectionViewCell applyLayoutAttributes:] */

void FUN_105e4a3d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_applyLayoutAttributes__112527ed0;
  puStack_38 = PTR_PTR_1126ed4f0;
  uStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_40,puVar1,param_3);
  func_0x000108fdaa20(param_1,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 105e4a448; end: 105e4a457; -[SCTopicSendToCommunitySectionCollectionViewCell roundedCorners] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105e4a448(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112737ec8);
}



/* Entry: 105e4a458; end: 105e4a467; -[SCTopicSendToCommunitySectionCollectionViewCell separatorMask] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105e4a458(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112737ec4);
}



/* Entry: 105e4a468; end: 105e4a477; -[SCTopicSendToCommunitySectionCollectionViewCell separatorColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105e4a468(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112737eb4);
}



/* Entry: 105e4a478; end: 105e4a487; -[SCTopicSendToCommunitySectionCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105e4a478(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112737ec0);
}



/* Entry: 105e4a488; end: 105e4a497; -[SCTopicSendToCommunitySectionCollectionViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105e4a488(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112737ee4);
}



/* Entry: 105e4a498; end: 105e4a4d7; -[SCTopicSendToCommunitySectionCollectionViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4a498(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112737ee4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e4a4d8; end: 105e4a4e7; -[SCTopicSendToCommunitySectionCollectionViewCell matchaSendToEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105e4a4d8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112737ebc);
}



/* Entry: 105e4a4e8; end: 105e4a5a7; -[SCTopicSendToCommunitySectionCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4a4e8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112737ee4,0);
  _objc_storeStrong(param_1 + _DAT_112737ec0,0);
  _objc_storeStrong(param_1 + _DAT_112737eb4,0);
  _objc_storeStrong(param_1 + _DAT_112737ed4,0);
  _objc_storeStrong(param_1 + _DAT_112737ed8,0);
  _objc_storeStrong(param_1 + _DAT_112737ee8,0);
  _objc_storeStrong(param_1 + _DAT_112737ed0,0);
  _objc_storeStrong(param_1 + _DAT_112737ecc,0);
  _objc_storeStrong(param_1 + _DAT_112737eb0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112737eac,0);
  return;
}



/* Entry: 105e4a5a8; end: 105e4a5b3; +[SCTopicSendToSearchHeaderCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16] FUN_105e4a5a8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x403e000000000000;
  auVar1._0_8_ = 0x3ff0000000000000;
  return auVar1;
}



/* Entry: 105e4a5b4; end: 105e4a5c3; -[SCTopicSendToSearchHeaderCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105e4a5b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112737eec);
}



/* Entry: 105e4a5c4; end: 105e4a603; -[SCTopicSendToSearchHeaderCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4a5c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112737eec;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e4a604; end: 105e4a617; -[SCTopicSendToSearchHeaderCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4a604(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112737eec,0);
  return;
}



/* Entry: 105e4a618; end: 105e4a6a3; -[SCTopicSendToSearchTopicView _spotlightSubtitleText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4a618(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010c073920();
  if ((int)lVar1 == 0) {
    lVar3 = (long)_DAT_112737ef0;
    lVar2 = *(long *)(param_1 + lVar3);
    func_0x00010c260dc0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    if (lVar1 == 0) {
      func_0x000108f5836c();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c260dc0(*(undefined8 *)(param_1 + lVar3));
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x000108f583e4();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e4a6a4; end: 105e4a717; -[SCTopicSendToSearchTopicView setIsFriendsOnlyProfile:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4a6a4(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + _DAT_112737ef4) = param_3;
  if (*(char *)(param_1 + _DAT_112737ef8) == '\x01') {
    lVar1 = *(long *)(param_1 + _DAT_112737efc);
    if (lVar1 != 0) {
      func_0x00010bebf0a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(lVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 105e4a718; end: 105e4b59f; -[SCTopicSendToSearchTopicView initWithSelectedTopicsCollectionView:containerFrame:isSpotlightSection:useV10Layout:matchaSendToEnabled:checkmarkTapActionModel:overlayTapActionModel:placeSearchView:isFullScreenEnabled:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105e4a718(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined1 param_9,int param_10,undefined8 param_11,undefined8 param_12,long param_13,
             undefined1 param_14,undefined4 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auStack_e8 [48];
  undefined8 uStack_b8;
  undefined *puStack_b0;
  
  _objc_retain(param_7);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_16);
  puStack_b0 = PTR_PTR_1126ed4f8;
  uVar19 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar20 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar21 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar22 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  puVar1 = &uStack_b8;
  uStack_b8 = param_5;
  _objc_msgSendSuper2(uVar19,uVar20,uVar21,uVar22,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar14 = (long)_DAT_112737f00;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined8 *)((long)puVar1 + lVar14) = param_11;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_112737f04;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined8 *)((long)puVar1 + lVar14) = param_12;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_112737ef8;
    *(undefined1 *)((long)puVar1 + lVar9) = param_8;
    lVar10 = (long)_DAT_112737f08;
    *(undefined1 *)((long)puVar1 + lVar10) = param_9;
    *(char *)((long)puVar1 + (long)_DAT_112737f0c) = (char)param_10;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112737f10) = param_14;
    uVar2 = param_16;
    func_0x000108f48934();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = (long)_DAT_112737ef0;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar16);
    *(undefined8 *)((long)puVar1 + lVar16) = uVar2;
    _objc_release(uVar11);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
    lVar12 = (long)_DAT_112737f14;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined **)((long)puVar1 + lVar12) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c14c540(0x3fc999999999999a,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar12));
    _objc_release(puVar3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar12);
    puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(uVar2);
    _objc_release(puVar3);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar12));
    func_0x00010befbb60(puVar1);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
    lVar13 = (long)_DAT_112737f18;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined **)((long)puVar1 + lVar13) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar13));
    _objc_release(puVar3);
    lVar14 = *(long *)((long)puVar1 + lVar16);
    func_0x00010bf34120();
    uVar2 = *(undefined8 *)((long)puVar1 + lVar13);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = 0x4039000000000000;
    if (lVar14 != 1) {
      uVar11 = 0x4024000000000000;
    }
    func_0x00010c1842e0(uVar11);
    _objc_release(uVar2);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar13));
    func_0x00010befbb60(puVar1);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
    lVar15 = (long)_DAT_112737f1c;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined **)((long)puVar1 + lVar15) = puVar3;
    _objc_release(uVar2);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar15));
    uVar2 = *(undefined8 *)((long)puVar1 + lVar15);
    puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(uVar2);
    _objc_release(puVar3);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar13));
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
    lVar17 = (long)_DAT_112737f20;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar17);
    *(undefined **)((long)puVar1 + lVar17) = puVar3;
    _objc_release(uVar2);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar17));
    uVar11 = *(undefined8 *)((long)puVar1 + lVar17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar16);
    func_0x000108f48dd8(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(uVar11);
    _objc_release(uVar2);
    lVar14 = *(long *)((long)puVar1 + lVar16);
    func_0x00010bfe5460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar2 = *(undefined8 *)((long)puVar1 + lVar17);
    if (lVar14 == 0) {
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf414e0(0x3fc999999999999a);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(uVar2);
      _objc_release(puVar4);
    }
    else {
      puVar3 = *(undefined **)((long)puVar1 + lVar16);
      func_0x00010bfe5460(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(uVar2);
    }
    _objc_release(puVar3);
    func_0x00010c1f5ec0(0x4032000000000000,*(undefined8 *)((long)puVar1 + lVar17));
    func_0x00010c181f00(0x447a0000,*(undefined8 *)((long)puVar1 + lVar17));
    func_0x00010c181cc0(0x447a0000,*(undefined8 *)((long)puVar1 + lVar17));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar15));
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
    lVar14 = (long)_DAT_112737f24;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined **)((long)puVar1 + lVar14) = puVar3;
    _objc_release(uVar2);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar14));
    uVar2 = *(undefined8 *)((long)puVar1 + lVar14);
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(uVar2);
    _objc_release(puVar3);
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar14));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar15));
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
    lVar17 = (long)_DAT_112737f28;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar17);
    *(undefined **)((long)puVar1 + lVar17) = puVar3;
    _objc_release(uVar2);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar17));
    func_0x00010c181f00(0x447a0000,*(undefined8 *)((long)puVar1 + lVar17));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar15));
    puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
    lVar18 = (long)_DAT_112737f2c;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar18);
    *(undefined **)((long)puVar1 + lVar18) = puVar3;
    _objc_release(uVar2);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar18));
    func_0x00010c181f00(0x437a0000,*(undefined8 *)((long)puVar1 + lVar18));
    func_0x00010c181cc0(0x437a0000,*(undefined8 *)((long)puVar1 + lVar18));
    func_0x00010c181f00(0x447a0000,*(undefined8 *)((long)puVar1 + lVar18));
    lVar14 = *(long *)((long)puVar1 + lVar18);
    func_0x00010c181cc0(0x447a0000,lVar14);
    if (*(char *)((long)puVar1 + lVar9) == '\x01') {
      lVar14 = *(long *)((long)puVar1 + lVar16);
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar14;
      func_0x00010c08fa60();
      _objc_release(lVar14);
      uVar2 = *(undefined8 *)((long)puVar1 + lVar18);
      if (lVar5 == 0) {
        func_0x000108f5833c();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        lVar14 = *(long *)((long)puVar1 + lVar16);
        func_0x00010c2711a0(lVar14);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c212f20(uVar2);
    }
    else {
      uVar2 = *(undefined8 *)((long)puVar1 + lVar18);
      func_0x000108f580b4();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(uVar2);
    }
    _objc_release(lVar14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar18);
    uVar11 = 0x4031000000000000;
    if (*(char *)((long)puVar1 + lVar10) == '\0') {
      uVar11 = 0x4030000000000000;
    }
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(uVar11,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(uVar2);
    _objc_release(puVar3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar18);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(uVar2);
    _objc_release(puVar3);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar15));
    uVar6 = *(ulong *)((long)puVar1 + lVar16);
    func_0x00010c12e780();
    if ((uVar6 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
      _objc_alloc();
      func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
      lVar14 = (long)_DAT_112737efc;
      uVar2 = *(undefined8 *)((long)puVar1 + lVar14);
      *(undefined **)((long)puVar1 + lVar14) = puVar3;
      _objc_release(uVar2);
      func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar14));
      func_0x00010c181f00(0x437a0000,*(undefined8 *)((long)puVar1 + lVar14));
      func_0x00010c181cc0(0x437a0000,*(undefined8 *)((long)puVar1 + lVar14));
      func_0x00010c181f00(0x447a0000,*(undefined8 *)((long)puVar1 + lVar14));
      puVar7 = *(undefined8 **)((long)puVar1 + lVar14);
      func_0x00010c181cc0(0x447a0000,puVar7);
      uVar2 = *(undefined8 *)((long)puVar1 + lVar14);
      if (*(char *)((long)puVar1 + lVar9) == '\x01') {
        puVar7 = puVar1;
        func_0x00010bebf0a0(puVar1);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x000108f57e44();
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c212f20(uVar2);
      _objc_release(puVar7);
      uVar2 = *(undefined8 *)((long)puVar1 + lVar14);
      puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
      if (param_10 == 0) {
        func_0x00010c0c7340(0x4026000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010bf6d680(0x4028000000000000);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c19e480(uVar2);
      _objc_release(puVar3);
      uVar2 = *(undefined8 *)((long)puVar1 + lVar14);
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180(uVar2);
      _objc_release(puVar3);
      func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar17));
    }
    puVar3 = PTR_PTR_1126c3298;
    _objc_alloc();
    func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
    lVar14 = (long)_DAT_112737f30;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined **)((long)puVar1 + lVar14) = puVar3;
    _objc_release(uVar2);
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar14));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar14));
    func_0x00010c181f00(0x447a0000,*(undefined8 *)((long)puVar1 + lVar14));
    func_0x00010c181cc0(0x447a0000,*(undefined8 *)((long)puVar1 + lVar14));
    uVar2 = *(undefined8 *)((long)puVar1 + lVar14);
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fc0(uVar2);
    _objc_release(puVar3);
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar14));
    if (param_10 != 0) {
      uVar2 = *(undefined8 *)((long)puVar1 + lVar14);
      func_0x00010bfe90c0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c182220();
      _objc_release(uVar2);
      _CGAffineTransformMakeScale(auStack_e8,0x3fed555555555555,0x3fed555555555555);
      func_0x00010c219960(*(undefined8 *)((long)puVar1 + lVar14));
    }
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar14));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar15));
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
    lVar14 = (long)_DAT_112737f34;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined **)((long)puVar1 + lVar14) = puVar3;
    _objc_release(uVar2);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar14));
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar14));
    _objc_release(puVar3);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar13));
    lVar14 = (long)_DAT_112737f38;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined8 *)((long)puVar1 + lVar14) = param_7;
    _objc_release(uVar2);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar14));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar13));
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
    lVar14 = (long)_DAT_112737f3c;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined **)((long)puVar1 + lVar14) = puVar3;
    _objc_release(uVar2);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar14));
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar14));
    _objc_release(puVar3);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar13));
    if (param_13 != 0) {
      lVar14 = (long)_DAT_112737f40;
      _objc_retain(param_13);
      uVar2 = *(undefined8 *)((long)puVar1 + lVar14);
      *(long *)((long)puVar1 + lVar14) = param_13;
      _objc_release(uVar2);
      func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar14));
      func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar13));
    }
    puVar3 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
    _objc_alloc_init(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
    func_0x00010c1f7ac0();
    puVar4 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
    _objc_alloc();
    func_0x00010c014040(uVar19,uVar20,uVar21,uVar22);
    lVar14 = (long)_DAT_112737f44;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined **)((long)puVar1 + lVar14) = puVar4;
    _objc_release(uVar2);
    func_0x00010c2026e0(*(undefined8 *)((long)puVar1 + lVar14));
    uVar2 = *(undefined8 *)((long)puVar1 + lVar14);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(uVar2);
    _objc_release(puVar4);
    func_0x00010c181f80(0,0,0x4059000000000000,0,*(undefined8 *)((long)puVar1 + lVar14));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar14));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar13));
    puVar4 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
    lVar9 = (long)_DAT_112737f48;
    uVar19 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined **)((long)puVar1 + lVar9) = puVar4;
    _objc_release(uVar19);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar9));
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar9));
    uVar19 = *(undefined8 *)((long)puVar1 + lVar9);
    puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(uVar19);
    _objc_release(puVar4);
    uVar19 = *(undefined8 *)((long)puVar1 + lVar9);
    func_0x000108f582c4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(uVar19);
    _objc_release(puVar4);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar13));
    *(undefined8 *)((long)puVar1 + (long)_DAT_112737f4c) = 0x3ff0000000000000;
    uVar19 = *(undefined8 *)((long)puVar1 + lVar13);
    puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(uVar19);
    _objc_release(puVar4);
    uVar19 = *(undefined8 *)((long)puVar1 + lVar13);
    func_0x00010c08c0e0(uVar19);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar19);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar4;
    func_0x00010bf414e0(0x3fd999999999999a);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar12));
    _objc_release(puVar8);
    _objc_release(puVar4);
    func_0x00010c181f80(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),
                        *(undefined8 *)((long)puVar1 + lVar14));
    func_0x00010bee40e0(puVar1);
    func_0x00010bee40a0(puVar1);
    func_0x00010c181980(param_1,param_2,param_3,param_4,puVar1);
    _objc_release(puVar3);
  }
  _objc_release(param_16);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_7);
  return puVar1;
}



/* Entry: 105e4b5a0; end: 105e4b6bf; -[SCTopicSendToSearchTopicView setContainerFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4b5a0(double param_1,double param_2,double param_3,double param_4,ulong param_5)

{
  double *pdVar1;
  bool bVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  
  pdVar1 = (double *)(param_5 + (long)_DAT_112737f50);
  uVar3 = param_5;
  _CGRectEqualToRect(*pdVar1,pdVar1[1],pdVar1[2],pdVar1[3],param_1,param_2,param_3,param_4);
  if ((uVar3 & 1) != 0) {
    return;
  }
  *(double *)(param_5 + (long)_DAT_112737f54) = param_2;
  if ((*(byte *)(param_5 + (long)_DAT_112737f0c) & 1) == 0) {
    bVar2 = *(char *)(param_5 + (long)_DAT_112737f08) == '\0';
    dVar4 = 0.0;
    dVar5 = 2.0;
    if (bVar2) {
      dVar5 = 0.0;
    }
    *(double *)(param_5 + (long)_DAT_112737f58) = param_1 + dVar5;
    dVar5 = 4.0;
  }
  else {
    *(double *)(param_5 + (long)_DAT_112737f58) = param_1 + 16.0;
    bVar2 = *(char *)(param_5 + (long)_DAT_112737f10) == '\0';
    dVar4 = 56.0;
    dVar5 = 32.0;
  }
  if (bVar2) {
    dVar5 = dVar4;
  }
  *(double *)(param_5 + (long)_DAT_112737f5c) = param_3 - dVar5;
  *pdVar1 = param_1;
  pdVar1[1] = param_2;
  pdVar1[2] = param_3;
  pdVar1[3] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010beda7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s__updateLayoutConstraints_112594398);
  return;
}



/* Entry: 105e4b6c0; end: 105e4b723; -[SCTopicSendToSearchTopicView _updateLayoutConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4b6c0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112737f60;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                      *(undefined8 *)(param_1 + lVar3));
  lVar1 = param_1;
  func_0x00010be49000();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(long *)(param_1 + lVar3) = lVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010beef8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,PTR_s_activateConstraints__1125997d8,
             *(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 105e4b724; end: 105e4cda7; -[SCTopicSendToSearchTopicView _layoutConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4b724(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  undefined8 uVar74;
  undefined8 uVar75;
  undefined8 uVar76;
  undefined8 uVar77;
  undefined8 uVar78;
  undefined8 uVar79;
  undefined8 uVar80;
  undefined8 uVar81;
  undefined8 uVar82;
  undefined8 uVar83;
  undefined8 uVar84;
  undefined8 uVar85;
  undefined8 uVar86;
  undefined8 uVar87;
  undefined8 uVar88;
  undefined8 uVar89;
  undefined8 uVar90;
  undefined8 uVar91;
  undefined8 uVar92;
  undefined8 uVar93;
  undefined8 uVar94;
  undefined8 uVar95;
  undefined8 uVar96;
  undefined8 uVar97;
  undefined8 uVar98;
  undefined8 uVar99;
  undefined8 uVar100;
  undefined8 uVar101;
  undefined8 uVar102;
  undefined8 uVar103;
  undefined8 uVar104;
  undefined8 uVar105;
  undefined8 uVar106;
  undefined8 uVar107;
  undefined8 uVar108;
  undefined8 uVar109;
  undefined8 uVar110;
  undefined8 uVar111;
  undefined *puVar112;
  undefined *puVar113;
  ulong uVar114;
  undefined8 uVar115;
  undefined8 uVar116;
  undefined *puVar117;
  undefined8 uVar118;
  undefined8 uVar119;
  undefined *puVar120;
  long lVar121;
  undefined8 uVar122;
  undefined8 uVar123;
  long lVar124;
  undefined8 uVar125;
  long lVar126;
  long lVar127;
  long lVar128;
  long lVar129;
  long lVar130;
  long lVar131;
  long lVar132;
  long lVar133;
  undefined8 uVar134;
  undefined8 uVar135;
  undefined8 uVar136;
  undefined8 uVar137;
  double dVar138;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  
  puVar113 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar124 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar138 = *(double *)(param_1 + _DAT_112737f54);
  if (*(char *)(param_1 + _DAT_112737f0c) == '\x01') {
    dVar138 = dVar138 + -4.0;
    uVar137 = 0x4020000000000000;
    uVar135 = 0;
    uVar136 = 0x3ff0000000000000;
    uVar125 = 0x4041000000000000;
  }
  else {
    uVar137 = 0x4010000000000000;
    if (*(char *)(param_1 + _DAT_112737f08) == '\0') {
      uVar137 = 0x4024000000000000;
    }
    uVar135 = 0x4000000000000000;
    uVar136 = 0;
    uVar125 = 0x4042000000000000;
  }
  lVar126 = (long)_DAT_112737f14;
  uVar1 = *(undefined8 *)(param_1 + lVar126);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar121 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar115 = uVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar126);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar128 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar116 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar126);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar122 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar126);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar126 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar123 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar133 = (long)_DAT_112737f18;
  uVar6 = *(undefined8 *)(param_1 + lVar133);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar118 = uVar6;
  func_0x00010bf493c0(dVar138);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar133);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar119 = uVar8;
  func_0x00010bf493c0(*(undefined8 *)(param_1 + _DAT_112737f58));
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar133);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf49420(*(undefined8 *)(param_1 + _DAT_112737f5c));
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar133);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee96a0(param_1);
  uVar13 = uVar12;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  lVar127 = (long)_DAT_112737f1c;
  uVar14 = *(undefined8 *)(param_1 + lVar127);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar133);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + lVar127);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + lVar133);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar17;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + lVar127);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + lVar133);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_1 + lVar127);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar23;
  func_0x00010bf49420(0x4049000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar129 = (long)_DAT_112737f20;
  uVar25 = *(undefined8 *)(param_1 + lVar129);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_1 + lVar127);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar25;
  func_0x00010bf493c0(uVar137);
  _objc_retainAutoreleasedReturnValue();
  uVar28 = *(undefined8 *)(param_1 + lVar129);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(param_1 + lVar127);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar137 = uVar28;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = *(undefined8 *)(param_1 + lVar129);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar30;
  func_0x00010bf49420(uVar125);
  _objc_retainAutoreleasedReturnValue();
  uVar32 = *(undefined8 *)(param_1 + lVar129);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = uVar32;
  func_0x00010bf49420(uVar125);
  _objc_retainAutoreleasedReturnValue();
  lVar131 = (long)_DAT_112737f24;
  uVar34 = *(undefined8 *)(param_1 + lVar131);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = *(undefined8 *)(param_1 + lVar127);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = uVar34;
  func_0x00010bf493c0(0x4039000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar37 = *(undefined8 *)(param_1 + lVar131);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar38 = *(undefined8 *)(param_1 + lVar127);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar39 = uVar37;
  func_0x00010bf493c0(0x4014000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar40 = *(undefined8 *)(param_1 + lVar131);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar125 = uVar40;
  func_0x00010bf49420(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar41 = *(undefined8 *)(param_1 + lVar131);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar42 = uVar41;
  func_0x00010bf49420(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar131 = (long)_DAT_112737f28;
  uVar43 = *(undefined8 *)(param_1 + lVar131);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar44 = *(undefined8 *)(param_1 + lVar129);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar134 = 0x4024000000000000;
  if (*(char *)(param_1 + _DAT_112737f08) == '\0') {
    uVar134 = 0x4020000000000000;
  }
  uVar45 = uVar43;
  func_0x00010bf493c0(uVar134);
  _objc_retainAutoreleasedReturnValue();
  uVar46 = *(undefined8 *)(param_1 + lVar131);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar47 = *(undefined8 *)(param_1 + lVar127);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar134 = uVar46;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar129 = (long)_DAT_112737f2c;
  uVar48 = *(undefined8 *)(param_1 + lVar129);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar49 = *(undefined8 *)(param_1 + lVar131);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar50 = uVar48;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar51 = *(undefined8 *)(param_1 + lVar129);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar52 = *(undefined8 *)(param_1 + lVar131);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar53 = uVar51;
  func_0x00010bf493c0(uVar136);
  _objc_retainAutoreleasedReturnValue();
  uVar54 = *(undefined8 *)(param_1 + lVar129);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar55 = *(undefined8 *)(param_1 + lVar131);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar56 = uVar54;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar130 = (long)_DAT_112737f30;
  uVar57 = *(undefined8 *)(param_1 + lVar130);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar58 = *(undefined8 *)(param_1 + lVar131);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar59 = uVar57;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar60 = *(undefined8 *)(param_1 + lVar130);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar61 = *(undefined8 *)(param_1 + lVar127);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar62 = uVar60;
  func_0x00010bf493c0(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar63 = *(undefined8 *)(param_1 + lVar130);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar64 = *(undefined8 *)(param_1 + lVar127);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar65 = uVar63;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar66 = *(undefined8 *)(param_1 + lVar130);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar67 = uVar66;
  func_0x00010bf49420(0x4042000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar68 = *(undefined8 *)(param_1 + lVar130);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar69 = uVar68;
  func_0x00010bf49420(0x4042000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar130 = (long)_DAT_112737f34;
  uVar70 = *(undefined8 *)(param_1 + lVar130);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar71 = *(undefined8 *)(param_1 + lVar133);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar72 = uVar70;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar73 = *(undefined8 *)(param_1 + lVar130);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar74 = *(undefined8 *)(param_1 + lVar133);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar75 = uVar73;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar76 = *(undefined8 *)(param_1 + lVar130);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar77 = *(undefined8 *)(param_1 + lVar127);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar78 = uVar76;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar79 = *(undefined8 *)(param_1 + lVar130);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar127 = (long)_DAT_112737f4c;
  uVar80 = uVar79;
  func_0x00010bf49420(*(undefined8 *)(param_1 + lVar127));
  _objc_retainAutoreleasedReturnValue();
  lVar132 = (long)_DAT_112737f38;
  uVar81 = *(undefined8 *)(param_1 + lVar132);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar82 = *(undefined8 *)(param_1 + lVar133);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar83 = uVar81;
  func_0x00010bf493c0(0x4000000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar84 = *(undefined8 *)(param_1 + lVar132);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar85 = *(undefined8 *)(param_1 + lVar133);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar86 = uVar84;
  func_0x00010bf493c0(0xc000000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar87 = *(undefined8 *)(param_1 + lVar132);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar88 = *(undefined8 *)(param_1 + lVar130);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar89 = uVar87;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar90 = *(undefined8 *)(param_1 + lVar132);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar91 = uVar90;
  func_0x00010bf49420(0x4062200000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar130 = (long)_DAT_112737f3c;
  uVar92 = *(undefined8 *)(param_1 + lVar130);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar93 = *(undefined8 *)(param_1 + lVar133);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar94 = uVar92;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar95 = *(undefined8 *)(param_1 + lVar130);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar96 = *(undefined8 *)(param_1 + lVar133);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar97 = uVar95;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar98 = *(undefined8 *)(param_1 + lVar130);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar99 = *(undefined8 *)(param_1 + lVar132);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar100 = uVar98;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar101 = *(undefined8 *)(param_1 + lVar130);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar102 = uVar101;
  func_0x00010bf49420(*(undefined8 *)(param_1 + lVar127));
  _objc_retainAutoreleasedReturnValue();
  lVar127 = (long)_DAT_112737f48;
  uVar103 = *(undefined8 *)(param_1 + lVar127);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar104 = *(undefined8 *)(param_1 + lVar133);
  func_0x00010c08de00(uVar104);
  _objc_retainAutoreleasedReturnValue();
  uVar105 = uVar103;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar106 = *(undefined8 *)(param_1 + lVar127);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar107 = *(undefined8 *)(param_1 + lVar133);
  func_0x00010c2793a0(uVar107);
  _objc_retainAutoreleasedReturnValue();
  uVar108 = uVar106;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar109 = *(undefined8 *)(param_1 + lVar127);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar110 = *(undefined8 *)(param_1 + lVar130);
  func_0x00010bf1ff80(uVar110);
  _objc_retainAutoreleasedReturnValue();
  uVar111 = uVar109;
  func_0x00010bf493c0(0x4059000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar112 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar112);
  _objc_release(uVar111);
  _objc_release(uVar110);
  _objc_release(uVar109);
  _objc_release(uVar108);
  _objc_release(uVar107);
  _objc_release(uVar106);
  _objc_release(uVar105);
  _objc_release(uVar104);
  _objc_release(uVar103);
  _objc_release(uVar102);
  _objc_release(uVar101);
  _objc_release(uVar100);
  _objc_release(uVar99);
  _objc_release(uVar98);
  _objc_release(uVar97);
  _objc_release(uVar96);
  _objc_release(uVar95);
  _objc_release(uVar94);
  _objc_release(uVar93);
  _objc_release(uVar92);
  _objc_release(uVar91);
  _objc_release(uVar90);
  _objc_release(uVar89);
  _objc_release(uVar88);
  _objc_release(uVar87);
  _objc_release(uVar86);
  _objc_release(uVar85);
  _objc_release(uVar84);
  _objc_release(uVar83);
  _objc_release(uVar82);
  _objc_release(uVar81);
  _objc_release(uVar80);
  _objc_release(uVar79);
  _objc_release(uVar78);
  _objc_release(uVar77);
  _objc_release(uVar76);
  _objc_release(uVar75);
  _objc_release(uVar74);
  _objc_release(uVar73);
  _objc_release(uVar72);
  _objc_release(uVar71);
  _objc_release(uVar70);
  _objc_release(uVar69);
  _objc_release(uVar68);
  _objc_release(uVar67);
  _objc_release(uVar66);
  _objc_release(uVar65);
  _objc_release(uVar64);
  _objc_release(uVar63);
  _objc_release(uVar62);
  _objc_release(uVar61);
  _objc_release(uVar60);
  _objc_release(uVar59);
  _objc_release(uVar58);
  _objc_release(uVar57);
  _objc_release(uVar56);
  _objc_release(uVar55);
  _objc_release(uVar54);
  _objc_release(uVar53);
  _objc_release(uVar52);
  _objc_release(uVar51);
  _objc_release(uVar50);
  _objc_release(uVar49);
  _objc_release(uVar48);
  _objc_release(uVar134);
  _objc_release(uVar47);
  _objc_release(uVar46);
  _objc_release(uVar45);
  _objc_release(uVar44);
  _objc_release(uVar43);
  _objc_release(uVar42);
  _objc_release(uVar41);
  _objc_release(uVar125);
  _objc_release(uVar40);
  _objc_release(uVar39);
  _objc_release(uVar38);
  _objc_release(uVar37);
  _objc_release(uVar36);
  _objc_release(uVar35);
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(uVar30);
  _objc_release(uVar137);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar119);
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(uVar118);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(uVar123);
  _objc_release(lVar126);
  _objc_release(uVar5);
  _objc_release(uVar122);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar116);
  _objc_release(lVar128);
  _objc_release(uVar2);
  _objc_release(uVar115);
  _objc_release(lVar121);
  _objc_release(uVar1);
  uVar114 = *(ulong *)(param_1 + _DAT_112737ef0);
  func_0x00010c12e780();
  if ((uVar114 & 1) == 0) {
    lVar121 = (long)_DAT_112737efc;
    uVar115 = *(undefined8 *)(param_1 + lVar121);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar116 = *(undefined8 *)(param_1 + lVar129);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar137 = uVar115;
    func_0x00010bf493c0(uVar135);
    _objc_retainAutoreleasedReturnValue();
    puVar117 = *(undefined **)(param_1 + lVar121);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar136 = *(undefined8 *)(param_1 + lVar131);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar112 = puVar117;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar122 = *(undefined8 *)(param_1 + lVar121);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar123 = *(undefined8 *)(param_1 + lVar131);
    func_0x00010bf1ff80(uVar123);
    _objc_retainAutoreleasedReturnValue();
    uVar125 = uVar122;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar118 = *(undefined8 *)(param_1 + lVar121);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar119 = *(undefined8 *)(param_1 + lVar131);
    func_0x00010c2793a0(uVar119);
    _objc_retainAutoreleasedReturnValue();
    uVar135 = uVar118;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar120 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar113);
    _objc_release(puVar120);
    _objc_release(uVar135);
    _objc_release(uVar119);
    _objc_release(uVar118);
    _objc_release(uVar125);
    _objc_release(uVar123);
    _objc_release(uVar122);
    _objc_release(puVar112);
    _objc_release(uVar136);
  }
  else {
    uVar115 = *(undefined8 *)(param_1 + lVar129);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar116 = *(undefined8 *)(param_1 + lVar131);
    func_0x00010bf1ff80(uVar116);
    _objc_retainAutoreleasedReturnValue();
    uVar137 = uVar115;
    func_0x00010bf493c0(uVar136);
    _objc_retainAutoreleasedReturnValue();
    puVar117 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar113);
  }
  _objc_release(puVar117);
  _objc_release(uVar137);
  _objc_release(uVar116);
  _objc_release(uVar115);
  lVar128 = (long)_DAT_112737f40;
  lVar121 = *(long *)(param_1 + lVar128);
  if ((lVar121 == 0) || (func_0x00010c074c20(), (int)lVar121 != 0)) {
    lVar121 = (long)_DAT_112737f44;
    uStack_288 = *(long *)(param_1 + lVar121);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uStack_290 = *(undefined8 *)(param_1 + lVar133);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uStack_298 = uStack_288;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_2a0 = *(undefined8 *)(param_1 + lVar121);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar136 = *(undefined8 *)(param_1 + lVar133);
    func_0x00010c2793a0(uVar136);
    _objc_retainAutoreleasedReturnValue();
    uVar137 = uStack_2a0;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar115 = *(undefined8 *)(param_1 + lVar121);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar116 = *(undefined8 *)(param_1 + lVar130);
    func_0x00010bf1ff80(uVar116);
    _objc_retainAutoreleasedReturnValue();
    uVar125 = uVar115;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar122 = *(undefined8 *)(param_1 + lVar121);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar123 = *(undefined8 *)(param_1 + lVar133);
    func_0x00010bf1ff80(uVar123);
    _objc_retainAutoreleasedReturnValue();
    uVar135 = uVar122;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uStack_288 = *(long *)(param_1 + lVar128);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uStack_290 = *(undefined8 *)(param_1 + lVar133);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uStack_298 = uStack_288;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_2a0 = *(undefined8 *)(param_1 + lVar128);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar136 = *(undefined8 *)(param_1 + lVar133);
    func_0x00010c2793a0(uVar136);
    _objc_retainAutoreleasedReturnValue();
    uVar137 = uStack_2a0;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar115 = *(undefined8 *)(param_1 + lVar128);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar116 = *(undefined8 *)(param_1 + lVar130);
    func_0x00010bf1ff80(uVar116);
    _objc_retainAutoreleasedReturnValue();
    uVar125 = uVar115;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar122 = *(undefined8 *)(param_1 + lVar128);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar123 = *(undefined8 *)(param_1 + lVar133);
    func_0x00010bf1ff80(uVar123);
    _objc_retainAutoreleasedReturnValue();
    uVar135 = uVar122;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar112 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar113);
  _objc_release(puVar112);
  _objc_release(uVar135);
  _objc_release(uVar123);
  _objc_release(uVar122);
  _objc_release(uVar125);
  _objc_release(uVar116);
  _objc_release(uVar115);
  _objc_release(uVar137);
  _objc_release(uVar136);
  _objc_release(uStack_2a0);
  _objc_release(uStack_298);
  _objc_release(uStack_290);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar124) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar113);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(uStack_288 + _DAT_112737f64),
             PTR_s_handleActionWithSender_actionMod_1125d19f8,uStack_288,
             *(undefined8 *)(uStack_288 + _DAT_112737f04),
             *(undefined8 *)(uStack_288 + _DAT_112737f14));
  return;
}



/* Entry: 105e4cda8; end: 105e4cdcf; -[SCTopicSendToSearchTopicView overlayTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4cda8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112737f64),
             PTR_s_handleActionWithSender_actionMod_1125d19f8,param_1,
             *(undefined8 *)(param_1 + _DAT_112737f04),*(undefined8 *)(param_1 + _DAT_112737f14));
  return;
}



/* Entry: 105e4cdd0; end: 105e4cdf7; -[SCTopicSendToSearchTopicView unselectTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4cdd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112737f64),
             PTR_s_handleActionWithSender_actionMod_1125d19f8,param_1,
             *(undefined8 *)(param_1 + _DAT_112737f00),*(undefined8 *)(param_1 + _DAT_112737f30));
  return;
}



/* Entry: 105e4cdf8; end: 105e4ce53; -[SCTopicSendToSearchTopicView setShowTooltip:] */

void FUN_105e4cdf8(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_105e4ce54;
  puStack_28 = &UNK_110845ce0;
  uStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_40);
  return;
}



/* Entry: 105e4ce54; end: 105e4ce73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4ce54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112737f48),
             PTR_s_setHidden__1126479f8,(*(byte *)(param_1 + 0x28) ^ 0xff) & 1);
  return;
}



/* Entry: 105e4ce74; end: 105e4cf33; -[SCTopicSendToSearchTopicView _updateVisibilityForSuggestedTopicsCollectionView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4ce74(undefined8 param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 unaff_x21;
  
  func_0x00010c1a7f60(*(undefined8 *)(param_2 + _DAT_112737f44));
  if (param_4 == 0) {
    param_1 = 0;
  }
  else {
    unaff_x21 = *(undefined8 *)(param_2 + _DAT_112737f18);
    func_0x00010c08c0e0(unaff_x21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf525a0();
  }
  uVar1 = *(undefined8 *)(param_2 + _DAT_112737f38);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(param_1);
  _objc_release(uVar1);
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x21);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bee40b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__updateVisibilityForPlaceSearchV_1125969d0,1)
  ;
  return;
}



/* Entry: 105e4cf34; end: 105e4cf57; -[SCTopicSendToSearchTopicView setSuggestionTopicsCollectionViewHidden:] */

void FUN_105e4cf34(undefined8 param_1)

{
  func_0x00010bee40e0();
                    /* WARNING: Could not recover jumptable at 0x00010beda7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateLayoutConstraints_112594398);
  return;
}



/* Entry: 105e4cf58; end: 105e4d043; -[SCTopicSendToSearchTopicView _updateVisibilityForPlaceSearchView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4cf58(undefined8 param_1,long param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112737f40;
  lVar1 = *(long *)(param_2 + lVar3);
  if (lVar1 != 0) {
    func_0x00010c074c20();
    if (param_4 != (int)lVar1) {
      func_0x00010c1a7f60(*(undefined8 *)(param_2 + lVar3));
      if (param_4 == 0) {
        param_1 = 0;
      }
      else {
        lVar3 = *(long *)(param_2 + _DAT_112737f18);
        func_0x00010c08c0e0(lVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf525a0();
      }
      uVar2 = *(undefined8 *)(param_2 + _DAT_112737f38);
      func_0x00010c08c0e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(param_1);
      _objc_release(uVar2);
      if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(lVar3);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bee40f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_2,PTR_s__updateVisibilityForSuggestedTop_1125969e0,1);
      return;
    }
  }
  return;
}



/* Entry: 105e4d044; end: 105e4d09b; -[SCTopicSendToSearchTopicView setPlaceSearchViewHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4d044(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112737f40);
  if ((lVar1 != 0) && (func_0x00010c074c20(), param_3 != (int)lVar1)) {
    func_0x00010bee40a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010beda7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateLayoutConstraints_112594398);
    return;
  }
  return;
}



/* Entry: 105e4d09c; end: 105e4d17b; -[SCTopicSendToSearchTopicView _viewHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_105e4d09c(undefined8 param_1,double param_2,undefined8 param_3,double param_4,
                    long param_5,undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  param_4 = param_4 * 0.6;
  _objc_release(puVar1);
  lVar3 = (long)_DAT_112737f44;
  uVar2 = *(ulong *)(param_5 + lVar3);
  func_0x00010c074c20();
  if ((uVar2 & 1) == 0) {
    func_0x00010bf4d5e0(*(undefined8 *)(param_5 + lVar3));
    func_0x00010c1a7f60(*(undefined8 *)(param_5 + _DAT_112737f3c),param_6,param_2 == 0.0);
    func_0x00010bf4d5e0(*(undefined8 *)(param_5 + lVar3));
    param_2 = param_2 + 195.0;
  }
  else {
    uVar2 = *(ulong *)(param_5 + _DAT_112737f40);
    param_2 = 195.0;
    if ((uVar2 != 0) && (func_0x00010c074c20(), (uVar2 & 1) == 0)) {
      func_0x00010c1a7f60(*(undefined8 *)(param_5 + _DAT_112737f3c),param_6,0);
      param_2 = param_4;
    }
  }
  if (param_4 <= param_2) {
    param_2 = param_4;
  }
  return param_2;
}



/* Entry: 105e4d17c; end: 105e4d18b; -[SCTopicSendToSearchTopicView actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105e4d17c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112737f64);
}



/* Entry: 105e4d18c; end: 105e4d1cb; -[SCTopicSendToSearchTopicView setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4d18c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112737f64;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e4d1cc; end: 105e4d1db; -[SCTopicSendToSearchTopicView selectedTopicsCollectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105e4d1cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112737f38);
}



/* Entry: 105e4d1dc; end: 105e4d1eb; -[SCTopicSendToSearchTopicView suggestedTopicsCollectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105e4d1dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112737f44);
}



/* Entry: 105e4d1ec; end: 105e4d203; -[SCTopicSendToSearchTopicView containerFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105e4d1ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112737f50);
}



/* Entry: 105e4d204; end: 105e4d213; -[SCTopicSendToSearchTopicView isFriendsOnlyProfile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105e4d204(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112737ef4);
}



/* Entry: 105e4d214; end: 105e4d373; -[SCTopicSendToSearchTopicView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4d214(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112737f44,0);
  _objc_storeStrong(param_1 + _DAT_112737f38,0);
  _objc_storeStrong(param_1 + _DAT_112737f64,0);
  _objc_storeStrong(param_1 + _DAT_112737ef0,0);
  _objc_storeStrong(param_1 + _DAT_112737f40,0);
  _objc_storeStrong(param_1 + _DAT_112737f60,0);
  _objc_storeStrong(param_1 + _DAT_112737f24,0);
  _objc_storeStrong(param_1 + _DAT_112737f00,0);
  _objc_storeStrong(param_1 + _DAT_112737f04,0);
  _objc_storeStrong(param_1 + _DAT_112737f48,0);
  _objc_storeStrong(param_1 + _DAT_112737f3c,0);
  _objc_storeStrong(param_1 + _DAT_112737f30,0);
  _objc_storeStrong(param_1 + _DAT_112737efc,0);
  _objc_storeStrong(param_1 + _DAT_112737f2c,0);
  _objc_storeStrong(param_1 + _DAT_112737f28,0);
  _objc_storeStrong(param_1 + _DAT_112737f20,0);
  _objc_storeStrong(param_1 + _DAT_112737f34,0);
  _objc_storeStrong(param_1 + _DAT_112737f1c,0);
  _objc_storeStrong(param_1 + _DAT_112737f18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112737f14,0);
  return;
}



/* Entry: 105e4d374; end: 105e4d657; -[SCTopicSendToSearchTopicViewController initWithContainerFrame:actionHandler:suggestedTopicsRequester:isSpotlightSection:useV10Layout:matchaSendToEnabled:topicsCollection:showPlaceSearchView:placeSearchViewProvider:spotlightPlaceTagsLogger:snapCaptureLocation:sendToExperimentConfiguration:remixConfiguration:remixingSpotlightToSpotlightEnabled:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105e4d374(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined1 param_10,undefined1 param_11,undefined8 param_12,
             undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined4 param_20,
             undefined4 param_21,undefined8 param_22)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_98;
  undefined *puStack_90;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_12);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_22);
  puStack_90 = PTR_PTR_1126ed500;
  puVar2 = &uStack_98;
  uStack_98 = param_5;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112737f6c;
    _objc_retain(param_12);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_12;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126c5220;
    _objc_alloc();
    func_0x00010c0547e0();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112737f70);
    *(undefined **)((long)puVar2 + (long)_DAT_112737f70) = puVar4;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112737f74;
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_8;
    _objc_release(uVar3);
    puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_112737f78);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = param_4;
    lVar5 = (long)_DAT_112737f7c;
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_7;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar2 + (long)_DAT_112737f80) = param_9;
    *(undefined1 *)((long)puVar2 + (long)_DAT_112737f84) = param_10;
    *(undefined1 *)((long)puVar2 + (long)_DAT_112737f88) = param_11;
    *(undefined1 *)((long)puVar2 + (long)_DAT_112737f8c) = param_13;
    lVar5 = (long)_DAT_112737f90;
    _objc_retain(param_15);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_15;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112737f94;
    _objc_retain(param_17);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_17;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112737f98;
    _objc_retain(param_18);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_18;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112737f9c;
    _objc_retain(param_22);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_22;
    _objc_release(uVar3);
    func_0x00010c189400(puVar2);
  }
  _objc_release(param_22);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_12);
  _objc_release(param_8);
  _objc_release(param_7);
  return puVar2;
}



/* Entry: 105e4d658; end: 105e4d903; -[SCTopicSendToSearchTopicViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4d658(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_initWeak(auStack_78,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112737f90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105e4d904;
  puStack_88 = &UNK_1108ecec8;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_copyWeak(auStack_a8,auStack_78);
  uVar3 = uVar2;
  func_0x00010bf590e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126c5230;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112737f70);
  func_0x00010bf40120(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_112737f78;
  puVar5 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  puVar6 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  puVar1 = (undefined8 *)(param_1 + lVar8);
  func_0x00010c043cc0(*puVar1,puVar1[1],puVar1[2],puVar1[3]);
  lVar8 = (long)_DAT_112737fa8;
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar4;
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar2);
  func_0x00010c073920(param_1);
  func_0x00010c1b1340(*(undefined8 *)(param_1 + lVar8));
  func_0x00010c161980(*(undefined8 *)(param_1 + lVar8));
  func_0x00010c222380(param_1);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 105e4d904; end: 105e4d9bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4d904(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (param_3 == 0) {
      if (*(char *)(param_1 + _DAT_112737f8c) == '\x01') {
        func_0x00010befa940(param_1);
      }
      else {
        lVar2 = (long)_DAT_112737fa0;
        if (*(long *)(param_1 + lVar2) == 0) {
          _objc_retain(param_2);
          uVar1 = *(undefined8 *)(param_1 + lVar2);
          *(undefined8 *)(param_1 + lVar2) = param_2;
          _objc_release(uVar1);
          *(undefined1 *)(param_1 + _DAT_112737fa4) = 1;
        }
      }
    }
    else {
      func_0x00010befa960(param_1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105e4d9c0; end: 105e4da07;  */

void FUN_105e4d9c0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c12db00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e4da08; end: 105e4dcd7; -[SCTopicSendToSearchTopicViewController viewDidLoad] */

/* WARNING: Possible PIC construction at 0x000105e4dc78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105e4dc7c) */
/* WARNING: Removing unreachable block (ram,0x000105e4dcd4) */
/* WARNING: Removing unreachable block (ram,0x000105e4dcfc) */
/* WARNING: Removing unreachable block (ram,0x000105e4dd14) */
/* WARNING: Removing unreachable block (ram,0x000105e4dcb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4da08(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_78 = PTR_PTR_1126ed500;
  lStack_80 = param_1;
  _objc_msgSendSuper2(&lStack_80,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR_PTR_1126c5238;
  _objc_alloc_init();
  lVar5 = (long)_DAT_112737fac;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar3);
  func_0x00010c165700(*(undefined8 *)(param_1 + lVar5));
  puVar1 = PTR_PTR_1126b1318;
  lVar6 = (long)_DAT_112737fa8;
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c262340(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1555c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_112737fb0;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010c17e720(*(undefined8 *)(param_1 + lVar5));
  puVar1 = PTR_PTR_1126b1108;
  _objc_alloc(PTR_PTR_1126b1108);
  puVar2 = PTR_PTR_1126b5258;
  _objc_alloc_init(PTR_PTR_1126b5258);
  func_0x00010c04f820(puVar1);
  _objc_release(puVar2);
  func_0x00010c1f9240(puVar1);
  func_0x00010c161980(puVar1);
  _objc_alloc(PTR_PTR_1126b16f8);
  func_0x00010c028e00();
  puVar1 = PTR_PTR_1126b1700;
  _objc_alloc(PTR_PTR_1126b1700);
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297340(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),
                      PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043020(0x4010000000000000,puVar1);
  _objc_release(puVar2);
  puVar1 = PTR_PTR_1126b1308;
  _objc_alloc();
  func_0x00010c042ce0();
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9720(uVar3);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_new(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x00010bee2780(param_1);
  _objc_release(puVar1);
  func_0x00010c20fba0(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c202180(*(undefined8 *)(param_1 + lVar6));
                    /* WARNING: Could not recover jumptable at 0x00010c1dc790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar6),PTR_s_setPlaceSearchViewHidden__112654c08,
             (*(byte *)(param_1 + _DAT_112737f8c) ^ 0xff) & 1);
  return;
}



/* Entry: 105e4dcd8; end: 105e4dd2f; -[SCTopicSendToSearchTopicViewController searchPlaces] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4dcd8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112737fa4;
  if (*(char *)(param_1 + lVar1) == '\x01') {
    func_0x00010befa940(param_1,param_2,*(undefined8 *)(param_1 + _DAT_112737fa0));
    *(undefined1 *)(param_1 + lVar1) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1dc790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112737fa8),PTR_s_setPlaceSearchViewHidden__112654c08,0);
  return;
}



/* Entry: 105e4dd30; end: 105e4dedb; -[SCTopicSendToSearchTopicViewController _searchAndUpdateTopicsWithQueryV2:resetSearchText:currentEditPosition:nextEditionPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4dd30(long param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112737fa8;
  func_0x00010c1dc780(*(undefined8 *)(param_1 + lVar3));
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    func_0x00010bee2780(param_1);
    *(undefined8 *)(param_1 + _DAT_112737fb4) = 0;
    *(undefined8 *)(param_1 + _DAT_112737fb8) = 0;
    func_0x00010c20fba0(*(undefined8 *)(param_1 + lVar3));
  }
  else {
    *(undefined8 *)(param_1 + _DAT_112737fb4) = param_5;
    *(undefined8 *)(param_1 + _DAT_112737fb8) = param_6;
    func_0x00010c20fba0(*(undefined8 *)(param_1 + lVar3));
    lVar2 = (long)_DAT_112737fbc;
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    lVar2 = (long)_DAT_112737f70;
    func_0x00010c152840(*(undefined8 *)(param_1 + lVar2));
    func_0x00010c1f8ba0(*(undefined8 *)(param_1 + lVar2));
    if (param_4 != 0) {
      func_0x00010c125580(*(undefined8 *)(param_1 + lVar2));
    }
    _objc_initWeak(auStack_58,param_1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112737f74);
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010bfaaa80(uVar1);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105e4dedc; end: 105e4df6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4dedc(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((param_4 != 0) && (param_1 != 0)) &&
     (uVar1 = param_2, func_0x00010c0720c0(), (int)uVar1 != 0)) {
    func_0x00010bee2780(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105e4df6c; end: 105e4df6f; -[SCTopicSendToSearchTopicViewController searchAndUpdateTopicsWithQuery:resetSearchText:currentEditPosition:nextEditionPosition:] */

void FUN_105e4df6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9c510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__searchAndUpdateTopicsWithQueryV_112584ae8);
  return;
}



/* Entry: 105e4df70; end: 105e4e0a3; -[SCTopicSendToSearchTopicViewController _updateTopics:query:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4df70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112737f6c);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfca060(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105e4e0a4; end: 105e4e0f7;  */

void FUN_105e4e0a4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed6a40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e4e0f8; end: 105e4e40b; -[SCTopicSendToSearchTopicViewController _updateDataProviderTopicsWithReturnedTopics:selectedTopics:query:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4e0f8(long param_1,undefined8 param_2,long param_3,ulong param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long lVar12;
  bool bVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  ppuVar10 = &PTR___NSConcreteGlobalBlock_1108ecf58;
  func_0x000100504554(param_4,&PTR___NSConcreteGlobalBlock_1108ecf58);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  if (lVar3 == 0) {
    bVar13 = false;
  }
  else {
    bVar13 = false;
    do {
      lVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        lVar16 = *(long *)(lVar14 * 8);
        lVar4 = lVar16;
        func_0x00010bfdedc0(lVar16);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c0b5ac0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_4;
        func_0x00010bf4b900();
        _objc_release(lVar5);
        _objc_release(lVar4);
        if ((uVar6 & 1) == 0) {
          func_0x00010befa120(puVar1);
        }
        func_0x00010bfdedc0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar16;
        func_0x00010bf32ee0();
        _objc_release(lVar16);
        bVar13 = (bool)(lVar4 == 0 | bVar13);
        lVar14 = lVar14 + 1;
      } while (lVar3 != lVar14);
      lVar3 = param_3;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_3);
  lVar7 = param_5;
  func_0x00010c08fa60();
  if (lVar7 == 0) {
    func_0x00010c1f9220(*(undefined8 *)(param_1 + _DAT_112737fac));
  }
  else {
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    puVar9 = puVar2;
    func_0x00010c0b5ac0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_4;
    func_0x00010bf4b900();
    _objc_release(puVar9);
    if ((uVar6 & 1) == 0 && !bVar13) {
      puVar9 = PTR_PTR_1126c0e38;
      _objc_alloc(PTR_PTR_1126c0e38);
      func_0x00010c019f00();
      func_0x00010befa120(puVar8);
      _objc_release(puVar9);
    }
    func_0x00010befa160(puVar8);
    uVar15 = *(undefined8 *)(param_1 + _DAT_112737fac);
    puVar9 = puVar8;
    func_0x00010bf51e00(puVar8);
    func_0x00010c1f9220(uVar15);
    _objc_release(puVar9);
    _objc_release(puVar8);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    func_0x00010bfdedc0(ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar10;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar11);
    return;
  }
  return;
}



/* Entry: 105e4e40c; end: 105e4e453;  */

void FUN_105e4e40c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bfdedc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e4e454; end: 105e4e463; -[SCTopicSendToSearchTopicViewController setSpotlightDescription:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4e454(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c208690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112737f6c),PTR_s_setSpotlightDescription__11265fbc8);
  return;
}



/* Entry: 105e4e464; end: 105e4e633; -[SCTopicSendToSearchTopicViewController addTopic:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4e464(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  _objc_retain(param_3);
  lVar10 = (long)_DAT_112737f6c;
  uVar3 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c24b0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = (long)_DAT_112737fb4;
  lVar2 = (long)_DAT_112737fb8;
  uVar7 = *(undefined8 *)(param_1 + lVar1);
  uVar9 = *(undefined8 *)(param_1 + lVar2);
  uVar8 = param_3;
  func_0x00010bfdedc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = (long)_DAT_112737f9c;
  uVar4 = *(undefined8 *)(param_1 + lVar11);
  func_0x000108f4b42c(uVar4);
  uVar5 = uVar3;
  FUN_1062d0044(uVar3,uVar7,uVar9,uVar8,uVar4);
  _objc_release(uVar8);
  _objc_release(uVar3);
  if ((int)uVar5 != 0) {
    uVar3 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010c24b0a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar1);
    uVar9 = *(undefined8 *)(param_1 + lVar2);
    uVar8 = param_3;
    func_0x00010bfdedc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar11);
    func_0x000108f4b42c(uVar4);
    uVar5 = uVar3;
    FUN_1062cf88c(uVar3,uVar7,uVar9,uVar8,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar3);
    func_0x00010c208680(*(undefined8 *)(param_1 + lVar10));
    func_0x00010c0dd3e0(*(undefined8 *)(param_1 + lVar10));
    _objc_release(uVar5);
  }
  puVar6 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010c153340(param_1);
  uVar8 = *(undefined8 *)(param_1 + _DAT_112737f7c);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar8);
  _objc_release(param_1);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e4e634; end: 105e4e737; -[SCTopicSendToSearchTopicViewController addNewTopic:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4e634(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112737f6c);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uVar1 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfca060(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105e4e738; end: 105e4e78b;  */

void FUN_105e4e738(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc78c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e4e78c; end: 105e4e967; -[SCTopicSendToSearchTopicViewController _addNewTopicIfNonExisting:existingTopics:] */

void FUN_105e4e78c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined *puStack_138;
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
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar5 = *plStack_120;
    do {
      lVar6 = 0;
      do {
        if (*plStack_120 != lVar5) {
          _objc_enumerationMutation(param_4);
        }
        lVar2 = *(long *)(lStack_128 + lVar6 * 8);
        func_0x00010bfdedc0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bf32ee0();
        _objc_release(lVar2);
        lVar2 = param_4;
        if (lVar3 == 0) goto LAB_105e4e914;
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = param_4;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(param_4);
  puVar4 = PTR_PTR_1126c0e38;
  _objc_alloc();
  func_0x00010c019f00();
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  pcStack_150 = FUN_105e4e968;
  puStack_148 = &UNK_110841f80;
  lStack_140 = param_1;
  puStack_138 = puVar4;
  _objc_retain();
  _objc_retain(param_1);
  func_0x0001000d76cc("APPSTORE",&puStack_160);
  _objc_release(puStack_138);
  _objc_release(puVar4);
  lVar2 = param_1;
LAB_105e4e914:
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010befc590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_3 + 0x20),PTR_s_addTopic__11259cb08,
               *(undefined8 *)(param_3 + 0x28));
    return;
  }
  return;
}



/* Entry: 105e4e968; end: 105e4e973;  */

void FUN_105e4e968(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befc590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addTopic__11259cb08,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105e4e974; end: 105e4ea2f; -[SCTopicSendToSearchTopicViewController addNewTopicAndDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4e974(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010befa040(param_1,param_2,param_3);
  }
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112737f7c);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar3,param_2,param_1,puVar2,lVar1);
  _objc_release(lVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e4ea30; end: 105e4eacf; -[SCTopicSendToSearchTopicViewController addPlaceTag:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4ea30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c01b460();
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112737f7c);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar3,param_2,param_1,puVar1,lVar2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105e4ead0; end: 105e4ebd3; -[SCTopicSendToSearchTopicViewController removePlaceTagAndDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4ead0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c01b460();
  _objc_release(param_3);
  lVar5 = (long)_DAT_112737f7c;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar4,param_2,param_1,puVar1,lVar2);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar4,param_2,param_1,puVar3,lVar2);
  _objc_release(lVar2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105e4ebd4; end: 105e4ec67; -[SCTopicSendToSearchTopicViewController addPlaceTagAndDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4ebd4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_3 != 0) {
    func_0x00010befa940(param_1);
  }
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112737f7c);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar3,param_2,param_1,puVar1,lVar2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105e4ec68; end: 105e4ec77; -[SCTopicSendToSearchTopicViewController isFriendsOnlyProfile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105e4ec68(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112737f68);
}



/* Entry: 105e4ec78; end: 105e4ec87; -[SCTopicSendToSearchTopicViewController setIsFriendsOnlyProfile:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4ec78(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112737f68) = param_3;
  return;
}



/* Entry: 105e4ec88; end: 105e4ed77; -[SCTopicSendToSearchTopicViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4ec88(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112737fa0,0);
  _objc_storeStrong(param_1 + _DAT_112737f9c,0);
  _objc_storeStrong(param_1 + _DAT_112737f98,0);
  _objc_storeStrong(param_1 + _DAT_112737f94,0);
  _objc_storeStrong(param_1 + _DAT_112737f90,0);
  _objc_storeStrong(param_1 + _DAT_112737fbc,0);
  _objc_storeStrong(param_1 + _DAT_112737fac,0);
  _objc_storeStrong(param_1 + _DAT_112737fb0,0);
  _objc_storeStrong(param_1 + _DAT_112737f74,0);
  _objc_storeStrong(param_1 + _DAT_112737f6c,0);
  _objc_storeStrong(param_1 + _DAT_112737f7c,0);
  _objc_storeStrong(param_1 + _DAT_112737f70,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112737fa8,0);
  return;
}



/* Entry: 105e4ed78; end: 105e4f197; -[SCTopicSendToSelectedTopicsCollectionViewController initWithTopicsCollection:suggestedTopicsRequester:uiContainer:searchTopicsDelegate:addTopicsFromSearchDelegate:selectionDelegate:sendToDelegate:isSpotlightSection:useV10Layout:matchaSendToEnabled:viewMode:placeSearchViewProvider:spotlightPlaceTagsLogger:snapCaptureLocation:sendToExperimentConfiguration:remixConfiguration:remixingSpotlightToSpotlightEnabled:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105e4ed78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined1 param_18,undefined4 param_19,undefined8 param_20)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_20);
  puVar1 = PTR_PTR_1126c5240;
  _objc_alloc_init();
  puStack_70 = PTR_PTR_1126ed508;
  puVar2 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithCollectionViewLayout__1125dd830,puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar2);
    lVar5 = (long)_DAT_112737fc4;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_3;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126c5248;
    _objc_alloc();
    func_0x00010c054800();
    lVar5 = (long)_DAT_112737fc8;
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined **)((long)puVar2 + lVar5) = puVar4;
    _objc_release(uVar3);
    func_0x00010c1f82e0(*(undefined8 *)((long)puVar2 + lVar5));
    func_0x00010c165700(*(undefined8 *)((long)puVar2 + lVar5));
    lVar5 = (long)_DAT_112737fcc;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_5;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126c5250;
    _objc_alloc();
    func_0x00010c0547c0();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112737fd0);
    *(undefined **)((long)puVar2 + (long)_DAT_112737fd0) = puVar4;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112737fd4;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_4;
    _objc_release(uVar3);
    _objc_storeWeak((long)puVar2 + (long)_DAT_112737fd8,param_6);
    _objc_storeWeak((long)puVar2 + (long)_DAT_112737fdc,param_7);
    _objc_storeWeak((long)puVar2 + (long)_DAT_112737fe0,param_8);
    _objc_storeWeak((long)puVar2 + (long)_DAT_112737fe4,param_9);
    *(undefined1 *)((long)puVar2 + (long)_DAT_112737fe8) = (undefined1)param_10;
    *(undefined1 *)((long)puVar2 + (long)_DAT_112737fec) = param_10._1_1_;
    *(undefined1 *)((long)puVar2 + (long)_DAT_112737ff0) = param_10._2_1_;
    *(undefined8 *)((long)puVar2 + (long)_DAT_112737ff4) = param_12;
    lVar5 = (long)_DAT_112737ff8;
    _objc_retain(param_13);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_13;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112737ffc;
    _objc_retain(param_14);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_14;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112738000;
    _objc_retain(param_15);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_15;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112738004;
    _objc_retain(param_16);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_16;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112738008;
    _objc_retain(param_17);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_17;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar2 + (long)_DAT_11273800c) = param_18;
    lVar5 = (long)_DAT_112738010;
    _objc_retain(param_20);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_20;
    _objc_release(uVar3);
  }
  _objc_release(puVar1);
  _objc_release(param_20);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 105e4f198; end: 105e4f5c3; -[SCTopicSendToSelectedTopicsCollectionViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4f198(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_78 = PTR_PTR_1126ed508;
  lStack_80 = param_1;
  _objc_msgSendSuper2(&lStack_80,PTR_s_viewDidLoad_112684cd8);
  lVar1 = param_1;
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2025c0();
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar2);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(puVar2);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar1);
  _objc_release(puVar3);
  lVar1 = param_1;
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e9a0();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181f80(0,0x4024000000000000,0,0x4024000000000000);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf408e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7ac0();
  uVar11 = 0;
  uVar12 = 0x4014000000000000;
  func_0x00010c1f93e0(0,0x4014000000000000,0,0x4014000000000000,lVar1);
  func_0x00010c1a7960(0x4059000000000000,0x403e000000000000,lVar1);
  func_0x00010c1c8300(0x4008000000000000,lVar1);
  func_0x00010c1c82c0(0x4008000000000000,lVar1);
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c197460(uVar11,uVar12,lVar1);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b1318;
  lVar9 = param_1;
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1555c0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_112738014;
  uVar11 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar3;
  _objc_release(uVar11);
  _objc_release(lVar9);
  func_0x00010c17e720(*(undefined8 *)(param_1 + lVar10));
  puVar3 = PTR_PTR_1126b5258;
  _objc_opt_new(PTR_PTR_1126b5258);
  puVar4 = PTR_PTR_1126b1108;
  _objc_alloc(PTR_PTR_1126b1108);
  func_0x00010c04f820();
  lVar9 = (long)_DAT_112737fc8;
  func_0x00010c1f9240();
  func_0x00010c161980(puVar4);
  puVar5 = PTR_PTR_1126b16f8;
  _objc_alloc(PTR_PTR_1126b16f8);
  func_0x00010c028e00();
  puVar6 = PTR_PTR_1126b1700;
  _objc_alloc(PTR_PTR_1126b1700);
  puVar7 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297340(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),
                      PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043020(0x4010000000000000,puVar6);
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126b1308;
  _objc_alloc();
  func_0x00010c042ce0();
  uVar11 = *(undefined8 *)(param_1 + lVar10);
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9720(uVar11);
  _objc_release(puVar8);
  func_0x00010c125220(*(undefined8 *)(param_1 + lVar9));
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar1);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182300(0xc024000000000000,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105e4f5c4; end: 105e4f5ff; -[SCTopicSendToSelectedTopicsCollectionViewController scrollToTop] */

void FUN_105e4f5c4(undefined8 param_1)

{
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182300(0xc024000000000000,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e4f600; end: 105e4f603; -[SCTopicSendToSelectedTopicsCollectionViewController setSearchText:] */

void FUN_105e4f600(void)

{
  return;
}



/* Entry: 105e4f604; end: 105e4f607; -[SCTopicSendToSelectedTopicsCollectionViewController refreshSearchText] */

void FUN_105e4f604(void)

{
  return;
}



/* Entry: 105e4f608; end: 105e4f7fb; -[SCTopicSendToSelectedTopicsCollectionViewController _presentTopicOrPlaceSearchViewOnTopOfContainerCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4f608(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  
  lVar6 = (long)_DAT_112737fe4;
  uVar1 = param_5 + lVar6;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar7 = (long)_DAT_112738018;
    uVar1 = param_5 + lVar7;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar4 = PTR__OBJC_CLASS___UIScrollView_1126af098;
    _objc_opt_class(PTR__OBJC_CLASS___UIScrollView_1126af098);
    uVar1 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar4);
    _objc_release(uVar2);
    dVar9 = 0.0;
    if (((uVar1 & 1) == 0) || (uVar2 == 0)) goto LAB_105e4f71c;
    lVar6 = param_5;
    func_0x00010bf40120(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4cdc0();
    dVar9 = -param_2;
    dVar8 = param_1;
  }
  else {
    lVar6 = param_5 + lVar6;
    _objc_loadWeakRetained(lVar6);
    lVar7 = (long)_DAT_112738018;
    lVar3 = param_5 + lVar7;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c298fa0(lVar6);
    dVar8 = param_1;
    _objc_release(lVar3);
    dVar9 = param_1;
  }
  _objc_release(lVar6);
  param_1 = dVar8;
LAB_105e4f71c:
  lVar3 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_5 + lVar7;
  _objc_loadWeakRetained(lVar6);
  func_0x00010bf20c00();
  lVar7 = param_5 + lVar7;
  _objc_loadWeakRetained(lVar7);
  func_0x00010bf513e0(param_1,param_2,param_3,param_4,lVar5);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010be7f0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,(param_2 + -50.0) - dVar9,param_3,param_4,param_5,
             PTR_s__presentTopicOrPlaceSearchWithCo_11257d5c8,param_7);
  return;
}


