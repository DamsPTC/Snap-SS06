/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1054beac4; end: 1054bebb3; -[SCBloopsGetMyDataCacheImpl _cacheKeyForApiVersion:locale:useCase:] */

void FUN_1054beac4(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    func_0x00010befa120(puVar1,param_2,param_3);
  }
  if (param_4 != 0) {
    func_0x00010befa120(puVar1,param_2,param_4);
  }
  if (param_5 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,puVar2);
    _objc_release(puVar2);
  }
  func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110de4018);
  puVar2 = puVar1;
  func_0x00010bf446e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1054bebb4; end: 1054bec8b; -[SCBloopsGetMyDataCacheImpl _exirationDateForStatusCode:] */

void FUN_1054bebb4(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c252fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  uVar3 = *(ulong *)(param_1 + 0x10);
  if (lVar2 == 0) {
    func_0x00010bf6a3a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c252fa0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = uVar4;
  }
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  uVar4 = uVar3;
  func_0x00010c27d180(uVar3);
  func_0x00010bf65600((double)(uVar4 & 0xffffffff),puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1054bec8c; end: 1054becbb; -[SCBloopsGetMyDataCacheImpl .cxx_destruct] */

void FUN_1054bec8c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054becbc; end: 1054beccb; -[SCBloopsGetMyDataDummyCache getUserBloopsTargetDataFromCacheForApiVersion:locale:useCase:completion:] */

void FUN_1054becbc(void)

{
  long in_x5;
  
                    /* WARNING: Could not recover jumptable at 0x0001054becc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x5 + 0x10))(in_x5,0);
  return;
}



/* Entry: 1054beccc; end: 1054beccf; -[SCBloopsGetMyDataDummyCache addUserBloopsTargetDataToCache:apiVersion:locale:useCase:responseStatusCode:] */

void FUN_1054beccc(void)

{
  return;
}



/* Entry: 1054becd0; end: 1054becd3; -[SCBloopsGetMyDataDummyCache cleanCachedUserBloopsTargetData] */

void FUN_1054becd0(void)

{
  return;
}



/* Entry: 1054becd4; end: 1054bed77; -[SCBloopsMyUserDataCacheImpl initWithCache:userId:] */

undefined1 *
FUN_1054becd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e8870;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1054bed78; end: 1054bee4b; -[SCBloopsMyUserDataCacheImpl updateUserHairStyle:] */

void FUN_1054bed78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bfc7d80(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1054bee4c; end: 1054bf1cb;  */

void FUN_1054bee4c(long param_1,long param_2)

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
  undefined *puVar23;
  undefined *puVar24;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      puVar1 = PTR_PTR_1126b9a20;
      _objc_alloc();
      lVar2 = param_2;
      func_0x00010c291840();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c291960();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_2;
      func_0x00010c291840();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c291960();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c292180();
      lVar7 = param_2;
      func_0x00010c291840();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c291960();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2931e0();
      lVar9 = param_2;
      func_0x00010c291840();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c291960();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c291180();
      lVar11 = param_2;
      func_0x00010c291840();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar11;
      func_0x00010c291960();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar12;
      func_0x00010c120120();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = param_2;
      func_0x00010c291840();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar14;
      func_0x00010c291960();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar15;
      func_0x00010c115740();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = param_2;
      func_0x00010c291840();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = lVar17;
      func_0x00010c291960();
      _objc_retainAutoreleasedReturnValue();
      lVar19 = lVar18;
      func_0x00010bfb5ee0();
      _objc_retainAutoreleasedReturnValue();
      lVar20 = param_2;
      func_0x00010c291840();
      _objc_retainAutoreleasedReturnValue();
      lVar21 = lVar20;
      func_0x00010c291960();
      _objc_retainAutoreleasedReturnValue();
      lVar22 = lVar21;
      func_0x00010c1530c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05be00();
      _objc_release(lVar22);
      _objc_release(lVar21);
      _objc_release(lVar20);
      _objc_release(lVar19);
      _objc_release(lVar18);
      _objc_release(lVar17);
      _objc_release(lVar16);
      _objc_release(lVar15);
      _objc_release(lVar14);
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      puVar23 = PTR_PTR_1126b9a28;
      _objc_alloc(PTR_PTR_1126b9a28);
      lVar2 = param_2;
      func_0x00010c291840(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf1dc00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05ab20(puVar23);
      _objc_release(lVar3);
      _objc_release(lVar2);
      puVar24 = PTR_PTR_1126b99d0;
      _objc_alloc(PTR_PTR_1126b99d0);
      func_0x00010c05aac0();
      func_0x00010c287f20(param_1);
      _objc_release(puVar24);
      _objc_release(puVar23);
      _objc_release(puVar1);
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054bf1cc; end: 1054bf27f; -[SCBloopsMyUserDataCacheImpl updateUserGender:] */

void FUN_1054bf1cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010bfc7d80(param_1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1054bf280; end: 1054bf613;  */

void FUN_1054bf280(long param_1,long param_2)

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
  undefined *puVar24;
  undefined *puVar25;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      puVar1 = PTR_PTR_1126b9a20;
      _objc_alloc();
      lVar2 = param_2;
      func_0x00010c291840();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c291960();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_2;
      func_0x00010c291840();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c291960();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2931e0();
      lVar7 = param_2;
      func_0x00010c291840();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c291960();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c291180();
      lVar9 = param_2;
      func_0x00010c291840();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c291960();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010c120120();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = param_2;
      func_0x00010c291840();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar12;
      func_0x00010c291960();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar13;
      func_0x00010c115740();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = param_2;
      func_0x00010c291840();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar15;
      func_0x00010c291960();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = lVar16;
      func_0x00010bfb5ee0();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = param_2;
      func_0x00010c291840();
      _objc_retainAutoreleasedReturnValue();
      lVar19 = lVar18;
      func_0x00010c291960();
      _objc_retainAutoreleasedReturnValue();
      lVar20 = lVar19;
      func_0x00010c1530c0();
      _objc_retainAutoreleasedReturnValue();
      lVar21 = param_2;
      func_0x00010c291840();
      _objc_retainAutoreleasedReturnValue();
      lVar22 = lVar21;
      func_0x00010c291960();
      _objc_retainAutoreleasedReturnValue();
      lVar23 = lVar22;
      func_0x00010bfcfe00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05be00();
      _objc_release(lVar23);
      _objc_release(lVar22);
      _objc_release(lVar21);
      _objc_release(lVar20);
      _objc_release(lVar19);
      _objc_release(lVar18);
      _objc_release(lVar17);
      _objc_release(lVar16);
      _objc_release(lVar15);
      _objc_release(lVar14);
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      puVar24 = PTR_PTR_1126b9a28;
      _objc_alloc(PTR_PTR_1126b9a28);
      lVar2 = param_2;
      func_0x00010c291840(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf1dc00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05ab20(puVar24);
      _objc_release(lVar3);
      _objc_release(lVar2);
      puVar25 = PTR_PTR_1126b99d0;
      _objc_alloc(PTR_PTR_1126b99d0);
      func_0x00010c05aac0();
      func_0x00010c287f20(param_1);
      _objc_release(puVar25);
      _objc_release(puVar24);
      _objc_release(puVar1);
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054bf614; end: 1054bf6e7; -[SCBloopsMyUserDataCacheImpl updateUserPolicy:] */

void FUN_1054bf614(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bfc7d80(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1054bf6e8; end: 1054bfa83;  */

void FUN_1054bf6e8(long param_1,long param_2)

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
  undefined *puVar24;
  undefined *puVar25;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      puVar1 = PTR_PTR_1126b9a20;
      _objc_alloc();
      lVar2 = param_2;
      func_0x00010c291840();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c291960();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_2;
      func_0x00010c291840();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c291960();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c292180();
      FUN_1054b94cc();
      lVar7 = param_2;
      func_0x00010c291840();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c291960();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c291180();
      lVar9 = param_2;
      func_0x00010c291840();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c291960();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010c120120();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = param_2;
      func_0x00010c291840();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar12;
      func_0x00010c291960();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar13;
      func_0x00010c115740();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = param_2;
      func_0x00010c291840();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar15;
      func_0x00010c291960();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = lVar16;
      func_0x00010bfb5ee0();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = param_2;
      func_0x00010c291840();
      _objc_retainAutoreleasedReturnValue();
      lVar19 = lVar18;
      func_0x00010c291960();
      _objc_retainAutoreleasedReturnValue();
      lVar20 = lVar19;
      func_0x00010c1530c0();
      _objc_retainAutoreleasedReturnValue();
      lVar21 = param_2;
      func_0x00010c291840();
      _objc_retainAutoreleasedReturnValue();
      lVar22 = lVar21;
      func_0x00010c291960();
      _objc_retainAutoreleasedReturnValue();
      lVar23 = lVar22;
      func_0x00010bfcfe00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05be00();
      _objc_release(lVar23);
      _objc_release(lVar22);
      _objc_release(lVar21);
      _objc_release(lVar20);
      _objc_release(lVar19);
      _objc_release(lVar18);
      _objc_release(lVar17);
      _objc_release(lVar16);
      _objc_release(lVar15);
      _objc_release(lVar14);
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      puVar24 = PTR_PTR_1126b9a28;
      _objc_alloc(PTR_PTR_1126b9a28);
      lVar2 = param_2;
      func_0x00010c291840(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf1dc00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05ab20(puVar24);
      _objc_release(lVar3);
      _objc_release(lVar2);
      puVar25 = PTR_PTR_1126b99d0;
      _objc_alloc(PTR_PTR_1126b99d0);
      func_0x00010c05aac0();
      func_0x00010c287f20(param_1);
      _objc_release(puVar25);
      _objc_release(puVar24);
      _objc_release(puVar1);
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054bfa84; end: 1054bfb37; -[SCBloopsMyUserDataCacheImpl updateUserAdsPolicy:] */

void FUN_1054bfa84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010bfc7d80(param_1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1054bfb38; end: 1054bfec7;  */

void FUN_1054bfb38(long param_1,long param_2)

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
  undefined *puVar24;
  undefined *puVar25;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      puVar1 = PTR_PTR_1126b9a20;
      _objc_alloc();
      lVar2 = param_2;
      func_0x00010c291840();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c291960();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_2;
      func_0x00010c291840();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c291960();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c292180();
      lVar7 = param_2;
      func_0x00010c291840();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c291960();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2931e0();
      lVar9 = param_2;
      func_0x00010c291840();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c291960();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010c120120();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = param_2;
      func_0x00010c291840();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar12;
      func_0x00010c291960();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar13;
      func_0x00010c115740();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = param_2;
      func_0x00010c291840();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar15;
      func_0x00010c291960();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = lVar16;
      func_0x00010bfb5ee0();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = param_2;
      func_0x00010c291840();
      _objc_retainAutoreleasedReturnValue();
      lVar19 = lVar18;
      func_0x00010c291960();
      _objc_retainAutoreleasedReturnValue();
      lVar20 = lVar19;
      func_0x00010c1530c0();
      _objc_retainAutoreleasedReturnValue();
      lVar21 = param_2;
      func_0x00010c291840();
      _objc_retainAutoreleasedReturnValue();
      lVar22 = lVar21;
      func_0x00010c291960();
      _objc_retainAutoreleasedReturnValue();
      lVar23 = lVar22;
      func_0x00010bfcfe00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05be00();
      _objc_release(lVar23);
      _objc_release(lVar22);
      _objc_release(lVar21);
      _objc_release(lVar20);
      _objc_release(lVar19);
      _objc_release(lVar18);
      _objc_release(lVar17);
      _objc_release(lVar16);
      _objc_release(lVar15);
      _objc_release(lVar14);
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      puVar24 = PTR_PTR_1126b9a28;
      _objc_alloc(PTR_PTR_1126b9a28);
      lVar2 = param_2;
      func_0x00010c291840(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf1dc00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05ab20(puVar24);
      _objc_release(lVar3);
      _objc_release(lVar2);
      puVar25 = PTR_PTR_1126b99d0;
      _objc_alloc(PTR_PTR_1126b99d0);
      func_0x00010c05aac0();
      func_0x00010c287f20(param_1);
      _objc_release(puVar25);
      _objc_release(puVar24);
      _objc_release(puVar1);
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054bfec8; end: 1054bff3b; -[SCBloopsMyUserDataCacheImpl updateMyUserData:] */

void FUN_1054bfec8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bf39f20(param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0500();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1054bff3c; end: 1054bff67;  */

void FUN_1054bff3c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010b7392a8(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054bff68; end: 1054c002b; -[SCBloopsMyUserDataCacheImpl getMyUserData:] */

void FUN_1054bff68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1054c0058;
  puStack_40 = &UNK_110890070;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0dff80(0,uVar1,param_2,uVar2,&PTR___NSConcreteGlobalBlock_1108902e0,0,&puStack_58,0);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1054c002c; end: 1054c0057;  */

void FUN_1054c002c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x000100408474(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054c0058; end: 1054c0067;  */

void FUN_1054c0058(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001054c0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_4);
  return;
}



/* Entry: 1054c0068; end: 1054c00a7; -[SCBloopsMyUserDataCacheImpl cleanMyUserData] */

void FUN_1054c0068(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1054c00a8; end: 1054c00af; -[SCBloopsMyUserDataCacheImpl cacheKey] */

undefined8 FUN_1054c00a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1054c00b0; end: 1054c00df; -[SCBloopsMyUserDataCacheImpl .cxx_destruct] */

void FUN_1054c00b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054c00e0; end: 1054c01ab; -[SCBloopsTargetMultiverseServiceImpl initWithFeatureSettingService:circumstanceEngine:modelsConverter:] */

undefined1 *
FUN_1054c00e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e8878;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1054c01ac; end: 1054c0273; -[SCBloopsTargetMultiverseServiceImpl cameosFriendPolicySUP] */

undefined8 FUN_1054c01ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06d6a0();
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf1f440(uVar2,param_2,&PTR____CFConstantStringClassReference_110eef338,0,0);
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      return 0;
    }
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1e4c0();
    _objc_release(uVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf1e0e0();
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054c0274; end: 1054c033b; -[SCBloopsTargetMultiverseServiceImpl cameosAdsPolicySUP] */

undefined8 FUN_1054c0274(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06d660();
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf1f440(uVar2,param_2,&PTR____CFConstantStringClassReference_110eef338,0,0);
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      return 0;
    }
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1e460();
    _objc_release(uVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf1db20();
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054c033c; end: 1054c04a7; -[SCBloopsTargetMultiverseServiceImpl isMainTargetObsolete:] */

undefined8 FUN_1054c033c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar8;
  func_0x00010bf1e000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar7 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bdc3460(puVar3,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  if ((lVar1 == 0) || (puVar3 == (undefined *)0x0)) {
    if (puVar2 == (undefined *)0x0 && puVar3 == (undefined *)0x0) goto LAB_1054c0470;
  }
  else {
    puVar4 = puVar2;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c0f5800(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c0720c0(puVar4,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
    if (((ulong)puVar6 & 1) != 0) {
LAB_1054c0470:
      uVar7 = 0;
      goto LAB_1054c0474;
    }
  }
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf1f440(uVar7,param_2,&PTR____CFConstantStringClassReference_110eef338,0,0);
LAB_1054c0474:
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  return uVar7;
}



/* Entry: 1054c04a8; end: 1054c04ff; -[SCBloopsTargetMultiverseServiceImpl updateMainTargetData:] */

void FUN_1054c04a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c28f340(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c283da0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1054c0500; end: 1054c053b; -[SCBloopsTargetMultiverseServiceImpl .cxx_destruct] */

void FUN_1054c0500(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054c053c; end: 1054c0667; -[SCBloopsYellowButton initWithFrame:] */

undefined1 * FUN_1054c053c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  double in_d3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126e8880;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1e0a0(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010bfb68e0(puVar1);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(in_d3 * 0.5);
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf1ecc0(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c271420(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar3);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1054c0668; end: 1054c06e3; -[SCBloopsYellowButton layoutSubviews] */

void FUN_1054c0668(undefined8 param_1)

{
  double in_d3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e8880;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010bfb68e0(param_1);
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(in_d3 * 0.5);
  _objc_release(param_1);
  return;
}



/* Entry: 1054c06e4; end: 1054c070f; +[SCGrapheneBloopsMetric bloopExport] */

void FUN_1054c06e4(void)

{
  _objc_alloc(PTR_PTR_1126b9a68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054c0710; end: 1054c073b; +[SCGrapheneBloopsMetric onboardingFinish] */

void FUN_1054c0710(void)

{
  _objc_alloc(PTR_PTR_1126b9a68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054c073c; end: 1054c0767; +[SCGrapheneBloopsMetric chatStickerPickerClose] */

void FUN_1054c073c(void)

{
  _objc_alloc(PTR_PTR_1126b9a68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054c0768; end: 1054c0793; +[SCGrapheneBloopsMetric stickerPick] */

void FUN_1054c0768(void)

{
  _objc_alloc(PTR_PTR_1126b9a68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054c0794; end: 1054c07bf; +[SCGrapheneBloopsMetric stickerView] */

void FUN_1054c0794(void)

{
  _objc_alloc(PTR_PTR_1126b9a68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054c07c0; end: 1054c07eb; +[SCGrapheneBloopsMetric discoverTileView] */

void FUN_1054c07c0(void)

{
  _objc_alloc(PTR_PTR_1126b9a68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054c07ec; end: 1054c0817; +[SCGrapheneBloopsMetric discoverTileDisplayDelay] */

void FUN_1054c07ec(void)

{
  _objc_alloc(PTR_PTR_1126b9a68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054c0818; end: 1054c0843; +[SCGrapheneBloopsMetric discoverTileReenactmentStatus] */

void FUN_1054c0818(void)

{
  _objc_alloc(PTR_PTR_1126b9a68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054c0844; end: 1054c086f; +[SCGrapheneBloopsMetric discoverSnapView] */

void FUN_1054c0844(void)

{
  _objc_alloc(PTR_PTR_1126b9a68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054c0870; end: 1054c089b; +[SCGrapheneBloopsMetric discoverSnapFreezeCount] */

void FUN_1054c0870(void)

{
  _objc_alloc(PTR_PTR_1126b9a68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054c089c; end: 1054c08c7; +[SCGrapheneBloopsMetric discoverSnapGenerationLatency] */

void FUN_1054c089c(void)

{
  _objc_alloc(PTR_PTR_1126b9a68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054c08c8; end: 1054c08f3; +[SCGrapheneBloopsMetric discoverSnapDisplayDelay] */

void FUN_1054c08c8(void)

{
  _objc_alloc(PTR_PTR_1126b9a68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054c08f4; end: 1054c091f; +[SCGrapheneBloopsMetric discoverSnapReenactmentStatus] */

void FUN_1054c08f4(void)

{
  _objc_alloc(PTR_PTR_1126b9a68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054c0920; end: 1054c094b; +[SCGrapheneBloopsMetric discoverShare] */

void FUN_1054c0920(void)

{
  _objc_alloc(PTR_PTR_1126b9a68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054c094c; end: 1054c0977; +[SCGrapheneBloopsMetric discoverSharePreparingTime] */

void FUN_1054c094c(void)

{
  _objc_alloc(PTR_PTR_1126b9a68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054c0978; end: 1054c09a3; +[SCGrapheneBloopsMetric discoverPostToStory] */

void FUN_1054c0978(void)

{
  _objc_alloc(PTR_PTR_1126b9a68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054c09a4; end: 1054c09cf; +[SCGrapheneBloopsMetric discoverTargetFetchingOld] */

void FUN_1054c09a4(void)

{
  _objc_alloc(PTR_PTR_1126b9a68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054c09d0; end: 1054c09fb; +[SCGrapheneBloopsMetric discoverTargetFetchingNew] */

void FUN_1054c09d0(void)

{
  _objc_alloc(PTR_PTR_1126b9a68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054c09fc; end: 1054c0a27; +[SCGrapheneBloopsMetric bloopsRequestNonAcceptable] */

void FUN_1054c09fc(void)

{
  _objc_alloc(PTR_PTR_1126b9a68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054c0a28; end: 1054c0a53; +[SCGrapheneBloopsMetric bloopsNeutralization] */

void FUN_1054c0a28(void)

{
  _objc_alloc(PTR_PTR_1126b9a68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054c0a54; end: 1054c0a7f; +[SCGrapheneBloopsMetric bloopsSegmentation] */

void FUN_1054c0a54(void)

{
  _objc_alloc(PTR_PTR_1126b9a68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054c0a80; end: 1054c0aab; +[SCGrapheneBloopsMetric bloopsLensObtaining] */

void FUN_1054c0a80(void)

{
  _objc_alloc(PTR_PTR_1126b9a68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054c0aac; end: 1054c0ad7; +[SCGrapheneBloopsMetric bloopsLensStaticEmotion] */

void FUN_1054c0aac(void)

{
  _objc_alloc(PTR_PTR_1126b9a68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054c0ad8; end: 1054c0b03; +[SCGrapheneBloopsMetric bloopsPreviewHometabCount] */

void FUN_1054c0ad8(void)

{
  _objc_alloc(PTR_PTR_1126b9a68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054c0b04; end: 1054c0b2f; +[SCGrapheneBloopsMetric bloopsLensProcessing] */

void FUN_1054c0b04(void)

{
  _objc_alloc(PTR_PTR_1126b9a68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054c0b30; end: 1054c0b5b; +[SCGrapheneBloopsMetric bloopsLensProcessingTime] */

void FUN_1054c0b30(void)

{
  _objc_alloc(PTR_PTR_1126b9a68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054c0b5c; end: 1054c0b87; +[SCGrapheneBloopsMetric bloopsLensComponentInitTime] */

void FUN_1054c0b5c(void)

{
  _objc_alloc(PTR_PTR_1126b9a68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054c0b88; end: 1054c0bb3; +[SCGrapheneBloopsMetric bloopsLensSetupModeTime] */

void FUN_1054c0b88(void)

{
  _objc_alloc(PTR_PTR_1126b9a68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054c0bb4; end: 1054c0bdf; +[SCGrapheneBloopsMetric bloopsLensSetupEffectTime] */

void FUN_1054c0bb4(void)

{
  _objc_alloc(PTR_PTR_1126b9a68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054c0be0; end: 1054c0c0b; +[SCGrapheneBloopsMetric bloopsLensObtainingTime] */

void FUN_1054c0be0(void)

{
  _objc_alloc(PTR_PTR_1126b9a68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054c0c0c; end: 1054c0c37; +[SCGrapheneBloopsMetric bloopsLensImageTime] */

void FUN_1054c0c0c(void)

{
  _objc_alloc(PTR_PTR_1126b9a68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054c0c38; end: 1054c0c63; +[SCGrapheneBloopsMetric bloopsLensRemoteAssetsTime] */

void FUN_1054c0c38(void)

{
  _objc_alloc(PTR_PTR_1126b9a68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054c0c64; end: 1054c0c8f; +[SCGrapheneBloopsMetric bloopsFriendsIdsObtainStart] */

void FUN_1054c0c64(void)

{
  _objc_alloc(PTR_PTR_1126b9a68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054c0c90; end: 1054c0cbb; +[SCGrapheneBloopsMetric bloopsFriendsIdsObtainEnd] */

void FUN_1054c0c90(void)

{
  _objc_alloc(PTR_PTR_1126b9a68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054c0cbc; end: 1054c0ce7; +[SCGrapheneBloopsMetric bloopsFriendsIdsObtainCount] */

void FUN_1054c0cbc(void)

{
  _objc_alloc(PTR_PTR_1126b9a68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054c0ce8; end: 1054c0d13; +[SCGrapheneBloopsMetric bloopsFriendSelfieStatus] */

void FUN_1054c0ce8(void)

{
  _objc_alloc(PTR_PTR_1126b9a68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054c0d14; end: 1054c0d3f; +[SCGrapheneBloopsMetric bloopsReenactmentRequest] */

void FUN_1054c0d14(void)

{
  _objc_alloc(PTR_PTR_1126b9a68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054c0d40; end: 1054c0d6b; +[SCGrapheneBloopsMetric bloopsReenactmentCache] */

void FUN_1054c0d40(void)

{
  _objc_alloc(PTR_PTR_1126b9a68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054c0d6c; end: 1054c0e0b; -[SCGrapheneBloopsMetric description] */

void FUN_1054c0d6c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110de4038;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110de4038,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e8888;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1054c0e0c; end: 1054c0e93; -[SCGrapheneRegistry bloopsGraphene] */

void FUN_1054c0e0c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1054c0e94;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bc320 != -1) {
    func_0x00010002a2fc(0x1136bc320,&puStack_48);
  }
  uVar1 = uRam00000001136bc318;
  _objc_retain(uRam00000001136bc318);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054c0e94; end: 1054c10c7;  */

undefined * FUN_1054c0e94(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  ppuStack_168 = &PTR____CFConstantStringClassReference_110de4058;
  ppuStack_160 = &PTR____CFConstantStringClassReference_110de4078;
  ppuStack_158 = &PTR____CFConstantStringClassReference_110de4098;
  ppuStack_150 = &PTR____CFConstantStringClassReference_110de40b8;
  ppuStack_148 = &PTR____CFConstantStringClassReference_110de40d8;
  ppuStack_140 = &PTR____CFConstantStringClassReference_110de40f8;
  ppuStack_138 = &PTR____CFConstantStringClassReference_110de4118;
  ppuStack_130 = &PTR____CFConstantStringClassReference_110de4138;
  ppuStack_128 = &PTR____CFConstantStringClassReference_110de4158;
  ppuStack_120 = &PTR____CFConstantStringClassReference_110de4178;
  ppuStack_118 = &PTR____CFConstantStringClassReference_110de4198;
  ppuStack_110 = &PTR____CFConstantStringClassReference_110de41b8;
  ppuStack_108 = &PTR____CFConstantStringClassReference_110de41d8;
  ppuStack_100 = &PTR____CFConstantStringClassReference_110de41f8;
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110de4218;
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110de4238;
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110de4258;
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110de4278;
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110de4298;
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110de42b8;
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110de42d8;
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110de42f8;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110de4318;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110de4338;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110de4358;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110de4378;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110de4398;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110de43b8;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110de43d8;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110de43f8;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110de4418;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110de4438;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110de4458;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110de4478;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110de4498;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110de44b8;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110de44d8;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110de44f8;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_168,0x26);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126d60(uVar5,param_2,&PTR____CFConstantStringClassReference_110de4038,
                      &PTR____CFConstantStringClassReference_110daafd8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam00000001136bc318;
  uRam00000001136bc318 = uVar5;
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = puVar2;
  _objc_retain();
  func_0x0001054c15f0();
  _objc_retainAutoreleasedReturnValue();
  if ((puVar3 == (undefined *)0x0) ||
     (puVar4 = puVar3, func_0x00010c08fa60(), puVar4 == (undefined *)0x0)) {
    puVar4 = puVar2;
    func_0x0001054c1168();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
      puVar6 = (undefined *)0xa;
    }
    else {
      puVar6 = puVar4;
      func_0x00010c13e720(puVar4);
      puVar6 = (undefined *)(ulong)((uint)puVar6 & ((int)(uint)puVar6 >> 0x1f ^ 0xffffffffU));
    }
    _objc_release(puVar4);
  }
  else {
    puVar6 = puVar3;
    func_0x00010c067fc0(puVar3);
    puVar6 = (undefined *)((ulong)puVar6 & ((long)puVar6 >> 0x3f ^ 0xffffffffffffffffU));
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  return puVar6;
}



/* Entry: 1054c10c8; end: 1054c136f;  */

ulong FUN_1054c10c8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  _objc_retain();
  func_0x0001054c15f0();
  _objc_retainAutoreleasedReturnValue();
  if ((uVar1 == 0) || (uVar2 = uVar1, func_0x00010c08fa60(), uVar2 == 0)) {
    uVar2 = param_1;
    func_0x0001054c1168();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 == 0) {
      uVar3 = 10;
    }
    else {
      uVar3 = uVar2;
      func_0x00010c13e720(uVar2);
      uVar3 = (ulong)((uint)uVar3 & ((int)(uint)uVar3 >> 0x1f ^ 0xffffffffU));
    }
    _objc_release(uVar2);
  }
  else {
    uVar3 = uVar1;
    func_0x00010c067fc0(uVar1);
    uVar3 = uVar3 & ((long)uVar3 >> 0x3f ^ 0xffffffffffffffffU);
  }
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 1054c1370; end: 1054c13bb;  */

long FUN_1054c1370(long param_1)

{
  long lVar1;
  
  func_0x0001054c1168();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar1 = 1;
  }
  else {
    lVar1 = param_1;
    func_0x00010c071800(param_1);
  }
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 1054c13bc; end: 1054c154b;  */

void FUN_1054c13bc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lStack_48;
  
  func_0x00010c1195e0(param_1,param_2,&PTR____CFConstantStringClassReference_110eef198,0,0);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    puVar2 = PTR_PTR_1126b9a88;
    _objc_alloc();
    lVar3 = param_1;
    func_0x00010c296d80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lStack_48 = 0;
    func_0x00010c008360(puVar2,param_2,lVar3,&lStack_48);
    lVar1 = lStack_48;
    _objc_release(lVar3);
    puVar4 = (undefined *)0x0;
    if (lVar1 == 0) {
      _objc_retain(puVar2);
      puVar4 = puVar2;
    }
    _objc_release(puVar2);
    _objc_release(param_1);
    if (puVar4 != (undefined *)0x0) goto LAB_1054c1530;
  }
  puVar4 = PTR_PTR_1126b9a88;
  _objc_alloc_init(PTR_PTR_1126b9a88);
  puVar2 = PTR_PTR_1126b9a90;
  _objc_alloc_init(PTR_PTR_1126b9a90);
  func_0x00010c20a3e0(puVar4,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = puVar4;
  func_0x00010c252fa0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b9a98;
  _objc_alloc_init(PTR_PTR_1126b9a98);
  func_0x00010c21a920();
  func_0x00010c1d0560(puVar2,param_2,puVar5,200);
  _objc_release(puVar5);
  _objc_release(puVar2);
  puVar2 = puVar4;
  func_0x00010c252fa0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b9a98;
  _objc_alloc_init(PTR_PTR_1126b9a98);
  func_0x00010c21a920();
  func_0x00010c1d0560(puVar2,param_2,puVar5,0xcc);
  _objc_release(puVar5);
  _objc_release(puVar2);
LAB_1054c1530:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1054c154c; end: 1054c1667; +[BloopsFriendbloopsCacheConfig descriptor] */

void FUN_1054c154c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc328 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3dcb0,
                        &PTR____CFConstantStringClassReference_110de4518,&PTR_DAT_1130dd7a8,
                        &PTR_DAT_1130dd7c0,4,0x10,0x1c);
    puRam00000001136bc328 = puVar1;
  }
  return;
}



/* Entry: 1054c1668; end: 1054c16cf; +[SCCameosSnapsContentObjectsConfig descriptor] */

void FUN_1054c1668(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc330 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3dd50,
                        &PTR____CFConstantStringClassReference_110de4538,&PTR_DAT_1130dd840,
                        &PTR_DAT_1130dd858,1,0x10,0x1c);
    puRam00000001136bc330 = puVar1;
  }
  return;
}



/* Entry: 1054c16d0; end: 1054c1737; +[SCCameosReenactmentCentralizedSchedulerConfig descriptor] */

void FUN_1054c16d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc338 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3ddf0,
                        &PTR____CFConstantStringClassReference_110de4558,&PTR_DAT_1130dd878,
                        &PTR_s_group_1130dd890,4,0x18,0x1c);
    puRam00000001136bc338 = puVar1;
  }
  return;
}



/* Entry: 1054c1738; end: 1054c179f; +[SCCameosNetworkResponseCacheConfig descriptor] */

void FUN_1054c1738(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc340 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3de90,
                        &PTR____CFConstantStringClassReference_110de4578,&PTR_DAT_1130dd910,
                        &PTR_DAT_1130dd948,2,0x18,0x1c);
    puRam00000001136bc340 = puVar1;
  }
  return;
}



/* Entry: 1054c17a0; end: 1054c1807; +[SCCameosNetworkCacheSettings descriptor] */

void FUN_1054c17a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc348 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3dee0,
                        &PTR____CFConstantStringClassReference_110de4598,&PTR_DAT_1130dd910,
                        &PTR_DAT_1130dd928,1,8,0x1c);
    puRam00000001136bc348 = puVar1;
  }
  return;
}



/* Entry: 1054c1808; end: 1054c186f; +[SCCameosFramesPredictorConfig descriptor] */

void FUN_1054c1808(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc350 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3df80,
                        &PTR____CFConstantStringClassReference_110de45b8,&PTR_DAT_1130dd988,
                        &PTR_DAT_1130dd9a0,2,0x18,0x1c);
    puRam00000001136bc350 = puVar1;
  }
  return;
}



/* Entry: 1054c1870; end: 1054c18d7; +[SCCameosFramesPredictorSettings descriptor] */

void FUN_1054c1870(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc358 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3dfd0,
                        &PTR____CFConstantStringClassReference_110de45d8,&PTR_DAT_1130dd988,
                        &PTR_DAT_1130dd9e0,2,8,0x1c);
    puRam00000001136bc358 = puVar1;
  }
  return;
}



/* Entry: 1054c18d8; end: 1054c193f; +[SCCameosBloopsBeautificationConfig descriptor] */

void FUN_1054c18d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc360 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3e070,
                        &PTR____CFConstantStringClassReference_110de45f8,&PTR_DAT_1130dda20,
                        &PTR_DAT_1130dda38,2,0x18,0x1c);
    puRam00000001136bc360 = puVar1;
  }
  return;
}



/* Entry: 1054c1940; end: 1054c19a7; +[SCCameosBloopsLensMeta descriptor] */

void FUN_1054c1940(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc368 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3e0c0,
                        &PTR____CFConstantStringClassReference_110de4618,&PTR_DAT_1130dda20,
                        &PTR_s_id_p_1130dda78,3,0x20,0x1c);
    puRam00000001136bc368 = puVar1;
  }
  return;
}



/* Entry: 1054c19a8; end: 1054c1a0f; +[SCCameosLensMetadataConfig descriptor] */

void FUN_1054c19a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc370 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3e160,
                        &PTR____CFConstantStringClassReference_110de4638,&PTR_DAT_1130ddad8,
                        &PTR_DAT_1130ddaf0,1,0x10,0x1c);
    puRam00000001136bc370 = puVar1;
  }
  return;
}



/* Entry: 1054c1a10; end: 1054c1af3; +[SCCameosSingleCameoLensMetadata descriptor] */

void FUN_1054c1a10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc378 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3e1b0,
                        &PTR____CFConstantStringClassReference_110de4658,&PTR_DAT_1130ddad8,
                        &PTR_s_lensIdsArray_1130ddb10,1,0x10,0x1c);
    puRam00000001136bc378 = puVar1;
  }
  return;
}



/* Entry: 1054c1af4; end: 1054c1aff;  */

bool FUN_1054c1af4(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1054c1b00; end: 1054c1b67; +[SCLensCameosSelfieData descriptor] */

void FUN_1054c1b00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc388 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3e250,
                        &PTR____CFConstantStringClassReference_110de4698,
                        &PTR_s_snapchat_lenses_1130ddb30,&PTR_s_image_1130ddcc8,5,0x30,0x1c);
    puRam00000001136bc388 = puVar1;
  }
  return;
}



/* Entry: 1054c1b68; end: 1054c1bcf; +[SCLensIsCameosFeatureAvailableResponse descriptor] */

void FUN_1054c1b68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc390 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3e2a0,
                        &PTR____CFConstantStringClassReference_110de46b8,
                        &PTR_s_snapchat_lenses_1130ddb30,&PTR_DAT_1130ddb48,1,4,0x1c);
    puRam00000001136bc390 = puVar1;
  }
  return;
}



/* Entry: 1054c1bd0; end: 1054c1c37; +[SCLensGetDevicePerformanceModeResponse descriptor] */

void FUN_1054c1bd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc398 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3e2f0,
                        &PTR____CFConstantStringClassReference_110de46d8,
                        &PTR_s_snapchat_lenses_1130ddb30,&PTR_DAT_1130ddb68,1,8,0x1c);
    puRam00000001136bc398 = puVar1;
  }
  return;
}



/* Entry: 1054c1c38; end: 1054c1c9f; +[SCLensIsCameosUserSelfieAvailableResponse descriptor] */

void FUN_1054c1c38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc3a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3e340,
                        &PTR____CFConstantStringClassReference_110de46f8,
                        &PTR_s_snapchat_lenses_1130ddb30,&PTR_DAT_1130ddb88,1,4,0x1c);
    puRam00000001136bc3a0 = puVar1;
  }
  return;
}



/* Entry: 1054c1ca0; end: 1054c1d07; +[SCLensLoadCameosUserSelfieResponse descriptor] */

void FUN_1054c1ca0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc3a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3e390,
                        &PTR____CFConstantStringClassReference_110de4718,
                        &PTR_s_snapchat_lenses_1130ddb30,&PTR_DAT_1130ddba8,1,0x10,0x1c);
    puRam00000001136bc3a8 = puVar1;
  }
  return;
}



/* Entry: 1054c1d08; end: 1054c1d6f; +[SCLensGetTotalFriendCameoSelfiesResponse descriptor] */

void FUN_1054c1d08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc3b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3e3e0,
                        &PTR____CFConstantStringClassReference_110de4738,
                        &PTR_s_snapchat_lenses_1130ddb30,&PTR_DAT_1130ddbc8,1,8,0x1c);
    puRam00000001136bc3b0 = puVar1;
  }
  return;
}



/* Entry: 1054c1d70; end: 1054c1dd7; +[SCLensLoadCameosFriendSelfieRequest descriptor] */

void FUN_1054c1d70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc3b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3e430,
                        &PTR____CFConstantStringClassReference_110de4758,
                        &PTR_s_snapchat_lenses_1130ddb30,&PTR_DAT_1130ddbe8,1,8,0x1c);
    puRam00000001136bc3b8 = puVar1;
  }
  return;
}



/* Entry: 1054c1dd8; end: 1054c1e3f; +[SCLensLoadCameosFriendSelfieResponse descriptor] */

void FUN_1054c1dd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc3c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3e480,
                        &PTR____CFConstantStringClassReference_110de4778,
                        &PTR_s_snapchat_lenses_1130ddb30,&PTR_DAT_1130ddc08,1,0x10,0x1c);
    puRam00000001136bc3c0 = puVar1;
  }
  return;
}



/* Entry: 1054c1e40; end: 1054c1ea7; +[SCLensShouldShowFriendPolicyPopupResponse descriptor] */

void FUN_1054c1e40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc3c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3e4d0,
                        &PTR____CFConstantStringClassReference_110de4798,
                        &PTR_s_snapchat_lenses_1130ddb30,&PTR_DAT_1130ddc28,1,4,0x1c);
    puRam00000001136bc3c8 = puVar1;
  }
  return;
}



/* Entry: 1054c1ea8; end: 1054c1f0f; +[SCLensHandleFriendPolicyPopupResultRequest descriptor] */

void FUN_1054c1ea8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc3d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3e520,
                        &PTR____CFConstantStringClassReference_110de47b8,
                        &PTR_s_snapchat_lenses_1130ddb30,&PTR_DAT_1130ddc48,1,4,0x1c);
    puRam00000001136bc3d0 = puVar1;
  }
  return;
}



/* Entry: 1054c1f10; end: 1054c1f77; +[SCLensSegmentationPatchData descriptor] */

void FUN_1054c1f10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc3d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3e570,
                        &PTR____CFConstantStringClassReference_110de47d8,
                        &PTR_s_snapchat_lenses_1130ddb30,&PTR_DAT_1130ddc88,2,0x18,0x1c);
    puRam00000001136bc3d8 = puVar1;
  }
  return;
}



/* Entry: 1054c1f78; end: 1054c205b; +[SCLensLensPreparationFinishedRequest descriptor] */

void FUN_1054c1f78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc3e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3e5c0,
                        &PTR____CFConstantStringClassReference_110de47f8,
                        &PTR_s_snapchat_lenses_1130ddb30,&PTR_DAT_1130ddc68,1,4,0x1c);
    puRam00000001136bc3e0 = puVar1;
  }
  return;
}



/* Entry: 1054c205c; end: 1054c2067;  */

bool FUN_1054c205c(uint param_1)

{
  return param_1 < 3;
}


