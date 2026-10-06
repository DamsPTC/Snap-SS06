/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107d8e6f8; end: 107d8e937; -[SCMemoriesPreviewVideoActivityItemGenerator initWithPreviewVideoFilter:previewConfiguration:outputUrl:] */

undefined1 *
FUN_107d8e6f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  uVar7 = (undefined4)((ulong)param_1 >> 0x20);
  fVar6 = (float)param_1;
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fb010;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c2440e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8b160();
    if (fVar6 == 0.0) {
      func_0x00010bfe75c0(*(undefined8 *)((long)puVar1 + 8));
      fVar6 = (float)(double)CONCAT44(uVar7,fVar6);
    }
    *(float *)((long)puVar1 + 0x28) = fVar6;
    _objc_release(uVar5);
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010bf59960();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010bf313a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c29a1e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar5);
    uVar2 = param_5;
    func_0x00010c26fea0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar5);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107d8e938; end: 107d8ea7b; -[SCMemoriesPreviewVideoActivityItemGenerator generateItemForActivityType:] */

void FUN_107d8e938(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  func_0x00010c1a8660(*(undefined8 *)(param_1 + 8));
  func_0x00010c1f5d00(*(undefined8 *)(param_1 + 8));
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107d8ea7c;
  puStack_58 = &UNK_1108dd2b8;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c1e4740(*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010bfae7c0(*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),uVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 107d8ea7c; end: 107d8eab7;  */

void FUN_107d8ea7c(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained(param_2);
  func_0x00010bede000(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d8eab8; end: 107d8eb3f;  */

void FUN_107d8eab8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c28f340(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bee8b00(param_1);
  _objc_release(param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d8eb40; end: 107d8eb87; -[SCMemoriesPreviewVideoActivityItemGenerator _updateProgress:] */

void FUN_107d8eb40(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef1720(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d8eb88; end: 107d8eeb7; -[SCMemoriesPreviewVideoActivityItemGenerator _videoCompletedWithUrl:error:] */

void FUN_107d8eb88(undefined *param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *unaff_x24;
  undefined **ppuStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar7 = PTR_PTR_1126d7cb8;
  puVar1 = param_1;
  puVar2 = param_1;
  puVar3 = param_1;
  if (param_4 == (undefined *)0x0) {
    if (param_3 == 0) {
      ppuStack_68 = &PTR____CFConstantStringClassReference_110ec97f8;
      puStack_60 = PTR____kCFBooleanTrue_11034ab68;
      unaff_x24 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99380();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x24);
      param_4 = puVar7;
      goto LAB_107d8ebd4;
    }
    lVar4 = param_3;
    func_0x00010c071ae0();
    if ((int)lVar4 != 0) {
      param_4 = param_1;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = *(undefined **)(param_1 + 0x10);
      func_0x00010c0844e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef1700(param_4);
      puVar8 = puVar1;
      goto LAB_107d8ec1c;
    }
    puVar7 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = (undefined *)0x0;
    puVar8 = puVar7;
    func_0x00010c0d1580();
    param_4 = puStack_80;
    _objc_retain(puStack_80);
    _objc_release(puVar7);
    puVar1 = PTR_PTR_1126d7cb8;
    if ((int)puVar8 == 0) {
      ppuStack_78 = &PTR____CFConstantStringClassReference_110ec97f8;
      puStack_70 = PTR____kCFBooleanTrue_11034ab68;
      puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99380();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = param_1;
      func_0x00010c0844e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef16e0(puVar2);
      _objc_release(unaff_x24);
      puVar8 = puVar2;
    }
    else {
      puVar1 = param_1;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = *(undefined **)(param_1 + 0x10);
      func_0x00010c0844e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef1700(puVar1);
      unaff_x24 = puVar2;
    }
  }
  else {
LAB_107d8ebd4:
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0844e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef16e0(puVar1);
    puVar8 = puVar2;
  }
  _objc_release(puVar2);
  puVar7 = puVar1;
LAB_107d8ec1c:
  _objc_release(puVar1);
  _objc_release(param_4);
  lVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_107d8eeb8;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_c0 = unaff_x24;
  puStack_b8 = puVar8;
  puStack_b0 = puVar7;
  puStack_a8 = param_4;
  puStack_a0 = param_1;
  lStack_98 = param_3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  puVar7 = PTR_PTR_1126d7cb8;
  if (puVar3 != (undefined *)0x0) {
    lVar4 = *(long *)(lVar4 + 0x18);
    if (lVar4 == 0) {
      ppuStack_d8 = &PTR____CFConstantStringClassReference_110ec97f8;
      puStack_d0 = PTR____kCFBooleanTrue_11034ab68;
      puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,0,&puStack_d0,&ppuStack_d8,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99380(puVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar1);
      pcVar5 = *(code **)(puVar3 + 0x10);
      lVar4 = 0;
    }
    else {
      pcVar5 = *(code **)(puVar3 + 0x10);
    }
    (*pcVar5)(puVar3,lVar4,0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
    ___stack_chk_fail();
    uVar6 = *(undefined8 *)(puVar3 + 0x20);
    _objc_retain(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
    return;
  }
  return;
}



/* Entry: 107d8eeb8; end: 107d8efdf; -[SCMemoriesPreviewVideoActivityItemGenerator generateThumbnailForExport:] */

void FUN_107d8eeb8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d7cb8;
  if (param_3 != 0) {
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 == 0) {
      ppuStack_58 = &PTR____CFConstantStringClassReference_110ec97f8;
      puStack_50 = PTR____kCFBooleanTrue_11034ab68;
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,0,&puStack_50,&ppuStack_58,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99380(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar2);
      pcVar4 = *(code **)(param_3 + 0x10);
      lVar3 = 0;
    }
    else {
      pcVar4 = *(code **)(param_3 + 0x10);
    }
    (*pcVar4)(param_3,lVar3,0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 107d8efe0; end: 107d8f007; -[SCMemoriesPreviewVideoActivityItemGenerator itemId] */

void FUN_107d8efe0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d8f008; end: 107d8f013; -[SCMemoriesPreviewVideoActivityItemGenerator itemDuration] */

long FUN_107d8f008(long param_1)

{
  return (long)*(float *)(param_1 + 0x28);
}



/* Entry: 107d8f014; end: 107d8f063; -[SCMemoriesPreviewVideoActivityItemGenerator estimatedMediaSize] */

long FUN_107d8f014(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  
  lVar1 = *(long *)(param_2 + 8);
  func_0x00010bf1c7c0(lVar1);
  func_0x00010bfe75c0(*(undefined8 *)(param_2 + 8));
  dVar2 = (double)NEON_ucvtf((long)param_1);
  return (long)((double)lVar1 * 0.15 * dVar2);
}



/* Entry: 107d8f064; end: 107d8f06b; -[SCMemoriesPreviewVideoActivityItemGenerator cancel] */

void FUN_107d8f064(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2ebd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_cancelProcessing_1125a9498);
  return;
}



/* Entry: 107d8f06c; end: 107d8f093; -[SCMemoriesPreviewVideoActivityItemGenerator primarySortDate] */

void FUN_107d8f06c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d8f094; end: 107d8f0bb; -[SCMemoriesPreviewVideoActivityItemGenerator secondarySortDate] */

void FUN_107d8f094(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d8f0bc; end: 107d8f0d3; -[SCMemoriesPreviewVideoActivityItemGenerator delegate] */

void FUN_107d8f0bc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d8f0d4; end: 107d8f0df; -[SCMemoriesPreviewVideoActivityItemGenerator setDelegate:] */

void FUN_107d8f0d4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 107d8f0e0; end: 107d8f153; -[SCMemoriesPreviewVideoActivityItemGenerator .cxx_destruct] */

void FUN_107d8f0e0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x48);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d8f154; end: 107d8f2d7; -[SCMemoriesVideoSnapActivityItemGenerator initWithGallerySnap:dataObjectContext:cachingMediaManager:snapVideoFilterScopeExposer:memoriesCloudFS:memoriesTranscodingHelper:circumstanceEngine:] */

undefined1 *
FUN_107d8f154(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

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
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126fb018;
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
    puVar3 = PTR_PTR_1126d7cb0;
    _objc_alloc();
    func_0x00010c017120();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_6);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d8f2d8; end: 107d8f2df; -[SCMemoriesVideoSnapActivityItemGenerator itemId] */

void FUN_107d8f2d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 107d8f2e0; end: 107d8f31b; -[SCMemoriesVideoSnapActivityItemGenerator itemDuration] */

long FUN_107d8f2e0(float param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_2 + 8);
  func_0x00010bfed740();
  if ((uVar1 & 1) == 0) {
    func_0x00010bf8b160(*(undefined8 *)(param_2 + 8));
    lVar2 = (long)param_1;
  }
  else {
    lVar2 = 0;
  }
  return lVar2;
}



/* Entry: 107d8f31c; end: 107d8f323; -[SCMemoriesVideoSnapActivityItemGenerator primarySortDate] */

void FUN_107d8f31c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf59970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_createTimeUtc_1125b4000)
  ;
  return;
}



/* Entry: 107d8f324; end: 107d8f32b; -[SCMemoriesVideoSnapActivityItemGenerator secondarySortDate] */

void FUN_107d8f324(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf313b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_captureTimeUtc_1125a9e90);
  return;
}



/* Entry: 107d8f32c; end: 107d8f337; -[SCMemoriesVideoSnapActivityItemGenerator estimatedMediaSize] */

long FUN_107d8f32c(float param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar4;
  
  uVar1 = *(ulong *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  _objc_retain();
  _objc_retain(uVar2);
  uVar4 = uVar1;
  func_0x00010b5fa088();
  iVar3 = (int)uVar4;
  func_0x00010b5fa4c8();
  if (iVar3 == 0) {
    uVar4 = uVar1;
    func_0x00010b5fa088();
    lVar8 = 0;
    if ((uVar4 < 0xd) && ((1L << (uVar4 & 0x3f) & 0x1566U) != 0)) {
      uVar4 = uVar1;
      func_0x00010c2a5040(uVar1);
      lVar8 = (long)(int)uVar4;
      uVar4 = uVar1;
      func_0x00010bfe0640(uVar1);
      func_0x00010bf8b160(uVar1);
      FUN_107f72b24(lVar8,(long)(int)uVar4,(long)param_1);
    }
    goto LAB_107f72afc;
  }
  puVar5 = PTR_PTR_1126bc7b8;
  func_0x00010bfa7160(PTR_PTR_1126bc7b8);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126bfb98;
  puVar6 = puVar5;
  func_0x00010c0ef4a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b580();
  if (((ulong)puVar7 & 1) == 0) {
    uVar4 = uVar1;
    func_0x00010b697ae8(uVar1,2);
    _objc_release(puVar6);
    if ((uVar4 & 1) != 0) goto LAB_107f72a9c;
    uVar4 = uVar1;
    func_0x00010c2a5040(uVar1);
    lVar8 = (long)(int)uVar4;
    uVar4 = uVar1;
    func_0x00010bfe0640(uVar1);
    func_0x000107f72bcc(lVar8,(long)(int)uVar4);
  }
  else {
    _objc_release(puVar6);
LAB_107f72a9c:
    uVar4 = uVar1;
    func_0x00010c2a5040(uVar1);
    lVar8 = (long)(int)uVar4;
    uVar4 = uVar1;
    func_0x00010bfe0640(uVar1);
    func_0x00010bf8b160(uVar1);
    FUN_107f72b24(lVar8,(long)(int)uVar4,(long)param_1);
  }
  _objc_release(puVar5);
LAB_107f72afc:
  _objc_release(uVar2);
  _objc_release(uVar1);
  return lVar8;
}



/* Entry: 107d8f338; end: 107d8f467; -[SCMemoriesVideoSnapActivityItemGenerator generateItemForActivityType:] */

void FUN_107d8f338(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c13a8c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107d8f468;
  puStack_60 = &UNK_11084b7a0;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(uVar2);
  uStack_58 = uVar2;
  FUN_107f723ec(uVar2,param_1,uVar1,&PTR____CFConstantStringClassReference_110ec96b8,&puStack_78);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 107d8f468; end: 107d8f4a3;  */

void FUN_107d8f468(long param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be1b400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107d8f4a4; end: 107d8f4eb; -[SCMemoriesVideoSnapActivityItemGenerator _updateProgress:] */

void FUN_107d8f4a4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef1720(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d8f4ec; end: 107d8f60f; -[SCMemoriesVideoSnapActivityItemGenerator _generatedItem:error:] */

void FUN_107d8f4ec(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = param_1;
  if (param_4 == 0) {
    if (param_3 == 0) goto LAB_107d8f5f0;
    puVar2 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0844e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef1700(puVar2,param_2,param_1,param_3,puVar3);
  }
  else {
    puVar2 = PTR_PTR_1126d7cb8;
    func_0x00010bf99380(PTR_PTR_1126d7cb8,param_2,&PTR____CFConstantStringClassReference_110ec96b8,
                        &PTR____CFConstantStringClassReference_110ec9798,param_4,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    func_0x00010c0844e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef16e0(puVar3,param_2,param_1,puVar2,puVar1);
    _objc_release(puVar1);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
LAB_107d8f5f0:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d8f610; end: 107d8f8d7; -[SCMemoriesVideoSnapActivityItemGenerator _generateItemWithCloudFile:] */

void FUN_107d8f610(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010c06cde0();
  if ((int)uVar4 != 0) {
    puVar1 = PTR_PTR_1126c4288;
    func_0x00010b68eef4();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 != (undefined *)0x0) {
      puVar1[0x1b] = 1;
      _objc_retain(puVar1);
    }
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010b68f1bc(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0c9fa0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf59960(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c185360(*(undefined8 *)(param_1 + 0x20));
    _objc_release(uVar4);
    _objc_initWeak(auStack_78,param_1);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_107d8f8d8;
    puStack_88 = &UNK_1108dd2b8;
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x00010c1e4740(*(undefined8 *)(param_1 + 0x20));
    puVar3 = PTR_PTR_1126cf9c0;
    _objc_alloc(PTR_PTR_1126cf9c0);
    _objc_retain(PTR___dispatch_main_q_11034be20);
    func_0x00010c048b00(puVar3);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_initWeak(auStack_a8,puVar3);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    _objc_copyWeak(auStack_b8,auStack_a8);
    _objc_copyWeak(auStack_b0,auStack_78);
    func_0x00010c17fb20(puVar3);
    func_0x00010bf9d620(param_1);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_b8);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_a8);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107d8f8d8; end: 107d8f913;  */

void FUN_107d8f8d8(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained(param_2);
  func_0x00010bede000(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d8f914; end: 107d8f9c3;  */

void FUN_107d8f914(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c12e1e0(uVar2,param_2,lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be1c500();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d8f9c4; end: 107d8f9d3; -[SCMemoriesVideoSnapActivityItemGenerator generateThumbnailForExport:] */

void FUN_107d8f9c4(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c136ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x18),PTR_s_requestThumbnailForExporting__11262b4d0);
    return;
  }
  return;
}



/* Entry: 107d8f9d4; end: 107d8f9db; -[SCMemoriesVideoSnapActivityItemGenerator cancel] */

void FUN_107d8f9d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2ebd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_cancelProcessing_1125a9498);
  return;
}



/* Entry: 107d8f9dc; end: 107d8f9f3; -[SCMemoriesVideoSnapActivityItemGenerator delegate] */

void FUN_107d8f9dc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d8f9f4; end: 107d8f9ff; -[SCMemoriesVideoSnapActivityItemGenerator setDelegate:] */

void FUN_107d8f9f4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 107d8fa00; end: 107d8fa6f; -[SCMemoriesVideoSnapActivityItemGenerator .cxx_destruct] */

void FUN_107d8fa00(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d8fa70; end: 107d8fa97;  */

undefined ** FUN_107d8fa70(long param_1)

{
  if (param_1 - 1U < 0x15) {
    return (undefined **)(&PTR_PTR_110a0c1e8)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110db6c78;
}



/* Entry: 107d8fa98; end: 107d8fb77; +[SCGalleryExportLogger markExportStart:exportSessionId:numberOfSnaps:grapheneRegistry:] */

void FUN_107d8fa98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  uVar1 = param_6;
  _objc_retain(param_6);
  func_0x000107d92928();
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107d8fb78;
  puStack_70 = &UNK_1108714c0;
  uStack_68 = param_4;
  uStack_60 = param_6;
  uStack_58 = param_1;
  uStack_50 = param_3;
  uStack_48 = param_5;
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_88);
  _objc_release(uVar1);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 107d8fb78; end: 107d8fbd7;  */

void FUN_107d8fb78(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_opt_class(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  FUN_107d8fa70(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5d3e0(uVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x40),0,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107d8fbd8; end: 107d8fccf; +[SCGalleryExportLogger markExportStart:exportSessionId:grapheneRegistry:] */

void FUN_107d8fbd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_5;
  _objc_retain(param_5);
  func_0x000107d92928();
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107d8fcd0;
  puStack_68 = &UNK_11084d788;
  uStack_60 = param_3;
  uStack_58 = param_4;
  uStack_50 = param_5;
  uStack_48 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(uVar1);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107d8fcd0; end: 107d8fd63;  */

void FUN_107d8fcd0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfb1920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2917c0();
  FUN_107d8fa70();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010be20e20(*(undefined8 *)(param_1 + 0x38),param_2,*(undefined8 *)(param_1 + 0x20));
  func_0x00010be20e40(*(undefined8 *)(param_1 + 0x38),param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_opt_class(*(undefined8 *)(param_1 + 0x38));
  func_0x00010be5d3e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107d8fd64; end: 107d8ffe7; +[SCGalleryExportLogger didCompleteExportWithSessionId:memSessionId:currentMemoriesTab:contextActionSource:numberOfSnaps:success:errorType:errorSource:cancelled:galleryEntryType:saveToCameraRoll:collectionCategory:exportContext:exportMatchId:inputSource:userTrackedLogger:grapheneRegistry:] */

void FUN_107d8fd64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
                  undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 uVar1;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  uVar1 = param_20;
  _objc_retain(param_20);
  func_0x000107d92928();
  _objc_retainAutoreleasedReturnValue();
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_107d8ffe8;
  puStack_e8 = &UNK_110a0c128;
  uStack_d0 = param_9;
  uStack_c8 = param_10;
  uStack_6b = param_11;
  uStack_6a = param_13;
  uStack_70 = param_12;
  uStack_c0 = param_15;
  uStack_b8 = param_16;
  uStack_b0 = param_17;
  uStack_a8 = param_18;
  uStack_a0 = param_19;
  uStack_98 = param_20;
  uStack_e0 = param_3;
  uStack_d8 = param_4;
  uStack_90 = param_1;
  uStack_88 = param_5;
  uStack_80 = param_7;
  uStack_78 = param_6;
  uStack_6c = param_8;
  _objc_retain(param_20);
  _objc_retain(param_19);
  _objc_retain(param_18);
  _objc_retain(param_17);
  _objc_retain(param_16);
  _objc_retain(param_15);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_100);
  _objc_release(uVar1);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107d8ffe8; end: 107d90093;  */

void FUN_107d8ffe8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  _objc_opt_class(uVar5);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010b5f57a8();
  func_0x00010bdfcce0(uVar5,param_2,uVar1,uVar3,uVar2,uVar4,0,0,0);
  return;
}



/* Entry: 107d90094; end: 107d904cb; +[SCGalleryExportLogger didCompleteExportWithSessionId:memSessionId:currentMemoriesTab:itemProviders:success:errorType:errorSource:cancelled:saveToCameraRoll:activityType:userTrackedLogger:dataObjectContext:grapheneRegistry:] */

void FUN_107d90094(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 uVar1;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  uVar1 = param_15;
  _objc_retain(param_15);
  func_0x000107d92928();
  _objc_retainAutoreleasedReturnValue();
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x107d902b4;
  puStack_d0 = &UNK_110a0c158;
  uStack_b8 = param_12;
  uStack_b0 = param_14;
  uStack_6f = param_10;
  uStack_98 = param_9;
  uStack_90 = param_13;
  uStack_88 = param_15;
  uStack_c8 = param_3;
  uStack_c0 = param_6;
  uStack_a8 = param_4;
  uStack_a0 = param_8;
  uStack_80 = param_1;
  uStack_78 = param_5;
  uStack_70 = param_7;
  _objc_retain(param_15);
  _objc_retain(param_13);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_4);
  _objc_retain(param_14);
  _objc_retain(param_12);
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_e8);
  _objc_release(uVar1);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(param_15);
  _objc_release(param_13);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(param_14);
  _objc_release(param_12);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 107d904cc; end: 107d904d7; +[SCGalleryExportLogger logExportLowDiskSpaceErrorWithGrapheneRegistry:] */

void FUN_107d904cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb0230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b24e0,PTR_s_fireGalleryExportLowDiskSpaceWit_1125c9a30);
  return;
}



/* Entry: 107d904d8; end: 107d90b27; +[SCGalleryExportLogger exportItemWithItemProvider:shareChannel:dataObjectContext:currentGalleryTab:userTrackedLogger:spectaclesAppLogger:] */

void FUN_107d904d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  uVar1 = param_8;
  _objc_retain(param_8);
  func_0x000107d92928();
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  uStack_98 = 0x107d9062c;
  puStack_90 = &UNK_1108a4fb0;
  uStack_88 = param_3;
  uStack_80 = param_4;
  uStack_78 = param_7;
  uStack_70 = param_8;
  uStack_68 = param_5;
  uStack_60 = param_1;
  uStack_58 = param_6;
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_a8);
  _objc_release(uVar1);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(param_5);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107d90b28; end: 107d90bf7; +[SCGalleryExportLogger _markExportStart:exportSessionId:numberOfSnaps:numberOfStories:grapheneRegistry:] */

void FUN_107d90b28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b24e0;
  _objc_retain(param_4);
  func_0x00010bfb0240(puVar1,param_2,param_3,param_5,param_6,param_7);
  puVar1 = PTR_PTR_1126d7cc8;
  func_0x00010c22b6a0(PTR_PTR_1126d7cc8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010bfbcd60(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24f0e0(puVar1,param_2,puVar3,param_4);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107d90bf8; end: 107d90fcb; +[SCGalleryExportLogger _didCompleteExportWithSessionId:memSessionId:currentMemoriesTab:numberOfSnaps:numberOfStories:contents:isSaveAsVideo:contextMenuSource:success:errorType:errorSource:cancelled:saveToCameraRoll:hasSpectacles:galleryEntryType:collectionCategory:exportContext:exportMatchId:inputSource:userTrackedLogger:grapheneRegistry:] */

void FUN_107d90bf8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  byte in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  byte in_stack_00000028;
  undefined4 in_stack_0000002c;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  _objc_retain(param_9);
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000030);
  _objc_retain(in_stack_00000048);
  puVar1 = PTR_PTR_1126d7cc8;
  _objc_retain(in_stack_00000058);
  _objc_retain(in_stack_00000050);
  _objc_retain(in_stack_00000040);
  _objc_retain(in_stack_00000038);
  _objc_retain(in_stack_00000018);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010bfbcd60(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94ba0(puVar1);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010bfb0200(param_1,PTR_PTR_1126b24e0);
  _objc_release(in_stack_00000058);
  _objc_release(in_stack_00000018);
  puVar1 = PTR_PTR_1126d7cd0;
  _objc_opt_new(PTR_PTR_1126d7cd0);
  func_0x00010c20cda0();
  func_0x00010c203cc0(puVar1);
  func_0x00010c1b92e0(puVar1);
  func_0x00010c1b40c0(puVar1);
  func_0x00010c1a1aa0(puVar1);
  func_0x00010c198fa0(puVar1);
  func_0x00010c198ee0(puVar1);
  if ((((in_stack_00000010 & 1) == 0) && (in_stack_00000020 != 0)) && ((in_stack_00000028 & 1) == 0)
     ) {
    func_0x00010c1971a0(puVar1);
  }
  if (param_9 != 0) {
    lVar4 = param_9;
    func_0x00010bf6e340(param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c181b40(puVar1);
    _objc_release(lVar4);
  }
  func_0x00010c1a6e40(puVar1);
  func_0x000108dfcb04(in_stack_0000002c);
  func_0x00010c196b80(puVar1);
  lVar4 = in_stack_00000030;
  func_0x00010c08fa60();
  if (lVar4 != 0) {
    func_0x00010c1a1a00(puVar1);
  }
  func_0x00010c198ec0(puVar1);
  _objc_release(in_stack_00000038);
  func_0x00010c198f20(puVar1);
  _objc_release(in_stack_00000040);
  if (in_stack_00000048 == 0) {
    uVar5 = param_6;
    FUN_107fdcaa8(param_6);
    func_0x0001008cc2b4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ad640(puVar1);
    _objc_release(uVar5);
  }
  else {
    func_0x00010c1ad640(puVar1);
  }
  func_0x00010c1c58e0(puVar1);
  func_0x000108dfcaa4(param_6);
  func_0x00010c1d84e0(puVar1);
  uVar5 = in_stack_00000050;
  func_0x00010c269d40(in_stack_00000050);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar5);
  FUN_107d9fdf0(param_1 * 1000.0,9,param_5,in_stack_00000050);
  _objc_release(in_stack_00000050);
  _objc_release(param_5);
  _objc_release(puVar1);
  _objc_release(in_stack_00000048);
  _objc_release(in_stack_00000030);
  _objc_release(in_stack_00000020);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_9);
  return;
}



/* Entry: 107d90fcc; end: 107d910d3; +[SCGalleryExportLogger _getNumberOfSnapsFromItems:] */

undefined ** FUN_107d90fcc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined1 *puVar13;
  undefined **ppuVar14;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  ulong uVar15;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *unaff_x26;
  long lVar18;
  undefined8 *unaff_x27;
  ulong uVar19;
  undefined8 *unaff_x28;
  undefined8 uStack_6a0;
  long lStack_698;
  long *plStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  long lStack_658;
  long *plStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined1 auStack_620 [128];
  undefined1 auStack_5a0 [128];
  long lStack_520;
  undefined8 *puStack_510;
  undefined8 *puStack_508;
  undefined8 *puStack_500;
  undefined8 *puStack_4f8;
  undefined8 *puStack_4f0;
  undefined8 *puStack_4e8;
  undefined8 *puStack_4e0;
  undefined **ppuStack_4d8;
  undefined8 *puStack_4d0;
  undefined8 *puStack_4c8;
  undefined8 ***pppuStack_4c0;
  code *pcStack_4b8;
  undefined **ppuStack_4b0;
  undefined8 *puStack_4a8;
  undefined8 uStack_4a0;
  long lStack_498;
  undefined8 *puStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  long lStack_3e0;
  undefined8 *puStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 *puStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 *puStack_3a0;
  undefined **ppuStack_398;
  undefined **ppuStack_390;
  undefined1 *puStack_388;
  undefined1 ***pppuStack_380;
  code *pcStack_378;
  undefined8 *puStack_370;
  undefined **ppuStack_368;
  undefined1 *puStack_360;
  undefined **ppuStack_358;
  undefined8 uStack_350;
  long lStack_348;
  long *plStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 auStack_310 [16];
  long lStack_290;
  undefined1 **ppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  long lStack_218;
  undefined8 *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_158;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar16 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  puStack_100 = (undefined8 *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  puVar3 = param_3;
  func_0x00010bf52a60();
  if (puVar3 == (undefined8 *)0x0) {
    ppuVar12 = (undefined **)0x0;
  }
  else {
    ppuVar12 = (undefined **)0x0;
    unaff_x22 = (undefined8 *)*puStack_100;
    do {
      unaff_x23 = (undefined8 *)0x0;
      do {
        if ((undefined8 *)*puStack_100 != unaff_x22) {
          _objc_enumerationMutation(param_3);
        }
        uVar1 = (uint)*(undefined8 *)(lStack_108 + (long)unaff_x23 * 8);
        func_0x00010c07fbc0();
        ppuVar12 = (undefined **)((long)ppuVar12 + (ulong)(uVar1 ^ 1));
        unaff_x23 = (undefined8 *)((long)unaff_x23 + 1);
      } while (puVar3 != unaff_x23);
      puVar3 = param_3;
      puVar16 = &uStack_110;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined8 *)0x0);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar12;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_220;
  pcStack_118 = FUN_107d910d4;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_retain(puVar16);
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  puStack_210 = (undefined8 *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  puVar3 = puVar16;
  func_0x00010bf52a60();
  if (puVar3 == (undefined8 *)0x0) {
    ppuVar12 = (undefined **)0x0;
  }
  else {
    ppuVar12 = (undefined **)0x0;
    unaff_x22 = (undefined8 *)*puStack_210;
    do {
      unaff_x23 = (undefined8 *)0x0;
      do {
        if ((undefined8 *)*puStack_210 != unaff_x22) {
          _objc_enumerationMutation(puVar16);
        }
        uVar4 = *(ulong *)(lStack_218 + (long)unaff_x23 * 8);
        func_0x00010c07fbc0();
        ppuVar12 = (undefined **)((long)ppuVar12 + (uVar4 & 0xffffffff));
        unaff_x23 = (undefined8 *)((long)unaff_x23 + 1);
      } while (puVar3 != unaff_x23);
      puVar3 = puVar16;
      puVar5 = &uStack_220;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined8 *)0x0);
  }
  _objc_release(puVar16);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return ppuVar12;
  }
  ___stack_chk_fail();
  pcStack_228 = FUN_107d911d8;
  lStack_290 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_230 = &puStack_120;
  _objc_retain(puVar5);
  ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  plStack_340 = (long *)0x0;
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  ppuStack_358 = ppuVar12;
  _objc_retain(puVar5);
  puVar3 = &uStack_350;
  puVar16 = auStack_310;
  puStack_360 = (undefined1 *)puVar5;
  func_0x00010bf52a60();
  if (puVar5 != (undefined8 *)0x0) {
    lVar11 = *plStack_340;
    ppuStack_368 = &PTR____CFConstantStringClassReference_110dba818;
    do {
      puVar13 = (undefined1 *)0x0;
      do {
        if (*plStack_340 != lVar11) {
          _objc_enumerationMutation(puStack_360);
        }
        puVar6 = PTR_PTR_1126d7c90;
        puVar16 = *(undefined8 **)(lStack_348 + (long)puVar13 * 8);
        _objc_retain(puVar16);
        _objc_opt_class(puVar6);
        puVar3 = puVar16;
        _objc_opt_isKindOfClass(puVar16,puVar6);
        unaff_x28 = puVar16;
        if (((ulong)puVar3 & 1) == 0) {
          unaff_x28 = (undefined8 *)0x0;
        }
        _objc_retain(unaff_x28);
        _objc_release(puVar16);
        puVar6 = PTR_PTR_1126d7c88;
        _objc_retain(puVar16);
        _objc_opt_class(puVar6);
        puVar3 = puVar16;
        _objc_opt_isKindOfClass(puVar16,puVar6);
        unaff_x22 = puVar16;
        if (((ulong)puVar3 & 1) == 0) {
          unaff_x22 = (undefined8 *)0x0;
        }
        _objc_retain(unaff_x22);
        _objc_release(puVar16);
        puVar6 = PTR_PTR_1126d7cc0;
        _objc_retain(puVar16);
        _objc_opt_class(puVar6);
        puVar3 = puVar16;
        _objc_opt_isKindOfClass(puVar16,puVar6);
        unaff_x24 = puVar16;
        if (((ulong)puVar3 & 1) == 0) {
          unaff_x24 = (undefined8 *)0x0;
        }
        _objc_retain(unaff_x24);
        _objc_release(puVar16);
        unaff_x23 = (undefined8 *)PTR__OBJC_CLASS___NSNumber_1126ae570;
        unaff_x26 = (undefined8 *)PTR__OBJC_CLASS___NSString_1126ae4d0;
        unaff_x25 = unaff_x26;
        if (unaff_x28 == (undefined8 *)0x0) {
          if (unaff_x22 == (undefined8 *)0x0) {
            if (unaff_x24 == (undefined8 *)0x0) {
              _objc_opt_class();
              _NSStringFromClass();
              _objc_retainAutoreleasedReturnValue();
              puStack_370 = puVar16;
              func_0x00010c14de00();
              _objc_retainAutoreleasedReturnValue();
              unaff_x23 = puVar16;
            }
            else {
              func_0x00010c0fb3c0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0c6c20();
              func_0x00010c0df780();
              _objc_retainAutoreleasedReturnValue();
              puStack_370 = unaff_x23;
              func_0x00010c14de00();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(unaff_x23);
              unaff_x27 = puVar16;
            }
            goto LAB_107d913a4;
          }
          func_0x00010c245680();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = puVar16;
          func_0x00010c296f60();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = unaff_x26;
          func_0x00010bf446e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x26);
          _objc_release(puVar16);
          unaff_x23 = (undefined8 *)PTR__OBJC_CLASS___NSString_1126ae4d0;
          puStack_370 = unaff_x25;
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(ppuStack_358);
          _objc_release(unaff_x23);
        }
        else {
          func_0x00010c23f220();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = puVar16;
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          puStack_370 = unaff_x27;
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x27);
          unaff_x23 = puVar16;
LAB_107d913a4:
          _objc_release(puVar16);
          func_0x00010befa120(ppuStack_358);
        }
        _objc_release(unaff_x25);
        _objc_release(unaff_x24);
        _objc_release(unaff_x22);
        _objc_release(unaff_x28);
        puVar13 = puVar13 + 1;
      } while (puVar5 != (undefined8 *)puVar13);
      puVar3 = &uStack_350;
      puVar16 = auStack_310;
      puVar5 = (undefined8 *)puStack_360;
      func_0x00010bf52a60();
    } while (puVar5 != (undefined8 *)0x0);
  }
  puVar13 = puStack_360;
  _objc_release(puStack_360);
  ppuVar12 = ppuStack_358;
  ppuVar14 = ppuStack_358;
  func_0x00010bf51e00();
  _objc_release(ppuVar12);
  _objc_release(puVar13);
  ppuVar10 = ppuVar14;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_290) {
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar10);
    return ppuVar10;
  }
  ___stack_chk_fail();
  ppuStack_390 = ppuVar12;
  puStack_388 = puVar13;
  pcStack_378 = FUN_107d915ac;
  lStack_3e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_3d0 = unaff_x28;
  puStack_3c8 = unaff_x27;
  puStack_3c0 = unaff_x26;
  puStack_3b8 = unaff_x25;
  puStack_3b0 = unaff_x24;
  puStack_3a8 = unaff_x23;
  puStack_3a0 = unaff_x22;
  ppuStack_398 = ppuVar14;
  pppuStack_380 = &ppuStack_230;
  _objc_retain(puVar3);
  puStack_4a8 = puVar16;
  _objc_retain(puVar16);
  lStack_498 = 0;
  uStack_4a0 = 0;
  uStack_488 = 0;
  puStack_490 = (undefined8 *)0x0;
  uStack_478 = 0;
  uStack_480 = 0;
  uStack_468 = 0;
  uStack_470 = 0;
  _objc_retain(puVar3);
  puVar5 = &uStack_4a0;
  puVar17 = puVar3;
  func_0x00010bf52a60();
  if (puVar17 != (undefined8 *)0x0) {
    unaff_x28 = (undefined8 *)*puStack_490;
    ppuVar14 = &PTR_PTR_1126d7000;
    unaff_x22 = puVar17;
    do {
      puVar16 = (undefined8 *)0x0;
      do {
        if ((undefined8 *)*puStack_490 != unaff_x28) {
          _objc_enumerationMutation(puVar3);
        }
        puVar6 = PTR_PTR_1126d7c90;
        puVar17 = *(undefined8 **)(lStack_498 + (long)puVar16 * 8);
        _objc_retain(puVar17);
        _objc_opt_class(puVar6);
        puVar5 = puVar17;
        _objc_opt_isKindOfClass(puVar17,puVar6);
        unaff_x23 = puVar17;
        if (((ulong)puVar5 & 1) == 0) {
          unaff_x23 = (undefined8 *)0x0;
        }
        _objc_retain(unaff_x23);
        _objc_release(puVar17);
        puVar6 = PTR_PTR_1126d7c88;
        _objc_retain(puVar17);
        _objc_opt_class(puVar6);
        puVar5 = puVar17;
        _objc_opt_isKindOfClass(puVar17,puVar6);
        unaff_x24 = puVar17;
        if (((ulong)puVar5 & 1) == 0) {
          unaff_x24 = (undefined8 *)0x0;
        }
        _objc_retain(unaff_x24);
        _objc_release(puVar17);
        if (unaff_x23 == (undefined8 *)0x0) {
          unaff_x25 = puVar17;
          if (unaff_x24 != (undefined8 *)0x0) {
            func_0x00010c245680();
            _objc_retainAutoreleasedReturnValue();
            unaff_x25 = puVar17;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar17);
            unaff_x26 = puVar17;
            if (unaff_x25 != (undefined8 *)0x0) goto LAB_107d91720;
          }
LAB_107d917b0:
          _objc_release(unaff_x24);
          _objc_release(unaff_x23);
        }
        else {
          func_0x00010c23f220();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = puVar17;
          if (puVar17 == (undefined8 *)0x0) goto LAB_107d917b0;
LAB_107d91720:
          unaff_x26 = (undefined8 *)PTR_PTR_1126af4c0;
          unaff_x27 = puStack_4a8;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = unaff_x25;
          func_0x00010bfa7060();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x27);
          if (unaff_x26 != (undefined8 *)0x0) {
            puVar17 = unaff_x26;
            func_0x00010bf977c0();
            ppuVar12 = (undefined **)(long)(int)puVar17;
            func_0x00010b5f5864(ppuVar12,unaff_x26);
            _objc_retainAutoreleasedReturnValue();
            ppuStack_4b0 = ppuVar12;
          }
          _objc_release(unaff_x26);
          _objc_release(unaff_x25);
          _objc_release(unaff_x24);
          _objc_release(unaff_x23);
          if (unaff_x26 != (undefined8 *)0x0) goto LAB_107d917ec;
        }
        puVar16 = (undefined8 *)((long)puVar16 + 1);
      } while (unaff_x22 != puVar16);
      puVar5 = &uStack_4a0;
      unaff_x22 = puVar3;
      func_0x00010bf52a60();
    } while (unaff_x22 != (undefined8 *)0x0);
  }
  ppuStack_4b0 = (undefined **)0x0;
LAB_107d917ec:
  _objc_release(puVar3);
  _objc_release(puStack_4a8);
  _objc_release(puVar3);
  ppuVar10 = ppuStack_4b0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3e0) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_4b8 = FUN_107d91844;
  lStack_520 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_510 = unaff_x28;
  puStack_508 = unaff_x27;
  puStack_500 = unaff_x26;
  puStack_4f8 = unaff_x25;
  puStack_4f0 = unaff_x24;
  puStack_4e8 = unaff_x23;
  puStack_4e0 = unaff_x22;
  ppuStack_4d8 = ppuVar14;
  puStack_4d0 = puVar16;
  puStack_4c8 = puVar3;
  pppuStack_4c0 = &pppuStack_380;
  _objc_retain(puVar5);
  lStack_658 = 0;
  uStack_660 = 0;
  uStack_648 = 0;
  plStack_650 = (long *)0x0;
  uStack_638 = 0;
  uStack_640 = 0;
  uStack_628 = 0;
  uStack_630 = 0;
  _objc_retain(puVar5);
  puVar3 = &uStack_660;
  puVar13 = auStack_5a0;
  puVar16 = puVar5;
  func_0x00010bf52a60();
  ppuVar12 = (undefined **)0x0;
  if (puVar16 != (undefined8 *)0x0) {
    lVar11 = *plStack_650;
    do {
      puVar17 = (undefined8 *)0x0;
      do {
        if (*plStack_650 != lVar11) {
          _objc_enumerationMutation(puVar5);
        }
        puVar6 = PTR_PTR_1126d7c90;
        uVar15 = *(ulong *)(lStack_658 + (long)puVar17 * 8);
        _objc_retain(uVar15);
        _objc_opt_class(puVar6);
        uVar7 = uVar15;
        _objc_opt_isKindOfClass(uVar15,puVar6);
        uVar4 = uVar15;
        if ((uVar7 & 1) == 0) {
          uVar4 = 0;
        }
        _objc_retain(uVar4);
        _objc_release(uVar15);
        puVar6 = PTR_PTR_1126d7c88;
        _objc_retain(uVar15);
        _objc_opt_class(puVar6);
        uVar8 = uVar15;
        _objc_opt_isKindOfClass(uVar15,puVar6);
        uVar7 = uVar15;
        if ((uVar8 & 1) == 0) {
          uVar7 = 0;
        }
        _objc_retain(uVar7);
        _objc_release(uVar15);
        if (uVar4 == 0) {
          if (uVar7 != 0) {
            uStack_678 = 0;
            uStack_680 = 0;
            uStack_668 = 0;
            uStack_670 = 0;
            lStack_698 = 0;
            uStack_6a0 = 0;
            uStack_688 = 0;
            plStack_690 = (long *)0x0;
            func_0x00010c245680();
            _objc_retainAutoreleasedReturnValue();
            puVar13 = auStack_620;
            uVar8 = uVar15;
            puVar3 = &uStack_6a0;
            func_0x00010bf52a60();
            if (uVar8 != 0) {
              lVar18 = *plStack_690;
              do {
                uVar19 = 0;
                do {
                  if (*plStack_690 != lVar18) {
                    _objc_enumerationMutation(uVar15);
                  }
                  lVar9 = *(long *)(lStack_698 + uVar19 * 8);
                  func_0x00010b5fa088();
                  if (lVar9 - 2U < 0xb) {
                    _objc_release(uVar15);
                    uVar15 = 0;
                    goto LAB_107d91a80;
                  }
                  uVar19 = uVar19 + 1;
                } while (uVar8 != uVar19);
                puVar13 = auStack_620;
                uVar8 = uVar15;
                puVar3 = &uStack_6a0;
                func_0x00010bf52a60();
              } while (uVar8 != 0);
            }
            _objc_release(uVar15);
          }
        }
        else {
          uVar8 = uVar15;
          func_0x00010c23f220();
          _objc_retainAutoreleasedReturnValue();
          uVar19 = uVar8;
          func_0x00010b5fa088();
          _objc_release(uVar8);
          if (uVar19 - 2 < 0xb) {
LAB_107d91a80:
            _objc_release(uVar7);
            _objc_release(uVar15);
            ppuVar12 = (undefined **)0x1;
            goto LAB_107d91a94;
          }
        }
        _objc_release(uVar7);
        _objc_release(uVar4);
        puVar17 = (undefined8 *)((long)puVar17 + 1);
      } while (puVar17 != puVar16);
      puVar3 = &uStack_660;
      puVar13 = auStack_5a0;
      puVar16 = puVar5;
      func_0x00010bf52a60();
    } while (puVar16 != (undefined8 *)0x0);
    ppuVar12 = (undefined **)0x0;
  }
LAB_107d91a94:
  _objc_release(puVar5);
  _objc_release(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_520) {
    return ppuVar12;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  _objc_retain(puVar13);
  uVar4 = 0;
  func_0x00010c0720c0();
  if ((uVar4 & 1) == 0) {
    iVar2 = 0x10ebd778;
    func_0x00010c0720c0();
    if ((iVar2 != 0) && (puVar16 = puVar3, func_0x00010bf529e0(), puVar16 == (undefined8 *)0x1)) {
      puVar16 = puVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126d7c88;
      _objc_opt_class(PTR_PTR_1126d7c88);
      puVar5 = puVar16;
      _objc_opt_isKindOfClass(puVar16,puVar6);
      _objc_release(puVar16);
      if (((ulong)puVar5 & 1) != 0) goto LAB_107d91b24;
    }
    ppuVar12 = (undefined **)0x0;
  }
  else {
LAB_107d91b24:
    ppuVar12 = (undefined **)0x1;
  }
  _objc_release(puVar13);
  _objc_release(puVar3);
  return ppuVar12;
}



/* Entry: 107d910d4; end: 107d911d7; +[SCGalleryExportLogger _getNumberOfStoriesFromItems:] */

undefined ** FUN_107d910d4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined1 *puVar12;
  undefined **ppuVar13;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  ulong uVar14;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *unaff_x26;
  long lVar17;
  undefined8 *unaff_x27;
  ulong uVar18;
  undefined8 *unaff_x28;
  undefined8 uStack_590;
  long lStack_588;
  long *plStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  long lStack_548;
  long *plStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined1 auStack_510 [128];
  undefined1 auStack_490 [128];
  long lStack_410;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 *puStack_3d0;
  undefined **ppuStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined1 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined **ppuStack_3a0;
  undefined8 *puStack_398;
  undefined8 uStack_390;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long lStack_2d0;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 *puStack_290;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  undefined1 *puStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined8 *puStack_260;
  undefined **ppuStack_258;
  undefined1 *puStack_250;
  undefined **ppuStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 auStack_200 [16];
  long lStack_180;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar4 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  puStack_100 = (undefined8 *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  puVar2 = param_3;
  func_0x00010bf52a60();
  if (puVar2 == (undefined8 *)0x0) {
    ppuVar11 = (undefined **)0x0;
  }
  else {
    ppuVar11 = (undefined **)0x0;
    unaff_x22 = (undefined8 *)*puStack_100;
    do {
      unaff_x23 = (undefined8 *)0x0;
      do {
        if ((undefined8 *)*puStack_100 != unaff_x22) {
          _objc_enumerationMutation(param_3);
        }
        uVar3 = *(ulong *)(lStack_108 + (long)unaff_x23 * 8);
        func_0x00010c07fbc0();
        ppuVar11 = (undefined **)((long)ppuVar11 + (uVar3 & 0xffffffff));
        unaff_x23 = (undefined8 *)((long)unaff_x23 + 1);
      } while (puVar2 != unaff_x23);
      puVar2 = param_3;
      puVar4 = &uStack_110;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined8 *)0x0);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar11;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_107d911d8;
  lStack_180 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_retain(puVar4);
  ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  ppuStack_248 = ppuVar11;
  _objc_retain(puVar4);
  puVar2 = &uStack_240;
  puVar15 = auStack_200;
  puStack_250 = (undefined1 *)puVar4;
  func_0x00010bf52a60();
  if (puVar4 != (undefined8 *)0x0) {
    lVar10 = *plStack_230;
    ppuStack_258 = &PTR____CFConstantStringClassReference_110dba818;
    do {
      puVar12 = (undefined1 *)0x0;
      do {
        if (*plStack_230 != lVar10) {
          _objc_enumerationMutation(puStack_250);
        }
        puVar5 = PTR_PTR_1126d7c90;
        puVar15 = *(undefined8 **)(lStack_238 + (long)puVar12 * 8);
        _objc_retain(puVar15);
        _objc_opt_class(puVar5);
        puVar2 = puVar15;
        _objc_opt_isKindOfClass(puVar15,puVar5);
        unaff_x28 = puVar15;
        if (((ulong)puVar2 & 1) == 0) {
          unaff_x28 = (undefined8 *)0x0;
        }
        _objc_retain(unaff_x28);
        _objc_release(puVar15);
        puVar5 = PTR_PTR_1126d7c88;
        _objc_retain(puVar15);
        _objc_opt_class(puVar5);
        puVar2 = puVar15;
        _objc_opt_isKindOfClass(puVar15,puVar5);
        unaff_x22 = puVar15;
        if (((ulong)puVar2 & 1) == 0) {
          unaff_x22 = (undefined8 *)0x0;
        }
        _objc_retain(unaff_x22);
        _objc_release(puVar15);
        puVar5 = PTR_PTR_1126d7cc0;
        _objc_retain(puVar15);
        _objc_opt_class(puVar5);
        puVar2 = puVar15;
        _objc_opt_isKindOfClass(puVar15,puVar5);
        unaff_x24 = puVar15;
        if (((ulong)puVar2 & 1) == 0) {
          unaff_x24 = (undefined8 *)0x0;
        }
        _objc_retain(unaff_x24);
        _objc_release(puVar15);
        unaff_x23 = (undefined8 *)PTR__OBJC_CLASS___NSNumber_1126ae570;
        unaff_x26 = (undefined8 *)PTR__OBJC_CLASS___NSString_1126ae4d0;
        unaff_x25 = unaff_x26;
        if (unaff_x28 == (undefined8 *)0x0) {
          if (unaff_x22 == (undefined8 *)0x0) {
            if (unaff_x24 == (undefined8 *)0x0) {
              _objc_opt_class();
              _NSStringFromClass();
              _objc_retainAutoreleasedReturnValue();
              puStack_260 = puVar15;
              func_0x00010c14de00();
              _objc_retainAutoreleasedReturnValue();
              unaff_x23 = puVar15;
            }
            else {
              func_0x00010c0fb3c0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0c6c20();
              func_0x00010c0df780();
              _objc_retainAutoreleasedReturnValue();
              puStack_260 = unaff_x23;
              func_0x00010c14de00();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(unaff_x23);
              unaff_x27 = puVar15;
            }
            goto LAB_107d913a4;
          }
          func_0x00010c245680();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = puVar15;
          func_0x00010c296f60();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = unaff_x26;
          func_0x00010bf446e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x26);
          _objc_release(puVar15);
          unaff_x23 = (undefined8 *)PTR__OBJC_CLASS___NSString_1126ae4d0;
          puStack_260 = unaff_x25;
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(ppuStack_248);
          _objc_release(unaff_x23);
        }
        else {
          func_0x00010c23f220();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = puVar15;
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          puStack_260 = unaff_x27;
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x27);
          unaff_x23 = puVar15;
LAB_107d913a4:
          _objc_release(puVar15);
          func_0x00010befa120(ppuStack_248);
        }
        _objc_release(unaff_x25);
        _objc_release(unaff_x24);
        _objc_release(unaff_x22);
        _objc_release(unaff_x28);
        puVar12 = puVar12 + 1;
      } while (puVar4 != (undefined8 *)puVar12);
      puVar2 = &uStack_240;
      puVar15 = auStack_200;
      puVar4 = (undefined8 *)puStack_250;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined8 *)0x0);
  }
  puVar12 = puStack_250;
  _objc_release(puStack_250);
  ppuVar11 = ppuStack_248;
  ppuVar13 = ppuStack_248;
  func_0x00010bf51e00();
  _objc_release(ppuVar11);
  _objc_release(puVar12);
  ppuVar9 = ppuVar13;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_180) {
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar9);
    return ppuVar9;
  }
  ___stack_chk_fail();
  ppuStack_280 = ppuVar11;
  puStack_278 = puVar12;
  pcStack_268 = FUN_107d915ac;
  lStack_2d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_2c0 = unaff_x28;
  puStack_2b8 = unaff_x27;
  puStack_2b0 = unaff_x26;
  puStack_2a8 = unaff_x25;
  puStack_2a0 = unaff_x24;
  puStack_298 = unaff_x23;
  puStack_290 = unaff_x22;
  ppuStack_288 = ppuVar13;
  ppuStack_270 = &puStack_120;
  _objc_retain(puVar2);
  puStack_398 = puVar15;
  _objc_retain(puVar15);
  lStack_388 = 0;
  uStack_390 = 0;
  uStack_378 = 0;
  puStack_380 = (undefined8 *)0x0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  _objc_retain(puVar2);
  puVar4 = &uStack_390;
  puVar16 = puVar2;
  func_0x00010bf52a60();
  if (puVar16 != (undefined8 *)0x0) {
    unaff_x28 = (undefined8 *)*puStack_380;
    ppuVar13 = &PTR_PTR_1126d7000;
    unaff_x22 = puVar16;
    do {
      puVar15 = (undefined8 *)0x0;
      do {
        if ((undefined8 *)*puStack_380 != unaff_x28) {
          _objc_enumerationMutation(puVar2);
        }
        puVar5 = PTR_PTR_1126d7c90;
        puVar16 = *(undefined8 **)(lStack_388 + (long)puVar15 * 8);
        _objc_retain(puVar16);
        _objc_opt_class(puVar5);
        puVar4 = puVar16;
        _objc_opt_isKindOfClass(puVar16,puVar5);
        unaff_x23 = puVar16;
        if (((ulong)puVar4 & 1) == 0) {
          unaff_x23 = (undefined8 *)0x0;
        }
        _objc_retain(unaff_x23);
        _objc_release(puVar16);
        puVar5 = PTR_PTR_1126d7c88;
        _objc_retain(puVar16);
        _objc_opt_class(puVar5);
        puVar4 = puVar16;
        _objc_opt_isKindOfClass(puVar16,puVar5);
        unaff_x24 = puVar16;
        if (((ulong)puVar4 & 1) == 0) {
          unaff_x24 = (undefined8 *)0x0;
        }
        _objc_retain(unaff_x24);
        _objc_release(puVar16);
        if (unaff_x23 == (undefined8 *)0x0) {
          unaff_x25 = puVar16;
          if (unaff_x24 != (undefined8 *)0x0) {
            func_0x00010c245680();
            _objc_retainAutoreleasedReturnValue();
            unaff_x25 = puVar16;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar16);
            unaff_x26 = puVar16;
            if (unaff_x25 != (undefined8 *)0x0) goto LAB_107d91720;
          }
LAB_107d917b0:
          _objc_release(unaff_x24);
          _objc_release(unaff_x23);
        }
        else {
          func_0x00010c23f220();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = puVar16;
          if (puVar16 == (undefined8 *)0x0) goto LAB_107d917b0;
LAB_107d91720:
          unaff_x26 = (undefined8 *)PTR_PTR_1126af4c0;
          unaff_x27 = puStack_398;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = unaff_x25;
          func_0x00010bfa7060();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x27);
          if (unaff_x26 != (undefined8 *)0x0) {
            puVar16 = unaff_x26;
            func_0x00010bf977c0();
            ppuVar11 = (undefined **)(long)(int)puVar16;
            func_0x00010b5f5864(ppuVar11,unaff_x26);
            _objc_retainAutoreleasedReturnValue();
            ppuStack_3a0 = ppuVar11;
          }
          _objc_release(unaff_x26);
          _objc_release(unaff_x25);
          _objc_release(unaff_x24);
          _objc_release(unaff_x23);
          if (unaff_x26 != (undefined8 *)0x0) goto LAB_107d917ec;
        }
        puVar15 = (undefined8 *)((long)puVar15 + 1);
      } while (unaff_x22 != puVar15);
      puVar4 = &uStack_390;
      unaff_x22 = puVar2;
      func_0x00010bf52a60();
    } while (unaff_x22 != (undefined8 *)0x0);
  }
  ppuStack_3a0 = (undefined **)0x0;
