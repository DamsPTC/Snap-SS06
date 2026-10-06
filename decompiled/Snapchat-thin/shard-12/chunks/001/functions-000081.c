/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108d1c6b4; end: 108d1c6bf; -[SCStickerPickerCategoryLayout toggleToggleableSupplementaryViewOfKind:indexPath:shouldBeOpen:] */

void FUN_108d1c6b4(undefined8 param_1)

{
  int in_w4;
  
  if (in_w4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010beccdb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__toggleOnToggleableSupplementary_112590d10)
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010beccd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__toggleOffToggleableSupplementar_112590d08);
  return;
}



/* Entry: 108d1c6c0; end: 108d1c9fb; -[SCStickerPickerCategoryLayout _switchToggleableSupplementaryViewFromKind:toKind:fromIndexPath:toIndexPath:] */

/* WARNING: Possible PIC construction at 0x000108d1c83c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108d1c840) */
/* WARNING: Removing unreachable block (ram,0x000108d1c86c) */
/* WARNING: Removing unreachable block (ram,0x000108d1c898) */
/* WARNING: Removing unreachable block (ram,0x000108d1c8f0) */
/* WARNING: Removing unreachable block (ram,0x000108d1c8cc) */
/* WARNING: Removing unreachable block (ram,0x000108d1c914) */
/* WARNING: Removing unreachable block (ram,0x000108d1c9f8) */
/* WARNING: Removing unreachable block (ram,0x000108d1c9dc) */

void FUN_108d1c6c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c216ac0(param_1);
  lVar1 = param_1;
  func_0x00010c272e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216a80(param_1);
    _objc_release(puVar2);
  }
  lVar1 = param_1;
  func_0x00010c272e20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar3 == 0) {
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf09f60(lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  lVar1 = param_1;
  func_0x00010c272e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf0e800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51e00();
                    /* WARNING: Could not recover jumptable at 0x00010c16b8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setAttributesForToggleableViewsT_112638850,lVar1);
  return;
}



/* Entry: 108d1c9fc; end: 108d1ca2b;  */

void FUN_108d1c9fc(long param_1,undefined8 param_2)

{
  func_0x00010c216ac0(*(undefined8 *)(param_1 + 0x20),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c16b8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setAttributesForToggleableViewsT_112638850,0);
  return;
}



/* Entry: 108d1ca2c; end: 108d1cceb; -[SCStickerPickerCategoryLayout _toggleOnToggleableSupplementaryViewOfKind:indexPath:] */

/* WARNING: Possible PIC construction at 0x000108d1cb54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108d1cb58) */
/* WARNING: Removing unreachable block (ram,0x000108d1cb74) */
/* WARNING: Removing unreachable block (ram,0x000108d1cba0) */
/* WARNING: Removing unreachable block (ram,0x000108d1cbf8) */
/* WARNING: Removing unreachable block (ram,0x000108d1cbd4) */
/* WARNING: Removing unreachable block (ram,0x000108d1cc1c) */

void FUN_108d1ca2c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bf0e800();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    uVar5 = 2;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf0e800(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf0e800(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c1345c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010bec9600(param_1);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(param_4);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
      return;
    }
    ___stack_chk_fail();
    param_1 = *(long *)(param_3 + 0x20);
    uVar5 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c216ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setToggleableViewChange__1126634d8,uVar5);
  return;
}



/* Entry: 108d1ccec; end: 108d1ccf7;  */

void FUN_108d1ccec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c216ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setToggleableViewChange__1126634d8,0);
  return;
}



/* Entry: 108d1ccf8; end: 108d1cf0f; -[SCStickerPickerCategoryLayout _toggleOffToggleableSupplementaryViewOfKind:indexPath:] */

/* WARNING: Possible PIC construction at 0x000108d1ce58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108d1ce5c) */
/* WARNING: Removing unreachable block (ram,0x000108d1cf0c) */
/* WARNING: Removing unreachable block (ram,0x000108d1cef4) */

