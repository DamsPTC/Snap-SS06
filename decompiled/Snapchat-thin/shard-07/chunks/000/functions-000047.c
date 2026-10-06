/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1050e65a4; end: 1050e6647; -[SCMyProfileCondensedIdentitySectionDataProvider _createMultiProfileContext] */

void FUN_1050e65a4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c0d1e40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c071500(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b4ab8;
  _objc_alloc(PTR_PTR_1126b4ab8);
  func_0x00010c00d300();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1050e6648; end: 1050e66af; -[SCMyProfileCondensedIdentitySectionDataProvider topmostViewController] */

void FUN_1050e6648(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x138);
  func_0x00010c0d6760(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c275b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1050e66b0; end: 1050e66c7; -[SCMyProfileCondensedIdentitySectionDataProvider contextProviderDelegate] */

void FUN_1050e66b0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 400);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050e66c8; end: 1050e66d3; -[SCMyProfileCondensedIdentitySectionDataProvider setContextProviderDelegate:] */

void FUN_1050e66c8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 400,param_3);
  return;
}



/* Entry: 1050e66d4; end: 1050e66db; -[SCMyProfileCondensedIdentitySectionDataProvider updateQueuePerformer] */

undefined8 FUN_1050e66d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x198);
}



/* Entry: 1050e66dc; end: 1050e670b; -[SCMyProfileCondensedIdentitySectionDataProvider setUpdateQueuePerformer:] */

void FUN_1050e66dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x198);
  *(undefined8 *)(param_1 + 0x198) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050e670c; end: 1050e6713; -[SCMyProfileCondensedIdentitySectionDataProvider actionHandler] */

undefined8 FUN_1050e670c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1a0);
}



/* Entry: 1050e6714; end: 1050e6743; -[SCMyProfileCondensedIdentitySectionDataProvider setActionHandler:] */

void FUN_1050e6714(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1a0);
  *(undefined8 *)(param_1 + 0x1a0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050e6744; end: 1050e69bb; -[SCMyProfileCondensedIdentitySectionDataProvider .cxx_destruct] */

void FUN_1050e6744(long param_1)

{
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_destroyWeak(param_1 + 400);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_destroyWeak(param_1 + 0x150);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_destroyWeak(param_1 + 0x118);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_destroyWeak(param_1 + 0x98);
  _objc_storeStrong(param_1 + 0x90,0);
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
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050e69bc; end: 1050e6d6f; -[SCMyProfileCondensedIdentitySectionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050e69bc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  lVar1 = param_1 + _DAT_11271bfa8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x000108435fdc();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126ae720;
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  if ((int)lVar3 != 0) {
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_1050e6d70;
    puStack_90 = &UNK_11084d658;
    _objc_copyWeak(auStack_88,auStack_80);
    func_0x00010bf11fe0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126afda8;
    _objc_alloc(PTR_PTR_1126afda8);
    func_0x00010c032260();
    lVar1 = param_1 + _DAT_11271bfac;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c1018e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c125b60();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_88);
  }
  lVar1 = param_1 + _DAT_11271bfb0;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11271bfb4;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar3;
  func_0x00010c0cf9a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126ae720;
  puStack_e0 = puVar8;
  uStack_d8 = 0xc2000000;
  uStack_d0 = 0x1050e6db0;
  puStack_c8 = &UNK_110862bf8;
  _objc_copyWeak(auStack_b0,auStack_80);
  lStack_c0 = lVar6;
  lStack_b8 = lVar7;
  func_0x00010bf11fe0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_e8,auStack_80);
  func_0x00010bf11fe0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126afda8;
  _objc_alloc(PTR_PTR_1126afda8);
  func_0x00010c032260();
  param_1 = param_1 + _DAT_11271bfac;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(puVar8);
  _objc_destroyWeak(auStack_e8);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_b0);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_destroyWeak(auStack_80);
  return;
}



/* Entry: 1050e6d70; end: 1050e6e37;  */