LAB_107d917ec:
  _objc_release(puVar2);
  _objc_release(puStack_398);
  _objc_release(puVar2);
  ppuVar9 = ppuStack_3a0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d0) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_3a8 = FUN_107d91844;
  lStack_410 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_400 = unaff_x28;
  puStack_3f8 = unaff_x27;
  puStack_3f0 = unaff_x26;
  puStack_3e8 = unaff_x25;
  puStack_3e0 = unaff_x24;
  puStack_3d8 = unaff_x23;
  puStack_3d0 = unaff_x22;
  ppuStack_3c8 = ppuVar13;
  puStack_3c0 = puVar15;
  puStack_3b8 = puVar2;
  pppuStack_3b0 = &ppuStack_270;
  _objc_retain(puVar4);
  lStack_548 = 0;
  uStack_550 = 0;
  uStack_538 = 0;
  plStack_540 = (long *)0x0;
  uStack_528 = 0;
  uStack_530 = 0;
  uStack_518 = 0;
  uStack_520 = 0;
  _objc_retain(puVar4);
  puVar2 = &uStack_550;
  puVar12 = auStack_490;
  puVar15 = puVar4;
  func_0x00010bf52a60();
  ppuVar11 = (undefined **)0x0;
  if (puVar15 != (undefined8 *)0x0) {
    lVar10 = *plStack_540;
    do {
      puVar16 = (undefined8 *)0x0;
      do {
        if (*plStack_540 != lVar10) {
          _objc_enumerationMutation(puVar4);
        }
        puVar5 = PTR_PTR_1126d7c90;
        uVar14 = *(ulong *)(lStack_548 + (long)puVar16 * 8);
        _objc_retain(uVar14);
        _objc_opt_class(puVar5);
        uVar6 = uVar14;
        _objc_opt_isKindOfClass(uVar14,puVar5);
        uVar3 = uVar14;
        if ((uVar6 & 1) == 0) {
          uVar3 = 0;
        }
        _objc_retain(uVar3);
        _objc_release(uVar14);
        puVar5 = PTR_PTR_1126d7c88;
        _objc_retain(uVar14);
        _objc_opt_class(puVar5);
        uVar7 = uVar14;
        _objc_opt_isKindOfClass(uVar14,puVar5);
        uVar6 = uVar14;
        if ((uVar7 & 1) == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        _objc_release(uVar14);
        if (uVar3 == 0) {
          if (uVar6 != 0) {
            uStack_568 = 0;
            uStack_570 = 0;
            uStack_558 = 0;
            uStack_560 = 0;
            lStack_588 = 0;
            uStack_590 = 0;
            uStack_578 = 0;
            plStack_580 = (long *)0x0;
            func_0x00010c245680();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = auStack_510;
            uVar7 = uVar14;
            puVar2 = &uStack_590;
            func_0x00010bf52a60();
            if (uVar7 != 0) {
              lVar17 = *plStack_580;
              do {
                uVar18 = 0;
                do {
                  if (*plStack_580 != lVar17) {
                    _objc_enumerationMutation(uVar14);
                  }
                  lVar8 = *(long *)(lStack_588 + uVar18 * 8);
                  func_0x00010b5fa088();
                  if (lVar8 - 2U < 0xb) {
                    _objc_release(uVar14);
                    uVar14 = 0;
                    goto LAB_107d91a80;
                  }
                  uVar18 = uVar18 + 1;
                } while (uVar7 != uVar18);
                puVar12 = auStack_510;
                uVar7 = uVar14;
                puVar2 = &uStack_590;
                func_0x00010bf52a60();
              } while (uVar7 != 0);
            }
            _objc_release(uVar14);
          }
        }
        else {
          uVar7 = uVar14;
          func_0x00010c23f220();
          _objc_retainAutoreleasedReturnValue();
          uVar18 = uVar7;
          func_0x00010b5fa088();
          _objc_release(uVar7);
          if (uVar18 - 2 < 0xb) {
LAB_107d91a80:
            _objc_release(uVar6);
            _objc_release(uVar14);
            ppuVar11 = (undefined **)0x1;
            goto LAB_107d91a94;
          }
        }
        _objc_release(uVar6);
        _objc_release(uVar3);
        puVar16 = (undefined8 *)((long)puVar16 + 1);
      } while (puVar16 != puVar15);
      puVar2 = &uStack_550;
      puVar12 = auStack_490;
      puVar15 = puVar4;
      func_0x00010bf52a60();
    } while (puVar15 != (undefined8 *)0x0);
    ppuVar11 = (undefined **)0x0;
  }
LAB_107d91a94:
  _objc_release(puVar4);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_410) {
    return ppuVar11;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  _objc_retain(puVar12);
  uVar3 = 0;
  func_0x00010c0720c0();
  if ((uVar3 & 1) == 0) {
    iVar1 = 0x10ebd778;
    func_0x00010c0720c0();
    if ((iVar1 != 0) && (puVar4 = puVar2, func_0x00010bf529e0(), puVar4 == (undefined8 *)0x1)) {
      puVar4 = puVar2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126d7c88;
      _objc_opt_class(PTR_PTR_1126d7c88);
      puVar15 = puVar4;
      _objc_opt_isKindOfClass(puVar4,puVar5);
      _objc_release(puVar4);
      if (((ulong)puVar15 & 1) != 0) goto LAB_107d91b24;
    }
    ppuVar11 = (undefined **)0x0;
  }
  else {
LAB_107d91b24:
    ppuVar11 = (undefined **)0x1;
  }
  _objc_release(puVar12);
  _objc_release(puVar2);
  return ppuVar11;
}



