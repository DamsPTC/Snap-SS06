/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1091a8f28; end: 1091a8f9f;  */

void FUN_1091a8f28(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfa1d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfe12e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1091a8fa0; end: 1091a9093; -[SCLensInReplyCameraScopeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a8fa0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112782848,0);
  _objc_storeStrong(param_1 + _DAT_112782844,0);
  _objc_destroyWeak(param_1 + _DAT_112782840);
  _objc_destroyWeak(param_1 + _DAT_11278283c);
  _objc_destroyWeak(param_1 + _DAT_112782838);
  _objc_destroyWeak(param_1 + _DAT_112782834);
  _objc_destroyWeak(param_1 + _DAT_112782830);
  _objc_destroyWeak(param_1 + _DAT_11278282c);
  _objc_destroyWeak(param_1 + _DAT_112782828);
  _objc_destroyWeak(param_1 + _DAT_112782810);
  _objc_destroyWeak(param_1 + _DAT_112782824);
  _objc_destroyWeak(param_1 + _DAT_112782820);
  _objc_destroyWeak(param_1 + _DAT_11278281c);
  _objc_destroyWeak(param_1 + _DAT_112782808);
  _objc_destroyWeak(param_1 + _DAT_112782818);
  _objc_destroyWeak(param_1 + _DAT_112782814);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11278280c);
  return;
}



/* Entry: 1091a9094; end: 1091a91d7; -[SCLensInSnapEditorScopeEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a9094(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d1210;
  _objc_alloc(PTR_PTR_1126d1210);
  func_0x00010c022ea0();
  puVar3 = PTR_PTR_1126dda10;
  _objc_alloc(PTR_PTR_1126dda10);
  func_0x00010c022e80();
  uVar4 = 0;
  if (param_1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_11278287c);
  }
  _objc_retain(uVar4);
  func_0x00010bf9d660(uVar4);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1091a91d8; end: 1091a9217;  */

