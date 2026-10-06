/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107f65fd0; end: 107f65fd7; -[SCMemoriesFeaturedEntryDataModel totalExpectedClientGenSnapsCount] */

undefined8 FUN_107f65fd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107f65fd8; end: 107f65fdf; -[SCMemoriesFeaturedEntryDataModel clientGenStoryGenerationProgress] */

undefined8 FUN_107f65fd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107f65fe0; end: 107f66027; -[SCMemoriesFeaturedEntryDataModel .cxx_destruct] */

void FUN_107f65fe0(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107f66028; end: 107f660f7; -[SCMemoriesRegularFeaturedStory initWithTempEntry:contentEntry:snaps:] */

undefined1 *
FUN_107f66028(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fbd38;
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f660f8; end: 107f6611b; -[SCMemoriesRegularFeaturedStory copyWithZone:] */

undefined8 FUN_107f660f8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f6611c; end: 107f6619b; -[SCMemoriesRegularFeaturedStory hash] */

undefined8 * FUN_107f6611c(long param_1,undefined8 param_2,undefined1 *param_3)

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
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_107f66234:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107f66240;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_107f66240;
          }
          goto LAB_107f66234;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_107f66240:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 107f6619c; end: 107f6625b; -[SCMemoriesRegularFeaturedStory isEqual:] */

long FUN_107f6619c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107f66234:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107f66240;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_107f66240;
          }
          goto LAB_107f66234;
        }
      }
    }
    lVar3 = 0;
  }
LAB_107f66240:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107f6625c; end: 107f66263; -[SCMemoriesRegularFeaturedStory tempEntry] */

undefined8 FUN_107f6625c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107f66264; end: 107f6626b; -[SCMemoriesRegularFeaturedStory contentEntry] */

undefined8 FUN_107f66264(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f6626c; end: 107f66273; -[SCMemoriesRegularFeaturedStory snaps] */

undefined8 FUN_107f6626c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107f66274; end: 107f662af; -[SCMemoriesRegularFeaturedStory .cxx_destruct] */

void FUN_107f66274(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f662b0; end: 107f6634b; -[SCMemoriesCRFeaturedStoryThumbnailGeneratorBuilderServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f662b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d8798;
  _objc_alloc(PTR_PTR_1126d8798);
  param_1 = param_1 + _DAT_112771ec0;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c0c9ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02afe0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126d87a0;
  _objc_alloc(PTR_PTR_1126d87a0);
  func_0x00010c006420();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107f6634c; end: 107f66383; -[SCMemoriesCRFeaturedStoryThumbnailGeneratorBuilderServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f6634c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112771ec0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112771ec4);
  return;
}



/* Entry: 107f66384; end: 107f663cf; -[SCMemoriesEntryThumbnailGeneratorBuilderServiceProvider provide] */

void FUN_107f66384(undefined8 param_1)

{
  undefined *puVar1;
  
  func_0x00010be0aba0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d87a8;
  _objc_alloc(PTR_PTR_1126d87a8);
  func_0x00010c010520();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107f663d0; end: 107f6658f; -[SCMemoriesEntryThumbnailGeneratorBuilderServiceProvider _entryThumbnailGeneratorBuilder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f663d0(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126d87b0;
  _objc_alloc(PTR_PTR_1126d87b0);
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_112771ed4;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar8;
  func_0x00010bf93a20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_112771ed8;
    _objc_loadWeakRetained(lVar9);
  }
  lVar3 = lVar9;
  func_0x00010c0c9ec0(lVar9);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_112771ecc;
    _objc_loadWeakRetained(lVar10);
  }
  lVar4 = lVar10;
  func_0x00010bf27760(lVar10);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_112771ed0;
    _objc_loadWeakRetained(lVar11);
  }
  lVar5 = lVar11;
  func_0x00010c0cadc0(lVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = 0;
  if (param_1 != 0) {
    lVar6 = param_1 + _DAT_112771edc;
    _objc_loadWeakRetained(lVar6);
  }
  lVar7 = lVar6;
  func_0x00010bf398e0(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00fca0(puVar1,param_2,lVar2,lVar3,lVar4,lVar5,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar11);
  _objc_release(lVar4);
  _objc_release(lVar10);
  _objc_release(lVar3);
  _objc_release(lVar9);
  _objc_release(lVar2);
  _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107f66590; end: 107f665f7; -[SCMemoriesEntryThumbnailGeneratorBuilderServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f66590(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112771edc);
  _objc_destroyWeak(param_1 + _DAT_112771ed8);
  _objc_destroyWeak(param_1 + _DAT_112771ed4);
  _objc_destroyWeak(param_1 + _DAT_112771ed0);
  _objc_destroyWeak(param_1 + _DAT_112771ecc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112771ec8);
  return;
}



/* Entry: 107f665f8; end: 107f6668b; -[SCMemoriesSnapThumbnailGeneratorBuilderServiceProvider provide] */

void FUN_107f665f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bebd340(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126d87b8;
  _objc_alloc(PTR_PTR_1126d87b8);
  func_0x00010c0488e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107f6668c; end: 107f6684b; -[SCMemoriesSnapThumbnailGeneratorBuilderServiceProvider _snapThumbnailGeneratorBuilder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f6668c(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126d87c0;
  _objc_alloc(PTR_PTR_1126d87c0);
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_112771ee8;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar8;
  func_0x00010bf93a20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_112771eec;
    _objc_loadWeakRetained(lVar9);
  }
  lVar3 = lVar9;
  func_0x00010c0c9ec0(lVar9);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_112771ef0;
    _objc_loadWeakRetained(lVar10);
  }
  lVar4 = lVar10;
  func_0x00010bf27760(lVar10);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_112771ee4;
    _objc_loadWeakRetained(lVar11);
  }
  lVar5 = lVar11;
  func_0x00010c0c8780(lVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = 0;
  if (param_1 != 0) {
    lVar6 = param_1 + _DAT_112771ef4;
    _objc_loadWeakRetained(lVar6);
  }
  lVar7 = lVar6;
  func_0x00010bf398e0(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00fc80(puVar1,param_2,lVar2,lVar3,lVar4,lVar5,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar11);
  _objc_release(lVar4);
  _objc_release(lVar10);
  _objc_release(lVar3);
  _objc_release(lVar9);
  _objc_release(lVar2);
  _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107f6684c; end: 107f668b3; -[SCMemoriesSnapThumbnailGeneratorBuilderServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f6684c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112771ef4);
  _objc_destroyWeak(param_1 + _DAT_112771ef0);
  _objc_destroyWeak(param_1 + _DAT_112771eec);
  _objc_destroyWeak(param_1 + _DAT_112771ee8);
  _objc_destroyWeak(param_1 + _DAT_112771ee4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112771ee0);
  return;
}



/* Entry: 107f668b4; end: 107f6693b; +[SCGalleryEntryStaticAssetsGenerator sharedGenerator] */

void FUN_107f668b4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_107f6693c;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam0000000113728938 != -1) {
    func_0x00010002a2fc(0x113728938,&puStack_48);
  }
  uVar1 = uRam0000000113728930;
  _objc_retain(uRam0000000113728930);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f6693c; end: 107f66963;  */

void FUN_107f6693c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc_init();
  uVar1 = uRam0000000113728930;
  uRam0000000113728930 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f66964; end: 107f66a0f; -[SCGalleryEntryStaticAssetsGenerator init] */

undefined1 * FUN_107f66964(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fbd40;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107f66a10; end: 107f66acf; -[SCGalleryEntryStaticAssetsGenerator invertedStoryOverlayForTargetSize:] */

void FUN_107f66a10(double param_1,double param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2971c0(PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = *(undefined **)(param_3 + 8);
  func_0x00010c0e00e0(puVar2,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    if (param_2 <= param_1) {
      param_1 = param_2;
    }
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c06a560(param_1 + 2.0,param_1 + 2.0,PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_3 + 8),param_4,puVar2,puVar1);
  }
  _objc_retain(puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107f66ad0; end: 107f66ad7; -[SCGalleryEntryStaticAssetsGenerator _didReceiveMemoryWarning:] */

void FUN_107f66ad0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 107f66ad8; end: 107f66ae3; -[SCGalleryEntryStaticAssetsGenerator .cxx_destruct] */

void FUN_107f66ad8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f66ae4; end: 107f66b47; +[SCGalleryEntryThumbnailGenerator invertedStoryOverlayForTargetSize:] */

void FUN_107f66ae4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d87c8;
  func_0x00010c22ba00(PTR_PTR_1126d87c8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c06a540(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107f66b48; end: 107f66d27; -[SCGalleryEntryThumbnailGenerator initWithEntry:targetSize:shouldShowLoadingSpinner:generationContext:memoriesMergedDataSource:encryptedContentManager:thumbnailDebugManager:cachingMediaManager:circumstanceEngine:] */

undefined1 *
FUN_107f66b48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar2 = &uStack_80;
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_78 = PTR_PTR_1126fbd48;
  uStack_80 = param_3;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x80);
    *(undefined8 *)((long)puVar2 + 0x80) = param_8;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x88);
    *(undefined8 *)((long)puVar2 + 0x88) = param_9;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x90);
    *(undefined8 *)((long)puVar2 + 0x90) = param_10;
    _objc_release(uVar3);
    _objc_retain(param_11);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x98);
    *(undefined8 *)((long)puVar2 + 0x98) = param_11;
    _objc_release(uVar3);
    uVar3 = param_12;
    func_0x000108ec16dc();
    *(char *)((long)puVar2 + 0xa0) = (char)uVar3;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar2 + 8);
    *(undefined8 *)((long)puVar2 + 8) = param_5;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar2 + 0x10) = param_1;
    *(undefined8 *)((long)puVar2 + 0x18) = param_2;
    *(undefined1 *)((long)puVar2 + 0x20) = param_6;
    uVar3 = *(undefined8 *)((long)puVar2 + 0x28);
    *(undefined8 *)((long)puVar2 + 0x28) = 0;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x40);
    *(undefined8 *)((long)puVar2 + 0x40) = 0;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x38);
    *(undefined8 *)((long)puVar2 + 0x38) = 0;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar2 + 0x48) = 0;
    *(undefined1 *)((long)puVar2 + 0x54) = 0;
    uVar3 = *(undefined8 *)((long)puVar2 + 0x58);
    *(undefined8 *)((long)puVar2 + 0x58) = 0;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x60);
    *(undefined8 *)((long)puVar2 + 0x60) = 0;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar2 + 0x70) = 0;
    *(undefined8 *)((long)puVar2 + 0x78) = param_7;
    uVar3 = param_12;
    func_0x00010c067f00();
    iVar1 = 5;
    if (0 < (int)uVar3) {
      iVar1 = (int)uVar3;
    }
    *(int *)((long)puVar2 + 0x50) = iVar1;
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  return (undefined1 *)puVar2;
}