/* Entry: 107d911d8; end: 107d915ab; +[SCGalleryExportLogger _contentFromActivityItemProviders:] */

undefined ** FUN_107d911d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined **ppuVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  ulong uVar15;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  ulong uVar18;
  undefined8 *unaff_x28;
  undefined8 uStack_480;
  long lStack_478;
  long *plStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  long lStack_438;
  long *plStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined1 auStack_400 [128];
  undefined1 auStack_380 [128];
  long lStack_300;
  undefined8 *puStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined **ppuStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined1 **ppuStack_2a0;
  code *pcStack_298;
  undefined **ppuStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  long lStack_278;
  undefined8 *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_1c0;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 *puStack_150;
  undefined **ppuStack_148;
  long lStack_140;
  undefined **ppuStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 auStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  ppuStack_138 = ppuVar14;
  _objc_retain(param_3);
  puVar3 = &uStack_130;
  puVar16 = auStack_f0;
  lStack_140 = param_3;
  func_0x00010bf52a60();
  if (param_3 != 0) {
    lVar11 = *plStack_120;
    ppuStack_148 = &PTR____CFConstantStringClassReference_110dba818;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(lStack_140);
        }
        puVar2 = PTR_PTR_1126d7c90;
        puVar16 = *(undefined8 **)(lStack_128 + lVar12 * 8);
        _objc_retain(puVar16);
        _objc_opt_class(puVar2);
        puVar3 = puVar16;
        _objc_opt_isKindOfClass(puVar16,puVar2);
        unaff_x28 = puVar16;
        if (((ulong)puVar3 & 1) == 0) {
          unaff_x28 = (undefined8 *)0x0;
        }
        _objc_retain(unaff_x28);
        _objc_release(puVar16);
        puVar2 = PTR_PTR_1126d7c88;
        _objc_retain(puVar16);
        _objc_opt_class(puVar2);
        puVar3 = puVar16;
        _objc_opt_isKindOfClass(puVar16,puVar2);
        unaff_x22 = puVar16;
        if (((ulong)puVar3 & 1) == 0) {
          unaff_x22 = (undefined8 *)0x0;
        }
        _objc_retain(unaff_x22);
        _objc_release(puVar16);
        puVar2 = PTR_PTR_1126d7cc0;
        _objc_retain(puVar16);
        _objc_opt_class(puVar2);
        puVar3 = puVar16;
        _objc_opt_isKindOfClass(puVar16,puVar2);
        unaff_x24 = puVar16;
        if (((ulong)puVar3 & 1) == 0) {
          unaff_x24 = (undefined8 *)0x0;
        }
        _objc_retain(unaff_x24);
        _objc_release(puVar16);
        unaff_x23 = (undefined8 *)PTR__OBJC_CLASS___NSNumber_1126ae570;
        unaff_x26 = (undefined8 *)PTR__OBJC_CLASS___NSString_1126ae4d0;
        unaff_x25 = unaff_x26;
        if (unaff_x28 == (undefined8 *)0x0) {
          if (unaff_x22 == (undefined8 *)0x0) {
            if (unaff_x24 == (undefined8 *)0x0) {
              _objc_opt_class();
              _NSStringFromClass();
              _objc_retainAutoreleasedReturnValue();
              puStack_150 = puVar16;
              func_0x00010c14de00();
              _objc_retainAutoreleasedReturnValue();
              unaff_x23 = puVar16;
            }
            else {
              func_0x00010c0fb3c0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0c6c20();
              func_0x00010c0df780();
              _objc_retainAutoreleasedReturnValue();
              puStack_150 = unaff_x23;
              func_0x00010c14de00();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(unaff_x23);
              unaff_x27 = puVar16;
            }
            goto LAB_107d913a4;
          }
          func_0x00010c245680();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = puVar16;
          func_0x00010c296f60();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = unaff_x26;
          func_0x00010bf446e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x26);
          _objc_release(puVar16);
          unaff_x23 = (undefined8 *)PTR__OBJC_CLASS___NSString_1126ae4d0;
          puStack_150 = unaff_x25;
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(ppuStack_138);
          _objc_release(unaff_x23);
        }
        else {
          func_0x00010c23f220();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = puVar16;
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          puStack_150 = unaff_x27;
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x27);
          unaff_x23 = puVar16;
