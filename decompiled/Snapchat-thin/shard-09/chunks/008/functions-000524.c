/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10719a224; end: 10719a257;  */

void FUN_10719a224(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10719a258; end: 10719a35b; -[SCStickerPickerCategoryCell scrollViewDidEndDecelerating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719a258(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_112764b94);
  _objc_retain(param_4);
  func_0x00010bf75800(uVar1);
  lVar2 = *(long *)(param_2 + _DAT_112764b40);
  lVar3 = (long)_DAT_112764b48;
  func_0x00010bf49220(*(undefined8 *)(param_2 + lVar3));
  uVar1 = param_1;
  func_0x00010bde1d40(param_2);
  func_0x00010c153d60(param_1,uVar1,lVar2,param_3,param_4);
  fVar4 = (float)param_1;
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  if (lVar2 != 0) {
    func_0x00010bfb2c80(lVar2);
    func_0x00010c181140((double)fVar4,*(undefined8 *)(param_2 + lVar3));
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10719a35c;
    puStack_50 = &UNK_110842e18;
    lStack_48 = param_2;
    func_0x00010bf03400(0x3fd0000000000000,PTR__OBJC_CLASS___UIView_1126aec20,param_3,&puStack_68);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 10719a35c; end: 10719a38f;  */

void FUN_10719a35c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10719a390; end: 10719a3cf; -[SCStickerPickerCategoryCell hideSuggestor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719a390(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112764acc);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10719a3d0; end: 10719a40f; -[SCStickerPickerCategoryCell showSuggestor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719a3d0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112764acc);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10719a410; end: 10719a59f; -[SCStickerPickerCategoryCell visibleStickers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10719a410(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  lVar3 = *(long *)(param_1 + _DAT_112764aec);
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_retain(lVar4);
  lVar3 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      lVar7 = *(long *)(lVar8 * 8);
      lVar5 = lVar7;
      func_0x00010c253880();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar5 != 0) {
        func_0x00010c253880();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(lVar7);
      }
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  _objc_release(lVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126b0d10;
  _objc_opt_class(PTR_PTR_1126b0d10);
  lVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  _objc_release(param_2);
  return (undefined *)(ulong)((uint)(param_2 != 0) & (uint)lVar3);
}



/* Entry: 10719a5a0; end: 10719a5fb;  */

uint FUN_10719a5a0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b0d10;
  _objc_opt_class(PTR_PTR_1126b0d10);
  lVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  _objc_release(param_2);
  return (uint)(param_2 != 0) & (uint)lVar2;
}



/* Entry: 10719a5fc; end: 10719a60b; -[SCStickerPickerCategoryCell visibleIndexPaths] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719a5fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfed1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112764aec),PTR_s_indexPathsForVisibleItems_1125d8e30);
  return;
}



/* Entry: 10719a60c; end: 10719a717; -[SCStickerPickerCategoryCell updateCollectionViewAnimated:topMargin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719a60c(undefined8 param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  if (*(long *)(param_2 + _DAT_112764b88) != 0) {
    func_0x00010bfe27e0(param_2);
  }
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10719a718;
  puStack_58 = &UNK_110848c48;
  ppuVar3 = &puStack_70;
  lStack_50 = param_2;
  uStack_48 = param_1;
  _objc_retainBlock();
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  if (param_4 == 0) {
    (*(code *)ppuVar3[2])(ppuVar3);
  }
  else {
    puStack_98 = puVar1;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_10719a8a4;
    puStack_80 = &UNK_110849530;
    _objc_retain(ppuVar3);
    ppuStack_78 = ppuVar3;
    func_0x00010bf03440(0x3fc3333340000000,0,puVar2,param_3,0x30004,&puStack_98,0);
    _objc_release(ppuStack_78);
  }
  _objc_release(ppuVar3);
  return;
}



/* Entry: 10719a718; end: 10719a8a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719a718(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  lVar3 = (long)_DAT_112764aec;
  func_0x00010bf4c7c0(*(undefined8 *)(*(long *)(param_5 + 0x20) + lVar3));
  iVar1 = (int)*(undefined8 *)(param_5 + 0x20);
  func_0x00010beb3a20();
  dVar4 = 50.0;
  if (iVar1 == 0) {
    dVar4 = 12.0;
  }
  dVar4 = *(double *)(param_5 + 0x28) + dVar4;
  dVar5 = dVar4 + 20.0;
  dVar6 = dVar5;
  if (*(char *)(*(long *)(param_5 + 0x20) + (long)_DAT_112764b74) == '\0') {
    dVar6 = dVar4;
  }
  if (param_1 != dVar6) {
    func_0x00010bf4cdc0(*(undefined8 *)(*(long *)(param_5 + 0x20) + lVar3));
    func_0x00010bf4cdc0(*(undefined8 *)(*(long *)(param_5 + 0x20) + lVar3));
    func_0x00010c1822e0(dVar4,(param_1 - dVar6) + dVar5,
                        *(undefined8 *)(*(long *)(param_5 + 0x20) + lVar3));
    func_0x00010bde1de0(*(undefined8 *)(param_5 + 0x20));
    dVar5 = dVar6;
    func_0x00010c181f80(dVar6,param_2,dVar4,param_4,
                        *(undefined8 *)(*(long *)(param_5 + 0x20) + lVar3));
    func_0x00010bde1e20(*(undefined8 *)(param_5 + 0x20));
    lVar3 = (long)_DAT_112764b78;
    uVar2 = *(ulong *)(*(long *)(param_5 + 0x20) + lVar3);
    if ((uVar2 != 0) && (func_0x00010c074c20(), (uVar2 & 1) == 0)) {
      func_0x00010bf20c00(*(undefined8 *)(param_5 + 0x20));
      _CGRectGetWidth();
      dVar4 = dVar5 + -21.0;
      func_0x00010bf20c00(*(undefined8 *)(param_5 + 0x20));
      _CGRectGetHeight();
      func_0x00010c19f0e0(dVar4,dVar6,0x4035000000000000,(dVar5 + -55.0) - dVar6,
                          *(undefined8 *)(*(long *)(param_5 + 0x20) + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(*(long *)(param_5 + 0x20) + lVar3),PTR_s_layoutIfNeeded_112600d80);
      return;
    }
  }
  return;
}



/* Entry: 10719a8a4; end: 10719a8af;  */

void FUN_10719a8a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010719a8ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10719a8b0; end: 10719a903; -[SCStickerPickerCategoryCell _horizontalStickersFromCTPItems:] */

void FUN_10719a8b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10719a904;
  puStack_20 = &UNK_110990f00;
  uStack_18 = param_1;
  func_0x000100504554(param_3,&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10719a904; end: 10719a90f;  */

void FUN_10719a904(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4a1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__legacyStickerForCTPItem__112570210,param_2);
  return;
}



/* Entry: 10719a910; end: 10719aad7; -[SCStickerPickerCategoryCell _legacyStickerForCTPItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719a910(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  long lVar11;
  
  _objc_retain(param_3);
  lVar11 = (long)_DAT_112764b90;
  uVar1 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06f720();
  _objc_release(uVar1);
  puVar8 = PTR_PTR_1126bc960;
  if ((int)uVar2 == 0) {
    uVar6 = param_3;
    func_0x00010bf96f00();
    if (uVar6 == 10) {
      puVar10 = PTR_PTR_1126d4fd0;
      _objc_alloc(PTR_PTR_1126d4fd0);
      func_0x00010bffa500();
    }
    else {
      if (uVar6 == 4) {
        uVar7 = param_3;
        func_0x00010bf96da0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR_PTR_1126ba8d8;
        _objc_opt_class(PTR_PTR_1126ba8d8);
        uVar9 = uVar7;
        _objc_opt_isKindOfClass(uVar7,puVar8);
        uVar6 = uVar7;
        if ((uVar9 & 1) == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        _objc_release(uVar7);
        uVar7 = uVar6;
        func_0x00010bfee000();
        _objc_release(uVar6);
        if (uVar7 == 5) {
          puVar10 = PTR_PTR_1126d4fc0;
          func_0x00010bfccb20(PTR_PTR_1126d4fc0);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_10719aab8;
        }
      }
      puVar10 = (undefined *)0x0;
    }
  }
  else {
    lVar3 = param_1;
    func_0x00010c0849a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c10f580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2904a0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    puVar5 = *(undefined **)(param_1 + lVar11);
    func_0x00010c269d40(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar5;
    func_0x00010c253f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar8);
  }
LAB_10719aab8:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10719aad8; end: 10719ac27; -[SCStickerPickerCategoryCell stickerForUncorrectedIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719aad8(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar7 = (long)_DAT_112764b64;
  uVar6 = *(ulong *)(param_1 + lVar7);
  puVar1 = PTR_PTR_1126d4f78;
  _objc_opt_class(PTR_PTR_1126d4f78);
  _objc_opt_isKindOfClass(uVar6,puVar1);
  if ((uVar6 & 1) == 0) {
    func_0x00010c1554e0(param_3);
    lVar2 = param_1;
    func_0x00010bde9de0();
    lVar3 = *(long *)(param_1 + lVar7);
    func_0x00010c1558c0();
    if (lVar2 < lVar3) {
      uVar6 = param_3;
      func_0x00010c0840e0();
      uVar4 = *(ulong *)(param_1 + lVar7);
      func_0x00010c255420();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf529e0();
      _objc_release(uVar4);
      if (uVar6 < uVar5) {
        lVar7 = *(long *)(param_1 + lVar7);
        func_0x00010c255420(lVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0840e0(param_3);
        param_1 = lVar7;
        func_0x00010c0dfd40(lVar7);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10719ab54;
      }
    }
    param_1 = 0;
  }
  else {
    lVar7 = *(long *)(param_1 + lVar7);
    func_0x00010c0843c0(lVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4a1c0(param_1);
    _objc_retainAutoreleasedReturnValue();
LAB_10719ab54:
    _objc_release(lVar7);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10719ac28; end: 10719ad1b; -[SCStickerPickerCategoryCell kindForToggleableUIForIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719ac28(undefined **param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)((long)param_1 + (long)_DAT_112764aec);
  func_0x00010bf33b60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d4f30;
  _objc_opt_class(PTR_PTR_1126d4f30);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  _objc_release(uVar1);
  if (((uVar3 & 1) == 0) || (uVar1 == 0)) {
    func_0x00010c253f40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126bab40;
    func_0x00010bfee100();
    if (puVar2 == (undefined *)0x6) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110ef2bd8;
      _objc_retain(&PTR____CFConstantStringClassReference_110ef2bd8);
    }
    else {
      ppuVar4 = (undefined **)0x0;
    }
    _objc_release(param_1);
  }
  else {
    func_0x00010bf9c0a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = param_1;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 10719ad1c; end: 10719adbb; -[SCStickerPickerCategoryCell shouldShowToggleableUIForIndexPath:] */

bool FUN_10719ad1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010bf9c0a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = param_1;
    func_0x00010c087080(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9c0a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar3 == param_1;
    _objc_release();
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10719adbc; end: 10719adf7; -[SCStickerPickerCategoryCell heightForToggleableUIForCollectionView:kind:layout:] */

undefined8
FUN_10719adbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  func_0x00010c0720c0(param_5,param_3,&PTR____CFConstantStringClassReference_110ef2bd8);
  if ((int)param_5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c106b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126d4f58,PTR_s_preferredHeight_11261f4f8);
    return param_1;
  }
  return 0;
}



/* Entry: 10719adf8; end: 10719b00b; -[SCStickerPickerCategoryCell sourceRectForToggleableUIForCollectionView:indexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10719adf8(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_e0;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  char *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar6 = (long)_DAT_112764b64;
  uVar4 = *(ulong *)(param_1 + lVar6);
  func_0x00010c1554e0(param_4);
  func_0x00010c230ee0();
  if ((uVar4 & 1) == 0) {
    uStack_e0 = *(undefined8 *)PTR__CGRectZero_110347608;
  }
  else {
    uVar1 = param_3;
    func_0x00010bf33b60();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126d4f30;
    _objc_retain();
    _objc_opt_class(puVar2);
    uVar3 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar2);
    uVar4 = uVar1;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar1);
    if (uVar4 == 0) {
      uStack_e0 = *(undefined8 *)PTR__CGRectZero_110347608;
    }
    else {
      uVar3 = uVar1;
      func_0x00010bf40120();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c1554e0(param_4);
      func_0x00010c255420(uVar5);
      _objc_retainAutoreleasedReturnValue();
      puStack_88 = &uStack_90;
      uStack_90 = 0;
      uStack_80 = 0x4010000000;
      pcStack_78 = "";
      uStack_68 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
      uStack_70 = *(undefined8 *)PTR__CGRectZero_110347608;
      uStack_58 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
      uStack_60 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
      _objc_retain(uVar3);
      func_0x00010bf97e80(uVar5);
      uStack_e0 = puStack_88[4];
      _objc_release(uVar3);
      __Block_object_dispose(&uStack_90,8);
      _objc_release(uVar5);
      _objc_release(uVar3);
    }
    _objc_release(uVar4);
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uStack_e0;
}



/* Entry: 10719b00c; end: 10719b0c7;  */

void FUN_10719b00c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined1 *param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bab40;
  func_0x00010bfee100(PTR_PTR_1126bab40,param_6,param_6);
  if (puVar1 == (undefined *)0x6) {
    uVar3 = *(undefined8 *)(param_5 + 0x20);
    puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf33b60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010bfb68e0(uVar3);
    lVar2 = *(long *)(*(long *)(param_5 + 0x28) + 8);
    *(undefined8 *)(lVar2 + 0x20) = param_1;
    *(undefined8 *)(lVar2 + 0x28) = param_2;
    *(undefined8 *)(lVar2 + 0x30) = param_3;
    *(undefined8 *)(lVar2 + 0x38) = param_4;
    *param_8 = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 10719b0c8; end: 10719b5ff; -[SCStickerPickerCategoryCell logVisibleItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719b0c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  undefined *param_5,undefined8 param_6,uint param_7)

{
  double dVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  double dVar18;
  float fVar19;
  undefined4 uVar20;
  double dVar21;
  double dVar22;
  
  uVar20 = (undefined4)((ulong)param_3 >> 0x20);
  fVar19 = (float)param_3;
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_5;
  if (*(long *)(param_5 + _DAT_112764ad8) == 0) {
    func_0x000108d12f1c();
    if ((param_5[_DAT_112764bcc] & 1) == 0) {
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      param_7 = 0;
      puVar3 = param_5;
      func_0x00010bf7e960();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(param_5);
        return;
      }
      goto LAB_10719b5fc;
    }
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    lVar17 = (long)_DAT_112764b64;
    uVar11 = *(ulong *)(param_5 + lVar17);
    puVar12 = PTR_PTR_1126d4f78;
    _objc_opt_class(PTR_PTR_1126d4f78);
    _objc_opt_isKindOfClass(uVar11,puVar12);
    puVar12 = PTR_PTR_1126d4f78;
    if ((uVar11 & 1) == 0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar13 = *(undefined **)(param_5 + lVar17);
      _objc_retain(puVar13);
      _objc_opt_class(puVar12);
      puVar2 = puVar13;
      _objc_opt_isKindOfClass(puVar13,puVar12);
      puVar12 = puVar13;
      if (((ulong)puVar2 & 1) == 0) {
        puVar12 = (undefined *)0x0;
      }
      _objc_retain(puVar12);
      _objc_release(puVar13);
    }
    lVar9 = (long)_DAT_112764aec;
    puVar13 = *(undefined **)(param_5 + lVar9);
    func_0x00010bf408e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar9));
    puVar2 = puVar13;
    func_0x00010c08c940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
    puVar13 = puVar2;
    func_0x00010bf529e0();
    if ((puVar13 != (undefined *)0x0) && (lVar10 = (long)_DAT_112764b5c, param_5[lVar10] == '\x01'))
    {
      func_0x00010c12d580(*(undefined8 *)(param_5 + lVar9));
      param_5[lVar10] = 0;
    }
    _objc_retain(puVar2);
    puVar13 = puVar2;
    func_0x00010bf52a60();
    lVar10 = lRam0000000000000000;
    while (puVar13 != (undefined *)0x0) {
      puVar14 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar10) {
          _objc_enumerationMutation(puVar2);
        }
        puVar15 = *(undefined **)((long)puVar14 * 8);
        puVar4 = puVar15;
        func_0x00010bfecf20();
        _objc_retainAutoreleasedReturnValue();
        dVar21 = param_4;
        if (puVar12 == (undefined *)0x0) {
          lVar5 = *(long *)(param_5 + lVar17);
          func_0x00010c1558c0();
          puVar6 = puVar4;
          func_0x00010c1554e0();
          if ((long)puVar6 < lVar5) {
            puVar16 = *(undefined **)(param_5 + lVar17);
            func_0x00010c1554e0(puVar4);
            func_0x00010c255420();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar16;
            func_0x00010bf529e0();
            puVar7 = puVar4;
            func_0x00010c0840e0();
            _objc_release(puVar16);
            dVar21 = param_4;
            if (puVar7 < puVar6) goto LAB_10719b320;
          }
        }
        else {
LAB_10719b320:
          func_0x00010bfb68e0(puVar15);
          dVar18 = (double)CONCAT44(uVar20,fVar19);
          uVar11 = *(ulong *)(param_5 + lVar9);
          dVar22 = dVar21;
          func_0x00010bf20c00();
          _CGRectIntersection();
          dVar1 = (double)CONCAT44(uVar20,fVar19);
          param_4 = dVar22;
          _CGRectIsNull();
          if (((uVar11 & 1) == 0) && (dVar18 = dVar18 * dVar21, 0.0 < dVar18)) {
            fVar19 = (float)(int)dVar22;
            uVar20 = 0;
            if (1.0 <= (double)((float)(int)dVar1 * fVar19) / dVar18) {
              if (puVar12 == (undefined *)0x0) {
                puVar15 = *(undefined **)(param_5 + lVar17);
                func_0x00010c253f20(puVar15);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar3);
              }
              else {
                puVar15 = puVar4;
                func_0x00010c1554e0();
                param_7 = (uint)puVar15;
                puVar6 = puVar12;
                func_0x00010c085160();
                _objc_retainAutoreleasedReturnValue();
                puVar15 = puVar4;
                func_0x00010c142240();
                puVar7 = puVar6;
                func_0x00010c084fc0();
                _objc_retainAutoreleasedReturnValue();
                puVar16 = puVar7;
                func_0x00010bf529e0();
                _objc_release(puVar7);
                if (puVar16 <= puVar15) {
                  _objc_release(puVar6);
                  param_5 = puVar2;
                  goto LAB_10719b590;
                }
                puVar7 = puVar6;
                func_0x00010c084fc0(puVar6);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c142240(puVar4);
                puVar16 = puVar7;
                func_0x00010c0dfd40(puVar7);
                _objc_retainAutoreleasedReturnValue();
                puVar15 = param_5;
                func_0x00010be4a1c0(param_5);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar16);
                _objc_release(puVar7);
                func_0x00010c14c720(puVar3);
                _objc_release(puVar6);
              }
              _objc_release(puVar15);
            }
          }
        }
        _objc_release(puVar4);
        puVar14 = puVar14 + 1;
      } while (puVar13 != puVar14);
      puVar13 = puVar2;
      func_0x00010bf52a60();
    }
    _objc_release(puVar2);
    func_0x00010bf6b020(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar4;
    func_0x00010bf7e960(param_5);
    param_7 = (uint)puVar13;
LAB_10719b590:
    _objc_release(puVar4);
    _objc_release(param_5);
    _objc_release(puVar2);
    _objc_release(puVar12);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
LAB_10719b5fc:
  ___stack_chk_fail();
  lVar8 = (long)_DAT_112764bcc;
  if ((byte)puVar3[lVar8] != param_7) {
    puVar3[lVar8] = (char)param_7;
    func_0x00010c0b33a0();
    if ((puVar3[lVar8] & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0697b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(puVar3 + _DAT_112764b94),PTR_s_interrupt_1125f7ff8);
      return;
    }
  }
  return;
}