void FUN_1091a91d8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be4a640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1091a9218; end: 1091a9583; -[SCLensInSnapEditorScopeEntryPoint _lensCarouselManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a9218(long param_1,undefined8 param_2)

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
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  
  puVar1 = PTR_PTR_1126dd9d0;
  _objc_alloc();
  if (param_1 == 0) {
    uVar22 = 0;
  }
  else {
    uVar22 = *(undefined8 *)(param_1 + _DAT_112782878);
  }
  _objc_retain(uVar22);
  lVar2 = param_1;
  func_0x00010be4ad40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  FUN_1091a9584();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0911a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c091180();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_112782858;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar17;
  func_0x00010c095b60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_11278285c;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar18;
  func_0x00010c090fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c090fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_112782868;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar19;
  func_0x00010c090d20();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c090d00();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126dd9d8;
  _objc_alloc();
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_11278286c;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar20;
  func_0x00010c090440();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  FUN_1091a9584();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c0911a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = param_1 + _DAT_112782864;
    _objc_loadWeakRetained();
  }
  lVar16 = lVar21;
  func_0x00010c093ce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c022b60(puVar12,param_2,lVar13,lVar15,lVar16,0,0);
  if (param_1 == 0) {
    lVar23 = 0;
    param_1 = 0;
  }
  else {
    lVar23 = param_1 + _DAT_112782874;
    _objc_loadWeakRetained();
    param_1 = param_1 + _DAT_112782870;
    _objc_loadWeakRetained();
  }
  func_0x00010c023160(puVar1,param_2,uVar22,lVar2,lVar5,lVar6,lVar9,lVar11,puVar12,lVar23,param_1);
  _objc_release(uVar22);
  _objc_release(param_1);
  _objc_release(lVar23);
  _objc_release(puVar12);
  _objc_release(lVar16);
  _objc_release(lVar21);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar20);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar19);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar18);
  _objc_release(lVar6);
  _objc_release(lVar17);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1091a9584; end: 1091a95a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a9584(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112782860);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091a95a8; end: 1091a9687; -[SCLensInSnapEditorScopeEntryPoint _lensFeatureContainerViewFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a95a8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x00010be4a520();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11278284c;
  _objc_loadWeakRetained();
  lVar2 = param_1;
  func_0x00010c090b20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08d020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1091a9688;
  puStack_48 = &UNK_110adf6a8;
  puVar4 = PTR_PTR_1126ae720;
  lStack_40 = lVar1;
  lStack_38 = lVar3;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1091a9688; end: 1091a96bb;  */

void FUN_1091a9688(void)

{
  _objc_alloc(PTR_PTR_1126dda00);
  func_0x00010c022d00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091a96bc; end: 1091a977f; -[SCLensInSnapEditorScopeEntryPoint _lensCarouselContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a96bc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  param_1 = param_1 + _DAT_112782850;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c090ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c112480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1091a9780;
  puStack_40 = &UNK_110868d10;
  puVar3 = PTR_PTR_1126ae720;
  lStack_38 = lVar2;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1091a9780; end: 1091a97c7;  */

void FUN_1091a9780(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1091a97c8; end: 1091a988b; -[SCLensInSnapEditorScopeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a97c8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278287c,0);
  _objc_storeStrong(param_1 + _DAT_112782878,0);
  _objc_destroyWeak(param_1 + _DAT_112782874);
  _objc_destroyWeak(param_1 + _DAT_112782870);
  _objc_destroyWeak(param_1 + _DAT_11278286c);
  _objc_destroyWeak(param_1 + _DAT_112782868);
  _objc_destroyWeak(param_1 + _DAT_11278284c);
  _objc_destroyWeak(param_1 + _DAT_112782864);
  _objc_destroyWeak(param_1 + _DAT_112782860);
  _objc_destroyWeak(param_1 + _DAT_11278285c);
  _objc_destroyWeak(param_1 + _DAT_112782858);
  _objc_destroyWeak(param_1 + _DAT_112782850);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112782854);
  return;
}



/* Entry: 1091a988c; end: 1091a99cf; -[SCLensInVideoCallScopeEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a988c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d1210;
  _objc_alloc(PTR_PTR_1126d1210);
  func_0x00010c022ea0();
  puVar3 = PTR_PTR_1126dda18;
  _objc_alloc(PTR_PTR_1126dda18);
  func_0x00010c022e80();
  uVar4 = 0;
  if (param_1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_1127828b0);
  }
  _objc_retain(uVar4);
  func_0x00010bf9d660(uVar4);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1091a99d0; end: 1091a9a0f;  */

void FUN_1091a99d0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be4a640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1091a9a10; end: 1091a9d7b; -[SCLensInVideoCallScopeEntryPoint _lensCarouselManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a9a10(long param_1,undefined8 param_2)

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
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  
  puVar1 = PTR_PTR_1126dd9d0;
  _objc_alloc();
  if (param_1 == 0) {
    uVar22 = 0;
  }
  else {
    uVar22 = *(undefined8 *)(param_1 + _DAT_1127828ac);
  }
  _objc_retain(uVar22);
  lVar2 = param_1;
  func_0x00010be4ad40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  FUN_1091a9d7c();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0911a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c091180();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_112782888;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar17;
  func_0x00010c095b60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_11278288c;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar18;
  func_0x00010c090fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c090fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_11278289c;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar19;
  func_0x00010c090d20();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c090d00();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126dd9d8;
  _objc_alloc();
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_1127828a0;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar20;
  func_0x00010c090440();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  FUN_1091a9d7c();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c0911a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = param_1 + _DAT_112782894;
    _objc_loadWeakRetained();
  }
  lVar16 = lVar21;
  func_0x00010c093ce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c022b60(puVar12,param_2,lVar13,lVar15,lVar16,0,0);
  if (param_1 == 0) {
    lVar23 = 0;
    param_1 = 0;
  }
  else {
    lVar23 = param_1 + _DAT_1127828a8;
    _objc_loadWeakRetained();
    param_1 = param_1 + _DAT_1127828a4;
    _objc_loadWeakRetained();
  }
  func_0x00010c023160(puVar1,param_2,uVar22,lVar2,lVar5,lVar6,lVar9,lVar11,puVar12,lVar23,param_1);
  _objc_release(uVar22);
  _objc_release(param_1);
  _objc_release(lVar23);
  _objc_release(puVar12);
  _objc_release(lVar16);
  _objc_release(lVar21);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar20);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar19);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar18);
  _objc_release(lVar6);
  _objc_release(lVar17);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1091a9d7c; end: 1091a9d9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a9d7c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112782890);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091a9da0; end: 1091a9e7f; -[SCLensInVideoCallScopeEntryPoint _lensFeatureContainerViewFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a9da0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x00010be4a520();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112782880;
  _objc_loadWeakRetained();
  lVar2 = param_1;
  func_0x00010c090b20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08d020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1091a9e80;
  puStack_48 = &UNK_110adf6a8;
  puVar4 = PTR_PTR_1126ae720;
  lStack_40 = lVar1;
  lStack_38 = lVar3;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1091a9e80; end: 1091a9eb3;  */

void FUN_1091a9e80(void)

{
  _objc_alloc(PTR_PTR_1126dda00);
  func_0x00010c022d00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091a9eb4; end: 1091a9f6b; -[SCLensInVideoCallScopeEntryPoint _lensCarouselContainerView] */

void FUN_1091a9eb4(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1091a9f6c; end: 1091a9fdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a9f6c(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_1 + _DAT_112782884;
    _objc_loadWeakRetained(lVar2);
  }
  lVar1 = lVar2;
  func_0x00010c098400(lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1091a9fe0; end: 1091aa0a3; -[SCLensInVideoCallScopeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a9fe0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127828b0,0);
  _objc_storeStrong(param_1 + _DAT_1127828ac,0);
  _objc_destroyWeak(param_1 + _DAT_1127828a8);
  _objc_destroyWeak(param_1 + _DAT_1127828a4);
  _objc_destroyWeak(param_1 + _DAT_1127828a0);
  _objc_destroyWeak(param_1 + _DAT_11278289c);
  _objc_destroyWeak(param_1 + _DAT_112782898);
  _objc_destroyWeak(param_1 + _DAT_112782894);
  _objc_destroyWeak(param_1 + _DAT_112782890);
  _objc_destroyWeak(param_1 + _DAT_11278288c);
  _objc_destroyWeak(param_1 + _DAT_112782880);
  _objc_destroyWeak(param_1 + _DAT_112782888);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112782884);
  return;
}



/* Entry: 1091aa0a4; end: 1091aa0b3; -[SCLensPreferencesStorageServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091aa0a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127828b4);
  return;
}



/* Entry: 1091aa0b4; end: 1091aa1d7; -[SCLensUnlockableDataProviderCreatorServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091aa0b4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127828e4);
  _objc_destroyWeak(param_1 + _DAT_1127828dc);
  _objc_destroyWeak(param_1 + _DAT_1127828d8);
  _objc_destroyWeak(param_1 + _DAT_1127828d4);
  _objc_destroyWeak(param_1 + _DAT_1127828e0);
  _objc_destroyWeak(param_1 + _DAT_1127828d0);
  _objc_destroyWeak(param_1 + _DAT_1127828e8);
  _objc_destroyWeak(param_1 + _DAT_1127828cc);
  _objc_destroyWeak(param_1 + _DAT_1127828c8);
  _objc_destroyWeak(param_1 + _DAT_1127828c4);
  _objc_destroyWeak(param_1 + _DAT_1127828c0);
  _objc_destroyWeak(param_1 + _DAT_1127828bc);
  _objc_destroyWeak(param_1 + _DAT_1127828b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127828ec);
  return;
}



/* Entry: 1091aa1d8; end: 1091aa20f; -[SCLensesUIControllerStudySettingsProviderServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091aa1d8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127828f4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127828f0);
  return;
}



/* Entry: 1091aa210; end: 1091aa21f; -[SCScanLensesStreamServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091aa210(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127828f8);
  return;
}



/* Entry: 1091aa220; end: 1091aa22f; -[SCSharedFeatureLensCollectionsCarouselServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091aa220(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127828fc);
  return;
}



/* Entry: 1091aa230; end: 1091aa32f; -[SCAlwaysOnLensExternalMediaComponent initWithCameraStreamSwitcherDelegate:cameraHardwareResource:cameraHardwareServicesAPI:captureDeviceManager:screenScale:] */

undefined1 *
FUN_1091aa230(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_112700b68;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_6);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined1 *)((long)puVar1 + 0x10) = 1;
    *(undefined4 *)((long)puVar1 + 0x14) = 0;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1091aa330; end: 1091aa36b; -[SCAlwaysOnLensExternalMediaComponent setShouldReceiveUpdate:] */

void FUN_1091aa330(long param_1,undefined8 param_2,uint param_3)

{
  _os_unfair_lock_lock(param_1 + 0x14);
  if (*(byte *)(param_1 + 0x10) != param_3) {
    *(char *)(param_1 + 0x10) = (char)param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x14);
  return;
}



/* Entry: 1091aa36c; end: 1091aa39f; -[SCAlwaysOnLensExternalMediaComponent shouldReceiveUpdate] */

undefined1 FUN_1091aa36c(long param_1)

{
  undefined1 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x14);
  uVar1 = *(undefined1 *)(param_1 + 0x10);
  _os_unfair_lock_unlock(param_1 + 0x14);
  return uVar1;
}



