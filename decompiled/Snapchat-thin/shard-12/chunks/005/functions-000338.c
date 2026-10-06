/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1091c6b1c; end: 1091c6b23; -[SCLensSubPickerController numberOfSectionsInCollectionView:] */

undefined8 FUN_1091c6b1c(void)

{
  return 2;
}



/* Entry: 1091c6b24; end: 1091c6bab; -[SCLensSubPickerController collectionView:numberOfItemsInSection:] */

long FUN_1091c6b24(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  if (param_4 == 1) {
    lVar1 = *(long *)(param_1 + 0x60) + (ulong)*(byte *)(param_1 + 0x58);
  }
  else if (param_4 == 0) {
    func_0x00010bef0820(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bf529e0();
    _objc_release(param_1);
  }
  else {
    lVar1 = 0;
  }
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 1091c6bac; end: 1091c6fb3; -[SCLensSubPickerController collectionView:cellForItemAtIndexPath:] */

void FUN_1091c6bac(undefined *param_1,undefined8 param_2,undefined *param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_1;
  func_0x00010bef0820(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c1554e0();
  uVar2 = param_4;
  func_0x00010c0840e0();
  puVar5 = param_3;
  if (uVar3 == 0) {
    puVar8 = puVar1;
    func_0x00010c0dfd40(puVar1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar8;
    func_0x00010bfa1ce0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6e0c0(param_3,param_2,puVar4,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010bf46f20(puVar8,param_2,puVar5);
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0xb8);
    func_0x00010bfe72c0();
    if (uVar2 < uVar3) {
      lVar7 = *(long *)(param_1 + 0xb8);
      uVar3 = param_4;
      func_0x00010c0840e0(param_4);
      func_0x00010bf0b780(lVar7,param_2,uVar3);
      puVar8 = param_3;
      if (lVar7 == 2) {
        puVar5 = PTR_PTR_1126ddb98;
        _objc_opt_class(PTR_PTR_1126ddb98);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf6e0c0(param_3,param_2,puVar5,param_4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        uVar9 = *(undefined8 *)(param_1 + 0xb8);
        uVar3 = param_4;
        func_0x00010c0840e0(param_4);
        func_0x00010c299da0(uVar9,param_2,uVar3);
        FUN_1091c7f54();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c192d40(puVar8,param_2,uVar9);
        _objc_release(uVar9);
        puVar5 = param_1;
        func_0x00010c299e80(param_1);
        func_0x00010c193b80(puVar8,param_2,puVar5);
        puVar5 = param_1;
        func_0x00010c299e80();
        if ((int)puVar5 != 0) {
          func_0x00010c18b5e0(puVar8,param_2,param_1);
        }
      }
      else if (lVar7 == 1) {
        puVar5 = PTR_PTR_1126ddb90;
        _objc_opt_class(PTR_PTR_1126ddb90);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf6e0c0(param_3,param_2,puVar5,param_4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
      }
      else {
        puVar8 = (undefined *)0x0;
      }
      puVar5 = param_1;
      func_0x00010c159ca0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_4;
      func_0x00010c071ae0(param_4,param_2,puVar5);
      _objc_release(puVar5);
      puVar5 = param_1;
      func_0x00010c159900(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1faf00(puVar8,param_2,puVar5);
      _objc_release(puVar5);
      func_0x00010c1599c0(&uStack_80,param_1);
      uStack_a8 = uStack_78;
      uStack_b0 = uStack_80;
      uStack_98 = uStack_68;
      uStack_a0 = uStack_70;
      uStack_88 = uStack_58;
      uStack_90 = uStack_60;
      func_0x00010c1fb6c0(puVar8,param_2,&uStack_b0);
      func_0x00010c17c0e0(puVar8,param_2,uVar3);
      func_0x00010c2832c0(puVar8,param_2,param_4);
      uVar9 = *(undefined8 *)(param_1 + 0xb8);
      uVar3 = param_4;
      func_0x00010c0840e0(param_4);
      puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d0 = 0xc2000000;
      pcStack_c8 = FUN_1091c6fb4;
      puStack_c0 = &UNK_110adfcd8;
      _objc_retain(puVar8);
      puStack_b8 = puVar8;
      func_0x00010bfc9080(0x4079000000000000,0x4079000000000000,uVar9,param_2,uVar3,&puStack_d8);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar8;
      func_0x00010bf5f2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar5;
      func_0x00010c0720c0();
      _objc_release(puVar5);
      if (((ulong)puVar4 & 1) == 0) {
        uVar6 = *(undefined8 *)(param_1 + 0xb8);
        puVar5 = puVar8;
        func_0x00010bf5f2e0(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf2de60(uVar6,param_2,puVar5);
        _objc_release(puVar5);
        func_0x00010c187600(puVar8,param_2,uVar9);
        func_0x00010c1bec60(puVar8,param_2,1);
        func_0x00010c1a9f00(puVar8,param_2,0);
      }
      _objc_retain(puVar8);
      _objc_release(uVar9);
      _objc_release(puStack_b8);
      puVar5 = puVar8;
    }
    else {
      puVar8 = PTR_PTR_1126ddba0;
      _objc_opt_class(PTR_PTR_1126ddba0);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6e0c0(param_3,param_2,puVar8,param_4);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(puVar8);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1091c6fb4; end: 1091c704b;  */

void FUN_1091c6fb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010bf5f2e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0720c0();
  _objc_release(param_3);
  _objc_release(uVar2);
  if ((int)uVar1 != 0) {
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c1bec60(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091c704c; end: 1091c7053; -[SCLensSubPickerController collectionView:didSelectItemAtIndexPath:] */

void FUN_1091c704c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c158ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_selectOptionAtIndexPath__112633dd8,param_4);
  return;
}



/* Entry: 1091c7054; end: 1091c7083; -[SCLensSubPickerController collectionView:shouldSelectItemAtIndexPath:] */

bool FUN_1091c7054(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  func_0x00010c0840e0(param_4);
  return param_4 < *(ulong *)(param_1 + 0x60);
}



/* Entry: 1091c7084; end: 1091c710b; -[SCLensSubPickerController collectionView:layout:sizeForItemAtIndexPath:] */

undefined1  [16] FUN_1091c7084(long param_1)

{
  ulong uVar1;
  ulong in_x4;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  _objc_retain(in_x4);
  uVar1 = in_x4;
  func_0x00010c0840e0();
  uVar2 = 0x404e800000000000;
  if (*(ulong *)(param_1 + 0x60) <= uVar1) {
    if ((*(ulong *)(param_1 + 0x60) == 0) && (uVar1 = in_x4, func_0x00010c0840e0(), uVar1 == 0)) {
      uVar2 = 0x404e800000000000;
    }
    else {
      uVar2 = 0x4045000000000000;
    }
  }
  _objc_release(in_x4);
  auVar3._8_8_ = 0x404e800000000000;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 1091c710c; end: 1091c7267; -[SCLensSubPickerController collectionView:willDisplayCell:forItemAtIndexPath:] */

void FUN_1091c710c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010c159ca0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c071ae0();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126ddb80;
  if ((int)uVar2 != 0) {
    _objc_retain(param_4);
    _objc_opt_class(puVar3);
    uVar4 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar3);
    uVar2 = param_4;
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_4);
    if (uVar2 == 0) goto LAB_1091c7248;
    uVar2 = param_5;
    func_0x00010c071ae0();
    if ((uVar2 & 1) == 0) {
      func_0x00010c0655a0(param_1);
    }
    _objc_release(param_4);
  }
  uVar2 = param_5;
  func_0x00010c1554e0();
  if (uVar2 == 1) {
    uVar2 = param_5;
    func_0x00010c0840e0();
    uVar4 = *(ulong *)(param_1 + 0xb8);
    func_0x00010bfe72c0();
    if (uVar2 < uVar4) {
      uVar5 = *(undefined8 *)(param_1 + 0xb8);
      func_0x00010c0840e0(param_5);
      func_0x00010bf0b780(uVar5);
      func_0x00010bf5f3e0(param_1);
      uVar5 = *(undefined8 *)(param_1 + 0xb0);
      func_0x00010c0840e0(param_5);
      func_0x00010c095a00(uVar5);
    }
  }
LAB_1091c7248:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1091c7268; end: 1091c728b; -[SCLensSubPickerController collectionView:layout:referenceSizeForHeaderInSection:] */

undefined1  [16] FUN_1091c7268(void)

{
  undefined8 uVar1;
  long in_x4;
  undefined1 auVar3 [16];
  undefined8 uVar2;
  
  uVar2 = 0x404e800000000000;
  uVar1 = 0x404e800000000000;
  if (in_x4 != 0) {
    uVar2 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
    uVar1 = *(undefined8 *)PTR__CGSizeZero_110347620;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 1091c728c; end: 1091c728f; -[SCLensSubPickerController scrollViewDidScroll:] */

void FUN_1091c728c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4e1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__loadNextBatchIfNeeded_112571208);
  return;
}



/* Entry: 1091c7290; end: 1091c7293; -[SCLensSubPickerController scrollViewDidEndScrollingAnimation:] */

void FUN_1091c7290(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4e1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__loadNextBatchIfNeeded_112571208);
  return;
}



/* Entry: 1091c7294; end: 1091c7297; -[SCLensSubPickerController scrollViewDidEndDecelerating:] */

void FUN_1091c7294(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4e1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__loadNextBatchIfNeeded_112571208);
  return;
}



/* Entry: 1091c7298; end: 1091c7587; -[SCLensSubPickerController lensSubPickerImageProvider:didUpdateWithImageCount:canProcessMore:] */

void FUN_1091c7298(long param_1,undefined8 param_2,undefined8 param_3,long param_4,byte param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_d0 [8];
  byte bStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [8];
  long lStack_90;
  long lStack_88;
  byte bStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  lVar5 = *(long *)(param_1 + 0x60);
  if (param_4 == 0) {
    if ((param_5 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
      func_0x00010c238ae0(param_1);
      goto LAB_1091c7530;
    }
    lVar2 = param_1;
    func_0x00010c159ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c1554e0();
    _objc_release(lVar2);
    if (lVar3 == 1) {
      func_0x00010c1fb3e0(param_1);
    }
    func_0x00010c1fb3a0(param_1);
  }
  func_0x00010bfe2460(param_1);
  if ((lVar5 != 0 && param_4 != lVar5) && (lVar5 == 0 || lVar5 <= param_4)) {
    _objc_initWeak(auStack_78,param_1);
    lVar2 = param_1;
    func_0x00010bfe7100(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_1091c7588;
    puStack_a8 = &UNK_1108ad600;
    _objc_copyWeak(auStack_98,auStack_78);
    lStack_a0 = param_1;
    lStack_90 = lVar5;
    lStack_88 = param_4;
    bStack_80 = param_5;
    _objc_copyWeak(auStack_d0,auStack_78);
    bStack_c8 = param_5;
    func_0x00010c0f8420(lVar2);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_d0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_78);
  }
  else {
    *(long *)(param_1 + 0x60) = param_4;
    *(byte *)(param_1 + 0x58) = param_5;
    lVar2 = param_1;
    func_0x00010bfe7100(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    func_0x00010bfed300(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128fa0(lVar2);
    _objc_release(puVar4);
    _objc_release(lVar2);
    func_0x00010c08cae0(param_1);
    func_0x00010c13c580(param_1);
  }
  if (param_4 != 0) {
    lVar2 = param_1;
    func_0x00010c159ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = param_1;
      func_0x00010bfe7100(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f8420();
      _objc_release(lVar2);
    }
  }
  uVar1 = *(long *)(param_1 + 0x70) + (param_4 - lVar5);
  *(ulong *)(param_1 + 0x70) = uVar1;
  if (*(ulong *)(param_1 + 0x68) <= uVar1) {
    lVar5 = *(long *)(param_1 + 0x48);
    func_0x00010c08fa60();
    if (lVar5 == 0) goto LAB_1091c7530;
  }
  func_0x00010be4e180(param_1);
LAB_1091c7530:
  _objc_release(param_3);
  return;
}



/* Entry: 1091c7588; end: 1091c775b;  */

void FUN_1091c7588(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x58) == '\x01') {
      lVar4 = lVar1;
      func_0x00010bfe7100(lVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,
                          *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60),1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_50 = puVar2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6c100(lVar4,param_2,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(lVar4);
    }
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    for (lVar4 = *(long *)(param_1 + 0x30); lVar4 < *(long *)(param_1 + 0x38); lVar4 = lVar4 + 1) {
      puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,lVar4,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2,param_2,puVar3);
      _objc_release(puVar3);
    }
    if ((*(byte *)(param_1 + 0x40) & 1) != 0) {
      puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,*(long *)(param_1 + 0x38),
                          1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2,param_2,puVar3);
      _objc_release(puVar3);
    }
    lVar4 = lVar1;
    func_0x00010bfe7100(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066a40();
    _objc_release(lVar4);
    *(undefined8 *)(lVar1 + 0x60) = *(undefined8 *)(param_1 + 0x38);
    *(undefined1 *)(lVar1 + 0x58) = *(undefined1 *)(param_1 + 0x40);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lVar4 = lVar1 + 0x20;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c08cae0();
  func_0x00010c13c580(lVar4,param_2,*(undefined1 *)(lVar1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 1091c775c; end: 1091c779b;  */

void FUN_1091c775c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c08cae0();
  func_0x00010c13c580(lVar1,param_2,*(undefined1 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1091c779c; end: 1091c786b;  */

void FUN_1091c779c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe7100(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,0,1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128de0(uVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1091c786c; end: 1091c786f;  */

void FUN_1091c786c(void)

{
  return;
}



/* Entry: 1091c7870; end: 1091c7937; -[SCLensSubPickerController _loadNextBatchIfNeeded] */

void FUN_1091c7870(double param_1,undefined8 param_2,double param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  
  lVar1 = param_4;
  func_0x00010bfe7100();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4d5e0();
  lVar2 = param_4;
  dVar4 = param_1;
  func_0x00010bfe7100(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  lVar3 = param_4;
  func_0x00010bfe7100(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4cdc0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  dVar5 = (double)NEON_ucvtf(*(undefined8 *)(param_4 + 0x68));
  if ((param_1 - param_3) - dVar4 < dVar5 * 61.0) {
                    /* WARNING: Could not recover jumptable at 0x00010c09bcb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_4,PTR_s_loadNextBatch_112604938);
    return;
  }
  return;
}



/* Entry: 1091c7938; end: 1091c79a7; -[SCLensSubPickerController _loadNextBatch] */

void FUN_1091c7938(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bfe8840();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf2d220();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c114f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (0x4079000000000000,0x4079000000000000,*(undefined8 *)(param_1 + 0xb8),
               PTR_s_processMoreImagesIfPossibleWithS_112622df0,*(undefined8 *)(param_1 + 0x68));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c238af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_showNoImagesWarningIfNeeded_11266bce0);
  return;
}



/* Entry: 1091c79a8; end: 1091c7b0b; -[SCLensSubPickerController layoutCollectionViewIfNeededWithAnimation:] */

void FUN_1091c79a8(long param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  uVar2 = *(undefined8 *)(param_1 + 0xd8);
  func_0x00010bf40120(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf404e0(param_1,param_2,uVar2,1);
  uVar4 = *(undefined8 *)(param_1 + 0xd8);
  func_0x00010bf40120(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf404e0(param_1,param_2,uVar4,0);
  _objc_release(uVar4);
  _objc_release(uVar2);
  if (*(long *)(param_1 + 0x38) == lVar5 + lVar3) {
    cVar1 = *(char *)(param_1 + 0x58);
    if (*(char *)(param_1 + 0x40) == cVar1) {
      return;
    }
  }
  else {
    cVar1 = *(char *)(param_1 + 0x58);
  }
  *(char *)(param_1 + 0x40) = cVar1;
  *(long *)(param_1 + 0x38) = lVar5 + lVar3;
  uVar2 = *(undefined8 *)(param_1 + 0xd8);
  func_0x00010bf40120(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069fa0();
  _objc_release(uVar2);
  if (param_3 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1091c7b0c;
    puStack_50 = &UNK_110842e18;
    lStack_48 = param_1;
    func_0x00010bf03400(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_68);
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0xd8);
  func_0x00010c103be0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1091c7b0c; end: 1091c7b43;  */

void FUN_1091c7b0c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd8);
  func_0x00010c103be0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091c7b44; end: 1091c7c67; -[SCLensSubPickerController collectionView:viewForSupplementaryElementOfKind:atIndexPath:] */

void FUN_1091c7b44(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010c1554e0();
  if (lVar1 == 0) {
    uVar6 = *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00;
    uVar2 = param_4;
    func_0x00010c0720c0(param_4,param_2,uVar6);
    if ((int)uVar2 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bfa1ce0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_3;
      func_0x00010bf6e120(param_3,param_2,uVar6,uVar2,param_5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      puVar3 = puVar5;
      func_0x00010bfc1c00();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf4b900();
      _objc_release(puVar3);
      if (((ulong)puVar4 & 1) == 0) {
        func_0x00010bef9040(puVar5,param_2,*(undefined8 *)(param_1 + 0x30));
      }
      goto LAB_1091c7c34;
    }
  }
  puVar5 = PTR__OBJC_CLASS___UICollectionReusableView_1126b0d20;
  _objc_opt_new(PTR__OBJC_CLASS___UICollectionReusableView_1126b0d20);
LAB_1091c7c34:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1091c7c68; end: 1091c7c6b; -[SCLensSubPickerController _configureHeaderView:] */

void FUN_1091c7c68(void)

{
  return;
}



/* Entry: 1091c7c6c; end: 1091c7c77; -[SCLensSubPickerController _headerViewTapped] */

void FUN_1091c7c6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1fadd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setSelected__11265c598,1);
  return;
}



/* Entry: 1091c7c78; end: 1091c7c7b; -[SCLensSubPickerController videoCellDidTapEditButton:] */

void FUN_1091c7c78(void)

{
  return;
}



/* Entry: 1091c7c7c; end: 1091c7cab; -[SCLensSubPickerController setSelectedOptionIndexPath:] */

void FUN_1091c7c7c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1091c7cac; end: 1091c7cc3; -[SCLensSubPickerController delegate] */

void FUN_1091c7cac(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091c7cc4; end: 1091c7ccf; -[SCLensSubPickerController setDelegate:] */

void FUN_1091c7cc4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x98,param_3);
  return;
}



/* Entry: 1091c7cd0; end: 1091c7cd7; -[SCLensSubPickerController selectedItemBorderColor] */

undefined8 FUN_1091c7cd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 1091c7cd8; end: 1091c7d07; -[SCLensSubPickerController setSelectedItemBorderColor:] */

void FUN_1091c7cd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091c7d08; end: 1091c7d0f; -[SCLensSubPickerController pickerViewFillColor] */

undefined8 FUN_1091c7d08(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 1091c7d10; end: 1091c7d23; -[SCLensSubPickerController selectedItemTransform] */

void FUN_1091c7d10(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0xe0);
  uVar3 = *(undefined8 *)(param_2 + 0xf8);
  uVar2 = *(undefined8 *)(param_2 + 0xf0);
  param_1[1] = *(undefined8 *)(param_2 + 0xe8);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x100);
  param_1[5] = *(undefined8 *)(param_2 + 0x108);
  param_1[4] = uVar1;
  return;
}



/* Entry: 1091c7d24; end: 1091c7d37; -[SCLensSubPickerController setSelectedItemTransform:] */

void FUN_1091c7d24(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_3[1];
  uVar1 = *param_3;
  uVar3 = param_3[2];
  uVar5 = param_3[5];
  uVar4 = param_3[4];
  *(undefined8 *)(param_1 + 0xf8) = param_3[3];
  *(undefined8 *)(param_1 + 0xf0) = uVar3;
  *(undefined8 *)(param_1 + 0x108) = uVar5;
  *(undefined8 *)(param_1 + 0x100) = uVar4;
  *(undefined8 *)(param_1 + 0xe8) = uVar2;
  *(undefined8 *)(param_1 + 0xe0) = uVar1;
  return;
}



/* Entry: 1091c7d38; end: 1091c7d3f; -[SCLensSubPickerController lensLogger] */

undefined8 FUN_1091c7d38(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 1091c7d40; end: 1091c7d47; -[SCLensSubPickerController imageProvider] */

undefined8 FUN_1091c7d40(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 1091c7d48; end: 1091c7d77; -[SCLensSubPickerController setImageProvider:] */

void FUN_1091c7d48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091c7d78; end: 1091c7d7f; -[SCLensSubPickerController externalImageComponent] */

undefined8 FUN_1091c7d78(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1091c7d80; end: 1091c7daf; -[SCLensSubPickerController setExternalImageComponent:] */

void FUN_1091c7d80(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1091c7db0; end: 1091c7db7; -[SCLensSubPickerController mediaAssetManager] */

undefined8 FUN_1091c7db0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1091c7db8; end: 1091c7de7; -[SCLensSubPickerController setMediaAssetManager:] */

void FUN_1091c7db8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091c7de8; end: 1091c7dff; -[SCLensSubPickerController parentView] */

void FUN_1091c7de8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091c7e00; end: 1091c7e0b; -[SCLensSubPickerController setParentView:] */

void FUN_1091c7e00(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xc0,param_3);
  return;
}



/* Entry: 1091c7e0c; end: 1091c7e23; -[SCLensSubPickerController lensContainer] */

void FUN_1091c7e0c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 200);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091c7e24; end: 1091c7e2f; -[SCLensSubPickerController setLensContainer:] */

void FUN_1091c7e24(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 200,param_3);
  return;
}



/* Entry: 1091c7e30; end: 1091c7e37; -[SCLensSubPickerController selectedOptionId] */

undefined8 FUN_1091c7e30(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 1091c7e38; end: 1091c7e67; -[SCLensSubPickerController setSelectedOptionId:] */

void FUN_1091c7e38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091c7e68; end: 1091c7e6f; -[SCLensSubPickerController subPickerView] */

undefined8 FUN_1091c7e68(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 1091c7e70; end: 1091c7f53; -[SCLensSubPickerController .cxx_destruct] */

void FUN_1091c7e70(long param_1)

{
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_destroyWeak(param_1 + 200);
  _objc_destroyWeak(param_1 + 0xc0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_destroyWeak(param_1 + 0x98);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 1091c7f54; end: 1091c8027;  */

void FUN_1091c7f54(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                      &PTR____CFConstantStringClassReference_110f2b918);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  if ((long)(param_1 / 3600.0) != 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                        &PTR____CFConstantStringClassReference_110f2b938);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091c8028; end: 1091c802f; -[SCLensPickerFeatures standardMediaPicker] */

undefined8 FUN_1091c8028(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1091c8030; end: 1091c805f; -[SCLensPickerFeatures setStandardMediaPicker:] */

void FUN_1091c8030(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1091c8060; end: 1091c8067; -[SCLensPickerFeatures pickerResults] */

undefined8 FUN_1091c8060(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1091c8068; end: 1091c8097; -[SCLensPickerFeatures setPickerResults:] */

void FUN_1091c8068(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091c8098; end: 1091c80c7; -[SCLensPickerFeatures .cxx_destruct] */

void FUN_1091c8098(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091c80c8; end: 1091c8177; -[SCLensPickerFeatureFactory initWithUIContainer:mediaTypes:selectionLimit:didEnterBackgroundObservable:] */

undefined1 *
FUN_1091c80c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112700c70;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091c8178; end: 1091c82af; -[SCLensPickerFeatureFactory createMediaPickerFeatures] */

void FUN_1091c8178(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  
  puVar1 = PTR_PTR_1126ae568;
  _objc_opt_new(PTR_PTR_1126ae568);
  puVar2 = PTR_PTR_1126ae568;
  _objc_opt_new(PTR_PTR_1126ae568);
  puVar3 = PTR_PTR_1126ddba8;
  _objc_alloc_init(PTR_PTR_1126ddba8);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar7 = 0;
    do {
      puVar5 = PTR_PTR_1126ddbb0;
      _objc_alloc(PTR_PTR_1126ddbb0);
      func_0x00010bff0d00();
      func_0x00010befa120(puVar4,param_2,puVar5);
      _objc_release(puVar5);
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(ulong *)(param_1 + 0x18));
  }
  func_0x00010c1db6e0(puVar3,param_2,puVar4);
  puVar5 = PTR_PTR_1126ddbb8;
  _objc_alloc(PTR_PTR_1126ddbb8);
  lVar6 = param_1 + 8;
  _objc_loadWeakRetained(lVar6);
  func_0x00010c056f40(puVar5,param_2,lVar6,*(undefined8 *)(param_1 + 0x10),
                      *(undefined8 *)(param_1 + 0x18),puVar4,*(undefined8 *)(param_1 + 0x20));
  func_0x00010c209320(puVar3,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(lVar6);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1091c82b0; end: 1091c82db; -[SCLensPickerFeatureFactory .cxx_destruct] */

void FUN_1091c82b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1091c82dc; end: 1091c841f; -[SCLensStandardMediaPickerFeature initWithUIContainer:mediaTypes:selectionLimit:resultHandlers:didEnterBackgroundObservable:] */

undefined1 *
FUN_1091c82dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_112700c78;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x50) = 1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    func_0x00010beb0200(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091c8420; end: 1091c842b; -[SCLensStandardMediaPickerFeature featureCollectionViewCellClass] */

void FUN_1091c8420(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126ddbc0);
  return;
}



/* Entry: 1091c842c; end: 1091c843f; -[SCLensStandardMediaPickerFeature featureCellIdentifier] */

void FUN_1091c842c(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 1091c8440; end: 1091c8447; -[SCLensStandardMediaPickerFeature pickedResultIdentifier] */

undefined8 FUN_1091c8440(void)

{
  return 0;
}



/* Entry: 1091c8448; end: 1091c8707; -[SCLensStandardMediaPickerFeature setSelected:] */

void FUN_1091c8448(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  if ((param_3 != 0) && (*(char *)(param_1 + 0x50) == '\x01')) {
    puVar1 = PTR__OBJC_CLASS___PHPickerConfiguration_1126bd878;
    _objc_alloc(PTR__OBJC_CLASS___PHPickerConfiguration_1126bd878);
    puVar2 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x00010c22be00(PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c035c80(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    func_0x00010c1fb9a0(puVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(ulong *)(param_1 + 0x18);
    if (((uint)uVar7 >> 1 & 1) != 0) {
      puVar3 = PTR__OBJC_CLASS___PHPickerFilter_1126bd880;
      func_0x00010c29bee0(PTR__OBJC_CLASS___PHPickerFilter_1126bd880);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2,param_2,puVar3);
      _objc_release(puVar3);
      uVar7 = *(ulong *)(param_1 + 0x18);
    }
    if ((uVar7 & 1) != 0) {
      puVar3 = PTR__OBJC_CLASS___PHPickerFilter_1126bd880;
      func_0x00010bfe9960(PTR__OBJC_CLASS___PHPickerFilter_1126bd880);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2,param_2,puVar3);
      _objc_release(puVar3);
    }
    puVar4 = puVar2;
    func_0x00010bf529e0();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    if (puVar4 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___PHPickerFilter_1126bd880;
      func_0x00010bfe9960(PTR__OBJC_CLASS___PHPickerFilter_1126bd880);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0a120(puVar3,param_2,puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar4);
      puVar2 = puVar3;
    }
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                        *(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar3;
    _objc_release(uVar8);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar3;
    _objc_release(uVar8);
    lVar5 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c1129a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    *(long *)(param_1 + 0x38) = lVar6;
    _objc_release(uVar8);
    _objc_release(lVar5);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1091c8708;
    puStack_60 = &UNK_110adfda8;
    lStack_58 = param_1;
    func_0x00010bf97e80(*(undefined8 *)(param_1 + 0x38),param_2,&puStack_78);
    func_0x00010c1e0b20(puVar1,param_2,*(undefined8 *)(param_1 + 0x28));
    puVar3 = PTR__OBJC_CLASS___PHPickerFilter_1126bd880;
    func_0x00010bf049c0(PTR__OBJC_CLASS___PHPickerFilter_1126bd880,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bd60(puVar1,param_2,puVar3);
    _objc_release(puVar3);
    func_0x00010c1dfe20(puVar1,param_2,1);
    puVar3 = PTR__OBJC_CLASS___PHPickerViewController_1126bd888;
    _objc_alloc(PTR__OBJC_CLASS___PHPickerViewController_1126bd888);
    func_0x00010c001640();
    func_0x00010c18b5e0();
    func_0x00010bf0c980(*(undefined8 *)(param_1 + 8),param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1091c8708; end: 1091c8853;  */

void FUN_1091c8708(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = param_2;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar3 = *plStack_120;
    do {
      lVar4 = 0;
      do {
        if (*plStack_120 != lVar3) {
          _objc_enumerationMutation(param_2);
        }
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30));
        _objc_release(puVar2);
        func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      lVar1 = param_2;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  lVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_1091c8854;
  uStack_150 = param_3;
  lStack_148 = param_2;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010be030a0();
  puStack_158 = PTR_PTR_112700c78;
  lStack_160 = lVar1;
  _objc_msgSendSuper2(&lStack_160,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1091c8854; end: 1091c8897; -[SCLensStandardMediaPickerFeature dealloc] */

void FUN_1091c8854(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010be030a0();
  puStack_28 = PTR_PTR_112700c78;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1091c8898; end: 1091c889f; -[SCLensStandardMediaPickerFeature selected] */

undefined8 FUN_1091c8898(void)

{
  return 0;
}



/* Entry: 1091c88a0; end: 1091c88a7; -[SCLensStandardMediaPickerFeature active] */

undefined8 FUN_1091c88a0(void)

{
  return 0;
}



/* Entry: 1091c88a8; end: 1091c88af; -[SCLensStandardMediaPickerFeature selectable] */

undefined8 FUN_1091c88a8(void)

{
  return 0;
}



/* Entry: 1091c88b0; end: 1091c88c3; -[SCLensStandardMediaPickerFeature configureFeatureCell:] */

void FUN_1091c88b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c160fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_setAccessibilityIdentifier__112635e10,
             &PTR____CFConstantStringClassReference_110f30fb8);
  return;
}



/* Entry: 1091c88c4; end: 1091c88d3; -[SCLensStandardMediaPickerFeature _thumbnailSize] */

void FUN_1091c88c4(void)

{
  return;
}



/* Entry: 1091c88d4; end: 1091c8957; -[SCLensStandardMediaPickerFeature _dismissPicker] */

void FUN_1091c88d4(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1091c8958;
  puStack_30 = &UNK_110842e18;
  uStack_28 = uVar1;
  _objc_retain(uVar1);
  func_0x000107c27d8c(PTR___dispatch_main_q_11034be20,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(uVar1);
  return;
}



/* Entry: 1091c8958; end: 1091c8963;  */

void FUN_1091c8958(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 1091c8964; end: 1091c8ca7; -[SCLensStandardMediaPickerFeature _handleVideoAssetWithURL:resultHandler:resultHandlerId:assetIdentifier:isInPlace:error:] */

void FUN_1091c8964(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7,long param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_8);
  puVar3 = PTR_PTR_1126ddbc8;
  puVar2 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  if (param_8 != 0) {
    _objc_retain(param_6);
    _objc_retain(param_4);
    _objc_alloc(puVar3);
    puVar2 = PTR_PTR_1126ae558;
    func_0x00010bfe9c80(PTR_PTR_1126ae558,param_2,param_8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ae558;
    func_0x00010bfe9c80(PTR_PTR_1126ae558,param_2,param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c026720(0,puVar3,param_2,0,param_6,1,puVar2,0,puVar4,0,param_5);
    _objc_release(param_6);
    _objc_release(puVar4);
    _objc_release(puVar2);
    func_0x00010bfd2540(param_4,param_2,puVar3);
    _objc_release(param_4);
    puVar2 = puVar3;
    goto LAB_1091c8c74;
  }
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_alloc();
  func_0x00010c057ae0();
  puVar3 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar4 = PTR_PTR_1126ddbc8;
  _objc_alloc(PTR_PTR_1126ddbc8);
  puVar5 = puVar3;
  func_0x00010bfbc3e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  if (param_7 == 0) {
    puVar8 = (undefined *)0x0;
    uVar7 = param_3;
    if (puVar2 == (undefined *)0x0) goto LAB_1091c8b20;
LAB_1091c8b08:
    func_0x00010bf8b160(&uStack_78,puVar2);
  }
  else {
    puVar8 = PTR_PTR_1126ae558;
    func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 0;
    if (puVar2 != (undefined *)0x0) goto LAB_1091c8b08;
LAB_1091c8b20:
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
  }
  _CMTimeGetSeconds(&uStack_78);
  func_0x00010c026720(puVar4,param_2,0,param_6,1,puVar5,0,puVar8,uVar7,param_5);
  _objc_release(param_6);
  if (param_7 != 0) {
    _objc_release(puVar8);
  }
  _objc_release(puVar5);
  func_0x00010bfd2540(param_4,param_2,puVar4);
  _objc_release(param_4);
  puVar5 = PTR__OBJC_CLASS___AVAssetImageGenerator_1126ba170;
  _objc_alloc(PTR__OBJC_CLASS___AVAssetImageGenerator_1126ba170);
  func_0x00010bff41a0();
  func_0x00010c169b80();
  func_0x00010becbd60(param_1);
  func_0x00010c1c3cc0(puVar5);
  _CMTimeMakeWithSeconds(&uStack_78,0,600);
  lStack_80 = 0;
  uStack_98 = uStack_70;
  uStack_a0 = uStack_78;
  uStack_90 = uStack_68;
  puVar8 = puVar5;
  func_0x00010bf51e60(puVar5,param_2,&uStack_a0,0,&lStack_80);
  lVar1 = lStack_80;
  _objc_retain(lStack_80);
  if (lVar1 == 0) {
    puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
    _objc_alloc(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x00010bffa220();
    func_0x00010bf43d60(puVar3,param_2,puVar6);
    _CGImageRelease(puVar8);
    _objc_release(puVar6);
  }
  else {
    func_0x00010bf43ca0(puVar3,param_2,lVar1);
  }
  _objc_release(lVar1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
LAB_1091c8c74:
  _objc_release(puVar2);
  _objc_release(param_8);
  _objc_release(param_3);
  return;
}



/* Entry: 1091c8ca8; end: 1091c8e53; -[SCLensStandardMediaPickerFeature _handleVideoResult:handler:handlerId:assetIdentifier:] */

void FUN_1091c8ca8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0849c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdb280();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0849c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if ((int)uVar2 == 0) {
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    uStack_c0 = 0x1091c8e70;
    puStack_b8 = &UNK_110adfe08;
    uStack_b0 = param_1;
    uStack_a8 = param_4;
    uStack_a0 = param_6;
    uStack_98 = param_5;
    _objc_retain(param_6);
    _objc_retain(param_4);
    func_0x00010c09b500(uVar1,param_2,&PTR____CFConstantStringClassReference_110e6b158,&puStack_d0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uStack_a0);
    uVar1 = uStack_a8;
  }
  else {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1091c8e54;
    puStack_78 = &UNK_110adfdd8;
    uStack_70 = param_1;
    uStack_68 = param_4;
    uStack_60 = param_6;
    uStack_58 = param_5;
    _objc_retain(param_6);
    _objc_retain(param_4);
    func_0x00010c09b760(uVar1,param_2,&PTR____CFConstantStringClassReference_110e6b158,&puStack_90);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uStack_60);
    uVar1 = uStack_68;
  }
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 1091c8e54; end: 1091c8e8b;  */

void FUN_1091c8e54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleVideoAssetWithURL_resultH_11256a5b0,
             param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x30),param_3,param_4);
  return;
}



/* Entry: 1091c8e8c; end: 1091c9057; -[SCLensStandardMediaPickerFeature _handleImageResult:handler:handlerId:assetIdentifier:] */

void FUN_1091c8e8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new();
  puVar2 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar3 = param_3;
  func_0x00010c0849c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1091c9058;
  puStack_70 = &UNK_110adfe38;
  puStack_68 = puVar2;
  puStack_60 = puVar1;
  uStack_58 = param_1;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  func_0x00010c09bd40(uVar3,param_2,puVar4,&puStack_88);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126ddbc8;
  _objc_alloc(PTR_PTR_1126ddbc8);
  puVar5 = puVar2;
  func_0x00010bfbc3e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c026720(0,puVar4,param_2,0,param_6,0,puVar5,puVar6,0,0,param_5);
  _objc_release(param_6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010bfd2540(param_4,param_2,puVar4);
  _objc_release(param_4);
  _objc_release(puVar4);
  _objc_release(puStack_60);
  _objc_release(puStack_68);
  _objc_release(puVar1);
  _objc_release(puVar2);
  return;
}



/* Entry: 1091c9058; end: 1091c91bf;  */

void FUN_1091c9058(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined1 auStack_1e0 [8];
  undefined1 auStack_1d8 [8];
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 **ppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_d0;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
  puVar10 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  puVar1 = param_2;
  if (((ulong)puVar10 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  if (puVar1 == (undefined *)0x0) {
    param_1 = *(long *)(param_1 + 0x30);
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uStack_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_50 = &PTR____CFConstantStringClassReference_110f2b958;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar10;
    func_0x00010bf43ca0(uVar8);
    _objc_release(puVar10);
    _objc_release(puVar2);
    _objc_release(param_1);
  }
  else {
    func_0x00010bf43d60(uVar8);
    puVar7 = param_2;
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_1091c91c0;
  lStack_d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  lStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  plStack_180 = (long *)0x0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  puVar1 = puVar7;
  func_0x00010bf52a60();
  if (puVar1 != (undefined *)0x0) {
    lVar9 = *plStack_180;
    do {
      puVar10 = (undefined *)0x0;
      do {
        if (*plStack_180 != lVar9) {
          _objc_enumerationMutation(puVar7);
        }
        lVar3 = *(long *)(lStack_188 + (long)puVar10 * 8);
        func_0x00010c067fc0();
        lVar4 = *(long *)(param_2 + 0x10);
        func_0x00010bf529e0();
        if (lVar3 < lVar4) {
          param_1 = *(long *)(param_2 + 0x10);
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR_PTR_1126ddbc8;
          _objc_alloc(PTR_PTR_1126ddbc8);
          puVar5 = PTR_PTR_1126ae560;
          _objc_opt_new(PTR_PTR_1126ae560);
          puVar6 = puVar5;
          func_0x00010bfbc3e0();
          _objc_retainAutoreleasedReturnValue();
          uStack_1a0 = 0;
          lStack_198 = lVar3;
          func_0x00010c026720(0,puVar2);
          _objc_release(puVar6);
          _objc_release(puVar5);
          func_0x00010bfd2540(param_1);
          _objc_release(puVar2);
          _objc_release(param_1);
        }
        puVar10 = puVar10 + 1;
      } while (puVar1 != puVar10);
      puVar1 = puVar7;
      func_0x00010bf52a60();
      uVar8 = 0;
    } while (puVar1 != (undefined *)0x0);
  }
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d0) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1a8 = FUN_1091c9378;
  lStack_1d0 = param_1;
  uStack_1c8 = uVar8;
  puStack_1c0 = param_2;
  puStack_1b8 = puVar7;
  ppuStack_1b0 = &puStack_70;
  _objc_initWeak(auStack_1d8,puVar1);
  uVar8 = *(undefined8 *)(puVar1 + 0x40);
  _objc_copyWeak(auStack_1e0,auStack_1d8);
  func_0x00010c25ff60(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar8);
  _objc_destroyWeak(auStack_1e0);
  _objc_destroyWeak(auStack_1d8);
  return;
}



/* Entry: 1091c91c0; end: 1091c9377; -[SCLensStandardMediaPickerFeature _resetUnusedResultHandlerIndicies:] */

void FUN_1091c91c0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar8;
  long lVar9;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        lVar2 = *(long *)(lStack_128 + lVar9 * 8);
        func_0x00010c067fc0();
        lVar3 = *(long *)(param_1 + 0x10);
        func_0x00010bf529e0();
        if (lVar2 < lVar3) {
          unaff_x22 = *(undefined8 *)(param_1 + 0x10);
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR_PTR_1126ddbc8;
          _objc_alloc(PTR_PTR_1126ddbc8);
          puVar5 = PTR_PTR_1126ae560;
          _objc_opt_new(PTR_PTR_1126ae560);
          puVar6 = puVar5;
          func_0x00010bfbc3e0();
          _objc_retainAutoreleasedReturnValue();
          uStack_140 = 0;
          lStack_138 = lVar2;
          func_0x00010c026720(0,puVar4);
          _objc_release(puVar6);
          _objc_release(puVar5);
          func_0x00010bfd2540(unaff_x22);
          _objc_release(puVar4);
          _objc_release(unaff_x22);
        }
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      lVar1 = param_3;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (lVar1 != 0);
  }
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_1091c9378;
  uStack_170 = unaff_x22;
  uStack_168 = unaff_x21;
  lStack_160 = param_1;
  lStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_initWeak(auStack_178,lVar1);
  uVar7 = *(undefined8 *)(lVar1 + 0x40);
  _objc_copyWeak(auStack_180,auStack_178);
  func_0x00010c25ff60(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar7);
  _objc_destroyWeak(auStack_180);
  _objc_destroyWeak(auStack_178);
  return;
}



/* Entry: 1091c9378; end: 1091c9443; -[SCLensStandardMediaPickerFeature _setupSubscription] */

void FUN_1091c9378(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1091c9444; end: 1091c946f;  */

void FUN_1091c9444(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be030a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091c9470; end: 1091c989b; -[SCLensStandardMediaPickerFeature picker:didFinishPicking:] */

void FUN_1091c9470(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = param_4;
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  puVar2 = *(undefined1 **)(param_1 + 0x28);
  func_0x00010bf51e00();
  puVar14 = puVar2;
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar15 = 0;
    do {
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar5;
      func_0x00010befa120(puVar4);
      _objc_release(puVar5);
      uVar15 = uVar15 + 1;
    } while (uVar15 < *(ulong *)(param_1 + 0x20));
  }
  puVar2 = param_4;
  func_0x00010bf529e0();
  if (puVar2 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)0x0;
    do {
      puVar6 = param_4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bf0b2c0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = *(long *)(param_1 + 0x30);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar8 == 0) {
        puVar14 = puVar6;
        puVar13 = puVar7;
        func_0x00010c1d0640(puVar1);
      }
      else {
        lVar16 = *(long *)(param_1 + 0x38);
        func_0x00010c067fc0(lVar8);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar16;
        puVar14 = puVar7;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar9 != 0) {
          lVar10 = lVar9;
          func_0x00010c1554e0();
          if ((lVar10 != 1) && (lVar10 = lVar9, func_0x00010c1554e0(), lVar10 == 0)) {
            func_0x00010c0840e0(lVar9);
            puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12d360(puVar4);
            _objc_release(puVar5);
          }
          puVar14 = puVar7;
          func_0x00010c12d360(puVar3);
        }
        _objc_release(lVar9);
        _objc_release(lVar16);
      }
      _objc_release(lVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      puVar2 = puVar2 + 1;
      puVar6 = param_4;
      func_0x00010bf529e0();
    } while (puVar2 < puVar6);
  }
  puVar5 = puVar1;
  func_0x00010bf529e0();
  if ((puVar5 == (undefined *)0x0) &&
     (puVar5 = puVar3, func_0x00010bf529e0(), puVar5 == (undefined *)0x0)) {
    func_0x00010be030a0(param_1);
  }
  else {
    _objc_retain(puVar3);
    puVar13 = auStack_f0;
    puVar5 = puVar3;
    func_0x00010bf52a60();
    lVar8 = lRam0000000000000000;
    while (puVar5 != (undefined *)0x0) {
      puVar18 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar8) {
          _objc_enumerationMutation(puVar3);
        }
        uVar11 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010c0e00e0(uVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar17 = *(undefined8 *)(param_1 + 0x38);
        func_0x00010c067fc0();
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar17;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = param_1;
        func_0x00010bf6b020();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c5dc0();
        _objc_release(lVar9);
        _objc_release(uVar12);
        _objc_release(uVar17);
        _objc_release(uVar11);
        puVar18 = puVar18 + 1;
      } while (puVar5 != puVar18);
      puVar13 = auStack_f0;
      puVar5 = puVar3;
      func_0x00010bf52a60();
    }
    _objc_release(puVar3);
    _objc_retain(puVar4);
    func_0x00010bf97ce0(puVar1);
    puVar14 = puVar4;
    func_0x00010be942e0(param_1);
    func_0x00010be030a0(param_1);
    _objc_release(puVar4);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  _objc_retain(puVar14);
  lVar8 = *(long *)(param_4 + 0x20);
  func_0x00010bf529e0();
  if (lVar8 == 0) {
    *puVar13 = 1;
  }
  else {
    uVar12 = *(undefined8 *)(param_4 + 0x20);
    func_0x00010c0dfd40(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    _objc_release(uVar12);
    uVar12 = *(undefined8 *)(*(long *)(param_4 + 0x28) + 0x10);
    func_0x00010c0dfd40(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3c0(*(undefined8 *)(param_4 + 0x20));
    puVar13 = puVar14;
    func_0x00010c0849c0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar13;
    func_0x00010bfdb280();
    _objc_release(puVar13);
    if ((int)puVar2 == 0) {
      func_0x00010be2aae0(*(undefined8 *)(param_4 + 0x28));
    }
    else {
      func_0x00010be33180();
    }
    _objc_release(uVar12);
  }
  _objc_release(puVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091c989c; end: 1091c99bb;  */

void FUN_1091c989c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    *param_4 = 1;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0dfd40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
    func_0x00010c0dfd40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3c0(*(undefined8 *)(param_1 + 0x20));
    uVar2 = param_3;
    func_0x00010c0849c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfdb280();
    _objc_release(uVar2);
    if ((int)uVar4 == 0) {
      func_0x00010be2aae0(*(undefined8 *)(param_1 + 0x28));
    }
    else {
      func_0x00010be33180();
    }
    _objc_release(uVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091c99bc; end: 1091c99c3; -[SCLensStandardMediaPickerFeature enabled] */

undefined1 FUN_1091c99bc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x50);
}



/* Entry: 1091c99c4; end: 1091c99cb; -[SCLensStandardMediaPickerFeature setEnabled:] */

void FUN_1091c99c4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 1091c99cc; end: 1091c99e3; -[SCLensStandardMediaPickerFeature delegate] */

void FUN_1091c99cc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091c99e4; end: 1091c99ef; -[SCLensStandardMediaPickerFeature setDelegate:] */

void FUN_1091c99e4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 1091c99f0; end: 1091c9a63; -[SCLensStandardMediaPickerFeature .cxx_destruct] */

void FUN_1091c99f0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x58);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091c9a64; end: 1091c9dd3; -[SCLensStandardMediaPickerHeader initWithFrame:] */

undefined8 * FUN_1091c9a64(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined **ppuVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined *puVar39;
  undefined *puVar40;
  undefined *puVar41;
  undefined8 uVar42;
  undefined *puVar43;
  undefined8 uVar44;
  undefined1 in_w4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar45;
  undefined8 uVar46;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_230;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_112700c80;
  puVar1 = &uStack_98;
  uStack_98 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4010000000000000);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010bdec5e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar4);
    func_0x00010c219b60(puVar3);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar4 = puVar3;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    puStack_88 = puVar7;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar3;
    puStack_80 = puVar11;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar3;
    puStack_78 = puVar15;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar3;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar18;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
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
    func_0x00010c1af000(puVar1);
    _objc_release(puVar3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
  lVar45 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar2;
  func_0x00010c14d100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar19);
  _objc_release(puVar2);
  puVar19 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c01bf60();
  func_0x00010c19f0e0(0,0,0x403e000000000000,0x403e000000000000);
  func_0x00010c182220(puVar19);
  func_0x00010c219b60(puVar19);
  puVar21 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  ppuVar22 = &PTR____CFConstantStringClassReference_110e39238;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e39238,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar21);
  _objc_release(ppuVar22);
  func_0x00010c21ad00(puVar21);
  func_0x00010c213040(puVar21);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar21);
  _objc_release(puVar2);
  func_0x00010c1cfce0(puVar21);
  func_0x00010c165e20(puVar21);
  func_0x00010c219b60(puVar21);
  func_0x00010c1c3ae0(0x4028000000000000,puVar21);
  func_0x00010c23d620(puVar21);
  func_0x00010befbb60(puVar1);
  func_0x00010befbb60(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar23 = puVar19;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar23;
  func_0x00010bf49580(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar19;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar19;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar25;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar19;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar28;
  func_0x00010bf493c0(0x4018000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar30 = puVar19;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar31 = puVar30;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar32 = puVar21;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar33 = puVar19;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar46 = 0x3ff0000000000000;
  puVar34 = puVar32;
  func_0x00010bf493c0();
  _objc_retainAutoreleasedReturnValue();
  puVar35 = puVar21;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar36 = puVar35;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar37 = puVar21;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar38 = puVar37;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar39 = puVar21;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar40 = puVar39;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar44 = 8;
  puVar41 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar43 = puVar41;
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar41);
  _objc_release(puVar40);
  _objc_release(puVar7);
  _objc_release(puVar39);
  _objc_release(puVar38);
  _objc_release(puVar6);
  _objc_release(puVar37);
  _objc_release(puVar36);
  _objc_release(puVar5);
  _objc_release(puVar35);
  _objc_release(puVar34);
  _objc_release(puVar33);
  _objc_release(puVar32);
  _objc_release(puVar31);
  _objc_release(puVar4);
  _objc_release(puVar30);
  _objc_release(puVar29);
  _objc_release(puVar3);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar21);
  _objc_release(puVar19);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar45) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  ppuVar22 = &puStack_2b0;
  _objc_retain(puVar43);
  _objc_retain(uVar44);
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  _objc_retain(in_x7);
  _objc_retain(uStack_230);
  puStack_2a8 = PTR_PTR_112700c88;
  puStack_2b0 = puVar20;
  _objc_msgSendSuper2(&puStack_2b0,PTR_s_init_1125d9248);
  if (ppuVar22 != (undefined **)0x0) {
    _objc_retain(puVar43);
    uVar42 = ppuVar22[2];
    ppuVar22[2] = puVar43;
    _objc_release(uVar42);
    _objc_retain(uVar44);
    uVar42 = ppuVar22[3];
    ppuVar22[3] = (undefined *)uVar44;
    _objc_release(uVar42);
    *(undefined1 *)(ppuVar22 + 1) = in_w4;
    _objc_retain(in_x5);
    uVar42 = ppuVar22[4];
    ppuVar22[4] = (undefined *)in_x5;
    _objc_release(uVar42);
    _objc_retain(in_x6);
    uVar42 = ppuVar22[5];
    ppuVar22[5] = (undefined *)in_x6;
    _objc_release(uVar42);
    ppuVar22[8] = (undefined *)uVar46;
    _objc_retain(uStack_230);
    uVar46 = ppuVar22[7];
    ppuVar22[7] = (undefined *)uStack_230;
    _objc_release(uVar46);
    _objc_retain(in_x7);
    uVar46 = ppuVar22[6];
    ppuVar22[6] = (undefined *)in_x7;
    _objc_release(uVar46);
    ppuVar22[9] = (undefined *)puVar1;
  }
  _objc_release(uStack_230);
  _objc_release(in_x7);
  _objc_release(in_x6);
  _objc_release(in_x5);
  _objc_release(uVar44);
  _objc_release(puVar43);
  return ppuVar22;
}



/* Entry: 1091c9dd4; end: 1091ca31f; -[SCLensStandardMediaPickerHeader _createContainerView] */

undefined1 * FUN_1091c9dd4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
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
  undefined8 uVar31;
  undefined *puVar32;
  undefined8 uVar33;
  undefined1 in_w4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar34;
  undefined8 uVar35;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_150;
  
  lVar34 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c14d100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c01bf60();
  func_0x00010c19f0e0(0,0,0x403e000000000000,0x403e000000000000);
  func_0x00010c182220(puVar3);
  func_0x00010c219b60(puVar3);
  puVar5 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  ppuVar6 = &PTR____CFConstantStringClassReference_110e39238;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e39238,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar5);
  _objc_release(ppuVar6);
  func_0x00010c21ad00(puVar5);
  func_0x00010c213040(puVar5);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar5);
  _objc_release(puVar2);
  func_0x00010c1cfce0(puVar5);
  func_0x00010c165e20(puVar5);
  func_0x00010c219b60(puVar5);
  func_0x00010c1c3ae0(0x4028000000000000,puVar5);
  func_0x00010c23d620(puVar5);
  func_0x00010befbb60(puVar1);
  func_0x00010befbb60(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar7 = puVar3;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf49580(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar3;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar3;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar12;
  func_0x00010bf493c0(0x4018000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = 0x3ff0000000000000;
  puVar20 = puVar18;
  func_0x00010bf493c0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar21;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar24;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar27;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = 8;
  puVar30 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar32 = puVar30;
  func_0x00010beef8c0(puVar2);
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
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar34) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  ppuVar6 = &puStack_1d0;
  _objc_retain(puVar32);
  _objc_retain(uVar33);
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  _objc_retain(in_x7);
  _objc_retain(uStack_150);
  puStack_1c8 = PTR_PTR_112700c88;
  puStack_1d0 = puVar4;
  _objc_msgSendSuper2(&puStack_1d0,PTR_s_init_1125d9248);
  if (ppuVar6 != (undefined **)0x0) {
    _objc_retain(puVar32);
    uVar31 = *(undefined8 *)((long)ppuVar6 + 0x10);
    *(undefined **)((long)ppuVar6 + 0x10) = puVar32;
    _objc_release(uVar31);
    _objc_retain(uVar33);
    uVar31 = *(undefined8 *)((long)ppuVar6 + 0x18);
    *(undefined8 *)((long)ppuVar6 + 0x18) = uVar33;
    _objc_release(uVar31);
    *(undefined1 *)((long)ppuVar6 + 8) = in_w4;
    _objc_retain(in_x5);
    uVar31 = *(undefined8 *)((long)ppuVar6 + 0x20);
    *(undefined8 *)((long)ppuVar6 + 0x20) = in_x5;
    _objc_release(uVar31);
    _objc_retain(in_x6);
    uVar31 = *(undefined8 *)((long)ppuVar6 + 0x28);
    *(undefined8 *)((long)ppuVar6 + 0x28) = in_x6;
    _objc_release(uVar31);
    *(undefined8 *)((long)ppuVar6 + 0x40) = uVar35;
    _objc_retain(uStack_150);
    uVar35 = *(undefined8 *)((long)ppuVar6 + 0x38);
    *(undefined8 *)((long)ppuVar6 + 0x38) = uStack_150;
    _objc_release(uVar35);
    _objc_retain(in_x7);
    uVar35 = *(undefined8 *)((long)ppuVar6 + 0x30);
    *(undefined8 *)((long)ppuVar6 + 0x30) = in_x7;
    _objc_release(uVar35);
    *(undefined **)((long)ppuVar6 + 0x48) = puVar1;
  }
  _objc_release(uStack_150);
  _objc_release(in_x7);
  _objc_release(in_x6);
  _objc_release(in_x5);
  _objc_release(uVar33);
  _objc_release(puVar32);
  return (undefined1 *)ppuVar6;
}



/* Entry: 1091ca320; end: 1091ca49b; -[SCLensStandardMediaPickerResult initWithLoadingId:assetIdentifier:isVideo:iconImageFuture:imageFuture:videoURLFuture:tempVideoURL:videoDuration:resultHandlerId:] */

undefined1 *
FUN_1091ca320(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_78 = PTR_PTR_112700c88;
  uStack_80 = param_2;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x40) = param_1;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1091ca49c; end: 1091ca4a3; -[SCLensStandardMediaPickerResult loadingId] */

undefined8 FUN_1091ca49c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1091ca4a4; end: 1091ca4ab; -[SCLensStandardMediaPickerResult assetIdentifier] */

undefined8 FUN_1091ca4a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1091ca4ac; end: 1091ca4b3; -[SCLensStandardMediaPickerResult isVideo] */

undefined1 FUN_1091ca4ac(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1091ca4b4; end: 1091ca4bb; -[SCLensStandardMediaPickerResult iconImageFuture] */

undefined8 FUN_1091ca4b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1091ca4bc; end: 1091ca4c3; -[SCLensStandardMediaPickerResult imageFuture] */

undefined8 FUN_1091ca4bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1091ca4c4; end: 1091ca4cb; -[SCLensStandardMediaPickerResult videoURLFuture] */

undefined8 FUN_1091ca4c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1091ca4cc; end: 1091ca4d3; -[SCLensStandardMediaPickerResult tempVideoURL] */

undefined8 FUN_1091ca4cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1091ca4d4; end: 1091ca4db; -[SCLensStandardMediaPickerResult videoDuration] */

undefined8 FUN_1091ca4d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1091ca4dc; end: 1091ca4e3; -[SCLensStandardMediaPickerResult resultHandlerId] */

undefined8 FUN_1091ca4dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1091ca4e4; end: 1091ca543; -[SCLensStandardMediaPickerResult .cxx_destruct] */

void FUN_1091ca4e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1091ca544; end: 1091ca5eb; -[SCLensStandardMediaPickerResultFeature initWithActiveObservableSubject:selectSubject:] */

undefined1 *
FUN_1091ca544(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112700c90;
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
    *(undefined1 *)((long)puVar1 + 0x28) = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


