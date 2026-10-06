/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106dff3c8; end: 106dff47b; -[SCMemoriesSnapTranscoder _generateLensIdWithGallerySnap:] */

void FUN_106dff3c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126bc7b8;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7160(puVar1,param_2,param_3,0,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar4);
  puVar2 = puVar1;
  func_0x00010c0ef4a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106dff47c; end: 106dff597; -[SCMemoriesSnapTranscoder .cxx_destruct] */

void FUN_106dff47c(long param_1)

{
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106dff598; end: 106dff5b3;  */

void FUN_106dff598(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000106dff5a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,0);
  return;
}



/* Entry: 106dff5b4; end: 106dff5d7;  */

void FUN_106dff5b4(long param_1,undefined8 param_2)

{
  func_0x00010c12e1e0(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106dff5d8; end: 106dff74b; -[SCMemoriesSnapTranscodingServiceProvider provide] */

void FUN_106dff5d8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106dff74c;
  puStack_68 = &UNK_11097e020;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_88,auStack_58);
  _objc_retain(puVar1);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d2ae8;
  _objc_alloc(PTR_PTR_1126d2ae8);
  func_0x00010c02af20();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106dff74c; end: 106dff78b;  */

void FUN_106dff74c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5f300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106dff78c; end: 106dff85f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106dff78c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = lVar1 + _DAT_11275ecfc;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar4;
  func_0x00010c0c7640();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0c7600();
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  lVar4 = lVar1;
  if ((int)lVar3 == 0) {
    func_0x00010bde9ca0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be5ef40(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 106dff860; end: 106dff8ab; -[SCMemoriesSnapTranscodingServiceProvider _coreDataShareableMediaProviderWithTranscoder:] */

void FUN_106dff860(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d2af0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02af00();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106dff8ac; end: 106dff907; -[SCMemoriesSnapTranscodingServiceProvider _memTwoShareableMediaProvider] */

void FUN_106dff8ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d2af8;
  _objc_alloc(PTR_PTR_1126d2af8);
  FUN_106dff908(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0552a0(puVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106dff908; end: 106dff92b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106dff908(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11275ed00);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106dff92c; end: 106e0002b; -[SCMemoriesSnapTranscodingServiceProvider _memoriesSnapTranscoder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106dff92c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
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
  undefined8 uStack_f8;
  long lStack_c8;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520();
  _objc_release(puVar2);
  if (param_1 == 0) {
    lVar26 = 0;
  }
  else {
    lVar26 = param_1 + _DAT_11275ecf0;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar26;
  func_0x00010bf8a8a0();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar27;
  func_0x00010bf60020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  _objc_release(lVar4);
  _objc_release(lVar27);
  _objc_release(lVar3);
  _objc_release(lVar26);
  _objc_initWeak(auStack_70,param_1);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126d2b00;
  _objc_alloc();
  if (param_1 == 0) {
    lVar26 = 0;
  }
  else {
    lVar26 = param_1 + _DAT_11275ecb8;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar26;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar27 = 0;
  }
  else {
    lVar27 = param_1 + _DAT_11275ecbc;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar27;
  func_0x00010c0c84c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar28 = 0;
  }
  else {
    lVar28 = param_1 + _DAT_11275ecb4;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar28;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lStack_c8 = 0;
    lVar29 = 0;
  }
  else {
    lStack_c8 = param_1 + _DAT_11275ecd0;
    _objc_loadWeakRetained();
    lVar29 = param_1 + _DAT_11275ecc0;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar29;
  func_0x00010c1104a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar30 = 0;
  }
  else {
    lVar30 = param_1 + _DAT_11275ecc4;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar30;
  func_0x00010c26a1c0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  FUN_106e000c4();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c0c57a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x000106e000e8();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bfe8e40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x000106e000e8();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010bfe8ea0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uStack_f8 = 0;
    lVar31 = 0;
  }
  else {
    uStack_f8 = *(undefined8 *)(param_1 + _DAT_11275ed04);
    _objc_retain();
    lVar31 = param_1 + _DAT_11275ecd8;
    _objc_loadWeakRetained();
  }
  lVar15 = lVar31;
  func_0x00010bf93a20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar32 = 0;
  }
  else {
    lVar32 = param_1 + _DAT_11275ecd4;
    _objc_loadWeakRetained();
  }
  lVar16 = lVar32;
  func_0x00010bf27760();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar33 = 0;
  }
  else {
    lVar33 = param_1 + _DAT_11275ecdc;
    _objc_loadWeakRetained();
  }
  lVar17 = lVar33;
  func_0x00010c0c9f60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar34 = 0;
  }
  else {
    lVar34 = param_1 + _DAT_11275ece8;
    _objc_loadWeakRetained();
  }
  lVar18 = lVar34;
  func_0x00010bf4c240();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  FUN_106e000c4();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar19;
  func_0x00010c15a860();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar37 = 0;
  }
  else {
    lVar37 = param_1 + _DAT_11275ece4;
    _objc_loadWeakRetained();
  }
  lVar21 = lVar37;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar38 = 0;
  }
  else {
    lVar38 = param_1 + _DAT_11275ece0;
    _objc_loadWeakRetained();
  }
  lVar22 = lVar38;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar36 = 0;
  }
  else {
    lVar36 = param_1 + _DAT_11275ecf4;
    _objc_loadWeakRetained();
  }
  lVar23 = lVar36;
  func_0x00010c23ffe0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar35 = 0;
  }
  else {
    lVar35 = param_1 + _DAT_11275ecf8;
    _objc_loadWeakRetained();
  }
  lVar24 = lVar35;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  FUN_106dff908();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1;
  func_0x00010c240520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008980();
  _objc_release(lVar25);
  _objc_release(param_1);
  _objc_release(lVar24);
  _objc_release(lVar35);
  _objc_release(lVar23);
  _objc_release(lVar36);
  _objc_release(lVar22);
  _objc_release(lVar38);
  _objc_release(lVar21);
  _objc_release(lVar37);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar34);
  _objc_release(lVar17);
  _objc_release(lVar33);
  _objc_release(lVar16);
  _objc_release(lVar32);
  _objc_release(lVar15);
  _objc_release(lVar31);
  _objc_release(uStack_f8);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar30);
  _objc_release(lVar7);
  _objc_release(lVar29);
  _objc_release(lStack_c8);
  _objc_release(lVar6);
  _objc_release(lVar28);
  _objc_release(lVar4);
  _objc_release(lVar27);
  _objc_release(lVar3);
  _objc_release(lVar26);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106e0002c; end: 106e000c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e0002c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1 + _DAT_11275ecec;
    _objc_loadWeakRetained(lVar3);
  }
  lVar1 = lVar3;
  func_0x00010c2a29c0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(param_1);
  func_0x00010c0f05c0(lVar2,param_2,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106e000c4; end: 106e0010b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e000c4(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11275ecc8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e0010c; end: 106e00237; -[SCMemoriesSnapTranscodingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e0010c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275ed04,0);
  _objc_destroyWeak(param_1 + _DAT_11275ed00);
  _objc_destroyWeak(param_1 + _DAT_11275ecfc);
  _objc_destroyWeak(param_1 + _DAT_11275ecf8);
  _objc_destroyWeak(param_1 + _DAT_11275ecf4);
  _objc_destroyWeak(param_1 + _DAT_11275ecf0);
  _objc_destroyWeak(param_1 + _DAT_11275ecec);
  _objc_destroyWeak(param_1 + _DAT_11275ece8);
  _objc_destroyWeak(param_1 + _DAT_11275ece4);
  _objc_destroyWeak(param_1 + _DAT_11275ece0);
  _objc_destroyWeak(param_1 + _DAT_11275ecdc);
  _objc_destroyWeak(param_1 + _DAT_11275ecd8);
  _objc_destroyWeak(param_1 + _DAT_11275ecd4);
  _objc_destroyWeak(param_1 + _DAT_11275ecd0);
  _objc_destroyWeak(param_1 + _DAT_11275eccc);
  _objc_destroyWeak(param_1 + _DAT_11275ecc8);
  _objc_destroyWeak(param_1 + _DAT_11275ecc4);
  _objc_destroyWeak(param_1 + _DAT_11275ecc0);
  _objc_destroyWeak(param_1 + _DAT_11275ecbc);
  _objc_destroyWeak(param_1 + _DAT_11275ecb8);
  _objc_destroyWeak(param_1 + _DAT_11275ecb4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275ecb0);
  return;
}



/* Entry: 106e00238; end: 106e004af; -[SCGalleryAddItemsToStoryOperation initWithGalleryStoryEntry:selectionItems:selectedSnaps:containerViewController:context:editDataMutator:memoriesMergedDataSource:videoImporter:userTrackedLogger:circumstanceEngine:] */

undefined8 *
FUN_106e00238(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  puStack_68 = PTR_PTR_1126f6f88;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar5 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar5);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar5 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar5);
    _objc_storeWeak(puVar1 + 3,param_6);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
  }
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



/* Entry: 106e004b0; end: 106e006ef; -[SCGalleryAddItemsToStoryOperation initWithGalleryStoryEntry:selectionItems:selectedSnaps:containerViewController:context:editDataMutator:memoriesMergedDataSource:videoImporter:userTrackedLogger:circumstanceEngine:performer:] */

undefined8 *
FUN_106e004b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  puStack_68 = PTR_PTR_1126f6f88;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    _objc_storeWeak(puVar1 + 3,param_6);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[6];
    puVar1[6] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
  }
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



/* Entry: 106e006f0; end: 106e00803; -[SCGalleryAddItemsToStoryOperation runWithCompletionBlock:] */

void FUN_106e006f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d2b08;
  _objc_alloc(PTR_PTR_1126d2b08);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  lVar2 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043e60(puVar1,param_2,uVar4,uVar5,lVar2,1,uVar3,*(undefined8 *)(param_1 + 0x48));
  _objc_release(uVar3);
  _objc_release(lVar2);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106e00804;
  puStack_68 = &UNK_11097e140;
  lStack_60 = param_1;
  uStack_58 = param_3;
  _objc_retain(param_3);
  func_0x00010c142c20(puVar1,param_2,0,&puStack_80);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release(puVar1);
  return;
}



/* Entry: 106e00804; end: 106e00a93;  */