void FUN_1050e6d70(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdeb020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1050e6e38; end: 1050e7803; -[SCMyProfileCondensedIdentitySectionEntryPoint _createSectionWithPerformer:uiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050e6e38(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

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
  long lVar39;
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
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  undefined *puVar63;
  undefined *puVar64;
  long lVar65;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_98,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_1050e7804;
  puStack_a8 = &UNK_110863778;
  _objc_copyWeak(auStack_a0,auStack_98);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_c8,auStack_98);
  _objc_retain(param_4);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b4ac0;
  _objc_alloc();
  lVar4 = param_1 + _DAT_11271bfb8;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar65 = (long)_DAT_11271bfbc;
  lVar7 = param_1 + lVar65;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010bf85f80();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + lVar65;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + lVar65;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010c150cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + lVar65;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010bf1a840();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + lVar65;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010c149d00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_11271bfc0;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_11271bfa8;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + _DAT_11271bfc8;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010bf10340();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + _DAT_11271bfcc;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + _DAT_11271bfd0;
  _objc_loadWeakRetained();
  lVar26 = param_1 + _DAT_11271bfd4;
  _objc_loadWeakRetained();
  lVar27 = lVar26;
  func_0x00010bfa2420();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1 + _DAT_11271bfd8;
  _objc_loadWeakRetained();
  lVar29 = param_1 + _DAT_11271bfdc;
  _objc_loadWeakRetained();
  lVar30 = lVar29;
  func_0x00010bf43140();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_1 + _DAT_11271bfe0;
  _objc_loadWeakRetained();
  lVar32 = param_1 + _DAT_11271bfe4;
  _objc_loadWeakRetained();
  lVar33 = param_1 + _DAT_11271bfe8;
  _objc_loadWeakRetained();
  lVar34 = lVar33;
  func_0x00010c0e1840();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1 + _DAT_11271bfec;
  _objc_loadWeakRetained();
  lVar36 = lVar35;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = param_1 + _DAT_11271bff0;
  _objc_loadWeakRetained();
  lVar38 = lVar37;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = param_1 + _DAT_11271bff4;
  _objc_loadWeakRetained();
  lVar40 = lVar39;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = lVar40;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = param_1 + _DAT_11271bff8;
  _objc_loadWeakRetained();
  lVar43 = lVar42;
  func_0x00010bf0c3e0();
  _objc_retainAutoreleasedReturnValue();
  lVar44 = param_1 + _DAT_11271bffc;
  _objc_loadWeakRetained();
  lVar45 = lVar44;
  func_0x00010c149ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar46 = param_1 + _DAT_11271c000;
  _objc_loadWeakRetained();
  lVar47 = param_1 + _DAT_11271c004;
  _objc_loadWeakRetained();
  lVar48 = param_1 + _DAT_11271c008;
  _objc_loadWeakRetained();
  lVar49 = param_1 + _DAT_11271c00c;
  _objc_loadWeakRetained();
  lVar50 = param_1 + _DAT_11271c010;
  _objc_loadWeakRetained();
  lVar51 = lVar50;
  func_0x00010c11a680();
  _objc_retainAutoreleasedReturnValue();
  lVar52 = param_1 + _DAT_11271c014;
  _objc_loadWeakRetained();
  lVar53 = lVar52;
  func_0x00010bf2a9e0();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = param_1 + _DAT_11271c018;
  _objc_loadWeakRetained();
  lVar55 = lVar54;
  func_0x00010c0d8300();
  _objc_retainAutoreleasedReturnValue();
  lVar56 = param_1 + _DAT_11271bfb4;
  _objc_loadWeakRetained();
  lVar57 = param_1 + _DAT_11271c01c;
  _objc_loadWeakRetained();
  lVar58 = param_1 + _DAT_11271c024;
  _objc_loadWeakRetained();
  lVar59 = param_1 + _DAT_11271c060;
  _objc_loadWeakRetained();
  lVar65 = param_1 + lVar65;
  _objc_loadWeakRetained();
  lVar60 = param_1 + _DAT_11271c02c;
  _objc_loadWeakRetained();
  lVar61 = lVar60;
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11271c030;
  _objc_loadWeakRetained();
  lVar62 = param_1;
  func_0x00010bfa2a40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05b1e0();
  _objc_release(lVar62);
  _objc_release(param_1);
  _objc_release(lVar61);
  _objc_release(lVar60);
  _objc_release(lVar65);
  _objc_release(lVar59);
  _objc_release(lVar58);
  _objc_release(lVar57);
  _objc_release(lVar56);
  _objc_release(lVar55);
  _objc_release(lVar54);
  _objc_release(lVar53);
  _objc_release(lVar52);
  _objc_release(lVar51);
  _objc_release(lVar50);
  _objc_release(lVar49);
  _objc_release(lVar48);
  _objc_release(lVar47);
  _objc_release(lVar46);
  _objc_release(lVar45);
  _objc_release(lVar44);
  _objc_release(lVar43);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
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
  ppuStack_90 = &PTR____CFConstantStringClassReference_110eb4ff8;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110dd99f8;
  puVar63 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar64 = PTR_PTR_1126b2b48;
  _objc_alloc(PTR_PTR_1126b2b48);
  func_0x00010c000720(0xc02c000000000000,0x4030000000000000,0,0x4030000000000000);
  func_0x00010c21c600();
  _objc_release(puVar63);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_c8);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_c8);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_98);
    __Unwind_Resume(param_3);
    puVar1 = (undefined *)(param_3 + 0x20);
    _objc_loadWeakRetained(puVar1);
    puVar64 = puVar1;
    func_0x00010bdec300();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar64);
  return;
}



/* Entry: 1050e7804; end: 1050e788b;  */

void FUN_1050e7804(long param_1)

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



