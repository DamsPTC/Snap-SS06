/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10692b630; end: 10692b677; -[SCNativeStoryReplySender .cxx_destruct] */

void FUN_10692b630(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10692b678; end: 10692b75b; -[SCStoryReplySendingServiceProvider provide] */

void FUN_10692b678(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cf288;
  _objc_alloc(PTR_PTR_1126cf288);
  func_0x00010c04dfc0();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10692b75c; end: 10692b79b;  */

void FUN_10692b75c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bec4d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10692b79c; end: 10692b8cf; -[SCStoryReplySendingServiceProvider _storyReplySender] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10692b79c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126cf290;
  _objc_alloc(PTR_PTR_1126cf290);
  lVar2 = param_1 + _DAT_112753d6c;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf523a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112753d70;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bf9e360();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112753d74;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c244620();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112753d78;
  _objc_loadWeakRetained(param_1);
  lVar8 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c005d80(puVar1,param_2,lVar3,lVar5,lVar7,lVar8);
  _objc_release(lVar8);
  _objc_release(param_1);
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



/* Entry: 10692b8d0; end: 10692b92b; -[SCStoryReplySendingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10692b8d0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112753d74);
  _objc_destroyWeak(param_1 + _DAT_112753d70);
  _objc_destroyWeak(param_1 + _DAT_112753d6c);
  _objc_destroyWeak(param_1 + _DAT_112753d78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112753d7c);
  return;
}



/* Entry: 10692b92c; end: 10692bb0b; -[SCGenericStoryQueryServiceProvider provide] */

void FUN_10692b92c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10692bb0c;
  puStack_78 = &UNK_110948060;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_b8 = puVar3;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x10692bb4c;
  puStack_a0 = &UNK_110948060;
  _objc_copyWeak(auStack_98,auStack_68);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_c0,auStack_68);
  _objc_retain(puVar1);
  func_0x00010bf11fe0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126cf298;
  _objc_alloc(PTR_PTR_1126cf298);
  func_0x00010c017820();
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_c0);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_98);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10692bb0c; end: 10692bbd3;  */