void FUN_106e00804(long param_1,int param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined1 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar2 = param_8;
  _objc_retain();
  if (param_2 == 0) {
    if ((param_3 & 1) == 0) {
      lVar5 = *(long *)(param_1 + 0x20) + 0x18;
      _objc_loadWeakRetained(lVar5);
      func_0x000107dffcbc();
      _objc_release(lVar5);
    }
    lVar5 = *(long *)(param_1 + 0x28);
    if (lVar5 != 0) {
      (**(code **)(lVar5 + 0x10))(lVar5,param_3,0,0);
    }
  }
  else {
    _dispatch_group_create();
    uStack_a8 = 0;
    uStack_98 = 0x3032000000;
    pcStack_90 = FUN_106e00a94;
    uStack_88 = 0x106e00aa4;
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puStack_a0 = &uStack_a8;
    _objc_opt_new();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_106e00aac;
    puStack_d8 = &UNK_11097e0b0;
    puStack_80 = puVar3;
    _objc_retain(uVar2);
    uStack_c8 = *(undefined8 *)(param_1 + 0x20);
    uStack_d0 = uVar2;
    puStack_b0 = &uStack_a8;
    _objc_retain(param_6);
    uStack_c0 = param_6;
    _objc_retain(param_7);
    uStack_b8 = param_7;
    func_0x00010bf97e80(param_5);
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
    func_0x00010c11de00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_140 = puVar1;
    uStack_138 = 0xc2000000;
    pcStack_130 = FUN_106e00d34;
    puStack_128 = &UNK_11097e110;
    uStack_120 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(param_4);
    puStack_100 = &uStack_a8;
    uStack_118 = param_4;
    _objc_retain(param_6);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    uStack_110 = param_6;
    _objc_retain(uVar6);
    uStack_f8 = (undefined1)param_3;
    uStack_108 = uVar6;
    func_0x000100bc0718(uVar2,uVar4,&puStack_140);
    _objc_release(uVar4);
    _objc_release(uStack_108);
    _objc_release(uStack_110);
    _objc_release(uStack_118);
    _objc_release(uStack_b8);
    _objc_release(uStack_c0);
    _objc_release(uStack_d0);
    __Block_object_dispose(&uStack_a8,8);
    _objc_release(puStack_80);
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106e00a94; end: 106e00aab;  */

void FUN_106e00a94(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106e00aac; end: 106e00cb3;  */

void FUN_106e00aac(double param_1,long param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_3);
  if ((param_3 == (undefined *)0x0) ||
     (puVar1 = param_3, func_0x00010c0c6c20(), puVar1 != (undefined *)0x2)) {
    _objc_release(param_3);
  }
  else {
    func_0x00010bf8b160(param_3);
    dVar6 = param_1;
    func_0x00010c23cf80(PTR_PTR_1126b6600);
    _objc_release(param_3);
    if (dVar6 < param_1) {
      _dispatch_group_enter(*(undefined8 *)(param_2 + 0x20));
      uVar5 = *(undefined8 *)(param_2 + 0x28);
      _objc_retain(param_3);
      uVar4 = *(undefined8 *)(param_2 + 0x20);
      _objc_retain(uVar4);
      puVar2 = param_3;
      func_0x00010be9d4e0(uVar5);
      _objc_release(uVar4);
      puVar1 = param_3;
      goto LAB_106e00c68;
    }
  }
  puVar1 = PTR_PTR_1126d2b10;
  _objc_alloc();
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c0dfd40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  func_0x00010c035800();
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release(uVar4);
  puVar2 = puVar1;
  func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x40) + 8) + 0x28));
LAB_106e00c68:
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126d2b10;
  _objc_retain(puVar2);
  _objc_alloc(puVar1);
  func_0x00010c035800();
  _objc_release(puVar2);
  func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x30) + 8) + 0x28));
  _dispatch_group_leave(*(undefined8 *)(param_3 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106e00cb4; end: 106e00d33;  */

void FUN_106e00cb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d2b10;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c035800();
  _objc_release(param_3);
  func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28),param_2,
                      puVar1);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106e00d34; end: 106e00e3b;  */

void FUN_106e00d34(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
  func_0x00010bf51e00(uVar3);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106e00e3c;
  puStack_70 = &UNK_11097e0e0;
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  uStack_68 = uVar6;
  _objc_retain(uVar7);
  uStack_58 = *(undefined1 *)(param_1 + 0x48);
  uStack_60 = uVar7;
  func_0x00010c285920(uVar2,param_2,uVar4,uVar1,uVar3,uVar5,&puStack_88);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  return;
}



/* Entry: 106e00e3c; end: 106e00fab;  */

void FUN_106e00e3c(long param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar9 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar11 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar11);
  puVar10 = auStack_e8;
  lVar2 = lVar11;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar12 = *plStack_120;
    do {
      lVar13 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(lVar11);
        }
        func_0x00010c12cc60(puVar1);
        lVar13 = lVar13 + 1;
      } while (lVar2 != lVar13);
      puVar10 = auStack_e8;
      lVar2 = lVar11;
      puVar9 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar11);
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    puVar9 = (undefined8 *)param_2;
    puVar10 = param_3;
    (**(code **)(lVar2 + 0x10))(lVar2,*(undefined1 *)(param_1 + 0x30));
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  _objc_retain(puVar10);
  puVar3 = param_2;
  func_0x00010bdc72c0();
  if ((int)puVar3 == 0) {
    puVar1 = PTR_PTR_1126d2b18;
    _objc_alloc(PTR_PTR_1126d2b18);
    puVar7 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01cae0(0x4024000000000000,puVar1);
    _objc_release(puVar7);
    func_0x00010c1d5dc0(puVar1);
    puVar3 = param_2 + 0x18;
    _objc_loadWeakRetained(puVar3);
    func_0x00010c1e4760(puVar1);
    _objc_release(puVar3);
    uVar8 = *(undefined8 *)(param_2 + 0x30);
    func_0x00010c11de00(uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar9);
    _objc_retain(puVar10);
    func_0x00010bf9d320(puVar1);
    _objc_release(uVar8);
    _objc_release(puVar9);
    puVar3 = puVar10;
  }
  else {
    puVar1 = PTR_PTR_1126c3268;
    _objc_alloc(PTR_PTR_1126c3268);
    func_0x00010c01dbe0();
    puVar4 = *(undefined1 **)(param_2 + 0x48);
    func_0x00010c269d40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf165a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010bf9d3e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar9);
    _objc_retain(puVar10);
    func_0x00010c297260(puVar6);
    _objc_release(puVar6);
    _objc_release(puVar9);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar10);
    puVar10 = puVar4;
    puVar9 = (undefined8 *)puVar5;
  }
  _objc_release(puVar3);
  _objc_release(puVar9);
  _objc_release(puVar10);
  _objc_release(puVar1);
  return;
}



/* Entry: 106e00fac; end: 106e0125f; -[SCGalleryAddItemsToStoryOperation _segmentAsset:completion:] */

void FUN_106e00fac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
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
  lVar1 = param_1;
  func_0x00010bdc72c0();
  if ((int)lVar1 == 0) {
    puVar5 = PTR_PTR_1126d2b18;
    _objc_alloc(PTR_PTR_1126d2b18);
    puVar6 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01cae0(0x4024000000000000,puVar5,param_2,puVar6,param_3,0,
                        *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                        *(undefined8 *)(param_1 + 0x58));
    _objc_release(puVar6);
    func_0x00010c1d5dc0(puVar5,param_2,1);
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c1e4760(puVar5,param_2,lVar1);
    _objc_release(lVar1);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c11de00(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_106e01440;
    puStack_c8 = &UNK_11097e170;
    uStack_c0 = param_3;
    uStack_b8 = param_4;
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010bf9d320(puVar5,param_2,uVar7,&puStack_e0);
    _objc_release(uVar7);
    _objc_release(uStack_c0);
    uVar7 = uStack_b8;
  }
  else {
    puVar5 = PTR_PTR_1126c3268;
    _objc_alloc(PTR_PTR_1126c3268);
    func_0x00010c01dbe0();
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf165a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 8);
    uStack_80 = *(undefined8 *)PTR__kCMTimeRangeZero_110348668;
    uStack_68 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x18);
    uStack_70 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x10);
    uStack_58 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x28);
    uStack_60 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x20);
    uVar7 = uVar2;
    func_0x00010bf9d3e0(uVar2,param_2,param_3,puVar5,uVar3,
                        &PTR____CFConstantStringClassReference_110e87318,&uStack_80,0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar7;
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_106e01260;
    puStack_98 = &UNK_11085ac48;
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    uStack_90 = param_3;
    uStack_88 = param_4;
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c297260(uVar4,param_2,&puStack_b0,uVar8);
    _objc_release(uVar4);
    _objc_release(uStack_90);
    _objc_release(uStack_88);
    _objc_release(param_3);
    _objc_release(param_4);
    param_4 = uVar2;
    param_3 = uVar3;
  }
  _objc_release(uVar7);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(puVar5);
  return;
}



/* Entry: 106e01260; end: 106e0131f;  */

void FUN_106e01260(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106e01320;
  puStack_50 = &UNK_11084a9e8;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = param_2;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  _objc_retain(param_2);
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 106e01320; end: 106e0143f;  */

void FUN_106e01320(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x20) == 0) {
    puVar5 = *(undefined **)(param_1 + 0x30);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x000106e01438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(puVar5 + 0x10))(puVar5,0,0,0);
      return;
    }
  }
  else {
    puVar5 = PTR__OBJC_CLASS___AVAsset_1126aff38;
    func_0x00010bf0b9e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    func_0x000107f72060();
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    lVar2 = *(long *)(param_1 + 0x30);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,uVar1,puVar4,puVar3);
    _objc_release(puVar4);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
      return;
    }
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000106e0144c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar5 + 0x28) + 0x10))
            (*(long *)(puVar5 + 0x28),*(undefined8 *)(puVar5 + 0x20));
  return;
}



/* Entry: 106e01440; end: 106e0144f;  */

void FUN_106e01440(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106e0144c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106e01450; end: 106e01467; -[SCGalleryAddItemsToStoryOperation _addItemsShouldUseVisFromCof] */

void FUN_106e01450(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e87338,0,0);
  return;
}



/* Entry: 106e01468; end: 106e014ff; -[SCGalleryAddItemsToStoryOperation .cxx_destruct] */

void FUN_106e01468(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e01500; end: 106e016a7; -[SCGalleryCreateStoryWithItemsOperation initWithSelectionItems:selectedSnaps:storyDisplayName:containerViewController:context:videoImporter:memoriesMergedDataSource:memoriesStoryMutating:] */

undefined1 *
FUN_106e01500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f6f90;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_6);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e016a8; end: 106e016ab; -[SCGalleryCreateStoryWithItemsOperation runWithCompletionBlock:] */

void FUN_106e016a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be78a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__prepareMedia__11257bc28);
  return;
}



/* Entry: 106e016ac; end: 106e01c3b; -[SCGalleryCreateStoryWithItemsOperation _prepareMedia:] */

void FUN_106e016ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 uVar14;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
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
  lVar1 = *(long *)(param_1 + 8);
  func_0x000107da0334();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(lVar1);
  lVar5 = lVar1;
  func_0x00010bf52a60();
  iVar6 = (int)param_2;
  if (lVar5 != 0) {
    lVar11 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(lVar1);
        }
        uVar2 = *(ulong *)(lStack_128 + lVar12 * 8);
        func_0x00010c07b240();
        iVar6 = (int)param_2;
        if ((uVar2 & 1) != 0) {
          uVar14 = 1;
          goto LAB_106e0179c;
        }
        lVar12 = lVar12 + 1;
      } while (lVar5 != lVar12);
      lVar5 = lVar1;
      func_0x00010bf52a60();
      iVar6 = (int)param_2;
    } while (lVar5 != 0);
  }
  uVar14 = 0;
LAB_106e0179c:
  _objc_release(lVar1);
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126d2b08;
  _objc_alloc();
  lVar5 = param_1 + 0x10;
  _objc_loadWeakRetained();
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  uVar8 = 1;
  lVar11 = lVar5;
  uVar9 = uVar4;
  func_0x00010c043e60();
  _objc_release(uVar4);
  _objc_release(lVar5);
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  uStack_158 = 0x106e018c0;
  puStack_150 = &UNK_11097e1d0;
  lStack_148 = param_1;
  uStack_140 = param_3;
  uStack_138 = uVar14;
  _objc_retain(param_3);
  ppuVar7 = &puStack_168;
  uVar2 = 0;
  func_0x00010c142c20(puVar3);
  _objc_release(uStack_140);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar7);
  _objc_retain(lVar11);
  _objc_retain(uVar8);
  _objc_retain(uVar9);
  _objc_retain(uVar10);
  if (iVar6 == 0) {
    if ((uVar2 & 1) == 0) {
      lVar5 = *(long *)(lVar1 + 0x20) + 0x10;
      _objc_loadWeakRetained(lVar5);
      func_0x000107dffcbc();
      _objc_release(lVar5);
    }
    lVar5 = *(long *)(lVar1 + 0x28);
    if (lVar5 != 0) {
      (**(code **)(lVar5 + 0x10))(lVar5,uVar2,0,0);
    }
  }
  else {
    uVar4 = *(undefined8 *)(*(long *)(lVar1 + 0x20) + 0x40);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar8);
    uVar13 = *(undefined8 *)(lVar1 + 0x28);
    _objc_retain(uVar13);
    func_0x00010bf593c0(uVar4);
    _objc_release(uVar4);
    _objc_release(uVar13);
    _objc_release(uVar8);
  }
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar11);
  _objc_release(ppuVar7);
  return;
}