LAB_107d913a4:
          _objc_release(puVar16);
          func_0x00010befa120(ppuStack_138);
        }
        _objc_release(unaff_x25);
        _objc_release(unaff_x24);
        _objc_release(unaff_x22);
        _objc_release(unaff_x28);
        lVar12 = lVar12 + 1;
      } while (param_3 != lVar12);
      puVar3 = &uStack_130;
      puVar16 = auStack_f0;
      param_3 = lStack_140;
      func_0x00010bf52a60();
    } while (param_3 != 0);
  }
  lVar11 = lStack_140;
  _objc_release(lStack_140);
  ppuVar14 = ppuStack_138;
  ppuVar13 = ppuStack_138;
  func_0x00010bf51e00();
  _objc_release(ppuVar14);
  _objc_release(lVar11);
  ppuVar9 = ppuVar13;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar9);
    return ppuVar9;
  }
  ___stack_chk_fail();
  ppuStack_170 = ppuVar14;
  lStack_168 = lVar11;
  pcStack_158 = FUN_107d915ac;
  lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1b0 = unaff_x28;
  puStack_1a8 = unaff_x27;
  puStack_1a0 = unaff_x26;
  puStack_198 = unaff_x25;
  puStack_190 = unaff_x24;
  puStack_188 = unaff_x23;
  puStack_180 = unaff_x22;
  ppuStack_178 = ppuVar13;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  puStack_288 = puVar16;
  _objc_retain(puVar16);
  lStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  puStack_270 = (undefined8 *)0x0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  _objc_retain(puVar3);
  puVar4 = &uStack_280;
  puVar17 = puVar3;
  func_0x00010bf52a60();
  if (puVar17 != (undefined8 *)0x0) {
    unaff_x28 = (undefined8 *)*puStack_270;
    ppuVar13 = &PTR_PTR_1126d7000;
    unaff_x22 = puVar17;
    do {
      puVar16 = (undefined8 *)0x0;
      do {
        if ((undefined8 *)*puStack_270 != unaff_x28) {
          _objc_enumerationMutation(puVar3);
        }
        puVar2 = PTR_PTR_1126d7c90;
        puVar17 = *(undefined8 **)(lStack_278 + (long)puVar16 * 8);
        _objc_retain(puVar17);
        _objc_opt_class(puVar2);
        puVar4 = puVar17;
        _objc_opt_isKindOfClass(puVar17,puVar2);
        unaff_x23 = puVar17;
        if (((ulong)puVar4 & 1) == 0) {
          unaff_x23 = (undefined8 *)0x0;
        }
        _objc_retain(unaff_x23);
        _objc_release(puVar17);
        puVar2 = PTR_PTR_1126d7c88;
        _objc_retain(puVar17);
        _objc_opt_class(puVar2);
        puVar4 = puVar17;
        _objc_opt_isKindOfClass(puVar17,puVar2);
        unaff_x24 = puVar17;
        if (((ulong)puVar4 & 1) == 0) {
          unaff_x24 = (undefined8 *)0x0;
        }
        _objc_retain(unaff_x24);
        _objc_release(puVar17);
        if (unaff_x23 == (undefined8 *)0x0) {
          unaff_x25 = puVar17;
          if (unaff_x24 != (undefined8 *)0x0) {
            func_0x00010c245680();
            _objc_retainAutoreleasedReturnValue();
            unaff_x25 = puVar17;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar17);
            unaff_x26 = puVar17;
            if (unaff_x25 != (undefined8 *)0x0) goto LAB_107d91720;
          }
LAB_107d917b0:
          _objc_release(unaff_x24);
          _objc_release(unaff_x23);
        }
        else {
          func_0x00010c23f220();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = puVar17;
          if (puVar17 == (undefined8 *)0x0) goto LAB_107d917b0;
LAB_107d91720:
          unaff_x26 = (undefined8 *)PTR_PTR_1126af4c0;
          unaff_x27 = puStack_288;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = unaff_x25;
          func_0x00010bfa7060();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x27);
          if (unaff_x26 != (undefined8 *)0x0) {
            puVar17 = unaff_x26;
            func_0x00010bf977c0();
            ppuVar14 = (undefined **)(long)(int)puVar17;
            func_0x00010b5f5864(ppuVar14,unaff_x26);
            _objc_retainAutoreleasedReturnValue();
            ppuStack_290 = ppuVar14;
          }
          _objc_release(unaff_x26);
          _objc_release(unaff_x25);
          _objc_release(unaff_x24);
          _objc_release(unaff_x23);
          if (unaff_x26 != (undefined8 *)0x0) goto LAB_107d917ec;
        }
        puVar16 = (undefined8 *)((long)puVar16 + 1);
      } while (unaff_x22 != puVar16);
      puVar4 = &uStack_280;
      unaff_x22 = puVar3;
      func_0x00010bf52a60();
    } while (unaff_x22 != (undefined8 *)0x0);
  }
  ppuStack_290 = (undefined **)0x0;