/* Entry: 1050e788c; end: 1050e7ad3; -[SCMyProfileCondensedIdentitySectionEntryPoint _createActionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050e788c(long param_1,undefined8 param_2)

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
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  puVar1 = PTR_PTR_1126b4ac8;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11271c034;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf86440();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11271c038;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c242d80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11271bfec;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11271bfbc;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_11271bfe8;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c0e1840();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + _DAT_11271c03c);
  lVar12 = param_1 + _DAT_11271bfc0;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_11271bfac;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bf854c0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_1 + _DAT_11271c040);
  uVar19 = *(undefined8 *)(param_1 + _DAT_11271c044);
  uVar20 = *(undefined8 *)(param_1 + _DAT_11271c048);
  uVar21 = *(undefined8 *)(param_1 + _DAT_11271c04c);
  lVar16 = param_1 + _DAT_11271bfa8;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00d620(puVar1,param_2,lVar3,lVar5,lVar7,lVar9,lVar11,uVar18,lVar13,lVar15,uVar22,
                      uVar19,uVar20,uVar21,lVar17,*(undefined8 *)(param_1 + _DAT_11271c050));
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1050e7ad4; end: 1050e7b5f; -[SCMyProfileCondensedIdentitySectionEntryPoint _createAuraActionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050e7ad4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b4098;
  _objc_alloc(PTR_PTR_1126b4098);
  func_0x00010bff57c0();
  param_1 = param_1 + _DAT_11271bfac;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf854c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18fa00(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1050e7b60; end: 1050e7ceb; -[SCMyProfileCondensedIdentitySectionEntryPoint _createCommunityOrgService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050e7b60(long param_1,undefined8 param_2)

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
  lVar2 = param_1 + _DAT_11271bfb0;
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
  param_1 = param_1 + _DAT_11271c018;
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



/* Entry: 1050e7cec; end: 1050e7d8f; -[SCMyProfileCondensedIdentitySectionEntryPoint _createAlertPresenterWithUIContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050e7cec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11271c058;
  _objc_retain(param_3);
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010beff660();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0b7600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1050e7d90; end: 1050e7daf; -[SCMyProfileCondensedIdentitySectionEntryPoint snapProServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050e7d90(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271c01c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050e7db0; end: 1050e7dc3; -[SCMyProfileCondensedIdentitySectionEntryPoint setSnapProServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050e7db0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271c01c,param_3);
  return;
}



/* Entry: 1050e7dc4; end: 1050e8043; -[SCMyProfileCondensedIdentitySectionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050e7dc4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271c060);
  _objc_storeStrong(param_1 + _DAT_11271c028,0);
  _objc_storeStrong(param_1 + _DAT_11271c020,0);
  _objc_storeStrong(param_1 + _DAT_11271c050,0);
  _objc_storeStrong(param_1 + _DAT_11271c048,0);
  _objc_storeStrong(param_1 + _DAT_11271c044,0);
  _objc_storeStrong(param_1 + _DAT_11271c040,0);
  _objc_storeStrong(param_1 + _DAT_11271c05c,0);
  _objc_storeStrong(param_1 + _DAT_11271c04c,0);
  _objc_storeStrong(param_1 + _DAT_11271c054,0);
  _objc_storeStrong(param_1 + _DAT_11271bfc4,0);
  _objc_storeStrong(param_1 + _DAT_11271c03c,0);
  _objc_destroyWeak(param_1 + _DAT_11271bff4);
  _objc_destroyWeak(param_1 + _DAT_11271c014);
  _objc_destroyWeak(param_1 + _DAT_11271c01c);
  _objc_destroyWeak(param_1 + _DAT_11271c024);
  _objc_destroyWeak(param_1 + _DAT_11271c010);
  _objc_destroyWeak(param_1 + _DAT_11271c00c);
  _objc_destroyWeak(param_1 + _DAT_11271c008);
  _objc_destroyWeak(param_1 + _DAT_11271c004);
  _objc_destroyWeak(param_1 + _DAT_11271c000);
  _objc_destroyWeak(param_1 + _DAT_11271bffc);
  _objc_destroyWeak(param_1 + _DAT_11271bff8);
  _objc_destroyWeak(param_1 + _DAT_11271bfe4);
  _objc_destroyWeak(param_1 + _DAT_11271bfe0);
  _objc_destroyWeak(param_1 + _DAT_11271bfdc);
  _objc_destroyWeak(param_1 + _DAT_11271bfd8);
  _objc_destroyWeak(param_1 + _DAT_11271bfb4);
  _objc_destroyWeak(param_1 + _DAT_11271c058);
  _objc_destroyWeak(param_1 + _DAT_11271c018);
  _objc_destroyWeak(param_1 + _DAT_11271bfd4);
  _objc_destroyWeak(param_1 + _DAT_11271bfd0);
  _objc_destroyWeak(param_1 + _DAT_11271bfcc);
  _objc_destroyWeak(param_1 + _DAT_11271bfb0);
  _objc_destroyWeak(param_1 + _DAT_11271c034);
  _objc_destroyWeak(param_1 + _DAT_11271c02c);
  _objc_destroyWeak(param_1 + _DAT_11271bfc8);
  _objc_destroyWeak(param_1 + _DAT_11271bfa8);
  _objc_destroyWeak(param_1 + _DAT_11271c030);
  _objc_destroyWeak(param_1 + _DAT_11271bfe8);
  _objc_destroyWeak(param_1 + _DAT_11271bfec);
  _objc_destroyWeak(param_1 + _DAT_11271c038);
  _objc_destroyWeak(param_1 + _DAT_11271bfc0);
  _objc_destroyWeak(param_1 + _DAT_11271bff0);
  _objc_destroyWeak(param_1 + _DAT_11271bfb8);
  _objc_destroyWeak(param_1 + _DAT_11271bfac);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271bfbc);
  return;
}



/* Entry: 1050e8044; end: 1050e80eb; -[SCMyProfileContactPhotoLoader initWithUserInfoServices:] */