/* Entry: 1091aa3a0; end: 1091aa51f; -[SCAlwaysOnLensExternalMediaComponent setExternalVideoWithPath:relStartPosition:relEndPosition:volume:rotation:completion:] */

void FUN_1091aa3a0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _os_unfair_lock_lock(param_1 + 0x14);
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5,0);
    }
    _os_unfair_lock_unlock(param_1 + 0x14);
  }
  else {
    _os_unfair_lock_unlock(param_1 + 0x14);
    lVar1 = param_3;
    func_0x00010c08fa60();
    puVar3 = PTR_PTR_1126dda70;
    if (lVar1 == 0) {
      if (param_5 != 0) {
        (**(code **)(param_5 + 0x10))(param_5,0);
      }
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfad2e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      param_1 = param_1 + 0x18;
      _objc_loadWeakRetained(param_1);
      _objc_retain(param_5);
      func_0x00010c2841a0(param_1);
      _objc_release(param_1);
      _objc_release(param_5);
      _objc_release(puVar3);
    }
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1091aa520; end: 1091aa537;  */

void FUN_1091aa520(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001091aa530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 1091aa538; end: 1091aa553; -[SCAlwaysOnLensExternalMediaComponent setExternalImageWithPath:faceRect:completion:] */

void FUN_1091aa538(void)

{
  long in_x3;
  
  if (in_x3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001091aa54c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(in_x3 + 0x10))(in_x3,0,0);
    return;
  }
  return;
}



/* Entry: 1091aa554; end: 1091aa6eb; -[SCAlwaysOnLensExternalMediaComponent setExternalImageWithPath:faceRects:completion:] */

void FUN_1091aa554(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _os_unfair_lock_lock(param_1 + 0x14);
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5,0,0);
    }
    _os_unfair_lock_unlock(param_1 + 0x14);
  }
  else {
    _os_unfair_lock_unlock(param_1 + 0x14);
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d020();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 != (undefined *)0x0) {
      lVar2 = param_1;
      func_0x00010be946e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126dda70;
      func_0x00010bfe94a0(PTR_PTR_1126dda70);
      _objc_retainAutoreleasedReturnValue();
      param_1 = param_1 + 0x18;
      _objc_loadWeakRetained(param_1);
      _objc_retain(param_5);
      func_0x00010c2841a0(param_1);
      _objc_release(param_1);
      _objc_release(param_5);
      _objc_release(puVar3);
      _objc_release(lVar2);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1091aa6ec; end: 1091aa707;  */

void FUN_1091aa6ec(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001091aa700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0,0);
    return;
  }
  return;
}



/* Entry: 1091aa708; end: 1091aa723; -[SCAlwaysOnLensExternalMediaComponent setExternalImage:faceRect:completion:] */

void FUN_1091aa708(void)

{
  long in_x3;
  
  if (in_x3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001091aa71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(in_x3 + 0x10))(in_x3,0,0);
    return;
  }
  return;
}



/* Entry: 1091aa724; end: 1091aa73b; -[SCAlwaysOnLensExternalMediaComponent unsetExternalMediaWithPath:completion:] */

void FUN_1091aa724(void)

{
  long in_x3;
  
  if (in_x3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001091aa734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(in_x3 + 0x10))(in_x3,0);
    return;
  }
  return;
}



/* Entry: 1091aa73c; end: 1091aa7ab; -[SCAlwaysOnLensExternalMediaComponent _activeCaptureDeviceResolutionSize] */

undefined1  [16] FUN_1091aa73c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf2fa00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb5ae0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _CMVideoFormatDescriptionGetDimensions(uVar3);
  auVar4._0_8_ = (double)(int)((ulong)uVar3 >> 0x20);
  auVar4._8_8_ = (double)(int)uVar3;
  return auVar4;
}



