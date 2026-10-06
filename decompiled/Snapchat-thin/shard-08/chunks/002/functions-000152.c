/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105ea2cfc; end: 105ea2d9f; -[SCSpotlightNotificationProcessor _postNewNotification:] */

void FUN_105ea2cfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b1370;
    _objc_alloc(PTR_PTR_1126b1370);
    func_0x00010c037e60();
    param_1 = param_1 + 0x50;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa0a0();
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ea2da0; end: 105ea2e43; -[SCSpotlightNotificationProcessor .cxx_destruct] */

void FUN_105ea2da0(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_destroyWeak(param_1 + 0x50);
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



/* Entry: 105ea2e44; end: 105ea31d3; -[SCSpotlightNotificationProcessorEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ea2e44(long param_1,undefined8 param_2)

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
  undefined8 uVar27;
  
  lVar10 = param_1 + _DAT_112738e18;
  lVar1 = lVar10;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x000108f4b0c8();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar3 != 0) {
    puVar4 = PTR_PTR_1126c5720;
    _objc_alloc();
    lVar1 = param_1 + _DAT_112738e1c;
    _objc_loadWeakRetained();
    lVar5 = lVar1;
    func_0x00010c0cf020();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + _DAT_112738e20;
    _objc_loadWeakRetained();
    lVar6 = lVar2;
    func_0x00010bfb7c20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_112738e24;
    _objc_loadWeakRetained();
    lVar7 = lVar3;
    func_0x00010bf13100();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1 + _DAT_112738e28;
    _objc_loadWeakRetained();
    lVar9 = lVar8;
    func_0x00010bef2520();
    _objc_retainAutoreleasedReturnValue();
    _objc_loadWeakRetained();
    lVar11 = lVar10;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1 + _DAT_112738e2c;
    _objc_loadWeakRetained();
    lVar13 = lVar12;
    func_0x00010c244ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = param_1 + _DAT_112738e30;
    _objc_loadWeakRetained();
    lVar15 = lVar14;
    func_0x00010c0d79a0();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = param_1 + _DAT_112738e34;
    _objc_loadWeakRetained();
    lVar17 = lVar16;
    func_0x00010c09f2a0();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = param_1 + _DAT_112738e38;
    _objc_loadWeakRetained();
    lVar19 = lVar18;
    func_0x00010c112f80();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = (long)_DAT_112738e3c;
    lVar20 = param_1 + lVar26;
    _objc_loadWeakRetained();
    lVar21 = lVar20;
    func_0x00010c0dc6e0();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = param_1 + _DAT_112738e40;
    _objc_loadWeakRetained();
    lVar23 = lVar22;
    func_0x00010c08d440();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = param_1 + _DAT_112738e44;
    _objc_loadWeakRetained();
    lVar25 = lVar24;
    func_0x00010c24b680();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02f420(puVar4,param_2,lVar5,lVar6,lVar7,lVar9,lVar11,lVar13,lVar15,lVar17,lVar19,
                        lVar21,lVar23,lVar25);
    uVar27 = *(undefined8 *)(param_1 + _DAT_112738e48);
    *(undefined **)(param_1 + _DAT_112738e48) = puVar4;
    _objc_release(uVar27);
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
    _objc_release(lVar3);
    _objc_release(lVar6);
    _objc_release(lVar2);
    _objc_release(lVar5);
    _objc_release(lVar1);
    param_1 = param_1 + lVar26;
    _objc_loadWeakRetained(param_1);
    lVar10 = param_1;
    func_0x00010bf05c00();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befabc0();
    _objc_release(lVar1);
    _objc_release(lVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105ea31d4; end: 105ea32cf; -[SCSpotlightNotificationProcessorEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ea31d4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long alStack_60 [2];
  long alStack_50 [2];
  
  plVar4 = alStack_60;
  lVar1 = param_1 + _DAT_112738e18;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x000108f4b0c8();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar3 == 0) {
    plVar4 = alStack_50;
  }
  else {
    lVar1 = param_1 + _DAT_112738e3c;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf05c00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12dd20();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  *plVar4 = param_1;
  plVar4[1] = (long)PTR_PTR_1126eda38;
  _objc_msgSendSuper2(plVar4,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ea32d0; end: 105ea33a7; -[SCSpotlightNotificationProcessorEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ea32d0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112738e44);
  _objc_destroyWeak(param_1 + _DAT_112738e40);
  _objc_destroyWeak(param_1 + _DAT_112738e38);
  _objc_destroyWeak(param_1 + _DAT_112738e34);
  _objc_destroyWeak(param_1 + _DAT_112738e30);
  _objc_destroyWeak(param_1 + _DAT_112738e2c);
  _objc_destroyWeak(param_1 + _DAT_112738e18);
  _objc_destroyWeak(param_1 + _DAT_112738e28);
  _objc_destroyWeak(param_1 + _DAT_112738e24);
  _objc_destroyWeak(param_1 + _DAT_112738e20);
  _objc_destroyWeak(param_1 + _DAT_112738e1c);
  _objc_destroyWeak(param_1 + _DAT_112738e3c);
  _objc_destroyWeak(param_1 + _DAT_112738e50);
  _objc_destroyWeak(param_1 + _DAT_112738e4c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112738e48,0);
  return;
}



/* Entry: 105ea33a8; end: 105ea3533; -[SCDiscoverFeedManagementScopeEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ea33a8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
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
  pcStack_70 = FUN_105ea3534;
  puStack_68 = &UNK_1108f13d8;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112738e54);
  *(undefined **)(param_1 + _DAT_112738e54) = puVar1;
  _objc_release(uVar5);
  lVar2 = param_1 + _DAT_112738e64;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c10f5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_58);
  lVar4 = lVar3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112738e58);
  *(long *)(param_1 + _DAT_112738e58) = lVar4;
  _objc_release(uVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105ea3534; end: 105ea3573;  */

void FUN_105ea3534(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdea3e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105ea3574; end: 105ea3597;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ea3574(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112738e64);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ea3598; end: 105ea35c3;  */

void FUN_105ea3598(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be79ce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ea35c4; end: 105ea375b; -[SCDiscoverFeedManagementScopeEntryPoint _present] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ea35c4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  FUN_105ea375c();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08d460();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  ppuStack_68 = &PTR____CFConstantStringClassReference_110daf5b8;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110f41858;
  ppuStack_58 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3e98;
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_58,&ppuStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  func_0x00010bf7dbc0(lVar3,param_2,&PTR____CFConstantStringClassReference_110f41518,
                      &PTR____CFConstantStringClassReference_110e1c958,puVar5);
  puVar4 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112738e54);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140();
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (lVar3 != 0) {
    _objc_loadWeakRetained(lVar3 + _DAT_112738e8c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ea375c; end: 105ea377f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ea375c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112738e8c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ea3780; end: 105ea403f; -[SCDiscoverFeedManagementScopeEntryPoint _createActionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ea3780(long param_1)

{
  long lVar1;
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
  undefined *puVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  long lVar23;
  long lVar24;
  undefined *puVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lStack_178;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  long lStack_108;
  long lStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  if (param_1 == 0) {
    lVar30 = 0;
  }
  else {
    lVar30 = param_1 + _DAT_112738eb4;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar30;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar30);
  lVar30 = param_1;
  FUN_105ea4040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar30;
  func_0x00010c08d440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar30);
  lVar30 = param_1;
  FUN_105ea4040();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar30;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar30);
  lVar30 = param_1;
  FUN_105ea375c();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar30;
  func_0x00010c08d460();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar30);
  if (param_1 == 0) {
    lVar30 = 0;
  }
  else {
    lVar30 = param_1 + _DAT_112738ea0;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar30;
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar30);
  if (param_1 == 0) {
    lStack_178 = 0;
  }
  else {
    lStack_178 = param_1 + _DAT_112738eac;
    _objc_loadWeakRetained();
  }
  lVar30 = param_1;
  func_0x000105ea4064();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar30;
  func_0x00010bf5b760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar30);
  lVar30 = param_1;
  func_0x000105ea4064();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar30;
  func_0x00010bf5b7c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar30);
  lVar30 = param_1;
  func_0x000105ea4064();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar30;
  func_0x00010bf5b780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar30);
  lVar30 = param_1;
  func_0x000105ea4088();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar30;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar30);
  lVar30 = param_1;
  func_0x000105ea4088();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar30;
  func_0x00010c244620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar30);
  if (param_1 == 0) {
    lVar30 = 0;
  }
  else {
    lVar30 = param_1 + _DAT_112738e78;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar30;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar30);
  if (param_1 == 0) {
    lVar30 = 0;
  }
  else {
    lVar30 = param_1 + _DAT_112738e90;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar30;
  func_0x00010c08d4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar30);
  if (param_1 == 0) {
    lVar30 = 0;
  }
  else {
    lVar30 = param_1 + _DAT_112738eb0;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar30;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar30);
  lVar30 = param_1;
  func_0x000105ea40ac();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar30;
  func_0x00010c0dccc0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar14);
  _objc_release(lVar30);
  lVar30 = param_1;
  func_0x000105ea40ac();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar30;
  func_0x00010c0dc400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar30);
  puVar17 = PTR_PTR_1126c2120;
  _objc_alloc_init();
  _objc_initWeak(auStack_80,param_1);
  puVar25 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105ea40d0;
  puStack_90 = &UNK_1108d4ab0;
  _objc_copyWeak(auStack_88,auStack_80);
  ppuVar18 = &puStack_a8;
  _objc_retainBlock();
  puStack_d0 = puVar25;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x105ea4150;
  puStack_b8 = &UNK_1108d4ae0;
  _objc_copyWeak(auStack_b0,auStack_80);
  ppuVar19 = &puStack_d0;
  _objc_retainBlock();
  puStack_f8 = puVar25;
  uStack_f0 = 0xc2000000;
  uStack_e8 = 0x105ea41b4;
  puStack_e0 = &UNK_1108d4ae0;
  _objc_copyWeak(auStack_d8,auStack_80);
  ppuVar20 = &puStack_f8;
  _objc_retainBlock();
  puStack_128 = puVar25;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_105ea4218;
  puStack_110 = &UNK_110841f80;
  ppuVar21 = &puStack_128;
  lStack_108 = lVar15;
  lStack_100 = lVar16;
  _objc_retainBlock();
  puStack_150 = puVar25;
  uStack_148 = 0xc2000000;
  uStack_140 = 0x105ea4224;
  puStack_138 = &UNK_110848678;
  ppuVar22 = &puStack_150;
  puStack_130 = puVar17;
  _objc_retainBlock();
  lVar30 = param_1 + _DAT_112738e5c;
  _objc_loadWeakRetained();
  lVar23 = lVar30;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar30);
  lVar30 = param_1 + _DAT_112738e60;
  _objc_loadWeakRetained();
  lVar24 = lVar30;
  func_0x00010c258d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar30);
  lVar30 = param_1 + _DAT_112738e64;
  _objc_loadWeakRetained();
  func_0x00010c247520();
  _objc_release(lVar30);
  puVar25 = PTR_PTR_1126c22c8;
  _objc_alloc(PTR_PTR_1126c22c8);
  lVar30 = param_1 + _DAT_112738e68;
  _objc_loadWeakRetained();
  lVar26 = lVar30;
  func_0x00010bf611e0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_112738e6c;
  _objc_loadWeakRetained();
  lVar27 = lVar14;
  func_0x00010bfa2420();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar27;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar28;
  func_0x00010bfa0b80();
  if ((int)lVar29 == 0) {
    lVar31 = 0;
  }
  else {
    lVar31 = param_1;
    func_0x00010be7ad60();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c05d780(puVar25);
  if ((int)lVar29 != 0) {
    _objc_release(lVar31);
  }
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar14);
  _objc_release(lVar26);
  _objc_release(lVar30);
  lVar30 = param_1;
  FUN_105ea3574();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar30;
  func_0x00010bf99fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar30);
  if (lVar14 == 0) {
    func_0x00010bef9980(puVar25);
  }
  else {
    lVar30 = param_1;
    FUN_105ea3574(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar30;
    func_0x00010bf99fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980(puVar25);
    _objc_release(lVar14);
    _objc_release(lVar30);
  }
  lVar30 = param_1;
  FUN_105ea3574(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar30;
  func_0x00010c0f3bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e1580(puVar25);
  _objc_release(lVar14);
  _objc_release(lVar30);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_112738e84;
    _objc_loadWeakRetained(param_1);
  }
  lVar30 = param_1;
  func_0x00010c25e020(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar30;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c188840(puVar25);
  _objc_release(lVar14);
  _objc_release(lVar30);
  _objc_release(param_1);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(ppuVar22);
  _objc_release(ppuVar21);
  _objc_release(ppuVar20);
  _objc_destroyWeak(auStack_d8);
  _objc_release(ppuVar19);
  _objc_destroyWeak(auStack_b0);
  _objc_release(ppuVar18);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar4);
  _objc_release(lStack_178);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar25);
  return;
}