undefined1 * FUN_1050e8044(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e6168;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050e80ec; end: 1050e81a3; -[SCMyProfileContactPhotoLoader loadContactPhoto] */

void FUN_1050e80ec(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1050e81a4; end: 1050e8307;  */

void FUN_1050e81a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(param_2);
    func_0x00010c0f7fc0(uVar2);
    puVar1 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1050e8308; end: 1050e8757; -[SCMyProfileContactPhotoLoader _loadContactPhotoResult] */

void FUN_1050e8308(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0fb000();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar9;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar1);
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010bf8d9a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar9;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bf8d6c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar9);
  _objc_release(lVar3);
  lVar9 = lVar2;
  func_0x00010c0cf3c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0 && lVar9 == 0) {
    puVar10 = PTR_PTR_1126b4a68;
    func_0x00010bf8ed20(PTR_PTR_1126b4a68);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar5 = PTR__OBJC_CLASS___CNContactStore_1126b1900;
    _objc_alloc_init(PTR__OBJC_CLASS___CNContactStore_1126b1900);
    puVar10 = PTR__OBJC_CLASS___CNContactStore_1126b1900;
    func_0x00010bf10fe0();
    if (puVar10 == (undefined *)0x3) {
      uStack_88 = *(undefined8 *)PTR__CNContactThumbnailImageDataKey_110349b40;
      uStack_80 = *(undefined8 *)PTR__CNContactImageDataKey_110349b20;
      uStack_78 = *(undefined8 *)PTR__CNContactImageDataAvailableKey_110349b18;
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      puStack_b0 = &uStack_b8;
      uStack_b8 = 0;
      uStack_a8 = 0x3032000000;
      pcStack_a0 = FUN_1050e8758;
      uStack_98 = 0x1050e8768;
      puVar10 = PTR_PTR_1126b4a68;
      func_0x00010bf8ed20();
      _objc_retainAutoreleasedReturnValue();
      puStack_90 = puVar10;
      if (lVar4 != 0) {
        puVar10 = PTR__OBJC_CLASS___CNContactFetchRequest_1126b4ad0;
        _objc_alloc(PTR__OBJC_CLASS___CNContactFetchRequest_1126b4ad0);
        func_0x00010c0210c0();
        puVar7 = PTR__OBJC_CLASS___CNContact_1126b4ad8;
        func_0x00010c106320(PTR__OBJC_CLASS___CNContact_1126b4ad8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1dfc80(puVar10);
        _objc_release(puVar7);
        func_0x00010bf97b60(puVar5);
        _objc_retain(0);
        _objc_release(puVar10);
      }
      lVar1 = puStack_b0[5];
      func_0x00010c0bc540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 == 0 && lVar9 != 0) {
        puVar10 = PTR__OBJC_CLASS___CNPhoneNumber_1126b4ae0;
        func_0x00010c0fb100(PTR__OBJC_CLASS___CNPhoneNumber_1126b4ae0);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___CNContactFetchRequest_1126b4ad0;
        _objc_alloc(PTR__OBJC_CLASS___CNContactFetchRequest_1126b4ad0);
        func_0x00010c0210c0();
        puVar8 = PTR__OBJC_CLASS___CNContact_1126b4ad8;
        func_0x00010c106340(PTR__OBJC_CLASS___CNContact_1126b4ad8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1dfc80(puVar7);
        _objc_release(puVar8);
        _objc_release(0);
        func_0x00010bf97b60(puVar5);
        _objc_retain(0);
        _objc_release(puVar7);
        _objc_release(puVar10);
      }
      func_0x00010c0bc540(puStack_b0[5]);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar10 = (undefined *)puStack_b0[5];
      _objc_retain(puVar10);
      _objc_release(0);
      __Block_object_dispose(&uStack_b8,8);
      _objc_release(puStack_90);
      _objc_release(puVar6);
    }
    else {
      puVar10 = PTR_PTR_1126b4a68;
      func_0x00010bf8ed20(PTR_PTR_1126b4a68);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar5);
  }
  _objc_release(lVar9);
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return;
  }
  ___stack_chk_fail();
  lVar9 = 8;
  __Block_object_dispose(&uStack_b8);
  __Unwind_Resume();
  *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar9 + 0x28);
  *(undefined8 *)(lVar9 + 0x28) = 0;
  return;
}



/* Entry: 1050e8758; end: 1050e876f;  */

void FUN_1050e8758(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1050e8770; end: 1050e8823;  */

void FUN_1050e8770(long param_1,long param_2,undefined1 *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfe7320();
  if ((int)lVar1 != 0) {
    lVar1 = param_2;
    func_0x00010bfe7300();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar1 = param_2;
      func_0x00010c26de00();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 == 0) goto LAB_1050e8810;
    }
    puVar2 = PTR_PTR_1126b4a68;
    func_0x00010c13ce80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined **)(lVar4 + 0x28) = puVar2;
    _objc_release(uVar3);
    *param_3 = 1;
    _objc_release(lVar1);
  }
LAB_1050e8810:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1050e8824; end: 1050e88df;  */

void FUN_1050e8824(long param_1,long param_2,undefined1 *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfe7320();
  if ((int)lVar1 != 0) {
    lVar1 = param_2;
    func_0x00010bfe7300();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar1 = param_2;
      func_0x00010c26de00();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 == 0) goto LAB_1050e88c8;
    }
    puVar2 = PTR_PTR_1126b4a68;
    func_0x00010c13ce80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined **)(lVar4 + 0x28) = puVar2;
    _objc_release(uVar3);
    *param_3 = 1;
    _objc_release(lVar1);
  }
LAB_1050e88c8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1050e88e0; end: 1050e890f; -[SCMyProfileContactPhotoLoader .cxx_destruct] */

void FUN_1050e88e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050e8910; end: 1050e897b; -[SCMyProfileNativeCameraLauncher initWithPresentingViewController:] */

undefined1 * FUN_1050e8910(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e6170;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050e897c; end: 1050e8a33; -[SCMyProfileNativeCameraLauncher launchForResult] */

void FUN_1050e897c(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1050e8a34; end: 1050e8b7b;  */

void FUN_1050e8a34(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1050e8b7c;
    puStack_68 = &UNK_110841f80;
    lStack_60 = lVar1;
    _objc_retain(param_2);
    uStack_58 = param_2;
    func_0x0001000d76cc("APPSTORE",&puStack_80);
    puVar2 = PTR_PTR_1126b0418;
    _objc_copyWeak(auStack_88,param_1 + 0x20);
    func_0x00010bf54280(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_88);
    _objc_release(uStack_58);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1050e8b7c; end: 1050e8cdf;  */

void FUN_1050e8b7c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar4);
  if (lVar4 == 0) goto LAB_1050e8c58;
  if (*(long *)(lVar4 + 0x10) == 0) {
    lVar1 = lVar4 + 8;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar1 == 0) goto LAB_1050e8bac;
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x1050e8c74;
    puStack_40 = &UNK_110850738;
    puVar5 = *(undefined **)(param_1 + 0x28);
    _objc_retain(puVar5);
    ppuVar2 = &puStack_58;
    puStack_38 = puVar5;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)(lVar4 + 0x10);
    *(undefined ***)(lVar4 + 0x10) = ppuVar2;
    _objc_release(uVar3);
    func_0x00010be7a640(lVar4);
    puVar5 = puStack_38;
  }
  else {
LAB_1050e8bac:
    puVar5 = PTR_PTR_1126b4ae8;
    _objc_alloc_init(PTR_PTR_1126b4ae8);
    func_0x00010c1a9f00();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28),param_2,puVar5);
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(puVar5);
LAB_1050e8c58:
  _objc_release(lVar4);
  return;
}



