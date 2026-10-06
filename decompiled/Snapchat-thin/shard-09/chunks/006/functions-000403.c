/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106f58c28; end: 106f58c2f; -[SCSpectaclesAuxiliaryContentMediaEntry setMetadataPath:] */

void FUN_106f58c28(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106f58c30; end: 106f58c37; -[SCSpectaclesAuxiliaryContentMediaEntry lastAccessedDate] */

undefined8 FUN_106f58c30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106f58c38; end: 106f58c3f; -[SCSpectaclesAuxiliaryContentMediaEntry setLastAccessedDate:] */

void FUN_106f58c38(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106f58c40; end: 106f58cd3; -[SCSpectaclesAuxiliaryContentMediaEntry .cxx_destruct] */

void FUN_106f58c40(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106f58cd4; end: 106f58d2b; -[SCSpectaclesAuxiliaryContentServiceProvider end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f58cd4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + _DAT_1127618cc));
  puStack_28 = PTR_PTR_1126f7f30;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f58d2c; end: 106f5922f; -[SCSpectaclesAuxiliaryContentServiceProvider _store] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f58d2c(long param_1,undefined8 param_2)

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
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  
  if (param_1 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = param_1 + _DAT_1127618d0;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar21;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar21);
  lVar21 = lVar1;
  func_0x00010bf878e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110e8f958,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d3680;
  _objc_alloc();
  lVar3 = param_1;
  FUN_106f59230();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c23c760();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x000106f59254();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c26b280();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_1127618dc;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar18;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x000106f59278(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf93a20();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x000106f5929c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c0d82c0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0468e0(puVar2,param_2,lVar4,lVar6,lVar7,lVar10,lVar13);
  lVar20 = (long)_DAT_1127618cc;
  uVar19 = *(undefined8 *)(param_1 + lVar20);
  *(undefined **)(param_1 + lVar20) = puVar2;
  _objc_release(uVar19);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar18);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar2 = PTR_PTR_1126ae790;
  _objc_alloc();
  func_0x00010c021520();
  puVar14 = PTR_PTR_1126d36c0;
  _objc_alloc();
  lVar4 = param_1;
  func_0x000106f59278();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf93a20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_1127618d8;
  _objc_loadWeakRetained();
  lVar18 = lVar3;
  func_0x00010c0c84c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar18;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x000106f5929c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c0d82c0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  FUN_106f59230(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c23c760();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x000106f59254(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar13;
  func_0x00010c26b280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffa7c0(puVar14,param_2,lVar21,lVar6,lVar7,lVar10,lVar12,lVar15,puVar2);
  _objc_release(lVar15);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar18);
  _objc_release(lVar3);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  puVar16 = PTR_PTR_1126d36c8;
  _objc_alloc(PTR_PTR_1126d36c8);
  lVar3 = param_1 + _DAT_1127618d4;
  _objc_loadWeakRetained(lVar3);
  lVar5 = lVar3;
  func_0x00010c249020();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_1127618f0;
  _objc_loadWeakRetained(lVar4);
  lVar18 = lVar4;
  func_0x00010c0c64e0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + lVar20);
  puVar17 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  func_0x00010c021520();
  func_0x00010c004000(puVar16,param_2,lVar21,lVar6,lVar18,uVar19,puVar14,puVar17);
  _objc_release(puVar17);
  _objc_release(lVar18);
  _objc_release(lVar4);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(puVar14);
  _objc_release(puVar2);
  _objc_release(lVar21);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 106f59230; end: 106f592bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f59230(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_1127618e0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f592c0; end: 106f5935b; -[SCSpectaclesAuxiliaryContentServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f592c0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127618f0);
  _objc_destroyWeak(param_1 + _DAT_1127618ec);
  _objc_destroyWeak(param_1 + _DAT_1127618e8);
  _objc_destroyWeak(param_1 + _DAT_1127618e4);
  _objc_destroyWeak(param_1 + _DAT_1127618e0);
  _objc_destroyWeak(param_1 + _DAT_1127618dc);
  _objc_destroyWeak(param_1 + _DAT_1127618d8);
  _objc_destroyWeak(param_1 + _DAT_1127618d4);
  _objc_destroyWeak(param_1 + _DAT_1127618d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127618cc,0);
  return;
}



/* Entry: 106f5935c; end: 106f5937f; -[SCSpectaclesAuxiliaryContentStore fileTypeForMediaType:] */

undefined8 FUN_106f5935c(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 - 2U < 0xb) {
    return *(undefined8 *)(&UNK_10de18e50 + (ulong)(param_3 - 2U) * 8);
  }
  return 1;
}



/* Entry: 106f59380; end: 106f593c3; -[SCSpectaclesAuxiliaryContentStore lutFileTypeForContentType:camera:] */

undefined8 FUN_106f59380(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = 8;
  if (param_3 != 1) {
    uVar1 = 5;
  }
  uVar3 = 6;
  if (param_3 != 0) {
    uVar3 = uVar1;
  }
  uVar1 = 7;
  if (param_3 != 1) {
    uVar1 = 5;
  }
  uVar2 = 5;
  if (param_4 == 1) {
    uVar2 = uVar1;
  }
  if (param_4 != 2) {
    uVar3 = uVar2;
  }
  return uVar3;
}



/* Entry: 106f593c4; end: 106f593eb; -[SCSpectaclesAuxiliaryContentStore _extensionForFileType:] */

undefined ** FUN_106f593c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 8) {
    return (undefined **)(&PTR_PTR_110985418)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110dcbf38;
}



/* Entry: 106f593ec; end: 106f5943b; -[SCSpectaclesAuxiliaryContentStore urlForIdentifier:fileType:] */

