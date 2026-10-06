/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106bcf064; end: 106bcf073; -[SCLensCarouselCTAHandlingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bcf064(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275a020);
  return;
}



/* Entry: 106bcf074; end: 106bcf157; -[SCLensCarouselCollectionControllerCreatingServiceProvider provide] */

void FUN_106bcf074(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126d1198;
  _objc_alloc(PTR_PTR_1126d1198);
  func_0x00010c022cc0();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106bcf158; end: 106bcf197;  */

void FUN_106bcf158(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf5ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106bcf198; end: 106bcf58f; -[SCLensCarouselCollectionControllerCreatingServiceProvider _creator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bcf198(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126affa8;
  func_0x00010c22bc20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d11a0;
  _objc_alloc();
  lVar3 = param_1 + _DAT_11275a024;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010bf29c00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c27f000();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_11275a028;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c094480();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_11275a02c;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010c0911a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c091180();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_11275a030;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010c0911e0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_11275a034;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010c095b60();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010bdd10c0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_11275a038;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010c090b20();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar18;
  func_0x00010c08d020();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + _DAT_11275a03c;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010c091200();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar21;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + _DAT_11275a040;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010c096100();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar24;
  func_0x00010c090680();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1 + _DAT_11275a044;
  _objc_loadWeakRetained();
  lVar27 = lVar26;
  func_0x00010c090b60();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar27;
  func_0x00010c090b40();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1 + _DAT_11275a048;
  _objc_loadWeakRetained();
  lVar30 = lVar29;
  func_0x00010bf2b640();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = lVar30;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = lVar31;
  func_0x00010bf4b340();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_1 + _DAT_11275a04c;
  _objc_loadWeakRetained();
  lVar34 = lVar33;
  func_0x00010bfa1d40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11275a050;
  _objc_loadWeakRetained();
  lVar35 = param_1;
  func_0x00010c0cdfc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c022580(puVar2,param_2,lVar6,lVar8,lVar11,lVar13,lVar15,lVar16,lVar19,lVar22,puVar1,
                      lVar25,lVar28,lVar32,lVar34,lVar35,0);
  _objc_release(lVar35);
  _objc_release(param_1);
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
  _objc_release(lVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106bcf590; end: 106bcf663; -[SCLensCarouselCollectionControllerCreatingServiceProvider _attributionProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bcf590(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_1 = param_1 + _DAT_11275a054;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106bcf634;
  puStack_30 = &UNK_110966740;
  puVar2 = PTR_PTR_1126ae720;
  lStack_28 = lVar1;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106bcf664; end: 106bcf72b; -[SCLensCarouselCollectionControllerCreatingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bcf664(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275a054);
  _objc_destroyWeak(param_1 + _DAT_11275a050);
  _objc_destroyWeak(param_1 + _DAT_11275a044);
  _objc_destroyWeak(param_1 + _DAT_11275a040);
  _objc_destroyWeak(param_1 + _DAT_11275a034);
  _objc_destroyWeak(param_1 + _DAT_11275a03c);
  _objc_destroyWeak(param_1 + _DAT_11275a030);
  _objc_destroyWeak(param_1 + _DAT_11275a02c);
  _objc_destroyWeak(param_1 + _DAT_11275a028);
  _objc_destroyWeak(param_1 + _DAT_11275a038);
  _objc_destroyWeak(param_1 + _DAT_11275a048);
  _objc_destroyWeak(param_1 + _DAT_11275a024);
  _objc_destroyWeak(param_1 + _DAT_11275a058);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275a04c);
  return;
}



/* Entry: 106bcf72c; end: 106bcf857; -[SCLensCarouselCollectionControllerOnPreviewServiceProvider provide] */

void FUN_106bcf72c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d11b0;
  _objc_alloc(PTR_PTR_1126d11b0);
  func_0x00010c022ca0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106bcf858; end: 106bcf8df;  */

void FUN_106bcf858(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf5ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106bcf8e0; end: 106bcfc1b; -[SCLensCarouselCollectionControllerOnPreviewServiceProvider _creator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bcf8e0(long param_1,undefined8 param_2)

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
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  
  if (param_1 == 0) {
    lVar22 = 0;
  }
  else {
    lVar22 = param_1 + _DAT_11275a080;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar22;
  func_0x00010c095da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar22);
  puVar2 = PTR_PTR_1126d11b8;
  _objc_alloc();
  lVar22 = param_1;
  FUN_106bcfc1c();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar22;
  func_0x00010c112480();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf32c40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_11275a06c;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar17;
  func_0x00010c094480();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_11275a07c;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar18;
  func_0x00010c095b60();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010bdd10c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_11275a070;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar19;
  func_0x00010c0911e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_11275a074;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar20;
  func_0x00010c090b20();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c08d020();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = param_1 + _DAT_11275a060;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar21;
  func_0x00010bfa1d40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  FUN_106bcfc1c();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c110900();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_11275a078;
    _objc_loadWeakRetained();
  }
  lVar15 = param_1;
  func_0x00010c097900();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c27f000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c025f00(puVar2,param_2,lVar5,lVar6,lVar7,lVar8,lVar9,lVar11,lVar12,lVar14,lVar16,lVar1
                     );
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(param_1);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar21);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar20);
  _objc_release(lVar9);
  _objc_release(lVar19);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar18);
  _objc_release(lVar6);
  _objc_release(lVar17);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar22);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106bcfc1c; end: 106bcfc3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bcfc1c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11275a068);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bcfc40; end: 106bcfd13; -[SCLensCarouselCollectionControllerOnPreviewServiceProvider _attributionProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bcfc40(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_1 = param_1 + _DAT_11275a05c;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106bcfce4;
  puStack_30 = &UNK_110966740;
  puVar2 = PTR_PTR_1126ae720;
  lStack_28 = lVar1;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106bcfd14; end: 106bcfdab; -[SCLensCarouselCollectionControllerOnPreviewServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bcfd14(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275a05c);
  _objc_destroyWeak(param_1 + _DAT_11275a080);
  _objc_destroyWeak(param_1 + _DAT_11275a07c);
  _objc_destroyWeak(param_1 + _DAT_11275a078);
  _objc_destroyWeak(param_1 + _DAT_11275a074);
  _objc_destroyWeak(param_1 + _DAT_11275a070);
  _objc_destroyWeak(param_1 + _DAT_11275a06c);
  _objc_destroyWeak(param_1 + _DAT_11275a068);
  _objc_destroyWeak(param_1 + _DAT_11275a064);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275a060);
  return;
}



/* Entry: 106bcfdac; end: 106bcfed7; -[SCLensCarouselCollectionControllerOnSnapEditorServiceProvider provide] */

void FUN_106bcfdac(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d11b0;
  _objc_alloc(PTR_PTR_1126d11b0);
  func_0x00010c022ca0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106bcfed8; end: 106bcff5f;  */

void FUN_106bcfed8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf5ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106bcff60; end: 106bd02cb; -[SCLensCarouselCollectionControllerOnSnapEditorServiceProvider _creator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bcff60(long param_1,undefined8 param_2)

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
  
  if (param_1 == 0) {
    lVar24 = 0;
  }
  else {
    lVar24 = param_1 + _DAT_11275a0a8;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar24;
  func_0x00010c095da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar24);
  puVar2 = PTR_PTR_1126d11b8;
  _objc_alloc();
  lVar24 = param_1;
  FUN_106bd02cc();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar24;
  func_0x00010c090ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c112480();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf32c40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_11275a094;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar19;
  func_0x00010c094480();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_11275a0a4;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar20;
  func_0x00010c095b60();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bdd10c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = param_1 + _DAT_11275a098;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar21;
  func_0x00010c0911e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar22 = 0;
  }
  else {
    lVar22 = param_1 + _DAT_11275a09c;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar22;
  func_0x00010c090b20();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c08d020();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar23 = 0;
  }
  else {
    lVar23 = param_1 + _DAT_11275a088;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar23;
  func_0x00010bfa1d40();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  FUN_106bd02cc();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c090ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c110900();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_11275a0a0;
    _objc_loadWeakRetained();
  }
  lVar17 = param_1;
  func_0x00010c097900();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010c27f000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c025f00(puVar2,param_2,lVar6,lVar7,lVar8,lVar9,lVar10,lVar12,lVar13,lVar16,lVar18,
                      lVar1);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(param_1);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar23);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar22);
  _objc_release(lVar10);
  _objc_release(lVar21);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar20);
  _objc_release(lVar7);
  _objc_release(lVar19);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar24);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106bd02cc; end: 106bd02ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bd02cc(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11275a090);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bd02f0; end: 106bd03c3; -[SCLensCarouselCollectionControllerOnSnapEditorServiceProvider _attributionProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bd02f0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_1 = param_1 + _DAT_11275a084;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106bd0394;
  puStack_30 = &UNK_110966740;
  puVar2 = PTR_PTR_1126ae720;
  lStack_28 = lVar1;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106bd03c4; end: 106bd045b; -[SCLensCarouselCollectionControllerOnSnapEditorServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bd03c4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275a084);
  _objc_destroyWeak(param_1 + _DAT_11275a0a8);
  _objc_destroyWeak(param_1 + _DAT_11275a0a4);
  _objc_destroyWeak(param_1 + _DAT_11275a0a0);
  _objc_destroyWeak(param_1 + _DAT_11275a09c);
  _objc_destroyWeak(param_1 + _DAT_11275a098);
  _objc_destroyWeak(param_1 + _DAT_11275a094);
  _objc_destroyWeak(param_1 + _DAT_11275a090);
  _objc_destroyWeak(param_1 + _DAT_11275a08c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275a088);
  return;
}