/* Entry: 106e01c3c; end: 106e01caf; -[SCGalleryCreateStoryWithItemsOperation .cxx_destruct] */

void FUN_106e01c3c(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e01cb0; end: 106e01ee7; -[SCGalleryDeleteItemsOperation initWithGalleryItems:gallerySnapItems:detachEnabled:presentingViewController:source:tabType:memoriesMergedDataSource:dataObjectContext:memoriesDeletionMutating:memoriesRetryMutating:memoriesSnapThumbnailGeneratorBuilder:linkManagementScopeServices:shouldUpdateAlertDialog:useSimpleDeleteTitle:] */

undefined8 *
FUN_106e01cb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined4 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_1126f6f98;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0xf] = param_7;
    puVar1[0x10] = param_8;
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar4 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar4 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar1 + 0x99) = param_5;
    _objc_storeWeak(puVar1 + 2,param_6);
    _objc_retain(param_9);
    uVar2 = puVar1[3];
    puVar1[3] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[4];
    puVar1[4] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[5];
    puVar1[5] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[6];
    puVar1[6] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[7];
    puVar1[7] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_14;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x9b) = (undefined1)param_15;
    *(undefined1 *)((long)puVar1 + 0x9a) = param_15._1_1_;
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[0x12];
    puVar1[0x12] = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106e01ee8; end: 106e0200f; -[SCGalleryDeleteItemsOperation initWithPhotoAsset:presentingViewController:source:tabType:] */

undefined8
FUN_106e01ee8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar3 = PTR_DAT_1126a4ec0;
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x00010010fab4(param_3,puVar3);
  uVar1 = param_3;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c016ea0(param_1);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return param_1;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be024f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return param_3;
}



/* Entry: 106e02010; end: 106e02013; -[SCGalleryDeleteItemsOperation cancel] */

void FUN_106e02010(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be024f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissAlertIfNeeded_11255e2d8);
  return;
}



/* Entry: 106e02014; end: 106e023af; -[SCGalleryDeleteItemsOperation runWithCompletionBlock:] */

undefined * FUN_106e02014(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar5;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_1;
  if ((param_1[0x40] & 1) != 0) goto LAB_106e02364;
  param_1[0x40] = 1;
  _objc_retainBlock();
  uVar10 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar10);
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  lVar14 = *(long *)(param_1 + 0x60);
  _objc_retain(lVar14);
  lVar8 = lVar14;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar8 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar14);
      }
      lVar15 = *(long *)(lVar12 * 8);
      lVar4 = lVar15;
      func_0x00010bf97060();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bfbdda0();
      iVar2 = (int)lVar5;
      func_0x00010b5fad2c();
      if (iVar2 == 0) {
        lVar5 = lVar15;
        func_0x00010bf97060();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010bfbdda0();
        func_0x00010b5fa33c();
        _objc_release(lVar5);
        _objc_release(lVar4);
        if (lVar6 == 8) goto LAB_106e0216c;
        func_0x00010befa120(puVar13);
      }
      else {
        _objc_release(lVar4);
LAB_106e0216c:
        func_0x00010bf97060(lVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        _objc_release(lVar15);
      }
      lVar12 = lVar12 + 1;
    } while (lVar8 != lVar12);
    lVar8 = lVar14;
    func_0x00010bf52a60();
  }
  _objc_release(lVar14);
  puVar7 = puVar3;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar7;
  _objc_release(uVar10);
  puVar7 = puVar13;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x60);
  *(undefined **)(param_1 + 0x60) = puVar7;
  _objc_release(uVar10);
  uVar10 = *(undefined8 *)(param_1 + 8);
  func_0x00010b5fd5f8(uVar10,1);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = uVar10;
  _objc_release(uVar11);
  uVar10 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c14cca0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = uVar10;
  _objc_release(uVar11);
  uVar10 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c14cca0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = uVar10;
  _objc_release(uVar11);
  uVar10 = *(undefined8 *)(param_1 + 8);
  param_2 = 2;
  func_0x00010b5fd5f8(uVar10,2);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = uVar10;
  _objc_release(uVar11);
  param_1[0x70] = 0;
  param_1[0x98] = 0;
  lVar8 = *(long *)(param_1 + 0x50);
  func_0x00010bf529e0();
  if (lVar8 == 0) {
    lVar8 = *(long *)(param_1 + 0x58);
    func_0x00010bf529e0();
    if (lVar8 != 0) goto LAB_106e02328;
    lVar8 = *(long *)(param_1 + 0x68);
    func_0x00010bf529e0();
    if (lVar8 != 0) goto LAB_106e02328;
    lVar8 = *(long *)(param_1 + 0x60);
    func_0x00010bf529e0();
    if (lVar8 != 0) goto LAB_106e02328;
    func_0x00010bde2800(param_1);
  }
  else {
LAB_106e02328:
    func_0x00010be7ac40(param_1);
  }
  _objc_release(puVar13);
  _objc_release();
LAB_106e02364:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar13 = *(undefined **)(*(long *)(puVar3 + 0x20) + 0x18);
  _objc_retain(param_2);
  func_0x00010c269d40(puVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar13;
  func_0x00010c0742e0();
  _objc_release(param_2);
  _objc_release(puVar13);
  return puVar3;
}



/* Entry: 106e023b0; end: 106e0247f;  */

undefined8 FUN_106e023b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0742e0();
  _objc_release(param_2);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 106e02480; end: 106e0248b;  */

void FUN_106e02480(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be71990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__performDelete__11257a000,param_2);
  return;
}



/* Entry: 106e0248c; end: 106e02523; -[SCGalleryDeleteItemsOperation _presentConfirmationAlert:] */

void FUN_106e0248c(long param_1,undefined8 param_2,long param_3)

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
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_106e02524;
    puStack_48 = &UNK_11084aaa8;
    lStack_40 = param_1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106e02524; end: 106e03017;  */

void FUN_106e02524(long param_1)