LAB_107d917ec:
  _objc_release(puVar3);
  _objc_release(puStack_288);
  _objc_release(puVar3);
  ppuVar9 = ppuStack_290;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c0) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_298 = FUN_107d91844;
  lStack_300 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_2f0 = unaff_x28;
  puStack_2e8 = unaff_x27;
  puStack_2e0 = unaff_x26;
  puStack_2d8 = unaff_x25;
  puStack_2d0 = unaff_x24;
  puStack_2c8 = unaff_x23;
  puStack_2c0 = unaff_x22;
  ppuStack_2b8 = ppuVar13;
  puStack_2b0 = puVar16;
  puStack_2a8 = puVar3;
  ppuStack_2a0 = &puStack_160;
  _objc_retain(puVar4);
  lStack_438 = 0;
  uStack_440 = 0;
  uStack_428 = 0;
  plStack_430 = (long *)0x0;
  uStack_418 = 0;
  uStack_420 = 0;
  uStack_408 = 0;
  uStack_410 = 0;
  _objc_retain(puVar4);
  puVar3 = &uStack_440;
  puVar10 = auStack_380;
  puVar16 = puVar4;
  func_0x00010bf52a60();
  ppuVar14 = (undefined **)0x0;
  if (puVar16 != (undefined8 *)0x0) {
    lVar11 = *plStack_430;
    do {
      puVar17 = (undefined8 *)0x0;
      do {
        if (*plStack_430 != lVar11) {
          _objc_enumerationMutation(puVar4);
        }
        puVar2 = PTR_PTR_1126d7c90;
        uVar15 = *(ulong *)(lStack_438 + (long)puVar17 * 8);
        _objc_retain(uVar15);
        _objc_opt_class(puVar2);
        uVar5 = uVar15;
        _objc_opt_isKindOfClass(uVar15,puVar2);
        uVar8 = uVar15;
        if ((uVar5 & 1) == 0) {
          uVar8 = 0;
        }
        _objc_retain(uVar8);
        _objc_release(uVar15);
        puVar2 = PTR_PTR_1126d7c88;
        _objc_retain(uVar15);
        _objc_opt_class(puVar2);
        uVar6 = uVar15;
        _objc_opt_isKindOfClass(uVar15,puVar2);
        uVar5 = uVar15;
        if ((uVar6 & 1) == 0) {
          uVar5 = 0;
        }
        _objc_retain(uVar5);
        _objc_release(uVar15);
        if (uVar8 == 0) {
          if (uVar5 != 0) {
            uStack_458 = 0;
            uStack_460 = 0;
            uStack_448 = 0;
            uStack_450 = 0;
            lStack_478 = 0;
            uStack_480 = 0;
            uStack_468 = 0;
            plStack_470 = (long *)0x0;
            func_0x00010c245680();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = auStack_400;
            uVar6 = uVar15;
            puVar3 = &uStack_480;
            func_0x00010bf52a60();
            if (uVar6 != 0) {
              lVar12 = *plStack_470;
              do {
                uVar18 = 0;
                do {
                  if (*plStack_470 != lVar12) {
                    _objc_enumerationMutation(uVar15);
                  }
                  lVar7 = *(long *)(lStack_478 + uVar18 * 8);
                  func_0x00010b5fa088();
                  if (lVar7 - 2U < 0xb) {
                    _objc_release(uVar15);
                    uVar15 = 0;
                    goto LAB_107d91a80;
                  }
                  uVar18 = uVar18 + 1;
                } while (uVar6 != uVar18);
                puVar10 = auStack_400;
                uVar6 = uVar15;
                puVar3 = &uStack_480;
                func_0x00010bf52a60();
              } while (uVar6 != 0);
            }
            _objc_release(uVar15);
          }
        }
        else {
          uVar6 = uVar15;
          func_0x00010c23f220();
          _objc_retainAutoreleasedReturnValue();
          uVar18 = uVar6;
          func_0x00010b5fa088();
          _objc_release(uVar6);
          if (uVar18 - 2 < 0xb) {
LAB_107d91a80:
            _objc_release(uVar5);
            _objc_release(uVar15);
            ppuVar14 = (undefined **)0x1;
            goto LAB_107d91a94;
          }
        }
        _objc_release(uVar5);
        _objc_release(uVar8);
        puVar17 = (undefined8 *)((long)puVar17 + 1);
      } while (puVar17 != puVar16);
      puVar3 = &uStack_440;
      puVar10 = auStack_380;
      puVar16 = puVar4;
      func_0x00010bf52a60();
    } while (puVar16 != (undefined8 *)0x0);
    ppuVar14 = (undefined **)0x0;
  }