/* Entry: 106bd045c; end: 106bd0587; -[SCLensCarouselCollectionControllerOnVideoCallServiceProvider provide] */

void FUN_106bd045c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d11b0;
  _objc_alloc(PTR_PTR_1126d11b0);
  func_0x00010c022ca0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106bd0588; end: 106bd060f;  */

void FUN_106bd0588(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf5ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106bd0610; end: 106bd091b; -[SCLensCarouselCollectionControllerOnVideoCallServiceProvider _creator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bd0610(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126d11c0;
  _objc_alloc();
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_11275a0b0;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar15;
  func_0x00010c098400();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_11275a0b4;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar16;
  func_0x00010c094480();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_11275a0c4;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar17;
  func_0x00010c095b60();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bdd10c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_11275a0c8;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar18;
  func_0x00010c096100();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c090680();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_11275a0b8;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar19;
  func_0x00010c0911e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_11275a0bc;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar20;
  func_0x00010c090b20();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c08d020();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = param_1 + _DAT_11275a0cc;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar21;
  func_0x00010c090b60();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c090b40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_11275a0c0;
    _objc_loadWeakRetained();
  }
  lVar13 = param_1;
  func_0x00010c097900();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c27f000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c025ee0(puVar1,param_2,lVar2,lVar3,lVar4,lVar5,lVar7,lVar8,lVar10,lVar12,lVar14);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(param_1);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar21);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar20);
  _objc_release(lVar8);
  _objc_release(lVar19);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar18);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar17);
  _objc_release(lVar3);
  _objc_release(lVar16);
  _objc_release(lVar2);
  _objc_release(lVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106bd091c; end: 106bd09ef; -[SCLensCarouselCollectionControllerOnVideoCallServiceProvider _attributionProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bd091c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_1 = param_1 + _DAT_11275a0ac;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106bd09c0;
  puStack_30 = &UNK_110966740;
  puVar2 = PTR_PTR_1126ae720;
  lStack_28 = lVar1;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106bd09f0; end: 106bd0a7b; -[SCLensCarouselCollectionControllerOnVideoCallServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bd09f0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275a0ac);
  _objc_destroyWeak(param_1 + _DAT_11275a0cc);
  _objc_destroyWeak(param_1 + _DAT_11275a0c8);
  _objc_destroyWeak(param_1 + _DAT_11275a0c4);
  _objc_destroyWeak(param_1 + _DAT_11275a0c0);
  _objc_destroyWeak(param_1 + _DAT_11275a0bc);
  _objc_destroyWeak(param_1 + _DAT_11275a0b8);
  _objc_destroyWeak(param_1 + _DAT_11275a0b4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275a0b0);
  return;
}



/* Entry: 106bd0a7c; end: 106bd0b87; -[SCLensCarouselEventsHandingServiceProvider provide] */

void FUN_106bd0a7c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d11c8;
  _objc_alloc(PTR_PTR_1126d11c8);
  puVar3 = PTR_PTR_1126d11d0;
  _objc_alloc(PTR_PTR_1126d11d0);
  func_0x00010c022c00();
  func_0x00010c022dc0(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106bd0b88; end: 106bd0bd7;  */

void FUN_106bd0b88(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010be338e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106bd0bd8; end: 106bd0f47; -[SCLensCarouselEventsHandingServiceProvider _handler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bd0bd8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  
  lVar1 = param_1;
  func_0x00010be90680();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_11275a0d0;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf29c00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c096ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar5 = PTR_PTR_1126d10d0;
  _objc_alloc();
  lVar16 = (long)_DAT_11275a0d4;
  lVar2 = param_1 + lVar16;
  _objc_loadWeakRetained(lVar2);
  lVar6 = lVar2;
  func_0x00010bf2bbc0();
  func_0x00010bffc140(puVar5,param_2,lVar6);
  _objc_release(lVar2);
  puVar7 = PTR_PTR_1126d11d8;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11275a0d8;
  _objc_loadWeakRetained();
  lVar8 = lVar2;
  func_0x00010c0908c0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c090880();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar3;
  func_0x00010c269d40(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010bf2b980();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = (long)_DAT_11275a0dc;
  lVar6 = param_1 + lVar15;
  _objc_loadWeakRetained(lVar6);
  lVar12 = lVar6;
  func_0x00010c094e60();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + lVar16;
  _objc_loadWeakRetained(lVar16);
  lVar13 = lVar16;
  func_0x00010bf2bbc0();
  func_0x00010c022d40(puVar7,param_2,lVar9,lVar11,lVar12,lVar13,puVar5);
  _objc_release(lVar16);
  _objc_release(lVar12);
  _objc_release(lVar6);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar2);
  puVar14 = PTR_PTR_1126d11e0;
  _objc_alloc();
  lVar15 = param_1 + lVar15;
  _objc_loadWeakRetained();
  lVar8 = lVar15;
  func_0x00010c094e60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_11275a0e0;
  _objc_loadWeakRetained();
  lVar9 = lVar2;
  func_0x00010c2a0900();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11275a0e4;
  _objc_loadWeakRetained();
  lVar10 = lVar6;
  func_0x00010c090b60();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c090b40();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_11275a0e8;
  _objc_loadWeakRetained();
  lVar12 = lVar16;
  func_0x00010c094b80();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11275a0ec;
  _objc_loadWeakRetained();
  lVar13 = param_1;
  func_0x00010c27f000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c024d80(puVar14,param_2,lVar8,lVar9,lVar4,puVar7,lVar1,lVar11,lVar12,lVar13);
  _objc_release(lVar13);
  _objc_release(param_1);
  _objc_release(lVar12);
  _objc_release(lVar16);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar6);
  _objc_release(lVar9);
  _objc_release(lVar2);
  _objc_release(lVar8);
  _objc_release(lVar15);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 106bd0f48; end: 106bd10fb; -[SCLensCarouselEventsHandingServiceProvider _reporter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bd0f48(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  
  lVar1 = param_1 + _DAT_11275a0d8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0908c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0925e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf5f1a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126d11e8;
  _objc_alloc(PTR_PTR_1126d11e8);
  func_0x00010c023960();
  puVar7 = PTR_PTR_1126d11f0;
  _objc_alloc(PTR_PTR_1126d11f0);
  lVar1 = param_1 + _DAT_11275a0f0;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010c090a00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_11275a0dc;
  _objc_loadWeakRetained(lVar2);
  lVar4 = lVar2;
  func_0x00010c094e60();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11275a0ec;
  _objc_loadWeakRetained(param_1);
  lVar9 = param_1;
  func_0x00010c27f000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c022e40(puVar7,param_2,lVar3,lVar8,lVar9,puVar6);
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_release(lVar8);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(puVar6);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106bd10fc; end: 106bd1187; -[SCLensCarouselEventsHandingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bd10fc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275a0e4);
  _objc_destroyWeak(param_1 + _DAT_11275a0e0);
  _objc_destroyWeak(param_1 + _DAT_11275a0e8);
  _objc_destroyWeak(param_1 + _DAT_11275a0dc);
  _objc_destroyWeak(param_1 + _DAT_11275a0f0);
  _objc_destroyWeak(param_1 + _DAT_11275a0d8);
  _objc_destroyWeak(param_1 + _DAT_11275a0ec);
  _objc_destroyWeak(param_1 + _DAT_11275a0d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275a0d4);
  return;
}



/* Entry: 106bd1188; end: 106bd1223; -[SCLensCarouselScopedCameraUIContainerServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bd1188(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126d11f8;
  _objc_alloc(PTR_PTR_1126d11f8);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_11275a0f4;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c0910a0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf2b640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffbd80(puVar1,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106bd1224; end: 106bd1233; -[SCLensCarouselScopedCameraUIContainerServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bd1224(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275a0f4);
  return;
}



/* Entry: 106bd1234; end: 106bd12cf; -[SCLensCarouselScopedImagineLensServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bd1234(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126d1200;
  _objc_alloc(PTR_PTR_1126d1200);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_11275a0f8;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c0910a0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfe9b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01d220(puVar1,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106bd12d0; end: 106bd12df; -[SCLensCarouselScopedImagineLensServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bd12d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275a0f8);
  return;
}



/* Entry: 106bd12e0; end: 106bd13db; -[SCLensCarouselScopedLensCarouselManagementServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bd12e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_11275a0fc;
    _objc_loadWeakRetained();
  }
  puVar1 = PTR_PTR_1126ae720;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106bd13dc;
  puStack_40 = &UNK_110966830;
  lStack_38 = param_1;
  _objc_retain(param_1);
  func_0x00010bf11fe0(puVar1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d1208;
  _objc_alloc(PTR_PTR_1126d1208);
  puVar3 = PTR_PTR_1126d1210;
  _objc_alloc(PTR_PTR_1126d1210);
  func_0x00010c022ea0();
  func_0x00010c022e80(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(lStack_38);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106bd13dc; end: 106bd142f;  */

void FUN_106bd13dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e8d80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010010fab4();
  uVar1 = uVar2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106bd1430; end: 106bd143f; -[SCLensCarouselScopedLensCarouselManagementServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bd1430(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275a0fc);
  return;
}



/* Entry: 106bd1440; end: 106bd14db; -[SCLensCarouselSettingsCoalescingServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bd1440(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126d1218;
  _objc_alloc(PTR_PTR_1126d1218);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_11275a100;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c0910a0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0911a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0231c0(puVar1,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106bd14dc; end: 106bd14eb; -[SCLensCarouselSettingsCoalescingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bd14dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275a100);
  return;
}



/* Entry: 106bd14ec; end: 106bd1607; -[SCLensCarouselTalkEventsHandingServiceProvider provide] */

void FUN_106bd14ec(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beabee0(param_1);
  puVar2 = PTR_PTR_1126d1220;
  _objc_alloc(PTR_PTR_1126d1220);
  puVar3 = PTR_PTR_1126d11d0;
  _objc_alloc(PTR_PTR_1126d11d0);
  func_0x00010c022c00();
  func_0x00010c022dc0(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106bd1608; end: 106bd1657;  */

void FUN_106bd1608(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010be338e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106bd1658; end: 106bd17d7; -[SCLensCarouselTalkEventsHandingServiceProvider _handler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bd1658(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126d1228;
  _objc_alloc(PTR_PTR_1126d1228);
  lVar2 = param_1 + _DAT_11275a104;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c094e60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11275a108;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c097900();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c27f000();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = (long)_DAT_11275a10c;
  lVar7 = param_1 + lVar11;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010c091160();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c0910e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar11;
  _objc_loadWeakRetained(param_1);
  lVar11 = param_1;
  func_0x00010c091160();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar11;
  func_0x00010c0910e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c024d00(puVar1,param_2,lVar3,lVar6,lVar9,lVar10);
  _objc_release(lVar10);
  _objc_release(lVar11);
  _objc_release(param_1);
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



/* Entry: 106bd17d8; end: 106bd18f3; -[SCLensCarouselTalkEventsHandingServiceProvider _setupDataProviderUpdateStrategyContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bd17d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_3);
  param_1 = param_1 + _DAT_11275a110;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0908c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0925e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c0e33e0(lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 106bd18f4; end: 106bd1967;  */

void FUN_106bd18f4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c269d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20e220(param_2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106bd1968; end: 106bd19ff; -[SCLensCarouselTalkEventsHandingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bd1968(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275a110);
  _objc_destroyWeak(param_1 + _DAT_11275a118);
  _objc_destroyWeak(param_1 + _DAT_11275a10c);
  _objc_destroyWeak(param_1 + _DAT_11275a108);
  _objc_destroyWeak(param_1 + _DAT_11275a104);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275a114);
  return;
}



/* Entry: 106bd1a00; end: 106bd1a53; -[SCLensCreatorProfilePresentionServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bd1a00(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275a128);
  _objc_storeStrong(param_1 + _DAT_11275a124,0);
  _objc_destroyWeak(param_1 + _DAT_11275a120);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275a11c);
  return;
}



/* Entry: 106bd1a54; end: 106bd1aef; -[SCLensFeaturesVisibilityCoalescingServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bd1a54(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126d1238;
  _objc_alloc(PTR_PTR_1126d1238);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_11275a12c;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c0910a0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c093ce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c024040(puVar1,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106bd1af0; end: 106bd1aff; -[SCLensFeaturesVisibilityCoalescingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bd1af0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275a12c);
  return;
}



/* Entry: 106bd1b00; end: 106bd1d47; -[SCLensInMainCameraActivationEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bd1b00(long param_1,undefined8 param_2)

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
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_11275a14c;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar11;
  func_0x00010bf29c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  puVar2 = PTR_PTR_1126d1240;
  _objc_alloc();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_11275a140;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar11;
  func_0x00010c090c20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c090c40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c093ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0926e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_11275a134;
    _objc_loadWeakRetained(lVar16);
  }
  lVar8 = lVar16;
  func_0x00010bf6b020(lVar16);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_11275a148;
    _objc_loadWeakRetained(lVar15);
  }
  lVar9 = lVar15;
  func_0x00010bf05fe0(lVar15);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_11275a144;
    _objc_loadWeakRetained(lVar13);
  }
  lVar10 = lVar13;
  func_0x00010c0911e0(lVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c022f80(puVar2,param_2,lVar4,lVar7,lVar8,lVar9,lVar10);
  lVar14 = (long)_DAT_11275a130;
  uVar12 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar2;
  _objc_release(uVar12);
  _objc_release(lVar10);
  _objc_release(lVar13);
  _objc_release(lVar9);
  _objc_release(lVar15);
  _objc_release(lVar8);
  _objc_release(lVar16);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar11);
  func_0x00010bf17a60(*(undefined8 *)(param_1 + lVar14));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106bd1d48; end: 106bd1da3; -[SCLensInMainCameraActivationEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bd1d48(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275a130);
  *(undefined8 *)(param_1 + _DAT_11275a130) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126f5830;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bd1da4; end: 106bd1e27; -[SCLensInMainCameraActivationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bd1da4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275a14c);
  _objc_destroyWeak(param_1 + _DAT_11275a148);
  _objc_destroyWeak(param_1 + _DAT_11275a144);
  _objc_destroyWeak(param_1 + _DAT_11275a140);
  _objc_destroyWeak(param_1 + _DAT_11275a13c);
  _objc_destroyWeak(param_1 + _DAT_11275a138);
  _objc_destroyWeak(param_1 + _DAT_11275a134);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275a130,0);
  return;
}



/* Entry: 106bd1e28; end: 106bd1ea3; -[SCLensURLBrowserServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bd1e28(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126d1248;
  _objc_alloc(PTR_PTR_1126d1248);
  param_1 = param_1 + _DAT_11275a150;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c097940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c025a40(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106bd1ea4; end: 106bd1edb; -[SCLensURLBrowserServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bd1ea4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275a150);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275a154);
  return;
}



/* Entry: 106bd1edc; end: 106bd2073; -[SCLensValidatingServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bd1edc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_11275a15c;
    _objc_loadWeakRetained();
  }
  lVar1 = param_1;
  func_0x00010c095f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x106bd1fb8;
  puStack_40 = &UNK_1109668c0;
  puVar2 = PTR_PTR_1126ae720;
  lStack_38 = lVar1;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d1260;
  _objc_alloc(PTR_PTR_1126d1260);
  func_0x00010c025d00();
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106bd2074; end: 106bd20ab; -[SCLensValidatingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bd2074(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275a15c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275a158);
  return;
}



/* Entry: 106bd20ac; end: 106bd2583; -[SCCameraLensesUIControllerFactory initLensIconRepository:currentPageTracker:featureSettingsService:cameraFeatureCatalog:lensUserProvider:LSALensComponent:lensLogger:lensPreferences:hapticsManager:lensTooltipsService:lensCarouselSettings:lensCarouselStudySettings:lensCarouselFunnelLogger:grapheneRegistry:lensVideoEditingLauncher:lensPerformerProvider:lensModalListener:lensEntryPointTracker:lensCarouselApplicator:lensesStudySettingsProvider:lensFeatureContainer:lensCarouselLayoutProvider:lensCTAHandler:ctaViewControllerProvider:lensesFeaturesInfoProvider:lensDataConfig:visibilityController:lensCarouselLensDownloader:lensCarouselCollectionController:] */

undefined8 *
FUN_106bd20ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined4 param_15,undefined4 param_16,
             undefined8 param_17,undefined4 param_18,undefined4 param_19,undefined8 param_20,
             undefined4 param_21,undefined4 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined4 param_29,undefined4 param_30,undefined8 param_31,undefined4 param_32,
             undefined4 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  _objc_retain(param_17);
  _objc_retain(param_20);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_31);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  puStack_70 = PTR_PTR_1126f5840;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0xc,param_8);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[10];
    puVar1[10] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_23;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x10,param_24);
    _objc_retain(param_25);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_36;
    _objc_release(uVar2);
  }
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_31);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_20);
  _objc_release(param_17);
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



/* Entry: 106bd2584; end: 106bd296f; -[SCCameraLensesUIControllerFactory createCameraLensesUIControllerWithUiUpdateAnnouncer:cameraViewControllerInfoProvider:cameraOverlayViewDelegate:cameraLensesViewControllerManager:lensCarouselManager:] */

void FUN_106bd2584(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
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
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  
  puVar3 = PTR_PTR_1126d1278;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  uVar4 = param_4;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf2bbc0();
  uVar6 = param_4;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar7 = uVar6;
  func_0x00010bf2a1a0();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = *(undefined8 *)(param_1 + 0x90);
  lVar8 = param_1 + 0x60;
  _objc_loadWeakRetained();
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c094840();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c093b00();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c093c40();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c091720();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c098840();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar18;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = *(undefined8 *)(param_1 + 0x10);
  uVar31 = *(undefined8 *)(param_1 + 8);
  uVar29 = *(undefined8 *)(param_1 + 0x48);
  uVar21 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c092ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar21;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uVar23 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c096a80();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar23;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c096aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar25;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = *(undefined8 *)(param_1 + 0x78);
  lVar27 = param_1 + 0x80;
  _objc_loadWeakRetained();
  func_0x00010bffb760(puVar3,param_2,param_6,uVar5,uVar7,uVar28,param_5,lVar8,uVar9,uVar11,uVar13,
                      uVar15,uVar17,uVar19,uVar20,uVar31,uVar32,uVar29,param_3,uVar22,uVar1,uVar2,
                      uVar24,uVar26,uVar30,lVar27,*(undefined8 *)(param_1 + 0xa0),
                      *(undefined8 *)(param_1 + 0xa8),param_7,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xb8),
                      *(undefined8 *)(param_1 + 0xc0));
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(lVar27);
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
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106bd2970; end: 106bd2a9f; -[SCCameraLensesUIControllerFactory .cxx_destruct] */

void FUN_106bd2970(long param_1)

{
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_destroyWeak(param_1 + 0x80);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_destroyWeak(param_1 + 0x60);
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



/* Entry: 106bd2aa0; end: 106bd2e87; -[SCCameraLensesViewControllerObjectsCreator initWithUserSession:cameraFeatureCatalog:circumstanceEngine:lensContentServices:currentPageTracker:featureSettingsService:lensRemoteApiRPCHandler:photoPermissionCoordinator:lensUserProvider:LSALensComponent:lensLogger:snapTokenProvider:lensTooltipsService:lensExplorerStudySettings:lensCarouselSettings:lensCarouselStudySettings:lensCarouselFunnelLogger:lensStudioRequestHandler:lensUserDataProvider:applicationLifecycleEvents:memoriesDataMutatingAddSnap:grapheneRegistry:userPreferences:requestManager:lensPreferences:lensVideoEditingLauncher:locationPermissionsManager:onboardingObservable:lensPerformerProvider:lensModalListener:lensEntryPointTracker:lensCarouselApplicator:lensesStudySettingsProvider:lensFeatureContainer:lensCarouselLayoutProvider:lensCTAHandler:locationProvider:ctaViewControllerProvider:lensesFeaturesInfoProvider:lensDataConfig:visibilityController:lensCarouselLensDownloader:lensCarouselCollectionController:] */

undefined8 *
FUN_106bd2aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(in_stack_00000010);
  _objc_retain(in_stack_00000018);
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000030);
  _objc_retain(in_stack_00000040);
  _objc_retain(in_stack_00000048);
  _objc_retain(in_stack_00000050);
  _objc_retain(in_stack_00000078);
  _objc_retain(in_stack_00000090);
  _objc_retain(in_stack_00000098);
  _objc_retain(in_stack_000000b0);
  _objc_retain(in_stack_000000b8);
  _objc_retain(in_stack_000000c0);
  _objc_retain(in_stack_000000c8);
  _objc_retain(in_stack_000000d0);
  _objc_retain(in_stack_000000d8);
  _objc_retain(in_stack_000000e0);
  _objc_retain(in_stack_000000e8);
  _objc_retain(in_stack_000000f8);
  _objc_retain(in_stack_00000100);
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puStack_70 = PTR_PTR_1126f5848;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126affa8;
    func_0x00010c22bc20();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126d1280;
    _objc_alloc();
    uVar4 = param_6;
    func_0x00010c094480(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfeee80();
    uVar5 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
  _objc_release(in_stack_00000120);
  _objc_release(in_stack_00000118);
  _objc_release(in_stack_00000110);
  _objc_release(in_stack_00000108);
  _objc_release(in_stack_00000100);
  _objc_release(in_stack_000000f8);
  _objc_release(in_stack_000000e8);
  _objc_release(in_stack_000000e0);
  _objc_release(in_stack_000000d8);
  _objc_release(in_stack_000000d0);
  _objc_release(in_stack_000000c8);
  _objc_release(in_stack_000000c0);
  _objc_release(in_stack_000000b8);
  _objc_release(in_stack_000000b0);
  _objc_release(in_stack_00000098);
  _objc_release(in_stack_00000090);
  _objc_release(in_stack_00000078);
  _objc_release(in_stack_00000050);
  _objc_release(in_stack_00000048);
  _objc_release(in_stack_00000040);
  _objc_release(in_stack_00000030);
  _objc_release(in_stack_00000020);
  _objc_release(in_stack_00000018);
  _objc_release(in_stack_00000010);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 106bd2e88; end: 106bd2e8f; -[SCCameraLensesViewControllerObjectsCreator createCameraLensesUIControllerWithUiUpdateAnnouncer:cameraViewControllerInfoProvider:cameraOverlayViewDelegate:cameraLensesViewControllerManager:lensCarouselManager:] */

void FUN_106bd2e88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf54f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_createCameraLensesUIControllerWi_1125b2d88);
  return;
}



/* Entry: 106bd2e90; end: 106bd2e9b; -[SCCameraLensesViewControllerObjectsCreator .cxx_destruct] */

void FUN_106bd2e90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bd2e9c; end: 106bd2ef7; -[SCLensDataProviderAdapter showBirthdayReplyLens] */

undefined8 FUN_106bd2e9c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5f180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c236200(uVar2);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 106bd2ef8; end: 106bd2f57; -[SCLensDataProviderAdapter setShowBirthdayReplyLens:] */

void FUN_106bd2ef8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5f180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c201820(uVar2,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106bd2f58; end: 106bd2fe3; -[SCLensDataProviderAdapter applicableContext] */

void FUN_106bd2f58(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  ppuVar1 = *(undefined ***)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bf5f180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  ppuVar3 = ppuVar2;
  func_0x00010bf07500();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar1 = ppuVar3;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106bd2fe4; end: 106bd3043; -[SCLensDataProviderAdapter updateLensDataStore] */

void FUN_106bd2fe4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf02120();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2a1ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_warmupLensDataStore_1126861e0);
  return;
}



/* Entry: 106bd3044; end: 106bd308b; -[SCLensDataProviderAdapter .cxx_destruct] */

void FUN_106bd3044(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bd308c; end: 106bd3173; -[SCLensDataProviderSimpleUpdater initWithUIUpdateAnnouncer:activationSourceMapper:contextRegistry:] */

undefined1 *
FUN_106bd308c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f5858;
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
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106bd3174; end: 106bd319b; -[SCLensDataProviderSimpleUpdater currentLensDataProviderProxy] */

void FUN_106bd3174(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106bd319c; end: 106bd31c3; -[SCLensDataProviderSimpleUpdater lensDataProviderUpdateEventsObservable] */

void FUN_106bd319c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106bd31c4; end: 106bd3227; -[SCLensDataProviderSimpleUpdater setUpLensesWithLensDataProvider:] */

void FUN_106bd31c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d1118;
  _objc_opt_new(PTR_PTR_1126d1118);
  func_0x00010c287160(param_1,param_2,param_3,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106bd3228; end: 106bd322b; -[SCLensDataProviderSimpleUpdater updateLensDataProviderWithCameraType:] */

void FUN_106bd3228(void)

{
  return;
}



/* Entry: 106bd322c; end: 106bd322f; -[SCLensDataProviderSimpleUpdater updateLensDataProviderWithCameraType:updatingStrategy:] */

void FUN_106bd322c(void)

{
  return;
}



/* Entry: 106bd3230; end: 106bd3233; -[SCLensDataProviderSimpleUpdater updateLensDataProviderWithFeatureLensCarouselType:] */

void FUN_106bd3230(void)

{
  return;
}



/* Entry: 106bd3234; end: 106bd3237; -[SCLensDataProviderSimpleUpdater updateLensDataProviderWithActivationSource:] */

void FUN_106bd3234(void)

{
  return;
}



/* Entry: 106bd3238; end: 106bd323b; -[SCLensDataProviderSimpleUpdater updateLensDataProviderWithLensesObservable:activationConfiguration:] */

void FUN_106bd3238(void)

{
  return;
}



/* Entry: 106bd323c; end: 106bd3243; -[SCLensDataProviderSimpleUpdater updateLensDataProvider:updatingStrategy:] */

void FUN_106bd323c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c287190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_updateLensDataProvider_updatingS_11267f688,param_3,param_4,0);
  return;
}



/* Entry: 106bd3244; end: 106bd3393; -[SCLensDataProviderSimpleUpdater updateLensDataProvider:updatingStrategy:lensIdToRestore:] */

void FUN_106bd3244(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf089c0(param_4,param_2,lVar1);
  _objc_release(param_4);
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar2 = PTR_PTR_1126d1288;
  func_0x00010c2a6a40(PTR_PTR_1126d1288,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar4,param_2,puVar2);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar4 = param_3;
  func_0x00010c0978e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980(uVar5,param_2,uVar4);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar2 = PTR_PTR_1126d1288;
  func_0x00010bf725a0(PTR_PTR_1126d1288,param_2,param_3,1,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c0d9840(uVar4,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106bd3394; end: 106bd339f; -[SCLensDataProviderSimpleUpdater setStrategyContext:] */

void FUN_106bd3394(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 106bd33a0; end: 106bd33a7; -[SCLensDataProviderSimpleUpdater registerDataProviderWithContextId:contextConfig:] */

void FUN_106bd33a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1262b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_registerDataProviderWithContextI_1126272c8);
  return;
}



/* Entry: 106bd33a8; end: 106bd345b; -[SCLensDataProviderSimpleUpdater activateDataProviderWithContextId:] */

void FUN_106bd33a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bf641c0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if ((lVar2 != 0) && (lVar2 != *(long *)(param_1 + 0x28))) {
    lVar1 = param_1;
    func_0x00010bee5580(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c287160(param_1,param_2,lVar2,lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106bd345c; end: 106bd3463; -[SCLensDataProviderSimpleUpdater deregisterDataProviderWithContextId:] */

void FUN_106bd345c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6e1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_deregisterDataProviderWithContex_1125b9218);
  return;
}



/* Entry: 106bd3464; end: 106bd35ab; -[SCLensDataProviderSimpleUpdater _updatingStrategyForContextId:] */

void FUN_106bd3464(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bf4e460();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126d1118;
    _objc_opt_new(PTR_PTR_1126d1118);
  }
  else {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 1;
    func_0x00010c0bf4e0(lVar1);
    func_0x00010c096cc0(*(undefined8 *)(param_1 + 0x10));
    puVar2 = PTR_PTR_1126d1290;
    _objc_alloc(PTR_PTR_1126d1290);
    func_0x00010c0258e0();
    __Block_object_dispose(&uStack_50,8);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106bd35ac; end: 106bd35cf;  */

void FUN_106bd35ac(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 106bd35d0; end: 106bd362b; -[SCLensDataProviderSimpleUpdater .cxx_destruct] */

void FUN_106bd35d0(long param_1)

{
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



/* Entry: 106bd362c; end: 106bd3637; -[SCLensDataStoreUpdatingNull applicableContext] */

undefined ** FUN_106bd362c(void)

{
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 106bd3638; end: 106bd363b; -[SCLensDataStoreUpdatingNull warmUp] */

void FUN_106bd3638(void)

{
  return;
}



/* Entry: 106bd363c; end: 106bd363f; -[SCLensDataStoreUpdatingNull warmupLensDataStore] */

void FUN_106bd363c(void)

{
  return;
}



/* Entry: 106bd3640; end: 106bd3643; -[SCLensDataStoreUpdatingNull updateLensDataStore] */

void FUN_106bd3640(void)

{
  return;
}



/* Entry: 106bd3644; end: 106bd364b; -[SCLensDataStoreUpdatingNull showBirthdayReplyLens] */

undefined1 FUN_106bd3644(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106bd364c; end: 106bd3653; -[SCLensDataStoreUpdatingNull setShowBirthdayReplyLens:] */

void FUN_106bd364c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 106bd3654; end: 106bd3823; -[SCLensVideoCallPredefinedDataProviderFactoryImpl initWithBundledLensProvider:lensExplorerStudySettings:lensCarouselConfigProvider:callingCarouselMetadataStoreCreator:lensPickerMetadataStore:unlockableDataStoreServices:lensPerformerProvider:lensDataProviderCreator:lensUnlockableDataProviderCreator:] */

undefined1 *
FUN_106bd3654(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  puStack_68 = PTR_PTR_1126f5860;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
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



/* Entry: 106bd3824; end: 106bd3847; -[SCLensVideoCallPredefinedDataProviderFactoryImpl setFilterConnectedVideoLenses:] */

void FUN_106bd3824(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (*(byte *)(param_1 + 0x58) == param_3) {
    return;
  }
  *(char *)(param_1 + 0x58) = (char)param_3;
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bd3848; end: 106bd3943; -[SCLensVideoCallPredefinedDataProviderFactoryImpl predefinedDataProviderWithCarouselType:] */

void FUN_106bd3848(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (param_3 == 0) {
    lVar3 = *(long *)(param_1 + 0x50);
    if (lVar3 == 0) {
      _objc_initWeak(auStack_38,param_1);
      puVar1 = PTR_PTR_1126ae720;
      _objc_copyWeak(auStack_40,auStack_38);
      func_0x00010bf11fe0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x50);
      *(undefined **)(param_1 + 0x50) = puVar1;
      _objc_release(uVar2);
      lVar3 = *(long *)(param_1 + 0x50);
      _objc_retain(lVar3);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
    else {
      _objc_retain(lVar3);
    }
  }
  else {
    lVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106bd3944; end: 106bd3983;  */

void FUN_106bd3944(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdecaa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106bd3984; end: 106bd3b57; -[SCLensVideoCallPredefinedDataProviderFactoryImpl _createDataProvider] */

void FUN_106bd3984(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar7 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar7);
  lVar1 = param_1;
  func_0x00010be5b3c0(param_1,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bfadb80(param_1);
  lVar3 = param_1;
  func_0x00010be4a9c0(param_1,param_2,lVar2,1,uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b1b88;
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar8);
  _objc_alloc();
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  puVar5 = puVar4;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c001e40(puVar4,param_2,lVar3,lVar1,uVar9,uVar10,uVar8,0,puVar5,uVar6,0);
  _objc_release(uVar6);
  _objc_release(puVar5);
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar9;
  func_0x00010bf55b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  uVar10 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar10;
  func_0x00010c097a40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  uVar8 = uVar9;
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar10);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(uVar7);
  _objc_release(lVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 106bd3b58; end: 106bd3c43; -[SCLensVideoCallPredefinedDataProviderFactoryImpl _mainSortStrategyWithBundledLensProvider:] */

void FUN_106bd3b58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b1b70;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar3);
  _objc_alloc();
  func_0x00010c023f00();
  puVar2 = PTR_PTR_1126ae720;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106bd3c44;
  puStack_48 = &UNK_110966950;
  puStack_40 = puVar1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(puVar1);
  func_0x00010bf11fe0(puVar2,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(puStack_40);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106bd3c44; end: 106bd3c73;  */

void FUN_106bd3c44(void)

{
  _objc_alloc(PTR_PTR_1126b1b78);
  func_0x00010c012240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bd3c74; end: 106bd3d2b; -[SCLensVideoCallPredefinedDataProviderFactoryImpl _lensDataProviderConfigWithFilterConnectedVideoLenses:filter3DBitmojiLenses:bundledLensProvider:] */

void FUN_106bd3c74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_5);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf091a0();
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126b1bc0;
  uVar3 = param_5;
  func_0x00010c269d40(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010bf467e0(puVar2,param_2,uVar3,param_3,param_4,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106bd3d2c; end: 106bd3d33; -[SCLensVideoCallPredefinedDataProviderFactoryImpl filterConnectedVideoLenses] */

undefined1 FUN_106bd3d2c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x58);
}



/* Entry: 106bd3d34; end: 106bd3dc3; -[SCLensVideoCallPredefinedDataProviderFactoryImpl .cxx_destruct] */

void FUN_106bd3d34(long param_1)

{
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



/* Entry: 106bd3dc4; end: 106bd3f0f; -[SCLensCallToActionOffCameraAdapter initWithLensOperaControllerProvider:lensLogger:navigationDelegate:lensesUIControllerStudySettingsProvider:userTrackedLogger:circumstanceEngine:] */

undefined1 *
FUN_106bd3dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_1126f5868;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
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



/* Entry: 106bd3f10; end: 106bd3f77; -[SCLensCallToActionOffCameraAdapter launchCallToActionViewForLens:presentingViewController:] */

void FUN_106bd3f10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x40,param_4);
  func_0x00010c097ba0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2364c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