{
  bool bVar1;
  undefined **ppuVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined **ppuVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  ulong uVar24;
  uint uVar25;
  undefined8 uVar26;
  undefined **ppuVar27;
  undefined **ppuVar28;
  uint uVar29;
  long lVar30;
  undefined **ppuVar31;
  undefined8 uStack_298;
  long lStack_280;
  long lStack_278;
  long lStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  code *pcStack_250;
  undefined *puStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined8 uStack_220;
  undefined1 auStack_218 [8];
  long lStack_210;
  undefined **ppuStack_208;
  undefined1 uStack_200;
  undefined1 auStack_1f8 [8];
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar19 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(lVar19);
  lVar9 = lVar19;
  func_0x00010bf52a60();
  if (lVar9 == 0) {
    lStack_280 = 0;
    lStack_278 = 0;
    uStack_298 = 0;
    lStack_268 = 0;
  }
  else {
    lStack_280 = 0;
    lStack_278 = 0;
    lVar30 = 0;
    lVar20 = 0;
    lStack_268 = 0;
    lVar21 = *plStack_1a0;
    do {
      lVar23 = 0;
      do {
        if (*plStack_1a0 != lVar21) {
          _objc_enumerationMutation(lVar19);
        }
        uVar24 = *(ulong *)(lStack_1a8 + lVar23 * 8);
        uVar3 = uVar24;
        func_0x00010bfbd100();
        if (uVar3 == 2) {
          _objc_retain(uVar24);
          uVar3 = uVar24;
          func_0x00010c0c6c20();
          if (uVar3 == 1) {
            lStack_280 = lStack_280 + 1;
          }
          else {
            uVar3 = uVar24;
            func_0x00010c0c6c20();
            if (uVar3 == 2) {
              lStack_278 = lStack_278 + 1;
            }
          }
LAB_106e026b4:
          _objc_release(uVar24);
        }
        else if (uVar3 == 1) {
          _objc_retain(uVar24);
          uVar3 = uVar24;
          func_0x00010bfbdda0();
          lVar20 = lVar20 + 1;
          func_0x00010b5fa33c();
          if (uVar3 == 4) {
LAB_106e02634:
            lStack_268 = lStack_268 + 1;
          }
          else {
            uVar3 = uVar24;
            func_0x00010bfbdda0();
            func_0x00010b5fa33c();
            if (uVar3 == 8) goto LAB_106e02634;
            if (uVar24 == 0) goto LAB_106e026b4;
            lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar4;
            func_0x00010bfa7340();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar4);
            lVar4 = lVar5;
            func_0x00010bf529e0();
            if (lVar4 == 0) {
              uVar6 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x18);
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              uVar3 = uVar24;
              func_0x00010bf97200(uVar24);
              _objc_retainAutoreleasedReturnValue();
              uVar7 = uVar6;
              func_0x00010bfa7080();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar24);
              _objc_release(uVar3);
              _objc_release(uVar6);
              uVar24 = uVar7;
              if (uVar7 != 0) {
                lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
                func_0x00010c269d40();
                _objc_retainAutoreleasedReturnValue();
                lVar4 = lVar8;
                func_0x00010bfa7340();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar5);
                _objc_release(lVar8);
                lVar5 = lVar4;
              }
            }
            lVar4 = lVar5;
            func_0x00010b5f7894();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar5);
            lVar5 = lVar4;
            func_0x00010bf529e0();
            func_0x00010befa160(ppuVar2);
            _objc_release(lVar4);
            lStack_268 = lVar5 + lStack_268;
          }
          uVar3 = uVar24;
          func_0x00010bfbdda0();
          func_0x00010b5fa33c();
          lVar5 = lVar30;
          if (uVar3 == 2) {
            lVar5 = lVar30 + 1;
          }
          if ((1L << (uVar3 & 0x3f) & 0x6aU) != 0) {
            lVar5 = lVar30 + 1;
          }
          if (uVar3 < 7) {
            lVar30 = lVar5;
          }
          goto LAB_106e026b4;
        }
        lVar23 = lVar23 + 1;
      } while (lVar9 != lVar23);
      lVar9 = lVar19;
      func_0x00010bf52a60();
    } while (lVar9 != 0);
    uStack_298 = (ulong)CONCAT14(lVar20 == 1,(uint)(lVar30 == 1));
  }
  _objc_release(lVar19);
  lVar9 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010bf529e0();
  lVar19 = *(long *)(param_1 + 0x20);
  if (lVar9 == 0) {
    uVar29 = (uint)*(byte *)(lVar19 + 0x99);
  }
  else {
    uVar29 = 0;
  }
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  lVar19 = *(long *)(lVar19 + 0x60);
  _objc_retain(lVar19);
  lVar9 = lVar19;
  func_0x00010bf52a60();
  ppuVar31 = (undefined **)0x0;
  ppuVar11 = (undefined **)PTR____NSArray0__struct_11034ab48;
  if (lVar9 != 0) {
    lVar20 = *plStack_1e0;
    do {
      lVar30 = 0;
      ppuVar12 = ppuVar11;
      do {
        if (*plStack_1e0 != lVar20) {
          _objc_enumerationMutation(lVar19);
        }
        uVar26 = *(undefined8 *)(lStack_1e8 + lVar30 * 8);
        uVar22 = uVar26;
        func_0x00010bf97060();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar22;
        func_0x00010c080ca0();
        _objc_release(uVar22);
        if ((int)uVar10 == 0) {
          uVar22 = uVar26;
          func_0x00010bf97060();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar22;
          func_0x00010bfbdda0();
          uVar25 = (uint)uVar10;
          func_0x00010b5fad74();
          _objc_release(uVar22);
          uVar29 = uVar25 & uVar29;
        }
        else {
          uVar29 = 0;
          ppuVar31 = (undefined **)((long)ppuVar31 + 1);
        }
        func_0x00010c23f220(uVar26);
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = ppuVar12;
        func_0x00010bf09f60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar12);
        _objc_release(uVar26);
        lVar30 = lVar30 + 1;
        ppuVar12 = ppuVar11;
      } while (lVar9 != lVar30);
      lVar9 = lVar19;
      func_0x00010bf52a60();
    } while (lVar9 != 0);
  }
  _objc_release(lVar19);
  ppuVar12 = ppuVar11;
  func_0x00010b5f7894();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar11);
  ppuVar11 = ppuVar12;
  func_0x00010bf529e0();
  if (ppuVar11 == (undefined **)0x1) {
    lVar9 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    func_0x00010bf529e0();
    if (lVar9 != 0) goto LAB_106e02a0c;
    uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
    func_0x00010c0b8620(uVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar16;
    func_0x00010b7043dc();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar15;
    func_0x00010bf97060();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = uVar10;
    func_0x00010c245780();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar26;
    func_0x00010c0720c0();
    uVar25 = (uint)uVar17;
    _objc_release(uVar26);
    _objc_release(uVar10);
    _objc_release(uVar22);
    _objc_release(uVar16);
    _objc_release(uVar15);
    uVar29 = (uVar25 ^ 1) & uVar29;
  }
  else {
LAB_106e02a0c:
    uVar25 = 0;
  }
  ppuVar11 = ppuVar12;
  func_0x00010bf529e0();
  ppuVar11 = (undefined **)((long)ppuVar11 + lStack_268);
  if (((*(byte *)(*(long *)(param_1 + 0x20) + 0x9a) & 1) == 0) && (ppuVar11 != (undefined **)0x0)) {
    ppuVar13 = ppuVar11;
    func_0x000108dfe204();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar13 = &PTR____CFConstantStringClassReference_110db18b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db18b8,0);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar9 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar9 + 0x78) == 1) {
    ppuVar14 = ppuVar12;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    ppuVar27 = ppuVar14;
    func_0x00010bf2a8a0();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = ppuVar27 == (undefined **)0x0;
    _objc_release();
    _objc_release();
    lVar9 = *(long *)(param_1 + 0x20);
  }
  else {
    bVar1 = false;
    ppuVar14 = ppuVar13;
  }
  if (uVar25 == 0) {
    if ((*(long *)(lVar9 + 0x78) != 1 && ppuVar31 != (undefined **)0x0) && ppuVar31 == ppuVar11) {
      bVar1 = true;
    }
    if (bVar1) {
      func_0x000108dfd734();
      _objc_retainAutoreleasedReturnValue();
      ppuVar27 = ppuVar14;
      func_0x000108dfd6d4();
      _objc_retainAutoreleasedReturnValue();
      ppuVar18 = ppuVar27;
      func_0x000107e90834();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar13);
      if (ppuVar31 == (undefined **)0x0) {
        *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x98) = 1;
      }
    }
    else {
      if (((uint)uStack_298 & uStack_298._4_4_) == 1) {
        lVar9 = *(long *)(lVar9 + 0x60);
        func_0x00010bf529e0();
        if (lVar9 == 0) {
          ppuVar14 = &PTR____CFConstantStringClassReference_110e87398;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e87398,0);
          _objc_retainAutoreleasedReturnValue();
          ppuVar18 = ppuVar14;
          func_0x000107e90a8c();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          ppuVar27 = (undefined **)0x0;
          ppuVar31 = ppuVar13;
          goto joined_r0x000106e02bc8;
        }
      }
      ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      ppuVar18 = ppuVar13;
      if (ppuVar11 != (undefined **)0x0) {
        ppuVar14 = ppuVar11;
        func_0x000108dfe160();
        _objc_retainAutoreleasedReturnValue();
        ppuVar27 = (undefined **)0x0;
        ppuVar31 = ppuVar14;
        goto joined_r0x000106e02bc8;
      }
      if (lStack_278 == 0) {
        if (lStack_280 == 1) {
          ppuVar14 = &PTR____CFConstantStringClassReference_110e873b8;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e873b8,0);
          _objc_retainAutoreleasedReturnValue();
          ppuVar31 = &PTR____CFConstantStringClassReference_110e873f8;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e873f8,0);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          ppuVar14 = &PTR____CFConstantStringClassReference_110e873d8;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e873d8,0);
          _objc_retainAutoreleasedReturnValue();
          ppuVar31 = &PTR____CFConstantStringClassReference_110e87418;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e87418,0);
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else if (lStack_280 == 0) {
        if (lStack_278 == 1) {
          ppuVar14 = &PTR____CFConstantStringClassReference_110e87438;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e87438,0);
          _objc_retainAutoreleasedReturnValue();
          ppuVar31 = &PTR____CFConstantStringClassReference_110e87478;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e87478,0);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          ppuVar14 = &PTR____CFConstantStringClassReference_110e87458;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e87458,0);
          _objc_retainAutoreleasedReturnValue();
          ppuVar31 = &PTR____CFConstantStringClassReference_110e87498;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e87498,0);
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        ppuVar31 = &PTR____CFConstantStringClassReference_110e874b8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e874b8,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lStack_280 + lStack_278 == 0) {
          ppuVar28 = (undefined **)0x0;
          ppuVar27 = (undefined **)0x0;
          if ((uVar29 & 1) == 0) goto LAB_106e02e24;
          goto LAB_106e02eb0;
        }
        ppuVar31 = &PTR____CFConstantStringClassReference_110e874d8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e874d8,0);
        _objc_retainAutoreleasedReturnValue();
      }
      ppuVar27 = ppuVar31;
      ppuVar28 = ppuVar31;
      if ((uVar29 & 1) != 0) goto LAB_106e02eb0;
    }
  }
  else {
    ppuVar14 = &PTR____CFConstantStringClassReference_110e87398;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e87398,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar27 = ppuVar14;
    func_0x000108dfd6bc();
    _objc_retainAutoreleasedReturnValue();
    ppuVar18 = ppuVar27;
    func_0x000107e90a8c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    ppuVar31 = ppuVar13;
joined_r0x000106e02bc8:
    if ((uVar29 & 1) != 0) {
      ppuVar13 = ppuVar18;
      ppuVar28 = ppuVar27;
      if (ppuVar11 == (undefined **)0x1) {
        func_0x000108dfd6ec();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
LAB_106e02eb0:
        func_0x000108dfd704();
        _objc_retainAutoreleasedReturnValue();
        ppuVar18 = ppuVar13;
      }
      uStack_200 = 1;
      goto LAB_106e02ec4;
    }
  }
LAB_106e02e24:
  ppuVar31 = ppuVar2;
  func_0x00010bf51e00();
  ppuVar28 = ppuVar31;
  func_0x000109024330();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar31);
  if (ppuVar28 == (undefined **)0x0) {
    uStack_200 = 0;
    ppuVar31 = ppuVar27;
  }
  else {
    _objc_retain(ppuVar28);
    _objc_release(ppuVar27);
    uStack_200 = 0;
    ppuVar31 = ppuVar28;
  }
