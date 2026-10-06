/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1050f7a7c; end: 1050f7abb;  */

void FUN_1050f7a7c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdec300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1050f7abc; end: 1050f7c47; -[SCCommunitiesProfileEntryPoint _createCommunityOrgService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050f7abc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1eeba0(puVar1,param_2,10000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar1,param_2,60000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c17ca40(puVar1,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_11271c370;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_11271c354;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bfcfa80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0b7020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1050f7c48; end: 1050f7d4f; -[SCCommunitiesProfileEntryPoint _getGroupMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050f7c48(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = param_1 + _DAT_11271c34c;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_11271c348;
  lVar4 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c117400();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar7;
  _objc_loadWeakRetained(param_1);
  lVar7 = param_1;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010bf62680(lVar3,param_2,lVar5,lVar7,PTR___dispatch_main_q_11034be20);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 1050f7d50; end: 1050f7e1f; -[SCCommunitiesProfileEntryPoint _getVerifiedGroupMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050f7d50(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1 + _DAT_11271c34c;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11271c348;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf62580(lVar3,param_2,lVar4,PTR___dispatch_main_q_11034be20);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 1050f7e20; end: 1050f7f07; -[SCCommunitiesProfileEntryPoint _launchNonMemberProfile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050f7e20(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = param_1;
  func_0x00010be1f820();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  return;
}



/* Entry: 1050f7f08; end: 1050f7feb;  */

void FUN_1050f7f08(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != 0) {
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010bf43080();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0ecf00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010bf43080(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ecf20();
    _objc_release(lVar1);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_2;
    func_0x00010bfceb20(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be47da0(param_1);
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 1050f7fec; end: 1050f80c7; -[SCCommunitiesProfileEntryPoint _launchNonMemberProfileWithOrgId:groupId:orgType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050f7fec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11271c36c;
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar3 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar3);
  lVar1 = lVar3;
  func_0x00010bf42d20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  FUN_1050f555c(param_5,lVar2,param_4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar3);
  if ((int)param_5 == 0) {
    func_0x00010be47de0(param_1);
  }
  else {
    func_0x00010be48540();
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050f80c8; end: 1050f86a7; -[SCCommunitiesProfileEntryPoint _launchNonVerifiedMemberProfileWithOrgId:groupId:orgType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050f80c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar21 = (long)_DAT_11271c374;
  lVar1 = param_1 + lVar21;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    _objc_initWeak(auStack_70,param_1);
    lVar1 = param_1 + _DAT_11271c378;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c0d6760();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_retain(lVar3);
    lVar2 = lVar3;
    func_0x00010010fab4(lVar3,PTR_DAT_1126a4ee8);
    lVar1 = lVar3;
    if ((int)lVar2 == 0) {
      lVar1 = 0;
    }
    _objc_retain();
    _objc_release(lVar3);
    lVar2 = param_1 + _DAT_11271c34c;
    _objc_loadWeakRetained();
    lVar4 = lVar2;
    func_0x00010bf62060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_1 + _DAT_11271c37c;
    _objc_loadWeakRetained();
    lVar5 = lVar2;
    func_0x00010c08d900();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_1 + _DAT_11271c380;
    _objc_loadWeakRetained();
    lVar6 = lVar2;
    func_0x00010c0d4b00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar7 = PTR_PTR_1126b4ca8;
    _objc_alloc();
    lVar23 = (long)_DAT_11271c348;
    lVar2 = param_1 + lVar23;
    _objc_loadWeakRetained(lVar2);
    lVar8 = lVar2;
    func_0x00010c117400();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = (long)_DAT_11271c364;
    lVar9 = param_1 + lVar22;
    _objc_loadWeakRetained(lVar9);
    lVar10 = lVar9;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c007e60();
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar2);
    puVar11 = PTR_PTR_1126b4cb0;
    _objc_alloc();
    lVar2 = param_1 + lVar23;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c007da0();
    _objc_release(lVar2);
    puVar12 = PTR_PTR_1126b4cb8;
    _objc_alloc();
    lVar2 = param_1 + lVar23;
    _objc_loadWeakRetained();
    lVar13 = lVar2;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1 + lVar23;
    _objc_loadWeakRetained();
    lVar14 = lVar9;
    func_0x00010c247d20();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1 + lVar23;
    _objc_loadWeakRetained(lVar8);
    lVar15 = lVar8;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1 + lVar23;
    _objc_loadWeakRetained(lVar10);
    lVar16 = lVar10;
    func_0x00010c117400();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = param_1 + lVar22;
    _objc_loadWeakRetained();
    lVar17 = lVar22;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = param_1 + lVar23;
    _objc_loadWeakRetained();
    func_0x00010c007f00();
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(lVar22);
    _objc_release(lVar16);
    _objc_release(lVar10);
    _objc_release(lVar15);
    _objc_release(lVar8);
    _objc_release(lVar14);
    _objc_release(lVar9);
    _objc_release(lVar13);
    _objc_release(lVar2);
    puVar19 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_80,auStack_70);
    _objc_retain(param_3);
    _objc_retain(param_4);
    uStack_78 = param_5;
    func_0x00010bf11fe0(puVar19);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR_PTR_1126b4cc0;
    _objc_alloc(PTR_PTR_1126b4cc0);
    lVar2 = param_1 + _DAT_11271c38c;
    _objc_loadWeakRetained(lVar2);
    lVar8 = lVar2;
    func_0x00010c295440();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1 + lVar23;
    _objc_loadWeakRetained(lVar9);
    func_0x00010c05ffc0(puVar20);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar2);
    func_0x00010c1e1580(puVar12);
    func_0x00010c1e1580(puVar7);
    func_0x00010c1e1580(puVar11);
    lVar23 = param_1 + lVar23;
    _objc_loadWeakRetained();
    lVar2 = lVar23;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c980();
    _objc_release(lVar2);
    _objc_release(lVar23);
    _objc_storeWeak(param_1 + lVar21,puVar20);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_80);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar1);
    _objc_release(lVar3);
    _objc_destroyWeak(auStack_70);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1050f86a8; end: 1050f86fb;  */

void FUN_1050f86a8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf0860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1050f86fc; end: 1050f8e1f; -[SCCommunitiesProfileEntryPoint _launchSiblingMemberProfileWithOrgId:groupId:orgType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050f86fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar27 = (long)_DAT_11271c374;
  lVar1 = param_1 + lVar27;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    _objc_initWeak(auStack_70,param_1);
    lVar1 = param_1 + _DAT_11271c378;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c0d6760();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_retain(lVar3);
    lVar2 = lVar3;
    func_0x00010010fab4(lVar3,PTR_DAT_1126a4ee8);
    lVar1 = lVar3;
    if ((int)lVar2 == 0) {
      lVar1 = 0;
    }
    _objc_retain();
    _objc_release(lVar3);
    lVar26 = (long)_DAT_11271c34c;
    lVar2 = param_1 + lVar26;
    _objc_loadWeakRetained();
    lVar4 = lVar2;
    func_0x00010bf62060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_1 + _DAT_11271c37c;
    _objc_loadWeakRetained();
    lVar5 = lVar2;
    func_0x00010c08d900();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_1 + _DAT_11271c380;
    _objc_loadWeakRetained();
    lVar6 = lVar2;
    func_0x00010c0d4b00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_1 + _DAT_11271c390;
    _objc_loadWeakRetained();
    lVar7 = lVar2;
    func_0x00010bf87660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    uVar8 = *(undefined8 *)(param_1 + _DAT_11271c394);
    _objc_retain();
    lVar2 = param_1 + _DAT_11271c398;
    _objc_loadWeakRetained();
    lVar9 = lVar2;
    func_0x00010bfcdf20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar10 = PTR_PTR_1126b4cc8;
    _objc_alloc();
    lVar22 = (long)_DAT_11271c39c;
    lVar2 = param_1 + lVar22;
    _objc_loadWeakRetained(lVar2);
    lVar11 = lVar2;
    func_0x00010bfb8c60();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = (long)_DAT_11271c348;
    lVar12 = param_1 + lVar23;
    _objc_loadWeakRetained();
    lVar13 = lVar12;
    func_0x00010c117400();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = param_1 + _DAT_11271c364;
    _objc_loadWeakRetained();
    lVar14 = lVar25;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = (long)_DAT_11271c3a0;
    lVar16 = param_1 + lVar24;
    _objc_loadWeakRetained();
    func_0x00010c007ea0();
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar25);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar2);
    puVar17 = PTR_PTR_1126b4cb0;
    _objc_alloc();
    lVar2 = param_1 + lVar23;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c007da0();
    _objc_release(lVar2);
    puVar18 = PTR_PTR_1126b4cd0;
    _objc_alloc(PTR_PTR_1126b4cd0);
    lVar22 = param_1 + lVar22;
    _objc_loadWeakRetained(lVar22);
    lVar12 = lVar22;
    func_0x00010bfb8c60();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar7;
    func_0x00010c269d40(lVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar26 = param_1 + lVar26;
    _objc_loadWeakRetained(lVar26);
    lVar11 = lVar26;
    func_0x00010bf62060();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = (long)_DAT_11271c36c;
    lVar2 = param_1 + lVar25;
    _objc_loadWeakRetained();
    lVar13 = lVar2;
    func_0x00010bf42d20();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = param_1 + lVar24;
    _objc_loadWeakRetained();
    func_0x00010c04d260(puVar18);
    _objc_release(lVar24);
    _objc_release(lVar13);
    _objc_release(lVar2);
    _objc_release(lVar11);
    _objc_release(lVar26);
    _objc_release(lVar16);
    _objc_release(lVar12);
    _objc_release(lVar22);
    puVar19 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_80,auStack_70);
    _objc_retain(param_3);
    _objc_retain(param_4);
    uStack_78 = param_5;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR_PTR_1126b4cc0;
    _objc_alloc();
    lVar2 = param_1 + _DAT_11271c38c;
    _objc_loadWeakRetained();
    lVar16 = lVar2;
    func_0x00010c295440();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1 + lVar23;
    _objc_loadWeakRetained(lVar12);
    lVar25 = param_1 + lVar25;
    _objc_loadWeakRetained(lVar25);
    lVar22 = lVar25;
    func_0x00010bf42d20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c060140();
    _objc_release(lVar22);
    _objc_release(lVar25);
    _objc_release(lVar12);
    _objc_release(lVar16);
    _objc_release(lVar2);
    func_0x00010c1e1580(puVar10);
    func_0x00010c1e1580(puVar17);
    func_0x00010c1e1580(puVar18);
    puVar21 = puVar19;
    func_0x00010c269d40(puVar19);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c165b20();
    _objc_release(puVar21);
    lVar23 = param_1 + lVar23;
    _objc_loadWeakRetained();
    lVar2 = lVar23;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c980();
    _objc_release(lVar2);
    _objc_release(lVar23);
    _objc_storeWeak(param_1 + lVar27,puVar20);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_80);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar10);
    _objc_release(lVar9);
    _objc_release(uVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar1);
    _objc_release(lVar3);
    _objc_destroyWeak(auStack_70);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1050f8e20; end: 1050f8e6f;  */

void FUN_1050f8e20(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf3540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1050f8e70; end: 1050f8f57; -[SCCommunitiesProfileEntryPoint _launchVerifiedMemberProfile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050f8e70(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = param_1;
  func_0x00010be23c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  return;
}



/* Entry: 1050f8f58; end: 1050f9027;  */

void FUN_1050f8f58(long param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x00010bfa2680(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_38,param_1 + 0x20);
    func_0x00010c0bfcc0(lVar1);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1050f9028; end: 1050f9097;  */

void FUN_1050f9028(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c0ecf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be48980(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050f9098; end: 1050fa07b; -[SCCommunitiesProfileEntryPoint _launchVerifiedMemberProfileWithOrgId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050f9098(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
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
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  long lVar37;
  undefined *puVar38;
  undefined *puVar39;
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
  long lVar51;
  long lVar52;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  lVar49 = (long)_DAT_11271c374;
  lVar1 = param_1 + lVar49;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    _objc_initWeak(auStack_70,param_1);
    lVar50 = (long)_DAT_11271c378;
    lVar1 = param_1 + lVar50;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c0d6760();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_retain(lVar3);
    lVar2 = lVar3;
    func_0x00010010fab4(lVar3,PTR_DAT_1126a4ee8);
    lVar1 = lVar3;
    if ((int)lVar2 == 0) {
      lVar1 = 0;
    }
    _objc_retain();
    _objc_release(lVar3);
    lVar40 = (long)_DAT_11271c34c;
    lVar2 = param_1 + lVar40;
    _objc_loadWeakRetained();
    lVar4 = lVar2;
    func_0x00010bf62060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_1 + _DAT_11271c37c;
    _objc_loadWeakRetained();
    lVar5 = lVar2;
    func_0x00010c08d900();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_1 + _DAT_11271c380;
    _objc_loadWeakRetained();
    lVar6 = lVar2;
    func_0x00010c0d4b00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_1 + _DAT_11271c390;
    _objc_loadWeakRetained();
    lVar7 = lVar2;
    func_0x00010bf87660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    uVar8 = *(undefined8 *)(param_1 + _DAT_11271c394);
    _objc_retain();
    lVar2 = param_1 + _DAT_11271c398;
    _objc_loadWeakRetained();
    lVar9 = lVar2;
    func_0x00010bfcdf20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar10 = PTR_PTR_1126b4cd8;
    _objc_alloc();
    lVar52 = (long)_DAT_11271c39c;
    lVar2 = param_1 + lVar52;
    _objc_loadWeakRetained(lVar2);
    lVar11 = lVar2;
    func_0x00010c0d4b40();
    _objc_retainAutoreleasedReturnValue();
    lVar51 = (long)_DAT_11271c3a0;
    lVar12 = param_1 + lVar51;
    _objc_loadWeakRetained();
    func_0x00010c007e80();
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar2);
    puVar13 = PTR_PTR_1126b4ce0;
    _objc_alloc();
    lVar41 = (long)_DAT_11271c348;
    lVar2 = param_1 + lVar41;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c007da0();
    _objc_release(lVar2);
    puVar14 = PTR_PTR_1126b4ce8;
    _objc_alloc();
    lVar2 = param_1 + _DAT_11271c3a8;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bff2480();
    _objc_release(lVar2);
    puVar15 = PTR_PTR_1126b4cf0;
    _objc_alloc();
    lVar42 = (long)_DAT_11271c38c;
    lVar2 = param_1 + lVar42;
    _objc_loadWeakRetained();
    lVar16 = lVar2;
    func_0x00010c295440();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1 + lVar40;
    _objc_loadWeakRetained();
    lVar17 = lVar12;
    func_0x00010bf62060();
    _objc_retainAutoreleasedReturnValue();
    lVar43 = (long)_DAT_11271c3ac;
    lVar11 = param_1 + lVar43;
    _objc_loadWeakRetained();
    lVar18 = lVar11;
    func_0x00010c2445a0();
    _objc_retainAutoreleasedReturnValue();
    lVar47 = param_1 + lVar43;
    _objc_loadWeakRetained();
    lVar19 = lVar47;
    func_0x00010c244ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar48 = param_1 + lVar43;
    _objc_loadWeakRetained();
    lVar20 = lVar48;
    func_0x00010c244620();
    _objc_retainAutoreleasedReturnValue();
    lVar44 = (long)_DAT_11271c3b0;
    lVar21 = param_1 + lVar44;
    _objc_loadWeakRetained();
    lVar22 = lVar21;
    func_0x00010bfba6a0();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = param_1 + _DAT_11271c3b4;
    _objc_loadWeakRetained();
    lVar24 = lVar23;
    func_0x00010bfb9920();
    _objc_retainAutoreleasedReturnValue();
    lVar50 = param_1 + lVar50;
    _objc_loadWeakRetained();
    lVar25 = lVar50;
    func_0x00010c0d6760();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = param_1 + lVar43;
    _objc_loadWeakRetained();
    lVar27 = lVar26;
    func_0x00010c244ae0();
    _objc_retainAutoreleasedReturnValue();
    lVar45 = (long)_DAT_11271c364;
    lVar37 = param_1 + lVar45;
    _objc_loadWeakRetained();
    lVar28 = lVar37;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar46 = (long)_DAT_11271c368;
    lVar29 = param_1 + lVar46;
    _objc_loadWeakRetained();
    lVar30 = lVar29;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar31 = param_1 + _DAT_11271c3c4;
    _objc_loadWeakRetained();
    lVar32 = lVar31;
    func_0x00010c0c79a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05fec0();
    _objc_release(lVar32);
    _objc_release(lVar31);
    _objc_release(lVar30);
    _objc_release(lVar29);
    _objc_release(lVar28);
    _objc_release(lVar37);
    _objc_release(lVar27);
    _objc_release(lVar26);
    _objc_release(lVar25);
    _objc_release(lVar50);
    _objc_release(lVar24);
    _objc_release(lVar23);
    _objc_release(lVar22);
    _objc_release(lVar21);
    _objc_release(lVar20);
    _objc_release(lVar48);
    _objc_release(lVar19);
    _objc_release(lVar47);
    _objc_release(lVar18);
    _objc_release(lVar11);
    _objc_release(lVar17);
    _objc_release(lVar12);
    _objc_release(lVar16);
    _objc_release(lVar2);
    puVar33 = PTR_PTR_1126b4cd0;
    _objc_alloc();
    lVar52 = param_1 + lVar52;
    _objc_loadWeakRetained();
    lVar12 = lVar52;
    func_0x00010bfb8c60();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar50 = param_1 + lVar40;
    _objc_loadWeakRetained();
    lVar21 = lVar50;
    func_0x00010bf62060();
    _objc_retainAutoreleasedReturnValue();
    lVar47 = (long)_DAT_11271c36c;
    lVar2 = param_1 + lVar47;
    _objc_loadWeakRetained();
    lVar48 = lVar2;
    func_0x00010bf42d20();
    _objc_retainAutoreleasedReturnValue();
    lVar51 = param_1 + lVar51;
    _objc_loadWeakRetained();
    func_0x00010c04d260();
    _objc_release(lVar51);
    _objc_release(lVar48);
    _objc_release(lVar2);
    _objc_release(lVar21);
    _objc_release(lVar50);
    _objc_release(lVar11);
    _objc_release(lVar12);
    _objc_release(lVar52);
    puVar34 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_78,auStack_70);
    _objc_retain(0);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar35 = puVar34;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d6240();
    _objc_release(puVar35);
    lVar50 = param_1 + _DAT_11271c35c;
    _objc_loadWeakRetained(lVar50);
    lVar12 = lVar50;
    func_0x00010bf3f680();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar35 = puVar34;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17df40();
    _objc_release(puVar35);
    _objc_release(lVar2);
    _objc_release(lVar12);
    _objc_release(lVar50);
    puVar35 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar50 = param_1 + lVar46;
    _objc_loadWeakRetained();
    lVar2 = lVar50;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080608cc();
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar36 = puVar34;
    func_0x00010c269d40(puVar34);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ff360();
    _objc_release(puVar36);
    _objc_release(puVar35);
    _objc_release(lVar2);
    _objc_release(lVar50);
    lVar50 = param_1 + lVar41;
    _objc_loadWeakRetained(lVar50);
    lVar2 = lVar50;
    func_0x00010c1526c0();
    _objc_retainAutoreleasedReturnValue();
    puVar35 = puVar34;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cb660();
    _objc_release(puVar35);
    _objc_release(lVar2);
    _objc_release(lVar50);
    puVar35 = PTR_PTR_1126b4cc0;
    _objc_alloc();
    lVar50 = param_1 + lVar42;
    _objc_loadWeakRetained();
    lVar37 = lVar50;
    func_0x00010c295440();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + lVar41;
    _objc_loadWeakRetained();
    lVar48 = (long)_DAT_11271c3d4;
    lVar12 = param_1 + lVar48;
    _objc_loadWeakRetained();
    lVar26 = lVar12;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1 + lVar46;
    _objc_loadWeakRetained();
    lVar23 = lVar11;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar47 = param_1 + lVar47;
    _objc_loadWeakRetained();
    lVar21 = lVar47;
    func_0x00010bf42d20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c060020();
    _objc_release(lVar21);
    _objc_release(lVar47);
    _objc_release(lVar23);
    _objc_release(lVar11);
    _objc_release(lVar26);
    _objc_release(lVar12);
    _objc_release(lVar2);
    _objc_release(lVar37);
    _objc_release(lVar50);
    lVar50 = param_1 + lVar46;
    _objc_loadWeakRetained();
    lVar12 = lVar50;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar12;
    func_0x000108060928();
    _objc_release(lVar12);
    _objc_release(lVar50);
    if ((int)lVar2 != 0) {
      puVar36 = PTR_PTR_1126b4cf8;
      _objc_alloc(PTR_PTR_1126b4cf8);
      lVar50 = param_1 + _DAT_11271c3d8;
      _objc_loadWeakRetained(lVar50);
      lVar11 = lVar50;
      func_0x00010bfa0c00();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1 + lVar40;
      _objc_loadWeakRetained(lVar2);
      lVar47 = lVar2;
      func_0x00010bf62060();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = param_1 + _DAT_11271c3dc;
      _objc_loadWeakRetained(lVar12);
      lVar48 = param_1 + lVar48;
      _objc_loadWeakRetained(lVar48);
      func_0x00010bff7f60(puVar36);
      _objc_release(lVar48);
      _objc_release(lVar12);
      _objc_release(lVar47);
      _objc_release(lVar2);
      _objc_release(lVar11);
      _objc_release(lVar50);
      func_0x00010c1e1560(puVar36);
      puVar38 = puVar34;
      func_0x00010c269d40(puVar34);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c170e00();
      _objc_release(puVar38);
      _objc_release(puVar36);
    }
    puVar36 = PTR_PTR_1126b4d00;
    _objc_alloc();
    lVar40 = param_1 + lVar40;
    _objc_loadWeakRetained();
    lVar11 = lVar40;
    func_0x00010bf62060();
    _objc_retainAutoreleasedReturnValue();
    lVar44 = param_1 + lVar44;
    _objc_loadWeakRetained();
    lVar45 = param_1 + lVar45;
    _objc_loadWeakRetained();
    lVar43 = param_1 + lVar43;
    _objc_loadWeakRetained();
    lVar47 = lVar43;
    func_0x00010c244620();
    _objc_retainAutoreleasedReturnValue();
    lVar46 = param_1 + lVar46;
    _objc_loadWeakRetained();
    lVar48 = lVar46;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar50 = param_1 + _DAT_11271c3ec;
    _objc_loadWeakRetained();
    lVar21 = lVar50;
    func_0x00010bf42fa0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + lVar41;
    _objc_loadWeakRetained();
    lVar23 = lVar2;
    func_0x00010bfceb20();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1 + _DAT_11271c3f0;
    _objc_loadWeakRetained();
    func_0x00010c007dc0(puVar36);
    _objc_release(lVar12);
    _objc_release(lVar23);
    _objc_release(lVar2);
    _objc_release(lVar21);
    _objc_release(lVar50);
    _objc_release(lVar48);
    _objc_release(lVar46);
    _objc_release(lVar47);
    _objc_release(lVar43);
    _objc_release(lVar45);
    _objc_release(lVar44);
    _objc_release(lVar11);
    _objc_release(lVar40);
    func_0x00010c1e1560(puVar36);
    puVar38 = puVar34;
    func_0x00010c269d40(puVar34);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a4660();
    _objc_release(puVar38);
    func_0x00010c1e1580(puVar14);
    func_0x00010c1e1580(puVar15);
    func_0x00010c1e1580(puVar10);
    func_0x00010c1e1580(puVar13);
    puVar38 = puVar34;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar39 = puVar38;
    func_0x00010c25a780();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar38);
    if (puVar39 != (undefined *)0x0) {
      puVar38 = puVar34;
      func_0x00010c269d40(puVar34);
      _objc_retainAutoreleasedReturnValue();
      puVar39 = puVar38;
      func_0x00010c25a780();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e1580();
      _objc_release(puVar39);
      _objc_release(puVar38);
    }
    func_0x00010c1e1580(0);
    func_0x00010c1e1580(puVar33);
    puVar38 = puVar34;
    func_0x00010c269d40(puVar34);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c165b20();
    _objc_release(puVar38);
    puVar38 = PTR_PTR_1126b4d08;
    _objc_alloc(PTR_PTR_1126b4d08);
    lVar42 = param_1 + lVar42;
    _objc_loadWeakRetained(lVar42);
    lVar2 = lVar42;
    func_0x00010c295440();
    _objc_retainAutoreleasedReturnValue();
    lVar50 = param_1 + _DAT_11271c3f8;
    _objc_loadWeakRetained(lVar50);
    lVar12 = lVar50;
    func_0x00010c149be0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0600e0(puVar38);
    _objc_release(lVar12);
    _objc_release(lVar50);
    _objc_release(lVar2);
    _objc_release(lVar42);
    func_0x00010c1e1580(puVar38);
    puVar39 = puVar34;
    func_0x00010c269d40(puVar34);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f5520();
    _objc_release(puVar39);
    lVar41 = param_1 + lVar41;
    _objc_loadWeakRetained(lVar41);
    lVar50 = lVar41;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c980();
    _objc_release(lVar50);
    _objc_release(lVar41);
    _objc_storeWeak(param_1 + lVar49,puVar35);
    _objc_release(puVar38);
    _objc_release(puVar36);
    _objc_release(puVar35);
    _objc_release(puVar34);
    _objc_release(0);
    _objc_destroyWeak(auStack_78);
    _objc_release(0);
    _objc_release(puVar33);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar10);
    _objc_release(lVar9);
    _objc_release(uVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar1);
    _objc_release(lVar3);
    _objc_destroyWeak(auStack_70);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1050fa07c; end: 1050fa0cb;  */

void FUN_1050fa07c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf0fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1050fa0cc; end: 1050fa367; -[SCCommunitiesProfileEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050fa0cc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271c3a0);
  _objc_destroyWeak(param_1 + _DAT_11271c3f8);
  _objc_storeStrong(param_1 + _DAT_11271c3f4,0);
  _objc_destroyWeak(param_1 + _DAT_11271c36c);
  _objc_destroyWeak(param_1 + _DAT_11271c398);
  _objc_destroyWeak(param_1 + _DAT_11271c404);
  _objc_storeStrong(param_1 + _DAT_11271c394,0);
  _objc_storeStrong(param_1 + _DAT_11271c3e8,0);
  _objc_storeStrong(param_1 + _DAT_11271c3e4,0);
  _objc_storeStrong(param_1 + _DAT_11271c3e0,0);
  _objc_storeStrong(param_1 + _DAT_11271c388,0);
  _objc_storeStrong(param_1 + _DAT_11271c384,0);
  _objc_storeStrong(param_1 + _DAT_11271c3c0,0);
  _objc_storeStrong(param_1 + _DAT_11271c3bc,0);
  _objc_storeStrong(param_1 + _DAT_11271c3b8,0);
  _objc_storeStrong(param_1 + _DAT_11271c3a4,0);
  _objc_destroyWeak(param_1 + _DAT_11271c3a8);
  _objc_destroyWeak(param_1 + _DAT_11271c3c4);
  _objc_destroyWeak(param_1 + _DAT_11271c390);
  _objc_destroyWeak(param_1 + _DAT_11271c3f0);
  _objc_destroyWeak(param_1 + _DAT_11271c3ec);
  _objc_destroyWeak(param_1 + _DAT_11271c360);
  _objc_destroyWeak(param_1 + _DAT_11271c39c);
  _objc_destroyWeak(param_1 + _DAT_11271c3d0);
  _objc_destroyWeak(param_1 + _DAT_11271c3cc);
  _objc_destroyWeak(param_1 + _DAT_11271c3c8);
  _objc_destroyWeak(param_1 + _DAT_11271c368);
  _objc_destroyWeak(param_1 + _DAT_11271c364);
  _objc_destroyWeak(param_1 + _DAT_11271c400);
  _objc_destroyWeak(param_1 + _DAT_11271c354);
  _objc_destroyWeak(param_1 + _DAT_11271c370);
  _objc_destroyWeak(param_1 + _DAT_11271c378);
  _objc_destroyWeak(param_1 + _DAT_11271c3ac);
  _objc_destroyWeak(param_1 + _DAT_11271c380);
  _objc_destroyWeak(param_1 + _DAT_11271c35c);
  _objc_destroyWeak(param_1 + _DAT_11271c350);
  _objc_destroyWeak(param_1 + _DAT_11271c37c);
  _objc_destroyWeak(param_1 + _DAT_11271c34c);
  _objc_destroyWeak(param_1 + _DAT_11271c3d4);
  _objc_destroyWeak(param_1 + _DAT_11271c3dc);
  _objc_destroyWeak(param_1 + _DAT_11271c38c);
  _objc_destroyWeak(param_1 + _DAT_11271c358);
  _objc_destroyWeak(param_1 + _DAT_11271c3b4);
  _objc_destroyWeak(param_1 + _DAT_11271c3b0);
  _objc_destroyWeak(param_1 + _DAT_11271c3fc);
  _objc_destroyWeak(param_1 + _DAT_11271c3d8);
  _objc_destroyWeak(param_1 + _DAT_11271c348);
  _objc_destroyWeak(param_1 + _DAT_11271c374);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271c344,0);
  return;
}



/* Entry: 1050fa368; end: 1050fa553; -[SCCommunitiesProfileViewController initWithValdiRuntimeProvider:pageContext:communitiesProfileScope:featureSettingsService:circumstanceEngine:communitiesAttributionProviding:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1050fa368(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126e6250;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11271c40c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271c410;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11271c414),param_5);
    lVar4 = (long)_DAT_11271c418;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271c41c;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271c420;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c189400();
    func_0x00010b837400();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_11271c424;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined1 **)((long)puVar1 + lVar4) = puVar3;
    _objc_release(uVar2);
    func_0x00010c1797c0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c19efc0(0x3ff0000000000000,*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c219b20(puVar1);
    func_0x00010c1c8b80(puVar1);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11271c428) = 1;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11271c42c) = 0;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050fa554; end: 1050fa6df; -[SCCommunitiesProfileViewController initWithValdiRuntimeProvider:siblingPageContext:communitiesProfileScope:communitiesAttributionProviding:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1050fa554(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126e6250;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11271c40c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271c430;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11271c414),param_5);
    lVar4 = (long)_DAT_11271c420;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c189400();
    func_0x00010b837400();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_11271c424;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined1 **)((long)puVar1 + lVar4) = puVar3;
    _objc_release(uVar2);
    func_0x00010c1797c0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c19efc0(0x3ff0000000000000,*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c219b20(puVar1);
    func_0x00010c1c8b80(puVar1);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11271c428) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11271c42c) = 1;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050fa6e0; end: 1050fa833; -[SCCommunitiesProfileViewController initWithValdiRuntimeProvider:nonVerifiedPageContext:communitiesProfileScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1050fa6e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e6250;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11271c40c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271c434;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11271c414),param_5);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c189400();
    func_0x00010b837400();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_11271c424;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined1 **)((long)puVar1 + lVar4) = puVar3;
    _objc_release(uVar2);
    func_0x00010c1797c0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c19efc0(0x3ff0000000000000,*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c219b20(puVar1);
    func_0x00010c1c8b80(puVar1);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11271c428) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11271c42c) = 0;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050fa834; end: 1050fa9e3; -[SCCommunitiesProfileViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050fa834(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271c40c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if ((*(byte *)(param_1 + _DAT_11271c428) & 1) == 0) {
    piVar4 = (int *)&DAT_11271c430;
    puVar6 = auStack_60 + 1;
    piVar7 = (int *)&DAT_11271c43c;
    ppuVar8 = &PTR_PTR_1126b4d18;
    if (*(char *)(param_1 + _DAT_11271c42c) == '\0') {
      piVar4 = (int *)&DAT_11271c434;
      puVar6 = auStack_60;
      piVar7 = (int *)&DAT_11271c440;
      ppuVar8 = &PTR_PTR_1126b4d20;
    }
  }
  else {
    piVar4 = (int *)&DAT_11271c410;
    puVar6 = auStack_60 + 2;
    piVar7 = (int *)&DAT_11271c438;
    ppuVar8 = &PTR_PTR_1126b4d10;
  }
  uVar1 = *(undefined8 *)(param_1 + *piVar4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = *ppuVar8;
  _objc_alloc();
  func_0x00010c061d40();
  lVar9 = (long)*piVar7;
  uVar5 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar3;
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11271c424);
  *puVar6 = *(undefined8 *)(param_1 + lVar9);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067a20(uVar5);
  _objc_release(puVar3);
  func_0x00010c222380(param_1);
  _objc_release(uVar1);
  uVar1 = uVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_1050fa9e4;
  puStack_88 = PTR_PTR_1126e6250;
  uStack_90 = uVar1;
  uStack_80 = uVar2;
  lStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&uStack_90,PTR_s_viewDidAppear__112684bd0);
  func_0x00010be7ddc0(uVar1);
  return;
}



/* Entry: 1050fa9e4; end: 1050faa2b; -[SCCommunitiesProfileViewController viewDidAppear:] */

void FUN_1050fa9e4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e6250;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidAppear__112684bd0);
  func_0x00010be7ddc0(param_1);
  return;
}



/* Entry: 1050faa2c; end: 1050fab83; -[SCCommunitiesProfileViewController _presentPublicPillAlertIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050faa2c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aed70;
  func_0x00010beff4c0(PTR_PTR_1126aed70,param_2,&PTR____CFConstantStringClassReference_110dc5fb8,
                      &PTR___NSConcreteGlobalBlock_1108678e8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar2);
  _objc_release(puVar3);
  if (*(char *)(param_1 + _DAT_11271c428) == '\x01') {
    lVar6 = (long)_DAT_11271c418;
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    param_2 = *(undefined8 *)(param_1 + _DAT_11271c420);
    func_0x000108060c3c(uVar4,param_2);
    if ((int)uVar4 != 0) {
      func_0x00010c10eda0(param_1);
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17f880();
      _objc_release(uVar4);
    }
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 1050fab84; end: 1050fab93;  */

void FUN_1050fab84(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 1050fab94; end: 1050fab97; -[SCCommunitiesProfileViewController cardToExpandTransition] */

void FUN_1050fab94(void)

{
  return;
}



/* Entry: 1050fab98; end: 1050fac1b; -[SCCommunitiesProfileViewController cardTransitionShouldBeginWithView:touchLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1050fab98(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010bf806a0();
  if ((uVar1 & 1) == 0) {
    uVar1 = *(ulong *)(param_3 + (long)_DAT_11271c438);
    if ((param_5 != uVar1) ||
       (func_0x00010bf2d520(param_1,param_2,uVar1,param_4,1), (uVar1 & 1) == 0)) {
      uVar2 = 1;
      goto LAB_1050fac00;
    }
  }
  uVar2 = 0;
LAB_1050fac00:
  _objc_release(param_5);
  return uVar2;
}



/* Entry: 1050fac1c; end: 1050fac27; -[SCCommunitiesProfileViewController cardTransitionWillBeginWithView:] */

void FUN_1050fac1c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 1050fac28; end: 1050faca7; -[SCCommunitiesProfileViewController cardTransitionEndedWithView:transitionType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050fac28(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_4 == 1) {
    lVar3 = (long)_DAT_11271c414;
    lVar1 = param_1 + lVar3;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf42dc0(lVar2,param_2,param_1);
    _objc_release(param_1);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1050faca8; end: 1050facb3; -[SCCommunitiesProfileViewController defaultProjectNameV2] */

undefined ** FUN_1050faca8(void)

{
  return &PTR____CFConstantStringClassReference_110db65d8;
}



/* Entry: 1050facb4; end: 1050facbf; -[SCCommunitiesProfileViewController defaultSubProjectName] */

undefined ** FUN_1050facb4(void)

{
  return &PTR____CFConstantStringClassReference_110dc5f98;
}



/* Entry: 1050facc0; end: 1050facdf; -[SCCommunitiesProfileViewController pageViewName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1050facc0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x37;
  if (*(char *)(param_1 + _DAT_11271c428) == '\0') {
    uVar1 = 0xa6;
  }
  return uVar1;
}



/* Entry: 1050face0; end: 1050facf3; -[SCCommunitiesProfileViewController disablePullDownToDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1050face0(long param_1)

{
  return *(byte *)(param_1 + _DAT_11271c408) & 1;
}



/* Entry: 1050facf4; end: 1050fad03; -[SCCommunitiesProfileViewController setDisablePullDownToDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050facf4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11271c408) = param_3;
  return;
}



/* Entry: 1050fad04; end: 1050faddf; -[SCCommunitiesProfileViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050fad04(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271c424,0);
  _objc_storeStrong(param_1 + _DAT_11271c43c,0);
  _objc_storeStrong(param_1 + _DAT_11271c440,0);
  _objc_storeStrong(param_1 + _DAT_11271c438,0);
  _objc_storeStrong(param_1 + _DAT_11271c420,0);
  _objc_storeStrong(param_1 + _DAT_11271c41c,0);
  _objc_storeStrong(param_1 + _DAT_11271c418,0);
  _objc_destroyWeak(param_1 + _DAT_11271c414);
  _objc_storeStrong(param_1 + _DAT_11271c434,0);
  _objc_storeStrong(param_1 + _DAT_11271c430,0);
  _objc_storeStrong(param_1 + _DAT_11271c410,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271c40c,0);
  return;
}



/* Entry: 1050fade0; end: 1050faf97; -[SCCommunitiesNonVerifiedProfileCallToActionSectionNativeBridge initWithCustomStoriesDataFetcher:uiContainer:communitiesOnboardingScopeExposer:sourceType:sessionId:profileUserId:currentUserId:communitiesProfileScope:] */

undefined1 *
FUN_1050fade0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_58 = PTR_PTR_1126e6258;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),puVar1);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_10);
    uVar2 = param_10;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050faf98; end: 1050fb0db; -[SCCommunitiesNonVerifiedProfileCallToActionSectionNativeBridge getGroupDisplayNameWithGroupId:] */

void FUN_1050faf98(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x38) == 0) || (*(long *)(param_1 + 0x38) == *(long *)(param_1 + 0x40)))
  {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c269d40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    param_1 = lVar1;
    func_0x00010c0f7460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1050fb0dc;
    puStack_40 = &UNK_110867908;
    _objc_retain(param_3);
    lVar1 = param_1;
    lStack_38 = param_3;
    func_0x00010c0b8600(param_1,param_2,&puStack_58);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lStack_38;
  }
  else {
    func_0x00010be1f840(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1050fb0dc; end: 1050fb16f;  */

void FUN_1050fb0dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0e00e0(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1050fb170; end: 1050fb237; -[SCCommunitiesNonVerifiedProfileCallToActionSectionNativeBridge onCtaClickedWithGroupId:] */

void FUN_1050fb170(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010c071800();
  if (iVar1 != 0) {
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar3 = param_1 + 0x58;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c038f40(puVar2,param_2,lVar3,1);
    _objc_release(lVar3);
    puVar4 = PTR_PTR_1126b3e50;
    _objc_alloc(PTR_PTR_1126b3e50);
    func_0x00010c0569a0();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,puVar4);
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 1050fb238; end: 1050fb27b; -[SCCommunitiesNonVerifiedProfileCallToActionSectionNativeBridge onOneTapOnboardingCtaClickedWithGroupId:] */

void FUN_1050fb238(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010c071800();
  if (iVar1 != 0) {
    func_0x00010be21340(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050fb27c; end: 1050fb287; -[SCCommunitiesNonVerifiedProfileCallToActionSectionNativeBridge pushToValdiMarshaller:] */

void FUN_1050fb27c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af8e4d4(param_3,param_1);
  func_0x00010af8e448();
  func_0x00010af8e440();
  func_0x00010af8e370();
  func_0x00010af8e3a0();
  return;
}



/* Entry: 1050fb288; end: 1050fb363; -[SCCommunitiesNonVerifiedProfileCallToActionSectionNativeBridge verifiedCommunitiesOnboardingDidFinishWithComplete:] */

void FUN_1050fb288(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  if (param_3 != 0) {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1050fb364;
    puStack_48 = &UNK_110841f80;
    lStack_40 = lVar2;
    lStack_38 = lVar1;
    func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x48),param_2,&puStack_60);
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
  return;
}



/* Entry: 1050fb364; end: 1050fb36f;  */

void FUN_1050fb364(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf42dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_communitiesProfileDidDismissWith_1125ae518,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1050fb370; end: 1050fb44b; -[SCCommunitiesNonVerifiedProfileCallToActionSectionNativeBridge _launchOnboardingScopeWithOrgId:groupId:] */

void FUN_1050fb370(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126b3e50;
  _objc_alloc(PTR_PTR_1126b3e50);
  func_0x00010c0569a0();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1050fb44c; end: 1050fb563; -[SCCommunitiesNonVerifiedProfileCallToActionSectionNativeBridge _getOrgIdWithGroupId:] */

void FUN_1050fb44c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be1f840(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1050fb564; end: 1050fb5f7;  */

void FUN_1050fb564(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != 0) {
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010bf43080();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0ecf00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be47e40();
    _objc_release(param_1);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 1050fb5f8; end: 1050fb697; -[SCCommunitiesNonVerifiedProfileCallToActionSectionNativeBridge _getGroupMetadataWithGroupId:] */

void FUN_1050fb5f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf62680(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1050fb698; end: 1050fb6af; -[SCCommunitiesNonVerifiedProfileCallToActionSectionNativeBridge presentingViewController] */

void FUN_1050fb698(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050fb6b0; end: 1050fb6bb; -[SCCommunitiesNonVerifiedProfileCallToActionSectionNativeBridge setPresentingViewController:] */

void FUN_1050fb6b0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 1050fb6bc; end: 1050fb74b; -[SCCommunitiesNonVerifiedProfileCallToActionSectionNativeBridge .cxx_destruct] */

void FUN_1050fb6bc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x58);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050fb74c; end: 1050fb7ef; -[SCCommunitiesNonVerifiedProfileFooterSectionNativeBridge initWithCustomStoriesDataFetcher:friendUserId:] */

undefined1 *
FUN_1050fb74c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6260;
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



/* Entry: 1050fb7f0; end: 1050fb85b; -[SCCommunitiesNonVerifiedProfileFooterSectionNativeBridge getGroupDisplayNameWithGroupId:] */

void FUN_1050fb7f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010be1f840();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1050fb85c; end: 1050fb8a3;  */

void FUN_1050fb85c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1050fb8a4; end: 1050fb8ef; -[SCCommunitiesNonVerifiedProfileFooterSectionNativeBridge getJoinedTimestampMsWithGroupId:] */

void FUN_1050fb8a4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1050fb8f0; end: 1050fb98f; -[SCCommunitiesNonVerifiedProfileFooterSectionNativeBridge _getGroupMetadataWithGroupId:] */

void FUN_1050fb8f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf62680(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1050fb990; end: 1050fb99b; -[SCCommunitiesNonVerifiedProfileFooterSectionNativeBridge pushToValdiMarshaller:] */

void FUN_1050fb990(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af8e4d4(param_3,param_1);
  func_0x00010af8e448();
  func_0x00010af8e440();
  func_0x00010af8e370();
  func_0x00010af8e3a0();
  return;
}



/* Entry: 1050fb99c; end: 1050fb9cb; -[SCCommunitiesNonVerifiedProfileFooterSectionNativeBridge .cxx_destruct] */

void FUN_1050fb99c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050fb9cc; end: 1050fbaaf; -[SCCommunitiesNonVerifiedProfileHeaderNativeBridge initWithCustomStoriesDataFetcher:communityActionMenuScopeExposer:communitiesProfileScope:] */

undefined1 *
FUN_1050fb9cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e6268;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050fbab0; end: 1050fbb1b; -[SCCommunitiesNonVerifiedProfileHeaderNativeBridge getGroupDisplayNameWithGroupId:] */

void FUN_1050fbab0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010be1f840();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1050fbb1c; end: 1050fbb63;  */

void FUN_1050fbb1c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1050fbb64; end: 1050fbc33; -[SCCommunitiesNonVerifiedProfileHeaderNativeBridge _getGroupMetadataWithGroupId:] */

void FUN_1050fbb64(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c117400();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf62680(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1050fbc34; end: 1050fbcdb; -[SCCommunitiesNonVerifiedProfileHeaderNativeBridge dismissProfile] */

void FUN_1050fbc34(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1050fbcdc;
  puStack_48 = &UNK_110841f80;
  lStack_40 = lVar2;
  lStack_38 = lVar1;
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_60);
  _objc_release(lVar1);
  _objc_release(lVar2);
  return;
}



/* Entry: 1050fbcdc; end: 1050fbce7;  */

void FUN_1050fbcdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf42dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_communitiesProfileDidDismissWith_1125ae518,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1050fbce8; end: 1050fbd9f; -[SCCommunitiesNonVerifiedProfileHeaderNativeBridge launchGroupActionMenuWithGroupId:] */

void FUN_1050fbce8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar1 = PTR_PTR_1126b3d40;
  _objc_alloc(PTR_PTR_1126b3d40);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c039080(puVar1,param_2,lVar2,param_1,param_3,4);
  _objc_release(param_3);
  _objc_release(lVar2);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1050fbda0; end: 1050fbdab; -[SCCommunitiesNonVerifiedProfileHeaderNativeBridge pushToValdiMarshaller:] */

void FUN_1050fbda0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af8e4d4(param_3,param_1);
  func_0x00010af8e448();
  func_0x00010af8e440();
  func_0x00010af8e370();
  func_0x00010af8e3a0();
  return;
}



/* Entry: 1050fbdac; end: 1050fbdf3; -[SCCommunitiesNonVerifiedProfileHeaderNativeBridge didCompleteProfileCommunityActionMenuScopeWithDidLeaveCommunity:] */

void FUN_1050fbdac(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1050fbdf4; end: 1050fbe0b; -[SCCommunitiesNonVerifiedProfileHeaderNativeBridge presentingViewController] */

void FUN_1050fbdf4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050fbe0c; end: 1050fbe17; -[SCCommunitiesNonVerifiedProfileHeaderNativeBridge setPresentingViewController:] */

void FUN_1050fbe0c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 1050fbe18; end: 1050fbe63; -[SCCommunitiesNonVerifiedProfileHeaderNativeBridge .cxx_destruct] */

void FUN_1050fbe18(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050fbe64; end: 1050fbfaf; -[SCCommunitiesNonVerifiedProfileIdentitySectionNativeBridge initWithCustomStoriesDataFetcher:myStoriesDataCoordinator:readReceiptCoordinator:startChatDelegate:friendUserId:currentUserId:] */

undefined1 *
FUN_1050fbe64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e6270;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050fbfb0; end: 1050fc23b; -[SCCommunitiesNonVerifiedProfileIdentitySectionNativeBridge getGroupDescriptionWithGroupId:] */

void FUN_1050fbfb0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x28) == *(long *)(param_1 + 0x30)))
  {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c269d40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    param_1 = lVar1;
    func_0x00010c0f7460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x1050fc0f4;
    puStack_40 = &UNK_110867908;
    _objc_retain(param_3);
    lVar1 = param_1;
    lStack_38 = param_3;
    func_0x00010c0b8600(param_1,param_2,&puStack_58);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lStack_38;
  }
  else {
    func_0x00010be1f840(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1050fc23c; end: 1050fc287; -[SCCommunitiesNonVerifiedProfileIdentitySectionNativeBridge getGroupStoryWithGroupId:] */

void FUN_1050fc23c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1050fc288; end: 1050fc28b; -[SCCommunitiesNonVerifiedProfileIdentitySectionNativeBridge playGroupStoryWithGroupId:sourceView:] */

void FUN_1050fc288(void)

{
  return;
}



/* Entry: 1050fc28c; end: 1050fc3cf; -[SCCommunitiesNonVerifiedProfileIdentitySectionNativeBridge getGroupImageWithGroupId:] */

void FUN_1050fc28c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x28) == *(long *)(param_1 + 0x30)))
  {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c269d40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    param_1 = lVar1;
    func_0x00010c0f7460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1050fc3d0;
    puStack_40 = &UNK_110867a08;
    _objc_retain(param_3);
    lVar1 = param_1;
    lStack_38 = param_3;
    func_0x00010c0b8600(param_1,param_2,&puStack_58);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lStack_38;
  }
  else {
    func_0x00010be1f840(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1050fc3d0; end: 1050fc783;  */

void FUN_1050fc3d0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  func_0x00010c0e00e0(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x00010bfa2680();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_2;
      func_0x00010bfa2680();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf0a5c0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf1f040();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = lVar3;
      func_0x00010c120160();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c08fa60();
      _objc_release(lVar1);
      if (lVar2 == 0) {
        puVar7 = (undefined *)0x0;
      }
      else {
        puVar7 = PTR_PTR_1126b1428;
        _objc_alloc(PTR_PTR_1126b1428);
        lVar1 = lVar3;
        func_0x00010c120160(lVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0038e0(puVar7);
        _objc_release(lVar1);
        puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
        _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
        lVar1 = lVar3;
        func_0x00010c0c54a0(lVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bff6b20(puVar4);
        _objc_release(lVar1);
        puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
        _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
        lVar1 = lVar3;
        func_0x00010c0c5480(lVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bff6b20(puVar5);
        _objc_release(lVar1);
        puVar6 = PTR_PTR_1126b1430;
        _objc_alloc(PTR_PTR_1126b1430);
        func_0x00010c020ba0();
        func_0x00010c195c60(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
      }
      _objc_release(lVar3);
      goto LAB_1050fc59c;
    }
  }
  puVar7 = (undefined *)0x0;
LAB_1050fc59c:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1050fc784; end: 1050fc823; -[SCCommunitiesNonVerifiedProfileIdentitySectionNativeBridge _getGroupMetadataWithGroupId:] */

void FUN_1050fc784(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf62680(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1050fc824; end: 1050fc82f; -[SCCommunitiesNonVerifiedProfileIdentitySectionNativeBridge pushToValdiMarshaller:] */

void FUN_1050fc824(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af8e4d4(param_3,param_1);
  func_0x00010af8e448();
  func_0x00010af8e440();
  func_0x00010af8e370();
  func_0x00010af8e3a0();
  return;
}



/* Entry: 1050fc830; end: 1050fc847; -[SCCommunitiesNonVerifiedProfileIdentitySectionNativeBridge presentingViewController] */

void FUN_1050fc830(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050fc848; end: 1050fc853; -[SCCommunitiesNonVerifiedProfileIdentitySectionNativeBridge setPresentingViewController:] */

void FUN_1050fc848(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 1050fc854; end: 1050fc8b7; -[SCCommunitiesNonVerifiedProfileIdentitySectionNativeBridge .cxx_destruct] */

void FUN_1050fc854(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
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



/* Entry: 1050fc8b8; end: 1050fca9b; -[SCCommunitiesProfileAdditionalStoriesSectionNativeBridge initWithStoriesPlaybackDataProvider:startChatDelegate:docObjectContext:customStoriesDataFetcher:readReceiptCoordinator:contentProductPlaybackScopeExposer:storiesGrapheneMetricsEmitter:communitiesAttributionProviding:contentProductPlaybackScopeServices:] */

undefined1 *
FUN_1050fc8b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126e6278;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
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
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
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



/* Entry: 1050fca9c; end: 1050fcc37; -[SCCommunitiesProfileAdditionalStoriesSectionNativeBridge getAdjacentStoriesWithGroupId:] */

void FUN_1050fca9c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  long unaff_x26;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  long lStack_180;
  long lStack_178;
  ulong uStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
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
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010beffca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(lVar2);
  lVar1 = lVar2;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    unaff_x25 = *plStack_120;
    do {
      unaff_x26 = 0;
      do {
        if (*plStack_120 != unaff_x25) {
          _objc_enumerationMutation(lVar2);
        }
        unaff_x23 = *(ulong *)(lStack_128 + unaff_x26 * 8);
        uVar4 = unaff_x23;
        func_0x00010bf60900();
        if ((uVar4 & 1) == 0) {
          unaff_x24 = unaff_x23;
          func_0x00010c11ac00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          _objc_release(unaff_x24);
        }
        unaff_x26 = unaff_x26 + 1;
      } while (lVar1 != unaff_x26);
      lVar1 = lVar2;
      func_0x00010bf52a60();
      unaff_x22 = 0;
    } while (lVar1 != 0);
  }
  _objc_release(lVar2);
  puVar9 = puVar3;
  func_0x00010be658e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  lVar1 = lVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_138 = FUN_1050fcc38;
    lStack_180 = unaff_x26;
    lStack_178 = unaff_x25;
    uStack_170 = unaff_x24;
    uStack_168 = unaff_x23;
    uStack_160 = unaff_x22;
    puStack_158 = puVar3;
    lStack_150 = lVar2;
    lStack_148 = param_1;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(puVar9);
    _objc_initWeak(auStack_188,lVar1);
    lVar5 = *(long *)(lVar1 + 8);
    func_0x00010c269d40(lVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010bf62660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    uVar6 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c0e0500(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(uVar6);
    uVar8 = *(undefined8 *)(lVar1 + 0x28);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar8;
    func_0x00010c258b20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_copyWeak(auStack_190,auStack_188);
    lVar1 = lVar7;
    func_0x00010bf41860(lVar7);
    _objc_retainAutoreleasedReturnValue();
    param_1 = lVar1;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_190);
    _objc_release(uVar6);
    _objc_release(lVar7);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_188);
    _objc_release(puVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1050fcc38; end: 1050fce17; -[SCCommunitiesProfileAdditionalStoriesSectionNativeBridge _observableFromMapping:] */

void FUN_1050fcc38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf62660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0e0500(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c258b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_copyWeak(auStack_60,auStack_58);
  uVar3 = uVar4;
  func_0x00010bf41860(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1050fce18; end: 1050fce1f;  */

void FUN_1050fce18(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0a550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_asArray_1125a02f8);
  return;
}



/* Entry: 1050fce20; end: 1050fce9b;  */

void FUN_1050fce20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bde2580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1050fce9c; end: 1050fcfc3; -[SCCommunitiesProfileAdditionalStoriesSectionNativeBridge _fetchSiblingCommunitiesWithOrgId:groupId:] */

void FUN_1050fce9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_4);
  lVar6 = *(long *)(param_1 + 0x48);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x00010bf42ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110dc6018);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bfaea40(lVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  lVar5 = lVar6;
  if (lVar4 == 0) {
    func_0x00010c23b5e0(lVar6,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c23b5c0(lVar6,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(lVar6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 1050fcfc4; end: 1050fd183; -[SCCommunitiesProfileAdditionalStoriesSectionNativeBridge getAdjacentStoriesByOrgIdWithOrgId:groupId:] */

void FUN_1050fcfc4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
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
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010be13ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(lVar1);
  puVar6 = auStack_e8;
  lVar3 = lVar1;
  func_0x00010bf52a60(lVar1,param_2,&uStack_130,puVar6,0x10);
  if (lVar3 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar1);
        }
        uVar8 = *(undefined8 *)(lStack_128 + lVar10 * 8);
        uVar7 = uVar8;
        func_0x00010bf624a0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf624a0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar8;
        func_0x00010c11ac00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2,param_2,uVar7,uVar4);
        _objc_release(uVar4);
        _objc_release(uVar8);
        _objc_release(uVar7);
        lVar10 = lVar10 + 1;
      } while (lVar3 != lVar10);
      puVar6 = auStack_e8;
      lVar3 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_130,puVar6,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar1);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar2;
  _objc_retain(puVar2);
  _objc_release(uVar7);
  puVar5 = puVar2;
  func_0x00010be658e0(param_1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  _objc_retain(puVar5);
  _CACurrentMediaTime();
  *(ulong *)(lVar1 + 0x58) =
       CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,CONCAT13(uVar14,CONCAT12(
                                                  uVar13,CONCAT11(uVar12,uVar11)))))));
  func_0x00010bde7f60(lVar1,param_2,puVar5,puVar6);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1050fd184; end: 1050fd1e3; -[SCCommunitiesProfileAdditionalStoriesSectionNativeBridge playGroupStoryWithGroupId:sourceView:] */

void FUN_1050fd184(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + 0x58) = param_1;
  func_0x00010bde7f60(param_2,param_3,param_4,param_5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1050fd1e4; end: 1050fd447; -[SCCommunitiesProfileAdditionalStoriesSectionNativeBridge _contentPlaybackScopePlayGroupStoryWithGroupId:sourceView:] */

void FUN_1050fd1e4(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  
  puVar1 = PTR_PTR_1126b4d28;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c04dcc0();
  puVar2 = PTR_PTR_1126b4d30;
  _objc_alloc(PTR_PTR_1126b4d30);
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c04bca0(puVar2,param_3,7,0x90,(long)(param_1 * 1000.0),8,puVar1,param_4,0,0);
  puVar4 = PTR_PTR_1126b4d38;
  uVar3 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf42f40(puVar4,param_3,uVar3,param_4,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126b4d40;
  _objc_alloc(PTR_PTR_1126b4d40);
  uVar3 = param_5;
  func_0x00010b9688dc(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  lVar6 = param_2 + 0x60;
  _objc_loadWeakRetained(lVar6);
  func_0x00010bff7200(puVar5,param_3,uVar3,lVar6,0,param_2,0,1,0,0);
  _objc_release(lVar6);
  _objc_release(uVar3);
  puVar7 = PTR_PTR_1126b4d48;
  _objc_alloc(PTR_PTR_1126b4d48);
  dVar10 = *(double *)(param_2 + 0x58);
  func_0x00010bff0a00(dVar10);
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  func_0x00010bf22a20(uVar3,param_3,puVar2,puVar5,0,7,puVar4,puVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_2 + 0x40);
  dVar11 = *(double *)(param_2 + 0x58);
  _CACurrentMediaTime();
  uVar8 = 8;
  func_0x000108534a80(8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab9c0((double)(long)((dVar10 - dVar11) * 1000.0),uVar9,param_3,
                      &PTR____CFConstantStringClassReference_110dc6038,uVar8);
  _objc_release(uVar8);
  func_0x00010bf9d620(*(undefined8 *)(param_2 + 0x38),param_3,uVar3);
  _objc_release(uVar3);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1050fd448; end: 1050fd453; -[SCCommunitiesProfileAdditionalStoriesSectionNativeBridge pushToValdiMarshaller:] */

void FUN_1050fd448(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af8e4d4(param_3,param_1);
  func_0x00010af8e448();
  func_0x00010af8e440();
  func_0x00010af8e370();
  func_0x00010af8e3a0();
  return;
}



/* Entry: 1050fd454; end: 1050fd69f; -[SCCommunitiesProfileAdditionalStoriesSectionNativeBridge _communitiesStorySummaryInfoFromStorySnapsWithPlaybackSequences:viewStates:] */

void FUN_1050fd454(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_138;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar4 = param_3;
  func_0x00010bf529e0();
  if (lVar4 == 0) {
    puStack_138 = (undefined *)0x0;
  }
  else {
    puStack_138 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    _objc_retain(param_3);
    lVar4 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        lVar8 = *(long *)(lVar6 * 8);
        lVar2 = lVar8;
        func_0x00010c11ac00();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar2;
        func_0x00010c08fa60();
        _objc_release(lVar2);
        if (lVar7 != 0) {
          lVar7 = *(long *)(param_1 + 0x30);
          lVar2 = lVar8;
          func_0x00010c11ac00(lVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar2);
          if (lVar7 != 0) {
            lVar2 = lVar8;
            func_0x00010c11ac00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c25b340(lVar8);
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar2;
            FUN_1050f5288(lVar2,lVar8,param_4);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar8);
            _objc_release(lVar2);
            if (lVar3 != 0) {
              lVar2 = lVar7;
              func_0x00010bf85d80(lVar7);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c20dac0(lVar3);
              _objc_release(lVar2);
              func_0x00010befa120(puStack_138);
            }
            _objc_release(lVar3);
          }
          _objc_release(lVar7);
        }
        lVar6 = lVar6 + 1;
      } while (lVar4 != lVar6);
      lVar4 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_138);
    return;
  }
  ___stack_chk_fail();
  lVar4 = *(long *)(param_3 + 0x38);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_3 + 0x38));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1050fd6a0; end: 1050fd6e7; -[SCCommunitiesProfileAdditionalStoriesSectionNativeBridge playbackPresenterDidTearDown:playbackScope:] */

void FUN_1050fd6a0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x38));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1050fd6e8; end: 1050fd6ff; -[SCCommunitiesProfileAdditionalStoriesSectionNativeBridge presentingViewController] */

void FUN_1050fd6e8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050fd700; end: 1050fd70b; -[SCCommunitiesProfileAdditionalStoriesSectionNativeBridge setPresentingViewController:] */

void FUN_1050fd700(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 1050fd70c; end: 1050fd79f; -[SCCommunitiesProfileAdditionalStoriesSectionNativeBridge .cxx_destruct] */

void FUN_1050fd70c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x60);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 1050fd7a0; end: 1050fd89b; -[SCCommunitiesProfileBitmojiFashionSectionNativeBridge initWithBitmojiFashionDropFetcher:customStoriesDataFetcher:bitmojiDeepLinkServices:featureSettingServices:] */

undefined1 *
FUN_1050fd7a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_48 = PTR_PTR_1126e6280;
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050fd89c; end: 1050fd9ab; -[SCCommunitiesProfileBitmojiFashionSectionNativeBridge openBitmojiAvatarBuilderDeeplinkWithUrl:] */

void FUN_1050fd89c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar1,param_2,lVar2,0);
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf1b260(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1b220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c10be00(uVar5,param_2,puVar6,&PTR____CFConstantStringClassReference_110dc6058,
                      &PTR___NSConcreteGlobalBlock_110867ac8);
  _objc_release(puVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1050fd9ac; end: 1050fd9af;  */

void FUN_1050fd9ac(void)

{
  return;
}



/* Entry: 1050fd9b0; end: 1050fda1b; -[SCCommunitiesProfileBitmojiFashionSectionNativeBridge getBitmojiFashionDropIdWithGroupId:] */

void FUN_1050fd9b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010be1f840();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1050fda1c; end: 1050fdb4b;  */

void FUN_1050fda1c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1050fdb4c;
  uStack_40 = 0x1050fdb5c;
  uStack_38 = 0;
  uVar1 = param_2;
  func_0x00010bfa2680(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bfcc0();
  _objc_release(uVar1);
  lVar2 = puStack_58[5];
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar3 = (undefined **)puStack_58[5];
    _objc_retain(ppuVar3);
  }
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1050fdb4c; end: 1050fdb67;  */

void FUN_1050fdb4c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}