/* Entry: 10719b600; end: 10719b657; -[SCStickerPickerCategoryCell setIsDisplaying:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719b600(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112764bcc;
  if (*(byte *)(param_1 + lVar1) != param_3) {
    *(char *)(param_1 + lVar1) = (char)param_3;
    func_0x00010c0b33a0();
    if ((*(byte *)(param_1 + lVar1) & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0697b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + _DAT_112764b94),PTR_s_interrupt_1125f7ff8);
      return;
    }
  }
  return;
}



/* Entry: 10719b658; end: 10719b83f; -[SCStickerPickerCategoryCell willDisplay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719b658(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + _DAT_112764aec);
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  if (lVar7 != 0) {
    do {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(lVar1);
        }
        uVar8 = *(ulong *)(lVar10 * 8);
        puVar9 = PTR_PTR_1126b0d10;
        _objc_opt_class(PTR_PTR_1126b0d10);
        uVar2 = uVar8;
        _objc_opt_isKindOfClass(uVar8,puVar9);
        ppuVar6 = &PTR_PTR_1126b0d10;
        if ((uVar2 & 1) == 0) {
          puVar9 = PTR_PTR_1126d4f28;
          _objc_opt_class(PTR_PTR_1126d4f28);
          uVar2 = uVar8;
          _objc_opt_isKindOfClass(uVar8,puVar9);
          ppuVar6 = &PTR_PTR_1126d4f28;
          if ((uVar2 & 1) != 0) goto LAB_10719b740;
        }
        else {
LAB_10719b740:
          puVar9 = *ppuVar6;
          _objc_retain(uVar8);
          _objc_opt_class(puVar9);
          uVar3 = uVar8;
          _objc_opt_isKindOfClass(uVar8,puVar9);
          uVar2 = uVar8;
          if ((uVar3 & 1) == 0) {
            uVar2 = 0;
          }
          _objc_retain(uVar2);
          _objc_release(uVar8);
          func_0x00010c2a5f80(uVar2);
          _objc_release(uVar2);
        }
        lVar10 = lVar10 + 1;
      } while (lVar7 != lVar10);
      lVar7 = lVar1;
      func_0x00010bf52a60();
    } while (lVar7 != 0);
  }
  _objc_release(lVar1);
  lVar4 = param_1;
  func_0x00010beb3a20();
  lVar7 = *(long *)(param_1 + _DAT_112764b3c);
  func_0x00010c1a7f60();
  if ((((uint)lVar4 ^ 1) & 1) == 0) {
    lVar7 = param_1;
    func_0x00010c285b20();
  }
  if (*(ulong *)(param_1 + _DAT_112764b4c) < 3) {
    func_0x00010bec7b40();
    lVar7 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010be09940();
  if (*(ulong *)(lVar7 + _DAT_112764b4c) < 3) {
                    /* WARNING: Could not recover jumptable at 0x00010bed2150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(lVar7,PTR_s__unsubscribeFromKeyboardNotifica_1125921f8);
    return;
  }
  return;
}



/* Entry: 10719b840; end: 10719b883; -[SCStickerPickerCategoryCell didEndDisplay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719b840(long param_1)

{
  func_0x00010be09940();
  if (*(ulong *)(param_1 + _DAT_112764b4c) < 3) {
                    /* WARNING: Could not recover jumptable at 0x00010bed2150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__unsubscribeFromKeyboardNotifica_1125921f8)
    ;
    return;
  }
  return;
}



/* Entry: 10719b884; end: 10719b8a7; -[SCStickerPickerCategoryCell close] */