void FUN_10692bb0c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdee2c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10692bbd4; end: 10692c12f; -[SCGenericStoryQueryServiceProvider _createGenericStoryQueryCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10692bbd4(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126cf2a0;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112753d80;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112753d84;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112753d88;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c08d4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = (long)_DAT_112753d8c;
  lVar8 = param_1 + lVar48;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = param_1 + lVar48;
  _objc_loadWeakRetained();
  lVar10 = lVar48;
  func_0x00010c08d440();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_112753d90;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_112753d94;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010c244420();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_112753d98;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_112753d9c;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010c08d500();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_112753da0;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + _DAT_112753da4;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010bfb7c20();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + _DAT_112753da8;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010c0cf020();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + _DAT_112753dac;
  _objc_loadWeakRetained();
  lVar26 = lVar25;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1 + _DAT_112753db0;
  _objc_loadWeakRetained();
  lVar28 = lVar27;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1 + _DAT_112753db4;
  _objc_loadWeakRetained();
  lVar30 = lVar29;
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_1 + _DAT_112753db8;
  _objc_loadWeakRetained();
  lVar32 = lVar31;
  func_0x00010bf5b760();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_1 + _DAT_112753dbc;
  _objc_loadWeakRetained();
  lVar34 = lVar33;
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1 + _DAT_112753dc0;
  _objc_loadWeakRetained();
  lVar36 = lVar35;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = param_1 + _DAT_112753dc4;
  _objc_loadWeakRetained();
  lVar38 = lVar37;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = param_1 + _DAT_112753dc8;
  _objc_loadWeakRetained();
  lVar40 = lVar39;
  func_0x00010bf3cb80();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = param_1 + _DAT_112753dcc;
  _objc_loadWeakRetained();
  lVar42 = lVar41;
  func_0x00010c112f80();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = param_1 + _DAT_112753dd0;
  _objc_loadWeakRetained();
  lVar44 = lVar43;
  func_0x00010bf4cd60();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = param_1 + _DAT_112753dd4;
  _objc_loadWeakRetained();
  lVar46 = lVar45;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112753dd8;
  _objc_loadWeakRetained();
  lVar47 = param_1;
  func_0x00010bf1a840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05d260(puVar1,param_2,lVar3,lVar5,lVar7,lVar9,lVar10,lVar12,lVar14,lVar16,lVar18,
                      lVar20,lVar22,lVar24,lVar26,lVar28,lVar30,lVar32,lVar34,lVar36,lVar38,lVar40,
                      lVar42,lVar44,lVar46,lVar47);
  _objc_release(lVar47);
  _objc_release(param_1);
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
  _objc_release(lVar48);
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



/* Entry: 10692c130; end: 10692c68b; -[SCGenericStoryQueryServiceProvider _createGenericStoryMultiQueryCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10692c130(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126cf2a8;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112753d80;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112753d84;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112753d88;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c08d4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = (long)_DAT_112753d8c;
  lVar8 = param_1 + lVar48;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = param_1 + lVar48;
  _objc_loadWeakRetained();
  lVar10 = lVar48;
  func_0x00010c08d440();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_112753d90;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_112753d94;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010c244420();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_112753d98;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_112753d9c;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010c08d500();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_112753da0;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + _DAT_112753da4;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010bfb7c20();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + _DAT_112753da8;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010c0cf020();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + _DAT_112753dac;
  _objc_loadWeakRetained();
  lVar26 = lVar25;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1 + _DAT_112753db0;
  _objc_loadWeakRetained();
  lVar28 = lVar27;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1 + _DAT_112753db4;
  _objc_loadWeakRetained();
  lVar30 = lVar29;
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_1 + _DAT_112753db8;
  _objc_loadWeakRetained();
  lVar32 = lVar31;
  func_0x00010bf5b760();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_1 + _DAT_112753dbc;
  _objc_loadWeakRetained();
  lVar34 = lVar33;
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1 + _DAT_112753dc0;
  _objc_loadWeakRetained();
  lVar36 = lVar35;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = param_1 + _DAT_112753dc4;
  _objc_loadWeakRetained();
  lVar38 = lVar37;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = param_1 + _DAT_112753dc8;
  _objc_loadWeakRetained();
  lVar40 = lVar39;
  func_0x00010bf3cb80();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = param_1 + _DAT_112753dcc;
  _objc_loadWeakRetained();
  lVar42 = lVar41;
  func_0x00010c112f80();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = param_1 + _DAT_112753dd0;
  _objc_loadWeakRetained();
  lVar44 = lVar43;
  func_0x00010bf4cd60();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = param_1 + _DAT_112753dd4;
  _objc_loadWeakRetained();
  lVar46 = lVar45;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112753dd8;
  _objc_loadWeakRetained();
  lVar47 = param_1;
  func_0x00010bf1a840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05d260(puVar1,param_2,lVar3,lVar5,lVar7,lVar9,lVar10,lVar12,lVar14,lVar16,lVar18,
                      lVar20,lVar22,lVar24,lVar26,lVar28,lVar30,lVar32,lVar34,lVar36,lVar38,lVar40,
                      lVar42,lVar44,lVar46,lVar47);
  _objc_release(lVar47);
  _objc_release(param_1);
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
  _objc_release(lVar48);
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



/* Entry: 10692c68c; end: 10692c723; -[SCGenericStoryQueryServiceProvider _createGenericSingleStoryFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10692c68c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126cf2b0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  param_1 = param_1 + _DAT_112753d8c;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c017800(puVar1,param_2,param_3,lVar2);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10692c724; end: 10692c8bf; -[SCGenericStoryQueryServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10692c724(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112753dd8);
  _objc_destroyWeak(param_1 + _DAT_112753dd4);
  _objc_destroyWeak(param_1 + _DAT_112753dcc);
  _objc_destroyWeak(param_1 + _DAT_112753dc8);
  _objc_destroyWeak(param_1 + _DAT_112753dc4);
  _objc_destroyWeak(param_1 + _DAT_112753dc0);
  _objc_destroyWeak(param_1 + _DAT_112753d94);
  _objc_destroyWeak(param_1 + _DAT_112753dbc);
  _objc_destroyWeak(param_1 + _DAT_112753db8);
  _objc_destroyWeak(param_1 + _DAT_112753db0);
  _objc_destroyWeak(param_1 + _DAT_112753db4);
  _objc_destroyWeak(param_1 + _DAT_112753dac);
  _objc_destroyWeak(param_1 + _DAT_112753d98);
  _objc_destroyWeak(param_1 + _DAT_112753d90);
  _objc_destroyWeak(param_1 + _DAT_112753da4);
  _objc_destroyWeak(param_1 + _DAT_112753da0);
  _objc_destroyWeak(param_1 + _DAT_112753d84);
  _objc_destroyWeak(param_1 + _DAT_112753da8);
  _objc_destroyWeak(param_1 + _DAT_112753d88);
  _objc_destroyWeak(param_1 + _DAT_112753d9c);
  _objc_destroyWeak(param_1 + _DAT_112753d8c);
  _objc_destroyWeak(param_1 + _DAT_112753d80);
  _objc_destroyWeak(param_1 + _DAT_112753dd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112753ddc);
  return;
}



/* Entry: 10692c8c0; end: 10692c913; -[SCDiscoverFeedCollection playableViewModelsForStories:] */

void FUN_10692c8c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10692c914;
  puStack_20 = &UNK_110931a08;
  uStack_18 = param_1;
  func_0x000100504554(param_3,&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10692c914; end: 10692c91f;  */

void FUN_10692c914(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0fed90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_playableViewModelForStory__11261d580,param_2);
  return;
}



/* Entry: 10692c920; end: 10692c923; -[SCDiscoverFeedCollection applicationDidEnterBackground:] */

void FUN_10692c920(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddf2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanUpUnusedLongformMedia_112555658);
  return;
}



/* Entry: 10692c924; end: 10692cb13; -[SCDiscoverFeedCollection _cleanUpUnusedLongformMedia] */

void FUN_10692c924(long param_1,undefined *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  func_0x000108473290();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  uStack_f8 = 0;
  puVar4 = puVar3;
  func_0x00010bf4dfc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uStack_f8;
  _objc_retain();
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(puVar4);
  puVar11 = &uStack_140;
  puVar5 = puVar4;
  func_0x00010bf52a60();
  if (puVar5 != (undefined *)0x0) {
    lVar15 = *plStack_130;
    do {
      puVar14 = (undefined *)0x0;
      do {
        if (*plStack_130 != lVar15) {
          _objc_enumerationMutation(puVar4);
        }
        uVar6 = *(ulong *)(param_1 + 0x10);
        func_0x00010bf4b900();
        puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
        if ((uVar6 & 1) == 0) {
          lVar12 = lVar2;
          func_0x00010c25ce00(lVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfad300(puVar7);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar12);
          puVar8 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
          func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12cc60();
          _objc_release(puVar8);
          _objc_release(puVar7);
        }
        puVar14 = puVar14 + 1;
      } while (puVar5 != puVar14);
      puVar11 = &uStack_140;
      puVar5 = puVar4;
      func_0x00010bf52a60();
    } while (puVar5 != (undefined *)0x0);
  }
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(uVar1);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar11);
  puVar10 = puVar11;
  func_0x00010c073600();
  puVar13 = puVar11;
  if ((int)puVar10 == 0) {
    _objc_retain(puVar11);
    puVar10 = puVar11;
    func_0x00010bf454e0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfde980();
    func_0x00010c080120();
    func_0x00010c25b720();
    puVar9 = puVar11;
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    func_0x00010bfde980();
    _objc_release(puVar9);
    _objc_release(puVar10);
    lVar12 = 8;
    do {
      lVar12 = lVar12 + 8;
    } while (lVar12 != 0x20);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = *(undefined8 **)(lVar2 + 8);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if ((puVar10 == (undefined8 *)0x0) ||
       (puVar9 = puVar10, func_0x00010c07cbc0(), ((ulong)puVar9 & 1) != 0)) {
      FUN_10692cd14(puVar11,*(undefined8 *)(lVar2 + 0x38));
      _objc_retainAutoreleasedReturnValue();
      param_2 = PTR_PTR_1126bdd28;
      _objc_opt_class(PTR_PTR_1126bdd28);
      puVar9 = puVar13;
      _objc_opt_isKindOfClass(puVar13,param_2);
      if ((((ulong)puVar9 & 1) != 0) && (puVar13 != (undefined8 *)0x0)) {
        func_0x00010c1d0640(*(undefined8 *)(lVar2 + 8));
      }
    }
    else {
      _objc_retain(puVar10);
      puVar13 = puVar10;
    }
    _objc_release(puVar10);
    _objc_release(puVar3);
  }
  else {
    param_2 = *(undefined **)(lVar2 + 0x38);
    FUN_10692cd14(puVar11,param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(param_2);
  puVar10 = puVar11;
  func_0x00010c25b720();
  puVar13 = (undefined8 *)0x0;
  if ((long)puVar10 < 0xb) {
    if (puVar10 == (undefined8 *)0x2) {
      puVar10 = puVar11;
      func_0x00010c259560(puVar11);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar10;
      func_0x00010afef61c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      puVar13 = puVar11;
      func_0x000108072c98(puVar11,0,0,param_2,0);
      _objc_retainAutoreleasedReturnValue();
LAB_10692ce1c:
      _objc_release(puVar9);
    }
    else if (puVar10 == (undefined8 *)0x3) {
      puVar13 = puVar11;
      func_0x000107d018f0(puVar11);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (puVar10 == (undefined8 *)0x5) {
      puVar10 = puVar11;
      func_0x00010c259560(puVar11);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar10;
      func_0x00010afef744();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      puVar13 = puVar9;
      func_0x00010bef4a60(puVar9);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10692ce1c;
    }
  }
  else if (puVar10 == (undefined8 *)0xb) {
    puVar13 = puVar11;
    func_0x000107a413c0(puVar11,0,0,1);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (puVar10 == (undefined8 *)0xd) {
    puVar10 = puVar11;
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar10;
    func_0x00010afef994();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar10);
    if (puVar13 == (undefined8 *)0x0) {
      puVar13 = puVar11;
      func_0x000107d02b54(puVar11);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar13 = puVar11;
      func_0x000107d02bd4();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (puVar10 == (undefined8 *)0xe) {
    puVar13 = puVar11;
    func_0x000107d01f4c(puVar11);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
  _objc_release(puVar11);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 10692cb14; end: 10692cd13; -[SCDiscoverFeedCollection playableViewModelForStory:] */

void FUN_10692cb14(long param_1,undefined *param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010c073600();
  uVar6 = param_3;
  if ((int)uVar3 == 0) {
    _objc_retain(param_3);
    uVar3 = param_3;
    func_0x00010bf454e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfde980();
    func_0x00010c080120();
    func_0x00010c25b720();
    uVar1 = param_3;
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010bfde980();
    _objc_release(uVar1);
    _objc_release(uVar3);
    lVar5 = 8;
    do {
      lVar5 = lVar5 + 8;
    } while (lVar5 != 0x20);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(ulong *)(param_1 + 8);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar3 == 0) || (uVar1 = uVar3, func_0x00010c07cbc0(), (uVar1 & 1) != 0)) {
      FUN_10692cd14(param_3,*(undefined8 *)(param_1 + 0x38));
      _objc_retainAutoreleasedReturnValue();
      param_2 = PTR_PTR_1126bdd28;
      _objc_opt_class(PTR_PTR_1126bdd28);
      uVar1 = uVar6;
      _objc_opt_isKindOfClass(uVar6,param_2);
      if (((uVar1 & 1) != 0) && (uVar6 != 0)) {
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 8));
      }
    }
    else {
      _objc_retain(uVar3);
      uVar6 = uVar3;
    }
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  else {
    param_2 = *(undefined **)(param_1 + 0x38);
    FUN_10692cd14(param_3,param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(param_2);
  uVar3 = param_3;
  func_0x00010c25b720();
  uVar6 = 0;
  if ((long)uVar3 < 0xb) {
    if (uVar3 == 2) {
      uVar3 = param_3;
      func_0x00010c259560(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar3;
      func_0x00010afef61c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar6 = param_3;
      func_0x000108072c98(param_3,0,0,param_2,0);
      _objc_retainAutoreleasedReturnValue();
LAB_10692ce1c:
      _objc_release(uVar1);
    }
    else if (uVar3 == 3) {
      uVar6 = param_3;
      func_0x000107d018f0(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (uVar3 == 5) {
      uVar3 = param_3;
      func_0x00010c259560(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar3;
      func_0x00010afef744();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar6 = uVar1;
      func_0x00010bef4a60(uVar1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10692ce1c;
    }
  }
  else if (uVar3 == 0xb) {
    uVar6 = param_3;
    func_0x000107a413c0(param_3,0,0,1);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (uVar3 == 0xd) {
    uVar3 = param_3;
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010afef994();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar3);
    if (uVar6 == 0) {
      uVar6 = param_3;
      func_0x000107d02b54(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar6 = param_3;
      func_0x000107d02bd4();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (uVar3 == 0xe) {
    uVar6 = param_3;
    func_0x000107d01f4c(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
  _objc_release(param_3);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 10692cd14; end: 10692cedb;  */

void FUN_10692cd14(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010c25b720();
  lVar3 = 0;
  if (10 < lVar1) {
    if (lVar1 == 0xb) {
      lVar3 = param_1;
      func_0x000107a413c0(param_1,0,0,1);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (lVar1 == 0xd) {
      lVar1 = param_1;
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010afef994();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar1);
      if (lVar3 == 0) {
        lVar3 = param_1;
        func_0x000107d02b54(param_1);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        lVar3 = param_1;
        func_0x000107d02bd4();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else if (lVar1 == 0xe) {
      lVar3 = param_1;
      func_0x000107d01f4c(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    goto LAB_10692ceb8;
  }
  if (lVar1 == 2) {
    lVar1 = param_1;
    func_0x00010c259560(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010afef61c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar3 = param_1;
    func_0x000108072c98(param_1,0,0,param_2,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (lVar1 == 3) {
      lVar3 = param_1;
      func_0x000107d018f0(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10692ceb8;
    }
    if (lVar1 != 5) goto LAB_10692ceb8;
    lVar1 = param_1;
    func_0x00010c259560(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010afef744();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar3 = lVar2;
    func_0x00010bef4a60(lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
LAB_10692ceb8:
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10692cedc; end: 10692d113; -[SCDiscoverFeedCollection prefetchMediaWithData:] */

void FUN_10692cedc(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,ulong param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined8 uVar16;
  undefined1 uVar17;
  undefined **ppuVar18;
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  undefined *puVar22;
  ulong uVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  undefined **ppuStack_490;
  undefined *puStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined *puStack_410;
  undefined **ppuStack_408;
  undefined *puStack_400;
  undefined8 uStack_3f8;
  code *pcStack_3f0;
  undefined *puStack_3e8;
  undefined **ppuStack_3e0;
  undefined *puStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined *puStack_3c0;
  undefined **ppuStack_3b8;
  undefined **ppuStack_3b0;
  undefined **ppuStack_3a8;
  undefined *puStack_3a0;
  ulong uStack_398;
  undefined **ppuStack_390;
  undefined1 auStack_388 [8];
  undefined **ppuStack_380;
  undefined8 uStack_378;
  undefined1 uStack_370;
  undefined *puStack_368;
  undefined8 uStack_360;
  code *pcStack_358;
  undefined *puStack_350;
  undefined **ppuStack_348;
  undefined8 uStack_340;
  long lStack_338;
  long *plStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined *puStack_300;
  undefined8 uStack_2f8;
  code *pcStack_2f0;
  undefined *puStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined8 *puStack_2d0;
  undefined1 auStack_2c8 [8];
  undefined8 uStack_2c0;
  undefined1 auStack_2b8 [8];
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  code *pcStack_2a0;
  undefined *puStack_298;
  undefined8 *puStack_290;
  undefined8 uStack_288;
  undefined8 *puStack_280;
  undefined8 uStack_278;
  code *pcStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_1d8;
  undefined **ppuStack_150;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *apuStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  ppuVar18 = &puStack_130;
  ppuVar15 = apuStack_f0;
  uVar16 = 0x10;
  ppuVar24 = param_3;
  func_0x00010bf52a60();
  uVar17 = (undefined1)param_6;
  if (ppuVar24 != (undefined **)0x0) {
    lVar21 = *plStack_120;
    do {
      ppuVar18 = (undefined **)0x0;
      do {
        if (*plStack_120 != lVar21) {
          _objc_enumerationMutation(param_3);
        }
        uVar23 = *(ulong *)(lStack_128 + (long)ppuVar18 * 8);
        puVar22 = PTR_PTR_1126cf2b8;
        _objc_opt_class(PTR_PTR_1126cf2b8);
        uVar1 = uVar23;
        _objc_opt_isKindOfClass(uVar23,puVar22);
        if ((uVar1 & 1) == 0) {
          puVar22 = PTR_PTR_1126c2098;
          _objc_opt_class(PTR_PTR_1126c2098);
          _objc_opt_isKindOfClass(uVar23,puVar22);
          if ((uVar23 & 1) != 0) {
            ppuStack_150 = (undefined **)0x0;
            param_6 = 0;
            param_7 = 0;
            param_8 = 1;
            func_0x00010c107a60(param_1);
          }
        }
        else {
          _objc_retain(uVar23);
          uVar2 = uVar23;
          func_0x00010c258f40();
          _objc_retainAutoreleasedReturnValue();
          puVar22 = PTR_PTR_1126c2098;
          _objc_opt_class(PTR_PTR_1126c2098);
          uVar3 = uVar2;
          _objc_opt_isKindOfClass(uVar2,puVar22);
          uVar1 = uVar2;
          if ((uVar3 & 1) == 0) {
            uVar1 = 0;
          }
          _objc_retain(uVar1);
          _objc_release(uVar2);
          func_0x00010c0de340(uVar23);
          func_0x00010c0de340();
          param_6 = uVar23;
          func_0x00010bf43ac0();
          uVar2 = uVar23;
          func_0x00010bf66200();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar23);
          ppuStack_150 = (undefined **)0x0;
          param_8 = 1;
          param_7 = uVar2;
          func_0x00010c107a60(param_1);
          _objc_release(uVar1);
          _objc_release(uVar2);
        }
        ppuVar18 = (undefined **)((long)ppuVar18 + 1);
      } while (ppuVar24 != ppuVar18);
      ppuVar18 = &puStack_130;
      ppuVar15 = apuStack_f0;
      uVar16 = 0x10;
      ppuVar24 = param_3;
      func_0x00010bf52a60();
      uVar17 = (undefined1)param_6;
    } while (ppuVar24 != (undefined **)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar18);
  _objc_retain(param_7);
  _objc_retain(ppuStack_150);
  ppuVar24 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  ppuVar5 = param_3;
  func_0x00010c0fed80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar18;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar6;
  func_0x00010afefbe8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar6);
  puVar22 = PTR_PTR_1126b8e08;
  if (ppuVar7 != (undefined **)0x0) {
    puStack_280 = &uStack_288;
    uStack_288 = 0;
    uStack_278 = 0x3032000000;
    pcStack_270 = FUN_10692dac8;
    uStack_268 = 0x10692dad8;
    uStack_260 = 0;
    ppuVar15 = ppuVar7;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar15;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar15);
    ppuVar24 = (undefined **)PTR___NSConcreteStackBlock_11034bd00;
    if (ppuVar6 != (undefined **)0x0) {
      puStack_2b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_2a8 = 0xc2000000;
      pcStack_2a0 = FUN_10692dae0;
      puStack_298 = &UNK_110947178;
      puStack_290 = &uStack_288;
      func_0x00010c0bebc0(ppuVar6);
    }
    lVar8 = puStack_280[5];
    func_0x00010c29a460();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar8;
    func_0x00010c08fa60();
    _objc_release(lVar8);
    if (lVar21 != 0) {
      puVar22 = param_3[2];
      uVar16 = puStack_280[5];
      func_0x000108476990(uVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar22);
      _objc_release(uVar16);
      _objc_initWeak(auStack_2b8,param_3);
      puVar22 = param_3[0xc];
      puStack_300 = (undefined *)ppuVar24;
      uStack_2f8 = 0xc2000000;
      pcStack_2f0 = FUN_10692db1c;
      puStack_2e8 = &UNK_110948c10;
      _objc_copyWeak(auStack_2c8,auStack_2b8);
      puStack_2d0 = &uStack_288;
      _objc_retain(ppuVar7);
      ppuStack_2e0 = ppuVar7;
      uStack_2c0 = param_8;
      _objc_retain(ppuStack_150);
      ppuStack_2d8 = ppuStack_150;
      func_0x00010c0f7fc0(puVar22);
      _objc_release(ppuStack_2d8);
      _objc_release(ppuStack_2e0);
      _objc_destroyWeak(auStack_2c8);
      _objc_destroyWeak(auStack_2b8);
      ppuVar24 = ppuStack_150;
    }
    _objc_release(ppuVar6);
    puVar22 = (undefined *)0x8;
    __Block_object_dispose(&uStack_288);
    _objc_release(uStack_260);
    goto LAB_10692da08;
  }
  _objc_retain(ppuVar5);
  _objc_opt_class(puVar22);
  ppuVar9 = ppuVar5;
  _objc_opt_isKindOfClass(ppuVar5,puVar22);
  ppuVar6 = ppuVar5;
  if (((ulong)ppuVar9 & 1) == 0) {
    ppuVar6 = (undefined **)0x0;
  }
  _objc_retain();
  _objc_release(ppuVar5);
  puVar22 = PTR_PTR_1126bdd28;
  _objc_retain(ppuVar5);
  _objc_opt_class();
  ppuVar10 = ppuVar5;
  _objc_opt_isKindOfClass();
  ppuVar9 = ppuVar5;
  if (((ulong)ppuVar10 & 1) == 0) {
    ppuVar9 = (undefined **)0x0;
  }
  _objc_retain(ppuVar9);
  ppuVar10 = ppuVar5;
  _objc_release();
  _dispatch_group_create();
  ppuVar25 = ppuVar9;
  func_0x00010bfd5020();
  if (((ulong)ppuVar25 & 1) == 0) {
    if (ppuVar9 != (undefined **)0x0) {
      puVar19 = param_3[0xe];
      puVar22 = param_3[7];
      func_0x00010c269d40(puVar22);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = param_3[0x13];
      func_0x00010c269d40(puVar11);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_490 = ppuVar5;
      func_0x000107ab8260(ppuVar5,puVar19,puVar22,puVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      _objc_release(puVar22);
      ppuVar12 = ppuVar5;
      func_0x00010c242500();
      _objc_retainAutoreleasedReturnValue();
      ppuVar25 = ppuVar12;
      func_0x00010bfecde0();
      _objc_release(ppuVar12);
      ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      while( true ) {
        ppuVar13 = ppuVar5;
        func_0x00010c242500();
        _objc_retainAutoreleasedReturnValue();
        ppuVar14 = ppuVar13;
        func_0x00010bf529e0();
        if (ppuVar14 <= ppuVar25) break;
        ppuVar24 = ppuVar12;
        func_0x00010bf529e0();
        _objc_release(ppuVar13);
        if (ppuVar15 <= ppuVar24) goto LAB_10692d588;
        ppuVar24 = ppuVar5;
        func_0x00010c242500();
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = ppuVar24;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar24);
        ppuVar14 = ppuVar13;
        func_0x00010bef60a0();
        if (ppuVar14 == (undefined **)0x0) {
          func_0x00010befa120(ppuVar12);
        }
        _objc_release(ppuVar13);
        ppuVar25 = (undefined **)((long)ppuVar25 + 1);
      }
      _objc_release(ppuVar13);
LAB_10692d588:
      uStack_318 = 0;
      uStack_320 = 0;
      uStack_308 = 0;
      uStack_310 = 0;
      lStack_338 = 0;
      uStack_340 = 0;
      uStack_328 = 0;
      plStack_330 = (long *)0x0;
      _objc_retain(ppuVar12);
      ppuVar15 = ppuVar12;
      func_0x00010bf52a60();
      if (ppuVar15 != (undefined **)0x0) {
        lVar21 = *plStack_330;
        do {
          ppuVar25 = (undefined **)0x0;
          do {
            if (*plStack_330 != lVar21) {
              _objc_enumerationMutation(ppuVar12);
            }
            uVar16 = *(undefined8 *)(lStack_338 + (long)ppuVar25 * 8);
            func_0x00010bfe5ec0(uVar16);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar4);
            _objc_release(uVar16);
            _dispatch_group_enter(ppuVar10);
            puVar20 = param_3[0xe];
            puVar22 = param_3[0x13];
            func_0x00010c269d40(puVar22);
            _objc_retainAutoreleasedReturnValue();
            ppuVar24 = (undefined **)param_3[10];
            puVar11 = param_3[7];
            func_0x00010c269d40(puVar11);
            _objc_retainAutoreleasedReturnValue();
            puVar19 = param_3[0xb];
            func_0x00010c269d40(puVar19);
            _objc_retainAutoreleasedReturnValue();
            puStack_368 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_360 = 0xc2000000;
            pcStack_358 = FUN_10692dd10;
            puStack_350 = &UNK_11094bad8;
            _objc_retain(ppuVar10);
            ppuStack_348 = ppuVar10;
            func_0x000107ab6db4(ppuVar5,puVar20,puVar22,ppuVar24,puVar11,puVar19,0,param_8,
                                &puStack_368);
            _objc_release(puVar19);
            _objc_release(puVar11);
            _objc_release(puVar22);
            _objc_release(ppuStack_348);
            ppuVar25 = (undefined **)((long)ppuVar25 + 1);
          } while (ppuVar15 != ppuVar25);
          ppuVar15 = ppuVar12;
          func_0x00010bf52a60();
        } while (ppuVar15 != (undefined **)0x0);
      }
      _objc_release(ppuVar12);
      _objc_release(ppuVar12);
LAB_10692d970:
      _objc_release(ppuStack_490);
      goto LAB_10692d978;
    }
    ppuVar25 = ppuVar18;
    func_0x00010c25b720();
    if (ppuVar25 == (undefined **)0x3) {
      ppuVar24 = ppuVar18;
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_490 = ppuVar24;
      func_0x00010afef4dc();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar24);
      ppuVar25 = ppuStack_490;
      FUN_10692dd18();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = param_3[7];
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar22 = puVar11;
      func_0x00010c121820();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      _objc_initWeak(&uStack_288,param_3);
      puVar11 = param_3[0xd];
      puStack_3d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_3d0 = 0xc2000000;
      uStack_3c8 = 0x10692dd5c;
      puStack_3c0 = &UNK_11094bb08;
      ppuVar24 = &puStack_3d8;
      _objc_copyWeak(auStack_388,&uStack_288);
      _objc_retain(ppuVar18);
      ppuStack_3b8 = ppuVar18;
      ppuStack_380 = ppuVar15;
      uStack_378 = uVar16;
      uStack_370 = uVar17;
      _objc_retain(ppuStack_490);
      ppuStack_3b0 = ppuStack_490;
      _objc_retain(ppuVar25);
      ppuStack_3a8 = ppuVar25;
      _objc_retain(puVar22);
      puStack_3a0 = puVar22;
      _objc_retain(param_7);
      uStack_398 = param_7;
      _objc_retain(ppuVar10);
      ppuStack_390 = ppuVar10;
      func_0x00010c0f7fc0(puVar11);
      _objc_release(ppuStack_390);
      _objc_release(uStack_398);
      _objc_release(puStack_3a0);
      _objc_release(ppuStack_3a8);
      _objc_release(ppuStack_3b0);
      _objc_release(ppuStack_3b8);
      _objc_destroyWeak(auStack_388);
      _objc_destroyWeak(&uStack_288);
      _objc_release(puVar22);
      _objc_release(ppuVar25);
      goto LAB_10692d970;
    }
    ppuVar15 = ppuVar18;
    func_0x00010c25b720();
    if (ppuVar15 != (undefined **)0xd) {
      if (ppuVar6 == (undefined **)0x0) goto LAB_10692d978;
      _dispatch_group_enter(ppuVar10);
      puVar22 = param_3[0x10];
      func_0x00010c269d40(puVar22);
      _objc_retainAutoreleasedReturnValue();
      puStack_400 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_3f8 = 0xc2000000;
      pcStack_3f0 = FUN_10692ddb4;
      puStack_3e8 = &UNK_110841f20;
      _objc_retain(ppuVar10);
      ppuStack_3e0 = ppuVar10;
      func_0x00010c107c60(puVar22);
      _objc_release(puVar22);
      ppuStack_490 = ppuStack_3e0;
      goto LAB_10692d970;
    }
    func_0x00010be773c0(param_3);
  }
  else {
LAB_10692d978:
    puVar11 = (undefined *)0x11;
    func_0x0001000819a8(0x11,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_428 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_420 = 0xc2000000;
    uStack_418 = 0x10692ddbc;
    puStack_410 = &UNK_110849530;
    _objc_retain(ppuStack_150);
    ppuStack_408 = ppuStack_150;
    puVar22 = puVar11;
    func_0x000100bc0718(ppuVar10,puVar11,&puStack_428);
    _objc_release(puVar11);
    _objc_release(ppuStack_408);
  }
  _objc_release(ppuVar10);
  _objc_release(ppuVar9);
  _objc_release(ppuVar6);
LAB_10692da08:
  _objc_release(ppuVar7);
  _objc_release(ppuVar5);
  _objc_release(puVar4);
  _objc_release(ppuStack_150);
  _objc_release(param_7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar24 + 10);
  _objc_destroyWeak(&uStack_288);
  __Unwind_Resume();
  ppuVar18[5] = *(undefined **)(puVar22 + 0x28);
  *(undefined8 *)(puVar22 + 0x28) = 0;
  return;
}



/* Entry: 10692d114; end: 10692dac7; -[SCDiscoverFeedCollection prefetchMediaForStory:numberOfSnapsToPrefetch:maxNumberOfSnapsToPrefetch:completePrefetchOnFirstSnap:debugInfo:trigger:completion:] */

void FUN_10692d114(undefined **param_1,undefined8 param_2,undefined **param_3,undefined **param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined **param_9)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuStack_340;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined *puStack_2c0;
  undefined **ppuStack_2b8;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  code *pcStack_2a0;
  undefined *puStack_298;
  undefined **ppuStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined **ppuStack_240;
  undefined1 auStack_238 [8];
  undefined **ppuStack_230;
  undefined8 uStack_228;
  undefined1 uStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  undefined **ppuStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined8 *puStack_180;
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  undefined1 auStack_168 [8];
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_9);
  ppuVar17 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  ppuVar2 = param_1;
  func_0x00010c0fed80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = param_3;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010afefbe8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  puVar16 = PTR_PTR_1126b8e08;
  if (ppuVar4 != (undefined **)0x0) {
    puStack_130 = &uStack_138;
    uStack_138 = 0;
    uStack_128 = 0x3032000000;
    pcStack_120 = FUN_10692dac8;
    uStack_118 = 0x10692dad8;
    uStack_110 = 0;
    ppuVar17 = ppuVar4;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar17;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar17);
    ppuVar17 = (undefined **)PTR___NSConcreteStackBlock_11034bd00;
    if (ppuVar3 != (undefined **)0x0) {
      puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_158 = 0xc2000000;
      pcStack_150 = FUN_10692dae0;
      puStack_148 = &UNK_110947178;
      puStack_140 = &uStack_138;
      func_0x00010c0bebc0(ppuVar3);
    }
    lVar5 = puStack_130[5];
    func_0x00010c29a460();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar5;
    func_0x00010c08fa60();
    _objc_release(lVar5);
    if (lVar13 != 0) {
      puVar16 = param_1[2];
      uVar6 = puStack_130[5];
      func_0x000108476990(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar16);
      _objc_release(uVar6);
      _objc_initWeak(auStack_168,param_1);
      puVar16 = param_1[0xc];
      puStack_1b0 = (undefined *)ppuVar17;
      uStack_1a8 = 0xc2000000;
      pcStack_1a0 = FUN_10692db1c;
      puStack_198 = &UNK_110948c10;
      _objc_copyWeak(auStack_178,auStack_168);
      puStack_180 = &uStack_138;
      _objc_retain(ppuVar4);
      ppuStack_190 = ppuVar4;
      uStack_170 = param_8;
      _objc_retain(param_9);
      ppuStack_188 = param_9;
      func_0x00010c0f7fc0(puVar16);
      _objc_release(ppuStack_188);
      _objc_release(ppuStack_190);
      _objc_destroyWeak(auStack_178);
      _objc_destroyWeak(auStack_168);
      ppuVar17 = param_9;
    }
    _objc_release(ppuVar3);
    puVar16 = (undefined *)0x8;
    __Block_object_dispose(&uStack_138);
    _objc_release(uStack_110);
    goto LAB_10692da08;
  }
  _objc_retain(ppuVar2);
  _objc_opt_class(puVar16);
  ppuVar7 = ppuVar2;
  _objc_opt_isKindOfClass(ppuVar2,puVar16);
  ppuVar3 = ppuVar2;
  if (((ulong)ppuVar7 & 1) == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  _objc_retain();
  _objc_release(ppuVar2);
  puVar16 = PTR_PTR_1126bdd28;
  _objc_retain(ppuVar2);
  _objc_opt_class();
  ppuVar8 = ppuVar2;
  _objc_opt_isKindOfClass();
  ppuVar7 = ppuVar2;
  if (((ulong)ppuVar8 & 1) == 0) {
    ppuVar7 = (undefined **)0x0;
  }
  _objc_retain(ppuVar7);
  ppuVar8 = ppuVar2;
  _objc_release();
  _dispatch_group_create();
  ppuVar9 = ppuVar7;
  func_0x00010bfd5020();
  if (((ulong)ppuVar9 & 1) == 0) {
    if (ppuVar7 != (undefined **)0x0) {
      puVar14 = param_1[0xe];
      puVar16 = param_1[7];
      func_0x00010c269d40(puVar16);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = param_1[0x13];
      func_0x00010c269d40(puVar10);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_340 = ppuVar2;
      func_0x000107ab8260(ppuVar2,puVar14,puVar16,puVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      _objc_release(puVar16);
      ppuVar11 = ppuVar2;
      func_0x00010c242500();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar11;
      func_0x00010bfecde0();
      _objc_release(ppuVar11);
      ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      while( true ) {
        ppuVar18 = ppuVar2;
        func_0x00010c242500();
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = ppuVar18;
        func_0x00010bf529e0();
        if (ppuVar12 <= ppuVar9) break;
        ppuVar17 = ppuVar11;
        func_0x00010bf529e0();
        _objc_release(ppuVar18);
        if (param_4 <= ppuVar17) goto LAB_10692d588;
        ppuVar17 = ppuVar2;
        func_0x00010c242500();
        _objc_retainAutoreleasedReturnValue();
        ppuVar18 = ppuVar17;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar17);
        ppuVar12 = ppuVar18;
        func_0x00010bef60a0();
        if (ppuVar12 == (undefined **)0x0) {
          func_0x00010befa120(ppuVar11);
        }
        _objc_release(ppuVar18);
        ppuVar9 = (undefined **)((long)ppuVar9 + 1);
      }
      _objc_release(ppuVar18);
LAB_10692d588:
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      lStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_1d8 = 0;
      plStack_1e0 = (long *)0x0;
      _objc_retain(ppuVar11);
      ppuVar9 = ppuVar11;
      func_0x00010bf52a60();
      if (ppuVar9 != (undefined **)0x0) {
        lVar13 = *plStack_1e0;
        do {
          ppuVar18 = (undefined **)0x0;
          do {
            if (*plStack_1e0 != lVar13) {
              _objc_enumerationMutation(ppuVar11);
            }
            uVar6 = *(undefined8 *)(lStack_1e8 + (long)ppuVar18 * 8);
            func_0x00010bfe5ec0(uVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar1);
            _objc_release(uVar6);
            _dispatch_group_enter(ppuVar8);
            puVar15 = param_1[0xe];
            puVar16 = param_1[0x13];
            func_0x00010c269d40(puVar16);
            _objc_retainAutoreleasedReturnValue();
            ppuVar17 = (undefined **)param_1[10];
            puVar10 = param_1[7];
            func_0x00010c269d40(puVar10);
            _objc_retainAutoreleasedReturnValue();
            puVar14 = param_1[0xb];
            func_0x00010c269d40(puVar14);
            _objc_retainAutoreleasedReturnValue();
            puStack_218 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_210 = 0xc2000000;
            pcStack_208 = FUN_10692dd10;
            puStack_200 = &UNK_11094bad8;
            _objc_retain(ppuVar8);
            ppuStack_1f8 = ppuVar8;
            func_0x000107ab6db4(ppuVar2,puVar15,puVar16,ppuVar17,puVar10,puVar14,0,param_8,
                                &puStack_218);
            _objc_release(puVar14);
            _objc_release(puVar10);
            _objc_release(puVar16);
            _objc_release(ppuStack_1f8);
            ppuVar18 = (undefined **)((long)ppuVar18 + 1);
          } while (ppuVar9 != ppuVar18);
          ppuVar9 = ppuVar11;
          func_0x00010bf52a60();
        } while (ppuVar9 != (undefined **)0x0);
      }
      _objc_release(ppuVar11);
      _objc_release(ppuVar11);
LAB_10692d970:
      _objc_release(ppuStack_340);
      goto LAB_10692d978;
    }
    ppuVar9 = param_3;
    func_0x00010c25b720();
    if (ppuVar9 == (undefined **)0x3) {
      ppuVar17 = param_3;
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_340 = ppuVar17;
      func_0x00010afef4dc();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar17);
      ppuVar9 = ppuStack_340;
      FUN_10692dd18();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = param_1[7];
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar10;
      func_0x00010c121820();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      _objc_initWeak(&uStack_138,param_1);
      puVar10 = param_1[0xd];
      puStack_288 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_280 = 0xc2000000;
      uStack_278 = 0x10692dd5c;
      puStack_270 = &UNK_11094bb08;
      ppuVar17 = &puStack_288;
      _objc_copyWeak(auStack_238,&uStack_138);
      _objc_retain(param_3);
      ppuStack_268 = param_3;
      ppuStack_230 = param_4;
      uStack_228 = param_5;
      uStack_220 = param_6;
      _objc_retain(ppuStack_340);
      ppuStack_260 = ppuStack_340;
      _objc_retain(ppuVar9);
      ppuStack_258 = ppuVar9;
      _objc_retain(puVar16);
      puStack_250 = puVar16;
      _objc_retain(param_7);
      uStack_248 = param_7;
      _objc_retain(ppuVar8);
      ppuStack_240 = ppuVar8;
      func_0x00010c0f7fc0(puVar10);
      _objc_release(ppuStack_240);
      _objc_release(uStack_248);
      _objc_release(puStack_250);
      _objc_release(ppuStack_258);
      _objc_release(ppuStack_260);
      _objc_release(ppuStack_268);
      _objc_destroyWeak(auStack_238);
      _objc_destroyWeak(&uStack_138);
      _objc_release(puVar16);
      _objc_release(ppuVar9);
      goto LAB_10692d970;
    }
    ppuVar9 = param_3;
    func_0x00010c25b720();
    if (ppuVar9 != (undefined **)0xd) {
      if (ppuVar3 == (undefined **)0x0) goto LAB_10692d978;
      _dispatch_group_enter(ppuVar8);
      puVar16 = param_1[0x10];
      func_0x00010c269d40(puVar16);
      _objc_retainAutoreleasedReturnValue();
      puStack_2b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_2a8 = 0xc2000000;
      pcStack_2a0 = FUN_10692ddb4;
      puStack_298 = &UNK_110841f20;
      _objc_retain(ppuVar8);
      ppuStack_290 = ppuVar8;
      func_0x00010c107c60(puVar16);
      _objc_release(puVar16);
      ppuStack_340 = ppuStack_290;
      goto LAB_10692d970;
    }
    func_0x00010be773c0(param_1);
  }
  else {
LAB_10692d978:
    puVar10 = (undefined *)0x11;
    func_0x0001000819a8(0x11,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_2d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2d0 = 0xc2000000;
    uStack_2c8 = 0x10692ddbc;
    puStack_2c0 = &UNK_110849530;
    _objc_retain(param_9);
    ppuStack_2b8 = param_9;
    puVar16 = puVar10;
    func_0x000100bc0718(ppuVar8,puVar10,&puStack_2d8);
    _objc_release(puVar10);
    _objc_release(ppuStack_2b8);
  }
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  _objc_release(ppuVar3);
LAB_10692da08:
  _objc_release(ppuVar4);
  _objc_release(ppuVar2);
  _objc_release(puVar1);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar17 + 10);
  _objc_destroyWeak(&uStack_138);
  __Unwind_Resume();
  param_3[5] = *(undefined **)(puVar16 + 0x28);
  *(undefined8 *)(puVar16 + 0x28) = 0;
  return;
}



/* Entry: 10692dac8; end: 10692dadf;  */

void FUN_10692dac8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10692dae0; end: 10692db17;  */

void FUN_10692dae0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10692db18; end: 10692db1b;  */

void FUN_10692db18(void)

{
  return;
}



/* Entry: 10692db1c; end: 10692dca3;  */

void FUN_10692db1c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_68 [8];
  
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c2a2900(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(lVar2 + 0x20);
    uVar4 = *(undefined8 *)(lVar2 + 0x28);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x40);
    uVar5 = *(undefined8 *)(lVar2 + 0x88);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(lVar2 + 0xa0);
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar9);
    _objc_copyWeak(auStack_68,param_1 + 0x38);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar7);
    func_0x000107a42208(uVar6,uVar3,uVar1,uVar4,0,500,uVar8,uVar5,uVar10,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar7);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar9);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 10692dca4; end: 10692dd0f;  */

void FUN_10692dca4(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2 == 0);
  }
  if (param_2 == 0) {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010bdfed40();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10692dd10; end: 10692dd17;  */

void FUN_10692dd10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10692dd18; end: 10692ddb3;  */

void FUN_10692dd18(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x000100504554();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10692ddb4; end: 10692ddd3;  */

void FUN_10692ddb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10692ddd4; end: 10692e42f; -[SCDiscoverFeedCollection _prefetchMediaForPublicUserStory:numberOfSnapsToPrefetch:maxNumberOfSnapsToPrefetch:completePrefetchOnFirstSnap:publicUserStory:snapIds:viewStatesBySnapIds:debugInfo:prefetchGroup:] */

long FUN_10692ddd4(long param_1,undefined8 param_2,long param_3,undefined *param_4,ulong param_5,
                  int param_6,ulong param_7,undefined8 param_8,ulong param_9,long param_10,
                  undefined8 param_11)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  long lStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar3 = param_9;
  FUN_10692e430(param_9,param_8);
  lVar20 = param_3;
  func_0x00010c25a160(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_7;
  func_0x000107d00f44(param_7,param_9,lVar20);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar20);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar6 = param_7;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar6;
  func_0x00010bf529e0();
  if (uVar3 < uVar17) {
    uVar17 = 0;
    do {
      puVar7 = puVar5;
      func_0x00010bf529e0();
      if (param_4 <= puVar7) break;
      _objc_release(uVar6);
      if (param_5 <= uVar17) goto LAB_10692dfc4;
      uVar6 = uVar4;
      func_0x00010c0dfd40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = *(long *)(param_1 + 0x30);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar6;
      func_0x00010c0c5340(uVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar20 = lVar8;
      func_0x00010c0c6980();
      _objc_release(uVar9);
      _objc_release(lVar8);
      if (lVar20 == 2) {
        uVar17 = uVar17 + 1;
      }
      else {
        func_0x00010befa120(puVar5);
      }
      _objc_release(uVar6);
      uVar3 = uVar3 + 1;
      uVar6 = param_7;
      func_0x00010c245680();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar6;
      func_0x00010bf529e0();
    } while (uVar3 < uVar9);
  }
  _objc_release(uVar6);
LAB_10692dfc4:
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  _objc_retain(puVar5);
  puVar7 = puVar5;
  func_0x00010bf52a60();
  if (puVar7 != (undefined *)0x0) {
    lVar20 = *plStack_130;
    do {
      puVar18 = (undefined *)0x0;
      do {
        if (*plStack_130 != lVar20) {
          _objc_enumerationMutation(puVar5);
        }
        uVar17 = *(ulong *)(lStack_138 + (long)puVar18 * 8);
        uVar3 = uVar17;
        func_0x00010c29e300();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar3;
        func_0x00010c083540();
        _objc_release(uVar3);
        if ((uVar6 & 1) == 0) {
          if (param_6 != 0) {
            func_0x00010bf529e0(puVar2);
          }
          uVar3 = uVar17;
          func_0x00010bf3cf60(uVar17);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
          _objc_release(uVar3);
          _dispatch_group_enter(param_11);
          uVar3 = uVar17;
          func_0x00010853acb4(uVar17,*(undefined8 *)(param_1 + 0x90));
          _objc_retainAutoreleasedReturnValue();
          uVar10 = *(undefined8 *)(param_1 + 0x48);
          func_0x00010c269d40(uVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0c5340(uVar17);
          _objc_retainAutoreleasedReturnValue();
          puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_160 = 0xc2000000;
          pcStack_158 = FUN_10692e58c;
          puStack_150 = &UNK_110855e40;
          _objc_retain(param_11);
          uStack_148 = param_11;
          func_0x00010bf89060(uVar10);
          _objc_release(uVar17);
          _objc_release(uVar10);
          _objc_release(uStack_148);
          _objc_release(uVar3);
        }
        puVar18 = puVar18 + 1;
      } while (puVar7 != puVar18);
      puVar7 = puVar5;
      func_0x00010bf52a60();
    } while (puVar7 != (undefined *)0x0);
  }
  _objc_release(puVar5);
  uVar11 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar11;
  func_0x00010c0703e0();
  if ((int)uVar10 == 0) {
    _objc_release(uVar11);
  }
  else {
    puVar7 = puVar2;
    func_0x00010bf529e0();
    _objc_release(uVar11);
    if (puVar7 != (undefined *)0x0) {
      puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      uVar3 = param_7;
      func_0x00010c292e20(param_7);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = PTR_PTR_1126ca858;
      func_0x00010c259cc0(PTR_PTR_1126ca858);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar7);
      _objc_release(puVar18);
      _objc_release(uVar3);
      lVar20 = param_3;
      func_0x00010bf454e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf52680();
      _objc_release(lVar20);
      func_0x00010b633548();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar20;
      func_0x00010c26c080();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = PTR_PTR_1126ca858;
      func_0x00010c25b720(PTR_PTR_1126ca858);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar7);
      _objc_release(puVar18);
      _objc_release(lVar8);
      _objc_release(lVar20);
      puVar18 = puVar2;
      func_0x00010bf51e00(puVar2);
      puVar12 = PTR_PTR_1126ca858;
      func_0x00010c245680(PTR_PTR_1126ca858);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar7);
      _objc_release(puVar12);
      _objc_release(puVar18);
      lVar20 = param_10;
      func_0x00010bf529e0();
      if (lVar20 != 0) {
        func_0x00010bef7f60(puVar7);
      }
      goto LAB_10692e330;
    }
  }
  puVar7 = (undefined *)0x0;
LAB_10692e330:
  lVar8 = 0x11;
  func_0x0001000819a8(0x11,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_190 = 0xc2000000;
  pcStack_188 = FUN_10692e594;
  puStack_180 = &UNK_110841f80;
  puStack_178 = puVar7;
  lStack_170 = param_1;
  _objc_retain(puVar7);
  lVar20 = lVar8;
  func_0x000100bc0718(param_11,lVar8,&puStack_198);
  _objc_release(lVar8);
  _objc_release(puStack_178);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(lVar20);
  _objc_retain(lVar20);
  lVar13 = lVar20;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  if (lVar13 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = 0;
    do {
      lVar19 = 0;
      lVar1 = lVar13 + lVar16;
      do {
        if (lRam0000000000000000 != lVar8) {
          _objc_enumerationMutation(lVar20);
        }
        lVar14 = param_3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar14 == 0) goto LAB_10692e534;
        lVar16 = lVar16 + 1;
        lVar19 = lVar19 + 1;
      } while (lVar13 != lVar19);
      lVar13 = lVar20;
      func_0x00010bf52a60();
      lVar16 = lVar1;
    } while (lVar13 != 0);
  }
LAB_10692e534:
  _objc_release(lVar20);
  _objc_release(lVar20);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar15) {
    ___stack_chk_fail();
    lVar20 = *(long *)(param_3 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__dispatch_group_leave_11034c080)(lVar20);
    return lVar20;
  }
  return lVar16;
}



/* Entry: 10692e430; end: 10692e58b;  */

long FUN_10692e430(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  if (lVar2 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    do {
      lVar7 = 0;
      lVar1 = lVar2 + lVar6;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(param_2);
        }
        lVar3 = param_1;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar3 == 0) goto LAB_10692e534;
        lVar6 = lVar6 + 1;
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = param_2;
      func_0x00010bf52a60();
      lVar6 = lVar1;
    } while (lVar2 != 0);
  }
LAB_10692e534:
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    lVar4 = *(long *)(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__dispatch_group_leave_11034c080)(lVar4);
    return lVar4;
  }
  return lVar6;
}



/* Entry: 10692e58c; end: 10692e593;  */

void FUN_10692e58c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10692e594; end: 10692e5df;  */

void FUN_10692e594(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x78);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf06f80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10692e5e0; end: 10692eab3; -[SCDiscoverFeedCollection isDiscoverFeedStoryLoaded:] */

uint FUN_10692e5e0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010c0fed80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bdd30;
  _objc_opt_class(PTR_PTR_1126bdd30);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar3 = PTR_PTR_1126bdd28;
  _objc_retain(uVar2);
  _objc_opt_class(puVar3);
  uVar5 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar4 = uVar2;
  if ((uVar5 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar2);
  uVar5 = param_3;
  func_0x00010c25b720();
  if (uVar5 == 3) {
    uVar10 = param_3;
    func_0x00010c259560(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar10;
    func_0x00010afef4dc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    uVar11 = uVar5;
    FUN_10692dd18(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar6;
    func_0x00010c121820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    FUN_10692e430(uVar12,uVar11);
    uVar10 = uVar5;
    func_0x00010c245680(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar10;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    uVar10 = uVar8;
    func_0x000107d03060(uVar8,0);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = *(long *)(param_1 + 0x30);
    func_0x00010c269d40(lVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar7;
    func_0x00010c0c6980();
    _objc_release(lVar7);
    _objc_release(uVar10);
LAB_10692e8d8:
    uVar14 = (uint)(lVar9 == 2);
    _objc_release(uVar8);
    _objc_release(uVar12);
    _objc_release(uVar11);
  }
  else {
    uVar5 = param_3;
    func_0x00010c25b720();
    if (uVar5 == 0xe) {
      uVar10 = param_3;
      func_0x00010c259560(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar10;
      func_0x00010afefd10();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar10);
      uVar10 = uVar5;
      func_0x00010c245680(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x000100504554();
      _objc_release(uVar10);
      uVar6 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar6;
      func_0x00010c121820();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      FUN_10692e430(uVar12,uVar11);
      uVar10 = uVar5;
      func_0x00010c245680(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar10;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar10);
      uVar10 = uVar8;
      func_0x000107d03060(uVar8,0);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = *(long *)(param_1 + 0x30);
      func_0x00010c269d40(lVar7);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar7;
      func_0x00010c0c6980();
      _objc_release(lVar7);
      _objc_release(uVar10);
      goto LAB_10692e8d8;
    }
    if (uVar1 != 0) {
      puStack_78 = &uStack_80;
      uStack_80 = 0;
      uStack_70 = 0x2020000000;
      uStack_68 = 0;
      _objc_initWeak(auStack_88,param_1);
      uVar12 = *(undefined8 *)(param_1 + 0x60);
      _objc_copyWeak(auStack_90,auStack_88);
      _objc_retain(uVar2);
      func_0x00010c0f8240(uVar12);
      uVar14 = (uint)*(byte *)(puStack_78 + 3);
      _objc_release(uVar1);
      _objc_destroyWeak(auStack_90);
      _objc_destroyWeak(auStack_88);
      __Block_object_dispose(&uStack_80,8);
      goto LAB_10692e8fc;
    }
    if (uVar4 == 0) {
      uVar14 = 0;
      goto LAB_10692e8fc;
    }
    uVar13 = *(undefined8 *)(param_1 + 0x70);
    uVar12 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x98);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x000107ab8260(uVar2,uVar13,uVar12,uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar12);
    uVar10 = uVar5;
    func_0x000107ab7860(uVar5,*(undefined8 *)(param_1 + 0x50));
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010c0c5400();
    uVar14 = (uint)uVar11;
    _objc_release(uVar10);
  }
  _objc_release(uVar5);
LAB_10692e8fc:
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_3);
  return uVar14 & 1;
}



/* Entry: 10692eab4; end: 10692eaf3;  */

void FUN_10692eab4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010be34440();
  *(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (char)lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10692eaf4; end: 10692ee7b; -[SCDiscoverFeedCollection cancelPrefetchMediaForStories:] */

void FUN_10692eaf4(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
      _objc_release(param_3);
      _objc_release(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
        return;
      }
      ___stack_chk_fail();
      uVar7 = 8;
      __Block_object_dispose(&uStack_130,8);
      __Unwind_Resume(param_3);
      func_0x00010bf987e0(uVar7);
      _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)();
      return;
    }
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_3);
      }
      lVar14 = *(long *)(lVar11 * 8);
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar14;
      func_0x00010afefbe8();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar14);
      if (lVar4 == 0) {
LAB_10692ed24:
        uVar8 = param_1;
        func_0x00010c0fed80();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126bdd28;
        _objc_opt_class(PTR_PTR_1126bdd28);
        uVar9 = uVar8;
        _objc_opt_isKindOfClass(uVar8,puVar6);
        uVar1 = uVar8;
        if ((uVar9 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        if ((uVar1 != 0) && (uVar9 = uVar8, func_0x00010bfd5020(), (uVar9 & 1) == 0)) {
          uVar7 = *(undefined8 *)(param_1 + 0x38);
          func_0x00010c269d40(uVar7);
          _objc_retainAutoreleasedReturnValue();
          uVar13 = *(undefined8 *)(param_1 + 0x70);
          uVar12 = *(undefined8 *)(param_1 + 0x50);
          uVar10 = *(undefined8 *)(param_1 + 0x98);
          func_0x00010c269d40(uVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x000107ab7620(uVar8,uVar7,uVar13,uVar12,uVar10);
          _objc_release(uVar10);
          _objc_release(uVar7);
        }
        _objc_release(uVar1);
        _objc_release(uVar8);
      }
      else {
        _objc_retain(lVar4);
        puStack_128 = &uStack_130;
        uStack_130 = 0;
        uStack_120 = 0x3032000000;
        pcStack_118 = FUN_10692dac8;
        uStack_110 = 0x10692dad8;
        uStack_108 = 0;
        lVar14 = lVar4;
        func_0x00010c245680(lVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar14;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0bebc0();
        _objc_release(lVar5);
        _objc_release(lVar14);
        lVar14 = puStack_128[5];
        _objc_retain(lVar14);
        __Block_object_dispose(&uStack_130,8);
        _objc_release(uStack_108);
        _objc_release(lVar4);
        if (lVar14 != 0) {
          lVar5 = lVar14;
          func_0x0001084769f4();
          _objc_retainAutoreleasedReturnValue();
          if (lVar5 != 0) {
            puVar6 = PTR_PTR_1126cf2c0;
            func_0x00010bf2e5e0(PTR_PTR_1126cf2c0);
            _objc_retainAutoreleasedReturnValue();
            uVar7 = *(undefined8 *)(param_1 + 0x28);
            func_0x00010c269d40(uVar7);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf2ede0();
            _objc_release(uVar7);
            _objc_release(puVar6);
          }
          _objc_release(lVar5);
          _objc_release(lVar14);
          goto LAB_10692ed24;
        }
      }
      _objc_release(lVar4);
      lVar11 = lVar11 + 1;
    } while (lVar3 != lVar11);
    lVar3 = param_3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 10692ee7c; end: 10692ee9b;  */

void FUN_10692ee7c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf987e0(param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10692ee9c; end: 10692f093; -[SCDiscoverFeedCollection _prefetchMediaForSingleSnapStoryStory:numberOfSnapsToPrefetch:maxNumberOfSnapsToPrefetch:completePrefetchOnFirstSnap:debugInfo:completion:] */

void FUN_10692ee9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = param_3;
  func_0x00010c259560(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010afef86c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  FUN_10692f094(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar4);
  _objc_initWeak(auStack_68,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar4);
  _objc_copyWeak(auStack_88,auStack_68);
  _objc_retain(param_3);
  uStack_80 = param_4;
  uStack_78 = param_5;
  uStack_70 = param_6;
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010c121840(uVar3);
  _objc_release(uVar3);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_88);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  return;
}



/* Entry: 10692f094; end: 10692f0d7;  */

void FUN_10692f094(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x000100504554();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10692f0d8; end: 10692f1f3;  */

void FUN_10692f0d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_60,param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uStack_50 = *(undefined8 *)(param_1 + 0x50);
  uStack_58 = *(undefined8 *)(param_1 + 0x48);
  uStack_48 = *(undefined1 *)(param_1 + 0x58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_2);
  return;
}



/* Entry: 10692f1f4; end: 10692f23f;  */

void FUN_10692f1f4(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be773e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10692f240; end: 10692f947; -[SCDiscoverFeedCollection _prefetchMediaForSingleSnapStoryStory:numberOfSnapsToPrefetch:maxNumberOfSnapsToPrefetch:completePrefetchOnFirstSnap:debugInfo:viewStatesBySnapIds:completion:] */

void FUN_10692f240(long param_1,undefined8 param_2,ulong param_3,undefined *param_4,ulong param_5,
                  uint param_6,long param_7,ulong param_8,undefined8 param_9)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  long lVar16;
  undefined *puVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  ulong uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar1 = param_3;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010afef86c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = uVar2;
  FUN_10692f094();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar5 = puVar4;
  _dispatch_group_create();
  uVar1 = param_8;
  FUN_10692e430(param_8,uVar3);
  uVar6 = param_3;
  func_0x000107d020b4(param_3,param_8,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar8 = uVar2;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar8;
  func_0x00010bf529e0();
  if (uVar1 < uVar15) {
    uVar15 = 0;
    do {
      puVar14 = puVar7;
      func_0x00010bf529e0();
      if (param_4 <= puVar14) break;
      _objc_release(uVar8);
      if (param_5 <= uVar15) goto LAB_10692f480;
      uVar8 = uVar6;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = *(long *)(param_1 + 0x30);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar8;
      func_0x00010c0c5340(uVar8);
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar9;
      func_0x00010c0c6980();
      _objc_release(uVar10);
      _objc_release(lVar9);
      uVar10 = uVar8;
      func_0x00010bf28a40();
      _objc_retainAutoreleasedReturnValue();
      if (((param_6 & 1) == 0) && (uVar10 == 0)) {
        if (lVar16 != 2) goto LAB_10692f440;
        uVar15 = uVar15 + 1;
      }
      else {
        _objc_release();
LAB_10692f440:
        func_0x00010befa120(puVar7);
      }
      _objc_release(uVar8);
      uVar1 = uVar1 + 1;
      uVar8 = uVar2;
      func_0x00010c245680();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar8;
      func_0x00010bf529e0();
    } while (uVar1 < uVar10);
  }
  _objc_release(uVar8);
LAB_10692f480:
  dVar18 = 0.0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  _objc_retain(puVar7);
  puVar14 = puVar7;
  func_0x00010bf52a60();
  if (puVar14 != (undefined *)0x0) {
    lVar16 = *plStack_150;
    do {
      puVar17 = (undefined *)0x0;
      do {
        dVar19 = dVar18;
        if (*plStack_150 != lVar16) {
          _objc_enumerationMutation(puVar7);
          dVar19 = dVar18;
        }
        uVar15 = *(ulong *)(lStack_158 + (long)puVar17 * 8);
        uVar1 = uVar15;
        func_0x00010c29e300();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar1;
        func_0x00010c083540();
        _objc_release(uVar1);
        dVar18 = dVar19;
        if ((uVar8 & 1) == 0) {
          uVar1 = uVar15;
          func_0x00010c26f2a0(uVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf8b160();
          dVar20 = dVar19;
          func_0x000108f4adc8(*(undefined8 *)(param_1 + 0x20));
          dVar18 = dVar20;
          _objc_release(uVar1);
          if ((param_6 != 0) && (dVar19 <= dVar20)) {
            func_0x00010bf529e0(puVar4);
          }
          uVar1 = uVar15;
          func_0x00010bf3cf60(uVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar4);
          _objc_release(uVar1);
          _dispatch_group_enter(puVar5);
          uVar1 = uVar15;
          func_0x00010853acb4(uVar15,*(undefined8 *)(param_1 + 0x90));
          _objc_retainAutoreleasedReturnValue();
          uVar11 = *(undefined8 *)(param_1 + 0x48);
          func_0x00010c269d40(uVar11);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar15;
          func_0x00010c0c5340(uVar15);
          _objc_retainAutoreleasedReturnValue();
          puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_188 = 0xc2000000;
          pcStack_180 = FUN_10692f948;
          puStack_178 = &UNK_1108529c0;
          uStack_170 = uVar15;
          _objc_retain(puVar5);
          puStack_168 = puVar5;
          func_0x00010bf89060(uVar11);
          _objc_release(uVar8);
          _objc_release(uVar11);
          _objc_release(puStack_168);
          _objc_release(uVar1);
        }
        puVar17 = puVar17 + 1;
      } while (puVar14 != puVar17);
      puVar14 = puVar7;
      func_0x00010bf52a60();
    } while (puVar14 != (undefined *)0x0);
  }
  _objc_release(puVar7);
  uVar12 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar12;
  func_0x00010c0703e0();
  if ((int)uVar11 == 0) {
    _objc_release(uVar12);
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar14 = puVar4;
    func_0x00010bf529e0();
    _objc_release(uVar12);
    if (puVar14 == (undefined *)0x0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar14 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      uVar1 = uVar2;
      func_0x00010bf454e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar17 = PTR_PTR_1126ca858;
      func_0x00010c259cc0(PTR_PTR_1126ca858);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar14);
      _objc_release(puVar17);
      _objc_release(uVar1);
      uVar1 = param_3;
      func_0x00010bf454e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf52680();
      _objc_release(uVar1);
      func_0x00010b633548();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar1;
      func_0x00010c26c080();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = PTR_PTR_1126ca858;
      func_0x00010c25b720(PTR_PTR_1126ca858);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar14);
      _objc_release(puVar17);
      _objc_release(uVar8);
      _objc_release(uVar1);
      puVar17 = puVar4;
      func_0x00010bf51e00(puVar4);
      puVar13 = PTR_PTR_1126ca858;
      func_0x00010c245680(PTR_PTR_1126ca858);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar14);
      _objc_release(puVar13);
      _objc_release(puVar17);
      lVar16 = param_7;
      func_0x00010bf529e0();
      if (lVar16 != 0) {
        func_0x00010bef7f60(puVar14);
      }
    }
  }
  uVar11 = 0x11;
  func_0x0001000819a8(0x11,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_1c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1c0 = 0xc2000000;
  pcStack_1b8 = FUN_10692f950;
  puStack_1b0 = &UNK_11084a9e8;
  uStack_198 = param_9;
  puStack_1a8 = puVar14;
  lStack_1a0 = param_1;
  _objc_retain(puVar14);
  _objc_retain(param_9);
  func_0x000100bc0718(puVar5,uVar11,&puStack_1c8);
  _objc_release(uVar11);
  _objc_release(puStack_1a8);
  _objc_release(uStack_198);
  _objc_release(puVar14);
  _objc_release(param_9);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_3 + 0x28));
  return;
}



/* Entry: 10692f948; end: 10692f94f;  */

void FUN_10692f948(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10692f950; end: 10692f9b7;  */

void FUN_10692f950(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,1);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x78);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf06f80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 10692f9b8; end: 10692f9df; -[SCDiscoverFeedCollection _didPrefetchLongformShow:] */

void FUN_10692f9b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10692f9e0; end: 10692fa33; -[SCDiscoverFeedCollection _updatePrefetchedLongformShowsWithShow:] */

void FUN_10692f9e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf8c980(param_3);
  func_0x00010c0df7c0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10692fa34; end: 10692fa93; -[SCDiscoverFeedCollection _hasPrefetchedLongformShow:] */

undefined8 FUN_10692fa34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf8c980(param_3);
  func_0x00010c0df7c0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  return uVar2;
}



/* Entry: 10692fa94; end: 10692fba7; -[SCDiscoverFeedCollection .cxx_destruct] */

void FUN_10692fa94(long param_1)

{
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
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



/* Entry: 10692fba8; end: 10692fbb7;  */

void FUN_10692fba8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 10692fbb8; end: 10692fbef;  */

void FUN_10692fbb8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10692fbf0; end: 10692fbfb;  */

void FUN_10692fbf0(void)

{
  return;
}



/* Entry: 10692fbfc; end: 10692feaf; -[SCDiscoverBackgroundPrefetcher initWithQueryCoordinator:discoverFeedDataFetcher:discoverFeedDataMutator:sectionExtensionServices:userSession:circumstanceEngine:discoverFeedCollection:snapchattersSynchronousDataFetcher:bitmojiAvatarProvider:legacyMediaCache:imageFetchingService:storiesConfigProvider:bitmojiImageFetcher:] */

undefined8 *
FUN_10692fbfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1126f3db0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[4];
    puVar1[4] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    puVar1[9] = 0;
    _objc_retain(param_10);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[5];
    puVar1[5] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[10];
    puVar1[10] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_14;
    _objc_release(uVar2);
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10692feb0; end: 10693004f; -[SCDiscoverBackgroundPrefetcher _handleBackgroundPrefetchMediaWithCompletionHandler:sectionExtensionServices:] */

void FUN_10692feb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9280();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf816c0();
  _objc_release(uVar3);
  if ((int)uVar4 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    func_0x00010c09c380(uVar4);
    _objc_release(uVar4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x70);
    FUN_106930050(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be852e0(param_1);
    _objc_release(uVar4);
  }
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106930050; end: 1069301af;  */

void FUN_106930050(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain();
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126cf2c8;
  _objc_alloc(PTR_PTR_1126cf2c8);
  func_0x00010c030420();
  func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7900);
  puVar3 = PTR_PTR_1126cf2c8;
  _objc_alloc(PTR_PTR_1126cf2c8);
  uVar4 = param_1;
  func_0x00010c269d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar5 = uVar4;
  func_0x00010bf82b40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf71460();
  func_0x00010c030420(puVar3,param_2,(long)(int)uVar7,3,3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7918);
  puVar8 = PTR_PTR_1126cf2c8;
  _objc_alloc(PTR_PTR_1126cf2c8);
  func_0x00010c030420();
  func_0x00010c1d0640(puVar1,param_2,puVar8,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7930);
  _objc_release(puVar8);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1069301b0; end: 1069301f3;  */

void FUN_1069301b0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4d220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069301f4; end: 1069302d3; -[SCDiscoverBackgroundPrefetcher _loadDiscoverMetadataFromDiskOnPerformerWithComplete:completionHandler:] */

void FUN_1069301f4(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 1069302d4; end: 10693030b;  */

void FUN_1069302d4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4d1e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10693030c; end: 106930377; -[SCDiscoverBackgroundPrefetcher _loadDiscoverMetadataFromDiskComplete:completionHandler:] */

void FUN_10693030c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(param_4);
  FUN_106930050(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be4d200(param_1,param_2,param_3,uVar1,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106930378; end: 1069304b7; -[SCDiscoverBackgroundPrefetcher _loadDiscoverMetadataFromDiskComplete:sectionToPrefetchConfigMap:completionHandler:] */

void FUN_106930378(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_4);
  uStack_50 = param_3;
  _objc_retain(param_5);
  func_0x00010c09afa0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1069304b8; end: 1069304ff;  */

void FUN_1069304b8(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9fc80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106930500; end: 106930717; -[SCDiscoverBackgroundPrefetcher _sendQueryForSectionToPrefetchConfigMap:isValid:dataLoaded:completionHandler:] */

void FUN_106930500(long param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  if ((param_4 != 0) && (param_5 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf82580();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf717a0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  puVar4 = PTR_PTR_1126c2130;
  _objc_alloc(PTR_PTR_1126c2130);
  func_0x00010c012700();
  puVar5 = PTR_PTR_1126b1158;
  _objc_alloc(PTR_PTR_1126b1158);
  func_0x00010c03c440();
  _objc_initWeak(auStack_58,param_1);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar6 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_6);
  func_0x00010c13cfe0(lVar6);
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 106930718; end: 10693074b;  */

void FUN_106930718(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be852e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10693074c; end: 10693094b; -[SCDiscoverBackgroundPrefetcher _queryDiscoverResultsComplete:completionHandler:] */

void FUN_10693074c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010befa120();
  lVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0de380();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    func_0x00010befa120(puVar1);
  }
  lVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010befa120(puVar1);
  }
  _objc_initWeak(auStack_58,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bf51e00(puVar1);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c11de00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf00a60(uVar4);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10693094c; end: 10693099f;  */

void FUN_10693094c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be77800();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069309a0; end: 106930cf7; -[SCDiscoverBackgroundPrefetcher _prefetchWithAllStories:sectionToPrefetchConfigMap:completionHandler:] */

void FUN_1069309a0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126ae520;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf07b60();
    _objc_release(puVar3);
    if (puVar4 == (undefined *)0x2) {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14b1a0();
      _objc_release();
      _dispatch_group_create();
      lStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      plStack_140 = (long *)0x0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      _objc_retain(param_3);
      lVar2 = param_3;
      func_0x00010bf52a60();
      if (lVar2 != 0) {
        lVar12 = *plStack_140;
        do {
          lVar11 = 0;
          do {
            if (*plStack_140 != lVar12) {
              _objc_enumerationMutation(param_3);
            }
            uVar13 = *(undefined8 *)(lStack_148 + lVar11 * 8);
            uVar6 = param_4;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            lVar7 = param_3;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0de380();
            func_0x00010bf529e0();
            lVar8 = lVar7;
            func_0x00010c25e980();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010be77160(param_1);
            puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_198 = 0xc2000000;
            pcStack_190 = FUN_106930cf8;
            puStack_188 = &UNK_110866740;
            lStack_180 = param_1;
            _objc_retain(uVar5);
            uStack_178 = uVar5;
            uStack_170 = uVar13;
            lStack_168 = lVar8;
            uStack_160 = uVar6;
            _objc_retain(param_5);
            uStack_158 = param_5;
            _objc_retain(uVar6);
            _objc_retain(lVar8);
            func_0x0001000d76cc("APPSTORE",&puStack_1a0);
            _objc_release(uStack_158);
            _objc_release(uStack_160);
            _objc_release(lStack_168);
            _objc_release(uStack_178);
            _objc_release(uVar6);
            _objc_release(lVar8);
            _objc_release(lVar7);
            lVar11 = lVar11 + 1;
          } while (lVar2 != lVar11);
          lVar2 = param_3;
          func_0x00010bf52a60();
        } while (lVar2 != 0);
      }
      _objc_release(param_3);
      puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1d0 = 0xc2000000;
      pcStack_1c8 = FUN_106930d5c;
      puStack_1c0 = &UNK_11084a9e8;
      uStack_1b8 = uVar5;
      lStack_1b0 = param_1;
      _objc_retain(param_5);
      uStack_1a8 = param_5;
      _objc_retain(uVar5);
      func_0x0001000d76cc("APPSTORE",&puStack_1d8);
      _objc_release(uStack_1a8);
      _objc_release(uStack_1b8);
      _objc_release(uVar5);
      goto LAB_106930ca0;
    }
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  func_0x00010be30f80(param_1);
LAB_106930ca0:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  uVar13 = *(undefined8 *)(param_3 + 0x28);
  uVar6 = *(undefined8 *)(param_3 + 0x30);
  uVar1 = *(undefined8 *)(param_3 + 0x38);
  uVar9 = *(undefined8 *)(param_3 + 0x40);
  func_0x00010c0de360(uVar9);
  uVar10 = *(undefined8 *)(param_3 + 0x40);
  func_0x00010c0c2720(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010be77150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar5,PTR_s__prefetchDiscoverMedia_feedType__11257b5f0,uVar13,uVar6,uVar1,uVar9,uVar10,
             *(undefined8 *)(param_3 + 0x48));
  return;
}



/* Entry: 106930cf8; end: 106930d5b;  */

void FUN_106930cf8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c0de360(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c0c2720(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010be77150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,PTR_s__prefetchDiscoverMedia_feedType__11257b5f0,uVar3,uVar2,uVar4,uVar5,uVar6,
             *(undefined8 *)(param_1 + 0x48));
  return;
}



/* Entry: 106930d5c; end: 106930e03;  */

void FUN_106930d5c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x40);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106930e04;
  puStack_48 = &UNK_11084aaa8;
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x30));
  uStack_40 = uVar3;
  uStack_38 = uVar4;
  func_0x000100bc0718(uVar1,uVar2,&puStack_60);
  _objc_release(uVar2);
  _objc_release(uStack_38);
  return;
}



/* Entry: 106930e04; end: 106930e0f;  */

void FUN_106930e04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be30f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleStoriesDownloadCompletion_112569d80,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106930e10; end: 10693101b; -[SCDiscoverBackgroundPrefetcher _prefetchDiscoverMedia:feedType:storiesToPrefetch:numOfSnapsInAStory:maxNumOfSnapsInAStory:completionHandler:] */

void FUN_106930e10(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar8 = param_4;
  func_0x00010c067ec0();
  if ((int)uVar8 == 2) {
    puVar1 = PTR_PTR_1126ca858;
    func_0x00010c108020();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ca860;
    func_0x00010bf13c20();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ca858;
    func_0x00010c156900();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010afb7960();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0(param_4);
    puVar5 = puVar4;
    func_0x00010bf979e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_retain(param_3);
    _objc_retain(puVar6);
    func_0x00010bf97e80(param_5);
    _objc_release(puVar6);
    _objc_release(param_3);
    _objc_release(puVar6);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  uVar8 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(param_2);
  _dispatch_group_enter(uVar8);
  uVar8 = *(undefined8 *)(param_3 + 0x20);
  uVar9 = *(undefined8 *)(*(long *)(param_3 + 0x28) + 0x20);
  _objc_retain(uVar8);
  func_0x00010c107a60(uVar9);
  _objc_release(param_2);
  _objc_release(uVar8);
  return;
}



/* Entry: 10693101c; end: 1069310e7;  */

void FUN_10693101c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  _dispatch_group_enter(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20);
  _objc_retain(uVar1);
  func_0x00010c107a60(uVar2);
  _objc_release(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 1069310e8; end: 1069310ef;  */

void FUN_1069310e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1069310f0; end: 106931553; -[SCDiscoverBackgroundPrefetcher _prefetchDiscoverThumbnail:storiesToPrefetch:feedType:] */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x000106931358 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1069310f0(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  undefined8 *unaff_x21;
  undefined8 *puVar16;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auStack_260 [8];
  undefined *puStack_258;
  undefined8 uStack_250;
  code *pcStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  ulong uStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  long lStack_1f8;
  undefined1 *puStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1b8 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_1c0 = param_6;
  _objc_retain(param_6);
  puVar14 = *(undefined1 **)(param_2 + 0x38);
  uVar1 = 0;
  func_0x000107c79b74(0,puVar14,*(undefined8 *)(param_2 + 0x70));
  func_0x000107c76c5c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = *(undefined1 **)(param_2 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  puStack_1a8 = puVar3;
  _objc_release(puVar2);
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  _objc_retain(param_5);
  puVar16 = param_5;
  puStack_1d0 = param_5;
  func_0x00010bf52a60();
  puStack_1a0 = puVar16;
  if (puVar16 != (undefined8 *)0x0) {
    lStack_1b0 = *plStack_140;
    unaff_d8 = *(undefined8 *)PTR__CGSizeZero_110347620;
    unaff_d9 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
    do {
      puVar16 = (undefined8 *)0x0;
      do {
        if (*plStack_140 != lStack_1b0) {
          _objc_enumerationMutation(puStack_1d0);
        }
        param_5 = *(undefined8 **)(lStack_148 + (long)puVar16 * 8);
        unaff_x21 = (undefined8 *)(param_2 + 0x38);
        uVar4 = *unaff_x21;
        uVar15 = *(undefined8 *)(param_2 + 0x58);
        func_0x000108f54a98(uVar4);
        puVar5 = param_5;
        puVar14 = puStack_1a8;
        func_0x0001079b64c0(param_5,puStack_1a8,uVar1,0,uVar15,uVar4,*unaff_x21,
                            *(undefined8 *)(param_2 + 0x70));
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010bf21f60();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c26e120();
        _objc_retainAutoreleasedReturnValue();
        if (puVar7 != (undefined8 *)0x0) {
          uVar8 = param_2;
          func_0x00010be33820();
          if ((uVar8 & 1) == 0) {
            param_5 = puVar7;
            func_0x000107dd5184();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = param_5;
            func_0x00010c08fa60();
            if (puVar9 != (undefined8 *)0x0) {
              _objc_initWeak(auStack_158,param_2);
              puVar9 = puVar7;
              func_0x000107dd4c00();
              _objc_retainAutoreleasedReturnValue();
              puVar10 = PTR_PTR_1126aebf0;
              _objc_alloc();
              uVar8 = param_2;
              _objc_opt_class(param_2);
              _NSStringFromClass();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c011b80();
              puStack_1c8 = puVar10;
              _objc_release(uVar8);
              puVar10 = PTR_PTR_1126b85a8;
              _objc_alloc();
              puVar11 = PTR__OBJC_CLASS___UIScreen_1126aea10;
              func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c14e120();
              func_0x00010c01cf00(param_1,unaff_d8,unaff_d9);
              _objc_release(puVar11);
              lVar12 = lStack_1b8;
              puStack_1d8 = puVar9;
              _dispatch_group_enter(lStack_1b8);
              uVar15 = *(undefined8 *)(param_2 + 0x50);
              puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_190 = 0xc2000000;
              pcStack_188 = FUN_106931554;
              puStack_180 = &UNK_1108672b8;
              _objc_retain(puVar7);
              uVar4 = uStack_1c0;
              puStack_1e0 = puVar10;
              puStack_178 = puVar7;
              _objc_retain(uStack_1c0);
              puVar10 = puStack_1e0;
              uStack_170 = uVar4;
              _objc_retain(lVar12);
              unaff_x21 = puStack_1d8;
              lStack_168 = lVar12;
              puVar14 = auStack_158;
              _objc_copyWeak(auStack_160,puVar14);
              func_0x00010c107860(uVar15);
              _objc_unsafeClaimAutoreleasedReturnValue();
              _objc_destroyWeak(auStack_160);
              _objc_release(lStack_168);
              _objc_release(uStack_170);
              _objc_release(puStack_178);
              _objc_release(puVar10);
              _objc_release(puStack_1c8);
              _objc_release(unaff_x21);
              _objc_destroyWeak(auStack_158);
            }
            _objc_release(param_5);
          }
        }
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        puVar16 = (undefined8 *)((long)puVar16 + 1);
      } while (puStack_1a0 != puVar16);
      puVar16 = puStack_1d0;
      func_0x00010bf52a60();
      puStack_1a0 = puVar16;
    } while (puVar16 != (undefined8 *)0x0);
  }
  _objc_release(puStack_1d0);
  _objc_release(puStack_1a8);
  _objc_release(uVar1);
  _objc_release(uStack_1c0);
  _objc_release(puStack_1d0);
  lVar12 = lStack_1b8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_158);
  lVar13 = lVar12;
  __Unwind_Resume();
  pcStack_1e8 = FUN_106931554;
  uStack_220 = unaff_d9;
  uStack_218 = unaff_d8;
  uStack_210 = param_2;
  puStack_208 = unaff_x21;
  puStack_200 = param_5;
  lStack_1f8 = lVar12;
  puStack_1f0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar14);
  puStack_258 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_250 = 0xc2000000;
  pcStack_248 = FUN_1069316b0;
  puStack_240 = &UNK_11094bce8;
  uVar1 = *(undefined8 *)(lVar13 + 0x20);
  _objc_retain(uVar1);
  uVar4 = *(undefined8 *)(lVar13 + 0x28);
  uStack_238 = uVar1;
  _objc_retain(uVar4);
  uVar1 = *(undefined8 *)(lVar13 + 0x30);
  uStack_230 = uVar4;
  _objc_retain(uVar1);
  uStack_228 = uVar1;
  _objc_copyWeak(auStack_260,lVar13 + 0x38);
  uVar4 = *(undefined8 *)(lVar13 + 0x20);
  _objc_retain(uVar4);
  uVar15 = *(undefined8 *)(lVar13 + 0x28);
  _objc_retain(uVar15);
  uVar1 = *(undefined8 *)(lVar13 + 0x30);
  _objc_retain(uVar1);
  func_0x00010c0c0800(puVar14);
  _objc_release(uVar1);
  _objc_release(uVar15);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_260);
  _objc_release(uStack_228);
  _objc_release(uStack_230);
  _objc_release(uStack_238);
  _objc_release(puVar14);
  return;
}



/* Entry: 106931554; end: 1069316af;  */

void FUN_106931554(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1069316b0;
  puStack_60 = &UNK_11094bce8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar2;
  _objc_retain(uVar1);
  uStack_48 = uVar1;
  _objc_copyWeak(auStack_80,param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 1069316b0; end: 1069316b7;  */

void FUN_1069316b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1069316b8; end: 106931747;  */

void FUN_1069316b8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_106931748;
    puStack_30 = &UNK_110842e18;
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar2);
    uStack_28 = uVar2;
    func_0x00010bed3ae0(lVar1,param_2,2,&puStack_48);
    _objc_release(uStack_28);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106931748; end: 10693174f;  */

void FUN_106931748(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106931750; end: 10693179b; -[SCDiscoverBackgroundPrefetcher _handleStoriesDownloadCompletion:] */

void FUN_106931750(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  func_0x00010c2be140(*(undefined8 *)(param_1 + 0x28));
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x48),0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10693179c; end: 106931833; -[SCDiscoverBackgroundPrefetcher _updateBackgroundFetchResult:completion:] */

void FUN_10693179c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106931834;
  puStack_50 = &UNK_11085b7b0;
  lStack_48 = param_1;
  uStack_40 = param_4;
  uStack_38 = param_3;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_4);
  return;
}



/* Entry: 106931834; end: 106931853;  */

void FUN_106931834(long param_1)

{
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48) = *(undefined8 *)(param_1 + 0x30);
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010693184c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 106931854; end: 10693192f; -[SCDiscoverBackgroundPrefetcher _doBackgroundPrefetchWithCompletionHandler:] */

void FUN_106931854(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c297260(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106931930; end: 106931983;  */

void FUN_106931930(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be26380();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106931984; end: 10693198f; -[SCDiscoverBackgroundPrefetcher dataSyncerIdentifier] */

undefined ** FUN_106931984(void)

{
  return &PTR____CFConstantStringClassReference_110e65378;
}



/* Entry: 106931990; end: 106931a2b; -[SCDiscoverBackgroundPrefetcher jobConfig] */

void FUN_106931990(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf82580();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71780();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b7228;
  _objc_retain();
  _objc_opt_new(puVar4);
  puVar5 = PTR_PTR_1126b7238;
  _objc_opt_new(PTR_PTR_1126b7238);
  puVar6 = PTR_PTR_1126b7248;
  _objc_opt_new(PTR_PTR_1126b7248);
  func_0x00010c1eac20();
  func_0x00010c1e9180(puVar5);
  func_0x00010c1b67e0(puVar4);
  puVar7 = PTR_PTR_1126b7240;
  _objc_opt_new(PTR_PTR_1126b7240);
  func_0x00010c1cc140();
  puVar8 = puVar7;
  func_0x00010bf06200(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar8);
  puVar8 = puVar7;
  func_0x00010bf06200(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar8);
  func_0x00010c1b66e0(puVar4);
  func_0x00010c198180(puVar4);
  func_0x00010c1b6840(puVar4);
  _objc_release(&PTR____CFConstantStringClassReference_110e65378);
  func_0x00010c1b6780(puVar4);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106931a2c; end: 106931a33; -[SCDiscoverBackgroundPrefetcher submitOnRegister] */

undefined8 FUN_106931a2c(void)

{
  return 1;
}



/* Entry: 106931a34; end: 106931b0b; -[SCDiscoverBackgroundPrefetcher onSync:] */

void FUN_106931a34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106931b0c; end: 106931b3f;  */

void FUN_106931b0c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be05420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106931b40; end: 106931e4f; -[SCDiscoverBackgroundPrefetcher _handledBitmojiThumbnailPrefetch:feedType:discoverDownloadGroup:] */

undefined8
FUN_106931b40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_106931e50;
  uStack_88 = 0x106931e60;
  uStack_80 = 0;
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_106931e50;
  uStack_b8 = 0x106931e60;
  uStack_b0 = 0;
  puStack_100 = &uStack_108;
  uStack_108 = 0;
  uStack_f8 = 0x3032000000;
  pcStack_f0 = FUN_106931e50;
  uStack_e8 = 0x106931e60;
  uStack_e0 = 0;
  puStack_120 = &uStack_128;
  uStack_128 = 0;
  uStack_118 = 0x2020000000;
  uStack_110 = 7;
  func_0x00010c0c0cc0(param_3);
  lVar1 = puStack_a0[5];
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = puStack_d0[5];
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      _dispatch_group_enter(param_5);
      puVar2 = PTR_PTR_1126b58e0;
      _objc_opt_new(PTR_PTR_1126b58e0);
      func_0x00010c2bae20();
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2a8ea0(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x68);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010bf21f60(puVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c11de00(uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_4);
      _objc_retain(param_5);
      func_0x00010bfa5420(uVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(puVar4);
      _objc_release(uVar3);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_release(puVar2);
      uVar3 = 1;
      goto LAB_106931d88;
    }
  }
  uVar3 = 0;
LAB_106931d88:
  __Block_object_dispose(&uStack_128,8);
  __Block_object_dispose(&uStack_108,8);
  _objc_release(uStack_e0);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 106931e50; end: 106931e67;  */

void FUN_106931e50(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106931e68; end: 106931f3b;  */

void FUN_106931e68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = param_5;
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106931f3c; end: 106931f43;  */

void FUN_106931f3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106931f44; end: 106931ff3; -[SCDiscoverBackgroundPrefetcher .cxx_destruct] */

void FUN_106931f44(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106931ff4; end: 1069320fb; -[SCDiscoverFeedPrefetchHandler initWithPrefetchers:preloadController:] */

undefined1 *
FUN_106931ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f3db8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar5 = param_3;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar5;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar5 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1069320fc; end: 1069322c7; -[SCDiscoverFeedPrefetchHandler didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_1069320fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = param_3;
  func_0x000108fcf358(param_3,param_5);
  if ((int)uVar2 == 0) {
    uVar2 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar2 == 0) goto LAB_106932268;
    uVar2 = *(undefined8 *)(param_1 + 8);
    puVar1 = auStack_88;
    _objc_copyWeak(puVar1,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_5);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_5);
    uVar2 = param_3;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1069322c8;
    puStack_68 = &UNK_110848218;
    puVar1 = auStack_50;
    _objc_copyWeak(puVar1,auStack_48);
    _objc_retain(param_3);
    uStack_60 = param_3;
    _objc_retain(param_5);
    uStack_58 = param_5;
    func_0x00010c0f7fc0(uVar2);
    _objc_release(uStack_58);
    uVar2 = uStack_60;
  }
  _objc_release(uVar2);
  _objc_destroyWeak(puVar1);
LAB_106932268:
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1069322c8; end: 10693232f;  */

void FUN_1069322c8(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be27000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106932330; end: 1069323ab; -[SCDiscoverFeedPrefetchHandler prefetchVisibleTilesInDiscoverFeedCollectionView:] */

void FUN_106932330(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c231e40();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    uVar3 = param_3;
    FUN_106935514(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c108280(param_1,param_2,uVar3);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069323ac; end: 10693248f; -[SCDiscoverFeedPrefetchHandler prefetchWithViewModelsBySection:] */

void FUN_1069323ac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_3);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0f7fc0(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106932490; end: 1069324c3;  */

void FUN_106932490(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be77840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069324c4; end: 1069325af; -[SCDiscoverFeedPrefetchHandler prefetchWithMixedCarouselStoryDataModels:numSnapsToPrefetch:] */

void FUN_1069324c4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_48,auStack_38);
    _objc_retain(param_3);
    uStack_40 = param_4;
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1069325b0; end: 1069325e7;  */

void FUN_1069325b0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be77820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069325e8; end: 10693279b; -[SCDiscoverFeedPrefetchHandler _prefetchWithViewModelsBySection:] */

void FUN_1069325e8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x27;
  long unaff_x28;
  undefined1 auStack_340 [8];
  undefined1 auStack_338 [8];
  undefined1 *puStack_330;
  undefined8 *puStack_328;
  undefined1 **ppuStack_320;
  code *pcStack_318;
  undefined8 uStack_310;
  long lStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  undefined8 uStack_218;
  long lStack_210;
  long lStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
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
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  puVar3 = &uStack_1b0;
  puVar4 = auStack_f0;
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar7 = *plStack_1a0;
    do {
      lVar8 = 0;
      do {
        if (*plStack_1a0 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x22 = param_3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        unaff_x23 = *(long *)(param_1 + 0x10);
        _objc_retain(unaff_x23);
        lVar6 = unaff_x23;
        func_0x00010bf52a60();
        if (lVar6 != 0) {
          unaff_x27 = *plStack_1e0;
          unaff_x24 = lVar6;
          do {
            unaff_x28 = 0;
            do {
              if (*plStack_1e0 != unaff_x27) {
                _objc_enumerationMutation(unaff_x23);
              }
              func_0x00010c107820(*(undefined8 *)(lStack_1e8 + unaff_x28 * 8));
              unaff_x28 = unaff_x28 + 1;
            } while (unaff_x24 != unaff_x28);
            unaff_x24 = unaff_x23;
            func_0x00010bf52a60();
          } while (unaff_x24 != 0);
        }
        _objc_release(unaff_x23);
        _objc_release(unaff_x22);
        lVar8 = lVar8 + 1;
      } while (lVar8 != lVar1);
      puVar3 = &uStack_1b0;
      puVar4 = auStack_f0;
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
  pcStack_1f8 = FUN_10693279c;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_240 = unaff_x28;
  lStack_238 = unaff_x27;
  lStack_230 = unaff_x24;
  lStack_228 = unaff_x23;
  lStack_220 = unaff_x22;
  uStack_218 = unaff_x21;
  lStack_210 = param_1;
  lStack_208 = param_3;
  puStack_200 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  lStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  plStack_300 = (long *)0x0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  lVar7 = *(long *)(lVar1 + 0x10);
  _objc_retain(lVar7);
  lVar1 = lVar7;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar8 = *plStack_300;
    do {
      lVar6 = 0;
      do {
        if (*plStack_300 != lVar8) {
          _objc_enumerationMutation(lVar7);
        }
        func_0x00010c107800(*(undefined8 *)(lStack_308 + lVar6 * 8));
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar7;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar7);
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  pcStack_318 = FUN_1069328b8;
  puStack_330 = puVar4;
  puStack_328 = puVar3;
  ppuStack_320 = &puStack_200;
  _objc_initWeak(auStack_338,puVar2);
  uVar5 = puVar2[1];
  _objc_copyWeak(auStack_340,auStack_338);
  func_0x00010c0f7fc0(uVar5);
  _objc_destroyWeak(auStack_340);
  _objc_destroyWeak(auStack_338);
  return;
}



/* Entry: 10693279c; end: 1069328b7; -[SCDiscoverFeedPrefetchHandler _prefetchWithStoryDataModels:numSnapsToPrefetch:] */

void FUN_10693279c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar3 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar4 = *plStack_110;
    do {
      lVar5 = 0;
      do {
        if (*plStack_110 != lVar4) {
          _objc_enumerationMutation(lVar3);
        }
        func_0x00010c107800(*(undefined8 *)(lStack_118 + lVar5 * 8));
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = lVar3;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar3);
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_1069328b8;
  uStack_140 = param_4;
  lStack_138 = param_3;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_initWeak(auStack_148,lVar1);
  uVar2 = *(undefined8 *)(lVar1 + 8);
  _objc_copyWeak(auStack_150,auStack_148);
  func_0x00010c0f7fc0(uVar2);
  _objc_destroyWeak(auStack_150);
  _objc_destroyWeak(auStack_148);
  return;
}



/* Entry: 1069328b8; end: 10693295f; -[SCDiscoverFeedPrefetchHandler stopPrefetching] */

void FUN_1069328b8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}