/* Entry: 1050e8ce0; end: 1050e8daf;  */

void FUN_1050e8ce0(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x1050e8d58;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x0001000d76cc("APPSTORE",&puStack_48);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 1050e8db0; end: 1050e8ef7; -[SCMyProfileNativeCameraLauncher _presentCameraPicker] */

void FUN_1050e8db0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined **ppuStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIImagePickerController_1126b4af0;
  _objc_alloc_init();
  uStack_40 = *(undefined8 *)PTR__kUTTypeImage_11034b1d0;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c54e0(puVar1);
  _objc_release(puVar2);
  func_0x00010c207200(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIImagePickerController_1126b4af0;
  func_0x00010c06dd40();
  if ((int)puVar2 != 0) {
    func_0x00010c176460(puVar1);
  }
  func_0x00010c18b5e0(puVar1);
  puVar2 = puVar1;
  func_0x00010c10f380(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_retain(puVar1);
  _objc_release(uVar4);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained();
  puVar2 = puVar1;
  func_0x00010c10eda0();
  _objc_release(puVar1);
  lVar3 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  ppuStack_70 = &PTR_PTR_1126b4000;
  pcStack_48 = FUN_1050e8ef8;
  uStack_68 = uVar4;
  lStack_60 = param_1;
  puStack_58 = puVar1;
  puStack_50 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_initWeak(auStack_78,lVar3);
  uVar4 = *(undefined8 *)(lVar3 + 0x10);
  _objc_retainBlock();
  uVar5 = *(undefined8 *)(lVar3 + 0x18);
  _objc_retain();
  _objc_retain(puVar2);
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x00010bf84b00(uVar5);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar2);
  return;
}



/* Entry: 1050e8ef8; end: 1050e8ff7; -[SCMyProfileNativeCameraLauncher _emitResultAndCleanup:] */

void FUN_1050e8ef8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain();
  _objc_retain(param_3);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf84b00(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1050e8ff8; end: 1050e9053;  */

void FUN_1050e8ff8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x20));
  }
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050e9054; end: 1050e910b; -[SCMyProfileNativeCameraLauncher imagePickerController:didFinishPickingMediaWithInfo:] */

void FUN_1050e9054(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_2,
                      *(undefined8 *)PTR__UIImagePickerControllerEditedImage_110345ca0);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar1 = param_4;
    func_0x00010c0e00e0(param_4,param_2,
                        *(undefined8 *)PTR__UIImagePickerControllerOriginalImage_110345cc0);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar2 = 0;
      goto LAB_1050e90d4;
    }
  }
  lVar2 = lVar1;
  _UIImagePNGRepresentation(lVar1);
  _objc_retainAutoreleasedReturnValue();
LAB_1050e90d4:
  func_0x00010be08260(param_1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1050e910c; end: 1050e9113; -[SCMyProfileNativeCameraLauncher imagePickerControllerDidCancel:] */

void FUN_1050e910c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be08270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__emitResultAndCleanup__11255fa38,0);
  return;
}



/* Entry: 1050e9114; end: 1050e911b; -[SCMyProfileNativeCameraLauncher presentationControllerDidDismiss:] */

void FUN_1050e9114(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be08270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__emitResultAndCleanup__11255fa38,0);
  return;
}



/* Entry: 1050e911c; end: 1050e91d7; -[SCMyProfileNativeCameraLauncher navigationController:willShowViewController:animated:] */

void FUN_1050e911c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c189400(param_3,param_2,1);
  func_0x00010c189400(param_4,param_2,1);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c279540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c292b20();
    _objc_release(lVar1);
    func_0x00010c1d79e0(param_3,param_2,lVar2);
    func_0x00010c1d79e0(param_4,param_2,lVar2);
  }
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050e91d8; end: 1050e920f; -[SCMyProfileNativeCameraLauncher .cxx_destruct] */

void FUN_1050e91d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1050e9210; end: 1050e9293; -[SCProfileGrabberSupplementaryViewProvider initWithValdiRuntimeProvider:hideGrabber:] */