void FUN_106f593ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c0f5900();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee6300(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106f5943c; end: 106f594cf; -[SCSpectaclesAuxiliaryContentStore _urlForIdentifier:] */

void FUN_106f5943c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_retain(param_3);
  func_0x00010bf7f980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad300(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bdc2c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106f594d0; end: 106f59547; -[SCSpectaclesAuxiliaryContentStore pathForIdentifier:fileType:] */

void FUN_106f594d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010be0d680(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c25ce20(param_3,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106f59548; end: 106f59583; -[SCSpectaclesAuxiliaryContentStore _rectificationKeyForCamera:] */

void FUN_106f59548(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 unaff_x19;
  
  if (param_3 < 3) {
    unaff_x19 = *(undefined8 *)(&PTR_PTR_1109854d8)[param_3];
    _objc_retain(unaff_x19);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 106f59584; end: 106f596d7; -[SCSpectaclesAuxiliaryContentStore rectificationConfigForSnap:camera:] */

void FUN_106f59584(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010b5fa8b4();
  if ((int)puVar1 == 0) {
    puVar1 = param_3;
    func_0x00010b5fa088();
    if ((puVar1 == (undefined *)0x9) ||
       (puVar2 = param_3, func_0x00010b5fa088(), puVar1 = PTR_PTR_1126d3570,
       puVar2 == (undefined *)0xa)) {
      puVar2 = param_3;
      func_0x00010c0c5180(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = param_1;
      func_0x00010be87e40(param_1,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa6260(param_1,param_2,puVar2,puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar1 = param_1;
    }
    else {
      puVar2 = param_1;
      func_0x00010be5afe0(param_1,param_2,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bebf1e0(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d97c0(puVar1,param_2,puVar2,param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
    }
    _objc_release(puVar2);
  }
  else {
    puVar1 = PTR_PTR_1126d3570;
    func_0x00010c124660(PTR_PTR_1126d3570,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106f596d8; end: 106f5978f; -[SCSpectaclesAuxiliaryContentStore rectificationConfigForSnap:] */

void FUN_106f596d8(undefined *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010b5fa088();
  if ((lVar1 == 9) || (lVar1 = param_3, func_0x00010b5fa088(), lVar1 == 10)) {
    lVar1 = param_3;
    func_0x000109023714();
    param_1 = PTR_PTR_1126d3570;
    if ((int)lVar1 == 0) {
      func_0x00010c0bc4c0(PTR_PTR_1126d3570);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bfe0c60(PTR_PTR_1126d3570,param_2,2);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    puVar2 = param_1;
    func_0x00010c112d20(param_1,param_2,param_3);
    func_0x00010c124620(param_1,param_2,param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106f59790; end: 106f5992f; -[SCSpectaclesAuxiliaryContentStore _lookupTableForForSnap:primaryCamera:] */

void FUN_106f59790(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_3;
  _objc_retain();
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_106f59930;
  uStack_50 = 0x106f59940;
  uStack_48 = 0;
  _dispatch_group_create();
  uVar2 = param_1;
  func_0x00010c0b56e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _dispatch_group_enter(uVar1);
  _objc_retain(uVar1);
  puVar3 = PTR_PTR_1126ae790;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcd0e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar2);
  _objc_release(puVar3);
  _objc_release(param_1);
  _dispatch_group_wait(uVar1,0xffffffffffffffff);
  uVar4 = puStack_68[5];
  _objc_retain(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106f59930; end: 106f59947;  */

void FUN_106f59930(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106f59948; end: 106f599a3;  */

void FUN_106f59948(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106f599a4; end: 106f599ab; -[SCSpectaclesAuxiliaryContentStore _stabilizationFramesForSnap:] */

void FUN_106f599a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bebf210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,param_1,PTR_s__stabilizationFramesForSnap_foca_11258d628)
  ;
  return;
}



/* Entry: 106f599ac; end: 106f59aff; -[SCSpectaclesAuxiliaryContentStore _stabilizationFramesForSnap:focalLength:] */

void FUN_106f599ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = param_4;
  _objc_retain(param_4);
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_106f59930;
  uStack_60 = 0x106f59940;
  uStack_58 = 0;
  puStack_78 = &uStack_80;
  _dispatch_group_create();
  uVar2 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_106f59b00;
  puStack_a8 = &UNK_110862058;
  uStack_a0 = param_4;
  uStack_98 = param_2;
  puStack_90 = &uStack_80;
  uStack_88 = param_1;
  _objc_retain(param_4);
  func_0x000104c62d88(uVar1,uVar2,&puStack_c0);
  _objc_release(uVar2);
  _dispatch_group_wait(uVar1,0xffffffffffffffff);
  uVar2 = puStack_78[5];
  _objc_retain(uVar2);
  _objc_release(uStack_a0);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106f59b00; end: 106f59bd3;  */

void FUN_106f59b00(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010b5fa088();
  uVar5 = 0x4093000000000000;
  if (lVar1 != 8) {
    uVar5 = 0x409b000000000000;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0c5180(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f5920(uVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf12360();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c24d020(uVar5,uVar5,*(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar5 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = uVar2;
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106f59bd4; end: 106f59d43; -[SCSpectaclesAuxiliaryContentStore _imuDataFutureForGallerySnap:] */

void FUN_106f59bd4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x00010bfead80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126ae560;
    _objc_opt_new();
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x106f59cd0;
    puStack_48 = &UNK_110841f80;
    puStack_40 = puVar2;
    _objc_retain(lVar1);
    lStack_38 = lVar1;
    _objc_retain(puVar2);
    func_0x00010c0f7fc0(param_1,param_2,&puStack_60);
    _objc_release(param_1);
    puVar3 = puVar2;
    func_0x00010bfbc3e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lStack_38);
    _objc_release(puStack_40);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f59d44; end: 106f59de3; -[SCSpectaclesAuxiliaryContentStore _sixDofDataFutureForGallerySnap:] */

void FUN_106f59d44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010b697ae8(param_3,0x10);
  if ((int)param_3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126ae560;
    _objc_opt_new(PTR_PTR_1126ae560);
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(puVar1);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106f59de4; end: 106f5a013; -[SCSpectaclesAuxiliaryContentStore _retrieveWithSnapId:progressHandler:representation:] */

void FUN_106f59de4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_106f59930;
  uStack_60 = 0x106f59940;
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  puVar2 = PTR_PTR_1126ae560;
  puStack_58 = puVar1;
  _objc_opt_new();
  uVar3 = param_1;
  func_0x00010c0c64e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c13ebc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c0e0ea0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar2);
  _objc_retain(param_4);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_1);
  puVar1 = puVar2;
  func_0x00010bfbc3e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(uVar5);
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(puStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106f5a014; end: 106f5a0f3;  */

void FUN_106f5a014(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106f5a0f4; end: 106f5a1f7;  */

void FUN_106f5a0f4(long param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  puVar2 = param_2;
  func_0x00010c13ca20();
  if (puVar2 == (undefined *)0x2) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar3);
LAB_106f5a1c4:
    _objc_release(puVar2);
    lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    puVar2 = *(undefined **)(lVar1 + 0x28);
    *(undefined8 *)(lVar1 + 0x28) = 0;
  }
  else {
    if (puVar2 != (undefined *)0x1) {
      if (puVar2 != (undefined *)0x0) goto LAB_106f5a1e4;
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      puVar2 = param_2;
      func_0x00010bf63640(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43d60(uVar3);
      goto LAB_106f5a1c4;
    }
    lVar1 = *(long *)(param_1 + 0x28);
    if (lVar1 == 0) goto LAB_106f5a1e4;
    puVar2 = param_2;
    func_0x00010c117720(param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,puVar2);
  }
  _objc_release(puVar2);
LAB_106f5a1e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106f5a1f8; end: 106f5a22f;  */

void FUN_106f5a1f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106f5a230; end: 106f5a6d3; -[SCSpectaclesAuxiliaryContentStore _spectaclesLensMetadataForSnaps:depthEnabled:depthRequired:magicMomentEnabled:] */

void FUN_106f5a230(double param_1,double param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  double dVar9;
  double dVar10;
  
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010b5fc690();
  if ((int)uVar2 == 0) {
    puVar7 = (undefined *)0x0;
    goto LAB_106f5a498;
  }
  func_0x000109023974(uVar1);
  dVar9 = INFINITY;
  if (param_2 != 0.0) {
    dVar9 = param_1 / param_2;
  }
  dVar10 = 0.0;
  if (param_1 != 0.0) {
    dVar10 = dVar9;
  }
  uVar2 = uVar1;
  func_0x00010b5fa088();
  uVar4 = param_3;
  if ((uVar2 == 10) || (uVar2 = uVar1, func_0x00010b5fa088(), uVar2 == 9)) {
    uVar3 = param_5;
    func_0x00010bfb2660(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa6260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_retain(uVar4);
    _objc_opt_class(puVar7);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar7);
    uVar2 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar4);
    uVar5 = uVar3;
    func_0x00010bfb1920(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa6260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    puVar7 = PTR_PTR_1126d3550;
    _objc_retain(param_3);
    _objc_opt_class(puVar7);
    uVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    uVar5 = param_3;
    if ((uVar6 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(param_3);
    puVar8 = (undefined *)0x0;
    if ((uVar5 != 0) && (uVar2 != 0)) {
      uVar6 = param_3;
      func_0x00010c0f5800(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126d36d8;
      _objc_alloc(PTR_PTR_1126d36d8);
      func_0x00010c024740();
      _objc_release(uVar6);
    }
    puVar7 = PTR_PTR_1126d36e0;
    _objc_alloc(PTR_PTR_1126d36e0);
    func_0x00010b5fa088(uVar1);
    func_0x00010902369c(uVar1);
    func_0x00010c029ee0(puVar7);
    _objc_release(uVar5);
    _objc_release(param_3);
    _objc_release(puVar8);
    param_3 = uVar3;
LAB_106f5a47c:
    _objc_release(uVar2);
    _objc_release(uVar4);
  }
  else {
    uVar2 = uVar1;
    func_0x00010b5fa088();
    if ((uVar2 == 8) || (uVar2 = uVar1, func_0x00010b5fa088(), uVar2 == 7)) {
      func_0x00010c112d20();
      uVar3 = param_5;
      func_0x00010bfb1920(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x000109023b84();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf27cc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      uVar2 = param_3;
      func_0x00010c23e740();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126d36e0;
      _objc_alloc(PTR_PTR_1126d36e0);
      func_0x00010b5fa088(uVar3);
      func_0x00010902369c(uVar3);
      uVar5 = param_3;
      func_0x00010be37e40(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_3;
      func_0x00010c0b56e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b56e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c029f00(param_1,dVar10,puVar7);
      _objc_release(param_3);
      _objc_release(uVar6);
      _objc_release(uVar5);
      param_3 = uVar3;
      goto LAB_106f5a47c;
    }
    uVar2 = uVar1;
    func_0x00010b5fa088();
    puVar7 = PTR_PTR_1126d36e0;
    _objc_alloc(PTR_PTR_1126d36e0);
    func_0x00010b5fa088(uVar1);
    func_0x00010902369c(uVar1);
    if (uVar2 == 0xc) {
      func_0x00010c029f20(param_1,dVar10,puVar7);
      param_3 = 0;
    }
    else {
      func_0x00010be37e40(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c029ec0(param_1,dVar10,puVar7);
    }
  }
  _objc_release(param_3);
LAB_106f5a498:
  _objc_release(uVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106f5a6d4; end: 106f5a6db;  */

void FUN_106f5a6d4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c5190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_mediaId_11260ee78);
  return;
}



/* Entry: 106f5a6dc; end: 106f5a83f; -[SCSpectaclesAuxiliaryContentStore magicMomentLensMetadataForSnaps:] */

void FUN_106f5a6dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010b5fa088();
  if (lVar2 == 8) {
    _objc_release(lVar1);
  }
  else {
    lVar2 = param_3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010b5fa088();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 7) {
      puVar6 = (undefined *)0x0;
      goto LAB_106f5a820;
    }
  }
  puVar4 = PTR_PTR_1126ce8b8;
  _objc_alloc_init(PTR_PTR_1126ce8b8);
  func_0x00010c21e620();
  lVar1 = param_3;
  func_0x00010bfb1920(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010b5fa088();
  _objc_release(lVar1);
  func_0x00010bebe9c0(param_1,param_2,param_3,lVar2 != 8,lVar2 != 8,1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126d36e8;
  _objc_alloc(PTR_PTR_1126d36e8);
  puVar5 = puVar4;
  func_0x00010bf63640(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04afc0(puVar6,param_2,param_1,puVar5);
  _objc_release(puVar5);
  _objc_release(param_1);
  _objc_release(puVar4);
LAB_106f5a820:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106f5a840; end: 106f5a897; -[SCSpectaclesAuxiliaryContentStore lensMetadataForSnaps:depthEnabled:] */

void FUN_106f5a840(undefined8 param_1)

{
  undefined *puVar1;
  
  func_0x00010bebe9c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d36e8;
  _objc_alloc(PTR_PTR_1126d36e8);
  func_0x00010c04afc0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106f5a898; end: 106f5a8bf; -[SCSpectaclesAuxiliaryContentStore depthQualityProviderForSnaps:] */

undefined8 FUN_106f5a898(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bfb1920(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return 0;
}



/* Entry: 106f5a8c0; end: 106f5a8c7; -[SCSpectaclesAuxiliaryContentStore _serialNumberForGallerySnap:] */

void FUN_106f5a8c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  lVar1 = param_3;
  func_0x00010bf70720();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = param_3;
    func_0x00010c0c5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000109024fa8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  else {
    _objc_retain(lVar1);
    lVar3 = lVar1;
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106f5a8c8; end: 106f5a90f; -[SCSpectaclesAuxiliaryContentStore isCalibrationAvailableForGallerySnap:] */

undefined8 FUN_106f5a8c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bea1400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06db80(param_1,param_2,uVar1);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106f5a910; end: 106f5a9f7; -[SCSpectaclesAuxiliaryContentStore requestLookupTableForGallerySnap:primaryCamera:completion:] */

void FUN_106f5a910(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010b5fc690();
  if ((uVar1 & 1) == 0) {
    (**(code **)(param_5 + 0x10))(param_5,0);
  }
  else {
    uVar1 = param_3;
    func_0x00010c0c5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2832a0(param_1);
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x000109023b84(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b5fa088();
    func_0x00010c135ce0(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f5a9f8; end: 106f5aa5f; -[SCSpectaclesAuxiliaryContentStore requestLookupTableForGallerySnap:completion:] */

void FUN_106f5a9f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c112d20(param_1,param_2,param_3);
  func_0x00010c135cc0(param_1,param_2,param_3,uVar1,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f5aa60; end: 106f5ab27; -[SCSpectaclesAuxiliaryContentStore lookupTableForGallerySnap:primaryCamera:] */

void FUN_106f5aa60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_3);
  _objc_alloc_init();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106f5ab28;
  puStack_40 = &UNK_1109854f0;
  puStack_38 = puVar1;
  _objc_retain();
  func_0x00010c135cc0(param_1,param_2,param_3,param_4,&puStack_58);
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106f5ab28; end: 106f5ab33;  */

void FUN_106f5ab28(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 106f5ab34; end: 106f5ab8f; -[SCSpectaclesAuxiliaryContentStore lookupTableForGallerySnap:] */

void FUN_106f5ab34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c112d20(param_1,param_2,param_3);
  func_0x00010c0b56e0(param_1,param_2,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106f5ab90; end: 106f5ac0b; -[SCSpectaclesAuxiliaryContentStore primaryCameraForGallerySnap:] */

undefined8 FUN_106f5ab90(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_106f5ac0c();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0c5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c112d40(param_1,param_2,uVar1);
    _objc_release(uVar1);
  }
  else {
    param_1 = 2;
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106f5ac0c; end: 106f5ac5f;  */

bool FUN_106f5ac0c(long param_1)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010b5fa088();
  if (lVar2 == 10) {
    bVar1 = true;
  }
  else {
    lVar2 = param_1;
    func_0x00010b5fa088(param_1);
    bVar1 = lVar2 == 9;
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 106f5ac60; end: 106f5acab; -[SCSpectaclesAuxiliaryContentStore flightModeForGallerySnap:] */

undefined8 FUN_106f5ac60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb29a0(param_1,param_2,param_3);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106f5acac; end: 106f5aeb7; -[SCSpectaclesAuxiliaryContentStore extractMetadataForGallerySnap:fromAsset:] */

void FUN_106f5acac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010b5fc690();
  if ((int)uVar1 != 0) {
    uVar1 = param_3;
    FUN_106f5ac0c();
    puVar2 = PTR_PTR_1126ae720;
    if ((int)uVar1 != 0) {
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_106f5aeb8;
      puStack_60 = &UNK_1108669a0;
      uStack_58 = param_1;
      _objc_retain(param_3);
      uStack_50 = param_3;
      _objc_retain(param_4);
      uStack_48 = param_4;
      func_0x00010bf11fe0(puVar2,param_2,&puStack_78);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_3;
      func_0x00010c0c5180(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2bdb40(param_1,param_2,puVar2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      _objc_release(puVar2);
      _objc_release(uStack_48);
      _objc_release(uStack_50);
      goto LAB_106f5ae8c;
    }
    uVar1 = param_3;
    func_0x000109023b84();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ae720;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    uStack_a0 = 0x106f5af08;
    puStack_98 = &UNK_110985520;
    _objc_retain(param_3);
    uStack_90 = param_3;
    _objc_retain(param_4);
    uStack_88 = param_4;
    uStack_80 = uVar1;
    _objc_retain(uVar1);
    func_0x00010bf11fe0(puVar2,param_2,&puStack_b0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0c5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bd8a0(param_1,param_2,puVar2,uVar3);
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    _objc_release(uVar1);
  }
  param_1 = 0;
LAB_106f5ae8c:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106f5aeb8; end: 106f5af6b;  */

void FUN_106f5aeb8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf63c00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf56500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106f5af6c; end: 106f5b177; -[SCSpectaclesAuxiliaryContentStore extractMetadataForGallerySnap:fromImageData:] */

void FUN_106f5af6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010b5fc690();
  if ((int)uVar1 != 0) {
    uVar1 = param_3;
    FUN_106f5ac0c();
    puVar2 = PTR_PTR_1126ae720;
    if ((int)uVar1 != 0) {
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_106f5b178;
      puStack_60 = &UNK_1108669a0;
      uStack_58 = param_1;
      _objc_retain(param_3);
      uStack_50 = param_3;
      _objc_retain(param_4);
      uStack_48 = param_4;
      func_0x00010bf11fe0(puVar2,param_2,&puStack_78);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_3;
      func_0x00010c0c5180(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2bdb40(param_1,param_2,puVar2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      _objc_release(puVar2);
      _objc_release(uStack_48);
      _objc_release(uStack_50);
      goto LAB_106f5b14c;
    }
    uVar1 = param_3;
    func_0x000109023b84();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ae720;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    uStack_a0 = 0x106f5b1c8;
    puStack_98 = &UNK_110985520;
    _objc_retain(param_3);
    uStack_90 = param_3;
    _objc_retain(param_4);
    uStack_88 = param_4;
    uStack_80 = uVar1;
    _objc_retain(uVar1);
    func_0x00010bf11fe0(puVar2,param_2,&puStack_b0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0c5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bd8a0(param_1,param_2,puVar2,uVar3);
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    _objc_release(uVar1);
  }
  param_1 = 0;
LAB_106f5b14c:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106f5b178; end: 106f5b22b;  */

void FUN_106f5b178(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf63c00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf56520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106f5b22c; end: 106f5b287; -[SCSpectaclesAuxiliaryContentStore areBothDepthsAvailableForGallerySnap:] */

undefined8 FUN_106f5b22c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c07b100(param_1,param_2,param_3);
  if ((int)uVar1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010c07d560(param_1,param_2,param_3);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106f5b288; end: 106f5b31b; -[SCSpectaclesAuxiliaryContentStore isPrimaryDepthAvailableForGallerySnap:] */

undefined8 FUN_106f5b288(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_106f5ac0c();
  uVar2 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if ((int)uVar1 == 0) {
    func_0x00010c07b120(param_1,param_2,uVar2);
  }
  else {
    func_0x00010bfd4ec0(param_1,param_2,uVar2,&PTR____CFConstantStringClassReference_110e8f6f8);
  }
  _objc_release(uVar2);
  return param_1;
}



/* Entry: 106f5b31c; end: 106f5b3ab; -[SCSpectaclesAuxiliaryContentStore isPrimaryDepthAvailableForAllGallerySnaps:] */

long FUN_106f5b31c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_106f5b3ac;
    puStack_30 = &UNK_1108bbf88;
    lVar1 = param_3;
    uStack_28 = param_1;
    func_0x00010c0bc7a0(param_3,param_2,&puStack_48);
  }
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 106f5b3ac; end: 106f5b3b7;  */

void FUN_106f5b3ac(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07b110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_isPrimaryDepthAvailableForGaller_1125fc650,
             param_2);
  return;
}



/* Entry: 106f5b3b8; end: 106f5b44b; -[SCSpectaclesAuxiliaryContentStore isSecondaryDepthAvailableForGallerySnap:] */

undefined8 FUN_106f5b3b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_106f5ac0c();
  uVar2 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if ((int)uVar1 == 0) {
    func_0x00010c07d580(param_1,param_2,uVar2);
  }
  else {
    func_0x00010bfd4ec0(param_1,param_2,uVar2,&PTR____CFConstantStringClassReference_110e8f718);
  }
  _objc_release(uVar2);
  return param_1;
}



/* Entry: 106f5b44c; end: 106f5b497; -[SCSpectaclesAuxiliaryContentStore isDepthFailedForSnap:] */

undefined8 FUN_106f5b44c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c070720(param_1,param_2,param_3);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106f5b498; end: 106f5b4e3; -[SCSpectaclesAuxiliaryContentStore totalSizeOfDepthForGallerySnap:] */

undefined8 FUN_106f5b498(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c276bc0(param_1,param_2,param_3);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106f5b4e4; end: 106f5b61f; -[SCSpectaclesAuxiliaryContentStore loadDepthAvailabilityForGallerySnap:completion:] */

void FUN_106f5b4e4(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  FUN_106f5ac0c();
  lVar3 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  if ((int)lVar2 == 0) {
    lVar2 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010b5fa088();
    iVar1 = (int)(lVar4 - 2U) + 2;
    if (10 < lVar4 - 2U) {
      iVar1 = 5;
    }
    func_0x00010c09bf20(param_1,param_2,lVar3,lVar2,iVar1,param_4);
    _objc_release(lVar2);
  }
  else {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_106f5b620;
    puStack_58 = &UNK_1109033b0;
    _objc_retain(param_4);
    uStack_50 = param_1;
    lStack_48 = param_4;
    func_0x00010bfd4ee0(param_1,param_2,lVar3,&PTR____CFConstantStringClassReference_110e8f6f8,
                        &puStack_70);
    _objc_release(lVar3);
    lVar3 = lStack_48;
  }
  _objc_release(lVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106f5b620; end: 106f5b76f;  */

void FUN_106f5b620(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106f5b634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),4,0);
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  func_0x00010bfa6280(uVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 106f5b770; end: 106f5b92b; -[SCSpectaclesAuxiliaryContentStore prepareDepthForGallerySnap:image:immediate:completion:] */

void FUN_106f5b770(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  uVar1 = param_3;
  FUN_106f5ac0c();
  uVar2 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ae720;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    uStack_90 = 0x106f5b93c;
    puStack_88 = &UNK_11095a438;
    _objc_retain(param_4);
    uStack_80 = param_4;
    func_0x00010bf11fe0(puVar3,param_2,&puStack_a0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c109260(param_1,param_2,uVar2,uVar1,0,puVar3,7,param_5,0,param_6);
    _objc_release(puVar3);
    _objc_release(uVar1);
    _objc_release(uVar2);
    uVar1 = uStack_80;
  }
  else {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_106f5b92c;
    puStack_60 = &UNK_110843510;
    _objc_retain(param_6);
    uStack_58 = param_6;
    func_0x00010bfa6280(param_1,param_2,uVar2,&PTR____CFConstantStringClassReference_110e8f6f8,0,
                        &puStack_78);
    _objc_release(uVar2);
    uVar1 = uStack_58;
  }
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106f5b92c; end: 106f5b943;  */

void FUN_106f5b92c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000106f5b938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_3);
  return;
}



/* Entry: 106f5b944; end: 106f5bb57; -[SCSpectaclesAuxiliaryContentStore prepareDepthForGallerySnap:videoProvider:depthPart:immediate:progress:completion:] */

void FUN_106f5b944(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_8);
  _objc_retain(param_7);
  uVar2 = param_3;
  FUN_106f5ac0c();
  if ((int)uVar2 == 0) {
    uVar2 = param_3;
    func_0x00010c0c5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ae720;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    uStack_a0 = 0x106f5bb68;
    puStack_98 = &UNK_11095a438;
    _objc_retain(param_4);
    uStack_90 = param_4;
    func_0x00010bf11fe0(puVar4,param_2,&puStack_b0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c109260(param_1,param_2,uVar2,uVar3,param_5,puVar4,8,param_6,param_7,param_8);
    _objc_release(param_7);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = uStack_90;
  }
  else {
    ppuVar1 = &PTR_PTR_110985238;
    if (param_5 != 0) {
      ppuVar1 = &PTR_PTR_110985240;
    }
    puVar4 = *ppuVar1;
    _objc_retain(puVar4);
    uVar2 = param_3;
    func_0x00010c0c5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_106f5bb58;
    puStack_70 = &UNK_110843510;
    _objc_retain(param_8);
    uStack_68 = param_8;
    func_0x00010bfa6280(param_1,param_2,uVar2,puVar4,param_7,&puStack_88);
    _objc_release(puVar4);
    _objc_release(param_7);
    _objc_release(uVar2);
    uVar2 = uStack_68;
  }
  _objc_release(uVar2);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106f5bb58; end: 106f5bb6f;  */

void FUN_106f5bb58(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000106f5bb64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_3);
  return;
}



/* Entry: 106f5bb70; end: 106f5bc23; -[SCSpectaclesAuxiliaryContentStore prioritizeDepthForGallerySnap:] */

void FUN_106f5bb70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_106f5ac0c();
  uVar2 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if ((int)uVar1 == 0) {
    func_0x00010c113b20(param_1,param_2,uVar2);
  }
  else {
    func_0x00010bf63c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010c113ae0(param_1,param_2,&PTR____CFConstantStringClassReference_110e8f718);
    func_0x00010c113ae0(param_1,param_2,&PTR____CFConstantStringClassReference_110e8f6f8);
    uVar2 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106f5bc24; end: 106f5bf83; -[SCSpectaclesAuxiliaryContentStore awaitDepthForGallerySnaps:depthPart:progress:completion:] */

ulong FUN_106f5bc24(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,
                   undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar4 = param_3;
  func_0x00010c0bc7a0();
  if ((int)uVar4 == 0) {
    uVar4 = param_3;
    func_0x00010c0b8600(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf136c0(param_1);
    _objc_release(uVar4);
  }
  else {
    ppuVar1 = &PTR_PTR_110985238;
    if (param_4 != 0) {
      ppuVar1 = &PTR_PTR_110985240;
    }
    puVar5 = *ppuVar1;
    puVar2 = puVar5;
    _objc_retain();
    _dispatch_group_create();
    puStack_128 = &uStack_130;
    uStack_130 = 0;
    uStack_120 = 0x3032000000;
    uStack_118 = 0x106f5bf8c;
    uStack_110 = 0x106f5bf9c;
    uStack_108 = 0;
    lStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    plStack_160 = (long *)0x0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    _objc_retain(param_3);
    uVar4 = param_3;
    func_0x00010bf52a60();
    if (uVar4 != 0) {
      lVar8 = *plStack_160;
      do {
        uVar7 = 0;
        do {
          if (*plStack_160 != lVar8) {
            _objc_enumerationMutation(param_3);
          }
          uVar6 = *(undefined8 *)(lStack_168 + uVar7 * 8);
          _dispatch_group_enter(puVar2);
          func_0x00010c0c5180(uVar6);
          _objc_retainAutoreleasedReturnValue();
          puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_198 = 0xc2000000;
          pcStack_190 = FUN_106f5bfa4;
          puStack_188 = &UNK_110985570;
          puStack_178 = &uStack_130;
          _objc_retain(puVar2);
          puStack_180 = puVar2;
          func_0x00010bfa6280(param_1);
          _objc_release(uVar6);
          _objc_release(puStack_180);
          uVar7 = uVar7 + 1;
        } while (uVar4 != uVar7);
        uVar4 = param_3;
        func_0x00010bf52a60();
      } while (uVar4 != 0);
    }
    _objc_release(param_3);
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_1;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_1d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1c8 = 0xc2000000;
    pcStack_1c0 = FUN_106f5c014;
    puStack_1b8 = &UNK_1108647e8;
    _objc_retain(param_6);
    puStack_1a8 = &uStack_130;
    uStack_1b0 = param_6;
    func_0x000100bc0718(puVar2,uVar6,&puStack_1d0);
    _objc_release(uVar6);
    _objc_release(param_1);
    _objc_release(uStack_1b0);
    __Block_object_dispose(&uStack_130,8);
    _objc_release(uStack_108);
    _objc_release(puVar2);
    _objc_release(puVar5);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar3 = 8;
  __Block_object_dispose(&uStack_130);
  __Unwind_Resume(param_3);
  _objc_retain();
  lVar8 = lVar3;
  func_0x00010b5fa088();
  if (lVar8 == 10) {
    uVar4 = 1;
  }
  else {
    lVar8 = lVar3;
    func_0x00010b5fa088(lVar3);
    uVar4 = (ulong)(lVar8 == 9);
  }
  _objc_release(lVar3);
  return uVar4;
}



/* Entry: 106f5bf84; end: 106f5bfa3;  */

bool FUN_106f5bf84(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain();
  lVar2 = param_2;
  func_0x00010b5fa088();
  if (lVar2 == 10) {
    bVar1 = true;
  }
  else {
    lVar2 = param_2;
    func_0x00010b5fa088(param_2);
    bVar1 = lVar2 == 9;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 106f5bfa4; end: 106f5c013;  */

void FUN_106f5bfa4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  lVar1 = param_3;
  if (*(long *)(lVar3 + 0x28) != 0) {
    lVar1 = *(long *)(lVar3 + 0x28);
  }
  _objc_retain(lVar1);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x28) = lVar1;
  _objc_retain(param_3);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f5c014; end: 106f5c033;  */

void FUN_106f5c014(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106f5c028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  return;
}



/* Entry: 106f5c034; end: 106f5c24f; -[SCSpectaclesAuxiliaryContentStore imuDataSetForGallerySnap:] */

void FUN_106f5c034(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c075280(param_1,param_2,lVar1);
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
    lVar1 = param_3;
    func_0x00010c15e1a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar3 = PTR_PTR_1126ae720;
    if (lVar1 == 0) {
      puVar3 = (undefined *)0x0;
      goto LAB_106f5c1b0;
    }
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_106f5c250;
    puStack_70 = &UNK_1109855f0;
    _objc_retain(param_3);
    lStack_68 = param_3;
    func_0x00010bf11fe0(puVar3,param_2,&puStack_88);
    _objc_retainAutoreleasedReturnValue();
    param_1 = lStack_68;
  }
  else {
    lVar1 = param_3;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f5920(param_1,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126ae720;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x106f5c1d8;
    puStack_48 = &UNK_1109855c0;
    lStack_40 = param_1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    _objc_retain(param_1);
    func_0x00010bf11fe0(puVar3,param_2,&puStack_60);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lStack_38);
    _objc_release(lStack_40);
  }
  _objc_release(param_1);
LAB_106f5c1b0:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f5c250; end: 106f5c2ab;  */

void FUN_106f5c250(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d2f60;
  _objc_alloc(PTR_PTR_1126d2f60);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c15e1a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c044820(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106f5c2ac; end: 106f5c2b3; -[SCSpectaclesAuxiliaryContentStore metadataForGallerySnap:] */

void FUN_106f5c2ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be60090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__metadataForGallerySnap_imuData__1125759c0,param_3,0);
  return;
}



/* Entry: 106f5c2b4; end: 106f5c367; -[SCSpectaclesAuxiliaryContentStore metadataforSavingTrimmedSnap:timeRange:] */

void FUN_106f5c2b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfb1920(param_3);
  _objc_retainAutoreleasedReturnValue();
  uStack_58 = param_4[1];
  uStack_60 = *param_4;
  uStack_48 = param_4[3];
  uStack_50 = param_4[2];
  uStack_38 = param_4[5];
  uStack_40 = param_4[4];
  uVar2 = param_1;
  func_0x00010be37e20(param_1,param_2,param_3,&uStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010be60080(param_1,param_2,uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106f5c368; end: 106f5c463; -[SCSpectaclesAuxiliaryContentStore populateMetadataForContent:] */

void FUN_106f5c368(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_PTR_1126d36f0;
  _objc_retain(param_3);
  func_0x00010bf0b440(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106f5c464;
  puStack_50 = &UNK_110855710;
  _objc_retain();
  puStack_48 = puVar1;
  func_0x00010bf11fe0(puVar2,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bdc3540(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c2bd8a0(param_1,param_2,puVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106f5c464; end: 106f5c48b;  */

void FUN_106f5c464(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106f5c48c; end: 106f5c643; -[SCSpectaclesAuxiliaryContentStore _imuDataForSavingTrimmedSnap:timeRange:] */

void FUN_106f5c48c(long param_1,undefined8 param_2,undefined1 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
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
  
  puVar9 = &uStack_160;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar8 = auStack_e8;
  puVar2 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,puVar8,0x10);
  if (puVar2 != (undefined1 *)0x0) {
    lVar11 = *plStack_120;
    do {
      puVar12 = (undefined1 *)0x0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(param_3);
        }
        puVar7 = *(undefined **)(lStack_128 + (long)puVar12 * 8);
        lVar3 = param_1;
        func_0x00010bfead80();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        if (lVar4 == 0) {
          _objc_release(param_3);
          puVar10 = (undefined *)0x0;
          goto LAB_106f5c5f4;
        }
        func_0x00010befa120(puVar1,param_2,lVar4);
        _objc_release(lVar4);
        puVar12 = puVar12 + 1;
      } while (puVar2 != puVar12);
      puVar8 = auStack_e8;
      puVar2 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,puVar8,0x10);
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release(param_3);
  puVar10 = PTR_PTR_1126d2f60;
  _objc_alloc();
  uStack_158 = param_4[1];
  uStack_160 = *param_4;
  uStack_148 = param_4[3];
  uStack_150 = param_4[2];
  uStack_138 = param_4[5];
  uStack_140 = param_4[4];
  puVar7 = puVar1;
  func_0x00010c000cc0();
  puVar8 = (undefined1 *)puVar9;
LAB_106f5c5f4:
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  puVar1 = puVar7;
  func_0x00010b5fa760();
  if ((int)puVar1 == 0) {
    puVar1 = puVar7;
    func_0x00010b5fa088();
    if ((puVar1 == (undefined *)0x8) ||
       (puVar1 = puVar7, func_0x00010b5fa088(), puVar1 == (undefined *)0x7)) {
      puVar2 = param_3;
      func_0x00010bea1400(param_3,param_2,puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = param_3;
      func_0x00010bf27cc0(param_3,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf64a80(PTR__OBJC_CLASS___NSData_1126ae778,param_2,puVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126d3038;
      func_0x00010bf27d60(PTR_PTR_1126d3038,param_2,puVar1,puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c112d20(param_3,param_2,puVar7);
      puVar10 = PTR_PTR_1126d34f8;
      _objc_alloc(PTR_PTR_1126d34f8);
      puVar6 = puVar8;
      func_0x00010c0d9780(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c029680(puVar10,param_2,0,0,puVar6,puVar5,param_3);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar1);
      _objc_release(puVar12);
    }
    else {
      puVar1 = puVar7;
      func_0x00010b5fa088();
      if (puVar1 != (undefined *)0x5) {
        puVar10 = (undefined *)0x0;
        goto LAB_106f5c7c4;
      }
      puVar10 = PTR_PTR_1126d3500;
      _objc_alloc(PTR_PTR_1126d3500);
      puVar2 = puVar8;
      func_0x00010c0b7ba0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c029660(puVar10,param_2,0,0,puVar2);
    }
    _objc_release(puVar2);
  }
  else {
    func_0x00010bfb2980(param_3,param_2,puVar7);
    puVar10 = PTR_PTR_1126d3510;
    _objc_alloc(PTR_PTR_1126d3510);
    func_0x00010c029640();
  }
LAB_106f5c7c4:
  _objc_release(puVar8);
  _objc_release(puVar7);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 106f5c644; end: 106f5c84f; -[SCSpectaclesAuxiliaryContentStore _metadataForGallerySnap:imuData:] */

void FUN_106f5c644(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010b5fa760();
  if ((int)lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010b5fa088();
    if ((lVar1 == 8) || (lVar1 = param_3, func_0x00010b5fa088(), lVar1 == 7)) {
      uVar6 = param_1;
      func_0x00010bea1400(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010bf27cc0(param_1,param_2,uVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf64a80(PTR__OBJC_CLASS___NSData_1126ae778,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126d3038;
      func_0x00010bf27d60(PTR_PTR_1126d3038,param_2,puVar3,uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c112d20(param_1,param_2,param_3);
      puVar7 = PTR_PTR_1126d34f8;
      _objc_alloc(PTR_PTR_1126d34f8);
      uVar5 = param_4;
      func_0x00010c0d9780(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c029680(puVar7,param_2,0,0,uVar5,puVar4,param_1);
      _objc_release(uVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(uVar2);
    }
    else {
      lVar1 = param_3;
      func_0x00010b5fa088();
      if (lVar1 != 5) {
        puVar7 = (undefined *)0x0;
        goto LAB_106f5c7c4;
      }
      puVar7 = PTR_PTR_1126d3500;
      _objc_alloc(PTR_PTR_1126d3500);
      uVar6 = param_4;
      func_0x00010c0b7ba0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c029660(puVar7,param_2,0,0,uVar6);
    }
    _objc_release(uVar6);
  }
  else {
    func_0x00010bfb2980(param_1,param_2,param_3);
    puVar7 = PTR_PTR_1126d3510;
    _objc_alloc(PTR_PTR_1126d3510);
    func_0x00010c029640();
  }
LAB_106f5c7c4:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106f5c850; end: 106f5c90b; -[SCSpectaclesAuxiliaryContentStore isValidImuAvailableForGallerySnap:] */

ulong FUN_106f5c850(float param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_4);
  func_0x00010bfead80(param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = param_4;
  func_0x00010b5fa088();
  if ((uVar2 < 0xd) && ((1L << (uVar2 & 0x3f) & 0x1566U) != 0)) {
    func_0x00010bf8b160(param_4);
    uVar2 = uVar1;
    func_0x00010c082d40((double)param_1,uVar1);
  }
  else {
    uVar2 = (ulong)(uVar1 != 0);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  return uVar2;
}



/* Entry: 106f5c90c; end: 106f5c96f; -[SCSpectaclesAuxiliaryContentStore isRenderingMetadataAvailableForSnap:] */

bool FUN_106f5c90c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010b5fa760();
  if ((int)uVar1 == 0) {
    func_0x00010c112d20(param_1,param_2,param_3);
  }
  else {
    func_0x00010bfb2980(param_1,param_2,param_3);
  }
  _objc_release(param_3);
  return param_1 != 0;
}



/* Entry: 106f5c970; end: 106f5ca53; -[SCSpectaclesAuxiliaryContentStore requestImageForGhostmantisSnap:cloudFile:synchronous:queue:encryptedContentManager:resultHandler:] */

void FUN_106f5c970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_8);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106f5ca54;
  puStack_70 = &UNK_110985640;
  uStack_68 = param_1;
  uStack_60 = param_3;
  uStack_58 = param_8;
  _objc_retain(param_3);
  _objc_retain(param_8);
  func_0x00010c135200(param_7,param_2,param_3,param_4,param_5,param_6,&puStack_88);
  _objc_release(uStack_60);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release(param_8);
  return;
}



/* Entry: 106f5ca54; end: 106f5cbc3;  */

void FUN_106f5ca54(long param_1,long param_2,undefined *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 == 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0,0,0,param_3);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf9ee80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c07c3c0();
    if (iVar1 == 0) {
      puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
      _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
      func_0x00010c00e2e0();
      _objc_release(param_3);
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0,0,0,puVar6);
    }
    else {
      puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c112d20(uVar3);
      uVar4 = *(ulong *)(param_1 + 0x20);
      func_0x00010c07b100();
      if ((uVar4 & 1) == 0) {
        lVar5 = *(long *)(param_1 + 0x28);
        func_0x00010b5fa088();
        if (lVar5 != 9) {
          func_0x00010c109220(*(undefined8 *)(param_1 + 0x20));
        }
      }
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
                (*(long *)(param_1 + 0x30),puVar6,uVar2,uVar3,0);
      _objc_release(puVar6);
      puVar6 = param_3;
    }
    _objc_release(uVar2);
    param_3 = puVar6;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106f5cbc4; end: 106f5cbc7;  */

void FUN_106f5cbc4(void)

{
  return;
}



/* Entry: 106f5cbc8; end: 106f5cd7f; -[SCSpectaclesAuxiliaryContentStore trimmedSixDofData:forMediaType:timeRange:] */

void FUN_106f5cbc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_alloc_init();
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x106f5ccc4;
  puStack_78 = &UNK_1108e7be0;
  uStack_58 = param_5[1];
  uStack_60 = *param_5;
  uStack_48 = param_5[3];
  uStack_50 = param_5[2];
  uStack_38 = param_5[5];
  uStack_40 = param_5[4];
  uStack_70 = param_3;
  puStack_68 = puVar1;
  _objc_retain(puVar1);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(param_1,param_2,&puStack_90);
  _objc_release(param_1);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_68);
  _objc_release(uStack_70);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106f5cd80; end: 106f5cdf3; -[SCSpectaclesAuxiliaryContentStore listenOnDataSourceIfNecessary:] */

void FUN_106f5cd80(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf12360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c23e740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    func_0x00010bef9980(param_3,param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f5cdf4; end: 106f5ce17; -[SCSpectaclesAuxiliaryContentStore _snapUsesSkyClassifier:] */

bool FUN_106f5cdf4(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010b5fa088(param_3);
  return param_3 - 7U < 4;
}



/* Entry: 106f5ce18; end: 106f5cf8b; -[SCSpectaclesAuxiliaryContentStore dataSource:didChangeEntries:failedEntries:fetchEntryError:] */

void FUN_106f5ce18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  _objc_initWeak(auStack_50,param_3);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_48);
  _objc_copyWeak(auStack_58,auStack_50);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106f5cf8c; end: 106f5d217;  */

void FUN_106f5cf8c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined **unaff_x25;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  undefined *puStack_208;
  undefined1 auStack_200 [8];
  undefined1 auStack_1f8 [8];
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  iVar7 = (int)param_2;
  if (lVar1 != 0) {
    lVar2 = param_1 + 0x30;
    _objc_loadWeakRetained();
    iVar7 = (int)param_2;
    if (lVar2 != 0) {
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      plStack_1a0 = (long *)0x0;
      lVar9 = *(long *)(param_1 + 0x20);
      _objc_retain(lVar9);
      lVar3 = lVar9;
      func_0x00010bf52a60();
      iVar7 = (int)param_2;
      if (lVar3 != 0) {
        lVar8 = *plStack_1a0;
        do {
          lVar11 = 0;
          do {
            if (*plStack_1a0 != lVar8) {
              _objc_enumerationMutation(lVar9);
            }
            uStack_1e8 = 0;
            uStack_1f0 = 0;
            uStack_1d8 = 0;
            plStack_1e0 = (long *)0x0;
            uStack_1c8 = 0;
            uStack_1d0 = 0;
            uStack_1b8 = 0;
            uStack_1c0 = 0;
            lVar4 = lVar2;
            func_0x00010bfa7340();
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar4;
            func_0x00010bf52a60();
            if (lVar5 != 0) {
              lVar12 = *plStack_1e0;
              do {
                lVar10 = 0;
                do {
                  if (*plStack_1e0 != lVar12) {
                    _objc_enumerationMutation(lVar4);
                  }
                  lVar6 = lVar1;
                  func_0x00010bebd460();
                  if ((int)lVar6 != 0) {
                    lVar3 = lVar1;
                    func_0x00010bf12360(lVar1);
                    _objc_retainAutoreleasedReturnValue();
                    puStack_220 = PTR___NSConcreteStackBlock_11034bd00;
                    uStack_218 = 0xc2000000;
                    pcStack_210 = FUN_106f5d218;
                    puStack_208 = &UNK_110985670;
                    unaff_x25 = &puStack_220;
                    _objc_copyWeak(auStack_200,param_1 + 0x28);
                    iVar7 = (int)param_1 + 0x30;
                    _objc_copyWeak(auStack_1f8);
                    func_0x00010c1366c0(lVar3);
                    _objc_release(lVar3);
                    _objc_destroyWeak(auStack_1f8);
                    _objc_destroyWeak(auStack_200);
                    _objc_release(lVar4);
                    goto LAB_106f5d1a0;
                  }
                  lVar10 = lVar10 + 1;
                } while (lVar5 != lVar10);
                lVar5 = lVar4;
                func_0x00010bf52a60();
              } while (lVar5 != 0);
            }
            unaff_x25 = (undefined **)0x0;
            _objc_release(lVar4);
            lVar11 = lVar11 + 1;
          } while (lVar11 != lVar3);
          lVar3 = lVar9;
          func_0x00010bf52a60();
          iVar7 = (int)param_2;
        } while (lVar3 != 0);
      }
LAB_106f5d1a0:
      _objc_release(lVar9);
    }
    _objc_release(lVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_destroyWeak(unaff_x25 + 5);
    _objc_destroyWeak(unaff_x25 + 4);
    __Unwind_Resume();
    lVar2 = lVar1 + 0x20;
    _objc_loadWeakRetained();
    if (lVar2 != 0) {
      lVar1 = lVar1 + 0x28;
      _objc_loadWeakRetained();
      if ((iVar7 != 0) && (lVar1 != 0)) {
        func_0x00010c12cf80(lVar1);
      }
      _objc_release(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 106f5d218; end: 106f5d27b;  */

void FUN_106f5d218(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if ((param_2 != 0) && (param_1 != 0)) {
      func_0x00010c12cf80(param_1);
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106f5d27c; end: 106f5d40f; -[SCSpectaclesAuxiliaryContentStore initWithContentsOfDirectory:spectaclesManager:mediaRetriever:auxiliaryContentProvider:dataGraphFactory:performer:] */

undefined1 *
FUN_106f5d27c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f7f38;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d3700;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x10) = 0;
    func_0x00010bef9980(*(undefined8 *)((long)puVar1 + 0x38));
    func_0x00010be924e0(puVar1);
    func_0x00010be4ddc0(puVar1);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f5d410; end: 106f5d45f; -[SCSpectaclesAuxiliaryContentStore addListener:] */

void FUN_106f5d410(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf04760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f5d460; end: 106f5d4af; -[SCSpectaclesAuxiliaryContentStore removeListener:] */

void FUN_106f5d460(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf04760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f5d4b0; end: 106f5d4b7; -[SCSpectaclesAuxiliaryContentStore maximumCacheSize] */

undefined8 FUN_106f5d4b0(void)

{
  return 0x20000000;
}



/* Entry: 106f5d4b8; end: 106f5d607; -[SCSpectaclesAuxiliaryContentStore totalSizeOfCacheFilesWithQueue:handler:] */

void FUN_106f5d4b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x106f5d570;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106f5d608; end: 106f5d617;  */

void FUN_106f5d608(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106f5d614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106f5d618; end: 106f5d717; -[SCSpectaclesAuxiliaryContentStore cleanUpCacheWithQueue:block:] */

void FUN_106f5d618(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106f5d718; end: 106f5d967;  */

void FUN_106f5d718(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_108 = 0xc2000000;
    pcStack_100 = FUN_106f5d968;
    puStack_f8 = &UNK_110849530;
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    puVar3 = *(undefined **)(param_1 + 0x28);
    _objc_retain(puVar3);
    puStack_f0 = puVar3;
    func_0x00010007380c(uVar6,&puStack_110);
    puVar3 = puStack_f0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    _objc_alloc_init();
    puVar4 = puVar3;
    func_0x00010bf98140();
    _objc_retainAutoreleasedReturnValue();
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    puVar5 = puVar4;
    func_0x00010bf52a60();
    if (puVar5 != (undefined *)0x0) {
      lVar7 = *plStack_140;
      do {
        puVar8 = (undefined *)0x0;
        do {
          if (*plStack_140 != lVar7) {
            _objc_enumerationMutation(puVar4);
          }
          uVar6 = *(undefined8 *)(lVar2 + 0x40);
          func_0x00010c25ce00(uVar6);
          _objc_retainAutoreleasedReturnValue();
          uStack_158 = 0;
          func_0x00010c12cc40(puVar3);
          _objc_release(uVar6);
          puVar8 = puVar8 + 1;
        } while (puVar5 != puVar8);
        puVar5 = puVar4;
        func_0x00010bf52a60();
      } while (puVar5 != (undefined *)0x0);
    }
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(lVar2 + 0x50);
    *(undefined **)(lVar2 + 0x50) = puVar5;
    _objc_release(uVar6);
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(lVar2 + 0x58);
    *(undefined **)(lVar2 + 0x58) = puVar5;
    _objc_release(uVar6);
    func_0x00010be924e0(lVar2);
    puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_178 = 0xc2000000;
    uStack_170 = 0x106f5d974;
    puStack_168 = &UNK_110849530;
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar1);
    uStack_160 = uVar1;
    func_0x00010007380c(uVar6,&puStack_180);
    _objc_release(uStack_160);
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000106f5d970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + 0x20) + 0x10))();
  return;
}



/* Entry: 106f5d968; end: 106f5d97f;  */

void FUN_106f5d968(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106f5d970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 106f5d980; end: 106f5da33; -[SCSpectaclesAuxiliaryContentStore _resetCachedValues] */

void FUN_106f5d980(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined **)(param_1 + 0x60) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
  func_0x00010c25de20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  *(undefined **)(param_1 + 0x70) = puVar1;
  _objc_release(uVar2);
  _os_unfair_lock_lock(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
  func_0x00010c25de20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
  _objc_release(uVar2);
  _os_unfair_lock_unlock(param_1 + 0x10);
  puVar1 = PTR_PTR_1126d3708;
  _objc_alloc();
  func_0x00010c034960();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  *(undefined **)(param_1 + 0x68) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106f5da34; end: 106f5db2f; -[SCSpectaclesAuxiliaryContentStore _trimCacheIfNeededWithCompletion:] */

void FUN_106f5da34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c276b80(param_1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106f5db30; end: 106f5db87;  */

void FUN_106f5db30(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bed0000(lVar1);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106f5db88; end: 106f5e487; -[SCSpectaclesAuxiliaryContentStore _trimCacheWithCurrentSize:] */

void FUN_106f5db88(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  undefined *puStack_358;
  undefined8 uStack_350;
  code *pcStack_348;
  undefined *puStack_340;
  undefined8 *puStack_338;
  undefined1 auStack_330 [8];
  undefined1 auStack_328 [8];
  undefined8 uStack_320;
  undefined8 *puStack_318;
  undefined8 uStack_310;
  long lStack_308;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_318 = &uStack_320;
  uStack_320 = 0;
  uStack_310 = 0x2020000000;
  lStack_308 = param_3;
  if (0x20000000 < param_3) {
    _objc_initWeak(auStack_328,param_1);
    puStack_358 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_350 = 0xc2000000;
    pcStack_348 = FUN_106f5e488;
    puStack_340 = &UNK_11088bf50;
    _objc_copyWeak(auStack_330,auStack_328);
    puStack_338 = &uStack_320;
    ppuVar1 = &puStack_358;
    _objc_retainBlock();
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    ppuStack_80 = &PTR____CFConstantStringClassReference_110e8f978;
    ppuStack_78 = &PTR____CFConstantStringClassReference_110e8f998;
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    lVar13 = param_1;
    func_0x00010bf70a40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar13;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar13);
    lVar13 = lVar4;
    func_0x00010bf52a60();
    lVar7 = lRam0000000000000000;
    while (lVar13 != 0) {
      lVar17 = 0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(lVar4);
        }
        uVar14 = *(undefined8 *)(lVar17 * 8);
        uVar15 = uVar14;
        func_0x00010bf27ca0(uVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14c720(puVar3);
        _objc_release(uVar15);
        uVar15 = uVar14;
        func_0x00010c15e740(uVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b5c20(param_1);
        lVar18 = param_1;
        func_0x00010c0f5900(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        _objc_release(lVar18);
        _objc_release(uVar15);
        uVar15 = uVar14;
        func_0x00010c15e740(uVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b5c20(param_1);
        lVar18 = param_1;
        func_0x00010c0f5900(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        _objc_release(lVar18);
        _objc_release(uVar15);
        uVar15 = uVar14;
        func_0x00010c15e740(uVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b5c20(param_1);
        lVar18 = param_1;
        func_0x00010c0f5900();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        _objc_release(lVar18);
        _objc_release(uVar15);
        func_0x00010c15e740(uVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b5c20(param_1);
        lVar18 = param_1;
        func_0x00010c0f5900();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        _objc_release(lVar18);
        _objc_release(uVar14);
        lVar17 = lVar17 + 1;
      } while (lVar13 != lVar17);
      lVar13 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
    lVar13 = param_1;
    func_0x00010c0c58a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar13;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar13);
    lVar13 = lVar4;
    func_0x00010bf52a60();
    lVar7 = lRam0000000000000000;
    while (lVar13 != 0) {
      lVar17 = 0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(lVar4);
        }
        uVar14 = *(undefined8 *)(lVar17 * 8);
        uVar15 = uVar14;
        func_0x00010bf6ddc0(uVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14c720(puVar3);
        _objc_release(uVar15);
        uVar15 = uVar14;
        func_0x00010bfeae80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14c720(puVar3);
        _objc_release(uVar15);
        func_0x00010c0cc600(uVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14c720(puVar3);
        _objc_release(uVar14);
        lVar17 = lVar17 + 1;
      } while (lVar13 != lVar17);
      lVar13 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
    puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1;
    func_0x00010bf7f980(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bf4dfc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar13);
    _objc_release(puVar2);
    puVar2 = puVar5;
    func_0x00010bf52a60();
    lVar13 = lRam0000000000000000;
    while (puVar2 != (undefined *)0x0) {
      puVar16 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar13) {
          _objc_enumerationMutation(puVar5);
        }
        uVar15 = *(undefined8 *)((long)puVar16 * 8);
        puVar6 = puVar3;
        func_0x00010bf4b900();
        if (((ulong)puVar6 & 1) == 0) {
          (*(code *)ppuVar1[2])(ppuVar1,uVar15);
        }
        puVar16 = puVar16 + 1;
      } while (puVar2 != puVar16);
      puVar2 = puVar5;
      func_0x00010bf52a60();
    }
    _objc_release(puVar5);
    lVar13 = param_1;
    func_0x00010c0c58a0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar13;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar7;
    func_0x00010c14cca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    _objc_release(lVar13);
    lVar17 = lVar4;
    func_0x00010c246ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    lVar13 = lVar17;
    func_0x00010bf52a60();
    lVar7 = lRam0000000000000000;
    while (lVar13 != 0) {
      lVar18 = 0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(lVar17);
        }
        if ((long)puStack_318[3] < 0x20000001) goto LAB_106f5e240;
        uVar14 = *(undefined8 *)(lVar18 * 8);
        uVar15 = uVar14;
        func_0x00010bf6ddc0();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)ppuVar1[2])(ppuVar1,uVar15);
        _objc_release(uVar15);
        func_0x00010c18bee0(uVar14);
        lVar18 = lVar18 + 1;
      } while (lVar13 != lVar18);
      lVar13 = lVar17;
      func_0x00010bf52a60();
    }
LAB_106f5e240:
    _objc_release(lVar17);
    _objc_retain(lVar17);
    lVar13 = lVar17;
    func_0x00010bf52a60();
    lVar7 = lRam0000000000000000;
    while (lVar13 != 0) {
      lVar18 = 0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(lVar17);
        }
        if ((long)puStack_318[3] < 0x20000001) goto LAB_106f5e384;
        uVar14 = *(undefined8 *)(lVar18 * 8);
        uVar15 = uVar14;
        func_0x00010bfeae80(uVar14);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)ppuVar1[2])(ppuVar1,uVar15);
        _objc_release(uVar15);
        uVar15 = uVar14;
        func_0x00010c0cc600(uVar14);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)ppuVar1[2])(ppuVar1,uVar15);
        _objc_release(uVar15);
        lVar8 = param_1;
        func_0x00010c0c58a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c5180();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(lVar8);
        _objc_release(uVar14);
        _objc_release(lVar8);
        lVar18 = lVar18 + 1;
      } while (lVar13 != lVar18);
      lVar13 = lVar17;
      func_0x00010bf52a60();
    }
LAB_106f5e384:
    _objc_release(lVar17);
    func_0x00010be99540(param_1);
    _objc_release(lVar17);
    _objc_release(lVar4);
    _objc_release(puVar3);
    _objc_release(ppuVar1);
    _objc_destroyWeak(auStack_330);
    _objc_destroyWeak(auStack_328);
  }
  puVar9 = &uStack_320;
  __Block_object_dispose(puVar9,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_330);
  _objc_destroyWeak(auStack_328);
  lVar13 = 8;
  __Block_object_dispose(&uStack_320);
  __Unwind_Resume();
  _objc_retain(lVar13);
  puVar10 = puVar9 + 5;
  _objc_loadWeakRetained();
  if ((lVar13 != 0) && (puVar10 != (undefined8 *)0x0)) {
    puVar11 = puVar10;
    func_0x00010bf7f980(puVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c25ce00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    puVar3 = PTR_PTR_1126b24e8;
    func_0x00010bf278a0();
    puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    _objc_alloc_init(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    func_0x00010c12cc40();
    _objc_retain(0);
    *(long *)(*(long *)(puVar9[4] + 8) + 0x18) =
         *(long *)(*(long *)(puVar9[4] + 8) + 0x18) - (long)puVar3;
    _objc_release(puVar2);
    _objc_release(0);
    _objc_release(puVar12);
  }
  _objc_release(puVar10);
  _objc_release(lVar13);
  return;
}



/* Entry: 106f5e488; end: 106f5e593;  */

void FUN_106f5e488(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (lVar1 != 0)) {
    lVar5 = lVar1;
    func_0x00010bf7f980(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010c25ce00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    puVar3 = PTR_PTR_1126b24e8;
    func_0x00010bf278a0();
    puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    _objc_alloc_init(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    func_0x00010c12cc40();
    _objc_retain(0);
    lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    *(long *)(lVar5 + 0x18) = *(long *)(lVar5 + 0x18) - (long)puVar3;
    _objc_release(puVar4);
    _objc_release(0);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 106f5e594; end: 106f5e5df;  */

bool FUN_106f5e594(double param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0881e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f3a0();
  _objc_release(param_3);
  return param_1 < -3600.0;
}