/* Entry: 1091aa7ac; end: 1091aa86b; -[SCAlwaysOnLensExternalMediaComponent _resizeImageToCameraSize:] */

void FUN_1091aa7ac(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  bool bVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain(param_5);
  func_0x00010bdc5180(param_3);
  dVar4 = 1080.0;
  if (param_1 != *(double *)PTR__CGSizeZero_110347620 ||
      param_2 != *(double *)(PTR__CGSizeZero_110347620 + 8)) {
    dVar4 = param_1;
  }
  dVar3 = 1920.0;
  dVar5 = 1920.0;
  if (param_1 != *(double *)PTR__CGSizeZero_110347620 ||
      param_2 != *(double *)(PTR__CGSizeZero_110347620 + 8)) {
    dVar5 = param_2;
  }
  func_0x00010c23d0a0(param_5);
  bVar1 = false;
  if ((dVar4 == dVar3) && (bVar1 = false, !NAN(dVar5) && !NAN(param_2))) {
    bVar1 = dVar5 == param_2;
  }
  uVar2 = param_5;
  if (bVar1) {
    _objc_retain(param_5);
  }
  else {
    func_0x00010c14e6c0(dVar4,dVar5,*(undefined8 *)(param_3 + 8),param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1091aa86c; end: 1091aa8a7; -[SCAlwaysOnLensExternalMediaComponent .cxx_destruct] */

void FUN_1091aa86c(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x18);
  return;
}



/* Entry: 1091aa8a8; end: 1091ab0b3; -[SCAlwaysOnMediaPickerController initWithCameraHardwareResource:cameraHardwareServicesAPI:captureDeviceManager:lensProcessingLegacyServices:cameraUIServices:crashLoggerServices:lensLoggerServices:photoPermissionServices:userFeatureServices:lensCarouselManager:mediaPickerCameraServices:alwaysOnMediaPickerServices:circumstanceEngine:inLensMediaPickerManager:cameraCircumstanceEngine:studySettingsProvider:lensTinselExternalContentTracker:enableToggleShadow:applicationLifecycleEvents:fetchLimit:scopedCameraType:] */

undefined8 *
FUN_1091aa8a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined1 param_21,undefined4 param_22,undefined8 param_23,undefined8 param_24)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_188 [8];
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined1 auStack_118 [8];
  undefined1 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
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
  _objc_retain(param_23);
  _objc_retain(param_24);
  puStack_80 = PTR_PTR_112700b70;
  puVar1 = &uStack_88;
  uStack_88 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = puVar1[1];
    puVar1[1] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[2];
    puVar1[2] = param_14;
    _objc_release(uVar2);
    uVar2 = param_15;
    func_0x00010bf020e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar8);
    uVar2 = param_15;
    func_0x00010bf020c0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar8);
    puVar3 = PTR_PTR_1126ae720;
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1091ab0b4;
    puStack_98 = &UNK_110857438;
    _objc_retain(param_15);
    uStack_90 = param_15;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    puStack_d8 = puVar4;
    uStack_d0 = 0xc2000000;
    uStack_c8 = 0x1091ab11c;
    puStack_c0 = &UNK_110adf7e8;
    _objc_retain(param_15);
    uStack_b8 = param_15;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0xc) = 0;
    puVar4 = PTR_PTR_1126dda78;
    _objc_alloc();
    uVar2 = param_15;
    func_0x00010bfe9b20(param_15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01d5c0();
    uVar8 = puVar1[10];
    puVar1[10] = puVar4;
    _objc_release(uVar8);
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[3];
    puVar1[3] = puVar4;
    _objc_release(uVar2);
    _objc_initWeak(auStack_e0,puVar1);
    uVar5 = puVar1[10];
    func_0x00010bf864c0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c0e0ea0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_100 = 0xc2000000;
    pcStack_f8 = FUN_1091ab184;
    puStack_f0 = &UNK_110842a38;
    _objc_copyWeak(auStack_e8,auStack_e0);
    uVar7 = uVar6;
    func_0x00010c25ff60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar8);
    _objc_release(uVar2);
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126ae720;
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_130 = 0xc2000000;
    uStack_128 = 0x1091ab1dc;
    puStack_120 = &UNK_110adf818;
    _objc_copyWeak(auStack_118,auStack_e0);
    uStack_110 = param_21;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126ae720;
    puStack_180 = puVar4;
    uStack_178 = 0xc2000000;
    uStack_170 = 0x1091ab238;
    puStack_168 = &UNK_110adf848;
    _objc_copyWeak(auStack_148,auStack_e0);
    _objc_retain(param_4);
    uStack_160 = param_4;
    _objc_retain(param_5);
    uStack_158 = param_5;
    _objc_retain(param_6);
    uStack_150 = param_6;
    uStack_140 = param_1;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_188,auStack_e0);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_7);
    _objc_retain(param_8);
    _objc_retain(param_9);
    _objc_retain(param_10);
    _objc_retain(param_11);
    _objc_retain(param_12);
    _objc_retain(param_19);
    _objc_retain(param_20);
    _objc_retain(param_23);
    _objc_retain(param_24);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[5];
    puVar1[5] = puVar4;
    _objc_release(uVar2);
    _objc_release(param_24);
    _objc_release(param_23);
    _objc_release(param_20);
    _objc_release(param_19);
    _objc_release(param_12);
    _objc_release(param_11);
    _objc_release(param_10);
    _objc_release(param_9);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_188);
    _objc_release(uStack_150);
    _objc_release(uStack_158);
    _objc_release(uStack_160);
    _objc_destroyWeak(auStack_148);
    _objc_destroyWeak(auStack_118);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_e0);
    _objc_release(uStack_b8);
    _objc_release(uStack_90);
  }
  _objc_release(param_24);
  _objc_release(param_23);
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
  return puVar1;
}