undefined1 *
FUN_1050e9210(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e6178;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050e9294; end: 1050e929b; -[SCProfileGrabberSupplementaryViewProvider sectionHeaderDisplayStrategy] */

undefined8 FUN_1050e9294(void)

{
  return 1;
}



/* Entry: 1050e929c; end: 1050e92e7; -[SCProfileGrabberSupplementaryViewProvider referenceSizeForSupplementaryElementOfKind:atIndexInSection:withWidth:] */

undefined1  [16]
FUN_1050e929c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  func_0x00010c0720c0(param_4,param_3,
                      *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00);
  bVar1 = (int)param_4 == 0;
  if (bVar1) {
    param_1 = *(undefined8 *)PTR__CGSizeZero_110347620;
  }
  uVar2 = 0x4034000000000000;
  if (bVar1) {
    uVar2 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 1050e92e8; end: 1050e93b3; -[SCProfileGrabberSupplementaryViewProvider viewClassesForSupplementaryViewsByElementKind] */

void FUN_1050e92e8(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &puStack_30;
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_30 = puVar1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    _objc_retain(ppuVar6);
    ppuVar2 = ppuVar6;
    func_0x00010c0720c0();
    if ((int)ppuVar2 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar3 = puVar1 + 0x28;
      _objc_loadWeakRetained();
      puVar7 = puVar3;
      func_0x00010c1565c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126b4af8;
      if (puVar7 != (undefined *)0x0) {
        _objc_retain(puVar7);
        _objc_opt_class(puVar3);
        puVar4 = puVar7;
        _objc_opt_isKindOfClass(puVar7,puVar3);
        puVar3 = puVar7;
        if (((ulong)puVar4 & 1) == 0) {
          puVar3 = (undefined *)0x0;
        }
        _objc_retain(puVar3);
        _objc_release(puVar7);
        uVar5 = *(undefined8 *)(puVar1 + 8);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf564e0(puVar3);
        _objc_release(uVar5);
        func_0x00010c1a7fc0(puVar3);
        _objc_storeWeak(puVar1 + 0x18,puVar3);
        _objc_release(puVar3);
      }
    }
    _objc_release(ppuVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1050e93b4; end: 1050e94db; -[SCProfileGrabberSupplementaryViewProvider viewForSupplementaryElementOfKind:atIndexInSection:] */

void FUN_1050e93b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    uVar5 = uVar1;
    func_0x00010c1565c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126b4af8;
    if (uVar5 != 0) {
      _objc_retain(uVar5);
      _objc_opt_class(puVar2);
      uVar3 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar2);
      uVar1 = uVar5;
      if ((uVar3 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar5);
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf564e0(uVar1);
      _objc_release(uVar4);
      func_0x00010c1a7fc0(uVar1);
      _objc_storeWeak(param_1 + 0x18,uVar1);
      _objc_release(uVar1);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1050e94dc; end: 1050e94e3; -[SCProfileGrabberSupplementaryViewProvider supplementaryViewModels] */

undefined8 FUN_1050e94dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1050e94e4; end: 1050e94eb; -[SCProfileGrabberSupplementaryViewProvider setSupplementaryViewModels:] */

void FUN_1050e94e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1050e94ec; end: 1050e9503; -[SCProfileGrabberSupplementaryViewProvider supplementaryViewProviderDelegate] */

void FUN_1050e94ec(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050e9504; end: 1050e950f; -[SCProfileGrabberSupplementaryViewProvider setSupplementaryViewProviderDelegate:] */

void FUN_1050e9504(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 1050e9510; end: 1050e954f; -[SCProfileGrabberSupplementaryViewProvider .cxx_destruct] */

void FUN_1050e9510(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050e9550; end: 1050e962b; -[SCProfileGrabberSupplementaryView createGrabberView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050e9550(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11271c08c;
  if (*(long *)(param_1 + lVar4) != 0) {
    lVar1 = param_1 + _DAT_11271c090;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar1 != 0) goto LAB_1050e9608;
    if (*(long *)(param_1 + lVar4) != 0) {
      func_0x00010c12c960();
    }
  }
  lVar1 = param_3;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b4b00;
    _objc_alloc();
    func_0x00010c061d40();
  }
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar2;
  _objc_release(uVar3);
  _objc_storeWeak(param_1 + _DAT_11271c090,param_3);
  _objc_release(lVar1);
LAB_1050e9608:
  func_0x00010befbb60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050e962c; end: 1050e963b; -[SCProfileGrabberSupplementaryView setHiddenGrabberView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050e962c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271c08c),PTR_s_setHidden__1126479f8);
  return;
}



/* Entry: 1050e963c; end: 1050e9693; -[SCProfileGrabberSupplementaryView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050e963c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e6180;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11271c08c));
  return;
}



/* Entry: 1050e9694; end: 1050e96cf; -[SCProfileGrabberSupplementaryView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050e9694(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271c090);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271c08c,0);
  return;
}



/* Entry: 1050e96d0; end: 1050e96e7;  */

void FUN_1050e96d0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc2f58;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dc2f58,
                      &PTR____CFConstantStringClassReference_110dc5c58,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1050e96e8; end: 1050e981b; -[SCComposerUserSnapcodeView initWithSnapcodeScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1050e96e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126e6188;
  uStack_50 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_50,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11271c094;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b0870;
    _objc_opt_new();
    lVar5 = (long)_DAT_11271c098;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar3;
    _objc_release(uVar2);
    func_0x00010c1d96a0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(puVar1);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271c09c);
    *(undefined **)((long)puVar1 + (long)_DAT_11271c09c) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b19a8;
    _objc_alloc();
    func_0x00010c0566a0();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271c0a0);
    *(undefined **)((long)puVar1 + (long)_DAT_11271c0a0) = puVar3;
    _objc_release(uVar2);
    func_0x00010bf9d620(*(undefined8 *)((long)puVar1 + lVar4));
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050e981c; end: 1050e988f; -[SCComposerUserSnapcodeView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050e981c(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf6f440(*(undefined8 *)(param_1 + _DAT_11271c098),param_2,0);
  func_0x00010c12e1e0(*(undefined8 *)(param_1 + _DAT_11271c094));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puStack_28 = PTR_PTR_1126e6188;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1050e9890; end: 1050e98e7; -[SCComposerUserSnapcodeView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050e9890(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e6188;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11271c098));
  return;
}



/* Entry: 1050e98e8; end: 1050e993b; -[SCComposerUserSnapcodeView _updateUserId:showBitmojiSilhouette:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1050e98e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271c09c);
  puVar1 = PTR_PTR_1126b19a0;
  func_0x00010c2942c0(PTR_PTR_1126b19a0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  return 1;
}



/* Entry: 1050e993c; end: 1050e9a07; -[SCComposerUserSnapcodeView snapcodeDidLoadWithError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050e993c(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uVar4;
  undefined1 *puVar5;
  code *pcVar6;
  undefined **ppuStack_40;
  long lStack_38;
  
  puVar5 = &stack0xfffffffffffffff0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(undefined8 *)(param_1 + _DAT_11271c0a4);
  func_0x00010c09e4e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_40 = &PTR____CFConstantStringClassReference_110dc5c78;
  if (param_3 != (undefined **)0x0) {
    ppuStack_40 = param_3;
  }
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c0f95a0(uVar4,param_2,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  ppuVar2 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  pcVar6 = FUN_1050e9a08;
  _objc_retain(puVar3);
  func_0x00010bee97c0(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a200(puVar3,param_2,&PTR____CFConstantStringClassReference_110dc5c98,ppuVar2,
                      &PTR___NSConcreteGlobalBlock_110867108,&PTR___NSConcreteGlobalBlock_110867148,
                      in_x6,in_x7,param_3,uVar4,puVar5,pcVar6);
  _objc_release(ppuVar2);
  func_0x00010bf1a1a0(puVar3,param_2,&PTR____CFConstantStringClassReference_110dc5cb8,
                      &PTR___NSConcreteGlobalBlock_110867188,&PTR___NSConcreteGlobalBlock_1108671c8)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1050e9a08; end: 1050e9a93; +[SCComposerUserSnapcodeView bindAttributes:] */

void FUN_1050e9a08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bee97c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a200(param_3,param_2,&PTR____CFConstantStringClassReference_110dc5c98,param_1,
                      &PTR___NSConcreteGlobalBlock_110867108,&PTR___NSConcreteGlobalBlock_110867148)
  ;
  _objc_release(param_1);
  func_0x00010bf1a1a0(param_3,param_2,&PTR____CFConstantStringClassReference_110dc5cb8,
                      &PTR___NSConcreteGlobalBlock_110867188,&PTR___NSConcreteGlobalBlock_1108671c8)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050e9a94; end: 1050e9bfb;  */

undefined8 FUN_1050e9a94(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010bf529e0();
  if (uVar3 == 2) {
    uVar4 = uVar1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar3 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar4);
    uVar5 = uVar1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar2);
    uVar4 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar5);
    func_0x00010bf1f3c0(uVar4);
    _objc_release(uVar4);
    func_0x00010c1a7f60(param_2);
    uVar7 = param_2;
    func_0x00010bee2fe0(param_2);
    _objc_release(uVar3);
  }
  else {
    uVar7 = 0;
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar7;
}



/* Entry: 1050e9bfc; end: 1050e9c07;  */

void FUN_1050e9bfc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 1050e9c08; end: 1050e9c3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050e9c08(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_2 + _DAT_11271c0a4);
  *(undefined8 *)(param_2 + _DAT_11271c0a4) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050e9c40; end: 1050e9c53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050e9c40(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_11271c0a4);
  *(undefined8 *)(param_2 + _DAT_11271c0a4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050e9c54; end: 1050e9d87; +[SCComposerUserSnapcodeView _viewModelAttributeParts] */

void FUN_1050e9c54(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136b93c0 != -1) {
    func_0x00010002a2fc(0x1136b93c0,&PTR___NSConcreteGlobalBlock_1108671e8);
  }
  uVar1 = uRam00000001136b93b8;
  _objc_retain(uRam00000001136b93b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1050e9d88; end: 1050e9df7; -[SCComposerUserSnapcodeView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050e9d88(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271c0a4,0);
  _objc_storeStrong(param_1 + _DAT_11271c0a0,0);
  _objc_storeStrong(param_1 + _DAT_11271c09c,0);
  _objc_storeStrong(param_1 + _DAT_11271c098,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271c094,0);
  return;
}



/* Entry: 1050e9df8; end: 1050e9e9b; -[SCAuraActionHandler initWithAuraMyProfileScopeExposer:auraFriendProfileScopeExposer:] */

undefined1 *
FUN_1050e9df8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6190;
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



/* Entry: 1050e9e9c; end: 1050ea087; -[SCAuraActionHandler handleActionWithSender:actionModel:fromSourceView:] */

ulong FUN_1050e9e9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                   undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar3 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b3d80;
    _objc_opt_class(PTR_PTR_1126b3d80);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    _objc_initWeak(auStack_68,param_1);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_1050ea088;
    puStack_80 = &UNK_110841fb0;
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_5);
    uStack_78 = param_5;
    _objc_copyWeak(auStack_a0,auStack_68);
    _objc_retain(param_5);
    func_0x00010c0bee20(uVar1);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_a0);
    _objc_release(uStack_78);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1050ea088; end: 1050ea0bb;  */

void FUN_1050ea088(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be47d60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050ea0bc; end: 1050ea10f;  */

void FUN_1050ea0bc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be47960();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050ea110; end: 1050ea213; -[SCAuraActionHandler _launchMyProfileWorkflowWithSourceView:] */

void FUN_1050ea110(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar3 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c038f40(puVar1,param_2,lVar3,1);
  _objc_release(lVar3);
  puVar2 = PTR_PTR_1126b4b10;
  _objc_alloc(PTR_PTR_1126b4b10);
  lVar3 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c056900(puVar2,param_2,puVar1,param_1,lVar3,param_3,0);
  _objc_release(param_3);
  _objc_release(lVar3);
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1050ea214; end: 1050ea303; -[SCAuraActionHandler _launchFriendProfileWorkflowWithFriend:fromSourceView:] */

void FUN_1050ea214(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b4b18;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar3 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar3);
  uVar2 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c039060(puVar1,param_2,lVar3,param_1,uVar2,param_4);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(lVar3);
  lVar3 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1050ea304; end: 1050ea34f; -[SCAuraActionHandler auraMyProfileWorkflowDidFinish] */

void FUN_1050ea304(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 1050ea350; end: 1050ea383; -[SCAuraActionHandler auraMyProfileWorkflowWillBeginPresentingOpera] */

void FUN_1050ea350(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 1;
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf4dea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050ea384; end: 1050ea3b3; -[SCAuraActionHandler auraMyProfileWorkflowWillBeginDismissingOpera] */

void FUN_1050ea384(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf4c340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050ea3b4; end: 1050ea3e7; -[SCAuraActionHandler auraMyProfileWorkflowDidCancelDismissingOpera] */

void FUN_1050ea3b4(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 1;
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf4dea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050ea3e8; end: 1050ea433; -[SCAuraActionHandler auraFriendProfileWorkflowDidFinish] */

void FUN_1050ea3e8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 1050ea434; end: 1050ea467; -[SCAuraActionHandler auraFriendProfileWorkflowWillBeginPresentingOpera] */

void FUN_1050ea434(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 1;
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf4dea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050ea468; end: 1050ea497; -[SCAuraActionHandler auraFriendProfileWorkflowWillBeginDismissingOpera] */

void FUN_1050ea468(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf4c340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050ea498; end: 1050ea4cb; -[SCAuraActionHandler auraFriendProfileWorkflowDidCancelDismissingOpera] */

void FUN_1050ea498(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 1;
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf4dea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050ea4cc; end: 1050ea4e3; -[SCAuraActionHandler presentingViewController] */

void FUN_1050ea4cc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050ea4e4; end: 1050ea4ef; -[SCAuraActionHandler setPresentingViewController:] */

void FUN_1050ea4e4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 1050ea4f0; end: 1050ea507; -[SCAuraActionHandler displayContentOverProfileDelegate] */

void FUN_1050ea4f0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050ea508; end: 1050ea513; -[SCAuraActionHandler setDisplayContentOverProfileDelegate:] */

void FUN_1050ea508(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 1050ea514; end: 1050ea51b; -[SCAuraActionHandler isPresentingOpera] */

undefined1 FUN_1050ea514(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 1050ea51c; end: 1050ea55b; -[SCAuraActionHandler .cxx_destruct] */

void FUN_1050ea51c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050ea55c; end: 1050ea5bb; -[SCAuraModalViewController init] */

undefined1 * FUN_1050ea55c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e6198;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c18b480(puVar1);
    func_0x00010c1c8b80(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1050ea5bc; end: 1050ea5f3; -[SCAuraModalViewController setOnAttach:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050ea5bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retainBlock();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271c0bc);
  *(undefined8 *)(param_1 + _DAT_11271c0bc) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050ea5f4; end: 1050ea657; -[SCAuraModalViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050ea5f4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e6198;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  lVar2 = (long)_DAT_11271c0bc;
  if (*(long *)(param_1 + lVar2) != 0) {
    (**(code **)(*(long *)(param_1 + lVar2) + 0x10))();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 1050ea658; end: 1050ea67f; -[SCAuraModalViewController pageViewName] */

long FUN_1050ea658(long param_1)

{
  long lVar1;
  
  func_0x00010c247520();
  lVar1 = param_1 + 0x13;
  if (2 < param_1 - 1U) {
    lVar1 = 0x13;
  }
  return lVar1;
}



/* Entry: 1050ea680; end: 1050ea68f; -[SCAuraModalViewController source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1050ea680(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271c0c0);
}



/* Entry: 1050ea690; end: 1050ea69f; -[SCAuraModalViewController setSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050ea690(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11271c0c0) = param_3;
  return;
}



/* Entry: 1050ea6a0; end: 1050ea6b3; -[SCAuraModalViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050ea6a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271c0bc,0);
  return;
}



/* Entry: 1050ea6b4; end: 1050ea803;  */

void FUN_1050ea6b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = param_2;
  func_0x00010c076220();
  if ((int)uVar1 != 0) {
    func_0x00010bf94c20(param_2);
  }
  puVar2 = PTR_PTR_1126b4b20;
  _objc_alloc_init(PTR_PTR_1126b4b20);
  func_0x00010c206c40();
  puVar3 = PTR_PTR_1126aead8;
  _objc_alloc();
  func_0x00010c038f40();
  puVar4 = PTR_PTR_1126b4b10;
  _objc_alloc();
  func_0x00010c056900();
  _objc_release(param_3);
  _objc_retain(param_2);
  func_0x00010c1d1580(puVar2);
  func_0x00010bf0c980(param_1);
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1050ea804; end: 1050ea813;  */

void FUN_1050ea804(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08b7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_launchFeatureWithScope_owner__112600800,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1050ea814; end: 1050ea95f;  */

void FUN_1050ea814(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x1050ea8b4;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010bcbe2c4("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(uStack_30);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050ea960; end: 1050eaa5b; -[SCProfileFlatlandMyProfileServices initWithRootViewCreatorFactory:displaySnapcodeViewSubject:transitionToViewStateSubject:updateScrollPositionYSubject:] */

undefined1 *
FUN_1050ea960(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126e61a0;
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



/* Entry: 1050eaa5c; end: 1050eaa63; -[SCProfileFlatlandMyProfileServices rootViewCreatorFactory] */

undefined8 FUN_1050eaa5c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


