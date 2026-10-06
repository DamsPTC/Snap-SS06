/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104e3a500; end: 104e3a60f; -[SCFavouritesManagementProfileSectionDataProvider .cxx_destruct] */

void FUN_104e3a500(long param_1)

{
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_destroyWeak(param_1 + 0xb8);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x88,0);
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



/* Entry: 104e3a610; end: 104e3a993; -[SCFavouritesManagmentPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e3a610(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
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
  
  lVar16 = param_1 + _DAT_1127142fc;
  lVar1 = lVar16;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x000108f4a1f0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar3 != 0) {
    puVar4 = PTR_PTR_1126b1160;
    _objc_alloc();
    lVar1 = param_1 + _DAT_112714300;
    _objc_loadWeakRetained();
    lVar5 = lVar1;
    func_0x00010c155c20();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010bded1c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + _DAT_112714304;
    _objc_loadWeakRetained();
    lVar7 = lVar2;
    func_0x00010bf81640();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_112714308;
    _objc_loadWeakRetained();
    lVar8 = lVar3;
    func_0x00010c08d400();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1 + _DAT_11271430c;
    _objc_loadWeakRetained();
    lVar10 = lVar9;
    func_0x00010c244d60();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1 + _DAT_112714310;
    _objc_loadWeakRetained();
    lVar12 = lVar11;
    func_0x00010bfe7580();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = param_1 + _DAT_112714314;
    _objc_loadWeakRetained();
    lVar15 = lVar14;
    func_0x00010c08d500();
    _objc_retainAutoreleasedReturnValue();
    _objc_loadWeakRetained();
    lVar17 = lVar16;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = param_1 + _DAT_112714318;
    _objc_loadWeakRetained();
    lVar19 = lVar18;
    func_0x00010bf8b8e0();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = param_1 + _DAT_11271431c;
    _objc_loadWeakRetained();
    lVar21 = lVar20;
    func_0x00010bfe7760();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = param_1 + _DAT_112714320;
    _objc_loadWeakRetained();
    lVar23 = lVar22;
    func_0x00010c258480();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = param_1 + _DAT_112714324;
    _objc_loadWeakRetained();
    lVar25 = lVar24;
    func_0x00010bfe7720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c042fe0(puVar4,param_2,lVar5,lVar6,lVar7,lVar8,lVar10,lVar13,lVar15,lVar17,lVar19,
                        lVar21,lVar23,lVar25);
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
    _objc_release(lVar3);
    _objc_release(lVar7);
    _objc_release(lVar2);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar1);
    param_1 = param_1 + _DAT_112714328;
    _objc_loadWeakRetained(param_1);
    lVar16 = param_1;
    func_0x00010c1018e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c125b60();
    _objc_release(lVar16);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  return;
}



/* Entry: 104e3a994; end: 104e3b0db; -[SCFavouritesManagmentPluginEntryPoint _createDiscoverFeedExpandedStoryQueryCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e3a994(long param_1)

{
  undefined *puVar1;
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
  undefined *puVar37;
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
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_initWeak(auStack_70,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1168;
  _objc_alloc();
  lVar3 = param_1 + _DAT_11271432c;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112714330;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c0cef00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_1127142fc;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_112714334;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010c273160();
  _objc_retainAutoreleasedReturnValue();
  lVar57 = (long)_DAT_112714338;
  lVar11 = param_1 + lVar57;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_11271433c;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010c08d4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar55 = (long)_DAT_112714308;
  lVar15 = param_1 + lVar55;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  lVar55 = param_1 + lVar55;
  _objc_loadWeakRetained();
  lVar17 = lVar55;
  func_0x00010c08d440();
  _objc_retainAutoreleasedReturnValue();
  lVar56 = (long)_DAT_112714340;
  lVar18 = param_1 + lVar56;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010c136300();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + _DAT_112714324;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + _DAT_112714344;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010bfb7c20();
  _objc_retainAutoreleasedReturnValue();
  lVar57 = param_1 + lVar57;
  _objc_loadWeakRetained();
  lVar24 = lVar57;
  func_0x00010c08d920();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + _DAT_112714348;
  _objc_loadWeakRetained();
  lVar26 = lVar25;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1 + _DAT_11271434c;
  _objc_loadWeakRetained();
  lVar28 = lVar27;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1 + _DAT_112714314;
  _objc_loadWeakRetained();
  lVar30 = lVar29;
  func_0x00010c08d500();
  _objc_retainAutoreleasedReturnValue();
  lVar58 = (long)_DAT_112714350;
  lVar31 = param_1 + lVar58;
  _objc_loadWeakRetained();
  lVar32 = lVar31;
  func_0x00010c127bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar58 = param_1 + lVar58;
  _objc_loadWeakRetained();
  lVar33 = lVar58;
  func_0x00010bf1a840();
  _objc_retainAutoreleasedReturnValue();
  lVar56 = param_1 + lVar56;
  _objc_loadWeakRetained();
  lVar34 = lVar56;
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1 + _DAT_11271430c;
  _objc_loadWeakRetained();
  lVar36 = lVar35;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  puVar37 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = param_1 + _DAT_112714320;
  _objc_loadWeakRetained();
  lVar39 = lVar38;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  lVar40 = param_1 + _DAT_112714354;
  _objc_loadWeakRetained();
  lVar41 = lVar40;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = param_1 + _DAT_112714358;
  _objc_loadWeakRetained();
  lVar43 = lVar42;
  func_0x00010bf3cb80();
  _objc_retainAutoreleasedReturnValue();
  lVar44 = param_1 + _DAT_11271435c;
  _objc_loadWeakRetained();
  lVar45 = lVar44;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  lVar46 = param_1 + _DAT_112714360;
  _objc_loadWeakRetained();
  lVar47 = lVar46;
  func_0x00010c14c1e0();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = param_1 + _DAT_112714364;
  _objc_loadWeakRetained();
  lVar49 = lVar48;
  func_0x00010c112f80();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = param_1 + _DAT_112714368;
  _objc_loadWeakRetained();
  lVar51 = lVar50;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar52 = param_1 + _DAT_11271436c;
  _objc_loadWeakRetained();
  lVar53 = lVar52;
  func_0x00010bfcdf20();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112714370;
  _objc_loadWeakRetained();
  lVar54 = param_1;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05d8a0();
  _objc_release(lVar54);
  _objc_release(param_1);
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
  _objc_release(puVar37);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar56);
  _objc_release(lVar33);
  _objc_release(lVar58);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar57);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar55);
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
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104e3b0dc; end: 104e3b11b;  */

void FUN_104e3b0dc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be02020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104e3b11c; end: 104e3b127;  */

undefined * FUN_104e3b11c(void)