LAB_106e02ec4:
  _objc_release(ppuVar28);
  _objc_initWeak(auStack_1f8,*(undefined8 *)(param_1 + 0x20));
  puStack_260 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_258 = 0xc2000000;
  pcStack_250 = FUN_106e03060;
  puStack_248 = &UNK_11097e240;
  _objc_copyWeak(auStack_218,auStack_1f8);
  lStack_210 = lStack_280 + lStack_278;
  _objc_retain(ppuVar12);
  uVar22 = *(undefined8 *)(param_1 + 0x28);
  ppuStack_240 = ppuVar12;
  ppuStack_208 = ppuVar11;
  _objc_retain(uVar22);
  uStack_220 = uVar22;
  _objc_retain(ppuVar18);
  ppuStack_238 = ppuVar18;
  _objc_retain(ppuVar31);
  ppuStack_230 = ppuVar31;
  _objc_retain(ppuVar14);
  ppuVar11 = &puStack_260;
  ppuStack_228 = ppuVar14;
  func_0x000100162d98("APPSTORE",ppuVar11);
  _objc_release(ppuStack_228);
  _objc_release(ppuStack_230);
  _objc_release(ppuStack_238);
  _objc_release(uStack_220);
  _objc_release(ppuStack_240);
  _objc_destroyWeak(auStack_218);
  _objc_destroyWeak(auStack_1f8);
  _objc_release(ppuVar18);
  _objc_release(ppuVar31);
  _objc_release(ppuVar14);
  _objc_release(ppuVar12);
  _objc_release(ppuVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x00010c23f220(ppuVar11);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar11;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 106e03018; end: 106e0305f;  */

void FUN_106e03018(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c23f220(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106e03060; end: 106e0374f;  */

void FUN_106e03060(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  undefined *puStack_198;
  undefined1 *puStack_190;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(long *)(param_1 + 0x50) == 0) {
      uVar13 = *(undefined8 *)(lVar1 + 0x28);
      func_0x00010bf21f60(uVar13);
      _objc_retainAutoreleasedReturnValue();
      puStack_198 = PTR_PTR_1126d2b20;
      _objc_alloc();
      uVar2 = *(undefined8 *)(lVar1 + 0x20);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c008960();
      _objc_release(uVar2);
      _objc_release(uVar13);
    }
    else {
      puStack_198 = (undefined *)0x0;
    }
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar4 = PTR_PTR_1126aed70;
    puVar10 = PTR___NSConcreteStackBlock_11034bd00;
    if (*(char *)(param_1 + 0x60) == '\x01') {
      if (*(long *)(param_1 + 0x58) == 1) {
        ppuVar5 = &PTR____CFConstantStringClassReference_110e874f8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e874f8,0);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        ppuVar5 = ppuVar3;
        func_0x000108dfd32c();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar4 = PTR_PTR_1126aed70;
      puStack_c0 = puVar10;
      uStack_b8 = 0xc2000000;
      pcStack_b0 = FUN_106e03750;
      puStack_a8 = &UNK_110853c30;
      _objc_copyWeak(auStack_98,param_1 + 0x48);
      uVar13 = *(undefined8 *)(param_1 + 0x40);
      _objc_retain(uVar13);
      uStack_a0 = uVar13;
      func_0x00010beff480(puVar4);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar3;
      func_0x00010befa120(ppuVar3);
      if (*(long *)(param_1 + 0x58) == 1) {
        func_0x000107e90834();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x000108dfd71c();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar7 = PTR_PTR_1126aed70;
      puStack_f0 = puVar10;
      uStack_e8 = 0xc2000000;
      uStack_e0 = 0x106e03798;
      puStack_d8 = &UNK_110853c30;
      _objc_copyWeak(auStack_c8,param_1 + 0x48);
      uVar13 = *(undefined8 *)(param_1 + 0x40);
      _objc_retain(uVar13);
      uStack_d0 = uVar13;
      func_0x00010beff480(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(ppuVar3);
      _objc_release(puVar7);
      _objc_release(uStack_d0);
      _objc_destroyWeak(auStack_c8);
      _objc_release(ppuVar6);
      _objc_release(puVar4);
      _objc_release(uStack_a0);
      _objc_destroyWeak(auStack_98);
      _objc_release(ppuVar5);
    }
    else {
      puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_118 = 0xc2000000;
      uStack_110 = 0x106e037e8;
      puStack_108 = &UNK_110853c30;
      _objc_copyWeak(auStack_f8,param_1 + 0x48);
      uVar13 = *(undefined8 *)(param_1 + 0x40);
      _objc_retain(uVar13);
      uStack_100 = uVar13;
      func_0x00010beff480(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(ppuVar3);
      _objc_release(puVar4);
      _objc_release(uStack_100);
      _objc_destroyWeak(auStack_f8);
    }
    puVar4 = PTR_PTR_1126aed70;
    ppuVar5 = &PTR____CFConstantStringClassReference_110e87558;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e87558,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_150 = puVar10;
    uStack_148 = 0xc2000000;
    uStack_140 = 0x106e03830;
    puStack_138 = &UNK_110853c30;
    puStack_190 = auStack_128;
    _objc_copyWeak(puStack_190,param_1 + 0x48);
    uVar13 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar13);
    uStack_130 = uVar13;
    func_0x00010beff480(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    func_0x00010befa120(ppuVar3);
    if ((*(char *)(lVar1 + 0x9b) == '\x01') && ((*(byte *)(param_1 + 0x60) & 1) == 0)) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
      if (*(undefined ***)(param_1 + 0x30) != (undefined **)0x0) {
        ppuVar5 = *(undefined ***)(param_1 + 0x30);
      }
      _objc_retain(ppuVar5);
      ppuVar6 = ppuVar5;
      func_0x00010c08fa60();
      ppuVar14 = (undefined **)0x0;
      ppuVar8 = ppuVar5;
      if (ppuVar6 != (undefined **)0x0) {
        func_0x00010c25ce40(ppuVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        ppuVar14 = ppuVar5;
      }
      func_0x000108dfdf2c();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar14;
      if (*(long *)(param_1 + 0x50) + *(long *)(param_1 + 0x58) == 1) {
        func_0x000108dfdf44();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x000108dfdf5c();
        _objc_retainAutoreleasedReturnValue();
      }
      ppuVar9 = ppuVar8;
      func_0x00010c25ce40(ppuVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar8);
      _objc_initWeak(auStack_158,lVar1);
      puStack_180 = puVar10;
      uStack_178 = 0xc2000000;
      pcStack_170 = FUN_106e03878;
      puStack_168 = &UNK_110849f88;
      _objc_copyWeak(auStack_160,auStack_158);
      ppuVar6 = &puStack_180;
      _objc_retainBlock();
      puVar10 = PTR_PTR_1126aed78;
      _objc_alloc();
      ppuVar8 = ppuVar3;
      func_0x00010bf51e00(ppuVar3);
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      ppuStack_88 = ppuVar14;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_90 = &PTR____CFConstantStringClassReference_110e87358;
      puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfefea0();
      uVar13 = *(undefined8 *)(lVar1 + 0x88);
      *(undefined **)(lVar1 + 0x88) = puVar10;
      _objc_release(uVar13);
      _objc_release(puVar11);
      _objc_release(puVar7);
      _objc_release(ppuVar8);
      _objc_release(ppuVar6);
      _objc_destroyWeak(auStack_160);
      _objc_destroyWeak(auStack_158);
      _objc_release(ppuVar5);
    }
    else {
      puVar10 = PTR_PTR_1126aed78;
      _objc_alloc();
      ppuVar9 = ppuVar3;
      func_0x00010bf51e00(ppuVar3);
      func_0x00010bfefe80();
      ppuVar14 = *(undefined ***)(lVar1 + 0x88);
      *(undefined **)(lVar1 + 0x88) = puVar10;
    }
    _objc_release(ppuVar14);
    _objc_release(ppuVar9);
    lVar12 = lVar1 + 0x10;
    _objc_loadWeakRetained();
    func_0x00010c10eda0();
    _objc_release(lVar12);
    _objc_release(puVar4);
    _objc_release(uStack_130);
    _objc_destroyWeak(puStack_190);
    _objc_release(ppuVar3);
    _objc_release(puStack_198);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(puStack_190);
  __Unwind_Resume();
  lVar12 = lVar1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar12 != 0) {
    func_0x00010be024e0(lVar12);
    (**(code **)(*(long *)(lVar1 + 0x20) + 0x10))(*(long *)(lVar1 + 0x20),1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar12);
  return;
}



/* Entry: 106e03750; end: 106e03877;  */

void FUN_106e03750(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be024e0(lVar1);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106e03878; end: 106e03953;  */

undefined8 FUN_106e03878(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar1 = PTR_PTR_1126aead8;
  if (((param_1 == 0) || (*(long *)(param_1 + 0xa8) != 0)) ||
     (lVar4 = *(long *)(param_1 + 0xa0), lVar4 == 0)) {
    uVar3 = 0;
  }
  else {
    _objc_retain(lVar4);
    _objc_alloc(puVar1);
    uVar3 = 1;
    func_0x00010c038f40();
    lVar2 = lVar4;
    func_0x00010bf24360(lVar4,param_2,puVar1,1,param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0xa8);
    *(long *)(param_1 + 0xa8) = lVar2;
    _objc_retain();
    _objc_release(uVar5);
    func_0x00010bf17a60(lVar2);
    _objc_release(lVar2);
    _objc_release(lVar4);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 106e03954; end: 106e03997; -[SCGalleryDeleteItemsOperation _dismissAlertIfNeeded] */

void FUN_106e03954(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x88) != 0) {
    func_0x00010bf84b00(*(long *)(param_1 + 0x88),param_2,1,0);
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106e03998; end: 106e03b7f; -[SCGalleryDeleteItemsOperation _performDelete:] */

void FUN_106e03998(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  if (param_3 == 0) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x106e03b88;
    puStack_48 = &UNK_110842e18;
    uStack_40 = param_1;
    func_0x0001000d76cc("APPSTORE",&puStack_60);
  }
  else {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    uStack_28 = 0x106e03a28;
    puStack_20 = &UNK_110842e18;
    uStack_18 = param_1;
    func_0x00010bdfa140(param_1,param_2,&puStack_38);
  }
  return;
}



/* Entry: 106e03b80; end: 106e03b8f;  */

void FUN_106e03b80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde2810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s__complete_1125563a0);
  return;
}



/* Entry: 106e03b90; end: 106e03c67; -[SCGalleryDeleteItemsOperation _deleteFailedGalleryEntriesWithCompletion:] */

void FUN_106e03b90(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_106e03c68;
    puStack_48 = &UNK_1109033b0;
    lStack_40 = param_1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010bf6bd20(uVar2,param_2,uVar3,PTR___dispatch_main_q_11034be20,&puStack_60);
    _objc_release(uVar2);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106e03c68; end: 106e03c83;  */

void FUN_106e03c68(long param_1,int param_2)

{
  if (param_2 != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x70) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000106e03c80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 106e03c84; end: 106e03e63; -[SCGalleryDeleteItemsOperation _deleteGalleryEntriesWithCompletion:] */

void FUN_106e03c84(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 unaff_x22;
  undefined8 uVar6;
  undefined8 unaff_x26;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x58);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    (**(code **)(param_3 + 0x10))(param_3);
    goto LAB_106e03e40;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x58);
  puVar3 = PTR_PTR_1126b2220;
  _objc_alloc(PTR_PTR_1126b2220);
  if (*(ulong *)(param_1 + 0x78) < 4) {
    unaff_x22 = *(undefined8 *)(&PTR_PTR_11097e2c0)[*(ulong *)(param_1 + 0x78)];
    _objc_retain(unaff_x22);
  }
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + 0x78);
  if (lVar1 - 2U < 2) {
LAB_106e03d3c:
    unaff_x26 = 0;
    uVar5 = *(long *)(param_1 + 0x80) - 2;
    if ((uVar5 < 0xc) && ((0x983U >> (ulong)((uint)uVar5 & 0x1f) & 1) != 0)) {
      unaff_x26 = *(undefined8 *)(&UNK_10ddee2f0 + uVar5 * 8);
LAB_106e03d80:
      func_0x00010bafa2a4(unaff_x26);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    if (lVar1 == 1) {
      unaff_x26 = 0xd;
      goto LAB_106e03d80;
    }
    if (lVar1 == 0) goto LAB_106e03d3c;
  }
  func_0x00010c04a560(puVar3,param_2,unaff_x22,&PTR____CFConstantStringClassReference_110e87598,
                      puVar4,0,0,unaff_x26,0);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106e03e64;
  puStack_68 = &UNK_1109033b0;
  lStack_60 = param_1;
  _objc_retain(param_3);
  lStack_58 = param_3;
  func_0x00010bf6bbc0(uVar2,param_2,uVar6,0,puVar3,&puStack_80);
  _objc_release(puVar3);
  _objc_release(unaff_x26);
  _objc_release(puVar4);
  _objc_release(unaff_x22);
  _objc_release(uVar2);
  _objc_release(lStack_58);
LAB_106e03e40:
  _objc_release(param_3);
  return;
}



/* Entry: 106e03e64; end: 106e03e7b;  */

void FUN_106e03e64(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x70) = 1;
                    /* WARNING: Could not recover jumptable at 0x000106e03e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 106e03e7c; end: 106e03edf; -[SCGalleryDeleteItemsOperation _deleteGallerySnapsWithCompletion:] */

void FUN_106e03e7c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x60);
  _objc_retain(param_3);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  else {
    func_0x00010bdfa160(param_1,param_2,*(undefined8 *)(param_1 + 0x60),param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e03ee0; end: 106e03ff3; -[SCGalleryDeleteItemsOperation _deleteGallerySnaps:withCompletion:] */

void FUN_106e03ee0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_106e03ff4;
    puStack_48 = &UNK_11084aaa8;
    lStack_40 = param_1;
    lStack_38 = param_4;
    _objc_retain(param_4);
    func_0x0001000d76cc("APPSTORE",&puStack_60);
    lVar1 = lStack_38;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_4);
    lVar1 = param_3;
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106e03ff4; end: 106e0400b;  */

void FUN_106e03ff4(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x70) = 1;
                    /* WARNING: Could not recover jumptable at 0x000106e04008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 106e0400c; end: 106e046ab;  */

/* WARNING: Possible PIC construction at 0x000106e04054: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106e04200: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106e04058) */
/* WARNING: Removing unreachable block (ram,0x000106e0408c) */
/* WARNING: Removing unreachable block (ram,0x000106e0415c) */
/* WARNING: Removing unreachable block (ram,0x000106e04430) */
/* WARNING: Removing unreachable block (ram,0x000106e04178) */
/* WARNING: Removing unreachable block (ram,0x000106e04454) */
/* WARNING: Removing unreachable block (ram,0x000106e041b8) */
/* WARNING: Removing unreachable block (ram,0x000106e0409c) */
/* WARNING: Removing unreachable block (ram,0x000106e040a4) */
/* WARNING: Removing unreachable block (ram,0x000106e040dc) */
/* WARNING: Removing unreachable block (ram,0x000106e040f4) */
/* WARNING: Removing unreachable block (ram,0x000106e04120) */
/* WARNING: Removing unreachable block (ram,0x000106e04344) */
/* WARNING: Removing unreachable block (ram,0x000106e04128) */
/* WARNING: Removing unreachable block (ram,0x000106e0412c) */
/* WARNING: Removing unreachable block (ram,0x000106e04140) */
/* WARNING: Removing unreachable block (ram,0x000106e0414c) */
/* WARNING: Removing unreachable block (ram,0x000106e04348) */
/* WARNING: Removing unreachable block (ram,0x000106e04358) */
/* WARNING: Removing unreachable block (ram,0x000106e04204) */
/* WARNING: Removing unreachable block (ram,0x000106e042f0) */
/* WARNING: Removing unreachable block (ram,0x000106e04244) */
/* WARNING: Removing unreachable block (ram,0x000106e0430c) */
/* WARNING: Removing unreachable block (ram,0x000106e042c4) */
/* WARNING: Removing unreachable block (ram,0x000106e04300) */
/* WARNING: Removing unreachable block (ram,0x000106e04318) */
/* WARNING: Removing unreachable block (ram,0x000106e04324) */
/* WARNING: Removing unreachable block (ram,0x000106e041d4) */
/* WARNING: Removing unreachable block (ram,0x000106e041dc) */
/* WARNING: Removing unreachable block (ram,0x000106e041ec) */
/* WARNING: Removing unreachable block (ram,0x000106e041f4) */
/* WARNING: Removing unreachable block (ram,0x000106e04340) */
/* WARNING: Removing unreachable block (ram,0x000106e04460) */
/* WARNING: Removing unreachable block (ram,0x000106e0446c) */
/* WARNING: Removing unreachable block (ram,0x000106e044c8) */
/* WARNING: Removing unreachable block (ram,0x000106e044e0) */
/* WARNING: Removing unreachable block (ram,0x000106e0450c) */
/* WARNING: Removing unreachable block (ram,0x000106e04548) */
/* WARNING: Removing unreachable block (ram,0x000106e04514) */
/* WARNING: Removing unreachable block (ram,0x000106e04518) */
/* WARNING: Removing unreachable block (ram,0x000106e0452c) */
/* WARNING: Removing unreachable block (ram,0x000106e04538) */
/* WARNING: Removing unreachable block (ram,0x000106e0454c) */
/* WARNING: Removing unreachable block (ram,0x000106e0455c) */
/* WARNING: Removing unreachable block (ram,0x000106e04650) */
/* WARNING: Removing unreachable block (ram,0x000106e046a8) */
/* WARNING: Removing unreachable block (ram,0x000106e04688) */

void FUN_106e0400c(long param_1)

{
  func_0x00010bfb1920(*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010c23f230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 106e046ac; end: 106e046b3;  */

void FUN_106e046ac(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23f230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snap_11266d6b0);
  return;
}



/* Entry: 106e046b4; end: 106e04733;  */

void FUN_106e046b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0d3c80(uVar1);
  func_0x00010c12d500();
  func_0x00010bdfa160(*(undefined8 *)(param_1 + 0x30),param_2,uVar1,*(undefined8 *)(param_1 + 0x38))
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e04734; end: 106e047e3; -[SCGalleryDeleteItemsOperation _deletePhotoAssetsWithCompletion:] */

void FUN_106e04734(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_106e047e4;
    puStack_48 = &UNK_110858070;
    lStack_40 = param_1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x000107f6ef94(uVar2,&puStack_60);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106e047e4; end: 106e047ff;  */

void FUN_106e047e4(long param_1,int param_2)

{
  if (param_2 != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x70) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000106e047fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 106e04800; end: 106e0483f; -[SCGalleryDeleteItemsOperation _complete] */

void FUN_106e04800(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x48);
  uVar2 = 0;
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined1 *)(param_1 + 0x70));
    uVar2 = *(undefined8 *)(param_1 + 0x48);
  }
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106e04840; end: 106e0486b; -[SCGalleryDeleteItemsOperation memoriesLinkManagementUIDidDismiss] */

void FUN_106e04840(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf940a0(*(undefined8 *)(param_1 + 0xa8));
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e0486c; end: 106e0493f; -[SCGalleryDeleteItemsOperation .cxx_destruct] */

void FUN_106e0486c(long param_1)

{
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e04940; end: 106e049df; -[SCGalleryDeleteOriginalAssetsOperation initWithPhotoAssets:containerViewController:] */

undefined1 *
FUN_106e04940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f6fa0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e049e0; end: 106e04a13; -[SCGalleryDeleteOriginalAssetsOperation dealloc] */

void FUN_106e049e0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f6fa0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106e04a14; end: 106e04acb; -[SCGalleryDeleteOriginalAssetsOperation runWithCompletionBlock:] */

void FUN_106e04a14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0x18) = 1;
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar2);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x000108df8100();
    _objc_release(param_1);
    return;
  }
  *(undefined1 *)(param_1 + 0x29) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bde2810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__complete_1125563a0);
  return;
}



/* Entry: 106e04acc; end: 106e04b33;  */

void FUN_106e04acc(long param_1,int param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)(param_1 + 0x20);
  if (param_2 != 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_106e04b34;
    puStack_20 = &UNK_110841f20;
    func_0x000107f6ef94(*(undefined8 *)(lStack_18 + 8),&puStack_38);
    return;
  }
  *(undefined1 *)(lStack_18 + 0x29) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bde2810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s__complete_1125563a0);
  return;
}