/* Entry: 107f66d28; end: 107f66d6f; -[SCGalleryEntryThumbnailGenerator dealloc] */

void FUN_107f66d28(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x60));
  puStack_28 = PTR_PTR_1126fbd48;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107f66d70; end: 107f66f53; -[SCGalleryEntryThumbnailGenerator startGeneratingUpdates] */

void FUN_107f66d70(undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + 0x70) = param_1;
  if ((*(byte *)(param_2 + 0x54) & 1) == 0) {
    *(undefined1 *)(param_2 + 0x54) = 1;
    uVar6 = *(undefined8 *)(param_2 + 8);
    _objc_retain(uVar6);
    puVar1 = auStack_68;
    _objc_initWeak(puVar1,param_2);
    FUN_107f6ab68();
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_107f66f54;
    puStack_80 = &UNK_110841fb0;
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(uVar6);
    uStack_78 = uVar6;
    func_0x00010007380c(puVar1,&puStack_98);
    _objc_release(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_a0,auStack_68);
    puVar4 = puVar2;
    func_0x00010befa280();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_2 + 0x58);
    *(undefined **)(param_2 + 0x58) = puVar4;
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_a0);
    _objc_release(uStack_78);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar6);
  }
  return;
}



/* Entry: 107f66f54; end: 107f6705f;  */