{
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 104e3b128; end: 104e3b1a3; -[SCFavouritesManagmentPluginEntryPoint _discoverCrashLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e3b128(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b1170;
  _objc_alloc(PTR_PTR_1126b1170);
  param_1 = param_1 + _DAT_112714374;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf53fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c006480(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e3b1a4; end: 104e3b343; -[SCFavouritesManagmentPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e3b1a4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112714374);
  _objc_destroyWeak(param_1 + _DAT_11271436c);
  _objc_destroyWeak(param_1 + _DAT_112714368);
  _objc_destroyWeak(param_1 + _DAT_112714364);
  _objc_destroyWeak(param_1 + _DAT_112714360);
  _objc_destroyWeak(param_1 + _DAT_11271435c);
  _objc_destroyWeak(param_1 + _DAT_112714358);
  _objc_destroyWeak(param_1 + _DAT_112714354);
  _objc_destroyWeak(param_1 + _DAT_112714320);
  _objc_destroyWeak(param_1 + _DAT_112714378);
  _objc_destroyWeak(param_1 + _DAT_112714318);
  _objc_destroyWeak(param_1 + _DAT_11271431c);
  _objc_destroyWeak(param_1 + _DAT_112714310);
  _objc_destroyWeak(param_1 + _DAT_112714330);
  _objc_destroyWeak(param_1 + _DAT_11271434c);
  _objc_destroyWeak(param_1 + _DAT_112714348);
  _objc_destroyWeak(param_1 + _DAT_112714344);
  _objc_destroyWeak(param_1 + _DAT_112714324);
  _objc_destroyWeak(param_1 + _DAT_112714304);
  _objc_destroyWeak(param_1 + _DAT_112714308);
  _objc_destroyWeak(param_1 + _DAT_112714338);
  _objc_destroyWeak(param_1 + _DAT_112714334);
  _objc_destroyWeak(param_1 + _DAT_1127142fc);
  _objc_destroyWeak(param_1 + _DAT_112714370);
  _objc_destroyWeak(param_1 + _DAT_112714350);
  _objc_destroyWeak(param_1 + _DAT_11271430c);
  _objc_destroyWeak(param_1 + _DAT_112714340);
  _objc_destroyWeak(param_1 + _DAT_112714314);
  _objc_destroyWeak(param_1 + _DAT_112714328);
  _objc_destroyWeak(param_1 + _DAT_11271433c);
  _objc_destroyWeak(param_1 + _DAT_112714300);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271432c);
  return;
}



/* Entry: 104e3b344; end: 104e3b7ab; -[SCSpotlightManagementPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e3b344(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
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
  
  lVar1 = param_1 + _DAT_11271437c;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR_DAT_1126a4e78;
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00010010fab4(lVar3,puVar4);
  lVar1 = lVar3;
  if ((int)lVar2 == 0) {
    lVar1 = 0;
  }
  _objc_retain();
  _objc_release(lVar3);
  puVar4 = PTR_PTR_1126b1178;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112714380;
  _objc_loadWeakRetained();
  lVar5 = param_1 + _DAT_112714384;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c0ee400();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_112714388;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c258d80();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_112714398;
  _objc_loadWeakRetained();
  lVar11 = param_1 + _DAT_1127143a0;
  _objc_loadWeakRetained();
  lVar12 = param_1 + _DAT_1127143a4;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010c0d4b00();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_1127143a8;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010c24b620();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  (**(code **)(lVar16 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_1127143ac;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010c08f380();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + _DAT_1127143b0;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + _DAT_1127143b4;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + _DAT_1127143b8;
  _objc_loadWeakRetained();
  lVar26 = lVar25;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1 + _DAT_1127143bc;
  _objc_loadWeakRetained();
  lVar28 = lVar27;
  func_0x00010c273160();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1 + _DAT_1127143c0;
  _objc_loadWeakRetained();
  lVar30 = lVar29;
  func_0x00010c0ee220();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_1 + _DAT_1127143c4;
  _objc_loadWeakRetained();
  lVar32 = lVar31;
  func_0x00010c2932e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c041020();
  _objc_release(lVar1);
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
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_1127143cc;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 104e3b7ac; end: 104e3b8db; -[SCSpotlightManagementPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e3b7ac(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127143c8,0);
  _objc_destroyWeak(param_1 + _DAT_1127143a0);
  _objc_storeStrong(param_1 + _DAT_11271439c,0);
  _objc_destroyWeak(param_1 + _DAT_112714398);
  _objc_storeStrong(param_1 + _DAT_112714394,0);
  _objc_storeStrong(param_1 + _DAT_112714390,0);
  _objc_storeStrong(param_1 + _DAT_11271438c,0);
  _objc_destroyWeak(param_1 + _DAT_1127143b0);
  _objc_destroyWeak(param_1 + _DAT_1127143a8);
  _objc_destroyWeak(param_1 + _DAT_11271437c);
  _objc_destroyWeak(param_1 + _DAT_112714388);
  _objc_destroyWeak(param_1 + _DAT_1127143a4);
  _objc_destroyWeak(param_1 + _DAT_112714384);
  _objc_destroyWeak(param_1 + _DAT_112714380);
  _objc_destroyWeak(param_1 + _DAT_1127143cc);
  _objc_destroyWeak(param_1 + _DAT_1127143ac);
  _objc_destroyWeak(param_1 + _DAT_1127143b4);
  _objc_destroyWeak(param_1 + _DAT_1127143b8);
  _objc_destroyWeak(param_1 + _DAT_1127143bc);
  _objc_destroyWeak(param_1 + _DAT_1127143c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127143c4);
  return;
}



/* Entry: 104e3b8dc; end: 104e3bc37; -[SCSpotlightManagementProfileSectionCreator initWithSCUserInfoServices:dataSource:thumbnailCoordinator:spotlightManagementScopeExposer:saveStoryScopeExposer:deleteStorySnapScopeExposer:deleteStorySnapScopeServices:storyShareScopeExposer:storyShareScopeServices:spotlightNavigationDelegate:myStoriesDataCoordinator:spotlightPresenter:lazyLegacyProfileTooltipsService:circumstanceEngine:userSession:valdiRuntimeProvider:snapTokenProvider:ourStoriesAttributionManager:userProfileIdProvider:profileOnboardingScopeExposer:] */

undefined8 *
FUN_104e3b8dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  puStack_70 = PTR_PTR_1126e4730;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c292ae0();
    puVar1[9] = puVar3;
    _objc_release(puVar2);
    _objc_retain(param_3);
    uVar4 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar4 = puVar1[6];
    puVar1[6] = param_4;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar4 = puVar1[7];
    puVar1[7] = param_5;
    _objc_release(uVar4);
    _objc_retain(param_15);
    uVar4 = puVar1[8];
    puVar1[8] = param_15;
    _objc_release(uVar4);
    _objc_retain(param_16);
    uVar4 = puVar1[3];
    puVar1[3] = param_16;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126b1180;
    _objc_alloc();
    func_0x00010c04b320();
    uVar4 = puVar1[5];
    puVar1[5] = puVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
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



/* Entry: 104e3bc38; end: 104e3bc3f; -[SCSpotlightManagementProfileSectionCreator order] */

undefined8 FUN_104e3bc38(void)

{
  return 0x1b;
}



/* Entry: 104e3bc40; end: 104e3bd2f; -[SCSpotlightManagementProfileSectionCreator section] */

void FUN_104e3bc40(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  puVar8 = *(undefined **)(param_1 + 0x50);
  if (puVar8 == (undefined *)0x0) {
    lVar4 = param_1;
    func_0x00010bdf45e0(param_1,param_2,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126b1108;
    _objc_alloc();
    func_0x00010c04f820();
    puVar5 = PTR_PTR_1126b1188;
    _objc_alloc(PTR_PTR_1126b1188);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    puVar6 = PTR_PTR_1126b1130;
    func_0x00010c070420(PTR_PTR_1126b1130,param_2,*(undefined8 *)(param_1 + 0x18));
    func_0x00010c0091e0(puVar5,param_2,uVar7,uVar2,uVar1,uVar3,puVar6);
    func_0x00010c1f9240(puVar8,param_2,puVar5);
    _objc_retain(puVar8);
    uVar7 = *(undefined8 *)(param_1 + 0x50);
    *(undefined **)(param_1 + 0x50) = puVar8;
    _objc_release(uVar7);
    _objc_release(puVar5);
    _objc_release(lVar4);
  }
  else {
    _objc_retain(puVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 104e3bd30; end: 104e3bd57; -[SCSpotlightManagementProfileSectionCreator actionHandler] */

void FUN_104e3bd30(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e3bd58; end: 104e3bd6f; -[SCSpotlightManagementProfileSectionCreator lifecycleAnnouncer] */

void FUN_104e3bd58(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e3bd70; end: 104e3bd7b; -[SCSpotlightManagementProfileSectionCreator setLifecycleAnnouncer:] */

void FUN_104e3bd70(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 104e3bd7c; end: 104e3be23; -[SCSpotlightManagementProfileSectionCreator _createSupplementaryViewProviderWithActionHandler:] */

void FUN_104e3bd7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x0001005929c0();
  if ((uVar3 & 1) == 0) {
    func_0x000108f580cc();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000108f581d4();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar1 = uVar3;
  func_0x000108f728c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0c00;
  _objc_alloc(PTR_PTR_1126b0c00);
  func_0x00010c043040();
  func_0x00010c161980();
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104e3be24; end: 104e3bea3; -[SCSpotlightManagementProfileSectionCreator .cxx_destruct] */

void FUN_104e3be24(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 104e3bea4; end: 104e3c5d7; -[SCFavouritesManagementProfileCarouselCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104e3bea4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined *puVar38;
  undefined8 uVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  undefined8 uStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
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
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_f8 = PTR_PTR_1126e4738;
  puVar1 = &uStack_100;
  uStack_100 = param_5;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  lVar3 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    lVar42 = (long)_DAT_1127143f8;
    uVar39 = *(undefined8 *)((long)puVar1 + lVar42);
    *(undefined **)((long)puVar1 + lVar42) = puVar2;
    _objc_release(uVar39);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar42));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar42));
    _objc_release(puVar2);
    uVar39 = *(undefined8 *)((long)puVar1 + lVar42);
    func_0x00010c08c0e0(uVar39);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4014000000000000);
    _objc_release(uVar39);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_alloc_init();
    lVar40 = (long)_DAT_1127143fc;
    uVar39 = *(undefined8 *)((long)puVar1 + lVar40);
    *(undefined **)((long)puVar1 + lVar40) = puVar2;
    _objc_release(uVar39);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar40));
    func_0x00010c16e060(*(undefined8 *)((long)puVar1 + lVar40));
    func_0x00010c190b80(*(undefined8 *)((long)puVar1 + lVar40));
    func_0x00010c166c00(*(undefined8 *)((long)puVar1 + lVar40));
    func_0x00010c207380(0x4014000000000000,*(undefined8 *)((long)puVar1 + lVar40));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar42));
    puVar2 = PTR_PTR_1126aea58;
    _objc_alloc_init();
    lVar41 = (long)_DAT_112714400;
    uVar39 = *(undefined8 *)((long)puVar1 + lVar41);
    *(undefined **)((long)puVar1 + lVar41) = puVar2;
    _objc_release(uVar39);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar41));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar41));
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar41));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar41));
    _objc_release(puVar2);
    func_0x00010c1bdb00(*(undefined8 *)((long)puVar1 + lVar41));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar41));
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar41));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar42));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar3 = *(long *)((long)puVar1 + lVar42);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_f0 = lVar5;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar42);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar39 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_e8 = uVar39;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar42);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_e0 = uVar10;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar42);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_d8 = uVar13;
    uVar14 = *(undefined8 *)((long)puVar1 + lVar40);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)((long)puVar1 + lVar42);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar14;
    func_0x00010bf493c0(0x4014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_d0 = uVar16;
    uVar17 = *(undefined8 *)((long)puVar1 + lVar40);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)((long)puVar1 + lVar42);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar17;
    func_0x00010bf493c0(0x4014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = uVar19;
    uVar20 = *(undefined8 *)((long)puVar1 + lVar40);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)((long)puVar1 + lVar42);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar20;
    func_0x00010bf493c0(0xc014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_c0 = uVar22;
    uVar23 = *(undefined8 *)((long)puVar1 + lVar40);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = *(undefined8 *)((long)puVar1 + lVar42);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar23;
    func_0x00010bf493c0(0xc014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = uVar25;
    uVar26 = *(undefined8 *)((long)puVar1 + lVar41);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = *(undefined8 *)((long)puVar1 + lVar42);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar28 = uVar26;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar28;
    uVar29 = *(undefined8 *)((long)puVar1 + lVar41);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar30 = *(undefined8 *)((long)puVar1 + lVar42);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar31 = uVar29;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uVar31;
    uVar32 = *(undefined8 *)((long)puVar1 + lVar41);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar33 = *(undefined8 *)((long)puVar1 + lVar42);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar34 = uVar32;
    func_0x00010bf49480(0x4014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar34;
    uVar35 = *(undefined8 *)((long)puVar1 + lVar41);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar36 = *(undefined8 *)((long)puVar1 + lVar42);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar37 = uVar35;
    func_0x00010bf49520(0xc014000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar38 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_98 = uVar37;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar38);
    _objc_release(uVar37);
    _objc_release(uVar36);
    _objc_release(uVar35);
    _objc_release(uVar34);
    _objc_release(uVar33);
    _objc_release(uVar32);
    _objc_release(uVar31);
    _objc_release(uVar30);
    _objc_release(uVar29);
    _objc_release(uVar28);
    _objc_release(uVar27);
    _objc_release(uVar26);
    _objc_release(uVar25);
    _objc_release(uVar24);
    _objc_release(uVar23);
    _objc_release(uVar22);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(puVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(uVar39);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(lVar5);
    _objc_release(puVar4);
    _objc_release(lVar3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar1 = (undefined8 *)PTR_PTR_1126b1190;
  _objc_alloc(PTR_PTR_1126b1190);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  lVar5 = lVar3 + _DAT_112714404;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c1aa200(puVar1);
  _objc_release(lVar5);
  lVar3 = lVar3 + _DAT_112714408;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c1aaa20(puVar1);
  _objc_release(lVar3);
  func_0x00010c18b5e0(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return puVar1;
}



/* Entry: 104e3c5d8; end: 104e3c687; -[SCFavouritesManagementProfileCarouselCollectionViewCell _createSnapCellView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e3c5d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b1190;
  _objc_alloc(PTR_PTR_1126b1190);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  lVar2 = param_1 + _DAT_112714404;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c1aa200(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_1 + _DAT_112714408;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c1aaa20(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  func_0x00010c18b5e0(puVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e3c688; end: 104e3c8ff; -[SCFavouritesManagementProfileCarouselCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e3c688(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar13 = (long)_DAT_1127143fc;
  lVar3 = *(long *)(param_1 + lVar13);
  func_0x00010bf09ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  while (PTR__OBJC_CLASS___NSArray_1126ae530 = puVar4, lVar11 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar3);
      }
      uVar9 = *(undefined8 *)(lVar12 * 8);
      func_0x00010c12b280(*(undefined8 *)(param_1 + lVar13));
      func_0x00010c12c960(uVar9);
      lVar12 = lVar12 + 1;
    } while (lVar11 != lVar12);
    lVar11 = lVar3;
    func_0x00010bf52a60();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  }
  _objc_retain(param_3);
  _objc_opt_class(puVar4);
  uVar10 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar4);
  uVar1 = param_3;
  if ((uVar10 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar10 = uVar1;
  func_0x00010bf529e0();
  if (uVar10 == 0) {
    func_0x00010602984c();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = (long)_DAT_112714400;
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar11));
    _objc_release(uVar10);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar11));
  }
  else {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112714400));
    uVar10 = 0;
    do {
      lVar11 = param_1;
      func_0x00010bdf3620(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar13));
      uVar5 = uVar1;
      func_0x00010bf529e0();
      if (uVar10 < uVar5) {
        uVar6 = uVar1;
        func_0x00010c14da60();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126b1128;
        _objc_opt_class(PTR_PTR_1126b1128);
        uVar7 = uVar6;
        _objc_opt_isKindOfClass(uVar6,puVar4);
        uVar5 = uVar6;
        if ((uVar7 & 1) == 0) {
          uVar5 = 0;
        }
        _objc_retain(uVar5);
        _objc_release(uVar6);
        func_0x00010c2226c0(lVar11);
        _objc_release(uVar5);
      }
      _objc_release(lVar11);
      uVar10 = uVar10 + 1;
    } while (uVar10 != 5);
  }
  _objc_release(uVar1);
  _objc_release(lVar3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 104e3c900; end: 104e3c927; +[SCFavouritesManagementProfileCarouselCollectionViewCell sizeWithViewModel:constrainedToSize:] */

void FUN_104e3c900(void)

{
  return;
}



/* Entry: 104e3c928; end: 104e3c93f; -[SCFavouritesManagementProfileCarouselCollectionViewCell didTapSnapCellView:actionModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e3c928(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271440c),
             PTR_s_handleActionWithSender_actionMod_1125d19f8,param_1,param_4,param_3);
  return;
}



/* Entry: 104e3c940; end: 104e3c957; -[SCFavouritesManagementProfileCarouselCollectionViewCell didLongPressSnapCellView:actionModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e3c940(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271440c),
             PTR_s_handleActionWithSender_actionMod_1125d19f8,param_1,param_4,param_3);
  return;
}



/* Entry: 104e3c958; end: 104e3c967; -[SCFavouritesManagementProfileCarouselCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104e3c958(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112714410);
}



/* Entry: 104e3c968; end: 104e3c987; -[SCFavouritesManagementProfileCarouselCollectionViewCell imageDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e3c968(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112714404);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e3c988; end: 104e3c99b; -[SCFavouritesManagementProfileCarouselCollectionViewCell setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e3c988(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112714404,param_3);
  return;
}



/* Entry: 104e3c99c; end: 104e3c9ab; -[SCFavouritesManagementProfileCarouselCollectionViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104e3c99c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271440c);
}



/* Entry: 104e3c9ac; end: 104e3c9eb; -[SCFavouritesManagementProfileCarouselCollectionViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e3c9ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271440c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e3c9ec; end: 104e3ca0b; -[SCFavouritesManagementProfileCarouselCollectionViewCell imageSourceProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e3c9ec(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112714408);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e3ca0c; end: 104e3ca1f; -[SCFavouritesManagementProfileCarouselCollectionViewCell setImageSourceProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e3ca0c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112714408,param_3);
  return;
}



/* Entry: 104e3ca20; end: 104e3caa7; -[SCFavouritesManagementProfileCarouselCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e3ca20(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112714408);
  _objc_storeStrong(param_1 + _DAT_11271440c,0);
  _objc_destroyWeak(param_1 + _DAT_112714404);
  _objc_storeStrong(param_1 + _DAT_112714410,0);
  _objc_storeStrong(param_1 + _DAT_1127143f8,0);
  _objc_storeStrong(param_1 + _DAT_112714400,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127143fc,0);
  return;
}



/* Entry: 104e3caa8; end: 104e3d103; -[SCFavouritesManagementProfileSectionSnapCellView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104e3caa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined *unaff_x20;
  long lVar21;
  long unaff_x21;
  long unaff_x22;
  long lVar22;
  undefined *unaff_x23;
  undefined **unaff_x24;
  long unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined *unaff_x28;
  long lVar23;
  undefined1 auStack_5d8 [8];
  undefined *puStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined *puStack_5b8;
  undefined1 auStack_5b0 [8];
  undefined *puStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined *puStack_590;
  undefined1 auStack_588 [8];
  undefined1 auStack_580 [8];
  undefined *puStack_578;
  undefined8 uStack_570;
  code *pcStack_568;
  undefined *puStack_560;
  undefined8 *puStack_558;
  undefined *puStack_550;
  undefined8 uStack_548;
  code *pcStack_540;
  undefined *puStack_538;
  undefined8 *puStack_530;
  undefined8 *puStack_528;
  undefined *puStack_520;
  undefined8 uStack_518;
  code *pcStack_510;
  undefined *puStack_508;
  undefined8 *puStack_500;
  undefined8 uStack_4f8;
  undefined8 *puStack_4f0;
  undefined8 uStack_4e8;
  code *pcStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 *puStack_4c0;
  undefined8 uStack_4b8;
  code *pcStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 *puStack_490;
  undefined8 uStack_488;
  code *pcStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 *puStack_460;
  undefined8 uStack_458;
  code *pcStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 *puStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined1 **ppuStack_3d0;
  code *pcStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 *puStack_218;
  undefined *puStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined **ppuStack_120;
  undefined *puStack_118;
  long lStack_110;
  long lStack_108;
  undefined *puStack_100;
  undefined8 *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b0 = PTR_PTR_1126e4740;
  puVar1 = &uStack_b8;
  uStack_b8 = param_5;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar2 = (undefined *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    lVar22 = (long)_DAT_112714414;
    uVar20 = *(undefined8 *)((long)puVar1 + lVar22);
    *(undefined **)((long)puVar1 + lVar22) = puVar2;
    _objc_release(uVar20);
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar22));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar22));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc();
    func_0x00010c050900();
    func_0x00010c178280();
    func_0x00010c1c8340(0x3fd999999999999a,puVar2);
    puStack_c0 = puVar2;
    func_0x00010bef9040(*(undefined8 *)((long)puVar1 + lVar22));
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    puStack_c8 = puVar2;
    func_0x00010c178280();
    func_0x00010c1374a0(puVar2);
    lStack_d0 = lVar22;
    func_0x00010bef9040(*(undefined8 *)((long)puVar1 + lVar22));
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    lVar21 = (long)_DAT_112714418;
    uVar20 = *(undefined8 *)((long)puVar1 + lVar21);
    *(undefined **)((long)puVar1 + lVar21) = puVar2;
    _objc_release(uVar20);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar21));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar21));
    uVar20 = *(undefined8 *)((long)puVar1 + lVar21);
    func_0x00010c08c0e0(uVar20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4014000000000000);
    _objc_release(uVar20);
    uVar20 = *(undefined8 *)((long)puVar1 + lVar21);
    func_0x00010c08c0e0(uVar20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar20);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14cfc0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)((long)puVar1 + lVar21));
    _objc_release(puVar2);
    _objc_release(puVar3);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar22));
    puVar2 = PTR_PTR_1126b1198;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar21 = (long)_DAT_11271441c;
    uVar20 = *(undefined8 *)((long)puVar1 + lVar21);
    *(undefined **)((long)puVar1 + lVar21) = puVar2;
    _objc_release(uVar20);
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar21));
    uVar20 = *(undefined8 *)((long)puVar1 + lVar21);
    func_0x00010bfcd9c0(uVar20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bff00();
    _objc_release(uVar20);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
    puStack_d8 = puVar2;
    func_0x00010bf414e0(0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_a8 = puVar3;
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = puVar4;
    func_0x00010bf414e0(0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    unaff_x26 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_a0 = puVar3;
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
    unaff_x27 = unaff_x26;
    func_0x00010bf414e0(0x3fe199999999999a);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = unaff_x27;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    unaff_x28 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_98 = puVar3;
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = unaff_x28;
    func_0x00010bf414e0(0x3feae147ae147ae1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)((long)puVar1 + lVar21);
    func_0x00010bfcd9c0(uVar20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60();
    _objc_release(uVar20);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(unaff_x28);
    _objc_release(unaff_x27);
    _objc_release(unaff_x26);
    _objc_release(puVar4);
    _objc_release(puStack_e0);
    _objc_release(puVar2);
    _objc_release(puStack_d8);
    unaff_x25 = lStack_d0;
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lStack_d0));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar21));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar21));
    unaff_x24 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    unaff_x23 = &DAT_112714414;
    unaff_x22 = (long)_DAT_112714420;
    uVar20 = *(undefined8 *)((long)puVar1 + unaff_x22);
    *(undefined **)((long)puVar1 + unaff_x22) = puVar2;
    _objc_release(uVar20);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + unaff_x22));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + unaff_x22));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + unaff_x22));
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)((long)puVar1 + unaff_x22));
    _objc_release(puVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010bf414e0(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + unaff_x22));
    _objc_release(puVar2);
    _objc_release(puVar3);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + unaff_x25));
    puVar2 = PTR_PTR_1126aeff0;
    _objc_alloc();
    func_0x00010bfffb60();
    lVar21 = (long)_DAT_112714424;
    uVar20 = *(undefined8 *)((long)puVar1 + lVar21);
    *(undefined **)((long)puVar1 + lVar21) = puVar2;
    _objc_release(uVar20);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar21));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar21));
    func_0x00010c1a8560(*(undefined8 *)((long)puVar1 + lVar21));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + unaff_x25));
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    unaff_x21 = (long)_DAT_112714428;
    uVar20 = *(undefined8 *)((long)puVar1 + unaff_x21);
    *(undefined **)((long)puVar1 + unaff_x21) = puVar2;
    _objc_release(uVar20);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + unaff_x21));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + unaff_x21));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + unaff_x21));
    unaff_x20 = PTR_PTR_1126b0c40;
    func_0x00010bfe7b00(0x4038000000000000,0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)((long)puVar1 + unaff_x21));
    _objc_release(unaff_x20);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + unaff_x25));
    func_0x00010beabac0(puVar1);
    _objc_release(puStack_c8);
    puVar2 = puStack_c0;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_104e3d104;
  lStack_150 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_2c8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar22 = (long)_DAT_112714414;
  puVar7 = *(undefined8 **)(puVar2 + lVar22);
  puStack_140 = unaff_x28;
  puStack_138 = unaff_x27;
  puStack_130 = unaff_x26;
  lStack_128 = unaff_x25;
  ppuStack_120 = unaff_x24;
  puStack_118 = unaff_x23;
  lStack_110 = unaff_x22;
  lStack_108 = unaff_x21;
  puStack_100 = unaff_x20;
  puStack_f8 = puVar1;
  puStack_f0 = &stack0xfffffffffffffff0;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  puStack_208 = puVar7;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puStack_210 = puVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar2 + lVar22);
  puStack_218 = puVar7;
  puStack_200 = puVar7;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  uStack_220 = uVar20;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_228 = puVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(puVar2 + lVar22);
  uStack_230 = uVar20;
  uStack_1f8 = uVar20;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  uStack_238 = uVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puStack_240 = puVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar2 + lVar22);
  uStack_248 = uVar8;
  uStack_1f0 = uVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  uStack_250 = uVar20;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_258 = puVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = (long)_DAT_112714418;
  uVar8 = *(undefined8 *)(puVar2 + lVar21);
  uStack_260 = uVar20;
  uStack_1e8 = uVar20;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar2 + lVar22);
  uStack_268 = uVar8;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_270 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(puVar2 + lVar21);
  uStack_278 = uVar8;
  uStack_1e0 = uVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar2 + lVar22);
  uStack_280 = uVar9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_288 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(puVar2 + lVar21);
  uStack_290 = uVar9;
  uStack_1d8 = uVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar2 + lVar22);
  uStack_298 = uVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_2a0 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(puVar2 + lVar21);
  uStack_2a8 = uVar8;
  uStack_1d0 = uVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar2 + lVar22);
  uStack_2b0 = uVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_2b8 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = (long)_DAT_11271441c;
  uVar8 = *(undefined8 *)(puVar2 + lVar21);
  uStack_2c0 = uVar9;
  uStack_1c8 = uVar9;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar2 + lVar22);
  uStack_2d0 = uVar8;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_2d8 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(puVar2 + lVar21);
  uStack_2e0 = uVar8;
  uStack_1c0 = uVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar2 + lVar22);
  uStack_2e8 = uVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_2f0 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(puVar2 + lVar21);
  uStack_2f8 = uVar9;
  uStack_1b8 = uVar9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar2 + lVar22);
  uStack_300 = uVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_308 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(puVar2 + lVar21);
  uStack_310 = uVar8;
  uStack_1b0 = uVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar2 + lVar22);
  uStack_318 = uVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_320 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = (long)_DAT_112714420;
  uVar8 = *(undefined8 *)(puVar2 + lVar21);
  uStack_328 = uVar9;
  uStack_1a8 = uVar9;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar2 + lVar22);
  uStack_330 = uVar8;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_338 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(puVar2 + lVar21);
  uStack_340 = uVar8;
  uStack_1a0 = uVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar2 + lVar22);
  uStack_348 = uVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_350 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(puVar2 + lVar21);
  uStack_358 = uVar9;
  uStack_198 = uVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar2 + lVar22);
  uStack_360 = uVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_368 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(puVar2 + lVar21);
  uStack_370 = uVar8;
  uStack_190 = uVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar2 + lVar22);
  uStack_378 = uVar9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_380 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = (long)_DAT_112714424;
  uVar8 = *(undefined8 *)(puVar2 + lVar21);
  uStack_388 = uVar9;
  uStack_188 = uVar9;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar2 + lVar22);
  uStack_390 = uVar8;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_398 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(puVar2 + lVar21);
  uStack_3a0 = uVar8;
  uStack_180 = uVar8;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar2 + lVar22);
  uStack_3a8 = uVar9;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uStack_3b0 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = (long)_DAT_112714428;
  uVar10 = *(undefined8 *)(puVar2 + lVar21);
  uStack_3b8 = uVar9;
  uStack_178 = uVar9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(puVar2 + lVar22);
  uStack_3c0 = uVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0x4014000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(puVar2 + lVar21);
  uStack_170 = uVar10;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(puVar2 + lVar22);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar12;
  func_0x00010bf493c0(0xc014000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(puVar2 + lVar21);
  uStack_168 = uVar9;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar14;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(puVar2 + lVar21);
  uStack_160 = uVar8;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar15;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_158 = uVar20;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar7;
  func_0x00010beef8c0(puStack_2c8);
  _objc_release(puVar7);
  _objc_release(uVar20);
  _objc_release(uVar15);
  _objc_release(uVar8);
  _objc_release(uVar14);
  _objc_release(uVar9);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar10);
  _objc_release(uVar11);
  _objc_release(uStack_3c0);
  _objc_release(uStack_3b8);
  _objc_release(uStack_3b0);
  _objc_release(uStack_3a8);
  _objc_release(uStack_3a0);
  _objc_release(uStack_398);
  _objc_release(uStack_390);
  _objc_release(uStack_388);
  _objc_release(uStack_380);
  _objc_release(uStack_378);
  _objc_release(uStack_370);
  _objc_release(uStack_368);
  _objc_release(uStack_360);
  _objc_release(uStack_358);
  _objc_release(uStack_350);
  _objc_release(uStack_348);
  _objc_release(uStack_340);
  _objc_release(uStack_338);
  _objc_release(uStack_330);
  _objc_release(uStack_328);
  _objc_release(uStack_320);
  _objc_release(uStack_318);
  _objc_release(uStack_310);
  _objc_release(uStack_308);
  _objc_release(uStack_300);
  _objc_release(uStack_2f8);
  _objc_release(uStack_2f0);
  _objc_release(uStack_2e8);
  _objc_release(uStack_2e0);
  _objc_release(uStack_2d8);
  _objc_release(uStack_2d0);
  _objc_release(uStack_2c0);
  _objc_release(uStack_2b8);
  _objc_release(uStack_2b0);
  _objc_release(uStack_2a8);
  _objc_release(uStack_2a0);
  _objc_release(uStack_298);
  _objc_release(uStack_290);
  _objc_release(uStack_288);
  _objc_release(uStack_280);
  _objc_release(uStack_278);
  _objc_release(uStack_270);
  _objc_release(uStack_268);
  _objc_release(uStack_260);
  _objc_release(puStack_258);
  _objc_release(uStack_250);
  _objc_release(uStack_248);
  _objc_release(puStack_240);
  _objc_release(uStack_238);
  _objc_release(uStack_230);
  _objc_release(puStack_228);
  _objc_release(uStack_220);
  _objc_release(puStack_218);
  _objc_release(puStack_210);
  puVar1 = puStack_208;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_150) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_3c8 = FUN_104e3d9d0;
  uStack_430 = param_3;
  uStack_428 = param_4;
  uStack_420 = uVar11;
  puStack_418 = puVar7;
  uStack_410 = uVar15;
  uStack_408 = uVar20;
  uStack_400 = uVar8;
  uStack_3f8 = uVar14;
  uStack_3f0 = uVar9;
  uStack_3e8 = uVar13;
  uStack_3e0 = uVar12;
  uStack_3d8 = uVar10;
  ppuStack_3d0 = &puStack_f0;
  _objc_retain(puVar19);
  func_0x00010beccd00(puVar1);
  lVar21 = (long)_DAT_11271442c;
  if (*(long *)((long)puVar1 + lVar21) != 0) {
    func_0x00010bf2dba0();
    uVar20 = *(undefined8 *)((long)puVar1 + lVar21);
    *(undefined8 *)((long)puVar1 + lVar21) = 0;
    _objc_release(uVar20);
  }
  puVar7 = puVar19;
  func_0x00010c26e120(puVar19);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_500 = &uStack_468;
  uStack_468 = 0;
  uStack_458 = 0x3032000000;
  pcStack_450 = FUN_104e3df5c;
  uStack_448 = 0x104e3df6c;
  uStack_440 = 0;
  puStack_530 = &uStack_498;
  uStack_498 = 0;
  uStack_488 = 0x3032000000;
  pcStack_480 = FUN_104e3df5c;
  uStack_478 = 0x104e3df6c;
  uStack_470 = 0;
  puStack_528 = &uStack_4c8;
  uStack_4c8 = 0;
  uStack_4b8 = 0x3032000000;
  pcStack_4b0 = FUN_104e3df5c;
  uStack_4a8 = 0x104e3df6c;
  uStack_4a0 = 0;
  puStack_558 = &uStack_4f8;
  uStack_4f8 = 0;
  uStack_4e8 = 0x3032000000;
  pcStack_4e0 = FUN_104e3df5c;
  uStack_4d8 = 0x104e3df6c;
  uStack_4d0 = 0;
  puStack_520 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_518 = 0xc2000000;
  pcStack_510 = FUN_104e3df74;
  puStack_508 = &UNK_110852f08;
  puStack_550 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_548 = 0xc2000000;
  pcStack_540 = FUN_104e3dfac;
  puStack_538 = &UNK_110852f38;
  puStack_578 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_570 = 0xc2000000;
  pcStack_568 = FUN_104e3e020;
  puStack_560 = &UNK_110852f68;
  puStack_4f0 = puStack_558;
  puStack_4c0 = puStack_528;
  puStack_490 = puStack_530;
  puStack_460 = puStack_500;
  func_0x00010c0beec0();
  if (puStack_4f0[5] == 0) {
    if (puStack_460[5] == 0) {
      lVar22 = puStack_490[5];
      func_0x00010c08fa60();
      if (lVar22 != 0) {
        puVar2 = PTR_PTR_1126b08a8;
        _objc_alloc(PTR_PTR_1126b08a8);
        puVar3 = PTR_PTR_1126b08b0;
        func_0x00010bf4cd80(PTR_PTR_1126b08b0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c003ac0(puVar2);
        _objc_release(puVar3);
        lVar22 = (long)puVar1 + (long)_DAT_112714434;
        _objc_loadWeakRetained();
        lVar16 = lVar22;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126b08b8;
        _objc_alloc(PTR_PTR_1126b08b8);
        func_0x00010c0295e0();
        lVar17 = lVar16;
        func_0x00010bf55f20();
        _objc_retainAutoreleasedReturnValue();
        lVar23 = (long)_DAT_112714438;
        uVar20 = *(undefined8 *)((long)puVar1 + lVar23);
        *(long *)((long)puVar1 + lVar23) = lVar17;
        _objc_release(uVar20);
        _objc_release(puVar3);
        _objc_release(lVar16);
        _objc_release(lVar22);
        puVar3 = PTR_PTR_1126aebf0;
        _objc_alloc(PTR_PTR_1126aebf0);
        puVar18 = puVar1;
        _objc_opt_class(puVar1);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c011b80(puVar3);
        _objc_release(puVar18);
        _objc_initWeak(auStack_580,puVar1);
        uVar20 = *(undefined8 *)((long)puVar1 + lVar23);
        _objc_copyWeak(auStack_5d8,auStack_580);
        _objc_retain(PTR___dispatch_main_q_11034be20);
        func_0x00010bfa78e0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = *(undefined8 *)((long)puVar1 + lVar21);
        *(undefined8 *)((long)puVar1 + lVar21) = uVar20;
        _objc_release(uVar8);
        _objc_release(PTR___dispatch_main_q_11034be20);
        _objc_destroyWeak(auStack_5d8);
        _objc_destroyWeak(auStack_580);
        _objc_release(puVar3);
        _objc_release(puVar2);
      }
    }
    else {
      _objc_initWeak(auStack_580,puVar1);
      lVar21 = (long)puVar1 + (long)_DAT_112714430;
      _objc_loadWeakRetained(lVar21);
      puStack_5a8 = puVar2;
      uStack_5a0 = 0xc2000000;
      uStack_598 = 0x104e3e058;
      puStack_590 = &UNK_110852f98;
      _objc_copyWeak(auStack_588,auStack_580);
      puStack_5d0 = puVar2;
      uStack_5c8 = 0xc2000000;
      uStack_5c0 = 0x104e3e0a0;
      puStack_5b8 = &UNK_110852fc8;
      _objc_copyWeak(auStack_5b0,auStack_580);
      _objc_retain(PTR___dispatch_main_q_11034be20);
      func_0x00010c09bc40(lVar21);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_release(lVar21);
      _objc_destroyWeak(auStack_5b0);
      _objc_destroyWeak(auStack_588);
      _objc_destroyWeak(auStack_580);
    }
  }
  puVar18 = puVar19;
  func_0x00010c268c60();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271443c);
  *(undefined8 **)((long)puVar1 + (long)_DAT_11271443c) = puVar18;
  _objc_release(uVar20);
  puVar18 = puVar19;
  func_0x00010c0b4d20();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)((long)puVar1 + (long)_DAT_112714440);
  *(undefined8 **)((long)puVar1 + (long)_DAT_112714440) = puVar18;
  _objc_release(uVar20);
  func_0x00010c07bea0(puVar19);
  func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + (long)_DAT_112714428));
  __Block_object_dispose(&uStack_4f8,8);
  _objc_release(uStack_4d0);
  __Block_object_dispose(&uStack_4c8,8);
  _objc_release(uStack_4a0);
  __Block_object_dispose(&uStack_498,8);
  _objc_release(uStack_470);
  __Block_object_dispose(&uStack_468,8);
  _objc_release(uStack_440);
  _objc_release(puVar7);
  _objc_release(puVar19);
  return puVar19;
}



/* Entry: 104e3d104; end: 104e3d9cf; -[SCFavouritesManagementProfileSectionSnapCellView _setupConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e3d104(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined *puVar60;
  undefined8 uVar61;
  long lVar62;
  undefined *puVar63;
  undefined *puVar64;
  undefined *puVar65;
  long lVar66;
  undefined8 uVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  long lVar71;
  undefined1 auStack_4f8 [8];
  undefined *puStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined *puStack_4d8;
  undefined1 auStack_4d0 [8];
  undefined *puStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined *puStack_4b0;
  undefined1 auStack_4a8 [8];
  undefined1 auStack_4a0 [8];
  undefined *puStack_498;
  undefined8 uStack_490;
  code *pcStack_488;
  undefined *puStack_480;
  undefined8 *puStack_478;
  undefined *puStack_470;
  undefined8 uStack_468;
  code *pcStack_460;
  undefined *puStack_458;
  undefined8 *puStack_450;
  undefined8 *puStack_448;
  undefined *puStack_440;
  undefined8 uStack_438;
  code *pcStack_430;
  undefined *puStack_428;
  undefined8 *puStack_420;
  undefined8 uStack_418;
  undefined8 *puStack_410;
  undefined8 uStack_408;
  code *pcStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 uStack_3d8;
  code *pcStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 *puStack_3b0;
  undefined8 uStack_3a8;
  code *pcStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 *puStack_380;
  undefined8 uStack_378;
  code *pcStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  
  puVar63 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar66 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar69 = (long)_DAT_112714414;
  lVar1 = *(long *)(param_1 + lVar69);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar70 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar62 = lVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar69);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar61 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar69);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar67 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar69);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar71 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar68 = (long)_DAT_112714418;
  uVar8 = *(undefined8 *)(param_1 + lVar68);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar69);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar68);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar69);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar68);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar69);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + lVar68);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + lVar69);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar17;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar68 = (long)_DAT_11271441c;
  uVar20 = *(undefined8 *)(param_1 + lVar68);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + lVar69);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_1 + lVar68);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_1 + lVar69);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar23;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_1 + lVar68);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(param_1 + lVar69);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar26;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(param_1 + lVar68);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = *(undefined8 *)(param_1 + lVar69);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar29;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar68 = (long)_DAT_112714420;
  uVar32 = *(undefined8 *)(param_1 + lVar68);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = *(undefined8 *)(param_1 + lVar69);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar32;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = *(undefined8 *)(param_1 + lVar68);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = *(undefined8 *)(param_1 + lVar69);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar37 = uVar35;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar38 = *(undefined8 *)(param_1 + lVar68);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar39 = *(undefined8 *)(param_1 + lVar69);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar40 = uVar38;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar41 = *(undefined8 *)(param_1 + lVar68);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar42 = *(undefined8 *)(param_1 + lVar69);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar43 = uVar41;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar68 = (long)_DAT_112714424;
  uVar44 = *(undefined8 *)(param_1 + lVar68);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar45 = *(undefined8 *)(param_1 + lVar69);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar46 = uVar44;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar47 = *(undefined8 *)(param_1 + lVar68);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar48 = *(undefined8 *)(param_1 + lVar69);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar49 = uVar47;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar68 = (long)_DAT_112714428;
  uVar50 = *(undefined8 *)(param_1 + lVar68);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar51 = *(undefined8 *)(param_1 + lVar69);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar52 = uVar50;
  func_0x00010bf493c0(0x4014000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar53 = *(undefined8 *)(param_1 + lVar68);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar54 = *(undefined8 *)(param_1 + lVar69);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar55 = uVar53;
  func_0x00010bf493c0(0xc014000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar56 = *(undefined8 *)(param_1 + lVar68);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar57 = uVar56;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar58 = *(undefined8 *)(param_1 + lVar68);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar59 = uVar58;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar60 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar65 = puVar60;
  func_0x00010beef8c0(puVar63);
  _objc_release(puVar60);
  _objc_release(uVar59);
  _objc_release(uVar58);
  _objc_release(uVar57);
  _objc_release(uVar56);
  _objc_release(uVar55);
  _objc_release(uVar54);
  _objc_release(uVar53);
  _objc_release(uVar52);
  _objc_release(uVar51);
  _objc_release(uVar50);
  _objc_release(uVar49);
  _objc_release(uVar48);
  _objc_release(uVar47);
  _objc_release(uVar46);
  _objc_release(uVar45);
  _objc_release(uVar44);
  _objc_release(uVar43);
  _objc_release(uVar42);
  _objc_release(uVar41);
  _objc_release(uVar40);
  _objc_release(uVar39);
  _objc_release(uVar38);
  _objc_release(uVar37);
  _objc_release(uVar36);
  _objc_release(uVar35);
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(uVar30);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar71);
  _objc_release(uVar6);
  _objc_release(uVar67);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar61);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(lVar62);
  _objc_release(lVar70);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar66) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar65);
  func_0x00010beccd00(lVar1);
  lVar70 = (long)_DAT_11271442c;
  if (*(long *)(lVar1 + lVar70) != 0) {
    func_0x00010bf2dba0();
    uVar61 = *(undefined8 *)(lVar1 + lVar70);
    *(undefined8 *)(lVar1 + lVar70) = 0;
    _objc_release(uVar61);
  }
  puVar60 = puVar65;
  func_0x00010c26e120(puVar65);
  _objc_retainAutoreleasedReturnValue();
  puVar63 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_420 = &uStack_388;
  uStack_388 = 0;
  uStack_378 = 0x3032000000;
  pcStack_370 = FUN_104e3df5c;
  uStack_368 = 0x104e3df6c;
  uStack_360 = 0;
  puStack_450 = &uStack_3b8;
  uStack_3b8 = 0;
  uStack_3a8 = 0x3032000000;
  pcStack_3a0 = FUN_104e3df5c;
  uStack_398 = 0x104e3df6c;
  uStack_390 = 0;
  puStack_448 = &uStack_3e8;
  uStack_3e8 = 0;
  uStack_3d8 = 0x3032000000;
  pcStack_3d0 = FUN_104e3df5c;
  uStack_3c8 = 0x104e3df6c;
  uStack_3c0 = 0;
  puStack_478 = &uStack_418;
  uStack_418 = 0;
  uStack_408 = 0x3032000000;
  pcStack_400 = FUN_104e3df5c;
  uStack_3f8 = 0x104e3df6c;
  uStack_3f0 = 0;
  puStack_440 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_438 = 0xc2000000;
  pcStack_430 = FUN_104e3df74;
  puStack_428 = &UNK_110852f08;
  puStack_470 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_468 = 0xc2000000;
  pcStack_460 = FUN_104e3dfac;
  puStack_458 = &UNK_110852f38;
  puStack_498 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_490 = 0xc2000000;
  pcStack_488 = FUN_104e3e020;
  puStack_480 = &UNK_110852f68;
  puStack_410 = puStack_478;
  puStack_3e0 = puStack_448;
  puStack_3b0 = puStack_450;
  puStack_380 = puStack_420;
  func_0x00010c0beec0();
  if (puStack_410[5] == 0) {
    if (puStack_380[5] == 0) {
      lVar62 = puStack_3b0[5];
      func_0x00010c08fa60();
      if (lVar62 != 0) {
        puVar63 = PTR_PTR_1126b08a8;
        _objc_alloc(PTR_PTR_1126b08a8);
        puVar64 = PTR_PTR_1126b08b0;
        func_0x00010bf4cd80(PTR_PTR_1126b08b0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c003ac0(puVar63);
        _objc_release(puVar64);
        lVar62 = lVar1 + _DAT_112714434;
        _objc_loadWeakRetained();
        lVar3 = lVar62;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar64 = PTR_PTR_1126b08b8;
        _objc_alloc(PTR_PTR_1126b08b8);
        func_0x00010c0295e0();
        lVar5 = lVar3;
        func_0x00010bf55f20();
        _objc_retainAutoreleasedReturnValue();
        lVar71 = (long)_DAT_112714438;
        uVar61 = *(undefined8 *)(lVar1 + lVar71);
        *(long *)(lVar1 + lVar71) = lVar5;
        _objc_release(uVar61);
        _objc_release(puVar64);
        _objc_release(lVar3);
        _objc_release(lVar62);
        puVar64 = PTR_PTR_1126aebf0;
        _objc_alloc(PTR_PTR_1126aebf0);
        lVar62 = lVar1;
        _objc_opt_class(lVar1);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c011b80(puVar64);
        _objc_release(lVar62);
        _objc_initWeak(auStack_4a0,lVar1);
        uVar61 = *(undefined8 *)(lVar1 + lVar71);
        _objc_copyWeak(auStack_4f8,auStack_4a0);
        _objc_retain(PTR___dispatch_main_q_11034be20);
        func_0x00010bfa78e0();
        _objc_retainAutoreleasedReturnValue();
        uVar67 = *(undefined8 *)(lVar1 + lVar70);
        *(undefined8 *)(lVar1 + lVar70) = uVar61;
        _objc_release(uVar67);
        _objc_release(PTR___dispatch_main_q_11034be20);
        _objc_destroyWeak(auStack_4f8);
        _objc_destroyWeak(auStack_4a0);
        _objc_release(puVar64);
        _objc_release(puVar63);
      }
    }
    else {
      _objc_initWeak(auStack_4a0,lVar1);
      lVar70 = lVar1 + _DAT_112714430;
      _objc_loadWeakRetained(lVar70);
      puStack_4c8 = puVar63;
      uStack_4c0 = 0xc2000000;
      uStack_4b8 = 0x104e3e058;
      puStack_4b0 = &UNK_110852f98;
      _objc_copyWeak(auStack_4a8,auStack_4a0);
      puStack_4f0 = puVar63;
      uStack_4e8 = 0xc2000000;
      uStack_4e0 = 0x104e3e0a0;
      puStack_4d8 = &UNK_110852fc8;
      _objc_copyWeak(auStack_4d0,auStack_4a0);
      _objc_retain(PTR___dispatch_main_q_11034be20);
      func_0x00010c09bc40(lVar70);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_release(lVar70);
      _objc_destroyWeak(auStack_4d0);
      _objc_destroyWeak(auStack_4a8);
      _objc_destroyWeak(auStack_4a0);
    }
  }
  puVar63 = puVar65;
  func_0x00010c268c60();
  _objc_retainAutoreleasedReturnValue();
  uVar61 = *(undefined8 *)(lVar1 + _DAT_11271443c);
  *(undefined **)(lVar1 + _DAT_11271443c) = puVar63;
  _objc_release(uVar61);
  puVar63 = puVar65;
  func_0x00010c0b4d20();
  _objc_retainAutoreleasedReturnValue();
  uVar61 = *(undefined8 *)(lVar1 + _DAT_112714440);
  *(undefined **)(lVar1 + _DAT_112714440) = puVar63;
  _objc_release(uVar61);
  func_0x00010c07bea0(puVar65);
  func_0x00010c1a7f60(*(undefined8 *)(lVar1 + _DAT_112714428));
  __Block_object_dispose(&uStack_418,8);
  _objc_release(uStack_3f0);
  __Block_object_dispose(&uStack_3e8,8);
  _objc_release(uStack_3c0);
  __Block_object_dispose(&uStack_3b8,8);
  _objc_release(uStack_390);
  __Block_object_dispose(&uStack_388,8);
  _objc_release(uStack_360);
  _objc_release(puVar60);
  _objc_release(puVar65);
  return;
}



/* Entry: 104e3d9d0; end: 104e3df5b; -[SCFavouritesManagementProfileSectionSnapCellView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e3d9d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_218 [8];
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined1 auStack_1f0 [8];
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined1 auStack_1c0 [8];
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined8 *puStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
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
  func_0x00010beccd00(param_1);
  lVar9 = (long)_DAT_11271442c;
  if (*(long *)(param_1 + lVar9) != 0) {
    func_0x00010bf2dba0();
    uVar1 = *(undefined8 *)(param_1 + lVar9);
    *(undefined8 *)(param_1 + lVar9) = 0;
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c26e120(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_140 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_104e3df5c;
  uStack_88 = 0x104e3df6c;
  uStack_80 = 0;
  puStack_170 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_104e3df5c;
  uStack_b8 = 0x104e3df6c;
  uStack_b0 = 0;
  puStack_168 = &uStack_108;
  uStack_108 = 0;
  uStack_f8 = 0x3032000000;
  pcStack_f0 = FUN_104e3df5c;
  uStack_e8 = 0x104e3df6c;
  uStack_e0 = 0;
  puStack_198 = &uStack_138;
  uStack_138 = 0;
  uStack_128 = 0x3032000000;
  pcStack_120 = FUN_104e3df5c;
  uStack_118 = 0x104e3df6c;
  uStack_110 = 0;
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  pcStack_150 = FUN_104e3df74;
  puStack_148 = &UNK_110852f08;
  puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_188 = 0xc2000000;
  pcStack_180 = FUN_104e3dfac;
  puStack_178 = &UNK_110852f38;
  puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1b0 = 0xc2000000;
  pcStack_1a8 = FUN_104e3e020;
  puStack_1a0 = &UNK_110852f68;
  puStack_130 = puStack_198;
  puStack_100 = puStack_168;
  puStack_d0 = puStack_170;
  puStack_a0 = puStack_140;
  func_0x00010c0beec0();
  if (puStack_130[5] == 0) {
    if (puStack_a0[5] == 0) {
      lVar2 = puStack_d0[5];
      func_0x00010c08fa60();
      if (lVar2 != 0) {
        puVar3 = PTR_PTR_1126b08a8;
        _objc_alloc(PTR_PTR_1126b08a8);
        puVar4 = PTR_PTR_1126b08b0;
        func_0x00010bf4cd80(PTR_PTR_1126b08b0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c003ac0(puVar3);
        _objc_release(puVar4);
        lVar2 = param_1 + _DAT_112714434;
        _objc_loadWeakRetained();
        lVar5 = lVar2;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126b08b8;
        _objc_alloc(PTR_PTR_1126b08b8);
        func_0x00010c0295e0();
        lVar6 = lVar5;
        func_0x00010bf55f20();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = (long)_DAT_112714438;
        uVar7 = *(undefined8 *)(param_1 + lVar10);
        *(long *)(param_1 + lVar10) = lVar6;
        _objc_release(uVar7);
        _objc_release(puVar4);
        _objc_release(lVar5);
        _objc_release(lVar2);
        puVar4 = PTR_PTR_1126aebf0;
        _objc_alloc(PTR_PTR_1126aebf0);
        lVar2 = param_1;
        _objc_opt_class(param_1);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c011b80(puVar4);
        _objc_release(lVar2);
        _objc_initWeak(auStack_1c0,param_1);
        uVar7 = *(undefined8 *)(param_1 + lVar10);
        _objc_copyWeak(auStack_218,auStack_1c0);
        _objc_retain(PTR___dispatch_main_q_11034be20);
        func_0x00010bfa78e0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = *(undefined8 *)(param_1 + lVar9);
        *(undefined8 *)(param_1 + lVar9) = uVar7;
        _objc_release(uVar8);
        _objc_release(PTR___dispatch_main_q_11034be20);
        _objc_destroyWeak(auStack_218);
        _objc_destroyWeak(auStack_1c0);
        _objc_release(puVar4);
        _objc_release(puVar3);
      }
    }
    else {
      _objc_initWeak(auStack_1c0,param_1);
      lVar9 = param_1 + _DAT_112714430;
      _objc_loadWeakRetained(lVar9);
      puStack_1e8 = puVar3;
      uStack_1e0 = 0xc2000000;
      uStack_1d8 = 0x104e3e058;
      puStack_1d0 = &UNK_110852f98;
      _objc_copyWeak(auStack_1c8,auStack_1c0);
      puStack_210 = puVar3;
      uStack_208 = 0xc2000000;
      uStack_200 = 0x104e3e0a0;
      puStack_1f8 = &UNK_110852fc8;
      _objc_copyWeak(auStack_1f0,auStack_1c0);
      _objc_retain(PTR___dispatch_main_q_11034be20);
      func_0x00010c09bc40(lVar9);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_release(lVar9);
      _objc_destroyWeak(auStack_1f0);
      _objc_destroyWeak(auStack_1c8);
      _objc_destroyWeak(auStack_1c0);
    }
  }
  uVar7 = param_3;
  func_0x00010c268c60();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + _DAT_11271443c);
  *(undefined8 *)(param_1 + _DAT_11271443c) = uVar7;
  _objc_release(uVar8);
  uVar7 = param_3;
  func_0x00010c0b4d20();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + _DAT_112714440);
  *(undefined8 *)(param_1 + _DAT_112714440) = uVar7;
  _objc_release(uVar8);
  func_0x00010c07bea0(param_3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112714428));
  __Block_object_dispose(&uStack_138,8);
  _objc_release(uStack_110);
  __Block_object_dispose(&uStack_108,8);
  _objc_release(uStack_e0);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 104e3df5c; end: 104e3df73;  */

void FUN_104e3df5c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104e3df74; end: 104e3dfab;  */

void FUN_104e3df74(long param_1,undefined8 param_2)

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



/* Entry: 104e3dfac; end: 104e3e01f;  */

void FUN_104e3dfac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104e3e020; end: 104e3e0cb;  */

void FUN_104e3e020(long param_1,undefined8 param_2)

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



/* Entry: 104e3e0cc; end: 104e3e12b;  */

void FUN_104e3e0cc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  if (param_4 == 0) {
    func_0x00010be2a9a0();
  }
  else {
    func_0x00010be2a980();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e3e12c; end: 104e3e16f; -[SCFavouritesManagementProfileSectionSnapCellView _handleImageDownloadSuccessWithImage:] */

void FUN_104e3e12c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010beccd00(param_1,param_2,0);
  func_0x00010bea47a0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e3e170; end: 104e3e19b; -[SCFavouritesManagementProfileSectionSnapCellView _handleImageDownloadFailure] */

void FUN_104e3e170(undefined8 param_1,undefined8 param_2)

{
  func_0x00010beccd00(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010beccf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__toggleUploadFailureOverlay__112590d88,1);
  return;
}



/* Entry: 104e3e19c; end: 104e3e1ab; -[SCFavouritesManagementProfileSectionSnapCellView _toggleLoadingIndicator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e3e19c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112714424),PTR_s_setHidden__1126479f8);
  return;
}



/* Entry: 104e3e1ac; end: 104e3e1bb; -[SCFavouritesManagementProfileSectionSnapCellView _toggleUploadFailureOverlay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e3e1ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112714420),PTR_s_setHidden__1126479f8);
  return;
}



/* Entry: 104e3e1bc; end: 104e3e1cb; -[SCFavouritesManagementProfileSectionSnapCellView _setImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e3e1bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112714418),PTR_s_setImage__1126481e8);
  return;
}



/* Entry: 104e3e1cc; end: 104e3e23b; -[SCFavouritesManagementProfileSectionSnapCellView _handleTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e3e1cc(long param_1)

{
  if (*(long *)(param_1 + _DAT_11271443c) != 0) {
    param_1 = param_1 + _DAT_112714444;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf7d4e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104e3e23c; end: 104e3e2c7; -[SCFavouritesManagementProfileSectionSnapCellView _handleLongPress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e3e23c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + _DAT_112714440) != 0) &&
     (lVar1 = param_3, func_0x00010c252440(), lVar1 == 1)) {
    param_1 = param_1 + _DAT_112714444;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf77da0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e3e2c8; end: 104e3e2e7; -[SCFavouritesManagementProfileSectionSnapCellView imageDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e3e2c8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112714430);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e3e2e8; end: 104e3e2fb; -[SCFavouritesManagementProfileSectionSnapCellView setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e3e2e8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112714430,param_3);
  return;
}



/* Entry: 104e3e2fc; end: 104e3e31b; -[SCFavouritesManagementProfileSectionSnapCellView imageSourceProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e3e2fc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112714434);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e3e31c; end: 104e3e32f; -[SCFavouritesManagementProfileSectionSnapCellView setImageSourceProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e3e31c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112714434,param_3);
  return;
}



/* Entry: 104e3e330; end: 104e3e34f; -[SCFavouritesManagementProfileSectionSnapCellView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e3e330(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112714444);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e3e350; end: 104e3e363; -[SCFavouritesManagementProfileSectionSnapCellView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e3e350(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112714444,param_3);
  return;
}



/* Entry: 104e3e364; end: 104e3e447; -[SCFavouritesManagementProfileSectionSnapCellView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e3e364(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112714444);
  _objc_destroyWeak(param_1 + _DAT_112714434);
  _objc_destroyWeak(param_1 + _DAT_112714430);
  _objc_storeStrong(param_1 + _DAT_112714428,0);
  _objc_storeStrong(param_1 + _DAT_11271442c,0);
  _objc_storeStrong(param_1 + _DAT_112714438,0);
  _objc_storeStrong(param_1 + _DAT_112714440,0);
  _objc_storeStrong(param_1 + _DAT_11271443c,0);
  _objc_storeStrong(param_1 + _DAT_11271441c,0);
  _objc_storeStrong(param_1 + _DAT_112714424,0);
  _objc_storeStrong(param_1 + _DAT_112714420,0);
  _objc_storeStrong(param_1 + _DAT_112714414,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112714418,0);
  return;
}



/* Entry: 104e3e448; end: 104e3e953; -[SCSpotlightManagementProfileCarouselCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104e3e448(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined *puVar26;
  undefined8 uVar27;
  long lVar28;
  long lVar29;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_d8 = PTR_PTR_1126e4748;
  puVar1 = &uStack_e0;
  uStack_e0 = param_5;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  lVar3 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    lVar29 = (long)_DAT_112714448;
    uVar27 = *(undefined8 *)((long)puVar1 + lVar29);
    *(undefined **)((long)puVar1 + lVar29) = puVar2;
    _objc_release(uVar27);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar29));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar29));
    _objc_release(puVar2);
    uVar27 = *(undefined8 *)((long)puVar1 + lVar29);
    func_0x00010c08c0e0(uVar27);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4014000000000000);
    _objc_release(uVar27);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_alloc_init();
    lVar28 = (long)_DAT_11271444c;
    uVar27 = *(undefined8 *)((long)puVar1 + lVar28);
    *(undefined **)((long)puVar1 + lVar28) = puVar2;
    _objc_release(uVar27);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar28));
    func_0x00010c16e060(*(undefined8 *)((long)puVar1 + lVar28));
    func_0x00010c190b80(*(undefined8 *)((long)puVar1 + lVar28));
    func_0x00010c166c00(*(undefined8 *)((long)puVar1 + lVar28));
    func_0x00010c207380(0x4014000000000000,*(undefined8 *)((long)puVar1 + lVar28));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar29));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar3 = *(long *)((long)puVar1 + lVar29);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_d0 = lVar5;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar29);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = uVar27;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar29);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_c0 = uVar10;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar29);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = uVar13;
    uVar14 = *(undefined8 *)((long)puVar1 + lVar28);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)((long)puVar1 + lVar29);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar14;
    func_0x00010bf493c0(0x4014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar16;
    uVar17 = *(undefined8 *)((long)puVar1 + lVar28);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)((long)puVar1 + lVar29);
    func_0x00010c08de00(uVar18);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar17;
    func_0x00010bf493c0(0x4014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uVar19;
    uVar20 = *(undefined8 *)((long)puVar1 + lVar28);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)((long)puVar1 + lVar29);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar20;
    func_0x00010bf493c0(0xc014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar22;
    uVar23 = *(undefined8 *)((long)puVar1 + lVar28);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = *(undefined8 *)((long)puVar1 + lVar29);
    func_0x00010bf1ff80(uVar24);
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar23;
    func_0x00010bf493c0(0xc014000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar26 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_98 = uVar25;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar26);
    _objc_release(uVar25);
    _objc_release(uVar24);
    _objc_release(uVar23);
    _objc_release(uVar22);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(puVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(uVar27);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(lVar5);
    _objc_release(puVar4);
    _objc_release(lVar3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar1 = (undefined8 *)PTR_PTR_1126b11a0;
  _objc_alloc(PTR_PTR_1126b11a0);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  lVar3 = lVar3 + _DAT_112714450;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c213f40(puVar1);
  _objc_release(lVar3);
  func_0x00010c18b5e0(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return puVar1;
}



/* Entry: 104e3e954; end: 104e3e9db; -[SCSpotlightManagementProfileCarouselCollectionViewCell _snapCellView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e3e954(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b11a0;
  _objc_alloc(PTR_PTR_1126b11a0);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  lVar2 = param_1 + _DAT_112714450;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c213f40(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  func_0x00010c18b5e0(puVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e3e9dc; end: 104e3ec6b; -[SCSpotlightManagementProfileCarouselCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e3e9dc(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar8 = (long)_DAT_112714454;
  uVar7 = *(ulong *)(param_1 + lVar8);
  _objc_retain(uVar7);
  _objc_retain(param_3);
  uVar5 = param_3;
  if (uVar7 != param_3) {
    if (param_3 == 0) {
      _objc_release(uVar7);
    }
    else {
      uVar9 = uVar7;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar7);
      if ((uVar9 & 1) != 0) goto LAB_104e3ec28;
    }
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar8);
    *(ulong *)(param_1 + lVar8) = param_3;
    _objc_release(uVar1);
    lVar11 = (long)_DAT_11271444c;
    uVar7 = *(ulong *)(param_1 + lVar11);
    func_0x00010bf09ee0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010bf52a60();
    lVar8 = lRam0000000000000000;
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    while (PTR__OBJC_CLASS___NSArray_1126ae530 = puVar2, uVar9 != 0) {
      uVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar8) {
          _objc_enumerationMutation(uVar7);
        }
        uVar1 = *(undefined8 *)(uVar10 * 8);
        func_0x00010c12b280(*(undefined8 *)(param_1 + lVar11));
        func_0x00010c12c960(uVar1);
        uVar10 = uVar10 + 1;
      } while (uVar9 != uVar10);
      uVar9 = uVar7;
      func_0x00010bf52a60();
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    }
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar9 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    if ((uVar9 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(param_3);
    uVar9 = 0;
    do {
      lVar8 = param_1;
      func_0x00010bebc860(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar11));
      uVar10 = uVar5;
      func_0x00010bf529e0();
      if (uVar9 < uVar10) {
        uVar3 = uVar5;
        func_0x00010c14da60();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_PTR_1126b10d0;
        _objc_opt_class(PTR_PTR_1126b10d0);
        uVar4 = uVar3;
        _objc_opt_isKindOfClass(uVar3,puVar2);
        uVar10 = uVar3;
        if ((uVar4 & 1) == 0) {
          uVar10 = 0;
        }
        _objc_retain(uVar10);
        _objc_release(uVar3);
        func_0x00010c2226c0(lVar8);
        _objc_release(uVar10);
      }
      _objc_release(lVar8);
      uVar9 = uVar9 + 1;
    } while (uVar9 != 5);
  }
  _objc_release(uVar5);
  _objc_release(uVar7);
LAB_104e3ec28:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 104e3ec6c; end: 104e3ec93; +[SCSpotlightManagementProfileCarouselCollectionViewCell sizeWithViewModel:constrainedToSize:] */

void FUN_104e3ec6c(void)

{
  return;
}



/* Entry: 104e3ec94; end: 104e3ecab; -[SCSpotlightManagementProfileCarouselCollectionViewCell didTapSnapCellView:actionModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e3ec94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112714458),
             PTR_s_handleActionWithSender_actionMod_1125d19f8,param_1,param_4,param_3);
  return;
}



/* Entry: 104e3ecac; end: 104e3ecc3; -[SCSpotlightManagementProfileCarouselCollectionViewCell didLongPressSnapCellView:actionModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e3ecac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112714458),
             PTR_s_handleActionWithSender_actionMod_1125d19f8,param_1,param_4,param_3);
  return;
}



/* Entry: 104e3ecc4; end: 104e3ecd3; -[SCSpotlightManagementProfileCarouselCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104e3ecc4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112714454);
}



/* Entry: 104e3ecd4; end: 104e3ecf3; -[SCSpotlightManagementProfileCarouselCollectionViewCell thumbnailCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e3ecd4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112714450);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e3ecf4; end: 104e3ed07; -[SCSpotlightManagementProfileCarouselCollectionViewCell setThumbnailCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e3ecf4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112714450,param_3);
  return;
}



/* Entry: 104e3ed08; end: 104e3ed17; -[SCSpotlightManagementProfileCarouselCollectionViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104e3ed08(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112714458);
}



/* Entry: 104e3ed18; end: 104e3ed57; -[SCSpotlightManagementProfileCarouselCollectionViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e3ed18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112714458;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e3ed58; end: 104e3edc3; -[SCSpotlightManagementProfileCarouselCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e3ed58(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112714458,0);
  _objc_destroyWeak(param_1 + _DAT_112714450);
  _objc_storeStrong(param_1 + _DAT_112714454,0);
  _objc_storeStrong(param_1 + _DAT_112714448,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271444c,0);
  return;
}



/* Entry: 104e3edc4; end: 104e3f59b; -[SCSpotlightManagementProfileSectionSnapCellView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104e3edc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  long unaff_x20;
  long lVar21;
  long lVar22;
  undefined *unaff_x21;
  undefined *unaff_x22;
  long lVar23;
  undefined *unaff_x23;
  long unaff_x24;
  undefined *unaff_x25;
  long unaff_x26;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined1 auStack_4f0 [8];
  undefined1 auStack_4e8 [8];
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined1 **ppuStack_4a0;
  code *pcStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined *puStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined8 *puStack_250;
  undefined *puStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  long lStack_130;
  undefined *puStack_128;
  long lStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined8 *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b0 = PTR_PTR_1126e4750;
  puVar1 = &uStack_b8;
  uStack_b8 = param_5;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar2 = (undefined *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    lVar21 = (long)_DAT_11271445c;
    uVar20 = *(undefined8 *)((long)puVar1 + lVar21);
    *(undefined **)((long)puVar1 + lVar21) = puVar2;
    _objc_release(uVar20);
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar21));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar21));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc();
    func_0x00010c050900();
    func_0x00010c178280();
    func_0x00010c1c8340(0x3fd999999999999a,puVar2);
    puStack_c0 = puVar2;
    func_0x00010bef9040(*(undefined8 *)((long)puVar1 + lVar21));
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    puStack_c8 = puVar2;
    func_0x00010c178280();
    func_0x00010c1374a0(puVar2);
    lStack_d0 = lVar21;
    func_0x00010bef9040(*(undefined8 *)((long)puVar1 + lVar21));
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    lVar22 = (long)_DAT_112714460;
    uVar20 = *(undefined8 *)((long)puVar1 + lVar22);
    *(undefined **)((long)puVar1 + lVar22) = puVar2;
    _objc_release(uVar20);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar22));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar22));
    uVar20 = *(undefined8 *)((long)puVar1 + lVar22);
    func_0x00010c08c0e0(uVar20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4014000000000000);
    _objc_release(uVar20);
    uVar20 = *(undefined8 *)((long)puVar1 + lVar22);
    func_0x00010c08c0e0(uVar20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar20);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar21));
    puVar2 = PTR_PTR_1126b1198;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar21 = (long)_DAT_112714464;
    uVar20 = *(undefined8 *)((long)puVar1 + lVar21);
    *(undefined **)((long)puVar1 + lVar21) = puVar2;
    _objc_release(uVar20);
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar21));
    uVar20 = *(undefined8 *)((long)puVar1 + lVar21);
    func_0x00010bfcd9c0(uVar20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bff00();
    _objc_release(uVar20);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
    puStack_d8 = puVar2;
    func_0x00010bf414e0(0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_a8 = puVar3;
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = puVar4;
    func_0x00010bf414e0(0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_a0 = puVar3;
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    func_0x00010bf414e0(0x3fe199999999999a);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_98 = puVar6;
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar7;
    func_0x00010bf414e0(0x3feae147ae147ae1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)((long)puVar1 + lVar21);
    func_0x00010bfcd9c0(uVar20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60();
    _objc_release(uVar20);
    _objc_release(puVar9);
    _objc_release(puVar6);
    _objc_release(puVar7);
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puStack_e0);
    _objc_release(puVar2);
    _objc_release(puStack_d8);
    unaff_x26 = lStack_d0;
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lStack_d0));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar21));
    uVar20 = *(undefined8 *)((long)puVar1 + lVar21);
    func_0x00010c08c0e0(uVar20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4014000000000000);
    _objc_release(uVar20);
    uVar20 = *(undefined8 *)((long)puVar1 + lVar21);
    func_0x00010c08c0e0(uVar20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar20);
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar21));
    puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
    _objc_alloc_init();
    unaff_x25 = &DAT_11271445c;
    lVar21 = (long)_DAT_112714468;
    uVar20 = *(undefined8 *)((long)puVar1 + lVar21);
    *(undefined **)((long)puVar1 + lVar21) = puVar2;
    _objc_release(uVar20);
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar21));
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = puVar2;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010c16e720(*(undefined8 *)((long)puVar1 + lVar21));
    uVar20 = *(undefined8 *)((long)puVar1 + lVar21);
    unaff_x28 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(uVar20);
    _objc_release(puVar2);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar21));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + unaff_x26));
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    lVar21 = (long)_DAT_11271446c;
    uVar20 = *(undefined8 *)((long)puVar1 + lVar21);
    *(undefined **)((long)puVar1 + lVar21) = puVar2;
    _objc_release(uVar20);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar21));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar21));
    _objc_release(puVar2);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar21));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + unaff_x26));
    unaff_x27 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    lVar21 = (long)_DAT_112714470;
    uVar20 = *(undefined8 *)((long)puVar1 + lVar21);
    *(undefined **)((long)puVar1 + lVar21) = puVar2;
    _objc_release(uVar20);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar21));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar21));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar21));
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)((long)puVar1 + lVar21));
    _objc_release(puVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010bf414e0(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar21));
    _objc_release(puVar2);
    _objc_release(puVar3);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + unaff_x26));
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = puVar2;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    unaff_x24 = (long)_DAT_112714474;
    uVar20 = *(undefined8 *)((long)puVar1 + unaff_x24);
    *(undefined **)((long)puVar1 + unaff_x24) = puVar3;
    _objc_release(uVar20);
    _objc_release(unaff_x23);
    _objc_release(puVar2);
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + unaff_x24));
    uVar20 = *(undefined8 *)((long)puVar1 + unaff_x24);
    unaff_x21 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(uVar20);
    _objc_release(unaff_x21);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + unaff_x24));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + unaff_x26));
    puVar2 = PTR_PTR_1126aeff0;
    _objc_alloc();
    func_0x00010bfffb60();
    unaff_x20 = (long)_DAT_112714478;
    uVar20 = *(undefined8 *)((long)puVar1 + unaff_x20);
    *(undefined **)((long)puVar1 + unaff_x20) = puVar2;
    _objc_release(uVar20);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + unaff_x20));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + unaff_x20));
    func_0x00010c1a8560(*(undefined8 *)((long)puVar1 + unaff_x20));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + unaff_x26));
    func_0x00010beabac0(puVar1);
    _objc_release(unaff_x22);
    _objc_release(puStack_c8);
    puVar2 = puStack_c0;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_104e3f59c;
  lStack_150 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_340 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar22 = (long)_DAT_11271445c;
  puVar10 = *(undefined8 **)(puVar2 + lVar22);
  ppuStack_140 = unaff_x28;
  ppuStack_138 = unaff_x27;
  lStack_130 = unaff_x26;
  puStack_128 = unaff_x25;
  lStack_120 = unaff_x24;
  puStack_118 = unaff_x23;
  puStack_110 = unaff_x22;
  puStack_108 = unaff_x21;
  lStack_100 = unaff_x20;
  puStack_f8 = puVar1;
  puStack_f0 = &stack0xfffffffffffffff0;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  puStack_240 = puVar10;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puStack_248 = puVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar2 + lVar22);
  puStack_250 = puVar10;
  puStack_238 = puVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  uStack_258 = uVar20;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_260 = puVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(puVar2 + lVar22);
  uStack_268 = uVar20;
  uStack_230 = uVar20;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  uStack_270 = uVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puStack_278 = puVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar2 + lVar22);
  uStack_280 = uVar11;
  uStack_228 = uVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  uStack_288 = uVar20;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_290 = puVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = (long)_DAT_112714460;
  uVar11 = *(undefined8 *)(puVar2 + lVar21);
  uStack_298 = uVar20;
  uStack_220 = uVar20;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar2 + lVar22);
  uStack_2a0 = uVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_2a8 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(puVar2 + lVar21);
  uStack_2b0 = uVar11;
  uStack_218 = uVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar2 + lVar22);
  uStack_2b8 = uVar12;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_2c0 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(puVar2 + lVar21);
  uStack_2c8 = uVar12;
  uStack_210 = uVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar2 + lVar22);
  uStack_2d0 = uVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_2d8 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(puVar2 + lVar21);
  uStack_2e0 = uVar11;
  uStack_208 = uVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar2 + lVar22);
  uStack_2e8 = uVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_2f0 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = (long)_DAT_112714464;
  uVar11 = *(undefined8 *)(puVar2 + lVar21);
  uStack_2f8 = uVar12;
  uStack_200 = uVar12;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar2 + lVar22);
  uStack_300 = uVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_308 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(puVar2 + lVar21);
  uStack_310 = uVar11;
  uStack_1f8 = uVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar2 + lVar22);
  uStack_318 = uVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_320 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(puVar2 + lVar21);
  uStack_328 = uVar12;
  uStack_1f0 = uVar12;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar2 + lVar22);
  uStack_330 = uVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_338 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(puVar2 + lVar21);
  uStack_348 = uVar11;
  uStack_1e8 = uVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar2 + lVar22);
  uStack_350 = uVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_358 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = (long)_DAT_112714468;
  uVar11 = *(undefined8 *)(puVar2 + lVar21);
  uStack_360 = uVar12;
  uStack_1e0 = uVar12;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar2 + lVar22);
  uStack_368 = uVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_370 = uVar20;
  func_0x00010bf493c0(0x4014000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(puVar2 + lVar21);
  uStack_378 = uVar11;
  uStack_1d8 = uVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar2 + lVar22);
  uStack_380 = uVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_388 = uVar20;
  func_0x00010bf493c0(0xc014000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar2 + lVar21);
  uStack_390 = uVar12;
  uStack_1d0 = uVar12;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uStack_398 = uVar20;
  func_0x00010bf49420(0x4022000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(puVar2 + lVar21);
  uStack_3a0 = uVar20;
  uStack_1c8 = uVar20;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uStack_3a8 = uVar11;
  func_0x00010bf49420(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar23 = (long)_DAT_11271446c;
  uVar12 = *(undefined8 *)(puVar2 + lVar23);
  uStack_3b0 = uVar11;
  uStack_1c0 = uVar11;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar2 + lVar21);
  uStack_3b8 = uVar12;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_3c0 = uVar20;
  func_0x00010bf493c0(0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(puVar2 + lVar23);
  uStack_3c8 = uVar12;
  uStack_1b8 = uVar12;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar2 + lVar21);
  uStack_3d0 = uVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_3d8 = uVar20;
  func_0x00010bf493c0(0x4014000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(puVar2 + lVar23);
  uStack_3e0 = uVar11;
  uStack_1b0 = uVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar2 + lVar22);
  uStack_3e8 = uVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_3f0 = uVar20;
  func_0x00010bf493c0(0xc028000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar21 = (long)_DAT_112714470;
  uVar11 = *(undefined8 *)(puVar2 + lVar21);
  uStack_3f8 = uVar12;
  uStack_1a8 = uVar12;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar2 + lVar22);
  uStack_400 = uVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_408 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(puVar2 + lVar21);
  uStack_410 = uVar11;
  uStack_1a0 = uVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar2 + lVar22);
  uStack_418 = uVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_420 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(puVar2 + lVar21);
  uStack_428 = uVar12;
  uStack_198 = uVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar2 + lVar22);
  uStack_430 = uVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_438 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(puVar2 + lVar21);
  uStack_440 = uVar11;
  uStack_190 = uVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar2 + lVar22);
  uStack_448 = uVar12;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_450 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = (long)_DAT_112714478;
  uVar11 = *(undefined8 *)(puVar2 + lVar21);
  uStack_458 = uVar12;
  uStack_188 = uVar12;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar2 + lVar22);
  uStack_460 = uVar11;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_468 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(puVar2 + lVar21);
  uStack_470 = uVar11;
  uStack_180 = uVar11;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar2 + lVar22);
  uStack_478 = uVar12;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uStack_480 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = (long)_DAT_112714474;
  uVar13 = *(undefined8 *)(puVar2 + lVar21);
  uStack_488 = uVar12;
  uStack_178 = uVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(puVar2 + lVar22);
  uStack_490 = uVar13;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0xc000000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(puVar2 + lVar21);
  uStack_170 = uVar13;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(puVar2 + lVar22);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar15;
  func_0x00010bf493c0(0x4000000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(puVar2 + lVar21);
  uStack_168 = uVar11;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar17;
  func_0x00010bf49420(0x402c000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(puVar2 + lVar21);
  uStack_160 = uVar12;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar18;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_158 = uVar20;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar1;
  func_0x00010beef8c0(puStack_340);
  _objc_release(puVar1);
  _objc_release(uVar20);
  _objc_release(uVar18);
  _objc_release(uVar12);
  _objc_release(uVar17);
  _objc_release(uVar11);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar13);
  _objc_release(uVar14);
  _objc_release(uStack_490);
  _objc_release(uStack_488);
  _objc_release(uStack_480);
  _objc_release(uStack_478);
  _objc_release(uStack_470);
  _objc_release(uStack_468);
  _objc_release(uStack_460);
  _objc_release(uStack_458);
  _objc_release(uStack_450);
  _objc_release(uStack_448);
  _objc_release(uStack_440);
  _objc_release(uStack_438);
  _objc_release(uStack_430);
  _objc_release(uStack_428);
  _objc_release(uStack_420);
  _objc_release(uStack_418);
  _objc_release(uStack_410);
  _objc_release(uStack_408);
  _objc_release(uStack_400);
  _objc_release(uStack_3f8);
  _objc_release(uStack_3f0);
  _objc_release(uStack_3e8);
  _objc_release(uStack_3e0);
  _objc_release(uStack_3d8);
  _objc_release(uStack_3d0);
  _objc_release(uStack_3c8);
  _objc_release(uStack_3c0);
  _objc_release(uStack_3b8);
  _objc_release(uStack_3b0);
  _objc_release(uStack_3a8);
  _objc_release(uStack_3a0);
  _objc_release(uStack_398);
  _objc_release(uStack_390);
  _objc_release(uStack_388);
  _objc_release(uStack_380);
  _objc_release(uStack_378);
  _objc_release(uStack_370);
  _objc_release(uStack_368);
  _objc_release(uStack_360);
  _objc_release(uStack_358);
  _objc_release(uStack_350);
  _objc_release(uStack_348);
  _objc_release(uStack_338);
  _objc_release(uStack_330);
  _objc_release(uStack_328);
  _objc_release(uStack_320);
  _objc_release(uStack_318);
  _objc_release(uStack_310);
  _objc_release(uStack_308);
  _objc_release(uStack_300);
  _objc_release(uStack_2f8);
  _objc_release(uStack_2f0);
  _objc_release(uStack_2e8);
  _objc_release(uStack_2e0);
  _objc_release(uStack_2d8);
  _objc_release(uStack_2d0);
  _objc_release(uStack_2c8);
  _objc_release(uStack_2c0);
  _objc_release(uStack_2b8);
  _objc_release(uStack_2b0);
  _objc_release(uStack_2a8);
  _objc_release(uStack_2a0);
  _objc_release(uStack_298);
  _objc_release(puStack_290);
  _objc_release(uStack_288);
  _objc_release(uStack_280);
  _objc_release(puStack_278);
  _objc_release(uStack_270);
  _objc_release(uStack_268);
  _objc_release(puStack_260);
  _objc_release(uStack_258);
  _objc_release(puStack_250);
  _objc_release(puStack_248);
  puVar1 = puStack_240;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_150) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_498 = FUN_104e400dc;
  uStack_4e0 = uVar20;
  uStack_4d8 = uVar12;
  uStack_4d0 = uVar18;
  uStack_4c8 = uVar17;
  uStack_4c0 = uVar11;
  uStack_4b8 = uVar16;
  uStack_4b0 = uVar15;
  uStack_4a8 = uVar13;
  ppuStack_4a0 = &puStack_f0;
  _objc_retain(puVar10);
  puVar19 = puVar10;
  func_0x00010c29c600();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  _objc_release(puVar19);
  puVar19 = puVar10;
  func_0x00010c26df40(puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + (long)_DAT_112714464));
  _objc_release(puVar19);
  lVar21 = (long)_DAT_112714470;
  func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar21));
  lVar22 = (long)_DAT_112714478;
  func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar22));
  func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + (long)_DAT_112714468));
  lVar23 = (long)_DAT_11271446c;
  func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar23));
  puVar19 = puVar10;
  func_0x00010c0823e0();
  if ((int)puVar19 == 0) {
    puVar19 = puVar10;
    func_0x00010bfd6f60();
    if ((int)puVar19 != 0) {
      func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar21));
    }
  }
  else {
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar22));
    func_0x00010c24dbc0(*(undefined8 *)((long)puVar1 + lVar22));
  }
  puVar19 = puVar10;
  func_0x00010c26df40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar19 != (undefined8 *)0x0) {
    func_0x00010c0775e0(puVar10);
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + (long)_DAT_112714474));
    _objc_initWeak(auStack_4e8,puVar1);
    lVar21 = (long)puVar1 + (long)_DAT_11271447c;
    _objc_loadWeakRetained(lVar21);
    puVar19 = puVar10;
    func_0x00010c26df40(puVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_4f0,auStack_4e8);
    func_0x00010c11da60(lVar21);
    _objc_release(uVar20);
    _objc_release(puVar19);
    _objc_release(lVar21);
    _objc_destroyWeak(auStack_4f0);
    _objc_destroyWeak(auStack_4e8);
  }
  puVar19 = puVar10;
  func_0x00010c29c600(puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar23));
  _objc_release(puVar19);
  puVar19 = puVar10;
  func_0x00010c268c60();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)((long)puVar1 + (long)_DAT_112714480);
  *(undefined8 **)((long)puVar1 + (long)_DAT_112714480) = puVar19;
  _objc_release(uVar20);
  puVar19 = puVar10;
  func_0x00010c0b4d20();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)((long)puVar1 + (long)_DAT_112714484);
  *(undefined8 **)((long)puVar1 + (long)_DAT_112714484) = puVar19;
  _objc_release(uVar20);
  _objc_release(puVar10);
  return puVar10;
}



/* Entry: 104e3f59c; end: 104e400db; -[SCSpotlightManagementProfileSectionSnapCellView _setupConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e3f59c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_410 [8];
  undefined1 auStack_408 [8];
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined1 *puStack_3c0;
  code *pcStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_260 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar14 = (long)_DAT_11271445c;
  lVar1 = *(long *)(param_1 + lVar14);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  lStack_160 = lVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_168 = lVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar14);
  lStack_170 = lVar1;
  lStack_158 = lVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  uStack_178 = uVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_180 = lVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar14);
  uStack_188 = uVar2;
  uStack_150 = uVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  uStack_190 = uVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_198 = lVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar14);
  uStack_1a0 = uVar3;
  uStack_148 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  uStack_1a8 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_1b0 = lVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = (long)_DAT_112714460;
  uVar3 = *(undefined8 *)(param_1 + lVar13);
  uStack_1b8 = uVar2;
  uStack_140 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar14);
  uStack_1c0 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_1c8 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar13);
  uStack_1d0 = uVar3;
  uStack_138 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar14);
  uStack_1d8 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_1e0 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar13);
  uStack_1e8 = uVar4;
  uStack_130 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar14);
  uStack_1f0 = uVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_1f8 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar13);
  uStack_200 = uVar3;
  uStack_128 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar14);
  uStack_208 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_210 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = (long)_DAT_112714464;
  uVar3 = *(undefined8 *)(param_1 + lVar13);
  uStack_218 = uVar4;
  uStack_120 = uVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar14);
  uStack_220 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_228 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar13);
  uStack_230 = uVar3;
  uStack_118 = uVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar14);
  uStack_238 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_240 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar13);
  uStack_248 = uVar4;
  uStack_110 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar14);
  uStack_250 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_258 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar13);
  uStack_268 = uVar3;
  uStack_108 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar14);
  uStack_270 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_278 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = (long)_DAT_112714468;
  uVar3 = *(undefined8 *)(param_1 + lVar13);
  uStack_280 = uVar4;
  uStack_100 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar14);
  uStack_288 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_290 = uVar2;
  func_0x00010bf493c0(0x4014000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar13);
  uStack_298 = uVar3;
  uStack_f8 = uVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar14);
  uStack_2a0 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_2a8 = uVar2;
  func_0x00010bf493c0(0xc014000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar13);
  uStack_2b0 = uVar4;
  uStack_f0 = uVar4;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uStack_2b8 = uVar2;
  func_0x00010bf49420(0x4022000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar13);
  uStack_2c0 = uVar2;
  uStack_e8 = uVar2;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uStack_2c8 = uVar3;
  func_0x00010bf49420(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = (long)_DAT_11271446c;
  uVar4 = *(undefined8 *)(param_1 + lVar1);
  uStack_2d0 = uVar3;
  uStack_e0 = uVar3;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar13);
  uStack_2d8 = uVar4;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_2e0 = uVar2;
  func_0x00010bf493c0(0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  uStack_2e8 = uVar4;
  uStack_d8 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar13);
  uStack_2f0 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_2f8 = uVar2;
  func_0x00010bf493c0(0x4014000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar1);
  uStack_300 = uVar3;
  uStack_d0 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar14);
  uStack_308 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_310 = uVar2;
  func_0x00010bf493c0(0xc028000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = (long)_DAT_112714470;
  uVar3 = *(undefined8 *)(param_1 + lVar13);
  uStack_318 = uVar4;
  uStack_c8 = uVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar14);
  uStack_320 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_328 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar13);
  uStack_330 = uVar3;
  uStack_c0 = uVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar14);
  uStack_338 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_340 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar13);
  uStack_348 = uVar4;
  uStack_b8 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar14);
  uStack_350 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_358 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar13);
  uStack_360 = uVar3;
  uStack_b0 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar14);
  uStack_368 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_370 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = (long)_DAT_112714478;
  uVar3 = *(undefined8 *)(param_1 + lVar13);
  uStack_378 = uVar4;
  uStack_a8 = uVar4;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar14);
  uStack_380 = uVar3;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_388 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar13);
  uStack_390 = uVar3;
  uStack_a0 = uVar3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar14);
  uStack_398 = uVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uStack_3a0 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = (long)_DAT_112714474;
  uVar5 = *(undefined8 *)(param_1 + lVar13);
  uStack_3a8 = uVar4;
  uStack_98 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar14);
  uStack_3b0 = uVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0xc000000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar13);
  uStack_90 = uVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010bf493c0(0x4000000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar13);
  uStack_88 = uVar3;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar9;
  func_0x00010bf49420(0x402c000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar13);
  uStack_80 = uVar4;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar10;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010beef8c0(puStack_260);
  _objc_release(puVar11);
  _objc_release(uVar2);
  _objc_release(uVar10);
  _objc_release(uVar4);
  _objc_release(uVar9);
  _objc_release(uVar3);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uStack_3b0);
  _objc_release(uStack_3a8);
  _objc_release(uStack_3a0);
  _objc_release(uStack_398);
  _objc_release(uStack_390);
  _objc_release(uStack_388);
  _objc_release(uStack_380);
  _objc_release(uStack_378);
  _objc_release(uStack_370);
  _objc_release(uStack_368);
  _objc_release(uStack_360);
  _objc_release(uStack_358);
  _objc_release(uStack_350);
  _objc_release(uStack_348);
  _objc_release(uStack_340);
  _objc_release(uStack_338);
  _objc_release(uStack_330);
  _objc_release(uStack_328);
  _objc_release(uStack_320);
  _objc_release(uStack_318);
  _objc_release(uStack_310);
  _objc_release(uStack_308);
  _objc_release(uStack_300);
  _objc_release(uStack_2f8);
  _objc_release(uStack_2f0);
  _objc_release(uStack_2e8);
  _objc_release(uStack_2e0);
  _objc_release(uStack_2d8);
  _objc_release(uStack_2d0);
  _objc_release(uStack_2c8);
  _objc_release(uStack_2c0);
  _objc_release(uStack_2b8);
  _objc_release(uStack_2b0);
  _objc_release(uStack_2a8);
  _objc_release(uStack_2a0);
  _objc_release(uStack_298);
  _objc_release(uStack_290);
  _objc_release(uStack_288);
  _objc_release(uStack_280);
  _objc_release(uStack_278);
  _objc_release(uStack_270);
  _objc_release(uStack_268);
  _objc_release(uStack_258);
  _objc_release(uStack_250);
  _objc_release(uStack_248);
  _objc_release(uStack_240);
  _objc_release(uStack_238);
  _objc_release(uStack_230);
  _objc_release(uStack_228);
  _objc_release(uStack_220);
  _objc_release(uStack_218);
  _objc_release(uStack_210);
  _objc_release(uStack_208);
  _objc_release(uStack_200);
  _objc_release(uStack_1f8);
  _objc_release(uStack_1f0);
  _objc_release(uStack_1e8);
  _objc_release(uStack_1e0);
  _objc_release(uStack_1d8);
  _objc_release(uStack_1d0);
  _objc_release(uStack_1c8);
  _objc_release(uStack_1c0);
  _objc_release(uStack_1b8);
  _objc_release(lStack_1b0);
  _objc_release(uStack_1a8);
  _objc_release(uStack_1a0);
  _objc_release(lStack_198);
  _objc_release(uStack_190);
  _objc_release(uStack_188);
  _objc_release(lStack_180);
  _objc_release(uStack_178);
  _objc_release(lStack_170);
  _objc_release(lStack_168);
  lVar13 = lStack_160;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_3b8 = FUN_104e400dc;
  uStack_400 = uVar2;
  uStack_3f8 = uVar4;
  uStack_3f0 = uVar10;
  uStack_3e8 = uVar9;
  uStack_3e0 = uVar3;
  uStack_3d8 = uVar8;
  uStack_3d0 = uVar7;
  uStack_3c8 = uVar5;
  puStack_3c0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar12);
  puVar11 = puVar12;
  func_0x00010c29c600();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  _objc_release(puVar11);
  puVar11 = puVar12;
  func_0x00010c26df40(puVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60(*(undefined8 *)(lVar13 + _DAT_112714464));
  _objc_release(puVar11);
  lVar1 = (long)_DAT_112714470;
  func_0x00010c1a7f60(*(undefined8 *)(lVar13 + lVar1));
  lVar14 = (long)_DAT_112714478;
  func_0x00010c1a7f60(*(undefined8 *)(lVar13 + lVar14));
  func_0x00010c1a7f60(*(undefined8 *)(lVar13 + _DAT_112714468));
  lVar15 = (long)_DAT_11271446c;
  func_0x00010c1a7f60(*(undefined8 *)(lVar13 + lVar15));
  puVar11 = puVar12;
  func_0x00010c0823e0();
  if ((int)puVar11 == 0) {
    puVar11 = puVar12;
    func_0x00010bfd6f60();
    if ((int)puVar11 != 0) {
      func_0x00010c1a7f60(*(undefined8 *)(lVar13 + lVar1));
    }
  }
  else {
    func_0x00010c1a7f60(*(undefined8 *)(lVar13 + lVar14));
    func_0x00010c24dbc0(*(undefined8 *)(lVar13 + lVar14));
  }
  puVar11 = puVar12;
  func_0x00010c26df40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar11 != (undefined *)0x0) {
    func_0x00010c0775e0(puVar12);
    func_0x00010c1a7f60(*(undefined8 *)(lVar13 + _DAT_112714474));
    _objc_initWeak(auStack_408,lVar13);
    lVar1 = lVar13 + _DAT_11271447c;
    _objc_loadWeakRetained(lVar1);
    puVar11 = puVar12;
    func_0x00010c26df40(puVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_410,auStack_408);
    func_0x00010c11da60(lVar1);
    _objc_release(uVar2);
    _objc_release(puVar11);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_410);
    _objc_destroyWeak(auStack_408);
  }
  puVar11 = puVar12;
  func_0x00010c29c600(puVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(lVar13 + lVar15));
  _objc_release(puVar11);
  puVar11 = puVar12;
  func_0x00010c268c60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(lVar13 + _DAT_112714480);
  *(undefined **)(lVar13 + _DAT_112714480) = puVar11;
  _objc_release(uVar2);
  puVar11 = puVar12;
  func_0x00010c0b4d20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(lVar13 + _DAT_112714484);
  *(undefined **)(lVar13 + _DAT_112714484) = puVar11;
  _objc_release(uVar2);
  _objc_release(puVar12);
  return;
}



/* Entry: 104e400dc; end: 104e403ab; -[SCSpotlightManagementProfileSectionSnapCellView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e400dc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c29c600();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c26df40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112714464));
  _objc_release(lVar1);
  lVar3 = (long)_DAT_112714470;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3));
  lVar4 = (long)_DAT_112714478;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112714468));
  lVar5 = (long)_DAT_11271446c;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5));
  lVar1 = param_3;
  func_0x00010c0823e0();
  if ((int)lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010bfd6f60();
    if ((int)lVar1 != 0) {
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3));
    }
  }
  else {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4));
    func_0x00010c24dbc0(*(undefined8 *)(param_1 + lVar4));
  }
  lVar1 = param_3;
  func_0x00010c26df40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c0775e0(param_3);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112714474));
    _objc_initWeak(auStack_58,param_1);
    lVar1 = param_1 + _DAT_11271447c;
    _objc_loadWeakRetained(lVar1);
    lVar3 = param_3;
    func_0x00010c26df40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c11da60(lVar1);
    _objc_release(uVar2);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  lVar1 = param_3;
  func_0x00010c29c600(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar5));
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c268c60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112714480);
  *(long *)(param_1 + _DAT_112714480) = lVar1;
  _objc_release(uVar2);
  lVar1 = param_3;
  func_0x00010c0b4d20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112714484);
  *(long *)(param_1 + _DAT_112714484) = lVar1;
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 104e403ac; end: 104e40467;  */

void FUN_104e403ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_104e40468;
    puStack_48 = &UNK_110841fb0;
    _objc_copyWeak(auStack_38,param_1 + 0x20);
    _objc_retain(puVar1);
    puStack_40 = puVar1;
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_60);
    _objc_release(puStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(puVar1);
  return;
}



/* Entry: 104e40468; end: 104e4049b;  */

void FUN_104e40468(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea47a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e4049c; end: 104e404ab; -[SCSpotlightManagementProfileSectionSnapCellView _setImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e4049c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112714460),PTR_s_setImage__1126481e8);
  return;
}



/* Entry: 104e404ac; end: 104e4051b; -[SCSpotlightManagementProfileSectionSnapCellView _handleTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e404ac(long param_1)

{
  if (*(long *)(param_1 + _DAT_112714480) != 0) {
    param_1 = param_1 + _DAT_112714488;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf7d4e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104e4051c; end: 104e405a7; -[SCSpotlightManagementProfileSectionSnapCellView _handleLongPress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e4051c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + _DAT_112714484) != 0) &&
     (lVar1 = param_3, func_0x00010c252440(), lVar1 == 1)) {
    param_1 = param_1 + _DAT_112714488;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf77da0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e405a8; end: 104e405c7; -[SCSpotlightManagementProfileSectionSnapCellView thumbnailCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e405a8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271447c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e405c8; end: 104e405db; -[SCSpotlightManagementProfileSectionSnapCellView setThumbnailCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e405c8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271447c,param_3);
  return;
}



/* Entry: 104e405dc; end: 104e405fb; -[SCSpotlightManagementProfileSectionSnapCellView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e405dc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112714488);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e405fc; end: 104e4060f; -[SCSpotlightManagementProfileSectionSnapCellView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e405fc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112714488,param_3);
  return;
}



/* Entry: 104e40610; end: 104e406e7; -[SCSpotlightManagementProfileSectionSnapCellView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e40610(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112714488);
  _objc_destroyWeak(param_1 + _DAT_11271447c);
  _objc_storeStrong(param_1 + _DAT_112714484,0);
  _objc_storeStrong(param_1 + _DAT_112714480,0);
  _objc_storeStrong(param_1 + _DAT_112714464,0);
  _objc_storeStrong(param_1 + _DAT_112714478,0);
  _objc_storeStrong(param_1 + _DAT_112714474,0);
  _objc_storeStrong(param_1 + _DAT_112714470,0);
  _objc_storeStrong(param_1 + _DAT_11271445c,0);
  _objc_storeStrong(param_1 + _DAT_112714468,0);
  _objc_storeStrong(param_1 + _DAT_11271446c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112714460,0);
  return;
}



/* Entry: 104e406e8; end: 104e407f7; -[SCSpotlightManagementProfileSimpleButtonCell initWithFrame:] */

undefined1 *
FUN_104e406e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &uStack_60;
  puVar1 = PTR_PTR_1126b11a8;
  _objc_alloc(PTR_PTR_1126b11a8);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puStack_58 = PTR_PTR_1126e4758;
  uStack_60 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_60,
                      PTR_s_initWithFrame_underlyingView__1125e2e00,puVar1);
  func_0x00010c1fe760();
  func_0x00010c20eaa0(puVar2);
  func_0x00010c182b80(0xc024000000000000,0,0xc024000000000000,0,puVar2);
  puVar3 = (undefined1 *)puVar2;
  func_0x00010c27f880(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(puVar3);
  _objc_release(puVar1);
  return (undefined1 *)puVar2;
}



/* Entry: 104e407f8; end: 104e40ab3; -[SCSpotlightManagementProfileSimpleButtonCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e407f8(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11271448c;
  puVar5 = *(undefined **)(param_1 + lVar6);
  _objc_retain(puVar5);
  _objc_retain(param_3);
  puVar1 = param_3;
  if (puVar5 != param_3) {
    if (param_3 == (undefined *)0x0) {
      _objc_release(puVar5);
    }
    else {
      puVar1 = puVar5;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(puVar5);
      if (((ulong)puVar1 & 1) != 0) goto LAB_104e40a98;
    }
    puVar5 = PTR_PTR_1126b10d8;
    _objc_retain(param_3);
    _objc_opt_class(puVar5);
    puVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    puVar5 = param_3;
    if (((ulong)puVar1 & 1) == 0) {
      puVar5 = (undefined *)0x0;
    }
    _objc_retain(puVar5);
    _objc_release(param_3);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = param_3;
    _objc_release(uVar2);
    puVar1 = puVar5;
    func_0x00010c2716a0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c27f880(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(lVar6);
    _objc_release(puVar1);
    puVar3 = puVar5;
    func_0x00010bf61240();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar3);
      puVar1 = puVar3;
    }
    _objc_release(puVar3);
    puVar3 = puVar5;
    func_0x00010bf615c0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar3);
      puVar4 = puVar3;
    }
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(param_1);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010bf414e0(0x3fb999999999999a,puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c27f880(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(lVar6);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010bf414e0(0x3fc999999999999a,puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c27f880(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a88c0();
    _objc_release(lVar6);
    _objc_release(puVar3);
    func_0x00010c27f880(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19ea60();
    _objc_release(param_1);
    _objc_release(puVar4);
  }
  _objc_release(puVar1);
  _objc_release(puVar5);
LAB_104e40a98:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e40ab4; end: 104e40b7b; -[SCSpotlightManagementProfileSimpleButtonCell handleTapAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e40ab4(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126b10d8;
  uVar4 = *(ulong *)(param_1 + _DAT_11271448c);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  if (uVar1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_112714490);
    func_0x00010beeecc0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf51e00();
    func_0x00010bfd0140(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e40b7c; end: 104e40b83; -[SCSpotlightManagementProfileSimpleButtonCell shouldAdjustBackgroundColorForHighlightedState] */

undefined8 FUN_104e40b7c(void)

{
  return 0;
}



/* Entry: 104e40b84; end: 104e40b8f; +[SCSpotlightManagementProfileSimpleButtonCell sizeWithViewModel:constrainedToSize:] */

void FUN_104e40b84(void)

{
  return;
}



/* Entry: 104e40b90; end: 104e40b9f; -[SCSpotlightManagementProfileSimpleButtonCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104e40b90(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271448c);
}



/* Entry: 104e40ba0; end: 104e40baf; -[SCSpotlightManagementProfileSimpleButtonCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104e40ba0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112714490);
}



/* Entry: 104e40bb0; end: 104e40bef; -[SCSpotlightManagementProfileSimpleButtonCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e40bb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112714490;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e40bf0; end: 104e40c2f; -[SCSpotlightManagementProfileSimpleButtonCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e40bf0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112714490,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271448c,0);
  return;
}



/* Entry: 104e40c30; end: 104e40d83; -[SCSpotlightManagementProfileViewMoreButton initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104e40c30(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e4760;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112714494);
    *(undefined **)((long)puVar1 + (long)_DAT_112714494) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_112714498);
    *(undefined **)((long)puVar1 + (long)_DAT_112714498) = puVar2;
    _objc_release(uVar5);
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010bfb3e40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c271420(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar3);
    _objc_release(uVar4);
    _objc_release(uVar5);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4010000000000000);
    _objc_release(puVar3);
    func_0x00010c160fc0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104e40d84; end: 104e40e0b; -[SCSpotlightManagementProfileViewMoreButton layoutSubviews] */

void FUN_104e40d84(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e4760;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_layoutSubviews_112600e60);
  uVar1 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar1);
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4010000000000000);
  _objc_release(param_1);
  return;
}