/* Entry: 105ea4040; end: 105ea40cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ea4040(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112738e88);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ea40d0; end: 105ea4217;  */

void FUN_105ea40d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_x6;
  
  _objc_retain(in_x6);
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7dea0();
  _objc_release(in_x6);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ea4218; end: 105ea4237;  */

undefined8 FUN_105ea4218(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = uVar2;
  _objc_retain();
  func_0x00010c079e00();
  if ((int)uVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
    func_0x00010c24d8e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf1f3c0();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126aed70;
    if (((ulong)puVar5 & 1) == 0) {
      func_0x00010c135f60(uVar1);
    }
    else {
      ppuVar6 = &PTR____CFConstantStringClassReference_110dad758;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beff4c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar6);
      puVar4 = PTR_PTR_1126aed70;
      ppuVar6 = &PTR____CFConstantStringClassReference_110daf8b8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beff4c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar6);
      puVar5 = PTR_PTR_1126aed78;
      _objc_alloc(PTR_PTR_1126aed78);
      ppuVar6 = &PTR____CFConstantStringClassReference_110ead038;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ead038,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = &PTR____CFConstantStringClassReference_110e5f7f8;
      uVar11 = 0;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e5f7f8,0);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c052ec0(puVar5);
      _objc_release(puVar8);
      _objc_release(ppuVar7);
      _objc_release(ppuVar6);
      uVar9 = 0;
      func_0x0001008cd514(0);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010c1417c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      func_0x00010c10eda0(uVar10);
      _objc_release(uVar10);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
  }
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return uVar2;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar11,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,
             &PTR___NSConcreteGlobalBlock_1109faa70);
  return uVar11;
}



/* Entry: 105ea4238; end: 105ea435f; -[SCDiscoverFeedManagementScopeEntryPoint _presentCreatorSubscriptionsBlock] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ea4238(long param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_1 = param_1 + _DAT_112738e70;
  _objc_loadWeakRetained();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105ea42c0;
  puStack_30 = &UNK_110845c10;
  lStack_28 = param_1;
  _objc_retain();
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(lStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105ea4360; end: 105ea4403;  */