/* Entry: 106e04b34; end: 106e04b43;  */

void FUN_106e04b34(long param_1,undefined1 param_2)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x29) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bde2810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s__complete_1125563a0);
  return;
}



/* Entry: 106e04b44; end: 106e04ba7; -[SCGalleryDeleteOriginalAssetsOperation _complete] */

void FUN_106e04b44(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_1 + 0x20);
  _objc_retainBlock();
  uVar1 = *(undefined1 *)(param_1 + 0x29);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar3);
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x28) = 1;
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106e04ba8; end: 106e04bdf; -[SCGalleryDeleteOriginalAssetsOperation .cxx_destruct] */

void FUN_106e04ba8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e04be0; end: 106e04ccb; -[SCGalleryPrepareMediaForAssetsOperation initWithPhotoAssets:containerViewController:showsProgressOverlay:videoImporter:] */

undefined1 *
FUN_106e04be0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f6fa8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar3;
    _objc_release(uVar4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    *(undefined1 *)((long)puVar1 + 0x18) = param_5;
    lVar2 = *(long *)((long)puVar1 + 8);
    func_0x00010bf529e0();
    *(bool *)((long)puVar1 + 0x30) = lVar2 != 0;
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = param_6;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e04ccc; end: 106e04cd3; -[SCGalleryPrepareMediaForAssetsOperation isLongRunning] */

undefined1 FUN_106e04ccc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x30);
}



/* Entry: 106e04cd4; end: 106e0506b; -[SCGalleryPrepareMediaForAssetsOperation runWithProgressBlock:completionBlock:] */

void FUN_106e04cd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 uVar17;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(param_1 + 0x50) = 1;
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar17 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar17);
  uVar17 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar17;
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 8));
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar3;
  _objc_release(uVar17);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 8));
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar3;
  _objc_release(uVar17);
  lVar4 = param_1 + 0x10;
  _objc_loadWeakRetained();
  if ((lVar4 != 0) && (cVar1 = *(char *)(param_1 + 0x18), _objc_release(), cVar1 == '\x01')) {
    lVar4 = param_1 + 0x10;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    puVar3 = PTR_PTR_1126c3290;
    _objc_alloc();
    func_0x00010bf20c00(lVar5);
    func_0x00010c013de0();
    uVar17 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar3;
    _objc_release(uVar17);
    func_0x00010c182cc0(*(undefined8 *)(param_1 + 0x48));
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x48));
    func_0x00010c219b60(*(undefined8 *)(param_1 + 0x48));
    func_0x00010befbb60(lVar5);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar5;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar5;
    func_0x00010c2793a0(lVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar5;
    func_0x00010bf1ff80(lVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar15);
    _objc_release(uVar14);
    _objc_release(lVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(lVar10);
    _objc_release(uVar9);
    _objc_release(uVar2);
    _objc_release(lVar8);
    _objc_release(uVar7);
    _objc_release(uVar17);
    _objc_release(lVar4);
    _objc_release(uVar6);
    _objc_release(lVar5);
  }
  func_0x00010be78a60();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  if (*(char *)(param_1 + 0x50) == '\x01') {
    *(undefined1 *)(param_1 + 0x53) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bde2810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
  return;
}



/* Entry: 106e0506c; end: 106e05083; -[SCGalleryPrepareMediaForAssetsOperation cancel] */

void FUN_106e0506c(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    *(undefined1 *)(param_1 + 0x53) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bde2810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__complete_1125563a0);
    return;
  }
  return;
}



/* Entry: 106e05084; end: 106e05087; -[SCGalleryPrepareMediaForAssetsOperation progressOverlayViewDidCancel:] */

void FUN_106e05084(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 106e05088; end: 106e05347; -[SCGalleryPrepareMediaForAssetsOperation _prepareMediaForIndex:] */

void FUN_106e05088(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010bf529e0();
  if (uVar2 <= param_3) {
    *(undefined1 *)(param_1 + 0x52) = 1;
    func_0x00010bede000(0x3f800000,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bde2810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__complete_1125563a0);
    return;
  }
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar11 = *(undefined8 *)(param_1 + 0x60);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_106e05348;
  puStack_b0 = &UNK_11097e2e0;
  lStack_a8 = param_1;
  uStack_a0 = param_3;
  uStack_98 = uVar2;
  _objc_retain();
  _objc_retain(uVar11);
  _objc_retain(&puStack_c8);
  lVar4 = lVar3;
  func_0x00010c0c6c20();
  if (lVar4 == 1) {
    puVar5 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = puVar1;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_106e05778;
    puStack_78 = &UNK_11097bad8;
    _objc_retain(&puStack_c8);
    ppuStack_70 = &puStack_c8;
    func_0x000107f6e46c(puVar5,lVar3,0,0,0,&puStack_90);
    _objc_release(puVar5);
    ppuVar6 = ppuStack_70;
  }
  else {
    lVar4 = lVar3;
    func_0x00010c0c6c20();
    if (lVar4 != 2) goto LAB_106e05308;
    ppuVar6 = (undefined **)PTR_PTR_1126c3268;
    _objc_alloc(PTR_PTR_1126c3268);
    func_0x00010c01dbe0();
    uVar7 = uVar11;
    func_0x00010c269d40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf165a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 8);
    puStack_90 = *(undefined **)PTR__kCMTimeRangeZero_110348668;
    puStack_78 = *(undefined **)(PTR__kCMTimeRangeZero_110348668 + 0x18);
    pcStack_80 = *(code **)(PTR__kCMTimeRangeZero_110348668 + 0x10);
    uStack_68 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x28);
    ppuStack_70 = *(undefined ***)(PTR__kCMTimeRangeZero_110348668 + 0x20);
    uVar9 = uVar7;
    func_0x00010bf9d3e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = puVar1;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_106e0588c;
    puStack_78 = &UNK_110857fa0;
    _objc_retain(&puStack_c8);
    ppuStack_70 = &puStack_c8;
    func_0x00010c297260(uVar10);
    _objc_release(uVar10);
    _objc_release(ppuStack_70);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
  }
  _objc_release(ppuVar6);
LAB_106e05308:
  _objc_release(&puStack_c8);
  _objc_release(uVar11);
  _objc_release(lVar3);
  _objc_release(lVar3);
  return;
}



/* Entry: 106e05348; end: 106e05467;  */

void FUN_106e05348(long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = *(long *)(param_1 + 0x20);
  if (*(char *)(lVar3 + 0x50) == '\x01') {
    if ((param_2 == 0) || (param_3 == 0)) {
      *(undefined1 *)(lVar3 + 0x52) = 0;
      lVar3 = *(long *)(param_1 + 0x20);
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)(lVar3 + 0x58);
      *(undefined8 *)(lVar3 + 0x58) = param_4;
      _objc_release(uVar2);
      func_0x00010bde2800(*(undefined8 *)(param_1 + 0x20));
    }
    else {
      func_0x00010befa120(*(undefined8 *)(lVar3 + 0x38));
      func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40));
      dVar4 = (double)NEON_ucvtf(*(undefined8 *)(param_1 + 0x30));
      func_0x00010bede000((float)((double)(*(long *)(param_1 + 0x28) + 1) / dVar4),
                          *(undefined8 *)(param_1 + 0x20));
      func_0x00010be78a60(*(undefined8 *)(param_1 + 0x20));
    }
  }
  else if (param_2 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc60();
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106e05468; end: 106e054c3; -[SCGalleryPrepareMediaForAssetsOperation _updateProgress:] */

void FUN_106e05468(undefined8 param_1,long param_2)

{
  if (*(long *)(param_2 + 0x20) != 0) {
    (**(code **)(*(long *)(param_2 + 0x20) + 0x10))(param_1);
  }
  if (*(long *)(param_2 + 0x48) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1e46b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,*(long *)(param_2 + 0x48),PTR_s_setProgress_animated__112656bd0,1);
    return;
  }
  return;
}



/* Entry: 106e054c4; end: 106e056f7; -[SCGalleryPrepareMediaForAssetsOperation _complete] */