/* Entry: 104e40e0c; end: 104e40e23; -[SCSpotlightManagementProfileViewMoreButton intrinsicContentSize] */

undefined1  [16] FUN_104e40e0c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(undefined8 *)PTR__UIViewNoIntrinsicMetric_110345e70;
  auVar1._8_8_ = 0x4040000000000000;
  return auVar1;
}



/* Entry: 104e40e24; end: 104e40e67; -[SCSpotlightManagementProfileViewMoreButton text] */

void FUN_104e40e24(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e40e68; end: 104e40ed3; -[SCSpotlightManagementProfileViewMoreButton setText:] */

void FUN_104e40e68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c216260(param_1,param_2,param_3,0);
  func_0x00010c216260(param_1,param_2,param_3,4);
  func_0x00010c216260(param_1,param_2,param_3,1);
  func_0x00010c216260(param_1,param_2,param_3,5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e40ed4; end: 104e40f3f; -[SCSpotlightManagementProfileViewMoreButton setForegroundColor:] */

void FUN_104e40ed4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c216380(param_1,param_2,param_3,0);
  func_0x00010c216380(param_1,param_2,param_3,4);
  func_0x00010c216380(param_1,param_2,param_3,1);
  func_0x00010c216380(param_1,param_2,param_3,5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e40f40; end: 104e40f47; -[SCSpotlightManagementProfileViewMoreButton foregroundColor] */

void FUN_104e40f40(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c271270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_titleColorForState__112679ec0,0);
  return;
}



/* Entry: 104e40f48; end: 104e40fbf; -[SCSpotlightManagementProfileViewMoreButton setBackgroundColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e40f48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112714494);
  *(undefined8 *)(param_1 + _DAT_112714494) = uVar1;
  _objc_release(uVar2);
  puStack_28 = PTR_PTR_1126e4760;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_setBackgroundColor__112639330,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 104e40fc0; end: 104e4101b; -[SCSpotlightManagementProfileViewMoreButton setHighlighted:] */

void FUN_104e40fc0(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long alStack_30 [2];
  long alStack_20 [2];
  
  lVar1 = 4;
  plVar2 = alStack_20;
  if (param_3 == 0) {
    lVar1 = 0;
    plVar2 = alStack_30;
  }
  uVar3 = *(undefined8 *)(param_1 + *(int *)(&DAT_112714494 + lVar1));
  *plVar2 = param_1;
  plVar2[1] = (long)PTR_PTR_1126e4760;
  _objc_msgSendSuper2(plVar2,PTR_s_setBackgroundColor__112639330,uVar3);
  return;
}



/* Entry: 104e4101c; end: 104e4102b; -[SCSpotlightManagementProfileViewMoreButton highlightedColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104e4101c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112714498);
}



/* Entry: 104e4102c; end: 104e4106b; -[SCSpotlightManagementProfileViewMoreButton setHighlightedColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e4102c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112714498;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e4106c; end: 104e410ab; -[SCSpotlightManagementProfileViewMoreButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e4106c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112714498,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112714494,0);
  return;
}



/* Entry: 104e410ac; end: 104e411b7; -[SCSpotlightManagementProfileSimpleButtonCellViewModel initWithTitleText:customBackgroundColor:customForegroundColor:actionModel:] */

undefined1 *
FUN_104e410ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e4768;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