void FUN_108d1ccf8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c216ac0(param_1);
  lVar1 = param_1;
  func_0x00010c272e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216a80(param_1);
    _objc_release(puVar2);
  }
  lVar1 = param_1;
  func_0x00010c272e20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar3 == 0) {
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf09f60(lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  lVar1 = param_1;
  func_0x00010c272e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf0e800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51e00();
                    /* WARNING: Could not recover jumptable at 0x00010c16b8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setAttributesForToggleableViewsT_112638850,lVar1);
  return;
}



/* Entry: 108d1cf10; end: 108d1cf3f;  */

void FUN_108d1cf10(long param_1,undefined8 param_2)

{
  func_0x00010c216ac0(*(undefined8 *)(param_1 + 0x20),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c16b8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setAttributesForToggleableViewsT_112638850,0);
  return;
}



/* Entry: 108d1cf40; end: 108d1cf4f; -[SCStickerPickerCategoryLayout minimumLineSpacing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d1cf40(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b21c);
}



/* Entry: 108d1cf50; end: 108d1cf5f; -[SCStickerPickerCategoryLayout setMinimumLineSpacing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1cf50(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11277b21c) = param_1;
  return;
}



/* Entry: 108d1cf60; end: 108d1cf7f; -[SCStickerPickerCategoryLayout delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1cf60(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277b224);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108d1cf80; end: 108d1cf93; -[SCStickerPickerCategoryLayout setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1cf80(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277b224,param_3);
  return;
}



/* Entry: 108d1cf94; end: 108d1cfa3; -[SCStickerPickerCategoryLayout attributesForDataItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d1cf94(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b228);
}



/* Entry: 108d1cfa4; end: 108d1cfe3; -[SCStickerPickerCategoryLayout setAttributesForDataItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1cfa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277b228;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d1cfe4; end: 108d1cff3; -[SCStickerPickerCategoryLayout attributesForExpandableGroups] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d1cfe4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b22c);
}



/* Entry: 108d1cff4; end: 108d1d033; -[SCStickerPickerCategoryLayout setAttributesForExpandableGroups:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1cff4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277b22c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d1d034; end: 108d1d043; -[SCStickerPickerCategoryLayout attributesForSectionHeaders] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d1d034(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b230);
}



/* Entry: 108d1d044; end: 108d1d083; -[SCStickerPickerCategoryLayout setAttributesForSectionHeaders:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1d044(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277b230;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d1d084; end: 108d1d093; -[SCStickerPickerCategoryLayout attributesForToggleableViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d1d084(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b234);
}



/* Entry: 108d1d094; end: 108d1d0d3; -[SCStickerPickerCategoryLayout setAttributesForToggleableViews:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1d094(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277b234;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d1d0d4; end: 108d1d0e3; -[SCStickerPickerCategoryLayout attributesForToggleableViewsToDelete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d1d0d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b238);
}



/* Entry: 108d1d0e4; end: 108d1d123; -[SCStickerPickerCategoryLayout setAttributesForToggleableViewsToDelete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1d0e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277b238;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d1d124; end: 108d1d133; -[SCStickerPickerCategoryLayout topYForExpandableGroups] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d1d124(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b23c);
}



/* Entry: 108d1d134; end: 108d1d173; -[SCStickerPickerCategoryLayout setTopYForExpandableGroups:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1d134(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277b23c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d1d174; end: 108d1d187; -[SCStickerPickerCategoryLayout collectionViewContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108d1d174(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11277b220);
}



/* Entry: 108d1d188; end: 108d1d19b; -[SCStickerPickerCategoryLayout setCollectionViewContentSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1d188(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11277b220;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
  return;
}



/* Entry: 108d1d19c; end: 108d1d1ab; -[SCStickerPickerCategoryLayout insertingIndexPaths] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d1d19c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b240);
}



/* Entry: 108d1d1ac; end: 108d1d1eb; -[SCStickerPickerCategoryLayout setInsertingIndexPaths:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1d1ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277b240;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d1d1ec; end: 108d1d1fb; -[SCStickerPickerCategoryLayout deletingIndexPaths] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d1d1ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b244);
}



/* Entry: 108d1d1fc; end: 108d1d23b; -[SCStickerPickerCategoryLayout setDeletingIndexPaths:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1d1fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277b244;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d1d23c; end: 108d1d24b; -[SCStickerPickerCategoryLayout expandableGroupIndexPaths] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d1d23c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b248);
}



/* Entry: 108d1d24c; end: 108d1d28b; -[SCStickerPickerCategoryLayout setExpandableGroupIndexPaths:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1d24c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277b248;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d1d28c; end: 108d1d29b; -[SCStickerPickerCategoryLayout toggleableSupplementaryViewsToInsert] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d1d28c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b24c);
}



/* Entry: 108d1d29c; end: 108d1d2db; -[SCStickerPickerCategoryLayout setToggleableSupplementaryViewsToInsert:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1d29c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277b24c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d1d2dc; end: 108d1d2eb; -[SCStickerPickerCategoryLayout toggleableSupplementaryViewsToDelete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d1d2dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b250);
}



/* Entry: 108d1d2ec; end: 108d1d32b; -[SCStickerPickerCategoryLayout setToggleableSupplementaryViewsToDelete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1d2ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277b250;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d1d32c; end: 108d1d33b; -[SCStickerPickerCategoryLayout preUpdateIndexPathsInExpandableGroups] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d1d32c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b254);
}



/* Entry: 108d1d33c; end: 108d1d37b; -[SCStickerPickerCategoryLayout setPreUpdateIndexPathsInExpandableGroups:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1d33c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277b254;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d1d37c; end: 108d1d38b; -[SCStickerPickerCategoryLayout preUpdateDataAttributes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d1d37c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b258);
}



/* Entry: 108d1d38c; end: 108d1d3cb; -[SCStickerPickerCategoryLayout setPreUpdateDataAttributes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1d38c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277b258;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d1d3cc; end: 108d1d3db; -[SCStickerPickerCategoryLayout preUpdateGroupAttributes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d1d3cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b25c);
}



/* Entry: 108d1d3dc; end: 108d1d41b; -[SCStickerPickerCategoryLayout setPreUpdateGroupAttributes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1d3dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277b25c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d1d41c; end: 108d1d42b; -[SCStickerPickerCategoryLayout postUpdatePathToOldPath] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d1d41c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b260);
}



/* Entry: 108d1d42c; end: 108d1d46b; -[SCStickerPickerCategoryLayout setPostUpdatePathToOldPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1d42c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277b260;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d1d46c; end: 108d1d47b; -[SCStickerPickerCategoryLayout oldPathToPostUpdatePath] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d1d46c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b264);
}



/* Entry: 108d1d47c; end: 108d1d4bb; -[SCStickerPickerCategoryLayout setOldPathToPostUpdatePath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1d47c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277b264;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d1d4bc; end: 108d1d4cb; -[SCStickerPickerCategoryLayout toggleableViewChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d1d4bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b218);
}



/* Entry: 108d1d4cc; end: 108d1d4db; -[SCStickerPickerCategoryLayout setToggleableViewChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1d4cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11277b218) = param_3;
  return;
}



/* Entry: 108d1d4dc; end: 108d1d607; -[SCStickerPickerCategoryLayout .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1d4dc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277b264,0);
  _objc_storeStrong(param_1 + _DAT_11277b260,0);
  _objc_storeStrong(param_1 + _DAT_11277b25c,0);
  _objc_storeStrong(param_1 + _DAT_11277b258,0);
  _objc_storeStrong(param_1 + _DAT_11277b254,0);
  _objc_storeStrong(param_1 + _DAT_11277b250,0);
  _objc_storeStrong(param_1 + _DAT_11277b24c,0);
  _objc_storeStrong(param_1 + _DAT_11277b248,0);
  _objc_storeStrong(param_1 + _DAT_11277b244,0);
  _objc_storeStrong(param_1 + _DAT_11277b240,0);
  _objc_storeStrong(param_1 + _DAT_11277b23c,0);
  _objc_storeStrong(param_1 + _DAT_11277b238,0);
  _objc_storeStrong(param_1 + _DAT_11277b234,0);
  _objc_storeStrong(param_1 + _DAT_11277b230,0);
  _objc_storeStrong(param_1 + _DAT_11277b22c,0);
  _objc_storeStrong(param_1 + _DAT_11277b228,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11277b224);
  return;
}



/* Entry: 108d1d608; end: 108d1d65b; -[SCStickerPickerCollectionView initWithFrame:collectionViewLayout:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1d608(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1126fe5d0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFrame_collectionViewLayo_1125e29e0);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277b268) = 1;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277b26c) = 0;
  }
  return;
}



/* Entry: 108d1d65c; end: 108d1d743; -[SCStickerPickerCollectionView gestureRecognizerShouldBegin:] */

undefined1 *
FUN_108d1d65c(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long *plVar2;
  long lStack_50;
  undefined *puStack_48;
  
  plVar2 = &lStack_50;
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c290880();
  if ((int)lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c0f36c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (param_5 == lVar1) {
      lVar1 = param_3;
      func_0x00010c0f36c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297a00();
      _objc_release(lVar1);
      if (ABS(param_1) <= ABS(param_2) * 1.5) {
        plVar2 = (long *)0x0;
        goto LAB_108d1d718;
      }
    }
  }
  puStack_48 = PTR_PTR_1126fe5d0;
  lStack_50 = param_3;
  _objc_msgSendSuper2(&lStack_50,PTR_s_gestureRecognizerShouldBegin__1125ce098,param_5);
LAB_108d1d718:
  _objc_release(param_5);
  return (undefined1 *)plVar2;
}



/* Entry: 108d1d744; end: 108d1d947; -[SCStickerPickerCollectionView gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8
FUN_108d1d744(double param_1,double param_2,int param_3,undefined8 param_4,undefined8 param_5,
             ulong param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_6);
  func_0x00010c290340();
  if (param_3 != 0) {
    uVar1 = param_6;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
    _objc_opt_class(PTR__OBJC_CLASS___UICollectionView_1126afd20);
    uVar3 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar2);
    if ((uVar3 & 1) == 0) {
      uVar6 = 0;
LAB_108d1d8b8:
      _objc_release(uVar1);
      goto LAB_108d1d8c0;
    }
    uVar3 = param_6;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126d4fc8;
    _objc_opt_class(PTR_PTR_1126d4fc8);
    uVar4 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar2);
    _objc_release(uVar3);
    _objc_release(uVar1);
    if ((uVar4 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
      _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
      uVar1 = param_6;
      _objc_opt_isKindOfClass(param_6,puVar2);
      if ((uVar1 & 1) != 0) {
        uVar1 = param_6;
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar1;
        func_0x00010c262ca0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c262ca0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_PTR_1126d4f30;
        _objc_opt_class(PTR_PTR_1126d4f30);
        uVar5 = uVar4;
        _objc_opt_isKindOfClass(uVar4,puVar2);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar1);
        if ((uVar5 & 1) == 0) {
          uVar1 = param_6;
          func_0x00010c29bf00();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR_PTR_1126dbc90;
          _objc_opt_class(PTR_PTR_1126dbc90);
          uVar3 = uVar1;
          _objc_opt_isKindOfClass(uVar1,puVar2);
          _objc_release(uVar1);
          if ((uVar3 & 1) == 0) {
            _objc_retain(param_6);
            func_0x00010c297a00(param_6);
            if ((param_1 == 0.0) && (param_2 == 0.0)) {
              uVar6 = 1;
              uVar1 = param_6;
            }
            else if (ABS(param_2) <= ABS(param_1)) {
              func_0x00010c195460(param_6);
              uVar6 = 1;
              func_0x00010c195460(param_6);
              uVar1 = param_6;
            }
            else {
              uVar6 = 0;
              uVar1 = param_6;
            }
            goto LAB_108d1d8b8;
          }
        }
      }
    }
  }
  uVar6 = 0;
LAB_108d1d8c0:
  _objc_release(param_6);
  return uVar6;
}



/* Entry: 108d1d948; end: 108d1d94f; -[SCStickerPickerCollectionView gestureRecognizer:shouldRequireFailureOfGestureRecognizer:] */

undefined8 FUN_108d1d948(void)

{
  return 0;
}



/* Entry: 108d1d950; end: 108d1d95f; -[SCStickerPickerCollectionView useLegacyNestedScrollGestureHandling] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108d1d950(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277b268);
}



/* Entry: 108d1d960; end: 108d1d96f; -[SCStickerPickerCollectionView setUseLegacyNestedScrollGestureHandling:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1d960(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277b268) = param_3;
  return;
}



/* Entry: 108d1d970; end: 108d1d97f; -[SCStickerPickerCollectionView useRevertedHorizontalPanBeginBehavior] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108d1d970(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277b26c);
}



/* Entry: 108d1d980; end: 108d1d98f; -[SCStickerPickerCollectionView setUseRevertedHorizontalPanBeginBehavior:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1d980(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277b26c) = param_3;
  return;
}



/* Entry: 108d1d990; end: 108d1db23; -[SCStickerPickerHorizontalScrollCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108d1d990(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126fe5d8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
    _objc_alloc_init(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
    func_0x00010c1f7ac0();
    puVar3 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
    _objc_alloc();
    puVar4 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c014040();
    lVar6 = (long)_DAT_11277b274;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar3;
    _objc_release(uVar5);
    _objc_release(puVar4);
    func_0x00010c189840(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar6));
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar3);
    func_0x00010c2025c0(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c167a00(*(undefined8 *)((long)puVar1 + lVar6));
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    _objc_opt_class(PTR_PTR_1126b0d10);
    func_0x00010c126000(uVar5);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    _objc_opt_class(PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
    func_0x00010c126000(uVar5);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108d1db24; end: 108d1dc07; -[SCStickerPickerHorizontalScrollCell setEmptyPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1db24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d960();
  _objc_release(lVar1);
  lVar3 = (long)_DAT_11277b278;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  lVar1 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_108d1dc08;
  puStack_40 = &UNK_1108471b0;
  lStack_38 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar3),param_2,&puStack_58);
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108d1dc08; end: 108d1dcdf;  */

void FUN_108d1dc08(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(lVar4,uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108d1dce0; end: 108d1dd9b; -[SCStickerPickerHorizontalScrollCell reloadItemsAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1dce0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = *(undefined8 *)(param_1 + _DAT_11277b274);
  puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed060();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 1;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c128de0(uVar5);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(puVar3);
  puVar2 = puVar3;
  func_0x00010bf51e00();
  uVar5 = *(undefined8 *)(puVar1 + _DAT_11277b27c);
  *(undefined **)(puVar1 + _DAT_11277b27c) = puVar2;
  _objc_release(uVar5);
  *(undefined8 *)(puVar1 + _DAT_11277b280) = uVar4;
  lVar7 = (long)_DAT_11277b284;
  _objc_retain(param_5);
  uVar4 = *(undefined8 *)(puVar1 + lVar7);
  *(undefined8 *)(puVar1 + lVar7) = param_5;
  _objc_release(uVar4);
  lVar7 = (long)_DAT_11277b288;
  _objc_retain(param_6);
  uVar4 = *(undefined8 *)(puVar1 + lVar7);
  *(undefined8 *)(puVar1 + lVar7) = param_6;
  _objc_release(uVar4);
  lVar7 = (long)_DAT_11277b28c;
  _objc_retain(param_7);
  uVar4 = *(undefined8 *)(puVar1 + lVar7);
  *(undefined8 *)(puVar1 + lVar7) = param_7;
  _objc_release(uVar4);
  puVar2 = puVar3;
  func_0x00010bf529e0();
  _objc_release(puVar3);
  if (puVar2 == (undefined *)0x0) {
    puVar2 = puVar1 + _DAT_11277b290;
    _objc_loadWeakRetained(puVar2);
    puVar3 = puVar2;
    func_0x00010c2548e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010c194800(puVar1,param_2,puVar3);
    _objc_release(puVar3);
    goto LAB_108d1dfa4;
  }
  lVar8 = (long)_DAT_11277b278;
  lVar7 = *(long *)(puVar1 + lVar8);
  if (lVar7 != 0) {
    puVar2 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c070780(lVar7,param_2,puVar2);
    _objc_release(puVar2);
    if ((int)lVar7 != 0) {
      func_0x00010c12c960(*(undefined8 *)(puVar1 + lVar8));
      uVar4 = *(undefined8 *)(puVar1 + lVar8);
      *(undefined8 *)(puVar1 + lVar8) = 0;
      _objc_release(uVar4);
    }
  }
  lVar7 = (long)_DAT_11277b274;
  uVar6 = *(ulong *)(puVar1 + lVar7);
  if (uVar6 == 0) {
LAB_108d1df0c:
    puVar2 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
  }
  else {
    puVar2 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c070780(uVar6,param_2,puVar2);
    _objc_release(puVar2);
    if ((uVar6 & 1) == 0) goto LAB_108d1df0c;
  }
  func_0x00010c128b60(*(undefined8 *)(puVar1 + lVar7));
  puVar2 = PTR__CGPointZero_110347540;
  func_0x00010c1822e0(*(undefined8 *)PTR__CGPointZero_110347540,
                      *(undefined8 *)(PTR__CGPointZero_110347540 + 8),
                      *(undefined8 *)(puVar1 + lVar7));
  lVar7 = (long)_DAT_11277b294;
  uVar4 = *(undefined8 *)puVar2;
  *(undefined8 *)((long)(puVar1 + lVar7) + 8) = *(undefined8 *)(puVar2 + 8);
  *(undefined8 *)(puVar1 + lVar7) = uVar4;
LAB_108d1dfa4:
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108d1dd9c; end: 108d1dfcf; -[SCStickerPickerHorizontalScrollCell setStickers:sourceType:userSession:stickerInjector:ctpItemViewService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1dd9c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_3);
  lVar5 = param_3;
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277b27c);
  *(long *)(param_1 + _DAT_11277b27c) = lVar5;
  _objc_release(uVar3);
  *(undefined8 *)(param_1 + _DAT_11277b280) = param_4;
  lVar5 = (long)_DAT_11277b284;
  _objc_retain(param_5);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = param_5;
  _objc_release(uVar3);
  lVar5 = (long)_DAT_11277b288;
  _objc_retain(param_6);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = param_6;
  _objc_release(uVar3);
  lVar5 = (long)_DAT_11277b28c;
  _objc_retain(param_7);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = param_7;
  _objc_release(uVar3);
  lVar5 = param_3;
  func_0x00010bf529e0();
  _objc_release(param_3);
  if (lVar5 == 0) {
    lVar5 = param_1 + _DAT_11277b290;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010c2548e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    func_0x00010c194800(param_1,param_2,lVar6);
    _objc_release(lVar6);
    goto LAB_108d1dfa4;
  }
  lVar6 = (long)_DAT_11277b278;
  lVar5 = *(long *)(param_1 + lVar6);
  if (lVar5 != 0) {
    lVar2 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c070780(lVar5,param_2,lVar2);
    _objc_release(lVar2);
    if ((int)lVar5 != 0) {
      func_0x00010c12c960(*(undefined8 *)(param_1 + lVar6));
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      *(undefined8 *)(param_1 + lVar6) = 0;
      _objc_release(uVar3);
    }
  }
  lVar5 = (long)_DAT_11277b274;
  uVar4 = *(ulong *)(param_1 + lVar5);
  if (uVar4 == 0) {
LAB_108d1df0c:
    lVar6 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar6);
  }
  else {
    lVar6 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c070780(uVar4,param_2,lVar6);
    _objc_release(lVar6);
    if ((uVar4 & 1) == 0) goto LAB_108d1df0c;
  }
  func_0x00010c128b60(*(undefined8 *)(param_1 + lVar5));
  puVar1 = PTR__CGPointZero_110347540;
  func_0x00010c1822e0(*(undefined8 *)PTR__CGPointZero_110347540,
                      *(undefined8 *)(PTR__CGPointZero_110347540 + 8),
                      *(undefined8 *)(param_1 + lVar5));
  lVar5 = (long)_DAT_11277b294;
  uVar3 = *(undefined8 *)puVar1;
  ((undefined8 *)(param_1 + lVar5))[1] = *(undefined8 *)(puVar1 + 8);
  *(undefined8 *)(param_1 + lVar5) = uVar3;
LAB_108d1dfa4:
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108d1dfd0; end: 108d1e08b; -[SCStickerPickerHorizontalScrollCell resetLayoutWithHeight:minimumLineSpacing:uniformWidthLayout:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1dfd0(long param_1,undefined8 param_2,long param_3,long param_4,undefined1 param_5)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  
  func_0x00010bf20c00();
  lVar2 = (long)_DAT_11277b274;
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar2));
  *(undefined1 *)(param_1 + _DAT_11277b298) = param_5;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010bf408e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  *(double *)(param_1 + _DAT_11277b29c) = (double)param_3;
  dVar3 = (double)param_4;
  func_0x00010c1c8300(dVar3);
  func_0x00010c1c82c0(dVar3,uVar1);
  func_0x00010c1f93e0(0,dVar3,0,dVar3,uVar1);
  func_0x00010c069fe0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d1e08c; end: 108d1e197; -[SCStickerPickerHorizontalScrollCell stickerCellForGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1e08c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11277b274;
  lVar4 = *(long *)(param_1 + lVar6);
  func_0x00010c09ef00(param_3,param_2,lVar4);
  func_0x00010bfed040();
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + _DAT_11277b2a0) == '\x01') {
    lVar1 = lVar4;
    func_0x00010c0840e0();
    lVar2 = *(long *)(param_1 + _DAT_11277b27c);
    func_0x00010bf529e0();
    if (lVar1 != lVar2) goto LAB_108d1e114;
  }
  else {
LAB_108d1e114:
    if (*(long *)(param_1 + _DAT_11277b278) == 0) {
      uVar5 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c09ef00(param_3,param_2,uVar5);
      uVar3 = uVar5;
      func_0x00010bfed040(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf33b60(uVar5,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      goto LAB_108d1e170;
    }
  }
  uVar5 = 0;
LAB_108d1e170:
  _objc_release(lVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 108d1e198; end: 108d1e1ff; -[SCStickerPickerHorizontalScrollCell firstStickerCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1e198(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277b274);
  puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf33b60(uVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108d1e200; end: 108d1e2bb; +[SCStickerPickerHorizontalScrollCell isInHorizontalCell:] */

uint FUN_108d1e200(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8;
  _objc_opt_class(PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126d4f30;
  _objc_opt_class(PTR_PTR_1126d4f30);
  uVar2 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar3);
  _objc_release(uVar1);
  return (uint)uVar2 & 1;
}



/* Entry: 108d1e2bc; end: 108d1e32f; -[SCStickerPickerHorizontalScrollCell deleteSticker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1e2bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11277b27c;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  _objc_retain(param_3);
  func_0x00010c0d3c80();
  func_0x00010c12d360();
  _objc_release(param_3);
  uVar1 = uVar3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 108d1e330; end: 108d1e357; -[SCStickerPickerHorizontalScrollCell isEmpty] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108d1e330(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11277b27c);
  func_0x00010bf529e0(lVar1);
  return lVar1 == 0;
}



/* Entry: 108d1e358; end: 108d1e58b; -[SCStickerPickerHorizontalScrollCell scrollViewDidScroll:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1e358(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_7);
  lVar6 = (long)_DAT_11277b27c;
  lVar1 = *(long *)(param_5 + lVar6);
  func_0x00010bf529e0();
  if ((lVar1 != 0) && (lVar1 = (long)_DAT_11277b2a0, (*(byte *)(param_5 + lVar1) & 1) == 0)) {
    lVar5 = param_5 + _DAT_11277b290;
    _objc_loadWeakRetained();
    lVar2 = lVar5;
    func_0x00010c254900();
    _objc_release(lVar5);
    if ((int)lVar2 != 0) {
      func_0x00010bf4cdc0(param_7);
      dVar7 = param_1;
      func_0x00010bf4d5e0(param_7);
      func_0x00010bfb68e0(param_7);
      func_0x00010bf4c7c0(param_7);
      param_4 = param_4 + (dVar7 - param_3);
      lVar5 = (long)_DAT_11277b294;
      if (((param_4 < param_1) &&
          (dVar7 = *(double *)(param_5 + lVar5), func_0x00010bf4cdc0(param_7), dVar7 < param_4)) &&
         (param_4 = *(double *)(param_5 + lVar5), 0.0 <= param_4)) {
        *(undefined1 *)(param_5 + lVar1) = 1;
        puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
        func_0x00010bf529e0(*(undefined8 *)(param_5 + lVar6));
        func_0x00010bfed020();
        _objc_retainAutoreleasedReturnValue();
        _objc_initWeak(auStack_68,param_5);
        uVar4 = *(undefined8 *)(param_5 + _DAT_11277b274);
        puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0xc2000000;
        pcStack_88 = FUN_108d1e58c;
        puStack_80 = &UNK_110841fb0;
        _objc_copyWeak(auStack_70,auStack_68);
        _objc_retain(puVar3);
        puStack_78 = puVar3;
        _objc_copyWeak(auStack_a0,auStack_68);
        func_0x00010c0f8420(uVar4);
        _objc_destroyWeak(auStack_a0);
        _objc_release(puStack_78);
        _objc_destroyWeak(auStack_70);
        _objc_destroyWeak(auStack_68);
        _objc_release(puVar3);
      }
      func_0x00010bf4cdc0(param_7);
      *(double *)(param_5 + lVar5) = param_4;
      ((double *)(param_5 + lVar5))[1] = param_2;
    }
  }
  _objc_release(param_7);
  return;
}



/* Entry: 108d1e58c; end: 108d1e627;  */

void FUN_108d1e58c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  if (lVar2 != 0) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_108d1e628;
    puStack_48 = &UNK_110841f80;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lStack_40 = lVar2;
    _objc_retain(uVar3);
    uStack_38 = uVar3;
    func_0x00010c0f9680(puVar1,param_2,&puStack_60);
    _objc_release(uStack_38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 108d1e628; end: 108d1e74f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1e628(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277b274);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_30,1);
  iVar3 = (int)param_2;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066a40(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained();
  if ((iVar3 != 0) && (puVar1 != (undefined *)0x0)) {
    puVar2 = puVar1 + _DAT_11277b290;
    _objc_loadWeakRetained(puVar2);
    func_0x00010c254920();
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  return;
}



/* Entry: 108d1e750; end: 108d1e7af;  */

void FUN_108d1e750(long param_1,undefined1 param_2)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_108d1e7b0;
  puStack_28 = &UNK_110845ce0;
  uStack_20 = *(undefined8 *)(param_1 + 0x20);
  uStack_18 = param_2;
  func_0x000107c312cc("APPSTORE",&puStack_40);
  return;
}



/* Entry: 108d1e7b0; end: 108d1e8bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1e7b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined1 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  func_0x00010c2558c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277b2a4));
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277b2a0) = 0;
  puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277b27c);
  func_0x00010bf529e0(uVar1);
  func_0x00010bfed020(puVar2,param_2,uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  lStack_70 = *(long *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(lStack_70 + _DAT_11277b274);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108d1e8bc;
  puStack_48 = &UNK_110841f80;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x108d1e9d4;
  puStack_78 = &UNK_110857498;
  uStack_68 = *(undefined1 *)(param_1 + 0x28);
  lStack_40 = lStack_70;
  puStack_38 = puVar2;
  _objc_retain();
  func_0x00010c0f8420(uVar1,param_2,&puStack_60,&puStack_90);
  _objc_release(puStack_38);
  _objc_release(puVar2);
  return;
}



/* Entry: 108d1e8bc; end: 108d1ea2b;  */

void FUN_108d1e8bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x108d1e940;
  puStack_38 = &UNK_110841f80;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x00010c0f9680(puVar1,param_2,&puStack_50);
  _objc_release(uStack_28);
  return;
}



/* Entry: 108d1ea2c; end: 108d1ea3f; -[SCStickerPickerHorizontalScrollCell scrollViewWillBeginDragging:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1ea2c(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11277b270) = 1;
  return;
}



/* Entry: 108d1ea40; end: 108d1ea4f; -[SCStickerPickerHorizontalScrollCell scrollViewDidEndDragging:willDecelerate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1ea40(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11277b270) = 0;
  return;
}



/* Entry: 108d1ea50; end: 108d1ea57; -[SCStickerPickerHorizontalScrollCell numberOfSectionsInCollectionView:] */

undefined8 FUN_108d1ea50(void)

{
  return 1;
}



/* Entry: 108d1ea58; end: 108d1ea9f; -[SCStickerPickerHorizontalScrollCell collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_108d1ea58(long param_1)

{
  ulong uVar1;
  char cVar2;
  ulong uVar3;
  
  cVar2 = *(char *)(param_1 + _DAT_11277b2a0);
  uVar3 = *(ulong *)(param_1 + _DAT_11277b27c);
  func_0x00010bf529e0();
  uVar1 = uVar3;
  if (0x27 < uVar3) {
    uVar1 = 0x28;
  }
  if (cVar2 != '\0') {
    uVar1 = uVar3 + 1;
  }
  return uVar1;
}



/* Entry: 108d1eaa0; end: 108d1ecdb; -[SCStickerPickerHorizontalScrollCell collectionView:cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1eaa0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010bf6e0c0(param_3,param_2,&PTR____CFConstantStringClassReference_110ea0ff8,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  if (*(char *)(param_1 + _DAT_11277b2a0) == '\x01') {
    lVar6 = param_4;
    func_0x00010c0840e0();
    lVar2 = *(long *)(param_1 + _DAT_11277b27c);
    func_0x00010bf529e0();
    if (lVar6 == lVar2) {
      uVar3 = param_3;
      func_0x00010bf6e0c0(param_3,param_2,&PTR____CFConstantStringClassReference_110ef2bf8,param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126afd30;
      _objc_alloc();
      func_0x00010bfffc60();
      lVar6 = (long)_DAT_11277b2a4;
      uVar5 = *(undefined8 *)(param_1 + lVar6);
      *(undefined **)(param_1 + lVar6) = puVar4;
      _objc_release(uVar5);
      uVar5 = uVar3;
      func_0x00010bf4dce0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(uVar5);
      func_0x00010c21e900(uVar3,param_2,0);
      uVar5 = *(undefined8 *)(param_1 + lVar6);
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_108d1ecdc;
      puStack_60 = &UNK_1108471b0;
      _objc_retain(uVar3);
      uStack_58 = uVar3;
      func_0x00010c0bbfc0(uVar5,param_2,&puStack_78);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c24dbc0(*(undefined8 *)(param_1 + lVar6));
      uVar5 = uStack_58;
      goto LAB_108d1ec9c;
    }
  }
  func_0x00010c207200(uVar1,param_2,*(undefined8 *)(param_1 + _DAT_11277b280));
  func_0x00010c215360(uVar1,param_2,*(undefined8 *)(param_1 + _DAT_11277b2a8));
  uVar5 = *(undefined8 *)(param_1 + _DAT_11277b27c);
  lVar6 = param_4;
  func_0x00010c0840e0(param_4);
  func_0x00010c0dfd40(uVar5,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20a800(uVar1,param_2,uVar5,0,*(undefined8 *)(param_1 + _DAT_11277b284),0,
                      *(undefined8 *)(param_1 + _DAT_11277b288),
                      *(undefined8 *)(param_1 + _DAT_11277b28c));
  _objc_retain(uVar1);
  uVar3 = uVar1;
LAB_108d1ec9c:
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108d1ecdc; end: 108d1edeb;  */

void FUN_108d1ecdc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bbec0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bbee0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108d1edec; end: 108d1ef47; -[SCStickerPickerHorizontalScrollCell collectionView:didSelectItemAtIndexPath:] */

void FUN_108d1edec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_6);
  func_0x00010bf33b60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0d10;
  _objc_opt_class(PTR_PTR_1126b0d10);
  uVar3 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar2);
  uVar1 = param_5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    uVar3 = param_5;
    func_0x00010c262ca0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf345e0(param_5);
    func_0x00010bf512a0(uVar3);
    _objc_release(uVar3);
    func_0x00010bf6b020(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_5;
    func_0x00010c253880(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_5;
    func_0x00010c254100(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0840e0(param_6);
    func_0x00010bfe4180(param_1,param_2,param_3);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(param_3);
  }
  _objc_release(uVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 108d1ef48; end: 108d1f01f; -[SCStickerPickerHorizontalScrollCell collectionView:willDisplayCell:forItemAtIndexPath:] */

void FUN_108d1ef48(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126b0d10;
  _objc_opt_class(PTR_PTR_1126b0d10);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c253880(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2548a0(param_1);
    _objc_release(uVar3);
    _objc_release(param_1);
    func_0x00010c2a5f80(param_4);
  }
  _objc_release(uVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108d1f020; end: 108d1f07f; -[SCStickerPickerHorizontalScrollCell collectionView:didEndDisplayingCell:forItemAtIndexPath:] */

void FUN_108d1f020(void)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong in_x3;
  
  _objc_retain(in_x3);
  puVar2 = PTR_PTR_1126b0d10;
  _objc_opt_class(PTR_PTR_1126b0d10);
  uVar3 = in_x3;
  _objc_opt_isKindOfClass(in_x3,puVar2);
  uVar1 = in_x3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010bf75820(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x3);
  return;
}



/* Entry: 108d1f080; end: 108d1f15b; -[SCStickerPickerHorizontalScrollCell collectionView:layout:sizeForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108d1f080(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 in_x4;
  long lVar3;
  undefined1 auVar4 [16];
  
  if (*(char *)(param_3 + _DAT_11277b298) == '\x01') {
    param_1 = *(undefined8 *)(param_3 + _DAT_11277b29c);
    param_2 = param_1;
  }
  else {
    lVar3 = *(long *)(param_3 + _DAT_11277b27c);
    func_0x00010c0840e0(in_x4);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x000107c318f8();
    lVar1 = lVar3;
    if ((int)lVar2 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    _objc_release(lVar3);
    if (lVar1 == 0) {
      param_1 = *(undefined8 *)(param_3 + _DAT_11277b29c);
      param_2 = param_1;
    }
    else {
      func_0x00010c069a00(lVar3);
    }
    _objc_release(lVar1);
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 108d1f15c; end: 108d1f1d7; -[SCStickerPickerHorizontalScrollCell stickerPickerCellDidStartLoadingSticker:] */

void FUN_108d1f15c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  func_0x00010c254880(uVar1,param_2,param_1,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d1f1d8; end: 108d1f2a3; -[SCStickerPickerHorizontalScrollCell stickerPickerCellDidShowSticker:timeToDisplay:downloadSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1f1d8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_2 + _DAT_11277b274);
  func_0x00010bfecfa0(lVar1,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_2;
    func_0x00010bf6b020(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c253880(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c254860(param_1,lVar2,param_3,param_2,uVar3,lVar1,param_5);
    _objc_release(uVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108d1f2a4; end: 108d1f2c3; -[SCStickerPickerHorizontalScrollCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1f2a4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277b290);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108d1f2c4; end: 108d1f2d7; -[SCStickerPickerHorizontalScrollCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1f2c4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277b290,param_3);
  return;
}



/* Entry: 108d1f2d8; end: 108d1f2e7; -[SCStickerPickerHorizontalScrollCell collectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d1f2d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b274);
}



/* Entry: 108d1f2e8; end: 108d1f327; -[SCStickerPickerHorizontalScrollCell setCollectionView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1f2e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277b274;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d1f328; end: 108d1f337; -[SCStickerPickerHorizontalScrollCell timeToDisplayCallbackBlock] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d1f328(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b2a8);
}



/* Entry: 108d1f338; end: 108d1f343; -[SCStickerPickerHorizontalScrollCell setTimeToDisplayCallbackBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1f338(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108d1f344; end: 108d1f3ef; -[SCStickerPickerHorizontalScrollCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1f344(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277b2a8,0);
  _objc_destroyWeak(param_1 + _DAT_11277b290);
  _objc_storeStrong(param_1 + _DAT_11277b28c,0);
  _objc_storeStrong(param_1 + _DAT_11277b288,0);
  _objc_storeStrong(param_1 + _DAT_11277b278,0);
  _objc_storeStrong(param_1 + _DAT_11277b2a4,0);
  _objc_storeStrong(param_1 + _DAT_11277b284,0);
  _objc_storeStrong(param_1 + _DAT_11277b27c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277b274,0);
  return;
}



/* Entry: 108d1f3f0; end: 108d1f4c7; -[SCStickerPickerIconCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108d1f3f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126fe5e0;
  uStack_60 = param_5;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    lVar5 = (long)_DAT_11277b2b0;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar5));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108d1f4c8; end: 108d1f52f; -[SCStickerPickerIconCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1f4c8(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fe5e0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_prepareForReuse_112620008);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277b2b4);
  *(undefined8 *)(param_1 + _DAT_11277b2b4) = 0;
  _objc_release(uVar1);
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11277b2b0));
  return;
}



/* Entry: 108d1f530; end: 108d1f577; -[SCStickerPickerIconCell setImageXInset:yInset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1f530(long param_1)

{
  func_0x00010bf20c00();
  _CGRectInset();
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277b2b0),PTR_s_setFrame__112645658);
  return;
}



/* Entry: 108d1f578; end: 108d1f587; -[SCStickerPickerIconCell iconImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1f578(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe6ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277b2b0),PTR_s_image_1125d7478);
  return;
}



/* Entry: 108d1f588; end: 108d1f597; -[SCStickerPickerIconCell iconAlpha] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1f588(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf01b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277b2b0),PTR_s_alpha_11259e078);
  return;
}



/* Entry: 108d1f598; end: 108d1f73f; -[SCStickerPickerIconCell setIconImageFuture:fallbackIconImageFuture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1f598(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar4 = (long)_DAT_11277b2b4;
  if (*(long *)(param_1 + lVar4) != param_3) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    *(long *)(param_1 + lVar4) = param_3;
    _objc_release(uVar1);
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11277b2b0));
    _objc_initWeak(auStack_58,param_1);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_108d1f740;
    puStack_70 = &UNK_110855f90;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    ppuVar2 = &puStack_88;
    lStack_68 = param_3;
    _objc_retainBlock();
    _objc_retain(param_4);
    ppuVar3 = ppuVar2;
    _objc_retain(ppuVar2);
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(param_3);
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    _objc_release(param_4);
    _objc_release(ppuVar2);
    _objc_release(lStack_68);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108d1f740; end: 108d1f813;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1f740(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(lVar1 + _DAT_11277b2b4) == *(long *)(param_1 + 0x20))) {
    func_0x00010c1a9f00(*(undefined8 *)(lVar1 + _DAT_11277b2b0));
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108d1f814; end: 108d1f88f; -[SCStickerPickerIconCell setIconImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1f814(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11277b2b0;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != param_3) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11277b2b4);
    *(undefined8 *)(param_1 + _DAT_11277b2b4) = 0;
    _objc_release(uVar2);
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar3),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