void FUN_106e054c4(long param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_1 + 0x52) & 1) == 0) {
    puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = *(long *)(param_1 + 0x38);
    _objc_retain(lVar10);
    lVar6 = lVar10;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (lVar6 != 0) {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(lVar10);
        }
        func_0x00010c12cc60(puVar4);
        lVar11 = lVar11 + 1;
      } while (lVar6 != lVar11);
      lVar6 = lVar10;
      func_0x00010bf52a60();
    }
    _objc_release(lVar10);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    _objc_release(uVar5);
    _objc_release(puVar4);
  }
  lVar6 = *(long *)(param_1 + 0x28);
  _objc_retainBlock();
  uVar1 = *(undefined1 *)(param_1 + 0x52);
  uVar2 = *(undefined1 *)(param_1 + 0x53);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf51e00(uVar5);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf51e00(uVar7);
  uVar12 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar12);
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x00010c18b5e0();
    func_0x00010c12c960(*(undefined8 *)(param_1 + 0x48));
    uVar8 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    _objc_release(uVar8);
  }
  uVar8 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar8);
  *(undefined2 *)(param_1 + 0x50) = 0x100;
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  _objc_release(uVar8);
  if (lVar6 != 0) {
    (**(code **)(lVar6 + 0x10))(lVar6,uVar1,uVar2,uVar5,uVar7,uVar12);
  }
  _objc_release(uVar12);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(lVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar6 + 0x60,0);
  _objc_storeStrong(lVar6 + 0x58,0);
  _objc_storeStrong(lVar6 + 0x48,0);
  _objc_storeStrong(lVar6 + 0x40,0);
  _objc_storeStrong(lVar6 + 0x38,0);
  _objc_storeStrong(lVar6 + 0x28,0);
  _objc_storeStrong(lVar6 + 0x20,0);
  _objc_destroyWeak(lVar6 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar6 + 8,0);
  return;
}



/* Entry: 106e056f8; end: 106e05777; -[SCGalleryPrepareMediaForAssetsOperation .cxx_destruct] */

void FUN_106e056f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e05778; end: 106e0588b;  */

void FUN_106e05778(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0,0);
  }
  else {
    puVar1 = PTR_PTR_1126b24f0;
    func_0x00010bfbdde0(PTR_PTR_1126b24f0);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    _UIImageJPEGRepresentation(0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c14e060();
    lVar5 = *(long *)(param_1 + 0x20);
    if ((int)lVar3 == 0) {
      (**(code **)(lVar5 + 0x10))(lVar5,0,0,0);
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar5 + 0x10))(lVar5,puVar1,puVar4,0);
      _objc_release(puVar4);
    }
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106e0588c; end: 106e05a03;  */

void FUN_106e0588c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x106e05958;
  puStack_50 = &UNK_11084a9e8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = param_2;
  _objc_retain(uVar1);
  uStack_40 = param_3;
  uStack_38 = uVar1;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106e05a04; end: 106e05b63; -[SCGalleryPrepareMediaForItemsOperation initWithGallerySnaps:photoAssets:containerViewController:showsProgressOverlay:videoImporter:] */

undefined1 *
FUN_106e05a04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f6fb0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    uVar7 = param_3;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)((long)puVar2 + 8);
    *(undefined8 *)((long)puVar2 + 8) = uVar7;
    _objc_release(uVar6);
    uVar7 = param_4;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)((long)puVar2 + 0x10);
    *(undefined8 *)((long)puVar2 + 0x10) = uVar7;
    _objc_release(uVar6);
    _objc_storeWeak((undefined1 *)((long)puVar2 + 0x18),param_5);
    *(undefined1 *)((long)puVar2 + 0x20) = param_6;
    lVar3 = *(long *)((long)puVar2 + 0x10);
    func_0x00010bf529e0();
    if (lVar3 != 0) {
      puVar4 = PTR_PTR_1126d2b28;
      _objc_alloc();
      puVar5 = (undefined1 *)((long)puVar2 + 0x18);
      _objc_loadWeakRetained(puVar5);
      func_0x00010c035c60();
      uVar7 = *(undefined8 *)((long)puVar2 + 0x40);
      *(undefined **)((long)puVar2 + 0x40) = puVar4;
      _objc_release(uVar7);
      _objc_release(puVar5);
    }
    uVar1 = (undefined1)*(undefined8 *)((long)puVar2 + 0x40);
    func_0x00010c077120();
    *(undefined1 *)((long)puVar2 + 0x38) = uVar1;
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 106e05b64; end: 106e05c4f; -[SCGalleryPrepareMediaForItemsOperation initWithGalleryEntries:photoAssets:containerViewController:showsProgressOverlay:videoImporter:dataObjectContext:] */

undefined8
FUN_106e05b64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(param_8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x000107d9fed4(param_3,param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_8);
  func_0x00010c017300(param_1);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106e05c50; end: 106e05d7b; -[SCGalleryPrepareMediaForItemsOperation initWithSelectionItems:selectedSnaps:containerViewController:showsProgressOverlay:memoriesMergedDataSource:videoImporter:] */

undefined8
FUN_106e05c50(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x000107da0188(param_3,param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1;
  }
  _objc_retain(puVar2);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010bf09f80(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_4);
  puVar2 = param_3;
  func_0x000107da0480(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c017300(param_1);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 106e05d7c; end: 106e05d83; -[SCGalleryPrepareMediaForItemsOperation isLongRunning] */

undefined1 FUN_106e05d7c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x38);
}



/* Entry: 106e05d84; end: 106e060bf; -[SCGalleryPrepareMediaForItemsOperation runWithProgressBlock:completionBlock:] */

void FUN_106e05d84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(param_1 + 0x60) = 1;
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar16 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar16);
  uVar16 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar16;
  _objc_release(uVar2);
  lVar3 = param_1 + 0x18;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    cVar1 = *(char *)(param_1 + 0x20);
    _objc_release();
    if (cVar1 == '\x01') {
      lVar3 = param_1 + 0x18;
      _objc_loadWeakRetained();
      lVar4 = lVar3;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      puVar5 = PTR_PTR_1126c3290;
      _objc_alloc();
      func_0x00010bf20c00(lVar4);
      func_0x00010c013de0();
      uVar16 = *(undefined8 *)(param_1 + 0x58);
      *(undefined **)(param_1 + 0x58) = puVar5;
      _objc_release(uVar16);
      func_0x00010c182cc0(*(undefined8 *)(param_1 + 0x58),param_2,
                          (*(byte *)(param_1 + 0x38) ^ 0xff) & 1);
      func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x58),param_2,param_1);
      func_0x00010c219b60(*(undefined8 *)(param_1 + 0x58),param_2,0);
      func_0x00010befbb60(lVar4,param_2,*(undefined8 *)(param_1 + 0x58));
      puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar6 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar4;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar6;
      func_0x00010bf493a0(uVar6,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x58);
      uStack_88 = uVar16;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar4;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar7;
      func_0x00010bf493a0(uVar7,param_2,lVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + 0x58);
      uStack_80 = uVar2;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar4;
      func_0x00010c2793a0(lVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar9;
      func_0x00010bf493a0(uVar9,param_2,lVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_1 + 0x58);
      uStack_78 = uVar11;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar4;
      func_0x00010bf1ff80(lVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar12;
      func_0x00010bf493a0(uVar12,param_2,lVar13);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_70 = uVar14;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar5,param_2,puVar15);
      _objc_release(puVar15);
      _objc_release(uVar14);
      _objc_release(lVar13);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(lVar10);
      _objc_release(uVar9);
      _objc_release(uVar2);
      _objc_release(lVar8);
      _objc_release(uVar7);
      _objc_release(uVar16);
      _objc_release(lVar3);
      _objc_release(uVar6);
      _objc_release(lVar4);
    }
  }
  func_0x00010bede080(0,param_1);
  func_0x00010be78ae0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if (*(char *)(param_1 + 0x60) == '\x01') {
    uVar16 = *(undefined8 *)(param_1 + 0x40);
    *(undefined1 *)(param_1 + 99) = 1;
    _objc_retain(uVar16);
    func_0x00010bde2800(param_1);
    func_0x00010bf2dba0(uVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar16);
    return;
  }
  return;
}



/* Entry: 106e060c0; end: 106e0610f; -[SCGalleryPrepareMediaForItemsOperation cancel] */

void FUN_106e060c0(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x60) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined1 *)(param_1 + 99) = 1;
    _objc_retain(uVar1);
    func_0x00010bde2800(param_1);
    func_0x00010bf2dba0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106e06110; end: 106e06113; -[SCGalleryPrepareMediaForItemsOperation progressOverlayViewDidCancel:] */

void FUN_106e06110(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 106e06114; end: 106e061bf; -[SCGalleryPrepareMediaForItemsOperation _prepareMediaForPhotoAssets] */

void FUN_106e06114(long param_1,undefined8 param_2)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_106e061c0;
    puStack_30 = &UNK_11097e310;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_106e061c8;
    puStack_58 = &UNK_11097e340;
    lStack_50 = param_1;
    lStack_28 = param_1;
    func_0x00010c142c20(*(long *)(param_1 + 0x40),param_2,&puStack_48,&puStack_70);
    return;
  }
  *(undefined1 *)(param_1 + 0x62) = 1;
  func_0x00010bede080(0x3f800000,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bde2810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__complete_1125563a0);
  return;
}



/* Entry: 106e061c0; end: 106e061c7;  */

void FUN_106e061c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bede090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateProgressForPhotoAssets__1125951c8);
  return;
}



/* Entry: 106e061c8; end: 106e063b3;  */

void FUN_106e061c8(undefined8 param_1,long param_2,int param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar4 = *(long *)(param_2 + 0x20);
  if (*(char *)(lVar4 + 0x60) == '\x01') {
    if (param_3 == 0) {
      *(undefined1 *)(lVar4 + 0x62) = 0;
      lVar4 = *(long *)(param_2 + 0x20);
      _objc_retain(param_7);
      uVar5 = *(undefined8 *)(lVar4 + 0x68);
      *(undefined8 *)(lVar4 + 0x68) = param_7;
      _objc_release(uVar5);
    }
    else {
      *(undefined1 *)(lVar4 + 0x62) = 1;
      lVar4 = param_5;
      func_0x00010bf51e00();
      uVar5 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x48);
      *(long *)(*(long *)(param_2 + 0x20) + 0x48) = lVar4;
      _objc_release(uVar5);
      uVar5 = param_6;
      func_0x00010bf51e00();
      uVar6 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x50);
      *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x50) = uVar5;
      _objc_release(uVar6);
      param_1 = 0x3f800000;
      func_0x00010bede080(0x3f800000,*(undefined8 *)(param_2 + 0x20));
    }
    func_0x00010bde2800(*(undefined8 *)(param_2 + 0x20));
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    param_1 = 0;
    _objc_retain(param_5);
    lVar4 = param_5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_5);
        }
        func_0x00010c12cc60(puVar2);
        lVar7 = lVar7 + 1;
      } while (lVar4 != lVar7);
      lVar4 = param_5;
      func_0x00010bf52a60();
    }
    _objc_release(param_5);
    _objc_release(puVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(param_5 + 0x28) != 0) {
    (**(code **)(*(long *)(param_5 + 0x28) + 0x10))(param_1);
  }
  if (*(long *)(param_5 + 0x58) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1e46b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,*(long *)(param_5 + 0x58),PTR_s_setProgress_animated__112656bd0,1);
    return;
  }
  return;
}



/* Entry: 106e063b4; end: 106e0640f; -[SCGalleryPrepareMediaForItemsOperation _updateProgress:] */

void FUN_106e063b4(undefined8 param_1,long param_2)

{
  if (*(long *)(param_2 + 0x28) != 0) {
    (**(code **)(*(long *)(param_2 + 0x28) + 0x10))(param_1);
  }
  if (*(long *)(param_2 + 0x58) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1e46b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,*(long *)(param_2 + 0x58),PTR_s_setProgress_animated__112656bd0,1);
    return;
  }
  return;
}



/* Entry: 106e06410; end: 106e0644f; -[SCGalleryPrepareMediaForItemsOperation _updateProgressForPhotoAssets:] */