LAB_107d91a94:
  _objc_release(puVar4);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_300) {
    return ppuVar14;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  _objc_retain(puVar10);
  uVar8 = 0;
  func_0x00010c0720c0();
  if ((uVar8 & 1) == 0) {
    iVar1 = 0x10ebd778;
    func_0x00010c0720c0();
    if ((iVar1 != 0) && (puVar16 = puVar3, func_0x00010bf529e0(), puVar16 == (undefined8 *)0x1)) {
      puVar16 = puVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126d7c88;
      _objc_opt_class(PTR_PTR_1126d7c88);
      puVar4 = puVar16;
      _objc_opt_isKindOfClass(puVar16,puVar2);
      _objc_release(puVar16);
      if (((ulong)puVar4 & 1) != 0) goto LAB_107d91b24;
    }
    ppuVar14 = (undefined **)0x0;
  }
  else {
LAB_107d91b24:
    ppuVar14 = (undefined **)0x1;
  }
  _objc_release(puVar10);
  _objc_release(puVar3);
  return ppuVar14;
}



/* Entry: 107d915ac; end: 107d91843; +[SCGalleryExportLogger _galleryCollectionCategoryFromActivityItemProviders:dataObjectContext:] */

long FUN_107d915ac(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined **unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  ulong uVar10;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *unaff_x26;
  long lVar13;
  long unaff_x27;
  ulong uVar14;
  long unaff_x28;
  undefined8 *puVar15;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  long *plStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 auStack_2b0 [128];
  undefined1 auStack_230 [128];
  long lStack_1b0;
  long lStack_1a0;
  long lStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  long lStack_170;
  undefined **ppuStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_138 = param_4;
  _objc_retain(param_4);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar3 = &uStack_130;
  lVar12 = param_3;
  func_0x00010bf52a60();
  if (lVar12 != 0) {
    unaff_x28 = *plStack_120;
    unaff_x21 = &PTR_PTR_1126d7000;
    unaff_x22 = lVar12;
    do {
      param_4 = 0;
      do {
        if (*plStack_120 != unaff_x28) {
          _objc_enumerationMutation(param_3);
        }
        puVar2 = PTR_PTR_1126d7c90;
        puVar11 = *(undefined8 **)(lStack_128 + param_4 * 8);
        _objc_retain(puVar11);
        _objc_opt_class(puVar2);
        puVar3 = puVar11;
        _objc_opt_isKindOfClass(puVar11,puVar2);
        unaff_x23 = puVar11;
        if (((ulong)puVar3 & 1) == 0) {
          unaff_x23 = (undefined8 *)0x0;
        }
        _objc_retain(unaff_x23);
        _objc_release(puVar11);
        puVar2 = PTR_PTR_1126d7c88;
        _objc_retain(puVar11);
        _objc_opt_class(puVar2);
        puVar3 = puVar11;
        _objc_opt_isKindOfClass(puVar11,puVar2);
        unaff_x24 = puVar11;
        if (((ulong)puVar3 & 1) == 0) {
          unaff_x24 = (undefined8 *)0x0;
        }
        _objc_retain(unaff_x24);
        _objc_release(puVar11);
        if (unaff_x23 == (undefined8 *)0x0) {
          unaff_x25 = puVar11;
          if (unaff_x24 != (undefined8 *)0x0) {
            func_0x00010c245680();
            _objc_retainAutoreleasedReturnValue();
            unaff_x25 = puVar11;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar11);
            unaff_x26 = puVar11;
            if (unaff_x25 != (undefined8 *)0x0) goto LAB_107d91720;
          }
LAB_107d917b0:
          _objc_release(unaff_x24);
          _objc_release(unaff_x23);
        }
        else {
          func_0x00010c23f220();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = puVar11;
          if (puVar11 == (undefined8 *)0x0) goto LAB_107d917b0;
LAB_107d91720:
          unaff_x26 = (undefined8 *)PTR_PTR_1126af4c0;
          unaff_x27 = lStack_138;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = unaff_x25;
          func_0x00010bfa7060();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x27);
          if (unaff_x26 != (undefined8 *)0x0) {
            puVar11 = unaff_x26;
            func_0x00010bf977c0();
            lVar12 = (long)(int)puVar11;
            func_0x00010b5f5864(lVar12,unaff_x26);
            _objc_retainAutoreleasedReturnValue();
            lStack_140 = lVar12;
          }
          _objc_release(unaff_x26);
          _objc_release(unaff_x25);
          _objc_release(unaff_x24);
          _objc_release(unaff_x23);
          if (unaff_x26 != (undefined8 *)0x0) goto LAB_107d917ec;
        }
        param_4 = param_4 + 1;
      } while (unaff_x22 != param_4);
      puVar3 = &uStack_130;
      unaff_x22 = param_3;
      func_0x00010bf52a60();
    } while (unaff_x22 != 0);
  }
  lStack_140 = 0;
LAB_107d917ec:
  _objc_release(param_3);
  _objc_release(lStack_138);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lStack_140);
    return lStack_140;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_107d91844;
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1a0 = unaff_x28;
  lStack_198 = unaff_x27;
  puStack_190 = unaff_x26;
  puStack_188 = unaff_x25;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  lStack_170 = unaff_x22;
  ppuStack_168 = unaff_x21;
  lStack_160 = param_4;
  lStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  lStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  plStack_2e0 = (long *)0x0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  _objc_retain(puVar3);
  puVar11 = &uStack_2f0;
  puVar9 = auStack_230;
  puVar4 = puVar3;
  func_0x00010bf52a60();
  lVar12 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    lVar12 = *plStack_2e0;
    do {
      puVar15 = (undefined8 *)0x0;
      do {
        if (*plStack_2e0 != lVar12) {
          _objc_enumerationMutation(puVar3);
        }
        puVar2 = PTR_PTR_1126d7c90;
        uVar10 = *(ulong *)(lStack_2e8 + (long)puVar15 * 8);
        _objc_retain(uVar10);
        _objc_opt_class(puVar2);
        uVar5 = uVar10;
        _objc_opt_isKindOfClass(uVar10,puVar2);
        uVar8 = uVar10;
        if ((uVar5 & 1) == 0) {
          uVar8 = 0;
        }
        _objc_retain(uVar8);
        _objc_release(uVar10);
        puVar2 = PTR_PTR_1126d7c88;
        _objc_retain(uVar10);
        _objc_opt_class(puVar2);
        uVar6 = uVar10;
        _objc_opt_isKindOfClass(uVar10,puVar2);
        uVar5 = uVar10;
        if ((uVar6 & 1) == 0) {
          uVar5 = 0;
        }
        _objc_retain(uVar5);
        _objc_release(uVar10);
        if (uVar8 == 0) {
          if (uVar5 != 0) {
            uStack_308 = 0;
            uStack_310 = 0;
            uStack_2f8 = 0;
            uStack_300 = 0;
            lStack_328 = 0;
            uStack_330 = 0;
            uStack_318 = 0;
            plStack_320 = (long *)0x0;
            func_0x00010c245680();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = auStack_2b0;
            uVar6 = uVar10;
            puVar11 = &uStack_330;
            func_0x00010bf52a60();
            if (uVar6 != 0) {
              lVar13 = *plStack_320;
              do {
                uVar14 = 0;
                do {
                  if (*plStack_320 != lVar13) {
                    _objc_enumerationMutation(uVar10);
                  }
                  lVar7 = *(long *)(lStack_328 + uVar14 * 8);
                  func_0x00010b5fa088();
                  if (lVar7 - 2U < 0xb) {
                    _objc_release(uVar10);
                    uVar10 = 0;
                    goto LAB_107d91a80;
                  }
                  uVar14 = uVar14 + 1;
                } while (uVar6 != uVar14);
                puVar9 = auStack_2b0;
                uVar6 = uVar10;
                puVar11 = &uStack_330;
                func_0x00010bf52a60();
              } while (uVar6 != 0);
            }
            _objc_release(uVar10);
          }
        }
        else {
          uVar6 = uVar10;
          func_0x00010c23f220();
          _objc_retainAutoreleasedReturnValue();
          uVar14 = uVar6;
          func_0x00010b5fa088();
          _objc_release(uVar6);
          if (uVar14 - 2 < 0xb) {
LAB_107d91a80:
            _objc_release(uVar5);
            _objc_release(uVar10);
            lVar12 = 1;
            goto LAB_107d91a94;
          }
        }
        _objc_release(uVar5);
        _objc_release(uVar8);
        puVar15 = (undefined8 *)((long)puVar15 + 1);
      } while (puVar15 != puVar4);
      puVar11 = &uStack_2f0;
      puVar9 = auStack_230;
      puVar4 = puVar3;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined8 *)0x0);
    lVar12 = 0;
  }
LAB_107d91a94:
  _objc_release(puVar3);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) {
    return lVar12;
  }
  ___stack_chk_fail();
  _objc_retain(puVar11);
  _objc_retain(puVar9);
  uVar8 = 0;
  func_0x00010c0720c0();
  if ((uVar8 & 1) == 0) {
    iVar1 = 0x10ebd778;
    func_0x00010c0720c0();
    if ((iVar1 != 0) && (puVar3 = puVar11, func_0x00010bf529e0(), puVar3 == (undefined8 *)0x1)) {
      puVar3 = puVar11;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126d7c88;
      _objc_opt_class(PTR_PTR_1126d7c88);
      puVar4 = puVar3;
      _objc_opt_isKindOfClass(puVar3,puVar2);
      _objc_release(puVar3);
      if (((ulong)puVar4 & 1) != 0) goto LAB_107d91b24;
    }
    lVar12 = 0;
  }
  else {
LAB_107d91b24:
    lVar12 = 1;
  }
  _objc_release(puVar9);
  _objc_release(puVar11);
  return lVar12;
}



/* Entry: 107d91844; end: 107d91ae3; +[SCGalleryExportLogger _hasSpectaclesFromActivityItemProviders:] */

undefined8 FUN_107d91844(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(param_3);
  puVar10 = &uStack_1b0;
  puVar11 = auStack_f0;
  lVar2 = param_3;
  func_0x00010bf52a60();
  uVar12 = 0;
  if (lVar2 != 0) {
    lVar14 = *plStack_1a0;
    do {
      lVar17 = 0;
      do {
        if (*plStack_1a0 != lVar14) {
          _objc_enumerationMutation(param_3);
        }
        puVar3 = PTR_PTR_1126d7c90;
        uVar13 = *(ulong *)(lStack_1a8 + lVar17 * 8);
        _objc_retain(uVar13);
        _objc_opt_class(puVar3);
        uVar4 = uVar13;
        _objc_opt_isKindOfClass(uVar13,puVar3);
        uVar7 = uVar13;
        if ((uVar4 & 1) == 0) {
          uVar7 = 0;
        }
        _objc_retain(uVar7);
        _objc_release(uVar13);
        puVar3 = PTR_PTR_1126d7c88;
        _objc_retain(uVar13);
        _objc_opt_class(puVar3);
        uVar5 = uVar13;
        _objc_opt_isKindOfClass(uVar13,puVar3);
        uVar4 = uVar13;
        if ((uVar5 & 1) == 0) {
          uVar4 = 0;
        }
        _objc_retain(uVar4);
        _objc_release(uVar13);
        if (uVar7 == 0) {
          if (uVar4 != 0) {
            uStack_1c8 = 0;
            uStack_1d0 = 0;
            uStack_1b8 = 0;
            uStack_1c0 = 0;
            lStack_1e8 = 0;
            uStack_1f0 = 0;
            uStack_1d8 = 0;
            plStack_1e0 = (long *)0x0;
            func_0x00010c245680();
            _objc_retainAutoreleasedReturnValue();
            puVar11 = auStack_170;
            uVar5 = uVar13;
            puVar10 = &uStack_1f0;
            func_0x00010bf52a60();
            if (uVar5 != 0) {
              lVar15 = *plStack_1e0;
              do {
                uVar16 = 0;
                do {
                  if (*plStack_1e0 != lVar15) {
                    _objc_enumerationMutation(uVar13);
                  }
                  lVar6 = *(long *)(lStack_1e8 + uVar16 * 8);
                  func_0x00010b5fa088();
                  if (lVar6 - 2U < 0xb) {
                    _objc_release(uVar13);
                    uVar13 = 0;
                    goto LAB_107d91a80;
                  }
                  uVar16 = uVar16 + 1;
                } while (uVar5 != uVar16);
                puVar11 = auStack_170;
                uVar5 = uVar13;
                puVar10 = &uStack_1f0;
                func_0x00010bf52a60();
              } while (uVar5 != 0);
            }
            _objc_release(uVar13);
          }
        }
        else {
          uVar5 = uVar13;
          func_0x00010c23f220();
          _objc_retainAutoreleasedReturnValue();
          uVar16 = uVar5;
          func_0x00010b5fa088();
          _objc_release(uVar5);
          if (uVar16 - 2 < 0xb) {
LAB_107d91a80:
            _objc_release(uVar4);
            _objc_release(uVar13);
            uVar12 = 1;
            goto LAB_107d91a94;
          }
        }
        _objc_release(uVar4);
        _objc_release(uVar7);
        lVar17 = lVar17 + 1;
      } while (lVar17 != lVar2);
      puVar10 = &uStack_1b0;
      puVar11 = auStack_f0;
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
    uVar12 = 0;
  }
LAB_107d91a94:
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return uVar12;
  }
  ___stack_chk_fail();
  _objc_retain(puVar10);
  _objc_retain(puVar11);
  uVar7 = 0;
  func_0x00010c0720c0();
  if ((uVar7 & 1) == 0) {
    iVar1 = 0x10ebd778;
    func_0x00010c0720c0();
    if ((iVar1 != 0) && (puVar8 = puVar10, func_0x00010bf529e0(), puVar8 == (undefined8 *)0x1)) {
      puVar8 = puVar10;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126d7c88;
      _objc_opt_class(PTR_PTR_1126d7c88);
      puVar9 = puVar8;
      _objc_opt_isKindOfClass(puVar8,puVar3);
      _objc_release(puVar8);
      if (((ulong)puVar9 & 1) != 0) goto LAB_107d91b24;
    }
    uVar12 = 0;
  }
  else {
LAB_107d91b24:
    uVar12 = 1;
  }
  _objc_release(puVar11);
  _objc_release(puVar10);
  return uVar12;
}