void FUN_105ea4360(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  puVar2 = PTR_PTR_1126c2268;
  _objc_alloc(PTR_PTR_1126c2268);
  func_0x00010c04ac00();
  puVar3 = PTR_PTR_1126c2270;
  _objc_alloc(PTR_PTR_1126c2270);
  func_0x00010c0585c0();
  func_0x00010bf21f80(*(undefined8 *)(param_1 + 0x28),param_2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ea4404; end: 105ea4537; -[SCDiscoverFeedManagementScopeEntryPoint _presentPublicUserProfile:snapProProfile:presentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ea4404(long param_1,undefined8 param_2,undefined *param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = PTR_PTR_1126b0f10;
  if (param_4 == 0) {
    _objc_retain(param_5);
    lVar1 = param_1;
    func_0x00010bfea120(param_1,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    lVar4 = (long)_DAT_112738e74;
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(long *)(param_1 + lVar4) = lVar1;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    puVar3 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10ece0(uVar2,param_2,puVar3);
  }
  else {
    _objc_retain(param_5);
    _objc_alloc(puVar3);
    func_0x00010c033440();
    lVar1 = param_4;
    func_0x00010c116a20(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfea000(param_1,param_2,lVar1,0,puVar3,param_5,0,0);
    _objc_release(param_5);
    _objc_release(lVar1);
  }
  _objc_release(puVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ea4538; end: 105ea467b; -[SCDiscoverFeedManagementScopeEntryPoint impalaShowProfileActionHandlerWithPresentingViewController:] */

void FUN_105ea4538(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126c2278;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_1;
  FUN_105ea467c(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08d480();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  FUN_105ea4040(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  FUN_105ea4040(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010c08d440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04ab20(puVar1,param_2,0x13,uVar4,uVar6,uVar7);
  _objc_release(uVar7);
  _objc_release(param_1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c1e1580(puVar1,param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105ea467c; end: 105ea469f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ea467c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112738e98);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ea46a0; end: 105ea47e3; -[SCDiscoverFeedManagementScopeEntryPoint impalaPublisherProfileActionHandlerWithPresentingViewController:] */

void FUN_105ea46a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126c2280;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_1;
  FUN_105ea467c(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08d480();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  FUN_105ea4040(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  FUN_105ea4040(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010c08d440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04ab20(puVar1,param_2,0x13,uVar4,uVar6,uVar7);
  _objc_release(uVar7);
  _objc_release(param_1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c1e1580(puVar1,param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105ea47e4; end: 105ea4873; -[SCDiscoverFeedManagementScopeEntryPoint impalaProfilePresenterForPresentingViewController:] */

void FUN_105ea47e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  FUN_105ea4874(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfea160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x00010bfea100(uVar1,param_2,param_3,0x14,0x52);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105ea4874; end: 105ea4897;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ea4874(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112738e94);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ea4898; end: 105ea4973; -[SCDiscoverFeedManagementScopeEntryPoint impalaPresentPublicProfileWithBusinessProfileId:isPublisherProfile:loggingInfo:presentingViewController:isNavigationStyleVertical:dismissBlock:] */

void FUN_105ea4898(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  FUN_105ea4874(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfea160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010bfe9fe0(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ea4974; end: 105ea4acb; -[SCDiscoverFeedManagementScopeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ea4974(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112738e70);
  _objc_destroyWeak(param_1 + _DAT_112738e6c);
  _objc_destroyWeak(param_1 + _DAT_112738e68);
  _objc_destroyWeak(param_1 + _DAT_112738e60);
  _objc_destroyWeak(param_1 + _DAT_112738e5c);
  _objc_destroyWeak(param_1 + _DAT_112738eb4);
  _objc_destroyWeak(param_1 + _DAT_112738eb0);
  _objc_destroyWeak(param_1 + _DAT_112738eac);
  _objc_destroyWeak(param_1 + _DAT_112738ea8);
  _objc_destroyWeak(param_1 + _DAT_112738ea4);
  _objc_destroyWeak(param_1 + _DAT_112738ea0);
  _objc_destroyWeak(param_1 + _DAT_112738e9c);
  _objc_destroyWeak(param_1 + _DAT_112738e98);
  _objc_destroyWeak(param_1 + _DAT_112738e94);
  _objc_destroyWeak(param_1 + _DAT_112738e90);
  _objc_destroyWeak(param_1 + _DAT_112738e8c);
  _objc_destroyWeak(param_1 + _DAT_112738e88);
  _objc_destroyWeak(param_1 + _DAT_112738e84);
  _objc_destroyWeak(param_1 + _DAT_112738e80);
  _objc_destroyWeak(param_1 + _DAT_112738e7c);
  _objc_destroyWeak(param_1 + _DAT_112738e78);
  _objc_destroyWeak(param_1 + _DAT_112738e64);
  _objc_storeStrong(param_1 + _DAT_112738e74,0);
  _objc_storeStrong(param_1 + _DAT_112738e58,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112738e54,0);
  return;
}



/* Entry: 105ea4acc; end: 105ea4ad7; +[SCDiscoverFeedManagementActionSheetActionHandler announcerIdentifier] */

undefined ** FUN_105ea4acc(void)

{
  return &PTR____CFConstantStringClassReference_110e2ecd8;
}



/* Entry: 105ea4ad8; end: 105ea4adf; -[SCDiscoverFeedManagementActionSheetActionHandler addListener:] */

void FUN_105ea4ad8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 105ea4ae0; end: 105ea4ae7; -[SCDiscoverFeedManagementActionSheetActionHandler removeListener:] */

void FUN_105ea4ae0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105ea4ae8; end: 105ea4aef; -[SCDiscoverFeedManagementActionSheetActionHandler didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_105ea4ae8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_didTriggerEventWithEventName_ann_1125bd098);
  return;
}



/* Entry: 105ea4af0; end: 105ea4f8f; -[SCDiscoverFeedManagementActionSheetActionHandler initWithUserSession:discoverFeedDataMutator:discoverFeedDataFetcher:imageDownloader:presentPublicUserProfileBlock:impalaShowProfileActionHandlerProvider:impalaPublisherProfileActionHandlerProvider:requestNotificationPermissionsBlock:displayOptInNotificationPromptBlock:snapProServices:creatorSettingsFetcher:creatorSettingsTracker:creatorSettingsMutator:snapchattersDataFetcher:snapchatterPublicInfoFetcher:circumstanceEngine:interactionHistoryManager:applicationLifecycleEvents:featureSettingsService:storiesFetcher:customAppThemeProvider:source:presentCreatorSubscriptionsBlock:] */

undefined8 *
FUN_105ea4af0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
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
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puStack_70 = PTR_PTR_1126eda40;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_retain(param_6);
    uVar2 = puVar1[2];
    puVar1[2] = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[8];
    puVar1[8] = param_21;
    _objc_release(uVar2);
    puVar1[10] = param_24;
    puVar3 = PTR_PTR_1126c5730;
    _objc_alloc();
    puVar4 = puVar1 + 1;
    _objc_loadWeakRetained(puVar4);
    func_0x00010c05d7a0();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    func_0x00010bef9980(puVar1[5]);
    _objc_retain(param_18);
    uVar2 = puVar1[7];
    puVar1[7] = param_18;
    _objc_release(uVar2);
    uVar2 = param_25;
    _objc_retainBlock();
    uVar5 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_80,puVar1);
    uVar2 = param_20;
    func_0x00010bf75dc0(param_20);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_80);
    uVar5 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_25);
  _objc_release(param_23);
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



/* Entry: 105ea4f90; end: 105ea4fc3;  */

void FUN_105ea4f90(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdcc9e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ea4fc4; end: 105ea4fcb; -[SCDiscoverFeedManagementActionSheetActionHandler setCustomStatusBarStyleContextController:] */

void FUN_105ea4fc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c188850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_setCustomStatusBarStyleContextCo_11263fc30);
  return;
}



/* Entry: 105ea4fcc; end: 105ea51df; -[SCDiscoverFeedManagementActionSheetActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_105ea4fcc(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((uVar2 & 1) == 0) {
    _objc_release(uVar1);
  }
  else {
    lVar3 = param_1 + 0x58;
    _objc_loadWeakRetained();
    _objc_release();
    _objc_release(uVar1);
    if (lVar3 != 0) {
      puVar4 = PTR_PTR_1126c5738;
      _objc_alloc(PTR_PTR_1126c5738);
      func_0x00010bffe740();
      puVar5 = PTR_PTR_1126b1208;
      _objc_alloc();
      uVar6 = 0x14;
      func_0x00010bc9107c(0x14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c02b180();
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      *(undefined **)(param_1 + 0x18) = puVar5;
      _objc_release(uVar7);
      _objc_release(uVar6);
      func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x18));
      _objc_initWeak(auStack_58,param_1);
      uVar6 = *(undefined8 *)(param_1 + 0x18);
      lVar3 = param_1 + 0x58;
      _objc_loadWeakRetained(lVar3);
      _objc_copyWeak(auStack_60,auStack_58);
      func_0x00010c10d0e0(uVar6);
      _objc_release(lVar3);
      func_0x00010c161ba0(*(undefined8 *)(param_1 + 0x28));
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
      _objc_release(puVar4);
      uVar6 = 1;
      goto LAB_105ea5188;
    }
  }
  uVar6 = 0;
LAB_105ea5188:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 105ea51e0; end: 105ea520b;  */

void FUN_105ea51e0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcbcc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ea520c; end: 105ea52f3; -[SCDiscoverFeedManagementActionSheetActionHandler unifiedActionMenuPresenterDidDismiss:] */

void FUN_105ea520c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c5740;
  _objc_opt_class(PTR_PTR_1126c5740);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
    func_0x000105eacddc(0);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    lVar6 = param_1;
    _objc_opt_class(param_1);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(uVar7);
    _objc_release(lVar6);
    _objc_release(uVar5);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 105ea52f4; end: 105ea5303; -[SCDiscoverFeedManagementActionSheetActionHandler _appDidEnterBackground] */

void FUN_105ea52f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf83dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_dismissMenuViewWithAnimation_com_1125be918,0,0);
  return;
}



/* Entry: 105ea5304; end: 105ea5383; -[SCDiscoverFeedManagementActionSheetActionHandler _announceFeedPageOpen] */

void FUN_105ea5304(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  FUN_105eaccc4(0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar2,param_2,&PTR____CFConstantStringClassReference_110f41458,param_1,uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ea5384; end: 105ea539b; -[SCDiscoverFeedManagementActionSheetActionHandler presentingViewController] */

void FUN_105ea5384(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ea539c; end: 105ea53a7; -[SCDiscoverFeedManagementActionSheetActionHandler setPresentingViewController:] */

void FUN_105ea539c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 105ea53a8; end: 105ea542f; -[SCDiscoverFeedManagementActionSheetActionHandler .cxx_destruct] */

void FUN_105ea53a8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x58);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 105ea5430; end: 105ea543b; +[SCDiscoverFeedManagementCreatorSettingsActionHandler announcerIdentifier] */

undefined ** FUN_105ea5430(void)

{
  return &PTR____CFConstantStringClassReference_110e15eb8;
}



/* Entry: 105ea543c; end: 105ea5443; -[SCDiscoverFeedManagementCreatorSettingsActionHandler addListener:] */

void FUN_105ea543c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 105ea5444; end: 105ea544b; -[SCDiscoverFeedManagementCreatorSettingsActionHandler removeListener:] */

void FUN_105ea5444(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105ea544c; end: 105ea5687; -[SCDiscoverFeedManagementCreatorSettingsActionHandler initWithDiscoverFeedManagementDataCoordinator:presentPublicUserProfileBlock:impalaShowProfileActionHandler:impalaPublisherProfileActionHandler:discoverFeedDataMutator:discoverFeedDataFetcher:requestNotificationPermissionsBlock:displayOptInNotificationPromptBlock:creatorSettingsMutator:interactionHistoryManager:] */

undefined8 *
FUN_105ea544c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
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
  puStack_68 = PTR_PTR_1126eda48;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar4 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    uVar2 = param_9;
    _objc_retainBlock();
    uVar4 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_10;
    _objc_retainBlock();
    uVar4 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[1];
    puVar1[1] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[10];
    puVar1[10] = param_8;
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



/* Entry: 105ea5688; end: 105ea631f; -[SCDiscoverFeedManagementCreatorSettingsActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_105ea5688(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0720c0();
  if (((ulong)puVar2 & 1) == 0) {
    _objc_release(puVar1);
LAB_105ea5740:
    puVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0720c0();
    if (((ulong)puVar2 & 1) == 0) {
      _objc_release(puVar1);
    }
    else {
      puVar2 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126c5748;
      _objc_opt_class(PTR_PTR_1126c5748);
      puVar4 = puVar2;
      _objc_opt_isKindOfClass(puVar2,puVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
      if (((ulong)puVar4 & 1) != 0) {
        puVar2 = param_4;
        func_0x00010beee2e0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR_PTR_1126c5748;
        _objc_opt_class(PTR_PTR_1126c5748);
        puVar3 = puVar2;
        _objc_opt_isKindOfClass(puVar2,puVar1);
        puVar1 = puVar2;
        if (((ulong)puVar3 & 1) == 0) {
          puVar1 = (undefined *)0x0;
        }
        _objc_retain(puVar1);
        _objc_release(puVar2);
        func_0x00010c0794c0();
        func_0x00010c07b820(puVar1);
        uVar7 = *(undefined8 *)(param_1 + 8);
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        func_0x00010c0ebdc0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126b4028;
        func_0x00010bf81a20(PTR_PTR_1126b4028);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f9280(uVar7);
        _objc_release(puVar3);
        _objc_release(puVar2);
        _objc_release(uVar7);
        puVar2 = puVar1;
        func_0x00010c0794c0();
        if ((int)puVar2 != 0) {
          (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
        }
        lVar8 = *(long *)(param_1 + 0x40);
        puVar2 = puVar1;
        func_0x00010c0ebda0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar1;
        func_0x00010c0794c0(puVar1);
        (**(code **)(lVar8 + 0x10))(lVar8,puVar2,puVar3);
        _objc_release(puVar2);
        uVar7 = *(undefined8 *)(param_1 + 0x30);
        puVar2 = puVar1;
        func_0x00010c0ebdc0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c07b820(puVar1);
        func_0x00010c0794c0(puVar1);
        func_0x00010c28a6e0(uVar7);
        _objc_release(puVar2);
        func_0x00010c0794c0();
        puVar2 = puVar1;
        func_0x00010c0ebdc0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be4fcc0(param_1);
        _objc_release(puVar2);
        _objc_release(puVar1);
        uVar7 = 0;
        goto LAB_105ea5c9c;
      }
    }
    puVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0720c0();
    if (((ulong)puVar2 & 1) != 0) {
      lVar8 = param_1 + 0x60;
      _objc_loadWeakRetained();
      _objc_release();
      _objc_release(puVar1);
      if (lVar8 == 0) goto LAB_105ea5b14;
      puVar2 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126c5750;
      _objc_opt_class(PTR_PTR_1126c5750);
      puVar3 = puVar2;
      _objc_opt_isKindOfClass(puVar2,puVar1);
      puVar1 = puVar2;
      if (((ulong)puVar3 & 1) == 0) {
        puVar1 = (undefined *)0x0;
      }
      _objc_retain(puVar1);
      _objc_release(puVar2);
      puVar2 = puVar1;
      func_0x00010c244280(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be4fcc0(param_1);
      _objc_release(puVar3);
      _objc_release(puVar2);
      lVar8 = *(long *)(param_1 + 0x18);
      puVar2 = puVar1;
      func_0x00010c244280();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010c242840(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      func_0x00010c080120(puVar1);
      puVar5 = puVar1;
      func_0x00010c0794a0(puVar1);
      puVar6 = puVar1;
      func_0x00010c074c20(puVar1);
      _objc_release(puVar1);
      param_1 = param_1 + 0x60;
      _objc_loadWeakRetained(param_1);
      (**(code **)(lVar8 + 0x10))(lVar8,puVar2,puVar3,puVar4,puVar5,puVar6,param_1);
      _objc_release(param_1);
      _objc_release(puVar3);
LAB_105ea5b00:
      _objc_release(puVar2);
      uVar7 = 1;
      goto LAB_105ea5c9c;
    }
    _objc_release(puVar1);
LAB_105ea5b14:
    puVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0720c0();
    _objc_release(puVar1);
    if ((int)puVar2 == 0) {
      puVar1 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c0720c0();
      _objc_release(puVar1);
      if ((int)puVar2 == 0) {
        puVar1 = param_4;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        func_0x00010c0720c0();
        if (((ulong)puVar2 & 1) == 0) {
          _objc_release(puVar1);
LAB_105ea5dfc:
          puVar1 = param_4;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar1;
          func_0x00010c0720c0();
          if (((ulong)puVar2 & 1) == 0) {
            _objc_release(puVar1);
          }
          else {
            puVar2 = param_4;
            func_0x00010beee2e0();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR_PTR_1126c5768;
            _objc_opt_class(PTR_PTR_1126c5768);
            puVar4 = puVar2;
            _objc_opt_isKindOfClass(puVar2,puVar3);
            _objc_release(puVar2);
            _objc_release(puVar1);
            if (((ulong)puVar4 & 1) != 0) {
              puVar2 = param_4;
              func_0x00010beee2e0();
              _objc_retainAutoreleasedReturnValue();
              puVar1 = PTR_PTR_1126c5768;
              _objc_opt_class(PTR_PTR_1126c5768);
              puVar3 = puVar2;
              _objc_opt_isKindOfClass(puVar2,puVar1);
              puVar1 = puVar2;
              if (((ulong)puVar3 & 1) == 0) {
                puVar1 = (undefined *)0x0;
              }
              _objc_retain(puVar1);
              _objc_release(puVar2);
              puVar2 = PTR___NSConcreteStackBlock_11034bd00;
              puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_98 = 0xc2000000;
              pcStack_90 = FUN_105ea6320;
              puStack_88 = &UNK_110862228;
              puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_c0 = 0xc2000000;
              pcStack_b8 = FUN_105ea64a0;
              puStack_b0 = &UNK_1108724a0;
              lStack_a8 = param_1;
              lStack_80 = param_1;
              func_0x00010c0c0040(puVar1);
              puStack_f0 = puVar2;
              uStack_e8 = 0xc2000000;
              pcStack_e0 = FUN_105ea65ec;
              puStack_d8 = &UNK_110842e18;
              _objc_retain(puVar1);
              puStack_d0 = puVar1;
              func_0x000100162d98("APPSTORE",&puStack_f0);
              _objc_initWeak(auStack_f8,param_1);
              puStack_120 = puVar2;
              uStack_118 = 0xc2000000;
              uStack_110 = 0x105ea67fc;
              puStack_108 = &UNK_1108553a0;
              _objc_copyWeak(auStack_100,auStack_f8);
              _objc_copyWeak(auStack_128,auStack_f8);
              func_0x00010c0c0040(puVar1);
              _objc_destroyWeak(auStack_128);
              _objc_destroyWeak(auStack_100);
              _objc_destroyWeak(auStack_f8);
              _objc_release(puStack_d0);
              goto LAB_105ea62f0;
            }
          }
          puVar1 = param_4;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar1;
          func_0x00010c0720c0();
          if (((ulong)puVar2 & 1) == 0) {
            _objc_release(puVar1);
          }
          else {
            puVar2 = param_4;
            func_0x00010beee2e0();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            puVar4 = puVar2;
            _objc_opt_isKindOfClass(puVar2,puVar3);
            _objc_release(puVar2);
            _objc_release(puVar1);
            if (((ulong)puVar4 & 1) != 0) {
              puVar1 = param_4;
              func_0x00010beee2e0();
              _objc_retainAutoreleasedReturnValue();
              puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
              _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
              puVar3 = puVar1;
              _objc_opt_isKindOfClass(puVar1,puVar2);
              puVar2 = puVar1;
              if (((ulong)puVar3 & 1) == 0) {
                puVar2 = (undefined *)0x0;
              }
              _objc_retain(puVar2);
              _objc_release(puVar1);
              puVar1 = puVar2;
              func_0x00010c0e00e0(puVar2);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf1f3c0();
              _objc_release(puVar1);
              uVar7 = *(undefined8 *)(param_1 + 8);
              func_0x00010c269d40(uVar7);
              _objc_retainAutoreleasedReturnValue();
              puVar1 = puVar2;
              func_0x00010c0e00e0(puVar2);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR_PTR_1126b4028;
              func_0x00010bf81a20(PTR_PTR_1126b4028);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0f9280(uVar7);
              _objc_release(puVar3);
              _objc_release(puVar1);
              _objc_release(uVar7);
              puVar1 = puVar2;
              func_0x00010c0e00e0(puVar2);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar2);
              func_0x00010be4fcc0(param_1);
              goto LAB_105ea62f0;
            }
          }
          puVar1 = param_4;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar1;
          func_0x00010c0720c0();
          if (((ulong)puVar2 & 1) == 0) goto LAB_105ea62f0;
          lVar8 = param_1 + 0x60;
          _objc_loadWeakRetained();
          _objc_release();
          _objc_release(puVar1);
          if (lVar8 != 0) {
            puVar2 = param_4;
            func_0x00010beee2e0();
            _objc_retainAutoreleasedReturnValue();
            puVar1 = PTR_PTR_1126c5750;
            _objc_opt_class(PTR_PTR_1126c5750);
            puVar3 = puVar2;
            _objc_opt_isKindOfClass(puVar2,puVar1);
            puVar1 = puVar2;
            if (((ulong)puVar3 & 1) == 0) {
              puVar1 = (undefined *)0x0;
            }
            _objc_retain(puVar1);
            _objc_release(puVar2);
            puVar2 = puVar1;
            func_0x00010c244280(puVar1);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar2;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010be4fcc0(param_1);
            _objc_release(puVar3);
            _objc_release(puVar2);
            lVar8 = *(long *)(param_1 + 0x18);
            puVar2 = puVar1;
            func_0x00010c244280(puVar1);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar1;
            func_0x00010c242840(puVar1);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar1;
            func_0x00010c080120();
            puVar5 = puVar1;
            func_0x00010c0794a0(puVar1);
            puVar6 = puVar1;
            func_0x00010c074c20(puVar1);
            _objc_release(puVar1);
            param_1 = param_1 + 0x60;
            _objc_loadWeakRetained(param_1);
            (**(code **)(lVar8 + 0x10))
                      (lVar8,puVar2,puVar3,(ulong)puVar4 & 0xffffffff,puVar5,puVar6,param_1);
            _objc_release(param_1);
            _objc_release(puVar3);
            goto LAB_105ea5b00;
          }
        }
        else {
          puVar2 = param_4;
          func_0x00010beee2e0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
          puVar4 = puVar2;
          _objc_opt_isKindOfClass(puVar2,puVar3);
          _objc_release(puVar2);
          _objc_release(puVar1);
          if (((ulong)puVar4 & 1) == 0) goto LAB_105ea5dfc;
          puVar2 = param_4;
          func_0x00010beee2e0();
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
          puVar3 = puVar2;
          _objc_opt_isKindOfClass(puVar2,puVar1);
          puVar1 = puVar2;
          if (((ulong)puVar3 & 1) == 0) {
            puVar1 = (undefined *)0x0;
          }
          _objc_retain(puVar1);
          _objc_release(puVar2);
          func_0x00010bf1f3c0(puVar1);
          _objc_release(puVar1);
          uVar7 = *(undefined8 *)(param_1 + 0x10);
          puVar1 = PTR_PTR_1126c5758;
          _objc_alloc(PTR_PTR_1126c5758);
          func_0x00010c0462a0();
          func_0x00010bfd0a00(uVar7);
          _objc_release(puVar1);
          puVar2 = PTR_PTR_1126c55c0;
          puVar1 = PTR_PTR_1126c5760;
          func_0x00010c086320(PTR_PTR_1126c5760);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1f9640(puVar2);
LAB_105ea62f0:
          _objc_release(puVar1);
        }
        uVar7 = 0;
        goto LAB_105ea5c9c;
      }
      puVar2 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126b64a0;
      _objc_opt_class(PTR_PTR_1126b64a0);
      puVar3 = puVar2;
      _objc_opt_isKindOfClass(puVar2,puVar1);
      puVar1 = puVar2;
      if (((ulong)puVar3 & 1) == 0) {
        puVar1 = (undefined *)0x0;
      }
      _objc_retain(puVar1);
      _objc_release(puVar2);
      if (puVar1 != (undefined *)0x0) {
        func_0x00010c11b1e0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be4fcc0(param_1);
        _objc_release(puVar2);
      }
      uVar7 = *(undefined8 *)(param_1 + 0x28);
    }
    else {
      puVar2 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126b64b8;
      _objc_opt_class(PTR_PTR_1126b64b8);
      puVar3 = puVar2;
      _objc_opt_isKindOfClass(puVar2,puVar1);
      puVar1 = puVar2;
      if (((ulong)puVar3 & 1) == 0) {
        puVar1 = (undefined *)0x0;
      }
      _objc_retain(puVar1);
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (puVar1 != (undefined *)0x0) {
        func_0x00010c11b1e0();
        func_0x00010c14de00(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be4fcc0(param_1);
        _objc_release(puVar2);
      }
      uVar7 = *(undefined8 *)(param_1 + 0x20);
    }
    func_0x00010bfd0140(uVar7);
  }
  else {
    lVar8 = param_1 + 0x60;
    _objc_loadWeakRetained();
    _objc_release();
    _objc_release(puVar1);
    if (lVar8 == 0) goto LAB_105ea5740;
    puVar1 = (undefined *)(param_1 + 0x60);
    _objc_loadWeakRetained(puVar1);
    uVar7 = 1;
    func_0x00010bf84b00();
  }
  _objc_release(puVar1);
LAB_105ea5c9c:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 105ea6320; end: 105ea649f;  */

void FUN_105ea6320(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b4028;
  func_0x00010bf81a20(PTR_PTR_1126b4028);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c55c0;
  func_0x00010c130240(PTR_PTR_1126c55c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f9260(uVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  uVar1 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28a6e0(uVar5);
  _objc_release(uVar1);
  lVar4 = *(long *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(lVar4 + 0x50);
  uVar1 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c25bc60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed9cc0(lVar4);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ea64a0; end: 105ea65eb;  */

void FUN_105ea64a0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b4028;
  func_0x00010bf81a20(PTR_PTR_1126b4028);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f9280(uVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28a6e0(uVar1);
  _objc_release(puVar2);
  lVar4 = *(long *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(lVar4 + 0x50);
  func_0x00010c25bb60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed9cc0(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ea65ec; end: 105ea6603;  */

void FUN_105ea65ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c0050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_matchSnapchatter_publisher__11260da28,
             &PTR___NSConcreteGlobalBlock_1108f1408,&PTR___NSConcreteGlobalBlock_1108f1428);
  return;
}



/* Entry: 105ea6604; end: 105ea686f;  */

void FUN_105ea6604(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126afca8;
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar2 == (undefined *)0x0) {
    func_0x000105eb1794();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000105eb17ac();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_2;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar1);
    puVar1 = puVar4;
    puVar3 = PTR_PTR_1126afca8;
  }
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238720(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105ea6870; end: 105ea68df;  */

void FUN_105ea6870(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be4fcc0(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ea68e0; end: 105ea6a23; -[SCDiscoverFeedManagementCreatorSettingsActionHandler _logActionType:itemId:] */

void FUN_105ea68e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110daf5b8;
  _objc_retain(param_4);
  func_0x00010c0df780(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_60 = &PTR____CFConstantStringClassReference_110e02998;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_58 = puVar1;
  uStack_50 = param_4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_58,&ppuStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  FUN_105eacc08();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  ppuVar6 = &PTR____CFConstantStringClassReference_110f41518;
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf7dbc0(uVar5,param_2,&PTR____CFConstantStringClassReference_110f41518,param_1,puVar3)
  ;
  _objc_release(param_4);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (ppuVar6 != (undefined **)0x0) {
    uVar5 = *(undefined8 *)(puVar3 + 0x58);
    func_0x000107bfa524(ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28a8c0(uVar5,param_2,ppuVar6,lVar4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar6);
    return;
  }
  return;
}



/* Entry: 105ea6a24; end: 105ea6a7f; -[SCDiscoverFeedManagementCreatorSettingsActionHandler _updateInteractionHistoryWithStory:isSubscribed:] */

void FUN_105ea6a24(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    func_0x000107bfa524(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28a8c0(uVar1,param_2,param_3,param_4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 105ea6a80; end: 105ea6a97; -[SCDiscoverFeedManagementCreatorSettingsActionHandler presentingViewController] */

void FUN_105ea6a80(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ea6a98; end: 105ea6aa3; -[SCDiscoverFeedManagementCreatorSettingsActionHandler setPresentingViewController:] */

void FUN_105ea6a98(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 105ea6aa4; end: 105ea6b47; -[SCDiscoverFeedManagementCreatorSettingsActionHandler .cxx_destruct] */

void FUN_105ea6aa4(long param_1)

{
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



/* Entry: 105ea6b48; end: 105ea6b53; +[SCDiscoverFeedManagementNavigationActionHandler announcerIdentifier] */

undefined ** FUN_105ea6b48(void)

{
  return &PTR____CFConstantStringClassReference_110e2ecf8;
}



/* Entry: 105ea6b54; end: 105ea6b5b; -[SCDiscoverFeedManagementNavigationActionHandler addListener:] */

void FUN_105ea6b54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 105ea6b5c; end: 105ea6b63; -[SCDiscoverFeedManagementNavigationActionHandler removeListener:] */

void FUN_105ea6b5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105ea6b64; end: 105ea6b6b; -[SCDiscoverFeedManagementNavigationActionHandler didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_105ea6b64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_didTriggerEventWithEventName_ann_1125bd098);
  return;
}



/* Entry: 105ea6b6c; end: 105ea702b; -[SCDiscoverFeedManagementNavigationActionHandler initWithUserSession:discoverFeedDataMutator:discoverFeedDataFetcher:imageDownloader:presentPublicUserProfileBlock:impalaShowProfileActionHandlerProvider:impalaPublisherProfileActionHandlerProvider:requestNotificationPermissionsBlock:displayOptInNotificationPromptBlock:snapProServices:creatorSettingsFetcher:creatorSettingsTracker:creatorSettingsMutator:snapchattersDataFetcher:snapchatterPublicInfoFetcher:circumstanceEngine:interactionHistoryManager:featureSettingsService:storiesFetcher:customAppThemeProvider:presentCreatorSubscriptionsBlock:] */

undefined8 *
FUN_105ea6b6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain();
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
  _objc_retain(param_23);
  puStack_70 = PTR_PTR_1126eda50;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
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
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    uVar2 = param_7;
    _objc_retainBlock();
    uVar4 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_8;
    _objc_retainBlock();
    uVar4 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_9;
    _objc_retainBlock();
    uVar4 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_10;
    _objc_retainBlock();
    uVar4 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_11;
    _objc_retainBlock();
    uVar4 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar3);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_22;
    _objc_release(uVar2);
    uVar2 = param_23;
    _objc_retainBlock();
    uVar4 = puVar1[0x16];
    puVar1[0x16] = uVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_23);
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



/* Entry: 105ea702c; end: 105ea7447; -[SCDiscoverFeedManagementNavigationActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_105ea702c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((int)uVar1 == 0) {
    uVar2 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((int)uVar1 == 0) {
      uVar2 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010c0720c0();
      _objc_release(uVar2);
      if ((int)uVar1 == 0) {
        uVar2 = param_4;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar2;
        func_0x00010c0720c0();
        _objc_release(uVar2);
        if ((int)uVar1 == 0) {
          uVar2 = param_4;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          uVar1 = uVar2;
          func_0x00010c0720c0();
          _objc_release(uVar2);
          if ((int)uVar1 == 0) {
            uVar2 = param_4;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            uVar1 = uVar2;
            func_0x00010c0720c0();
            _objc_release(uVar2);
            if ((int)uVar1 != 0) {
              _objc_initWeak(auStack_58,param_1);
              param_1 = param_1 + 0xb8;
              _objc_loadWeakRetained(param_1);
              _objc_copyWeak(auStack_100,auStack_58);
              func_0x00010bf83dc0(param_1);
              _objc_release(param_1);
              _objc_destroyWeak(auStack_100);
              _objc_destroyWeak(auStack_58);
            }
            uVar2 = 0;
            goto LAB_105ea7334;
          }
          _objc_initWeak(auStack_58,param_1);
          param_1 = param_1 + 0xb8;
          _objc_loadWeakRetained(param_1);
          puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_f0 = 0xc2000000;
          uStack_e8 = 0x105ea74cc;
          puStack_e0 = &UNK_1108434b0;
          ppuVar3 = &puStack_f8;
          _objc_copyWeak(auStack_d8,auStack_58);
          func_0x00010bf83dc0(param_1);
        }
        else {
          _objc_initWeak(auStack_58,param_1);
          param_1 = param_1 + 0xb8;
          _objc_loadWeakRetained(param_1);
          puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_c8 = 0xc2000000;
          uStack_c0 = 0x105ea74a0;
          puStack_b8 = &UNK_1108434b0;
          ppuVar3 = &puStack_d0;
          _objc_copyWeak(auStack_b0,auStack_58);
          func_0x00010bf83dc0(param_1);
        }
      }
      else {
        _objc_initWeak(auStack_58,param_1);
        param_1 = param_1 + 0xb8;
        _objc_loadWeakRetained(param_1);
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0xc2000000;
        uStack_98 = 0x105ea7474;
        puStack_90 = &UNK_1108434b0;
        ppuVar3 = &puStack_a8;
        _objc_copyWeak(auStack_88,auStack_58);
        func_0x00010bf83dc0(param_1);
      }
    }
    else {
      _objc_initWeak(auStack_58,param_1);
      param_1 = param_1 + 0xb8;
      _objc_loadWeakRetained(param_1);
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_105ea7448;
      puStack_68 = &UNK_1108434b0;
      ppuVar3 = &puStack_80;
      _objc_copyWeak(auStack_60,auStack_58);
      func_0x00010bf83dc0(param_1);
    }
    _objc_release(param_1);
    _objc_destroyWeak(ppuVar3 + 4);
    _objc_destroyWeak(auStack_58);
    uVar2 = 1;
  }
  else {
    param_1 = param_1 + 0xb8;
    _objc_loadWeakRetained(param_1);
    uVar2 = 1;
    func_0x00010bf83dc0();
    _objc_release(param_1);
  }
LAB_105ea7334:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 105ea7448; end: 105ea7523;  */

void FUN_105ea7448(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7edc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ea7524; end: 105ea7587; -[SCDiscoverFeedManagementNavigationActionHandler _unsnoozeFoFStories] */

void FUN_105ea7524(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b89e0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa6cc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ea7588; end: 105ea7817; -[SCDiscoverFeedManagementNavigationActionHandler _snoozeFoFStories] */

void FUN_105ea7588(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2ed18;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e2ed18,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e2ed38;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e2ed38,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_70,param_1);
  puVar4 = PTR_PTR_1126aed70;
  ppuVar3 = &PTR____CFConstantStringClassReference_110dc4b38;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc4b38,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  puVar5 = PTR_PTR_1126aed70;
  ppuVar3 = &PTR____CFConstantStringClassReference_110daf8b8;
  uVar9 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  puVar6 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_68 = puVar4;
  puStack_60 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar6);
  _objc_release(puVar7);
  param_1 = param_1 + 0xb8;
  _objc_loadWeakRetained(param_1);
  lVar8 = param_1;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0();
  _objc_release(lVar8);
  _objc_release(param_1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(ppuVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  __Unwind_Resume(ppuVar1);
  func_0x00010bf84b00(uVar9);
  ppuVar1 = ppuVar1 + 4;
  _objc_loadWeakRetained(ppuVar1);
  func_0x00010be35de0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 105ea7818; end: 105ea7857;  */

void FUN_105ea7818(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be35de0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ea7858; end: 105ea7867;  */

void FUN_105ea7858(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105ea7868; end: 105ea78df; -[SCDiscoverFeedManagementNavigationActionHandler _hideStorySuggestions] */

void FUN_105ea7868(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b89e0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ea78e0; end: 105ea7c3b; -[SCDiscoverFeedManagementNavigationActionHandler _presentSubscriptionView] */

void FUN_105ea78e0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_88,param_1);
  puVar1 = PTR_PTR_1126c5740;
  _objc_alloc();
  puVar2 = PTR_PTR_1126c5770;
  _objc_alloc();
  puVar3 = puVar2;
  func_0x00010b0aeb34();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x000105eb171c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053620();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_90,auStack_88);
  lVar7 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar9 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00cf20();
  _objc_release(uVar9);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010c1c8b80(puVar1);
  ppuStack_80 = &PTR____CFConstantStringClassReference_110daf5b8;
  ppuStack_78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3eb0;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  FUN_105eacc08();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar9 = *(undefined8 *)(param_1 + 0x50);
  lVar7 = param_1;
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar9);
  _objc_release(lVar7);
  func_0x00010bef9980(puVar1);
  param_1 = param_1 + 0xb8;
  _objc_loadWeakRetained(param_1);
  lVar7 = param_1;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0();
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_90);
  puVar8 = auStack_88;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  __Unwind_Resume(puVar8);
  puVar8 = puVar8 + 0x20;
  _objc_loadWeakRetained(puVar8);
  func_0x00010bea5ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 105ea7c3c; end: 105ea7c67;  */

void FUN_105ea7c3c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea5ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ea7c68; end: 105ea7fc3; -[SCDiscoverFeedManagementNavigationActionHandler _presentHiddenStoriesView] */

void FUN_105ea7c68(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_88,param_1);
  puVar1 = PTR_PTR_1126c5740;
  _objc_alloc();
  puVar2 = PTR_PTR_1126c5770;
  _objc_alloc();
  puVar3 = puVar2;
  func_0x000105eb177c();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x000105eb1734();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053620();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_90,auStack_88);
  lVar7 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar9 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00cf20();
  _objc_release(uVar9);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010c1c8b80(puVar1);
  ppuStack_80 = &PTR____CFConstantStringClassReference_110daf5b8;
  ppuStack_78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3ec8;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  FUN_105eacc08();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar9 = *(undefined8 *)(param_1 + 0x50);
  lVar7 = param_1;
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar9);
  _objc_release(lVar7);
  func_0x00010bef9980(puVar1);
  param_1 = param_1 + 0xb8;
  _objc_loadWeakRetained(param_1);
  lVar7 = param_1;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0();
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_90);
  puVar8 = auStack_88;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  __Unwind_Resume(puVar8);
  puVar8 = puVar8 + 0x20;
  _objc_loadWeakRetained(puVar8);
  func_0x00010bea5ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 105ea7fc4; end: 105ea7fef;  */

void FUN_105ea7fc4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea5ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ea7ff0; end: 105ea8053; -[SCDiscoverFeedManagementNavigationActionHandler _presentCreatorSubscriptionsManagement] */

void FUN_105ea7ff0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1 + 0xb8;
  _objc_loadWeakRetained();
  lVar1 = lVar2;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if ((lVar1 != 0) && (lVar2 = *(long *)(param_1 + 0xb0), lVar2 != 0)) {
    (**(code **)(lVar2 + 0x10))(lVar2,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105ea8054; end: 105ea80ab; -[SCDiscoverFeedManagementNavigationActionHandler _applicationWillResignActive] */

void FUN_105ea8054(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010bfd0140(param_1,param_2,param_1,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ea80ac; end: 105ea80d7; -[SCDiscoverFeedManagementNavigationActionHandler _setNeedsCustomStatusBarStyleContextUpdate] */

void FUN_105ea80ac(long param_1)

{
  param_1 = param_1 + 0xc0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1cbd20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ea80d8; end: 105ea80ef; -[SCDiscoverFeedManagementNavigationActionHandler actionMenuPresenter] */

void FUN_105ea80d8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ea80f0; end: 105ea80fb; -[SCDiscoverFeedManagementNavigationActionHandler setActionMenuPresenter:] */

void FUN_105ea80f0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xb8,param_3);
  return;
}



/* Entry: 105ea80fc; end: 105ea8113; -[SCDiscoverFeedManagementNavigationActionHandler customStatusBarStyleContextController] */

void FUN_105ea80fc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ea8114; end: 105ea811f; -[SCDiscoverFeedManagementNavigationActionHandler setCustomStatusBarStyleContextController:] */

void FUN_105ea8114(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xc0,param_3);
  return;
}



/* Entry: 105ea8120; end: 105ea824b; -[SCDiscoverFeedManagementNavigationActionHandler .cxx_destruct] */

void FUN_105ea8120(long param_1)

{
  _objc_destroyWeak(param_1 + 0xc0);
  _objc_destroyWeak(param_1 + 0xb8);
  _objc_storeStrong(param_1 + 0xb0,0);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105ea824c; end: 105ea82f7; -[SCDiscoverFeedManagementFullScreenViewDataCoordinator initWithUserSession:] */

undefined1 * FUN_105ea824c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eda58;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b4990;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105ea82f8; end: 105ea8303; +[SCDiscoverFeedManagementFullScreenViewDataCoordinator announcerIdentifier] */

undefined ** FUN_105ea82f8(void)

{
  return &PTR____CFConstantStringClassReference_110e2ed98;
}



/* Entry: 105ea8304; end: 105ea830b; -[SCDiscoverFeedManagementFullScreenViewDataCoordinator addListener:] */

void FUN_105ea8304(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 105ea830c; end: 105ea8313; -[SCDiscoverFeedManagementFullScreenViewDataCoordinator removeListener:] */

void FUN_105ea830c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105ea8314; end: 105ea831f; +[SCDiscoverFeedManagementFullScreenViewDataCoordinator dataCoordinatorIdentifier] */

undefined ** FUN_105ea8314(void)

{
  return &PTR____CFConstantStringClassReference_110e2edb8;
}



/* Entry: 105ea8320; end: 105ea8327; -[SCDiscoverFeedManagementFullScreenViewDataCoordinator addDataUpdateListener:] */

void FUN_105ea8320(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 105ea8328; end: 105ea832f; -[SCDiscoverFeedManagementFullScreenViewDataCoordinator removeDataUpdateListener:] */

void FUN_105ea8328(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105ea8330; end: 105ea8437; -[SCDiscoverFeedManagementFullScreenViewDataCoordinator handleDataRequest:] */

void FUN_105ea8330(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  ulong uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126c5758;
  _objc_opt_class(PTR_PTR_1126c5758);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((uVar2 & 1) != 0) {
    uVar3 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105ea8438;
    puStack_50 = &UNK_110841fb0;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    uStack_48 = param_3;
    func_0x00010007380c(uVar3,&puStack_68);
    _objc_release(uVar3);
    _objc_release(uStack_48);
    _objc_destroyWeak(auStack_40);
  }
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105ea8438; end: 105ea846b;  */

void FUN_105ea8438(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcc740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ea846c; end: 105ea84d3; -[SCDiscoverFeedManagementFullScreenViewDataCoordinator _announceUpdateWithDataRequest:] */

void FUN_105ea846c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  func_0x00010bf63740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf63720(uVar1,param_2,param_1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ea84d4; end: 105ea850f; -[SCDiscoverFeedManagementFullScreenViewDataCoordinator .cxx_destruct] */

void FUN_105ea84d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ea8510; end: 105ea85e7; -[SCDiscoverFeedManagementActionSheetDataProvider initWithCircumstanceEngine:featureSettingsService:source:showManageCreatorSubscriptions:] */

undefined1 *
FUN_105ea8510(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126eda60;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105ea85e8; end: 105ea89c3; -[SCDiscoverFeedManagementActionSheetDataProvider updateViewModelWithCompletionBlock:] */

void FUN_105ea85e8(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  double dVar16;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x28) == 2) {
    bVar1 = false;
    bVar2 = false;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08a1a0();
    _objc_release(lVar4);
    dVar16 = (double)(lVar5 / 1000);
    puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf655e0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f3a0();
    bVar1 = 0.0 < dVar16 + 604800.0;
    bVar2 = dVar16 + 604800.0 <= 0.0;
    _objc_release(puVar6);
  }
  puVar6 = PTR_PTR_1126b1210;
  _objc_alloc();
  cVar3 = *(char *)(param_1 + 0x20);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar8 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  puVar9 = puVar8;
  FUN_105eb1704();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x000107d4bc38();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar7);
  _objc_release(puVar10);
  if (cVar3 == '\x01') {
    puVar10 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    puVar11 = puVar10;
    func_0x000105eb17c4();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x000105eb17dc();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar11;
    func_0x000107d4bcc8(puVar11,puVar10,puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar7);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
  }
  puVar10 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  puVar11 = puVar10;
  func_0x000105eb1764();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x000107d4bc38();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar7);
  _objc_release(puVar12);
  _objc_release(puVar11);
  if (bVar2) {
    puVar11 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    ppuVar15 = &PTR____CFConstantStringClassReference_110e2edd8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e2edd8,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuVar15;
    func_0x000107d4bc38();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar7);
    _objc_release(ppuVar14);
    _objc_release(ppuVar15);
    _objc_release(puVar11);
  }
  if (bVar1) {
    puVar11 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    ppuVar15 = &PTR____CFConstantStringClassReference_110e2edf8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e2edf8,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuVar15;
    func_0x000107d4bc38();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar7);
    _objc_release(ppuVar14);
    _objc_release(ppuVar15);
    _objc_release(puVar11);
  }
  puVar11 = puVar7;
  func_0x00010bf51e00(puVar7);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  ppuVar15 = &PTR____CFConstantStringClassReference_110e2f198;
  func_0x000107d4bf04(&PTR____CFConstantStringClassReference_110e2f198);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019f60(puVar6);
  _objc_release(ppuVar15);
  _objc_release(puVar11);
  (**(code **)(param_3 + 0x10))(param_3,puVar6);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ea89c4; end: 105ea89f7; -[SCDiscoverFeedManagementActionSheetDataProvider reload] */

void FUN_105ea89c4(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf64160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ea89f8; end: 105ea8a0f; -[SCDiscoverFeedManagementActionSheetDataProvider delegate] */

void FUN_105ea89f8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ea8a10; end: 105ea8a1b; -[SCDiscoverFeedManagementActionSheetDataProvider setDelegate:] */

void FUN_105ea8a10(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 105ea8a1c; end: 105ea8a5f; -[SCDiscoverFeedManagementActionSheetDataProvider .cxx_destruct] */

void FUN_105ea8a1c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ea8a60; end: 105ea8c2b;  */

void FUN_105ea8a60(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c236bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126b64a0;
    _objc_opt_new(PTR_PTR_1126b64a0);
    lVar1 = param_1;
    func_0x00010c11b1e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e5b60(puVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c116a20(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    func_0x00010c1745a0(puVar2);
    _objc_release(lVar1);
    func_0x00010c1b4ca0(puVar2);
    func_0x00010c1b4cc0(puVar2);
    puVar3 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
  }
  else {
    puVar2 = PTR_PTR_1126b64b8;
    _objc_opt_new(PTR_PTR_1126b64b8);
    lVar1 = param_1;
    func_0x00010c236bc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c201be0(puVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c11b1e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    _atol();
    func_0x00010c1e5b60(puVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c116a20(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    func_0x00010c174420(puVar2);
    _objc_release(lVar1);
    func_0x00010c20f460(puVar2);
    func_0x00010c1d5c40(puVar2);
    puVar3 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
  }
  func_0x00010c01b460();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105ea8c2c; end: 105ea8d1f;  */

ulong FUN_105ea8c2c(undefined8 param_1,ulong param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b15c8;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  uVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  uVar3 = param_2;
  if ((uVar2 & 1) == 0) {
    func_0x00010c2711a0(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010901d7c4(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
  puVar1 = PTR_PTR_1126b15c8;
  _objc_opt_class(PTR_PTR_1126b15c8);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  uVar4 = param_3;
  if ((uVar2 & 1) == 0) {
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010901d7c4(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = uVar3;
  func_0x00010c09e740(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 105ea8d20; end: 105ea95fb;  */

void FUN_105ea8d20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010c2711a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c11b1e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c0dff20(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar4 = uVar3;
  func_0x00010c079480(uVar3);
  _objc_release(uVar3);
  _objc_release(lVar2);
  puVar5 = PTR_PTR_1126c5778;
  puVar9 = PTR_PTR_1126b4860;
  lVar2 = param_1;
  func_0x00010c0b4680(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fde60(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d7ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(lVar2);
  puVar6 = PTR_PTR_1126b02a8;
  _objc_alloc();
  puVar9 = PTR_PTR_1126c5768;
  lVar2 = param_1;
  func_0x00010c11b1e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc3520();
  _atol();
  func_0x00010c11b740(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b460();
  _objc_release(puVar9);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c11b1e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar7 == 0) {
    puVar9 = (undefined *)0x0;
    lVar2 = 0;
  }
  else {
    puVar9 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    puVar8 = PTR_PTR_1126c5748;
    _objc_alloc(PTR_PTR_1126c5748);
    lVar2 = param_1;
    func_0x00010c11b1e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c007880(puVar8);
    func_0x00010c01b460(puVar9);
    _objc_release(puVar8);
    _objc_release(lVar2);
    lVar2 = param_1;
    FUN_105ea8a60(param_1,1,uVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar8 = PTR_PTR_1126c5780;
  _objc_alloc(PTR_PTR_1126c5780);
  lVar7 = param_1;
  FUN_105ea8a60(param_1,1,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04f200(puVar8);
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105ea95fc; end: 105ea9827;  */

undefined1 * FUN_105ea95fc(double param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined1 **ppuStack_160;
  code *pcStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined4 uStack_114;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 uStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar3 = PTR_PTR_1126c5778;
  puVar2 = PTR_PTR_1126b4860;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c0b4680(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fde60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d7ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc();
  ppuStack_78 = &PTR____CFConstantStringClassReference_110e2f338;
  uVar1 = param_2;
  func_0x00010c11b1e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_70 = &PTR____CFConstantStringClassReference_110e2f358;
  puStack_60 = PTR____kCFBooleanTrue_11034ab68;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_68 = uVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b460();
  _objc_release(puVar4);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126c5788;
  _objc_alloc();
  uVar1 = param_2;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  FUN_105ea8a60(param_2,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = 0;
  uVar6 = param_2;
  FUN_105ea8a60(param_2,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uStack_80 = param_3;
  func_0x00010c01a640();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_88 = FUN_105ea9828;
    lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_114 = uVar15;
    puStack_90 = &stack0xfffffffffffffff0;
    _objc_retain();
    puVar2 = puVar3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf85d80(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010c294420(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    func_0x00010bf1bae0();
    _objc_retainAutoreleasedReturnValue();
    puStack_120 = puVar8;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar3;
    func_0x00010bf1bae0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bf1c0a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126b19f8;
    func_0x00010bf81400();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_f0 = puVar11;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_140 = 1;
    uStack_148 = 0;
    uStack_14c = CONCAT31(uStack_14c._1_3_,1);
    uStack_150 = 7;
    puVar12 = puVar2;
    func_0x000108feb5c8(puVar2,puVar4,puVar7,puVar8,puVar10,0,0,puVar21);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar21);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puStack_120);
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(puVar2);
    func_0x00010b816218();
    param_1 = (double)(long)(param_1 * 3.3333333333333335) / param_1;
    puStack_120 = puVar12;
    func_0x000107cf5f4c(0x4049000000000000,0x4049000000000000,param_1 + param_1,param_1,0,param_1,
                        puVar12,0,0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c5778;
    puStack_128 = puVar12;
    func_0x00010c244300();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126b02a8;
    _objc_alloc();
    puVar4 = PTR_PTR_1126c5750;
    _objc_alloc(PTR_PTR_1126c5750);
    func_0x00010c049040();
    func_0x00010c01b460();
    _objc_release(puVar4);
    puVar8 = PTR_PTR_1126b02a8;
    _objc_alloc();
    ppuStack_110 = &PTR____CFConstantStringClassReference_110e2f338;
    puVar4 = puVar3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_108 = &PTR____CFConstantStringClassReference_110e2f358;
    puStack_f8 = PTR____kCFBooleanFalse_11034ab60;
    puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_100 = puVar4;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01b460();
    _objc_release(puVar9);
    _objc_release(puVar4);
    puVar9 = PTR_PTR_1126b02a8;
    _objc_alloc();
    puVar4 = PTR_PTR_1126c5750;
    _objc_alloc(PTR_PTR_1126c5750);
    func_0x00010c049040();
    func_0x00010c01b460();
    _objc_release(puVar4);
    puVar10 = PTR_PTR_1126c5788;
    _objc_alloc();
    puVar11 = puVar3;
    func_0x00010901d7c4();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      puVar21 = (undefined *)0x0;
    }
    else {
      puVar21 = puVar3;
      func_0x000108f47298();
    }
    _objc_release(puVar3);
    uStack_150 = CONCAT31(uStack_150._1_3_,(char)uStack_114);
    puVar4 = puVar10;
    puVar16 = puVar11;
    puVar17 = puVar2;
    puVar18 = puVar7;
    puVar19 = puVar8;
    puVar20 = puVar9;
    func_0x00010c01a640();
    _objc_release(puVar11);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar2);
    _objc_release(puStack_128);
    puVar12 = puStack_120;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
      ___stack_chk_fail();
      uVar6 = uStack_148;
      ppuVar13 = &puStack_1c0;
      ppuStack_180 = &PTR_PTR_1108f1728;
      ppuStack_178 = &PTR____CFConstantStringClassReference_110e2f278;
      pcStack_158 = FUN_105ea9c54;
      uVar5 = CONCAT71(uStack_13f,uStack_140);
      uVar1 = CONCAT44(uStack_14c,uStack_150);
      puStack_1b0 = puVar10;
      puStack_1a8 = puVar11;
      puStack_1a0 = puVar9;
      puStack_198 = puVar8;
      puStack_190 = puVar7;
      puStack_188 = puVar2;
      puStack_170 = puVar3;
      puStack_168 = puVar4;
      ppuStack_160 = &puStack_90;
      _objc_retain(puVar16);
      _objc_retain(puVar21);
      _objc_retain(puVar17);
      _objc_retain(puVar18);
      _objc_retain(puVar19);
      _objc_retain(puVar20);
      _objc_retain(uVar1);
      _objc_retain(uVar6);
      _objc_retain(uVar5);
      puStack_1b8 = PTR_PTR_1126eda68;
      puStack_1c0 = puVar12;
      _objc_msgSendSuper2(&puStack_1c0,PTR_s_init_1125d9248);
      if (ppuVar13 != (undefined **)0x0) {
        _objc_retain(puVar16);
        uVar14 = *(undefined8 *)((long)ppuVar13 + 8);
        *(undefined **)((long)ppuVar13 + 8) = puVar16;
        _objc_release(uVar14);
        _objc_retain(puVar21);
        uVar14 = *(undefined8 *)((long)ppuVar13 + 0x10);
        *(undefined **)((long)ppuVar13 + 0x10) = puVar21;
        _objc_release(uVar14);
        _objc_retain(puVar17);
        uVar14 = *(undefined8 *)((long)ppuVar13 + 0x18);
        *(undefined **)((long)ppuVar13 + 0x18) = puVar17;
        _objc_release(uVar14);
        _objc_retain(puVar18);
        uVar14 = *(undefined8 *)((long)ppuVar13 + 0x20);
        *(undefined **)((long)ppuVar13 + 0x20) = puVar18;
        _objc_release(uVar14);
        _objc_retain(puVar19);
        uVar14 = *(undefined8 *)((long)ppuVar13 + 0x28);
        *(undefined **)((long)ppuVar13 + 0x28) = puVar19;
        _objc_release(uVar14);
        _objc_retain(puVar20);
        uVar14 = *(undefined8 *)((long)ppuVar13 + 0x30);
        *(undefined **)((long)ppuVar13 + 0x30) = puVar20;
        _objc_release(uVar14);
        _objc_retain(uVar1);
        uVar14 = *(undefined8 *)((long)ppuVar13 + 0x38);
        *(undefined8 *)((long)ppuVar13 + 0x38) = uVar1;
        _objc_release(uVar14);
        _objc_retain(uVar6);
        uVar14 = *(undefined8 *)((long)ppuVar13 + 0x40);
        *(undefined8 *)((long)ppuVar13 + 0x40) = uVar6;
        _objc_release(uVar14);
        _objc_retain(uVar5);
        uVar14 = *(undefined8 *)((long)ppuVar13 + 0x48);
        *(undefined8 *)((long)ppuVar13 + 0x48) = uVar5;
        _objc_release(uVar14);
      }
      _objc_release(uVar5);
      _objc_release(uVar6);
      _objc_release(uVar1);
      _objc_release(puVar20);
      _objc_release(puVar19);
      _objc_release(puVar18);
      _objc_release(puVar17);
      _objc_release(puVar21);
      _objc_release(puVar16);
      return (undefined1 *)ppuVar13;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return puVar4;
}