void FUN_106e06410(undefined4 param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = *(long *)(param_2 + 0x10);
  func_0x00010bf529e0();
  uVar2 = 0x3f800000;
  if (lVar1 != 0) {
    uVar2 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bede010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,param_2,PTR_s__updateProgress__1125951a8);
  return;
}



/* Entry: 106e06450; end: 106e066d3; -[SCGalleryPrepareMediaForItemsOperation _complete] */

void FUN_106e06450(long param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_1 + 0x62) & 1) == 0) {
    puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = *(long *)(param_1 + 0x48);
    _objc_retain(lVar12);
    lVar6 = lVar12;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (lVar6 != 0) {
      lVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(lVar12);
        }
        func_0x00010c12cc60(puVar4);
        lVar14 = lVar14 + 1;
      } while (lVar6 != lVar14);
      lVar6 = lVar12;
      func_0x00010bf52a60();
    }
    _objc_release(lVar12);
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = 0;
    _objc_release(uVar5);
    _objc_release(puVar4);
  }
  lVar6 = *(long *)(param_1 + 0x30);
  _objc_retainBlock();
  uVar1 = *(undefined1 *)(param_1 + 0x62);
  uVar2 = *(undefined1 *)(param_1 + 99);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf51e00(uVar5);
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf51e00(uVar7);
  uVar13 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar13);
  uVar8 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf51e00(uVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf51e00(uVar9);
  if (*(long *)(param_1 + 0x58) != 0) {
    func_0x00010c18b5e0();
    func_0x00010c12c960(*(undefined8 *)(param_1 + 0x58));
    uVar10 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
    _objc_release(uVar10);
  }
  uVar10 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar10);
  uVar10 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar10);
  uVar10 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  _objc_release(uVar10);
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar10);
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar10);
  *(undefined2 *)(param_1 + 0x60) = 0x100;
  uVar10 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  _objc_release(uVar10);
  uVar10 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar10);
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar10);
  if (lVar6 != 0) {
    (**(code **)(lVar6 + 0x10))(lVar6,uVar1,uVar2,uVar8,uVar9,uVar5,uVar7,uVar13);
  }
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar13);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(lVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar6 + 0x68,0);
  _objc_storeStrong(lVar6 + 0x58,0);
  _objc_storeStrong(lVar6 + 0x50,0);
  _objc_storeStrong(lVar6 + 0x48,0);
  _objc_storeStrong(lVar6 + 0x40,0);
  _objc_storeStrong(lVar6 + 0x30,0);
  _objc_storeStrong(lVar6 + 0x28,0);
  _objc_destroyWeak(lVar6 + 0x18);
  _objc_storeStrong(lVar6 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar6 + 8,0);
  return;
}



/* Entry: 106e066d4; end: 106e0675f; -[SCGalleryPrepareMediaForItemsOperation .cxx_destruct] */

void FUN_106e066d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e06760; end: 106e067a3; -[SCGalleryPrepareMediaForSnapsOperation initWithGallerySnaps:entryAssets:snapDocEntryIds:containerViewController:showsProgressOverlay:sendItemsCounter:requiredSnapAssetTypes:cloudFS:encryptedContentManager:contentDelivery:musicSelectionLoader:musicMediaLoader:grapheneRegistry:circumstanceEngine:snapDocDownloadingService:] */

void FUN_106e06760(void)

{
  func_0x00010c0172a0();
  return;
}



/* Entry: 106e067a4; end: 106e071af; -[SCGalleryPrepareMediaForSnapsOperation initWithGallerySnaps:entryAssets:snapDocEntryIds:containerViewController:showsProgressOverlay:sendItemsCounter:requiredSnapAssetTypes:cloudFS:onlyLoadBaseMediaCloudFile:encryptedContentManager:contentDelivery:musicSelectionLoader:musicMediaLoader:grapheneRegistry:circumstanceEngine:snapDocDownloadingService:] */

undefined8 *
FUN_106e067a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined *param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,char param_11,undefined4 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uStack_280;
  undefined *puStack_278;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  puStack_278 = PTR_PTR_1126f6fb8;
  puVar4 = &uStack_280;
  puVar16 = PTR_s_init_1125d9248;
  uStack_280 = param_1;
  _objc_msgSendSuper2(puVar4,PTR_s_init_1125d9248);
  if (puVar4 != (undefined8 *)0x0) {
    _objc_retain(param_10);
    uVar5 = puVar4[0x20];
    puVar4[0x20] = param_10;
    _objc_release(uVar5);
    _objc_retain(param_13);
    uVar5 = puVar4[0x22];
    puVar4[0x22] = param_13;
    _objc_release(uVar5);
    uVar5 = param_3;
    func_0x00010bf51e00();
    uVar17 = puVar4[1];
    puVar4[1] = uVar5;
    _objc_release(uVar17);
    puVar16 = param_6;
    _objc_storeWeak(puVar4 + 2,param_6);
    *(undefined1 *)(puVar4 + 3) = param_7;
    _objc_retain(param_8);
    uVar5 = puVar4[4];
    puVar4[4] = param_8;
    _objc_release(uVar5);
    _objc_retain(param_14);
    uVar5 = puVar4[0x23];
    puVar4[0x23] = param_14;
    _objc_release(uVar5);
    _objc_retain(param_15);
    uVar5 = puVar4[0x25];
    puVar4[0x25] = param_15;
    _objc_release(uVar5);
    _objc_retain(param_16);
    uVar5 = puVar4[0x26];
    puVar4[0x26] = param_16;
    _objc_release(uVar5);
    _objc_retain(param_17);
    uVar5 = puVar4[0x27];
    puVar4[0x27] = param_17;
    _objc_release(uVar5);
    _objc_retain(param_18);
    uVar5 = puVar4[0x24];
    puVar4[0x24] = param_18;
    _objc_release(uVar5);
    puVar6 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar5 = puVar4[0x1e];
    puVar4[0x1e] = puVar6;
    _objc_release(uVar5);
    _objc_retain(param_19);
    uVar5 = puVar4[0x28];
    puVar4[0x28] = param_19;
    _objc_release(uVar5);
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = puVar4[1];
    func_0x00010c14cca0();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar8;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar15 != 0) {
      lVar19 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar8);
        }
        lVar18 = *(long *)(lVar19 * 8);
        uVar17 = puVar4[0x20];
        func_0x00010c269d40(uVar17);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar17;
        if (param_11 == '\0') {
          func_0x00010c13a8c0(uVar17);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010c13a5c0(uVar17);
          _objc_retainAutoreleasedReturnValue();
        }
        lVar9 = lVar18;
        func_0x00010c241220(lVar18);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar6);
        _objc_release(lVar9);
        _objc_release(uVar5);
        _objc_release(uVar17);
        puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar18;
        func_0x00010c23f420();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar11;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        while (lVar9 != 0) {
          lVar20 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(lVar11);
            }
            uVar3 = (uint)*(undefined8 *)(lVar20 * 8);
            func_0x00010bf0b760();
            if (uVar3 < 0x16) {
              func_0x00010b697928();
            }
            puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = param_9;
            func_0x00010bf4b900();
            _objc_release(puVar12);
            if ((int)uVar5 != 0) {
              uVar17 = puVar4[0x20];
              func_0x00010c269d40(uVar17);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar17;
              func_0x00010c13a8e0();
              _objc_retainAutoreleasedReturnValue();
              puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar10);
              _objc_release(puVar12);
              _objc_release(uVar5);
              _objc_release(uVar17);
            }
            lVar20 = lVar20 + 1;
          } while (lVar9 != lVar20);
          lVar9 = lVar11;
          func_0x00010bf52a60();
        }
        _objc_release(lVar11);
        puVar12 = puVar10;
        func_0x00010bf529e0();
        if (puVar12 != (undefined *)0x0) {
          puVar12 = puVar10;
          func_0x00010bf51e00(puVar10);
          func_0x00010c241220(lVar18);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar7);
          _objc_release(lVar18);
          _objc_release(puVar12);
        }
        func_0x00010bedff60(puVar4);
        _objc_release(puVar10);
        lVar19 = lVar19 + 1;
      } while (lVar19 != lVar15);
      lVar15 = lVar8;
      func_0x00010bf52a60();
    }
    puVar10 = puVar6;
    func_0x00010bf51e00();
    uVar5 = puVar4[10];
    puVar4[10] = puVar10;
    _objc_release(uVar5);
    puVar10 = puVar7;
    func_0x00010bf51e00();
    uVar5 = puVar4[0xb];
    puVar4[0xb] = puVar10;
    _objc_release(uVar5);
    uVar5 = puVar4[1];
    _objc_retain(puVar4);
    func_0x00010c14cca0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = puVar4[8];
    puVar4[8] = uVar5;
    _objc_release(uVar17);
    uVar5 = puVar4[1];
    func_0x00010c14cca0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = puVar4[0x10];
    puVar4[0x10] = uVar5;
    _objc_release(uVar17);
    puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar5 = puVar4[0xe];
    puVar4[0xe] = puVar10;
    _objc_release(uVar5);
    puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar5 = puVar4[0xf];
    puVar4[0xf] = puVar10;
    _objc_release(uVar5);
    _objc_retain(param_5);
    uVar5 = puVar4[0xd];
    puVar4[0xd] = param_5;
    _objc_release(uVar5);
    puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    lVar19 = param_4;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar19;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar15 != 0) {
      lVar18 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar19);
        }
        puVar12 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = param_4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar11;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        while (lVar9 != 0) {
          lVar20 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(lVar11);
            }
            uVar17 = *(undefined8 *)(lVar20 * 8);
            uVar5 = uVar17;
            func_0x00010bf0b760();
            if ((uint)uVar5 < 0x16) {
              func_0x00010b697928();
            }
            uVar13 = puVar4[0x20];
            func_0x00010c269d40(uVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf0b260(uVar17);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar13;
            func_0x00010c13a860(uVar13);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar17);
            _objc_release(uVar13);
            puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar12);
            _objc_release(puVar14);
            _objc_release(uVar5);
            lVar20 = lVar20 + 1;
          } while (lVar9 != lVar20);
          lVar9 = lVar11;
          func_0x00010bf52a60();
        }
        _objc_release(lVar11);
        puVar14 = puVar12;
        func_0x00010bf529e0();
        if (puVar14 != (undefined *)0x0) {
          puVar14 = puVar12;
          func_0x00010bf51e00(puVar12);
          func_0x00010c1d0640(puVar10);
          _objc_release(puVar14);
        }
        _objc_release(puVar12);
        lVar18 = lVar18 + 1;
      } while (lVar18 != lVar15);
      lVar15 = lVar19;
      func_0x00010bf52a60();
    }
    _objc_release(lVar19);
    puVar12 = puVar10;
    func_0x00010bf51e00();
    uVar5 = puVar4[0xc];
    puVar4[0xc] = puVar12;
    _objc_release(uVar5);
    lVar15 = puVar4[8];
    func_0x00010bf529e0();
    *(bool *)(puVar4 + 7) = lVar15 != 0;
    _objc_release(puVar10);
    _objc_release(puVar4);
    _objc_release(lVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x00010c23ff80(puVar16);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return (undefined8 *)(ulong)(puVar16 == (undefined *)0x0);
}



/* Entry: 106e071b0; end: 106e071e7;  */

bool FUN_106e071b0(undefined8 param_1,long param_2)

{
  func_0x00010c23ff80(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_2 == 0;
}



/* Entry: 106e071e8; end: 106e07287;  */

bool FUN_106e071e8(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  _objc_retain(param_2);
  iVar4 = (int)*(undefined8 *)(param_1 + 0x20);
  lVar2 = param_2;
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde1840();
  if ((iVar4 == 0) || (lVar3 = param_2, func_0x00010b697ae8(param_2,2), (int)lVar3 != 0)) {
    lVar3 = param_2;
    func_0x00010c23ff80(param_2);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar3 == 0;
    _objc_release();
  }
  else {
    bVar1 = false;
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  return bVar1;
}