/* Entry: 1091ab0b4; end: 1091ab183;  */

void FUN_1091ab0b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf02100(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c272780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1091ab184; end: 1091ab29b;  */

void FUN_1091ab184(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c067fc0(param_2);
    func_0x00010bedcfc0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091ab29c; end: 1091ab393;  */

void FUN_1091ab29c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar5 = param_1 + 0x80;
  _objc_loadWeakRetained();
  if (lVar5 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    uVar6 = *(undefined8 *)(lVar5 + 0x58);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126dda90;
    _objc_alloc();
    uVar10 = *(undefined8 *)(lVar5 + 0x48);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    uVar11 = *(undefined8 *)(param_1 + 0x40);
    uVar13 = *(undefined8 *)(param_1 + 0x50);
    uVar12 = *(undefined8 *)(param_1 + 0x48);
    uVar9 = *(undefined8 *)(param_1 + 0x58);
    uVar7 = uVar6;
    func_0x00010c0c5e00();
    func_0x00010bff2c40(puVar8,param_2,uVar10,uVar1,uVar3,uVar2,uVar4,uVar11,uVar12,uVar13,uVar9,
                        uVar7,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                        *(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78));
    _objc_release(uVar6);
  }
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1091ab394; end: 1091ab3ff; -[SCAlwaysOnMediaPickerController reset] */

void FUN_1091ab394(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010be92520();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c5e60();
  _objc_release(uVar1);
  func_0x00010bedb5e0(param_1,param_2,0);
  func_0x00010beccd40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe1560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091ab400; end: 1091ab537; -[SCAlwaysOnMediaPickerController _updatePickerState:] */

void FUN_1091ab400(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126dda78;
  func_0x00010c1374e0();
  if ((int)puVar1 != 0) {
    *(undefined1 *)(param_1 + 0x60) = 1;
  }
  if (param_3 < 2) {
    if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_reset_11262ba18);
      return;
    }
    if (param_3 != 1) {
      return;
    }
    func_0x00010be92520(param_1);
    func_0x00010bdd0800(param_1);
    func_0x00010bedb5e0(param_1);
    func_0x00010beccd40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7f9e0();
  }
  else if (param_3 == 2) {
    func_0x00010be92520(param_1);
    func_0x00010bdd0800(param_1);
    func_0x00010bedb5e0(param_1);
    func_0x00010beccd40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27b4c0();
  }
  else {
    if (param_3 != 3) {
      return;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c5e20();
    _objc_release(uVar2);
    func_0x00010bdd0800(param_1);
    func_0x00010bedb5e0(param_1);
    func_0x00010beccd40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27b4e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091ab538; end: 1091ab56b; -[SCAlwaysOnMediaPickerController _toggleManager] */

void FUN_1091ab538(long param_1)

{
  if (*(char *)(param_1 + 0x60) == '\x01') {
    func_0x00010c269d40(*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091ab56c; end: 1091ab5e7; -[SCAlwaysOnMediaPickerController _updateMediaPickerTrayIsOpen:] */

void FUN_1091ab56c(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x60) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c200ca0();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d1360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1091ab5e8; end: 1091ab687; -[SCAlwaysOnMediaPickerController _attachToggleUIView] */

void FUN_1091ab5e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c5e60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beccd40(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0ca20(uVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091ab688; end: 1091ab783; -[SCAlwaysOnMediaPickerController _resetCamera] */

void FUN_1091ab688(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(char *)(param_1 + 0x60) == '\x01') {
    func_0x00010bea8880(param_1,param_2,0);
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf2afe0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c13c240(uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 1091ab784; end: 1091ab7bb;  */

void FUN_1091ab784(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bea8880(param_1,param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091ab7bc; end: 1091ab877; -[SCAlwaysOnMediaPickerController _setToggleInteractionEnabled:] */

void FUN_1091ab7bc(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010beccd40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c082800();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (param_3 != (int)uVar3) {
    func_0x00010beccd40(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1091ab878; end: 1091ab9c7; -[SCAlwaysOnMediaPickerController updateCameraWithMediaSource:completion:] */

void FUN_1091ab878(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
  else {
    func_0x00010bea8880(param_1);
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf2afe0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_4);
    func_0x00010c2841a0(uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1091ab9c8; end: 1091aba0f;  */

void FUN_1091ab9c8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bea8880(lVar1,param_2,1);
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1091aba10; end: 1091aba4f; -[SCAlwaysOnMediaPickerController isPickerOpen] */

undefined8 FUN_1091aba10(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e2140();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1091aba50; end: 1091abaeb; -[SCAlwaysOnMediaPickerController .cxx_destruct] */

void FUN_1091aba50(long param_1)

{
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



/* Entry: 1091abaec; end: 1091abebf; -[SCAlwaysOnMediaPickerStateManager initWithInLensMediaPickerManager:lensCarouselManager:cameraHardwareResource:resetToggleOnNewLens:imagineLensService:studySettingsProvider:scopedCameraType:] */

undefined8 *
FUN_1091abaec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_80 = PTR_PTR_112700b78;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0xb] = param_9;
    uVar2 = puVar1[2];
    puVar1[2] = 0;
    _objc_release(uVar2);
    *(undefined2 *)(puVar1 + 1) = 0;
    *(undefined1 *)((long)puVar1 + 10) = 1;
    puVar1[3] = 0;
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 8) = param_6;
    _objc_retain(param_7);
    uVar2 = puVar1[9];
    puVar1[9] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[10];
    puVar1[10] = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_90,puVar1);
    uVar2 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfeb6c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1091abec0;
    puStack_a0 = &UNK_110842a38;
    _objc_copyWeak(auStack_98,auStack_90);
    uVar7 = uVar6;
    func_0x00010c25ff60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bef0b80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_1091abf18;
    puStack_c8 = &UNK_11084eff0;
    _objc_copyWeak(auStack_c0,auStack_90);
    uVar6 = uVar5;
    func_0x00010c25ff60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_copyWeak(auStack_e8,auStack_90);
    func_0x00010c0e33e0(param_5);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1091abec0; end: 1091abf17;  */

void FUN_1091abec0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf1f3c0(param_2);
    func_0x00010bed99a0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091abf18; end: 1091abf8b;  */

void FUN_1091abf18(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010c0ec5e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdff9c0(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091abf8c; end: 1091ac11f;  */

void FUN_1091abf8c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x28) == 0)) {
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar8 = *(undefined8 *)(lVar1 + 0x28);
    *(undefined **)(lVar1 + 0x28) = puVar2;
    _objc_release(uVar8);
    uVar8 = param_2;
    func_0x00010c0b7ea0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf70e20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c2880c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_68,param_1 + 0x20);
    uVar7 = uVar6;
    func_0x00010c25ff60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar8);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1091ac120; end: 1091ac1c3;  */

void FUN_1091ac120(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0e3b80(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1091ac1c4; end: 1091ac203;  */

void FUN_1091ac1c4(long param_1,byte param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(byte *)(param_1 + 10) = param_2 ^ 1;
    func_0x00010bed7120(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091ac204; end: 1091ac2bf; -[SCAlwaysOnMediaPickerStateManager _updateToNewLensSucceeded:] */

undefined8 FUN_1091ac204(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
LAB_1091ac27c:
    uVar4 = 0;
  }
  else {
    uVar1 = *(ulong *)(param_1 + 0x10);
    if (uVar1 != 0) {
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
      func_0x00010c094540(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c0720c0(uVar1,param_2,lVar2);
      _objc_release(lVar2);
      _objc_release(uVar1);
      if ((uVar3 & 1) != 0) goto LAB_1091ac27c;
    }
    *(undefined1 *)(param_1 + 9) = 0;
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = param_3;
    _objc_release(uVar4);
    uVar4 = 1;
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 1091ac2c0; end: 1091ac303; -[SCAlwaysOnMediaPickerStateManager _didReceiveSelectedLens:] */

void FUN_1091ac2c0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bee2480();
  if ((int)lVar1 != 0) {
    if (*(char *)(param_1 + 0x40) == '\x01') {
      *(undefined1 *)(param_1 + 8) = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bed7130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateDisplayState_1125935f0);
    return;
  }
  return;
}



/* Entry: 1091ac304; end: 1091ac323; -[SCAlwaysOnMediaPickerStateManager _updateInLensMediaPickerActive:] */

void FUN_1091ac304(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + 9) == param_3) {
    return;
  }
  if (param_3 != 0) {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  *(char *)(param_1 + 9) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bed7130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateDisplayState_1125935f0);
  return;
}



/* Entry: 1091ac324; end: 1091ac393; -[SCAlwaysOnMediaPickerStateManager _displayState] */

undefined8 FUN_1091ac324(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010be42680();
  if (((int)uVar1 == 0) ||
     ((*(long *)(param_1 + 0x58) == 3 && (uVar1 = param_1, func_0x00010be41b20(), (uVar1 & 1) != 0))
     )) {
    uVar2 = 0;
  }
  else if ((*(char *)(param_1 + 10) == '\x01') && ((*(byte *)(param_1 + 9) & 1) == 0)) {
    uVar2 = 2;
    if (*(char *)(param_1 + 8) != '\0') {
      uVar2 = 3;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 1091ac394; end: 1091ac403; -[SCAlwaysOnMediaPickerStateManager _updateDisplayState] */

void FUN_1091ac394(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010be04e80();
  if (lVar1 != *(long *)(param_1 + 0x18)) {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3,param_2,puVar2);
    _objc_release(puVar2);
    *(long *)(param_1 + 0x18) = lVar1;
  }
  return;
}



/* Entry: 1091ac404; end: 1091ac47f; -[SCAlwaysOnMediaPickerStateManager _isMainCamGamesButtonAlwaysEnabled] */

void FUN_1091ac404(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = *(long *)(param_1 + 0x60);
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b6720();
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    *(undefined **)(param_1 + 0x60) = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    lVar1 = *(long *)(param_1 + 0x60);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf1f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_boolValue_1125a5698);
  return;
}



/* Entry: 1091ac480; end: 1091ac51b; -[SCAlwaysOnMediaPickerStateManager _isOnValidLens] */

undefined8 FUN_1091ac480(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  uVar3 = 0;
  if (uVar2 != 0) {
    func_0x00010c079580();
    if ((uVar2 & 1) == 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
      func_0x00010c076320();
      if (iVar1 == 0) {
        uVar3 = 1;
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + 0x48);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010c094540(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar4;
        func_0x00010c0750c0(uVar4,param_2,uVar5);
        _objc_release(uVar5);
        _objc_release(uVar4);
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* Entry: 1091ac51c; end: 1091ac527; +[SCAlwaysOnMediaPickerStateManager isUserInteractableForState:] */

bool FUN_1091ac51c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return 1 < param_3;
}



/* Entry: 1091ac528; end: 1091ac533; +[SCAlwaysOnMediaPickerStateManager requireInitialSetupForState:] */

bool FUN_1091ac528(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 != 0;
}



/* Entry: 1091ac534; end: 1091ac5db; -[SCAlwaysOnMediaPickerStateManager toggleTapped] */

void FUN_1091ac534(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1091ac5dc; end: 1091ac62f;  */

void FUN_1091ac5dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126dda78;
    func_0x00010c082780(PTR_PTR_1126dda78,param_2,*(undefined8 *)(param_1 + 0x18));
    if ((int)puVar1 != 0) {
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) ^ 1;
      func_0x00010bed7120(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091ac630; end: 1091ac637; -[SCAlwaysOnMediaPickerStateManager displayStateObservable] */

undefined8 FUN_1091ac630(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1091ac638; end: 1091ac6af; -[SCAlwaysOnMediaPickerStateManager .cxx_destruct] */

void FUN_1091ac638(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1091ac6b0; end: 1091aca0f; -[SCAlwaysOnMediaPickerTray initWithAlwaysOnLensExternalMediaComponent:cameraHardwareResource:cameraHardwareServicesAPI:lensProcessingLegacyServices:cameraUIServices:crashLoggerServices:lensLoggerServices:photoPermissionServices:userFeatureServices:pickerMediaType:studySettingsProvider:lensTinselExternalContentTracker:applicationLifecycleEvents:fetchLimit:] */

undefined8 *
FUN_1091ac6b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
             undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
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
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain();
  _objc_retain(param_17);
  puStack_70 = PTR_PTR_112700b80;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126dda90;
    func_0x00010bec8fe0();
    puVar1[3] = puVar2;
    _objc_retain(param_5);
    uVar3 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar3);
    _objc_initWeak(auStack_80,puVar1);
    _objc_copyWeak(auStack_88,auStack_80);
    _objc_retain(param_3);
    _objc_retain(param_6);
    _objc_retain(param_7);
    _objc_retain(param_8);
    _objc_retain(param_9);
    _objc_retain(param_10);
    _objc_retain(param_11);
    _objc_retain(param_15);
    _objc_retain(param_14);
    _objc_retain(param_16);
    _objc_retain(param_17);
    func_0x00010c0e33e0(param_4);
    _objc_release(param_17);
    _objc_release(param_16);
    _objc_release(param_14);
    _objc_release(param_15);
    _objc_release(param_11);
    _objc_release(param_10);
    _objc_release(param_9);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
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



/* Entry: 1091aca10; end: 1091acc8b;  */

void FUN_1091aca10(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
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
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x78;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = param_2;
    func_0x00010c0b7ea0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bdf02a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126dd988;
    _objc_alloc();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c091900();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf2b640();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0cfca0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf2b640();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bf4b340();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bf53fc0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c094e60();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c0fb4c0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c097e00();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c097e60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0112c0();
    uVar17 = *(undefined8 *)(lVar1 + 0x10);
    *(undefined **)(lVar1 + 0x10) = puVar4;
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
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
    *(undefined1 *)(lVar1 + 8) = 0;
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091acc8c; end: 1091acc97; +[SCAlwaysOnMediaPickerTray _supportedMediaTypeFromPickerMediaType:] */

ulong FUN_1091acc8c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 2) {
    param_3 = 1;
  }
  return param_3;
}



/* Entry: 1091acc98; end: 1091acdfb; -[SCAlwaysOnMediaPickerTray _createModalPresentationEnabledObservableWithManagedCapturerStateCoordinator:] */

void FUN_1091acc98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c42e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2880c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar4 = uVar3;
  func_0x00010c0b8600(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf43260();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 1091acdfc; end: 1091acf03;  */

void FUN_1091acdfc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
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
  pcStack_48 = FUN_1091acf04;
  uStack_40 = 0x1091acf14;
  uStack_38 = 0;
  _objc_copyWeak(auStack_68,param_1 + 0x20);
  func_0x00010c0e7bc0(param_2);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_destroyWeak(auStack_68);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091acf04; end: 1091acf1b;  */

void FUN_1091acf04(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1091acf1c; end: 1091acf73;  */

void FUN_1091acf1c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined **)(lVar2 + 0x28) = PTR____kCFBooleanFalse_11034ab60;
  _objc_release(uVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c1d1360(param_1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091acf74; end: 1091acf7b; -[SCAlwaysOnMediaPickerTray on] */

undefined1 FUN_1091acf74(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1091acf7c; end: 1091acfdb; -[SCAlwaysOnMediaPickerTray setOn:] */

void FUN_1091acf7c(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + 8) == param_3) {
    return;
  }
  *(char *)(param_1 + 8) = (char)param_3;
  if (param_3 != 0) {
    func_0x00010bed4b40(param_1,param_2,*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010c23a490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x10),PTR_s_showSubPickerWithMediaType_selec_11266c348,
               *(undefined8 *)(param_1 + 0x18),1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfe2990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_hideSubPicker_1125d6420);
  return;
}



/* Entry: 1091acfdc; end: 1091ad0df; -[SCAlwaysOnMediaPickerTray _updateCameraPositionWithDefaultMediaType:] */

void FUN_1091acfdc(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined *puVar5;
  
  puVar2 = PTR_PTR_1126aff08;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf70d80();
  func_0x00010c073f00(puVar2,param_2,uVar3);
  _objc_release(uVar1);
  if (((param_3 & 0xc) != 0) && (((ulong)puVar2 & 1) == 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126afed0;
    func_0x00010c0db140(PTR_PTR_1126afed0);
    puVar5 = &UNK_10f55b489;
    uVar1 = 0xc4;
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110db92b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18cd00(uVar3,param_2,0,puVar2,&PTR___NSConcreteGlobalBlock_110adf938,puVar4,in_x6,
                        in_x7,puVar5,uVar1);
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 1091ad0e0; end: 1091ad0e3;  */

void FUN_1091ad0e0(void)

{
  return;
}



/* Entry: 1091ad0e4; end: 1091ad113; -[SCAlwaysOnMediaPickerTray .cxx_destruct] */

void FUN_1091ad0e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1091ad114; end: 1091ad18b; -[SCLensCarouselDataAdapter initWithViewModelFactory:] */

undefined1 * FUN_1091ad114(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112700b88;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x30) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091ad18c; end: 1091ad477; -[SCLensCarouselDataAdapter setLenses:] */

void FUN_1091ad18c(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x30);
  uVar9 = *(ulong *)(param_1 + 0x18);
  _objc_retain(param_3);
  _objc_retain(uVar9);
  if (param_3 == uVar9) {
    _objc_release(uVar9);
    _objc_release(param_3);
  }
  else {
    if (uVar9 == 0) {
      _objc_release(param_3);
    }
    else {
      uVar2 = param_3;
      func_0x00010c071ae0();
      _objc_release(uVar9);
      _objc_release(param_3);
      if ((uVar2 & 1) != 0) goto LAB_1091ad3fc;
    }
    uVar9 = param_3;
    func_0x00010bf51e00();
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    *(ulong *)(param_1 + 0x18) = uVar9;
    _objc_release(uVar7);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x18));
    func_0x00010bf71fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain();
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar7;
    _objc_release(uVar10);
    puVar4 = puVar3;
    func_0x00010bf51e00();
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar4;
    _objc_release(uVar7);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x18));
    func_0x00010bf71fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = *(long *)(param_1 + 0x18);
    _objc_retain(lVar11);
    lVar5 = lVar11;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar5 != 0) {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar11);
        }
        uVar7 = *(undefined8 *)(lVar12 * 8);
        func_0x00010c094540(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar4);
        _objc_release(uVar7);
        lVar12 = lVar12 + 1;
      } while (lVar5 != lVar12);
      lVar5 = lVar11;
      func_0x00010bf52a60();
    }
    _objc_release(lVar11);
    puVar6 = puVar4;
    func_0x00010bf51e00();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar6;
    _objc_release(uVar7);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar3);
  }
LAB_1091ad3fc:
  _os_unfair_lock_unlock(param_1 + 0x30);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0x30);
  __Unwind_Resume();
  puVar3 = PTR_PTR_1126ae568;
  _objc_retain(param_2);
  _objc_opt_new(puVar3);
  uVar10 = *(undefined8 *)(param_3 + 0x20);
  uVar7 = param_2;
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar10);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(*(long *)(param_3 + 0x28) + 8);
  func_0x00010c29daa0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 1091ad478; end: 1091ad527;  */

void FUN_1091ad478(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ae568;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
  func_0x00010c29daa0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1091ad528; end: 1091ad5cf; -[SCLensCarouselDataAdapter updateModelWithLensId:] */

void FUN_1091ad528(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x30);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(lVar1,param_2,puVar2);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _os_unfair_lock_unlock(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091ad5d0; end: 1091ad60b; -[SCLensCarouselDataAdapter lenses] */

void FUN_1091ad5d0(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091ad60c; end: 1091ad647; -[SCLensCarouselDataAdapter viewModels] */

void FUN_1091ad60c(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091ad648; end: 1091ad6bf; -[SCLensCarouselDataAdapter lensByLensId:] */

void FUN_1091ad648(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0x30);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091ad6c0; end: 1091ad713; -[SCLensCarouselDataAdapter .cxx_destruct] */

void FUN_1091ad6c0(long param_1)

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



/* Entry: 1091ad714; end: 1091ad8af; -[SCLensPreviewCarouselCollectionController initWithLensesCarouselContainer:lensIconRepository:lensCarouselStudySettings:lensPerformerProvider:attributionProvider:layoutProvider:lensStatusProvider:externalScrollSource:uiUpdateAnnouncer:cellOverlayProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1091ad714(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126dda98;
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc_init();
  puStack_68 = PTR_PTR_112700b90;
  puVar2 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithLensIconRepository_lensC_11253fc38,param_4,param_5,
                      param_6,param_7,param_8,param_9,puVar1,param_10,0,param_11,param_12);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_1127829ac;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_3;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 1091ad8b0; end: 1091ad923; -[SCLensPreviewCarouselCollectionController attachCarouselView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091ad8b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127829b0);
  *(undefined8 *)(param_1 + _DAT_1127829b0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c1677c0(0,param_3);
  func_0x00010bf0ca20(*(undefined8 *)(param_1 + _DAT_1127829ac),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091ad924; end: 1091ad92b; -[SCLensPreviewCarouselCollectionController carouselTapHandlerPolicy] */

undefined8 FUN_1091ad924(void)

{
  return 1;
}



/* Entry: 1091ad92c; end: 1091ad9db; -[SCLensPreviewCarouselCollectionController showLensesUI:completion:] */

void FUN_1091ad92c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_4);
  puVar1 = PTR_s_showLensesUI_completion__11266ba68;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1091ad9dc;
  puStack_50 = &UNK_1108523f8;
  uStack_38 = (undefined1)param_3;
  puStack_70 = PTR_PTR_112700b90;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = param_1;
  uStack_48 = param_1;
  uStack_40 = param_4;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&uStack_78,puVar1,param_3,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_4);
  return;
}



/* Entry: 1091ad9dc; end: 1091ada9b;  */

void FUN_1091ad9dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  uVar3 = 0x3fc999999999999a;
  if (*(char *)(param_1 + 0x30) == '\0') {
    uVar3 = 0;
  }
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1091ada9c;
  puStack_40 = &UNK_110842e18;
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x1091adab4;
  puStack_68 = &UNK_110842508;
  _objc_retain(uVar1);
  uStack_60 = uVar1;
  func_0x00010bf03420(uVar3,puVar2,param_2,&puStack_58,&puStack_80);
  _objc_release(uStack_60);
  return;
}



/* Entry: 1091ada9c; end: 1091adac7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091ada9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127829b0),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1091adac8; end: 1091adb07; -[SCLensPreviewCarouselCollectionController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091adac8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127829b0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127829ac,0);
  return;
}