void FUN_10719b884(undefined8 param_1)

{
  func_0x00010be09940();
                    /* WARNING: Could not recover jumptable at 0x00010bed2150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__unsubscribeFromKeyboardNotifica_1125921f8);
  return;
}



/* Entry: 10719b8a8; end: 10719b983; -[SCStickerPickerCategoryCell _toggleExpandablePickerOfKind:atIndexPath:] */

void FUN_10719b8a8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if (param_4 != 0) {
    _objc_retain(param_4);
    _objc_retain(param_3);
    lVar2 = param_1;
    func_0x00010bf9c0a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0720c0();
    uVar1 = 0;
    if ((int)lVar3 == 0) {
      uVar1 = param_3;
    }
    func_0x00010c198820(param_1,param_2,uVar1);
    _objc_release(lVar2);
    lVar3 = param_1;
    func_0x00010bf9c0a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar2 = param_4;
    if (lVar3 == 0) {
      lVar2 = 0;
    }
    func_0x00010c198800(param_1,param_2,lVar2);
    func_0x00010c08c7c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c272cc0();
    _objc_release(param_4);
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10719b984; end: 10719ba4b; -[SCStickerPickerCategoryCell _didSelectVenueStickerAtIndexPath:categoryCell:stickerSelected:index:] */

void FUN_10719b984(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 != 0) {
    lVar1 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c298200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7d7e0();
      _objc_release(param_1);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10719ba4c; end: 10719bb7f; -[SCStickerPickerCategoryCell _didSelectPlanStickerAtIndexPath:categoryCell:stickerSelected:index:] */

void FUN_10719ba4c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 != 0) {
    uVar1 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf2d1a0();
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    if ((int)uVar2 == 0) {
      lVar3 = param_3;
      func_0x00010c1554e0(param_3);
      func_0x00010bfed020(puVar4,param_2,param_6,lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bec2b60(param_1);
      func_0x00010bf332a0(*(undefined8 *)PTR__CGPointZero_110347540,
                          *(undefined8 *)(PTR__CGPointZero_110347540 + 8),uVar1,param_2,param_4,
                          param_5,0,puVar4,param_1);
      _objc_release(puVar4);
    }
    else {
      func_0x00010bf7d160(uVar1,param_2,param_5,param_4,param_6);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10719bb80; end: 10719bc9b; -[SCStickerPickerCategoryCell stickerTopicPicker:didSelectSticker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719bb80(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_6);
  uVar1 = param_6;
  func_0x00010c262ca0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0(param_6);
  func_0x00010bf512a0(uVar1,param_4,param_3);
  _objc_release(uVar1);
  lVar2 = param_3;
  func_0x00010bf9c080(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beccb80(param_3,param_4,&PTR____CFConstantStringClassReference_110ef2bd8,lVar2);
  _objc_release(lVar2);
  lVar2 = param_3 + _DAT_112764bb4;
  _objc_loadWeakRetained(lVar2);
  puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_4,0,0);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010bec2b60(param_3);
  func_0x00010bf332a0(param_1,param_2,lVar2,param_4,param_3,param_6,0,puVar3,lVar4);
  _objc_release(param_6);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10719bc9c; end: 10719bedf; -[SCStickerPickerCategoryCell horizontalCell:stickerCell:stickerSelected:center:thumbnail:index:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719bc9c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,ulong param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_5 == 0) goto LAB_10719be04;
  uVar1 = *(undefined8 *)(param_3 + _DAT_112764aec);
  func_0x00010bfecfa0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d4fc0;
  _objc_opt_class(PTR_PTR_1126d4fc0);
  uVar3 = param_7;
  _objc_opt_isKindOfClass(param_7,puVar2);
  if ((uVar3 & 1) == 0) {
    puVar2 = PTR_PTR_1126bab40;
    func_0x00010bfee100();
    if (puVar2 == (undefined *)0x5) {
      func_0x00010be004a0(param_3);
    }
    else {
      puVar2 = PTR_PTR_1126bab40;
      func_0x00010bfee100();
      if (puVar2 == (undefined *)0x16) {
        func_0x00010be002e0(param_3);
      }
      else {
        puVar2 = PTR_PTR_1126bab40;
        func_0x00010bfee100();
        if (puVar2 == (undefined *)0x6) {
          func_0x00010beccb80(param_3);
        }
        else {
          uVar4 = param_6;
          func_0x00010c07fa60();
          if ((int)uVar4 != 0) {
            lVar5 = param_3 + _DAT_112764bb4;
            _objc_loadWeakRetained(lVar5);
            puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
            func_0x00010c1554e0(uVar1);
            func_0x00010bfed020(puVar2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bec2b60(param_3);
            func_0x00010bf332a0(param_1,param_2,lVar5);
            _objc_release(puVar2);
            goto LAB_10719bd60;
          }
          uVar4 = param_6;
          func_0x00010bf2da60();
          if ((int)uVar4 != 0) {
            func_0x00010c128dc0(param_5);
          }
        }
      }
    }
  }
  else {
    lVar5 = param_3 + _DAT_112764bb4;
    _objc_loadWeakRetained(lVar5);
    func_0x00010bf33280();
LAB_10719bd60:
    _objc_release(lVar5);
  }
  _objc_release(uVar1);
LAB_10719be04:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10719bee0; end: 10719bee7; -[SCStickerPickerCategoryCell stickerPickerHorizontalScrollCellEmptyView:] */

undefined8 FUN_10719bee0(void)

{
  return 0;
}



/* Entry: 10719bee8; end: 10719beef; -[SCStickerPickerCategoryCell stickerPickerHorizontalScrollCellShouldShowLoadingSpinner:] */

undefined8 FUN_10719bee8(void)

{
  return 0;
}



/* Entry: 10719bef0; end: 10719beff; -[SCStickerPickerCategoryCell stickerPickerHorizontalScrollCellViewDidScrollCompletion:] */

void FUN_10719bef0(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010719befc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3,0);
  return;
}



/* Entry: 10719bf00; end: 10719bf03; -[SCStickerPickerCategoryCell stickerPickerHorizontalScrollCellAnnounceDataChange:] */

void FUN_10719bf00(void)

{
  return;
}



/* Entry: 10719bf04; end: 10719bfef; -[SCStickerPickerCategoryCell stickerPickerHorizontalScrollCell:willDisplayCellWithSticker:indexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719bf04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112764aec);
  func_0x00010bfecfa0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  if (param_5 != 0) {
    lVar2 = param_5;
    func_0x00010c142240(param_5);
    uVar3 = uVar1;
    func_0x00010c1554e0(uVar1);
    func_0x00010bfed060(puVar4,param_2,lVar2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2546a0();
    _objc_release(param_1);
    _objc_release(puVar4);
  }
  _objc_release(uVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10719bff0; end: 10719c04b; -[SCStickerPickerCategoryCell stickerPickerHorizontalScrollCell:didStartLoadingSticker:] */

void FUN_10719bff0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c254660();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10719c04c; end: 10719c20b; -[SCStickerPickerCategoryCell stickerPickerHorizontalScrollCell:didShowSticker:timeToDisplay:indexPath:downloadSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719c04c(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_2 + _DAT_112764aec);
  func_0x00010bfecfa0(uVar1,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  if (param_6 != 0) {
    lVar2 = param_6;
    func_0x00010c142240(param_6);
    uVar5 = uVar1;
    func_0x00010c1554e0(uVar1);
    func_0x00010bfed060(puVar3,param_3,lVar2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_2;
    func_0x00010bf6b020(param_2);
    _objc_retainAutoreleasedReturnValue();
    param_4 = param_2;
    func_0x00010c254640(param_1);
    _objc_release(puVar4);
    if (*(long *)(param_2 + _DAT_112764ad8) == 0) {
      uVar5 = *(undefined8 *)(param_2 + _DAT_112764b4c);
      func_0x000108d12f1c(uVar5);
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_70 = param_5;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_70,1);
      _objc_retainAutoreleasedReturnValue();
      param_4 = puVar4;
      func_0x00010bf7e960(param_2,param_3,puVar4,uVar5);
      _objc_release(puVar4);
      _objc_release(param_2);
    }
    _objc_release(puVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_4);
  uVar1 = param_5;
  func_0x00010bf6b020(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_4;
  func_0x00010c253880(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c254660(uVar1,param_3,param_5,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10719c20c; end: 10719c287; -[SCStickerPickerCategoryCell stickerPickerCellDidStartLoadingSticker:] */

void FUN_10719c20c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c253880(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c254660(uVar1,param_2,param_1,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10719c288; end: 10719c353; -[SCStickerPickerCategoryCell stickerPickerCellDidShowSticker:timeToDisplay:downloadSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719c288(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_2 + _DAT_112764aec);
  func_0x00010bfecfa0(lVar1,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_2;
    func_0x00010bf6b020(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c253880(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c254640(param_1,lVar2,param_3,param_2,uVar3,lVar1,param_5);
    _objc_release(uVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10719c354; end: 10719c3c3; -[SCStickerPickerCategoryCell _updateCollectionContentInsetsWithTopInset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719c354(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  uVar2 = 0;
  if (*(long *)(param_2 + _DAT_112764b4c) == 0xc) {
    func_0x00010bebe7e0(param_2);
    uVar2 = uVar1;
  }
  func_0x00010bde1de0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c181f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,uVar2,uVar1,0,*(undefined8 *)(param_2 + _DAT_112764aec),
             PTR_s_setContentInset__11263e200);
  return;
}



/* Entry: 10719c3c4; end: 10719c3f3; -[SCStickerPickerCategoryCell _collectionViewBottomInset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10719c3c4(long param_1)

{
  double dVar1;
  
  dVar1 = 0.0;
  if (*(char *)(param_1 + _DAT_112764b98) == '\x01') {
    dVar1 = *(double *)(param_1 + _DAT_112764ba4) + 20.0;
  }
  return dVar1;
}



/* Entry: 10719c3f4; end: 10719c507; -[SCStickerPickerCategoryCell collectionView:layout:insetForSectionAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10719c3f4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = param_2;
  func_0x00010bde9de0(param_2,param_3,param_6);
  lVar1 = param_2;
  func_0x00010beb95e0(param_2,param_3,lVar3);
  if ((int)lVar1 != 0) {
    func_0x00010bebe7e0(param_2);
  }
  uVar2 = *(undefined8 *)(param_2 + _DAT_112764b64);
  func_0x00010c230ee0(uVar2,param_3,lVar3);
  if ((int)uVar2 == 0) {
    func_0x00010be9d040(param_2);
    func_0x00010be9cbc0(param_2);
  }
  else {
    func_0x00010be9cbc0(param_2);
    lVar3 = param_2;
    func_0x00010c08c7c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ce4a0();
    _objc_release(lVar3);
    param_1 = 0;
    if ((*(long *)(param_2 + _DAT_112764b4c) == 3) && (*(long *)(param_2 + _DAT_112764ad8) == 0)) {
      lVar3 = (long)_DAT_112764aec;
      func_0x00010bf4c7c0(*(undefined8 *)(param_2 + lVar3));
      func_0x00010bf4c7c0(*(undefined8 *)(param_2 + lVar3));
    }
  }
  return param_1;
}



/* Entry: 10719c508; end: 10719c553; -[SCStickerPickerCategoryCell _showHorizontalContentInsetsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10719c508(long param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + _DAT_112764b64);
  func_0x00010c230ee0();
  if ((uVar2 & 1) == 0) {
    bVar1 = *(long *)(param_1 + _DAT_112764b4c) != 0xc;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 10719c554; end: 10719c5fb; -[SCStickerPickerCategoryCell _isInteractiveStickersSectionWithCorrectedSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10719c554(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar1 = PTR_PTR_1126d4f78;
  uVar4 = *(ulong *)(param_1 + _DAT_112764b64);
  _objc_retain(uVar4);
  _objc_opt_class(puVar1);
  uVar2 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar1);
  uVar3 = uVar4;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  uVar2 = uVar3;
  func_0x00010c085160(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010c156900(uVar2);
  _objc_release(uVar2);
  return uVar3 == 3;
}



/* Entry: 10719c5fc; end: 10719c7b7; -[SCStickerPickerCategoryCell _endDisplayCells] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719c5fc(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + _DAT_112764aec);
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  if (lVar2 != 0) {
    do {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(lVar1);
        }
        uVar8 = *(ulong *)(lVar10 * 8);
        puVar9 = PTR_PTR_1126b0d10;
        _objc_opt_class(PTR_PTR_1126b0d10);
        uVar3 = uVar8;
        _objc_opt_isKindOfClass(uVar8,puVar9);
        ppuVar7 = &PTR_PTR_1126b0d10;
        if ((uVar3 & 1) == 0) {
          puVar9 = PTR_PTR_1126d4f28;
          _objc_opt_class(PTR_PTR_1126d4f28);
          uVar3 = uVar8;
          _objc_opt_isKindOfClass(uVar8,puVar9);
          ppuVar7 = &PTR_PTR_1126d4f28;
          if ((uVar3 & 1) != 0) goto LAB_10719c704;
          puVar9 = PTR_PTR_1126d4f50;
          _objc_opt_class(PTR_PTR_1126d4f50);
          uVar3 = uVar8;
          _objc_opt_isKindOfClass(uVar8,puVar9);
          ppuVar7 = &PTR_PTR_1126d4f50;
          if ((uVar3 & 1) != 0) goto LAB_10719c704;
        }
        else {
LAB_10719c704:
          puVar9 = *ppuVar7;
          _objc_retain(uVar8);
          _objc_opt_class(puVar9);
          uVar4 = uVar8;
          _objc_opt_isKindOfClass(uVar8,puVar9);
          uVar3 = uVar8;
          if ((uVar4 & 1) == 0) {
            uVar3 = 0;
          }
          _objc_retain(uVar3);
          _objc_release(uVar8);
          func_0x00010bf75820(uVar3);
          _objc_release(uVar3);
        }
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = lVar1;
  func_0x00010bec2ac0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 != 0) {
    func_0x00010bf6b020(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c254660();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 10719c7b8; end: 10719c81b; -[SCStickerPickerCategoryCell willDisplayStickerPickerItemCell:] */

void FUN_10719c7b8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bec2ac0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c254660();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10719c81c; end: 10719c90f; -[SCStickerPickerCategoryCell stickerPickerItemCell:didDisplayContentInTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719c81c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  lVar2 = *(long *)(param_2 + _DAT_112764aec);
  func_0x00010bfecfa0(lVar2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = param_2;
    func_0x00010bec2ac0(param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      func_0x00010bece160(param_1,param_2,param_3,lVar3,lVar2);
      lVar4 = param_2;
      func_0x00010bf6b020(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_4;
      func_0x00010c09c920();
      uVar1 = 1;
      if ((int)uVar5 != 0) {
        uVar1 = 2;
      }
      func_0x00010c254640(param_1,lVar4,param_3,param_2,lVar3,lVar2,uVar1);
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10719c910; end: 10719cb43; -[SCStickerPickerCategoryCell _stickerFromItemCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719c910(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0840e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ba8d8;
  _objc_opt_class(PTR_PTR_1126ba8d8);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar5 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar2);
  uVar2 = uVar5;
  func_0x00010bfee000();
  _objc_release(uVar5);
  if (uVar2 == 0xf) {
    uVar4 = *(ulong *)(param_1 + (long)_DAT_112764b90);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c253f00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar5 = uVar1;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126bb2d0;
    _objc_opt_class(PTR_PTR_1126bb2d0);
    uVar2 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar3);
    if ((uVar2 & 1) == 0) {
      uVar2 = uVar1;
      func_0x00010bf96da0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126ba800;
      _objc_opt_class(PTR_PTR_1126ba800);
      uVar4 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar3);
      _objc_release(uVar2);
      _objc_release(uVar5);
      if ((uVar4 & 1) == 0) {
        uVar5 = param_3;
        func_0x00010c0846e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar5 != 0) {
          uVar4 = *(ulong *)(param_1 + (long)_DAT_112764b90);
          func_0x00010c269d40(uVar4);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = param_3;
          func_0x00010c0846e0(param_3);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar4;
          func_0x00010c253ee0(uVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
          goto LAB_10719cb14;
        }
      }
    }
    else {
      _objc_release(uVar5);
    }
    func_0x00010c0849a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010c10f580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    uVar2 = uVar1;
    func_0x00010c2721e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_10719cb14:
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10719cb44; end: 10719cbe7; -[SCStickerPickerCategoryCell setAiStickersService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719cb44(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112764bb0;
  if ((param_3 != 0) && (*(long *)(param_1 + lVar3) == 0)) {
    lVar4 = (long)_DAT_112764aec;
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    lVar1 = param_3;
    func_0x00010bf406e0(param_3,param_2,0);
    func_0x00010c126000(uVar2,param_2,lVar1,&PTR____CFConstantStringClassReference_110ea10f8);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    lVar1 = param_3;
    func_0x00010bf406e0(param_3,param_2,1);
    func_0x00010c126000(uVar2,param_2,lVar1,&PTR____CFConstantStringClassReference_110ea1118);
  }
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(long *)(param_1 + lVar3) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10719cbe8; end: 10719cccb; -[SCStickerPickerCategoryCell _aiStickerCellForItemAtIndexPath:collectionView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719cbe8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + _DAT_112764ba8);
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0840e0(param_3);
  lVar3 = lVar1;
  func_0x00010c0dfd40(lVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf341e0();
  _objc_release(lVar3);
  _objc_release(lVar1);
  if (lVar4 == 0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110ea10f8;
  }
  else {
    if (lVar4 != 1) goto LAB_10719cca4;
    ppuVar5 = &PTR____CFConstantStringClassReference_110ea1118;
  }
  lVar1 = param_4;
  func_0x00010bf6e0c0(param_4,param_2,ppuVar5,param_3);
  _objc_retainAutoreleasedReturnValue();
LAB_10719cca4:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10719cccc; end: 10719cd0b; -[SCStickerPickerCategoryCell _shouldDisplayAIStickerCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10719cccc(long param_1)

{
  if ((*(long *)(param_1 + _DAT_112764b4c) == 0) && (*(long *)(param_1 + _DAT_112764bb0) != 0)) {
    return *(long *)(param_1 + _DAT_112764ba8) != 0;
  }
  return false;
}



/* Entry: 10719cd0c; end: 10719cf3b; -[SCStickerPickerCategoryCell _updateAIStickersDataSourceForInputText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10719cd0c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c08fa60();
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = param_3;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  lVar9 = (long)_DAT_112764ba8;
  uVar2 = *(ulong *)(param_1 + lVar9);
  func_0x00010c065fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(uVar1);
  if (uVar2 == uVar1) {
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar2);
LAB_10719cdd0:
    uVar4 = 0;
  }
  else {
    if (uVar1 == 0) {
      _objc_release();
      _objc_release(uVar2);
    }
    else {
      uVar3 = uVar2;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar2);
      _objc_release(uVar2);
      if ((uVar3 & 1) != 0) goto LAB_10719cdd0;
    }
    uVar4 = *(undefined8 *)(param_1 + _DAT_112764bb0);
    func_0x00010bf645a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar9);
    *(undefined8 *)(param_1 + lVar9) = uVar4;
    _objc_release(uVar7);
    _objc_initWeak(auStack_48,param_1);
    uVar5 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c084ce0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c0e0e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar7 = uVar4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + _DAT_112764bd0);
    *(undefined8 *)(param_1 + _DAT_112764bd0) = uVar7;
    _objc_release(uVar8);
    _objc_release(uVar4);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    uVar4 = 1;
  }
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 10719cf3c; end: 10719cf67;  */

void FUN_10719cf3c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8a740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10719cf68; end: 10719cfe3; -[SCStickerPickerCategoryCell interactiveStickersCell:contentSizeDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719cf68(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  
  _objc_retain(param_5);
  lVar2 = (long)_DAT_112764b24;
  func_0x00010bfe0640(*(undefined8 *)(param_2 + lVar2));
  dVar3 = param_1;
  func_0x00010bfe0640(param_5);
  if (param_1 != dVar3) {
    _objc_retain(param_5);
    uVar1 = *(undefined8 *)(param_2 + lVar2);
    *(undefined8 *)(param_2 + lVar2) = param_5;
    _objc_release(uVar1);
    func_0x00010be8a740(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10719cfe4; end: 10719d177; -[SCStickerPickerCategoryCell didTapSticker:atIndex:inInteractiveStickersCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719cfe4(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112764aec);
  func_0x00010bfecfa0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d4fc0;
  _objc_opt_class(PTR_PTR_1126d4fc0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  if ((uVar3 & 1) == 0) {
    puVar2 = PTR_PTR_1126bab40;
    func_0x00010bfee100();
    if (puVar2 == (undefined *)0x5) {
      func_0x00010be004a0(param_1);
      goto LAB_10719d0dc;
    }
    puVar2 = PTR_PTR_1126bab40;
    func_0x00010bfee100();
    if (puVar2 == (undefined *)0x16) {
      func_0x00010be002e0(param_1);
      goto LAB_10719d0dc;
    }
    lVar4 = param_1 + _DAT_112764bb4;
    _objc_loadWeakRetained(lVar4);
    puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010c1554e0(uVar1);
    func_0x00010bfed020(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec2b60(param_1);
    func_0x00010bf332a0(*(undefined8 *)PTR__CGPointZero_110347540,
                        *(undefined8 *)(PTR__CGPointZero_110347540 + 8),lVar4);
    _objc_release(puVar2);
  }
  else {
    lVar4 = param_1 + _DAT_112764bb4;
    _objc_loadWeakRetained(lVar4);
    func_0x00010bf33280();
  }
  _objc_release(lVar4);
LAB_10719d0dc:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10719d178; end: 10719d307; -[SCStickerPickerCategoryCell interactiveStickersCell:didShowSticker:timeToDisplay:index:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719d178(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_2 + _DAT_112764aec);
  func_0x00010bfecfa0(uVar1,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  uVar4 = uVar1;
  func_0x00010c1554e0();
  func_0x00010bfed020(puVar2,param_3,param_6,uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010bf6b020(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c254640(param_1);
  _objc_release(lVar3);
  if (*(long *)(param_2 + _DAT_112764ad8) == 0) {
    uVar4 = *(undefined8 *)(param_2 + _DAT_112764b4c);
    func_0x000108d12f1c(uVar4);
    func_0x00010bf6b020(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_60 = param_5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&lStack_60,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7e960(param_2,param_3,puVar5,uVar4);
    _objc_release(puVar5);
    _objc_release(param_2);
  }
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    if ((((*(long *)(param_5 + _DAT_112764ad8) == 3 || *(long *)(param_5 + _DAT_112764ad8) == 1) &&
         (puVar2 = PTR_PTR_1126d4fd8, func_0x00010c0804c0(), (int)puVar2 != 0)) &&
        (*(long *)(param_5 + _DAT_112764b4c) != 9)) && (*(long *)(param_5 + _DAT_112764b4c) == 1)) {
      uVar4 = *(undefined8 *)(param_5 + _DAT_112764adc);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd46e0();
      _objc_release(uVar4);
    }
    return;
  }
  return;
}



/* Entry: 10719d308; end: 10719d3c3; -[SCStickerPickerCategoryCell _shouldShowCreateStickerButtonInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719d308(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if ((((*(long *)(param_1 + _DAT_112764ad8) == 3 || *(long *)(param_1 + _DAT_112764ad8) == 1) &&
       (puVar1 = PTR_PTR_1126d4fd8, func_0x00010c0804c0(), (int)puVar1 != 0)) &&
      (*(long *)(param_1 + _DAT_112764b4c) != 9)) && (*(long *)(param_1 + _DAT_112764b4c) == 1)) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112764adc);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd46e0();
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 10719d3c4; end: 10719d40f; -[SCStickerPickerCategoryCell _shouldShowBitmojiCTAUpsellInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10719d3c4(long param_1)

{
  if ((*(char *)(param_1 + _DAT_112764ba0) == '\x01') &&
     ((*(ulong *)(param_1 + _DAT_112764ad8) & 0xfffffffffffffffd) == 1)) {
    return *(long *)(param_1 + _DAT_112764b4c) == 1;
  }
  return false;
}



/* Entry: 10719d410; end: 10719d4a3; -[SCStickerPickerCategoryCell _shouldShowLocationButtonInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10719d410(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010c0fba80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar1 = param_1;
    func_0x00010c0fba80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c2311c0();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      return *(long *)(param_1 + (long)_DAT_112764b4c) == 1;
    }
  }
  return false;
}



/* Entry: 10719d4a4; end: 10719d537; -[SCStickerPickerCategoryCell _shouldShowPlanButtonInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10719d4a4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010c0fba80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar1 = param_1;
    func_0x00010c0fba80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c231200();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      return *(long *)(param_1 + (long)_DAT_112764b4c) == 1;
    }
  }
  return false;
}



/* Entry: 10719d538; end: 10719d5cb; -[SCStickerPickerCategoryCell _shouldShowPollButtonInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10719d538(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010c0fba80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar1 = param_1;
    func_0x00010c0fba80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c231220();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      return *(long *)(param_1 + (long)_DAT_112764b4c) == 1;
    }
  }
  return false;
}



/* Entry: 10719d5cc; end: 10719d6af; -[SCStickerPickerCategoryCell _leadingActionCellsForSection:] */

void FUN_10719d5cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010beb5de0(param_1,param_2,param_3);
  if ((int)uVar2 != 0) {
    func_0x00010befa120(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ca3a8);
  }
  uVar2 = param_1;
  func_0x00010beb5ca0(param_1,param_2,param_3);
  if ((int)uVar2 != 0) {
    func_0x00010befa120(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ca3c0);
  }
  uVar2 = param_1;
  func_0x00010beb61e0(param_1,param_2,param_3);
  if ((int)uVar2 != 0) {
    func_0x00010befa120(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ca3d8);
  }
  uVar2 = param_1;
  func_0x00010beb63e0(param_1,param_2,param_3);
  if ((int)uVar2 != 0) {
    func_0x00010befa120(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ca3f0);
  }
  func_0x00010beb6400(param_1,param_2,param_3);
  if ((int)param_1 != 0) {
    func_0x00010befa120(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ca408);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10719d6b0; end: 10719d7c3; -[SCStickerPickerCategoryCell _cellForLeadingActionCell:atIndexPath:collectionView:] */

void FUN_10719d6b0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 unaff_x22;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 < 2) {
    if (param_3 == 0) {
      func_0x00010bf61d40(param_1,param_2,param_4,param_5);
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = param_1;
    }
    else if (param_3 == 1) {
      func_0x00010bdd4620(param_1,param_2,param_4,param_5);
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = param_1;
    }
  }
  else if (param_3 == 2) {
    func_0x00010be4f540(param_1,param_2,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = param_1;
  }
  else if (param_3 == 3) {
    func_0x00010be74400(param_1,param_2,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = param_1;
  }
  else if (param_3 == 4) {
    func_0x00010be75760(param_1,param_2,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = param_1;
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x22);
  return;
}



/* Entry: 10719d7c4; end: 10719d89f; -[SCStickerPickerCategoryCell _handleTapOnLeadingActionCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719d7c4(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 < 2) {
    if (param_3 == 0) {
      param_1 = param_1 + _DAT_112764bb4;
      _objc_loadWeakRetained(param_1);
      func_0x00010bf559c0();
    }
    else {
      if (param_3 != 1) {
        return;
      }
      param_1 = param_1 + _DAT_112764bb4;
      _objc_loadWeakRetained(param_1);
      func_0x00010bf1afc0();
    }
  }
  else if (param_3 == 2) {
    param_1 = param_1 + _DAT_112764bb4;
    _objc_loadWeakRetained(param_1);
    func_0x00010c09eb40();
  }
  else if (param_3 == 3) {
    param_1 = param_1 + _DAT_112764bb4;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0fde80();
  }
  else {
    if (param_3 != 4) {
      return;
    }
    param_1 = param_1 + _DAT_112764bb4;
    _objc_loadWeakRetained(param_1);
    func_0x00010c103200();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10719d8a0; end: 10719d8bf; -[SCStickerPickerCategoryCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719d8a0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112764bb4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10719d8c0; end: 10719d8d3; -[SCStickerPickerCategoryCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719d8c0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112764bb4,param_3);
  return;
}



/* Entry: 10719d8d4; end: 10719d8f3; -[SCStickerPickerCategoryCell pickerMenuDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719d8d4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112764bd4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10719d8f4; end: 10719d907; -[SCStickerPickerCategoryCell setPickerMenuDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719d8f4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112764bd4,param_3);
  return;
}



/* Entry: 10719d908; end: 10719d927; -[SCStickerPickerCategoryCell itemPresentationModelSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719d908(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112764bd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10719d928; end: 10719d93b; -[SCStickerPickerCategoryCell setItemPresentationModelSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719d928(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112764bd8,param_3);
  return;
}



/* Entry: 10719d93c; end: 10719d95b; -[SCStickerPickerCategoryCell bitmojiPickerDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719d93c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112764bdc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10719d95c; end: 10719d96f; -[SCStickerPickerCategoryCell setBitmojiPickerDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719d95c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112764bdc,param_3);
  return;
}



/* Entry: 10719d970; end: 10719d97f; -[SCStickerPickerCategoryCell isDisplaying] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10719d970(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112764bcc);
}



/* Entry: 10719d980; end: 10719d98f; -[SCStickerPickerCategoryCell bottomInset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10719d980(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112764ba4);
}



/* Entry: 10719d990; end: 10719d99f; -[SCStickerPickerCategoryCell sourceType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10719d990(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112764ad8);
}



/* Entry: 10719d9a0; end: 10719d9af; -[SCStickerPickerCategoryCell userBlizzardLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10719d9a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112764b28);
}



/* Entry: 10719d9b0; end: 10719d9bf; -[SCStickerPickerCategoryCell superCategoryType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10719d9b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112764b4c);
}



/* Entry: 10719d9c0; end: 10719d9cf; -[SCStickerPickerCategoryCell ctpItemViewService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10719d9c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112764ac0);
}



/* Entry: 10719d9d0; end: 10719d9df; -[SCStickerPickerCategoryCell friendmojiFilteredContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10719d9d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112764ac4);
}



/* Entry: 10719d9e0; end: 10719da1f; -[SCStickerPickerCategoryCell setFriendmojiFilteredContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719d9e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112764ac4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10719da20; end: 10719da2f; -[SCStickerPickerCategoryCell showAutocompleteToggle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10719da20(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112764b74);
}



/* Entry: 10719da30; end: 10719da3f; -[SCStickerPickerCategoryCell setShowAutocompleteToggle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719da30(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112764b74) = param_3;
  return;
}



/* Entry: 10719da40; end: 10719da4f; -[SCStickerPickerCategoryCell aiStickersService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10719da40(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112764bb0);
}



/* Entry: 10719da50; end: 10719da5f; -[SCStickerPickerCategoryCell runtime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10719da50(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112764bac);
}



/* Entry: 10719da60; end: 10719da9f; -[SCStickerPickerCategoryCell setRuntime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719da60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112764bac;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10719daa0; end: 10719daaf; -[SCStickerPickerCategoryCell creativeToolsABProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10719daa0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112764b54);
}



/* Entry: 10719dab0; end: 10719dabf; -[SCStickerPickerCategoryCell bitmoji3DContentFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10719dab0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112764af0);
}



/* Entry: 10719dac0; end: 10719daff; -[SCStickerPickerCategoryCell setBitmoji3DContentFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719dac0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112764af0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10719db00; end: 10719db0f; -[SCStickerPickerCategoryCell preferences] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10719db00(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112764af4);
}



/* Entry: 10719db10; end: 10719db4f; -[SCStickerPickerCategoryCell setPreferences:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719db10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112764af4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10719db50; end: 10719db5f; -[SCStickerPickerCategoryCell avatarProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10719db50(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112764adc);
}



/* Entry: 10719db60; end: 10719db9f; -[SCStickerPickerCategoryCell setAvatarProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719db60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112764adc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10719dba0; end: 10719dbaf; -[SCStickerPickerCategoryCell timeToDisplayMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10719dba0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112764ae4);
}



/* Entry: 10719dbb0; end: 10719dbbf; -[SCStickerPickerCategoryCell layout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10719dbb0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112764ae8);
}



/* Entry: 10719dbc0; end: 10719dbcf; -[SCStickerPickerCategoryCell expandedStickerKind] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10719dbc0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112764be0);
}



/* Entry: 10719dbd0; end: 10719dc0f; -[SCStickerPickerCategoryCell setExpandedStickerKind:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719dbd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112764be0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10719dc10; end: 10719dc1f; -[SCStickerPickerCategoryCell expandedStickerIndexPath] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10719dc10(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112764be4);
}



/* Entry: 10719dc20; end: 10719dc5f; -[SCStickerPickerCategoryCell setExpandedStickerIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719dc20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112764be4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10719dc60; end: 10719e01b; -[SCStickerPickerCategoryCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719dc60(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112764be4,0);
  _objc_storeStrong(param_1 + _DAT_112764be0,0);
  _objc_storeStrong(param_1 + _DAT_112764ae8,0);
  _objc_storeStrong(param_1 + _DAT_112764ae4,0);
  _objc_storeStrong(param_1 + _DAT_112764b54,0);
  _objc_storeStrong(param_1 + _DAT_112764bac,0);
  _objc_storeStrong(param_1 + _DAT_112764bb0,0);
  _objc_storeStrong(param_1 + _DAT_112764b28,0);
  _objc_destroyWeak(param_1 + _DAT_112764bdc);
  _objc_destroyWeak(param_1 + _DAT_112764bd8);
  _objc_destroyWeak(param_1 + _DAT_112764bd4);
  _objc_destroyWeak(param_1 + _DAT_112764bb4);
  _objc_storeStrong(param_1 + _DAT_112764af0,0);
  _objc_storeStrong(param_1 + _DAT_112764be8,0);
  _objc_storeStrong(param_1 + _DAT_112764adc,0);
  _objc_storeStrong(param_1 + _DAT_112764af4,0);
  _objc_storeStrong(param_1 + _DAT_112764b9c,0);
  _objc_storeStrong(param_1 + _DAT_112764b24,0);
  _objc_storeStrong(param_1 + _DAT_112764ba8,0);
  _objc_storeStrong(param_1 + _DAT_112764bd0,0);
  _objc_storeStrong(param_1 + _DAT_112764b6c,0);
  _objc_storeStrong(param_1 + _DAT_112764b68,0);
  _objc_storeStrong(param_1 + _DAT_112764b38,0);
  _objc_storeStrong(param_1 + _DAT_112764b30,0);
  _objc_storeStrong(param_1 + _DAT_112764b34,0);
  _objc_storeStrong(param_1 + _DAT_112764b2c,0);
  _objc_storeStrong(param_1 + _DAT_112764ac0,0);
  _objc_storeStrong(param_1 + _DAT_112764b90,0);
  _objc_storeStrong(param_1 + _DAT_112764b04,0);
  _objc_storeStrong(param_1 + _DAT_112764bb8,0);
  _objc_storeStrong(param_1 + _DAT_112764ac4,0);
  _objc_storeStrong(param_1 + _DAT_112764b00,0);
  _objc_storeStrong(param_1 + _DAT_112764b60,0);
  _objc_storeStrong(param_1 + _DAT_112764b48,0);
  _objc_storeStrong(param_1 + _DAT_112764b40,0);
  _objc_storeStrong(param_1 + _DAT_112764b3c,0);
  _objc_destroyWeak(param_1 + _DAT_112764b44);
  _objc_storeStrong(param_1 + _DAT_112764af8,0);
  _objc_storeStrong(param_1 + _DAT_112764b94,0);
  _objc_storeStrong(param_1 + _DAT_112764b1c,0);
  _objc_storeStrong(param_1 + _DAT_112764b18,0);
  _objc_storeStrong(param_1 + _DAT_112764b58,0);
  _objc_storeStrong(param_1 + _DAT_112764b14,0);
  _objc_storeStrong(param_1 + _DAT_112764bc4,0);
  _objc_storeStrong(param_1 + _DAT_112764acc,0);
  _objc_storeStrong(param_1 + _DAT_112764b10,0);
  _objc_storeStrong(param_1 + _DAT_112764b78,0);
  _objc_storeStrong(param_1 + _DAT_112764b64,0);
  _objc_storeStrong(param_1 + _DAT_112764b8c,0);
  _objc_storeStrong(param_1 + _DAT_112764b88,0);
  _objc_storeStrong(param_1 + _DAT_112764b0c,0);
  _objc_storeStrong(param_1 + _DAT_112764b08,0);
  _objc_storeStrong(param_1 + _DAT_112764bec,0);
  _objc_storeStrong(param_1 + _DAT_112764bc0,0);
  _objc_storeStrong(param_1 + _DAT_112764afc,0);
  _objc_storeStrong(param_1 + _DAT_112764bbc,0);
  _objc_storeStrong(param_1 + _DAT_112764b20,0);
  _objc_storeStrong(param_1 + _DAT_112764aec,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112764b70,0);
  return;
}



/* Entry: 10719e01c; end: 10719e05f; -[SCStickerPickerHorizontalIntentGestureRecognizer _invalidateForUnexpectedTouchSequence] */

void FUN_10719e01c(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c252440();
  if (uVar1 < 3) {
                    /* WARNING: Could not recover jumptable at 0x00010c209fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_setState__112660218,*(undefined8 *)(&UNK_10de1fd70 + uVar1 * 8));
    return;
  }
  return;
}