/* Entry: 107d91ae4; end: 107d91bb7; +[SCGalleryExportLogger _isSaveAsVideoFromActivityItemProviders:activityType:] */

undefined8 FUN_107d91ae4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = 0;
  func_0x00010c0720c0();
  if ((uVar2 & 1) == 0) {
    iVar1 = 0x10ebd778;
    func_0x00010c0720c0();
    if ((iVar1 != 0) && (uVar2 = param_3, func_0x00010bf529e0(), uVar2 == 1)) {
      uVar2 = param_3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126d7c88;
      _objc_opt_class(PTR_PTR_1126d7c88);
      uVar4 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar3);
      _objc_release(uVar2);
      if ((uVar4 & 1) != 0) goto LAB_107d91b24;
    }
    uVar5 = 0;
  }
  else {
LAB_107d91b24:
    uVar5 = 1;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 107d91bb8; end: 107d92213; +[SCGalleryExportLogger _logGallerySnapShareForExportingItem:userTrackedLogger:] */

void FUN_107d91bb8(float param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126c17b0;
  _objc_retain(param_5);
  _objc_opt_new(puVar2);
  lVar5 = param_4;
  func_0x00010bf037a0(param_4);
  func_0x00010c167f20(puVar2,param_3,lVar5);
  lVar5 = param_4;
  func_0x00010bf03500(param_4);
  func_0x00010c167e60(puVar2,param_3,lVar5);
  lVar5 = param_4;
  func_0x00010c2a8340(param_4);
  func_0x00010c225be0(puVar2,param_3,lVar5);
  lVar5 = param_4;
  func_0x00010c0c6c20();
  uVar1 = lVar5 + 1;
  if (uVar1 < 0x1c) {
    if ((1L << (uVar1 & 0x3f) & 0xd8de0fdU) != 0) {
      uVar4 = 1;
      if ((lVar5 + 1U < 0x1c) && ((1L << (lVar5 + 1U & 0x3f) & 0xb4b5dbbU) != 0)) {
        if (lVar5 + 1U < 0x1b) {
          uVar4 = *(undefined8 *)(&UNK_10dee6a08 + (lVar5 + 1U) * 8);
        }
        else {
          uVar4 = 0;
        }
      }
      goto LAB_107d91ca8;
    }
    if (uVar1 == 8) {
      uVar4 = 5;
      goto LAB_107d91ca8;
    }
    if (uVar1 == 10) {
      uVar4 = 0xe;
      goto LAB_107d91ca8;
    }
  }
  uVar4 = 2;
LAB_107d91ca8:
  func_0x00010c1c5440(puVar2,param_3,uVar4);
  func_0x00010c0c4ba0(param_4);
  func_0x00010c205880((double)param_1,puVar2);
  lVar5 = param_4;
  func_0x00010c243700(param_4);
  func_0x00010c205840(puVar2,param_3,lVar5);
  lVar5 = param_4;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    lVar5 = param_4;
    func_0x00010c241220(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c204680(puVar2,param_3,lVar5);
    _objc_release(lVar5);
    lVar5 = param_4;
    func_0x00010bf97200(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1968c0(puVar2,param_3,lVar5);
    _objc_release(lVar5);
    lVar5 = param_4;
    func_0x00010bfbd220(param_4);
    func_0x00010c1a1ba0(puVar2,param_3,lVar5);
    lVar5 = param_4;
    func_0x00010c0c5040(param_4);
    func_0x00010c1c4760(puVar2,param_3,lVar5);
    lVar5 = param_4;
    func_0x00010c2485e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2075c0(puVar2,param_3,lVar5);
    _objc_release(lVar5);
  }
  lVar5 = param_4;
  func_0x00010c23fb00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c203d60(puVar2,param_3,lVar5);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010c247520(param_4);
  func_0x00010c206c40(puVar2,param_3,lVar5);
  lVar5 = param_4;
  func_0x00010bf89ea0(param_4);
  func_0x00010c191960(puVar2,param_3,lVar5);
  lVar5 = param_4;
  func_0x00010bf2fba0(param_4);
  func_0x00010c178460(puVar2,param_3,lVar5);
  lVar5 = param_4;
  func_0x00010bf5c920(param_4);
  func_0x00010c226060(puVar2,param_3,lVar5);
  lVar5 = param_4;
  func_0x00010bfadfa0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x000108442be8();
  func_0x00010c19c1c0(puVar2,param_3,lVar3);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010bfae8c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x000108442868();
  func_0x00010c19c760(puVar2,param_3,lVar3);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010bf30820(param_4);
  func_0x00010c178b80(puVar2,param_3,lVar5);
  lVar5 = param_4;
  func_0x00010bf2fe80(param_4);
  func_0x00010c1785c0(puVar2,param_3,lVar5);
  lVar5 = param_4;
  func_0x00010c253c00(param_4);
  func_0x00010c20abc0(puVar2,param_3,lVar5);
  lVar5 = param_4;
  func_0x00010c2551a0(param_4);
  func_0x00010c20ba80(puVar2,param_3,lVar5);
  lVar5 = param_4;
  func_0x00010c253de0(param_4);
  func_0x00010c20adc0(puVar2,param_3,lVar5);
  lVar5 = param_4;
  func_0x00010bfae160(param_4);
  func_0x00010c19c2c0(puVar2,param_3,lVar5);
  lVar5 = param_4;
  func_0x00010bfae340(param_4);
  func_0x00010c19c460(puVar2,param_3,lVar5);
  lVar5 = param_4;
  func_0x00010c087d20(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b73e0(puVar2,param_3,lVar5);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010c087d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar3 = param_4;
  if (lVar5 == 0) {
    func_0x00010c094540(param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c176040(puVar2,param_3,2);
    func_0x00010bfadd80(param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c19c240(puVar2,param_3,lVar3);
  _objc_release(lVar3);
  lVar5 = param_4;
  func_0x00010c116000();
  if (lVar5 != -1) {
    lVar5 = param_4;
    func_0x00010c116000(param_4);
    func_0x00010c1e3cc0(puVar2,param_3,lVar5);
  }
  lVar5 = param_4;
  func_0x00010c087b00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7380(puVar2,param_3,lVar5);
  _objc_release(lVar5);
  func_0x00010c226c40(puVar2,param_3,0);
  lVar5 = param_4;
  func_0x00010c2453c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2060e0(puVar2,param_3,lVar5);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010bf0f140(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16c4e0(puVar2,param_3,lVar5);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010c2a0400(param_4);
  func_0x00010c223e80(puVar2,param_3,lVar5);
  func_0x00010c1ddc60(puVar2,param_3,1);
  lVar5 = param_4;
  func_0x00010c0c9fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 == 0) {
    lVar5 = -1;
  }
  else {
    lVar3 = param_4;
    func_0x00010c0c9fe0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c067fc0();
    _objc_release(lVar3);
  }
  func_0x00010c1a1aa0(puVar2,param_3,lVar5);
  lVar5 = param_4;
  func_0x00010c095a20(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bc480(puVar2,param_3,lVar5);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010c22a840(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1feb20(puVar2,param_3,lVar5);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010c23ef00(param_4);
  func_0x00010c203740(puVar2,param_3,lVar5);
  lVar5 = param_4;
  func_0x00010bf8a880(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c191e80(puVar2,param_3,lVar5);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010bf8a420(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe120(puVar2,param_3,lVar5);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010bf8a400(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212c20(puVar2,param_3,lVar5);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x0001084425f0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c16c0(puVar2,param_3,lVar5);
  _objc_release(lVar5);
  uVar4 = param_5;
  func_0x00010c269d40(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c0b2e60(uVar4,param_3,puVar2);
  _objc_release(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107d92214; end: 107d9235f; +[SCGalleryExportLogger _logSpectaclesCustomExportWithParameters:activityItemProvider:spectaclesAppLogger:] */

void FUN_107d92214(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2485e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c087b00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c091c60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010b06f648();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c0c9fe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c067fc0();
  uVar7 = param_3;
  func_0x00010c22a840(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010be58d60(param_1,param_2,uVar1,uVar2,uVar4,param_4,uVar6,uVar7,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d92360; end: 107d924af; +[SCGalleryExportLogger _logSpectaclesCustomExportWithContentId:deviceId:lensInfo:activityItemProvider:contextMenuSource:shareChannel:spectaclesAppLogger:] */

void FUN_107d92360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  func_0x00010c248a80();
  if (((3 < param_6) || (1 < param_6)) || (param_6 != 0)) {
    uVar1 = param_9;
    func_0x00010c269d40(param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a43e0();
    _objc_release(uVar1);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d924b0; end: 107d92887; +[SCGalleryExportLogger _galleryStoryShareWithSnaps:contextMenuSource:entry:dataObjectContext:currentGalleryTab:] */

void FUN_107d924b0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126d7cd8;
  _objc_opt_new(PTR_PTR_1126d7cd8);
  lVar8 = param_3;
  func_0x00010bfb1920(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_107fde5f4();
  func_0x00010c2056c0(puVar1);
  _objc_release(lVar8);
  func_0x00010c1a1aa0(puVar1);
  func_0x00010c226c40(puVar1);
  func_0x00010bf529e0(param_3);
  func_0x00010c203cc0(puVar1);
  lVar8 = param_5;
  func_0x00010bf97200(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1968c0(puVar1);
  _objc_release(lVar8);
  func_0x00010bfbdda0(param_5);
  func_0x000108dfcb04();
  func_0x00010c196b80(puVar1);
  lVar8 = param_3;
  func_0x00010c0b8600(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c008340();
  func_0x00010c206340(puVar1);
  _objc_release(puVar3);
  lVar4 = param_5;
  func_0x00010bfbdda0();
  func_0x00010b5fa33c();
  if (lVar4 == 5) {
    lVar4 = param_5;
    func_0x00010bf977c0(param_5);
    lVar4 = (long)(int)lVar4;
    param_7 = param_5;
    func_0x00010b5f5864(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1a00(puVar1);
    _objc_release(lVar4);
    lVar4 = param_5;
    func_0x00010bf9e140(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1a20(puVar1);
    _objc_release(lVar4);
  }
  dVar11 = 0.0;
  _objc_retain(param_3);
  lVar5 = param_3;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  if (lVar5 == 0) {
    dVar12 = 0.0;
  }
  else {
    dVar12 = 0.0;
    do {
      lVar9 = 0;
      do {
        fVar10 = SUB84(dVar11,0);
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010bf8b160(*(undefined8 *)(lVar9 * 8));
        dVar11 = (double)fVar10;
        dVar12 = dVar12 + dVar11;
        lVar9 = lVar9 + 1;
      } while (lVar5 != lVar9);
      lVar5 = param_3;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release(param_3);
  func_0x00010c205880(dVar12,puVar1);
  func_0x00010c20ddc0(puVar1);
  func_0x00010c1ddc60(puVar1);
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  do {
    if (lVar4 == 0) {
      _objc_release(param_3);
      func_0x00010c20de00(puVar1);
LAB_107d9281c:
      _objc_release(puVar2);
      _objc_release(lVar8);
      _objc_release(param_6);
      _objc_release(param_5);
      _objc_release(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
        ___stack_chk_fail();
        lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_7);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
          ___stack_chk_fail();
          if (lRam0000000113727b00 != -1) {
            func_0x00010002a2fc(0x113727b00,&PTR___NSConcreteGlobalBlock_110a0c1c8);
          }
          puVar1 = puRam0000000113727b08;
          _objc_retain(puRam0000000113727b08);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
      return;
    }
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(param_3);
      }
      lVar6 = *(long *)(lVar9 * 8);
      func_0x00010b5fa088();
      if (10 < lVar6 - 2U) {
        _objc_release(param_3);
        goto LAB_107d9281c;
      }
      lVar9 = lVar9 + 1;
    } while (lVar4 != lVar9);
    lVar4 = param_3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 107d92888; end: 107d929f3;  */

void FUN_107d92888(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar2) {
    ___stack_chk_fail();
    if (lRam0000000113727b00 != -1) {
      func_0x00010002a2fc(0x113727b00,&PTR___NSConcreteGlobalBlock_110a0c1c8);
    }
    puVar1 = puRam0000000113727b08;
    _objc_retain(puRam0000000113727b08);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d929f4; end: 107d92a73; -[SCMemoriesActivityItemProvider initWithPlaceholderItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107d929f4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fb020;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithPlaceholderItem__112539180);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = 0;
    _dispatch_semaphore_create();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276ee4c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276ee4c) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276ee50) = 0;
    *(undefined4 *)((long)puVar1 + (long)_DAT_11276ee54) = 0x3f800000;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107d92a74; end: 107d92b2b; -[SCMemoriesActivityItemProvider generateItemWithProgressHandler:completionHandler:] */

void FUN_107d92a74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107d92b2c;
  puStack_50 = &UNK_11097cfb0;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107d92b2c; end: 107d92c3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d92b2c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retainBlock();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276ee58);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276ee58) = uVar1;
  _objc_release(uVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retainBlock();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276ee5c);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276ee5c) = uVar1;
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126d7c10;
  _objc_alloc();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf57460(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c017760(puVar2,param_2,uVar4,uVar1);
  lVar6 = (long)_DAT_11276ee60;
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6);
  *(undefined **)(*(long *)(param_1 + 0x20) + lVar6) = puVar2;
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(uVar4);
  func_0x00010c18b5e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6));
  lVar3 = *(long *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(lVar3 + lVar6);
  func_0x00010bef1980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbf660(uVar1,param_2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 107d92c40; end: 107d92c93; -[SCMemoriesActivityItemProvider createNewGenerator] */

undefined8 FUN_107d92c40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  return 0;
}



/* Entry: 107d92c94; end: 107d92c9b; -[SCMemoriesActivityItemProvider isStory] */

undefined8 FUN_107d92c94(void)

{
  return 0;
}



/* Entry: 107d92c9c; end: 107d92cef; -[SCMemoriesActivityItemProvider snapMediaTypes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d92c9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw();
  uVar3 = *(ulong *)(puVar1 + _DAT_11276ee64);
  if (uVar3 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
    _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
    _objc_opt_isKindOfClass(uVar3,puVar2);
    if ((uVar3 & 1) != 0) {
      puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12cc60();
      _objc_release(puVar2);
    }
  }
  if (*(long *)(puVar1 + _DAT_11276ee68) != 0) {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc60();
    _objc_release(puVar2);
  }
  puStack_58 = PTR_PTR_1126fb020;
  puStack_60 = puVar1;
  _objc_msgSendSuper2(&puStack_60,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107d92cf0; end: 107d92dcb; -[SCMemoriesActivityItemProvider dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d92cf0(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  uVar2 = *(ulong *)(param_1 + _DAT_11276ee64);
  if (uVar2 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
    _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
    _objc_opt_isKindOfClass(uVar2,puVar1);
    if ((uVar2 & 1) != 0) {
      puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12cc60();
      _objc_release(puVar1);
    }
  }
  if (*(long *)(param_1 + _DAT_11276ee68) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc60();
    _objc_release(puVar1);
  }
  puStack_38 = PTR_PTR_1126fb020;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107d92dcc; end: 107d9314b; -[SCMemoriesActivityItemProvider item] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d92dcc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = param_1;
  func_0x00010bef1980();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 == 0) {
LAB_107d92e40:
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f7fc0();
    _objc_release(lVar7);
    _dispatch_semaphore_wait(*(undefined8 *)(param_1 + _DAT_11276ee4c),0xffffffffffffffff);
  }
  else {
    uVar4 = *(ulong *)(param_1 + _DAT_11276ee6c);
    lVar8 = param_1;
    func_0x00010bef1980(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    _objc_release(lVar8);
    _objc_release(lVar7);
    if ((uVar4 & 1) == 0) goto LAB_107d92e40;
  }
  lVar7 = param_1;
  func_0x00010bf61540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar7 != 0) {
    lVar7 = param_1;
    func_0x00010bf61540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010be1c400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    lVar7 = (long)_DAT_11276ee64;
    uVar4 = *(ulong *)(param_1 + lVar7);
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_opt_isKindOfClass(uVar4,puVar1);
    if ((uVar4 & 1) == 0) {
      uVar4 = *(ulong *)(param_1 + lVar7);
      puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
      _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
      _objc_opt_isKindOfClass(uVar4,puVar1);
      if ((uVar4 & 1) == 0) {
        _objc_release(lVar8);
        goto LAB_107d93008;
      }
      lVar6 = param_1;
      func_0x00010be33a80();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      uVar2 = *(undefined8 *)(param_1 + lVar7);
      *(long *)(param_1 + lVar7) = lVar6;
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + _DAT_11276ee68);
      *(long *)(param_1 + _DAT_11276ee68) = lVar6;
      _objc_retain(lVar6);
      _objc_release(uVar2);
      lVar7 = *(long *)(param_1 + lVar7);
      _objc_retain(lVar7);
      _objc_release(lVar6);
    }
    else {
      lVar6 = (long)_DAT_11276ee68;
      _objc_retain(lVar8);
      uVar2 = *(undefined8 *)(param_1 + lVar6);
      *(long *)(param_1 + lVar6) = lVar8;
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + lVar7);
      _UIImageJPEGRepresentation(0x3ff0000000000000,uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e060();
      _objc_release(uVar2);
      lVar7 = *(long *)(param_1 + lVar6);
      _objc_retain(lVar7);
    }
    _objc_release(lVar8);
    goto LAB_107d93130;
  }
LAB_107d93008:
  lVar7 = param_1;
  func_0x00010bef1980();
  _objc_retainAutoreleasedReturnValue();
  iVar5 = _DAT_11276ee64;
  if (lVar7 == 0) {
LAB_107d93124:
    lVar7 = *(long *)(param_1 + iVar5);
  }
  else {
    iVar3 = (int)*(undefined8 *)PTR__UIActivityTypeAirDrop_110345980;
    lVar8 = param_1;
    func_0x00010bef1980(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    _objc_release(lVar8);
    _objc_release(lVar7);
    iVar5 = _DAT_11276ee64;
    if (iVar3 == 0) goto LAB_107d93124;
    uVar4 = *(ulong *)(param_1 + _DAT_11276ee64);
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_opt_isKindOfClass(uVar4,puVar1);
    puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
    if ((uVar4 & 1) == 0) goto LAB_107d93124;
    lVar8 = (long)_DAT_11276ee68;
    lVar7 = *(long *)(param_1 + lVar8);
    if (lVar7 == 0) {
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14cc80();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + lVar8);
      *(undefined **)(param_1 + lVar8) = puVar1;
      _objc_release(uVar2);
      _objc_release(uVar4);
      uVar2 = *(undefined8 *)(param_1 + iVar5);
      _UIImageJPEGRepresentation(0x3ff0000000000000,uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e060();
      _objc_release(uVar2);
      lVar7 = *(long *)(param_1 + lVar8);
    }
  }
  _objc_retain(lVar7);
LAB_107d93130:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 107d9314c; end: 107d931cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d9314c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11276ee70;
  uVar1 = *(long *)(param_1 + 0x20) + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)(param_1 + 0x20) + lVar3;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bef1860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 107d931d0; end: 107d933b7; -[SCMemoriesActivityItemProvider activityViewControllerLinkMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d931d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  lVar7 = (long)_DAT_11276ee70;
  lVar5 = param_1 + lVar7;
  _objc_loadWeakRetained();
  lVar1 = lVar5;
  func_0x00010bef1800();
  _objc_release(lVar5);
  if ((int)lVar1 == 0) {
    uVar6 = 0;
  }
  else {
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x3032000000;
    pcStack_58 = FUN_107d933b8;
    uStack_50 = 0x107d933c8;
    puVar2 = PTR__OBJC_CLASS___LPLinkMetadata_1126b3aa8;
    _objc_opt_new();
    uVar3 = param_1 + lVar7;
    puStack_48 = puVar2;
    _objc_loadWeakRetained();
    uVar4 = uVar3;
    _objc_opt_respondsToSelector();
    _objc_release(uVar3);
    if ((uVar4 & 1) != 0) {
      lVar5 = param_1 + lVar7;
      _objc_loadWeakRetained(lVar5);
      func_0x00010bef18a0();
      _objc_release(lVar5);
    }
    uVar3 = param_1 + lVar7;
    _objc_loadWeakRetained();
    uVar4 = uVar3;
    _objc_opt_respondsToSelector();
    _objc_release(uVar3);
    if ((uVar4 & 1) == 0) {
      lVar5 = 0;
    }
    else {
      param_1 = param_1 + lVar7;
      _objc_loadWeakRetained(param_1);
      lVar5 = param_1;
      func_0x00010bef1880();
      _objc_release(param_1);
    }
    func_0x000108dfe018(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(puStack_68[5]);
    _objc_release(lVar5);
    uVar6 = puStack_68[5];
    _objc_retain(uVar6);
    __Block_object_dispose(&uStack_70,8);
    _objc_release(puStack_48);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 107d933b8; end: 107d933cf;  */

void FUN_107d933b8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107d933d0; end: 107d93467;  */

void FUN_107d933d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSItemProvider_1126b3ab0;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  _UIImagePNGRepresentation(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c01fd40(puVar1);
  func_0x00010c1a97a0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107d93468; end: 107d934cb; -[SCMemoriesActivityItemProvider didGenerateItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d93468(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276ee64);
  *(undefined8 *)(param_1 + _DAT_11276ee64) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + _DAT_11276ee4c));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d934cc; end: 107d935c3; -[SCMemoriesActivityItemProvider activityItemGenerator:didGenerateItem:itemId:] */

void FUN_107d934cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_4);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x107d93554;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_4;
  _objc_retain(param_4);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_4);
  return;
}



/* Entry: 107d935c4; end: 107d936bb; -[SCMemoriesActivityItemProvider activityItemGenerator:didFailGeneratingItemWithError:itemId:] */

void FUN_107d935c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_4);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x107d9364c;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_4;
  _objc_retain(param_4);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_4);
  return;
}



/* Entry: 107d936bc; end: 107d93717; -[SCMemoriesActivityItemProvider activityItemGenerator:didUpdateProgress:] */

void FUN_107d936bc(undefined4 param_1,undefined8 param_2)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_107d93718;
  puStack_28 = &UNK_110868698;
  uStack_20 = param_2;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_40);
  return;
}



/* Entry: 107d93718; end: 107d9373f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d93718(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276ee58);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107d93738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(*(undefined4 *)(param_1 + 0x28),lVar1);
    return;
  }
  return;
}



/* Entry: 107d93740; end: 107d9391f; -[SCMemoriesActivityItemProvider _generateUniqueURLInTemporaryDirectoryForFilename:] */

void FUN_107d93740(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010c14cc60(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  puVar4 = puVar1;
  func_0x00010c0f58c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c0f5800(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010bfacbe0(puVar2,param_2,puVar5);
  _objc_release(puVar5);
  puVar5 = puVar3;
  if ((int)puVar6 != 0) {
    do {
      puVar5 = puVar1;
      func_0x00010bdc2ce0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c0f5800();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110ebd6b8);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar6;
      func_0x00010c25ce40(puVar6,param_2,puVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar6;
      func_0x00010bdc2ca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar6);
      _objc_release(puVar7);
      _objc_release(puVar8);
      puVar3 = puVar5;
      func_0x00010c0f5800(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010bfacbe0(puVar2,param_2,puVar3);
      _objc_release(puVar3);
      puVar3 = puVar5;
    } while (((ulong)puVar6 & 1) != 0);
  }
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107d93920; end: 107d939b7; -[SCMemoriesActivityItemProvider _hardLinkFromURL:toURL:] */

void FUN_107d93920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c099760();
  uVar1 = param_4;
  if ((int)puVar3 == 0) {
    uVar1 = param_3;
  }
  _objc_retain(uVar1);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d939b8; end: 107d939c7; -[SCMemoriesActivityItemProvider userContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d939b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ee3c);
}



/* Entry: 107d939c8; end: 107d939d7; -[SCMemoriesActivityItemProvider setUserContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d939c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11276ee3c) = param_3;
  return;
}



/* Entry: 107d939d8; end: 107d939e7; -[SCMemoriesActivityItemProvider userSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d939d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ee74);
}



/* Entry: 107d939e8; end: 107d93a27; -[SCMemoriesActivityItemProvider setUserSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d939e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276ee74;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d93a28; end: 107d93a47; -[SCMemoriesActivityItemProvider delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d93a28(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276ee70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d93a48; end: 107d93a5b; -[SCMemoriesActivityItemProvider setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d93a48(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276ee70,param_3);
  return;
}



/* Entry: 107d93a5c; end: 107d93a6b; -[SCMemoriesActivityItemProvider progressWeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_107d93a5c(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11276ee54);
}



/* Entry: 107d93a6c; end: 107d93a7b; -[SCMemoriesActivityItemProvider setProgressWeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d93a6c(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + _DAT_11276ee54) = param_1;
  return;
}



/* Entry: 107d93a7c; end: 107d93a8b; -[SCMemoriesActivityItemProvider itemCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d93a7c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ee40);
}



/* Entry: 107d93a8c; end: 107d93a9b; -[SCMemoriesActivityItemProvider setItemCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d93a8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11276ee40) = param_3;
  return;
}



/* Entry: 107d93a9c; end: 107d93aab; -[SCMemoriesActivityItemProvider estimatedMediaSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d93a9c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ee44);
}



/* Entry: 107d93aac; end: 107d93abb; -[SCMemoriesActivityItemProvider setEstimatedMediaSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d93aac(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11276ee44) = param_3;
  return;
}



/* Entry: 107d93abc; end: 107d93acb; -[SCMemoriesActivityItemProvider skippedActivityTypes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d93abc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ee6c);
}



/* Entry: 107d93acc; end: 107d93ad7; -[SCMemoriesActivityItemProvider setSkippedActivityTypes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d93acc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107d93ad8; end: 107d93ae7; -[SCMemoriesActivityItemProvider spectaclesExportFormat] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d93ad8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ee50);
}



/* Entry: 107d93ae8; end: 107d93af7; -[SCMemoriesActivityItemProvider setSpectaclesExportFormat:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d93ae8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11276ee50) = param_3;
  return;
}



/* Entry: 107d93af8; end: 107d93b07; -[SCMemoriesActivityItemProvider uploadToYouTube] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107d93af8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276ee48);
}



/* Entry: 107d93b08; end: 107d93b17; -[SCMemoriesActivityItemProvider setUploadToYouTube:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d93b08(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276ee48) = param_3;
  return;
}



/* Entry: 107d93b18; end: 107d93b27; -[SCMemoriesActivityItemProvider customFilename] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d93b18(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ee78);
}



/* Entry: 107d93b28; end: 107d93b33; -[SCMemoriesActivityItemProvider setCustomFilename:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d93b28(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107d93b34; end: 107d93b43; -[SCMemoriesActivityItemProvider spectaclesAuxiliaryContentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d93b34(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ee7c);
}



/* Entry: 107d93b44; end: 107d93b83; -[SCMemoriesActivityItemProvider setSpectaclesAuxiliaryContentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d93b44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276ee7c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d93b84; end: 107d93b93; -[SCMemoriesActivityItemProvider previewAssetVideoProviderFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d93b84(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ee80);
}



/* Entry: 107d93b94; end: 107d93bd3; -[SCMemoriesActivityItemProvider setPreviewAssetVideoProviderFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d93b94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276ee80;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