void FUN_107f66f54(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x54) == '\x01')) {
    lVar4 = *(long *)(param_1 + 0x20);
    _objc_retain(lVar4);
    if (lVar4 == 0) {
      lVar5 = 0;
    }
    else {
      lVar2 = *(long *)(lVar1 + 0x80);
      func_0x00010c269d40(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x00010bfa7340();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
    }
    lVar2 = lVar4;
    func_0x00010c245800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar3 = lVar5;
    if (lVar2 != 0) {
      lVar2 = lVar4;
      func_0x00010c245800(lVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010b5fca54();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      _objc_release(lVar2);
    }
    func_0x00010bee2120(lVar1);
    _objc_release(lVar3);
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107f67060; end: 107f6709f;  */

void FUN_107f67060(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(char *)(param_1 + 0x54) == '\x01')) {
    func_0x00010bec4f40(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107f670a0; end: 107f6714b; -[SCGalleryEntryThumbnailGenerator stopGeneratingUpdates] */

void FUN_107f670a0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x54) == '\x01') {
    *(undefined1 *)(param_1 + 0x54) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
    _objc_release(uVar1);
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0x7fffffffffffffff;
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d560();
    _objc_release(puVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
    _objc_release(uVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    _objc_retain(uVar3);
    func_0x00010bf2dba0(uVar3);
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 107f6714c; end: 107f672ab; -[SCGalleryEntryThumbnailGenerator _updateThumbnailWithLatestEntry:latestSnaps:] */

void FUN_107f6714c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(long *)(param_2 + 0x28) = param_4;
  _objc_release(uVar1);
  func_0x00010becd9e0(param_2,param_3,param_5);
  *(undefined8 *)(param_2 + 0x30) = param_1;
  uVar1 = param_5;
  FUN_107f6aa78();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = uVar1;
  _objc_release(uVar3);
  if ((*(long *)(param_2 + 0x28) != 0) && (lVar2 = param_4, func_0x00010b5fc5e4(), (int)lVar2 != 0))
  {
    lVar2 = param_4;
    func_0x00010bfbdda0();
    func_0x00010b5fa33c();
    if (lVar2 - 1U < 6) {
      lVar2 = *(long *)(param_2 + 0x38);
      func_0x00010bf529e0();
      uVar1 = 0x7fffffffffffffff;
      if (lVar2 != 0) {
        uVar1 = 0;
      }
      *(undefined8 *)(param_2 + 0x48) = uVar1;
      uVar3 = *(undefined8 *)(param_2 + 0x60);
      _objc_retain(uVar3);
      func_0x00010bf2dba0(uVar3);
      uVar1 = *(undefined8 *)(param_2 + 0x60);
      *(undefined8 *)(param_2 + 0x60) = 0;
      _objc_release(uVar1);
      uVar1 = *(undefined8 *)(param_2 + 0x38);
      func_0x00010bf529e0();
      *(undefined8 *)(param_2 + 0x68) = uVar1;
      lVar2 = param_2;
      func_0x00010becbc40(param_2,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      func_0x00010be1c1e0(param_2,param_3,lVar2,param_5);
      _objc_release(lVar2);
    }
    else if ((lVar2 == 7) || (lVar2 == 0)) {
      *(undefined8 *)(param_2 + 0x48) = 0x7fffffffffffffff;
      func_0x00010be1c1c0(param_2,param_3,param_4);
    }
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107f672ac; end: 107f67633; -[SCGalleryEntryThumbnailGenerator _storyThumbnailUpdateTimerDidFire] */

void FUN_107f672ac(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 auStack_80 [5];
  undefined8 auStack_58 [5];
  
  puVar5 = auStack_80;
  uVar3 = *(ulong *)(param_1 + 0x28);
  if (uVar3 != 0) {
    func_0x00010bfbdda0();
    func_0x00010b5fa33c();
    if ((8 < uVar3 || (1L << (uVar3 & 0x3f) & 0x181U) == 0) && uVar3 != 9999) {
      if (*(char *)(param_1 + 0xa0) == '\x01') {
        func_0x00010bf2dba0();
        uVar3 = *(ulong *)(param_1 + 0x38);
        func_0x00010bf529e0();
        if (uVar3 == 0) {
          lVar4 = 0;
        }
        else {
          uVar1 = *(long *)(param_1 + 0x48) + 1;
          uVar2 = 0;
          if (uVar3 != 0) {
            uVar2 = uVar1 / uVar3;
          }
          lVar4 = uVar1 - uVar2 * uVar3;
        }
        *(long *)(param_1 + 0x48) = lVar4;
        uVar6 = 0x107f673ac;
        puVar5 = auStack_58;
      }
      else {
        if (*(long *)(param_1 + 0x60) != 0) {
          return;
        }
        uVar6 = 0x107f674f0;
        uVar3 = 0;
      }
      FUN_107f6ab68();
      _objc_retainAutoreleasedReturnValue();
      *puVar5 = PTR___NSConcreteStackBlock_11034bd00;
      puVar5[1] = 0xc2000000;
      puVar5[2] = uVar6;
      puVar5[3] = &UNK_110842e18;
      puVar5[4] = param_1;
      func_0x00010007380c();
      _objc_release(uVar3);
    }
  }
  return;
}



/* Entry: 107f67634; end: 107f6782f; -[SCGalleryEntryThumbnailGenerator _generateThumbnailForSnapEntry:] */

void FUN_107f67634(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x00010becbc40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c241220(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26dca0(uVar3);
    _objc_release(lVar4);
    _objc_release(uVar3);
    _objc_initWeak(auStack_58,param_1);
    func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x60));
    uVar5 = *(undefined8 *)(param_1 + 0x98);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(lVar1);
    _objc_retain(lVar2);
    uVar3 = uVar5;
    func_0x00010c134d00(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = uVar3;
    _objc_release(uVar6);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar5);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 107f67830; end: 107f6798f;  */

void FUN_107f67830(float param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_2 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x54) == '\x01')) {
    lVar2 = lVar1 + 0xa8;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bf8b160(*(undefined8 *)(param_2 + 0x20));
    func_0x00010c26dd40((double)param_1,lVar2);
    _objc_release(lVar2);
    FUN_107f6ab68();
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_107f67990;
    puStack_80 = &UNK_11085d560;
    _objc_copyWeak(auStack_60,param_2 + 0x30);
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    _objc_retain(uVar3);
    uStack_78 = uVar3;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    uStack_70 = param_3;
    uStack_58 = param_5;
    _objc_retain(uVar3);
    uStack_68 = uVar3;
    func_0x00010007380c(lVar2,&puStack_98);
    _objc_release(lVar2);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
    _objc_release(uStack_78);
    _objc_destroyWeak(auStack_60);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 107f67990; end: 107f679f3;  */

void FUN_107f67990(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be59ba0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),*(long *)(param_1 + 0x28) != 0
                        ,*(undefined1 *)(param_1 + 0x40),*(long *)(lVar1 + 0x60) == 0,
                        *(undefined8 *)(param_1 + 0x30));
    uVar2 = *(undefined8 *)(lVar1 + 0x60);
    *(undefined8 *)(lVar1 + 0x60) = 0;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107f679f4; end: 107f67ddf; -[SCGalleryEntryThumbnailGenerator _generateThumbnailForStoryEntryWithTrigger:latestSnaps:] */

void FUN_107f679f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined **ppuVar9;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar8 = *(ulong *)(param_1 + 0x48);
  if (uVar8 != 0x7fffffffffffffff) {
    uVar3 = *(ulong *)(param_1 + 0x38);
    func_0x00010bf529e0();
    if (uVar8 < uVar3) {
      uVar3 = *(ulong *)(param_1 + 0x38);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar3;
      func_0x00010b5fc690();
      if ((uVar8 & 1) == 0) {
        uVar8 = *(ulong *)(param_1 + 0x38);
        func_0x00010bf529e0();
        if (uVar8 == 0) {
          lVar7 = 0;
        }
        else {
          uVar5 = *(long *)(param_1 + 0x48) + 1;
          uVar1 = 0;
          if (uVar8 != 0) {
            uVar1 = uVar5 / uVar8;
          }
          lVar7 = uVar5 - uVar1 * uVar8;
        }
        *(long *)(param_1 + 0x48) = lVar7;
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + 0x90);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar3;
        func_0x00010c241220(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26dca0(uVar4);
        _objc_release(uVar8);
        _objc_release(uVar4);
        uVar5 = *(ulong *)(param_1 + 0x98);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar5;
        _objc_opt_respondsToSelector();
        if ((uVar8 & 1) == 0) {
          iVar2 = 0;
        }
        else {
          uVar6 = *(undefined8 *)(param_1 + 0x98);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar6;
          func_0x00010c076b40();
          iVar2 = (int)uVar4;
          _objc_release(uVar6);
        }
        _objc_release(uVar5);
        _objc_initWeak(auStack_70,param_1);
        func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x60));
        uStack_a0 = 0;
        uStack_90 = 0x3042000000;
        pcStack_88 = FUN_107f67de0;
        uStack_80 = 0x107f67dec;
        puStack_98 = &uStack_a0;
        _objc_initWeak(auStack_78,0);
        ppuVar9 = (undefined **)0x0;
        uStack_c0 = 0;
        uStack_b0 = 0x2020000000;
        uStack_a8 = 0;
        puStack_b8 = &uStack_c0;
        if (iVar2 != 0) {
          puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_100 = 0xc2000000;
          pcStack_f8 = FUN_107f67df4;
          puStack_f0 = &UNK_11092fd00;
          _objc_copyWeak(auStack_c8,auStack_70);
          puStack_d8 = &uStack_a0;
          puStack_d0 = &uStack_c0;
          _objc_retain(param_3);
          uStack_e8 = param_3;
          _objc_retain(param_4);
          ppuVar9 = &puStack_108;
          uStack_e0 = param_4;
          _objc_retainBlock();
          _objc_release(uStack_e0);
          _objc_release(uStack_e8);
          _objc_destroyWeak(auStack_c8);
        }
        uVar6 = *(undefined8 *)(param_1 + 0x98);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(PTR___dispatch_main_q_11034be20);
        _objc_copyWeak(auStack_110,auStack_70);
        _objc_retain(uVar3);
        _objc_retain(param_4);
        _objc_retain(param_3);
        uVar4 = uVar6;
        func_0x00010c134d00(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
        _objc_retainAutoreleasedReturnValue();
        _objc_release(PTR___dispatch_main_q_11034be20);
        _objc_release(uVar6);
        _objc_storeWeak(puStack_98 + 5,uVar4);
        uVar6 = *(undefined8 *)(param_1 + 0x60);
        *(undefined8 *)(param_1 + 0x60) = uVar4;
        _objc_release(uVar6);
        _objc_release(param_3);
        _objc_release(param_4);
        _objc_release(uVar3);
        _objc_destroyWeak(auStack_110);
        _objc_release(ppuVar9);
        __Block_object_dispose(&uStack_c0,8);
        __Block_object_dispose(&uStack_a0,8);
        _objc_destroyWeak(auStack_78);
        _objc_destroyWeak(auStack_70);
      }
      _objc_release(uVar3);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107f67de0; end: 107f67df3;  */

void FUN_107f67de0(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_moveWeak_11034d280)(param_1 + 0x28,param_2 + 0x28);
  return;
}



/* Entry: 107f67df4; end: 107f67f97;  */

void FUN_107f67df4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  FUN_107f6ab68();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  uStack_68 = 0x107f67ec0;
  puStack_60 = &UNK_11092fd00;
  _objc_copyWeak(auStack_38,param_1 + 0x40);
  uStack_40 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar3;
  _objc_retain(uVar2);
  uStack_50 = uVar2;
  func_0x00010007380c(lVar1,&puStack_78);
  _objc_release(lVar1);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107f67f98; end: 107f680f3;  */

void FUN_107f67f98(long param_1,long param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 uStack_58;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x54) == '\x01')) {
    lVar2 = lVar1;
    if (param_2 != 0) {
      lVar2 = lVar1 + 0xa8;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c26dd60(*(undefined8 *)(lVar1 + 0x30));
      _objc_release(lVar2);
    }
    FUN_107f6ab68();
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_107f680f4;
    puStack_90 = &UNK_110a14c10;
    _objc_copyWeak(auStack_60,param_1 + 0x48);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uStack_88 = uVar3;
    _objc_retain(param_2);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    lStack_80 = param_2;
    uStack_58 = param_4;
    _objc_retain(uVar3);
    uStack_68 = *(undefined8 *)(param_1 + 0x40);
    uStack_70 = *(undefined8 *)(param_1 + 0x38);
    uStack_78 = uVar3;
    func_0x00010007380c(lVar2,&puStack_a8);
    _objc_release(lVar2);
    _objc_release(uStack_78);
    _objc_release(lStack_80);
    _objc_release(uStack_88);
    _objc_destroyWeak(auStack_60);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 107f680f4; end: 107f682c7;  */

void FUN_107f680f4(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  lVar2 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    func_0x00010be59ba0(lVar2);
    if ((*(long *)(param_1 + 0x28) == 0) &&
       ((*(byte *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) & 1) == 0)) {
      uVar5 = lVar2 + 0xa8;
      _objc_loadWeakRetained();
      uVar3 = uVar5;
      _objc_opt_respondsToSelector();
      _objc_release(uVar5);
      if ((uVar3 & 1) != 0) {
        puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_58 = 0xc2000000;
        uStack_50 = 0x107f68270;
        puStack_48 = &UNK_110841fb0;
        _objc_copyWeak(auStack_38,param_1 + 0x48);
        uVar7 = *(undefined8 *)(param_1 + 0x20);
        _objc_retain(uVar7);
        uStack_40 = uVar7;
        func_0x000100162d98("APPSTORE",&puStack_60);
        _objc_release(uStack_40);
        _objc_destroyWeak(auStack_38);
      }
    }
    lVar4 = *(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28;
    _objc_loadWeakRetained();
    if ((lVar4 != 0) && (*(long *)(lVar2 + 0x60) == lVar4)) {
      *(undefined8 *)(lVar2 + 0x60) = 0;
      _objc_release();
      if ((*(byte *)(lVar2 + 0xa0) & 1) == 0) {
        uVar5 = *(ulong *)(lVar2 + 0x38);
        func_0x00010bf529e0();
        if (uVar5 == 0) {
          lVar6 = 0;
        }
        else {
          uVar3 = *(long *)(lVar2 + 0x48) + 1;
          uVar1 = 0;
          if (uVar5 != 0) {
            uVar1 = uVar3 / uVar5;
          }
          lVar6 = uVar3 - uVar1 * uVar5;
        }
        *(long *)(lVar2 + 0x48) = lVar6;
      }
    }
    _objc_release(lVar4);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 107f682c8; end: 107f684c7; -[SCGalleryEntryThumbnailGenerator _logThumbnailLoadingEndWithSnap:isSuccessful:isCached:isCancelled:trigger:] */

void FUN_107f682c8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  lVar3 = param_1;
  func_0x00010beb46a0();
  if ((int)lVar3 != 0) {
    if (param_3 == 0) {
      uVar8 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x90);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3;
      func_0x00010c241220(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar4;
      func_0x00010c26dc40(uVar4,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(uVar4);
      lVar3 = param_3;
      func_0x00010b5fa088();
      iVar2 = (int)lVar3;
      func_0x00010b5fa4c8();
      ppuVar1 = &PTR____CFConstantStringClassReference_110db6dd8;
      if (iVar2 == 0) {
        ppuVar1 = &PTR____CFConstantStringClassReference_110de7678;
      }
      uVar4 = *(undefined8 *)(param_1 + 0x90);
      _objc_retain(ppuVar1);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28af60();
      _objc_release(ppuVar1);
      _objc_release(uVar4);
    }
    dVar9 = *(double *)(param_1 + 0x70);
    if (0.0 < dVar9) {
      uVar4 = *(undefined8 *)(param_1 + 0x90);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + 0x70);
      _CACurrentMediaTime();
      lVar3 = param_3;
      func_0x00010b5fa088(param_3);
      lVar5 = param_3;
      func_0x00010b5fb758(param_3);
      lVar6 = param_3;
      FUN_107fdccc8(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_1;
      func_0x00010becbd40(param_1,param_2,param_4,param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b19e0(uVar10,dVar9,uVar4,param_2,uVar8,lVar3,lVar5,lVar6,param_7,lVar7);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(uVar4);
    }
    *(undefined8 *)(param_1 + 0x70) = 0;
    _objc_release(uVar8);
  }
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f684c8; end: 107f684e7; -[SCGalleryEntryThumbnailGenerator _shouldLogThumbnailLatency] */

uint FUN_107f684c8(long param_1)

{
  return (uint)(6 < *(ulong *)(param_1 + 0x78)) |
         0x26U >> (ulong)((uint)*(ulong *)(param_1 + 0x78) & 0x1f) & 1;
}



/* Entry: 107f684e8; end: 107f685f7; -[SCGalleryEntryThumbnailGenerator _totalSnapsDurationForSnaps:] */

double FUN_107f684e8(undefined8 param_1,undefined *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar2 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  dVar6 = 0.0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 == 0) {
    dVar7 = 0.0;
  }
  else {
    lVar3 = *plStack_110;
    dVar7 = 0.0;
    do {
      lVar4 = 0;
      do {
        fVar5 = SUB84(dVar6,0);
        if (*plStack_110 != lVar3) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010bf8b160(*(undefined8 *)(lStack_118 + lVar4 * 8));
        dVar6 = (double)fVar5;
        dVar7 = dVar7 + dVar6;
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      lVar1 = param_3;
      puVar2 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return dVar7;
  }
  ___stack_chk_fail();
  func_0x00010bfbdda0();
  func_0x00010b5fa33c();
  if (puVar2 < (undefined1 *)0x9) {
    if ((1L << ((ulong)puVar2 & 0x3f) & 0x15eU) == 0) {
      if ((1L << ((ulong)puVar2 & 0x3f) & 0x81U) == 0) {
        param_2 = PTR_PTR_1126bfc40;
        func_0x00010bdc2a00(PTR_PTR_1126bfc40);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        param_2 = PTR_PTR_1126bfc40;
        func_0x00010bdc2a40(PTR_PTR_1126bfc40);
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_107f68694;
    }
  }
  else if (puVar2 != (undefined8 *)0x270f) goto LAB_107f68694;
  param_2 = PTR_PTR_1126bfc40;
  func_0x00010bdc2a20(PTR_PTR_1126bfc40);
  _objc_retainAutoreleasedReturnValue();
LAB_107f68694:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return dVar6;
}



/* Entry: 107f685f8; end: 107f6869f; -[SCGalleryEntryThumbnailGenerator _thumbnailLoggingTrigger:] */

void FUN_107f685f8(undefined8 param_1,undefined *param_2,ulong param_3)

{
  func_0x00010bfbdda0();
  func_0x00010b5fa33c();
  if (param_3 < 9) {
    if ((1L << (param_3 & 0x3f) & 0x15eU) == 0) {
      if ((1L << (param_3 & 0x3f) & 0x81U) == 0) {
        param_2 = PTR_PTR_1126bfc40;
        func_0x00010bdc2a00(PTR_PTR_1126bfc40);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        param_2 = PTR_PTR_1126bfc40;
        func_0x00010bdc2a40(PTR_PTR_1126bfc40);
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_107f68694;
    }
  }
  else if (param_3 != 9999) goto LAB_107f68694;
  param_2 = PTR_PTR_1126bfc40;
  func_0x00010bdc2a20(PTR_PTR_1126bfc40);
  _objc_retainAutoreleasedReturnValue();
LAB_107f68694:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 107f686a0; end: 107f686eb; -[SCGalleryEntryThumbnailGenerator _thumbnailResultForIsSuccessful:isCancelled:] */

void FUN_107f686a0(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  if (param_3 == 0) {
    if (param_4 == 0) {
      func_0x00010bdc1f80(PTR_PTR_1126bfc40);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bdc1f60();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x00010bdc1fa0();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f686ec; end: 107f68703; -[SCGalleryEntryThumbnailGenerator delegate] */

void FUN_107f686ec(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f68704; end: 107f6870f; -[SCGalleryEntryThumbnailGenerator setDelegate:] */

void FUN_107f68704(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xa8,param_3);
  return;
}



/* Entry: 107f68710; end: 107f687a7; -[SCGalleryEntryThumbnailGenerator .cxx_destruct] */

void FUN_107f68710(long param_1)

{
  _objc_destroyWeak(param_1 + 0xa8);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f687a8; end: 107f6896f; -[SCGallerySnapThumbnailGenerator initWithEncryptedContentManager:memoriesThumbnailLogger:cachingMediaManager:dataObjectContext:circumstanceEngine:] */

undefined1 *
FUN_107f687a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126fbd50;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f68970; end: 107f68b53; -[SCGallerySnapThumbnailGenerator requestThumbnailForSnap:identifier:targetSize:networkDownloadDelayEnabled:queue:resultHandler:] */

void FUN_107f68970(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6,long param_7)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  long lStack_90;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_3;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_107f68b54;
  puStack_a0 = &UNK_110a14c70;
  _objc_retain(param_6);
  lStack_98 = param_6;
  _objc_retain(param_7);
  ppuVar2 = &puStack_b8;
  lStack_90 = param_7;
  _objc_retainBlock();
  if ((((param_4 == 0) || (param_6 == 0)) || (param_7 == 0)) || (lVar1 == 0)) {
    (*(code *)ppuVar2[2])(ppuVar2,0,lVar1);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(param_4);
    _objc_retain(lVar1);
    _objc_retain(param_3);
    _objc_retain(ppuVar2);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(ppuVar2);
    _objc_release(param_3);
    _objc_release(lVar1);
    _objc_release(param_4);
  }
  _objc_release(ppuVar2);
  _objc_release(lStack_90);
  _objc_release(lStack_98);
  _objc_release(lVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107f68b54; end: 107f68c43;  */

void FUN_107f68b54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x28);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,param_2,param_3);
    }
  }
  else {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_107f68c44;
    puStack_50 = &UNK_11084a9e8;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    uStack_38 = uVar2;
    _objc_retain(param_2);
    uStack_48 = param_2;
    _objc_retain(param_3);
    uStack_40 = param_3;
    func_0x00010007380c(lVar1,&puStack_68);
    _objc_release(uStack_40);
    _objc_release(uStack_48);
    _objc_release(uStack_38);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107f68c44; end: 107f68c5f;  */

void FUN_107f68c44(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107f68c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))
              (lVar1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
    return;
  }
  return;
}



/* Entry: 107f68c60; end: 107f68f4b;  */

void FUN_107f68c60(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be43440(uVar2,param_2,*(undefined8 *)(param_1 + 0x28));
  if ((int)uVar2 != 0) {
    func_0x00010bddaea0(*(undefined8 *)(param_1 + 0x20));
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x38);
  func_0x00010b5fc690();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (iVar1 != 0) {
    _CACurrentMediaTime();
    func_0x00010c0df720(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
    _objc_release(puVar3);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126bfc40;
    func_0x00010bdc2a40(PTR_PTR_1126bfc40);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26dca0(uVar2);
    _objc_release(puVar3);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126bfbc8;
    func_0x00010bf586e0(PTR_PTR_1126bfbc8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cc1a0();
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
    puStack_80 = &uStack_88;
    uStack_88 = 0;
    uStack_78 = 0x3032000000;
    pcStack_70 = FUN_107f68f4c;
    uStack_68 = 0x107f68f5c;
    uStack_60 = 0;
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
    func_0x00010c11de00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_90,auStack_58);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar7);
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar8);
    uVar9 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar9);
    uVar10 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar10);
    uVar2 = uVar4;
    func_0x00010c134cc0(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puStack_80[5];
    puStack_80[5] = uVar2;
    _objc_release(uVar6);
    _objc_release(uVar5);
    func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_destroyWeak(auStack_90);
    __Block_object_dispose(&uStack_88,8);
    _objc_release(uStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  return;
}



/* Entry: 107f68f4c; end: 107f68f63;  */

void FUN_107f68f4c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107f68f64; end: 107f6902f;  */

void FUN_107f68f64(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 8);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
    _objc_release();
    if (lVar2 == lVar3) {
      func_0x00010be59b80(lVar1);
      func_0x00010c1d0640(*(undefined8 *)(lVar1 + 8));
      (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
                (*(long *)(param_1 + 0x38),param_2,*(undefined8 *)(param_1 + 0x28));
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107f69030; end: 107f69033; -[SCGallerySnapThumbnailGenerator cancel:] */

void FUN_107f69030(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddaeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cancelThumbnailRequestIfNeeded__112554548);
  return;
}



/* Entry: 107f69034; end: 107f6912b; -[SCGallerySnapThumbnailGenerator tracedSnapForStoryEditorThumbnailForGallerySnap:] */

void FUN_107f69034(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf8b0c0();
  _objc_retainAutoreleasedReturnValue();
  while (puVar1 != (undefined *)0x0) {
    puVar2 = param_3;
    func_0x00010bfdd120();
    _objc_release(puVar1);
    puVar4 = PTR_PTR_1126af4d0;
    if (((ulong)puVar2 & 1) != 0) break;
    puVar1 = param_3;
    func_0x00010bf8b0c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa72e0(puVar4,param_2,puVar1,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(puVar1);
    if (puVar4 == (undefined *)0x0) break;
    _objc_release(param_3);
    puVar1 = puVar4;
    func_0x00010bf8b0c0();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 107f6912c; end: 107f691c3; -[SCGallerySnapThumbnailGenerator _cancelThumbnailRequestIfNeeded:] */

void FUN_107f6912c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_107f691c4;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c0f88c0(uVar1,param_2,&puStack_60);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107f691c4; end: 107f69217;  */

void FUN_107f691c4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c0e00e0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),param_2,0,
                        *(undefined8 *)(param_1 + 0x28));
    func_0x00010bf2dba0(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107f69218; end: 107f6945b; -[SCGallerySnapThumbnailGenerator _logThumbnailLoadingEndWithIdentifier:snap:isSuccessful:isCached:isCancelled:] */

void FUN_107f69218(double param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  double dVar10;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 != 0) {
    if (param_5 == 0) {
      uVar9 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_5;
      func_0x00010c241220(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar3;
      func_0x00010c26dc40(uVar3,param_3,lVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(uVar3);
      lVar4 = param_5;
      func_0x00010b5fa088();
      iVar2 = (int)lVar4;
      func_0x00010b5fa4c8();
      ppuVar1 = &PTR____CFConstantStringClassReference_110db6dd8;
      if (iVar2 == 0) {
        ppuVar1 = &PTR____CFConstantStringClassReference_110de7678;
      }
      uVar3 = *(undefined8 *)(param_2 + 0x28);
      _objc_retain(ppuVar1);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28af60();
      _objc_release(ppuVar1);
      _objc_release(uVar3);
    }
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    func_0x00010c0e00e0(uVar3,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    dVar10 = param_1;
    _objc_release(uVar3);
    if (0.0 < param_1) {
      _CACurrentMediaTime();
      uVar3 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_5;
      func_0x00010b5fa088(param_5);
      lVar5 = param_5;
      func_0x00010b5fb758(param_5);
      lVar6 = param_5;
      FUN_107fdccc8(param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126bfc40;
      func_0x00010bdc2a40(PTR_PTR_1126bfc40);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = param_2;
      func_0x00010becbd20(param_2,param_3,param_4,param_6,param_8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b19e0(param_1,dVar10,uVar3,param_3,uVar9,lVar4,lVar5,lVar6,puVar7,lVar8);
      _objc_release(lVar8);
      _objc_release(puVar7);
      _objc_release(lVar6);
      _objc_release(uVar3);
    }
    func_0x00010c12d3e0(*(undefined8 *)(param_2 + 0x18),param_3,param_4);
    _objc_release(uVar9);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107f6945c; end: 107f694db; -[SCGallerySnapThumbnailGenerator _thumbnailResultForId:isSuccessful:isCancelled:] */

void FUN_107f6945c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bfc40;
  if (param_4 == 0) {
    if (param_5 == 0) {
      func_0x00010bdc1f80(PTR_PTR_1126bfc40);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bdc1f60();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x00010bdc1fa0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107f694dc; end: 107f69513; -[SCGallerySnapThumbnailGenerator _isRequestInProgressWithIdentifier:] */

bool FUN_107f694dc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0e00e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



/* Entry: 107f69514; end: 107f6958b; -[SCGallerySnapThumbnailGenerator .cxx_destruct] */

void FUN_107f69514(long param_1)

{
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



/* Entry: 107f6958c; end: 107f69647; -[SCMemoriesCRFeaturedStoryThumbnailGenerator initWithMemoriesCRFeaturedStory:targetSize:memoriesThumbnailLogger:] */

undefined1 *
FUN_107f6958c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fbd58;
  uStack_50 = param_3;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x40) = 0;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 107f69648; end: 107f697c7; -[SCMemoriesCRFeaturedStoryThumbnailGenerator startGeneratingUpdates] */

void FUN_107f69648(long param_1)

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
  
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x28) = 1;
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar1;
    _objc_release(uVar3);
    FUN_107f6ab68();
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_107f697c8;
    puStack_50 = &UNK_110842e18;
    lStack_48 = param_1;
    func_0x00010007380c();
    _objc_release(uVar3);
    _objc_initWeak(auStack_70,param_1);
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_78,auStack_70);
    puVar2 = puVar1;
    func_0x00010befa280();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar2;
    _objc_release(uVar3);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_70);
  }
  return;
}



/* Entry: 107f697c8; end: 107f697cf;  */

void FUN_107f697c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee2010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateThumbnail_1125961a8);
  return;
}



/* Entry: 107f697d0; end: 107f6980f;  */

void FUN_107f697d0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(char *)(param_1 + 0x28) == '\x01')) {
    func_0x00010bec4f40(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107f69810; end: 107f698af; -[SCMemoriesCRFeaturedStoryThumbnailGenerator stopGeneratingUpdates] */

void FUN_107f69810(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    *(undefined1 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0x7fffffffffffffff;
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d560();
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2e480();
    _objc_release(puVar1);
    *(undefined4 *)(param_1 + 0x40) = 0;
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 107f698b0; end: 107f69923; -[SCMemoriesCRFeaturedStoryThumbnailGenerator _updateThumbnail] */

void FUN_107f698b0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c0fa980();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  FUN_107f6aa78();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010bf529e0();
  uVar1 = 0x7fffffffffffffff;
  if (lVar2 != 0) {
    uVar1 = 0;
  }
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  func_0x00010be1c120(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 107f69924; end: 107f699a3; -[SCMemoriesCRFeaturedStoryThumbnailGenerator _storyThumbnailUpdateTimerDidFire] */

void FUN_107f69924(long param_1)

{
  if (*(int *)(param_1 + 0x40) != 0) {
    return;
  }
  FUN_107f6ab68();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010007380c();
  _objc_release(param_1);
  return;
}



/* Entry: 107f699a4; end: 107f699ab;  */

void FUN_107f699a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1c130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__generateThumbnail_1125649e8);
  return;
}



/* Entry: 107f699ac; end: 107f69a33; -[SCMemoriesCRFeaturedStoryThumbnailGenerator _generateThumbnail] */

void FUN_107f699ac(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c0fa980();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(ulong *)(param_1 + 0x38);
  if ((uVar3 != 0x7fffffffffffffff) && (uVar2 = uVar1, func_0x00010bf529e0(), uVar3 < uVar2)) {
    uVar3 = uVar1;
    func_0x00010c0dfd40(uVar1,param_2,*(undefined8 *)(param_1 + 0x38));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be1c260(param_1,param_2,uVar3);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f69a34; end: 107f69bdb; -[SCMemoriesCRFeaturedStoryThumbnailGenerator _generateThumbnailWithAsset:] */

void FUN_107f69a34(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = puVar4;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_107f69bdc;
    puStack_68 = &UNK_110841f80;
    lStack_60 = param_1;
    lStack_58 = lVar1;
    func_0x00010c0f7fc0();
    _objc_release(lVar2);
  }
  puVar3 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2e480();
  _objc_release(puVar3);
  _objc_initWeak(auStack_88,param_1);
  puVar3 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = puVar4;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_107f69c5c;
  puStack_a0 = &UNK_110a14d00;
  _objc_copyWeak(auStack_90,auStack_88);
  _objc_retain(param_3);
  puVar4 = puVar3;
  uStack_98 = param_3;
  FUN_107f6e0e0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),puVar3,param_3,0,
                &puStack_b8);
  *(int *)(param_1 + 0x40) = (int)puVar4;
  _objc_release(puVar3);
  _objc_release(uStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 107f69bdc; end: 107f69c5b;  */

void FUN_107f69bdc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x20) + 0x50;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c26dd20();
  _objc_release(lVar5);
  uVar3 = *(ulong *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c0fa980();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf529e0();
  if (uVar4 == 0) {
    lVar5 = 0;
  }
  else {
    uVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x38) + 1;
    uVar2 = 0;
    if (uVar4 != 0) {
      uVar2 = uVar1 / uVar4;
    }
    lVar5 = uVar1 - uVar2 * uVar4;
  }
  *(long *)(*(long *)(param_1 + 0x20) + 0x38) = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107f69c5c; end: 107f69d47;  */

void FUN_107f69c5c(long param_1,undefined8 param_2,int param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (((param_1 != 0) && (*(char *)(param_1 + 0x28) == '\x01')) &&
     (*(int *)(param_1 + 0x40) == param_3)) {
    lVar5 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c26dd20();
    _objc_release(lVar5);
    if ((param_4 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      uVar3 = *(ulong *)(param_1 + 8);
      func_0x00010c0fa980();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf529e0();
      if (uVar4 == 0) {
        lVar5 = 0;
      }
      else {
        uVar1 = *(long *)(param_1 + 0x38) + 1;
        uVar2 = 0;
        if (uVar4 != 0) {
          uVar2 = uVar1 / uVar4;
        }
        lVar5 = uVar1 - uVar2 * uVar4;
      }
      *(long *)(param_1 + 0x38) = lVar5;
      _objc_release(uVar3);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x48));
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107f69d48; end: 107f69d5f; -[SCMemoriesCRFeaturedStoryThumbnailGenerator delegate] */

void FUN_107f69d48(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f69d60; end: 107f69d6b; -[SCMemoriesCRFeaturedStoryThumbnailGenerator setDelegate:] */

void FUN_107f69d60(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 107f69d6c; end: 107f69dbb; -[SCMemoriesCRFeaturedStoryThumbnailGenerator .cxx_destruct] */

void FUN_107f69d6c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x50);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f69dbc; end: 107f69e2f; -[SCMemoriesCRFeaturedStoryThumbnailGeneratorBuilder initWithMemoriesThumbnailLogger:] */

undefined1 * FUN_107f69dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fbd60;
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



/* Entry: 107f69e30; end: 107f69ea3; -[SCMemoriesCRFeaturedStoryThumbnailGeneratorBuilder buildWithMemoriesCRFeaturedStory:targetSize:] */

void FUN_107f69e30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d87d0;
  _objc_retain(param_5);
  _objc_alloc(puVar1);
  func_0x00010c02a400(param_1,param_2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107f69ea4; end: 107f69eaf; -[SCMemoriesCRFeaturedStoryThumbnailGeneratorBuilder .cxx_destruct] */

void FUN_107f69ea4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f69eb0; end: 107f69f67; -[SCMemoriesChatMediaFeaturedStoryThumbnailGenerator initWithMemoriesChatMediaFeaturedStory:targetSize:chatMediaFetcher:] */

undefined1 *
FUN_107f69eb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fbd68;
  uStack_50 = param_3;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 107f69f68; end: 107f6a0cf; -[SCMemoriesChatMediaFeaturedStoryThumbnailGenerator startGeneratingUpdates] */

void FUN_107f69f68(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0c58c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar6 = uVar1;
  func_0x00010c125c20();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar6;
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 107f6a0d0; end: 107f6a117;  */

void FUN_107f6a0d0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8fb00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107f6a118; end: 107f6a11f; -[SCMemoriesChatMediaFeaturedStoryThumbnailGenerator stopGeneratingUpdates] */

void FUN_107f6a118(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 107f6a120; end: 107f6a1ef; -[SCMemoriesChatMediaFeaturedStoryThumbnailGenerator _reportImageOnMainThread:] */

void FUN_107f6a120(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_107f6a1f0;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 107f6a1f0; end: 107f6a247;  */

void FUN_107f6a1f0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c26dd00();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107f6a248; end: 107f6a25f; -[SCMemoriesChatMediaFeaturedStoryThumbnailGenerator delegate] */

void FUN_107f6a248(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f6a260; end: 107f6a26b; -[SCMemoriesChatMediaFeaturedStoryThumbnailGenerator setDelegate:] */

void FUN_107f6a260(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 107f6a26c; end: 107f6a2af; -[SCMemoriesChatMediaFeaturedStoryThumbnailGenerator .cxx_destruct] */

void FUN_107f6a26c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f6a2b0; end: 107f6a323; -[SCMemoriesChatMediaFeaturedStoryThumbnailGeneratorBuilder initWithChatMediaFetcher:] */

undefined1 * FUN_107f6a2b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fbd70;
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



/* Entry: 107f6a324; end: 107f6a397; -[SCMemoriesChatMediaFeaturedStoryThumbnailGeneratorBuilder buildWithChatMediaFeaturedStory:targetSize:] */

void FUN_107f6a324(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d87d8;
  _objc_retain(param_5);
  _objc_alloc(puVar1);
  func_0x00010c02a4e0(param_1,param_2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107f6a398; end: 107f6a3a3; -[SCMemoriesChatMediaFeaturedStoryThumbnailGeneratorBuilder .cxx_destruct] */

void FUN_107f6a398(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f6a3a4; end: 107f6a4c7; -[SCMemoriesEntryThumbnailGeneratorBuilderImpl initWithEncryptedContentManager:memoriesThumbnailLogger:cachingMediaManager:memoriesMergedDataSource:circumstanceEngine:] */

undefined1 *
FUN_107f6a3a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126fbd78;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
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
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f6a4c8; end: 107f6a567; -[SCMemoriesEntryThumbnailGeneratorBuilderImpl buildWithEntry:shouldShowLoadingSpinner:targetSize:generationContext:] */

void FUN_107f6a4c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cfb20;
  _objc_retain(param_5);
  _objc_alloc(puVar1);
  func_0x00010c010200(param_1,param_2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107f6a568; end: 107f6a5bb; -[SCMemoriesEntryThumbnailGeneratorBuilderImpl .cxx_destruct] */

void FUN_107f6a568(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f6a5bc; end: 107f6a6df; -[SCMemoriesSnapThumbnailGeneratorBuilderImpl initWithEncryptedContentManager:memoriesThumbnailLogger:cachingMediaManager:dataObjectContext:circumstanceEngine:] */

undefined1 *
FUN_107f6a5bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126fbd80;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
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
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f6a6e0; end: 107f6a717; -[SCMemoriesSnapThumbnailGeneratorBuilderImpl build] */

void FUN_107f6a6e0(void)

{
  _objc_alloc(PTR_PTR_1126d87e0);
  func_0x00010c00fc80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


