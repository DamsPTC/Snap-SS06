/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106970338; end: 10697041f; -[SCSelectionSpotlightStoryObservableRepositoryImpl _createSelectionSpotlightStoryObservable] */

void FUN_106970338(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126ae820;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar1;
  _objc_release(uVar2);
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf870a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106970420; end: 10697044b;  */

void FUN_106970420(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedf8e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10697044c; end: 10697053b; -[SCSelectionSpotlightStoryObservableRepositoryImpl _updateSelectionOurStories] */

void FUN_10697044c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined1 uVar16;
  undefined8 uVar17;
  undefined1 auStack_168 [8];
  undefined1 uStack_160;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  undefined1 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126c0e58;
  _objc_alloc();
  func_0x00010c04f280();
  puVar3 = puVar2;
  func_0x00010853f454();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x0001069716dc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar17 = *(undefined8 *)(param_1 + 0x48);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar4;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar17);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_10697053c;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(puVar2 + 0x68);
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x00010c067d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lStack_c8 = lVar6;
  _objc_release(lVar5);
  uVar7 = *(undefined8 *)(puVar2 + 0x68);
  func_0x00010c067d40();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar7;
  func_0x00010bfe5400();
  _objc_retainAutoreleasedReturnValue();
  uStack_d0 = uVar17;
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(puVar2 + 0x68);
  func_0x00010c067d40();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar7;
  func_0x00010c072240();
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(puVar2 + 0x68);
  func_0x00010c07a8a0(uVar7);
  uVar16 = (undefined1)*(undefined8 *)(puVar2 + 0x68);
  func_0x00010c2370a0();
  uVar8 = *(undefined8 *)(puVar2 + 0x68);
  func_0x00010beee7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(puVar2 + 0x68);
  uStack_d8 = uVar8;
  func_0x00010c0c7800();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(puVar2 + 0x68);
  uStack_e0 = uVar9;
  func_0x00010c0c77e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(puVar2 + 0x68);
  uStack_e8 = uVar8;
  func_0x00010c244280(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(puVar2 + 0x68);
  func_0x00010bf15500(uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = *(undefined **)(puVar2 + 8);
  func_0x000108f48934();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar10;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c08fa60();
  if (puVar3 == (undefined *)0x0) {
    func_0x00010853f4ac();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = puVar4;
    func_0x00010853f504();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar11 = *(undefined8 *)(puVar2 + 0x68);
  func_0x00010c08dd60();
  _objc_retainAutoreleasedReturnValue();
  uStack_f8 = (undefined1)uVar17;
  uStack_100 = uStack_d0;
  puVar12 = puVar3;
  lVar6 = lStack_c8;
  uStack_110 = uVar16;
  uStack_108 = uVar11;
  FUN_106971838(puVar3,uStack_e0,uVar9,uStack_e8,lStack_c8,uStack_d8,uVar8,uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_release(puVar3);
  iVar1 = (int)*(undefined8 *)(puVar2 + 8);
  func_0x000108f48528();
  if (iVar1 != 0) {
    puVar3 = puVar2 + 0x28;
    _objc_loadWeakRetained();
    puVar13 = puVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar14 = puVar13;
    func_0x00010010fab4(puVar13,PTR_DAT_1126a56a0);
    puVar3 = puVar13;
    if ((int)puVar14 == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(puVar13);
    puVar13 = puVar3;
    func_0x00010c119a60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (puVar13 != (undefined *)0x0) {
      uVar17 = *(undefined8 *)(puVar2 + 0x50);
      uVar16 = 2;
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_b8 = puVar12;
      puStack_b0 = puVar13;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar3;
      func_0x00010c0d9840(uVar17);
      _objc_release(puVar3);
      goto LAB_106970800;
    }
  }
  uVar17 = *(undefined8 *)(puVar2 + 0x50);
  uVar16 = 1;
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_c0 = puVar12;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010c0d9840(uVar17);
LAB_106970800:
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar4);
  _objc_release(puVar10);
  _objc_release(uVar8);
  _objc_release(uVar9);
  _objc_release(uStack_e8);
  _objc_release(uStack_e0);
  _objc_release(uStack_d8);
  _objc_release(uStack_d0);
  lVar5 = lStack_c8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_106970894;
  uStack_150 = uVar11;
  puStack_148 = puVar2;
  puStack_140 = puVar3;
  uStack_138 = uVar17;
  puStack_130 = puVar13;
  puStack_128 = puVar12;
  ppuStack_120 = &puStack_50;
  _objc_retain(puVar14);
  _objc_retain(lVar6);
  func_0x00010bf86d80(*(undefined8 *)(lVar5 + 0x40));
  if (puVar14 == (undefined *)0x0) {
    func_0x00010be71e00(lVar5);
  }
  else {
    lVar15 = lVar5;
    func_0x00010bebf060(lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_158,lVar5);
    _objc_copyWeak(auStack_168,auStack_158);
    lVar5 = lVar15;
    uStack_160 = uVar16;
    func_0x00010c25ff60(lVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar5);
    _objc_destroyWeak(auStack_168);
    _objc_destroyWeak(auStack_158);
    _objc_release(lVar15);
  }
  _objc_release(lVar6);
  _objc_release(puVar14);
  return;
}



/* Entry: 10697053c; end: 106970893; -[SCSelectionSpotlightStoryObservableRepositoryImpl _updateSelectionSpotlightStory] */

void FUN_10697053c(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined1 uVar15;
  undefined8 uVar16;
  undefined1 auStack_128 [8];
  undefined1 uStack_120;
  undefined1 auStack_118 [8];
  undefined8 uStack_110;
  long lStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined1 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x68);
  func_0x00010c067d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lStack_88 = lVar3;
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c067d40();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar4;
  func_0x00010bfe5400();
  _objc_retainAutoreleasedReturnValue();
  uStack_90 = uVar16;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c067d40();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar4;
  func_0x00010c072240();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c07a8a0(uVar4);
  uVar15 = (undefined1)*(undefined8 *)(param_1 + 0x68);
  func_0x00010c2370a0();
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010beee7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x68);
  uStack_98 = uVar5;
  func_0x00010c0c7800();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  uStack_a0 = uVar6;
  func_0x00010c0c77e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x68);
  uStack_a8 = uVar5;
  func_0x00010c244280(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010bf15500(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = *(undefined **)(param_1 + 8);
  func_0x000108f48934();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c08fa60();
  if (puVar9 == (undefined *)0x0) {
    func_0x00010853f4ac();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar9 = puVar8;
    func_0x00010853f504();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar10 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c08dd60();
  _objc_retainAutoreleasedReturnValue();
  uStack_b8 = (undefined1)uVar16;
  uStack_c0 = uStack_90;
  puVar11 = puVar9;
  lVar3 = lStack_88;
  uStack_d0 = uVar15;
  uStack_c8 = uVar10;
  FUN_106971838(puVar9,uStack_a0,uVar6,uStack_a8,lStack_88,uStack_98,uVar5,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(puVar9);
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x000108f48528();
  if (iVar1 != 0) {
    puVar9 = (undefined *)(param_1 + 0x28);
    _objc_loadWeakRetained();
    puVar12 = puVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    puVar13 = puVar12;
    func_0x00010010fab4(puVar12,PTR_DAT_1126a56a0);
    puVar9 = puVar12;
    if ((int)puVar13 == 0) {
      puVar9 = (undefined *)0x0;
    }
    _objc_retain(puVar9);
    _objc_release(puVar12);
    puVar12 = puVar9;
    func_0x00010c119a60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    if (puVar12 != (undefined *)0x0) {
      uVar16 = *(undefined8 *)(param_1 + 0x50);
      uVar15 = 2;
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_78 = puVar11;
      puStack_70 = puVar12;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar9;
      func_0x00010c0d9840(uVar16);
      _objc_release(puVar9);
      goto LAB_106970800;
    }
  }
  uVar16 = *(undefined8 *)(param_1 + 0x50);
  uVar15 = 1;
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar11;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010c0d9840(uVar16);
LAB_106970800:
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uStack_a8);
  _objc_release(uStack_a0);
  _objc_release(uStack_98);
  _objc_release(uStack_90);
  lVar2 = lStack_88;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_d8 = FUN_106970894;
  uStack_110 = uVar10;
  lStack_108 = param_1;
  puStack_100 = puVar9;
  uStack_f8 = uVar16;
  puStack_f0 = puVar12;
  puStack_e8 = puVar11;
  puStack_e0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar13);
  _objc_retain(lVar3);
  func_0x00010bf86d80(*(undefined8 *)(lVar2 + 0x40));
  if (puVar13 == (undefined *)0x0) {
    func_0x00010be71e00(lVar2);
  }
  else {
    lVar14 = lVar2;
    func_0x00010bebf060(lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_118,lVar2);
    _objc_copyWeak(auStack_128,auStack_118);
    lVar2 = lVar14;
    uStack_120 = uVar15;
    func_0x00010c25ff60(lVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_128);
    _objc_destroyWeak(auStack_118);
    _objc_release(lVar14);
  }
  _objc_release(lVar3);
  _objc_release(puVar13);
  return;
}



/* Entry: 106970894; end: 1069709d7; -[SCSelectionSpotlightStoryObservableRepositoryImpl setSelectionSpotlightStoryPostingActionObservable:forceUpdateSelectionSpotlightStory:postingHintObservable:] */

void FUN_106970894(long param_1,undefined8 param_2,long param_3,undefined1 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x40));
  if (param_3 == 0) {
    func_0x00010be71e00(param_1);
  }
  else {
    lVar1 = param_1;
    func_0x00010bebf060(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_58,auStack_48);
    lVar2 = lVar1;
    uStack_50 = param_4;
    func_0x00010c25ff60(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
    _objc_release(lVar1);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1069709d8; end: 106970a2b;  */

void FUN_1069709d8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be71e00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106970a2c; end: 106970b23; -[SCSelectionSpotlightStoryObservableRepositoryImpl setSubtextObservable:] */

void FUN_106970a2c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x38));
  if (param_3 == 0) {
    func_0x00010be71e40(param_1);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    lVar1 = param_3;
    func_0x00010c25ff60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106970b24; end: 106970b6b;  */

void FUN_106970b24(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be71e40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106970b6c; end: 106970c37; -[SCSelectionSpotlightStoryObservableRepositoryImpl spotlightStoryObservable] */

void FUN_106970b6c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106970c38; end: 106970c63;  */

void FUN_106970c38(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedf8e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106970c64; end: 106970d33; -[SCSelectionSpotlightStoryObservableRepositoryImpl selectedSpotlightStoryObservable:] */

void FUN_106970c64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106970d34;
  puStack_40 = &UNK_110854bd0;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar2 = uVar1;
  func_0x00010c0b8600(uVar1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106970d34; end: 106970daf;  */

void FUN_106970d34(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106970db0;
  puStack_30 = &UNK_11086b9c0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_28 = uVar1;
  func_0x0001006372a4(param_2,&puStack_48);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 106970db0; end: 106970dbf;  */

ulong FUN_106970db0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **in_x5;
  undefined **in_x7;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined *puStack_268;
  long lStack_260;
  undefined8 *puStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined8 *puStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined8 *puStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 *puStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined *puStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *apuStack_f8 [16];
  long lStack_78;
  
  lVar7 = *(long *)(param_1 + 0x20);
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(lVar7);
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  lStack_138 = 0;
  puStack_140 = (undefined *)0x0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(lVar7);
  ppuVar9 = &puStack_140;
  ppuVar10 = apuStack_f8;
  ppuVar11 = (undefined **)0x10;
  lVar5 = lVar7;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar14 = *plStack_130;
    do {
      lVar15 = 0;
      do {
        if (*plStack_130 != lVar14) {
          _objc_enumerationMutation(lVar7);
        }
        uVar13 = *(ulong *)(lStack_138 + lVar15 * 8);
        uVar8 = uVar13;
        func_0x000108425a5c();
        if (((uVar8 & 1) == 0) && (uVar8 = uVar13, func_0x000108425b30(), (uVar8 & 1) == 0)) {
          uVar8 = uVar13;
          func_0x000108425950();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar3);
          _objc_release(uVar8);
          func_0x0001084259b4();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar4);
          _objc_release(uVar13);
        }
        lVar15 = lVar15 + 1;
      } while (lVar5 != lVar15);
      ppuVar9 = &puStack_140;
      ppuVar10 = apuStack_f8;
      ppuVar11 = (undefined **)0x10;
      lVar5 = lVar7;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release(lVar7);
  puVar6 = puVar3;
  func_0x00010bf529e0();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (puVar6 == (undefined *)0x0) {
    uVar12 = 0;
  }
  else {
    uStack_160 = 0;
    uStack_150 = 0x2020000000;
    uStack_148 = 0;
    puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_188 = 0xc2000000;
    pcStack_180 = FUN_10697a09c;
    puStack_178 = &UNK_11094e560;
    puStack_168 = &uStack_160;
    puStack_158 = &uStack_160;
    _objc_retain(puVar4);
    puStack_1c0 = puVar1;
    uStack_1b8 = 0xc2000000;
    pcStack_1b0 = FUN_10697a190;
    puStack_1a8 = &UNK_11094e590;
    puStack_198 = &uStack_160;
    puStack_170 = puVar4;
    _objc_retain(puVar3);
    puStack_1f0 = puVar1;
    uStack_1e8 = 0xc2000000;
    uStack_1e0 = 0x10697a1c4;
    puStack_1d8 = &UNK_11094e5c0;
    puStack_1c8 = &uStack_160;
    puStack_1a0 = puVar3;
    _objc_retain(puVar3);
    puStack_220 = puVar1;
    uStack_218 = 0xc2000000;
    uStack_210 = 0x10697a1f8;
    puStack_208 = &UNK_11094e5f0;
    puStack_1f8 = &uStack_160;
    puStack_1d0 = puVar3;
    _objc_retain(puVar3);
    puStack_250 = puVar1;
    uStack_248 = 0xc2000000;
    uStack_240 = 0x10697a22c;
    puStack_238 = &UNK_11094e620;
    puStack_228 = &uStack_160;
    puStack_200 = puVar3;
    _objc_retain(puVar3);
    puStack_280 = puVar1;
    uStack_278 = 0xc2000000;
    uStack_270 = 0x10697a260;
    puStack_268 = &UNK_11094e650;
    puStack_258 = &uStack_160;
    puStack_230 = puVar3;
    _objc_retain(lVar7);
    lStack_260 = lVar7;
    _objc_retain(puVar3);
    ppuVar9 = &puStack_190;
    ppuVar10 = &puStack_1c0;
    ppuVar11 = &puStack_1f0;
    in_x5 = &puStack_220;
    in_x7 = &puStack_280;
    func_0x00010c0bee40(param_2);
    uVar12 = (uint)*(byte *)(puStack_158 + 3);
    _objc_release(puVar3);
    _objc_release(lStack_260);
    _objc_release(puStack_230);
    _objc_release(puStack_200);
    _objc_release(puStack_1d0);
    _objc_release(puStack_1a0);
    _objc_release(puStack_170);
    __Block_object_dispose(&uStack_160,8);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return (ulong)(uVar12 & 1);
  }
  ___stack_chk_fail();
  uVar8 = 8;
  __Block_object_dispose(&uStack_160,8);
  __Unwind_Resume();
  _objc_retain(uVar8);
  _objc_retain(ppuVar9);
  _objc_retain(ppuVar11);
  _objc_retain(in_x5);
  _objc_retain(in_x7);
  if (ppuVar10 == (undefined **)0x2) {
    uVar2 = (undefined1)*(undefined8 *)(param_2 + 0x20);
  }
  else if (ppuVar10 == (undefined **)0x1) {
    uVar2 = (undefined1)*(undefined8 *)(param_2 + 0x20);
  }
  else {
    if (ppuVar10 != (undefined **)0x0) goto LAB_10697a154;
    uVar2 = (undefined1)*(undefined8 *)(param_2 + 0x20);
  }
  func_0x00010bf4b900();
  *(undefined1 *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + 0x18) = uVar2;
LAB_10697a154:
  _objc_release(in_x7);
  _objc_release(in_x5);
  _objc_release(ppuVar11);
  _objc_release(ppuVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return uVar8;
}



/* Entry: 106970dc0; end: 106970e97; -[SCSelectionSpotlightStoryObservableRepositoryImpl _performHandleUpdatedSubtext:] */

void FUN_106970dc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106970e98; end: 106970ecb;  */

void FUN_106970e98(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106970ecc; end: 106970f03; -[SCSelectionSpotlightStoryObservableRepositoryImpl _handleUpdatedSubtext:] */

void FUN_106970ecc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bedf8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSelectionOurStories_1125957d8);
  return;
}



/* Entry: 106970f04; end: 106970fe3; -[SCSelectionSpotlightStoryObservableRepositoryImpl _performHandleUpdatedSpotlightPostingAction:forceUpdateSelectionSpotlightStory:] */

void FUN_106970f04(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_40 = param_4;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106970fe4; end: 10697101b;  */

void FUN_106970fe4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32b40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10697101c; end: 106971113; -[SCSelectionSpotlightStoryObservableRepositoryImpl _handleUpdatedSpotlightPostingAction:forceUpdateSelectionSpotlightStory:] */

void FUN_10697101c(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x68);
  func_0x00010c067d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c067d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 == 0 && lVar4 == 0) {
    uVar6 = 0;
  }
  else {
    lVar2 = lVar3;
    func_0x00010c0720c0(lVar3,param_2,lVar4);
    uVar6 = (uint)lVar2 ^ 1;
  }
  _objc_retain(param_3);
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  *(long *)(param_1 + 0x68) = param_3;
  _objc_release(uVar5);
  if ((param_4 & 1) == 0) {
    uVar1 = (uint)*(undefined8 *)(param_1 + 8);
    func_0x000108f48528();
    if (((uVar1 | uVar6) & 1) == 0) goto LAB_1069710ec;
  }
  func_0x00010bedf8e0(param_1);
LAB_1069710ec:
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106971114; end: 10697117b; -[SCSelectionSpotlightStoryObservableRepositoryImpl _spotlightStoryPostingActionObservableWithPostingActionObservable:postingHintObservable:] */

void FUN_106971114(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  if (param_4 == 0) {
    _objc_retain(param_3);
  }
  else {
    func_0x00010bf41860(param_3,param_2,param_4,&PTR___NSConcreteGlobalBlock_11094e130);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10697117c; end: 10697132b;  */

void FUN_10697117c(undefined8 param_1,undefined *param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    _objc_retain(param_2);
    puVar2 = param_2;
  }
  else {
    puVar2 = PTR_PTR_1126b5220;
    _objc_alloc();
    func_0x00010c07a8a0();
    func_0x00010c2370a0(param_2);
    lVar1 = param_3;
    func_0x00010c0ec5e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_2;
    func_0x00010beee7a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_2;
    func_0x00010c0c7800(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_2;
    func_0x00010c0c77e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_2;
    func_0x00010c244280();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_2;
    func_0x00010bf15500();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_2;
    func_0x00010c08dd60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01f440(puVar2);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10697132c; end: 10697134b; -[SCSelectionSpotlightStoryObservableRepositoryImpl warmUp] */

void FUN_10697132c(long param_1)

{
  func_0x00010bf57500(*(undefined8 *)(param_1 + 0x58));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 10697134c; end: 1069713fb; -[SCSelectionSpotlightStoryObservableRepositoryImpl .cxx_destruct] */

void FUN_10697134c(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1069713fc; end: 1069715d7;  */

void FUN_1069713fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126cf4e0;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc();
  uVar2 = param_1;
  func_0x00010bf1acc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf1c0a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bfe44e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c070540(param_1);
  func_0x00010bff7c20();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126c51c8;
  uVar2 = param_1;
  func_0x00010c116a20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c2711a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c0b4680(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e1a60(param_1);
  func_0x00010c26e7a0(param_1);
  func_0x00010bf33240(param_1);
  func_0x00010bf33360();
  func_0x00010c25ea00();
  _objc_release(param_1);
  func_0x00010bf252e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1069715d8; end: 106971837;  */

void FUN_1069715d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x000108f598b4();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_4);
    lVar1 = param_4;
  }
  puVar3 = PTR_PTR_1126c51c8;
  uVar2 = param_1;
  func_0x00010c0b4680(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa0ae0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106971838; end: 1069719d3;  */

void FUN_106971838(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  puVar3 = PTR_PTR_1126c51c8;
  _objc_retain(in_stack_00000010);
  _objc_retain(in_stack_00000008);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  uVar1 = param_1;
  func_0x00010c259cc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf85d80(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c24c5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_stack_00000010);
  _objc_release(in_stack_00000008);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1069719d4; end: 106971c2f;  */

void FUN_1069719d4(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  double dVar10;
  
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar9 = param_2;
  func_0x00010c246f40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d4780();
  dVar10 = param_1;
  _objc_release();
  if (param_1 == 0.0) {
    lVar9 = 0;
  }
  else {
    func_0x000109021670();
    _objc_retainAutoreleasedReturnValue();
    dVar10 = param_1;
  }
  func_0x00010c085be0(param_2);
  if (dVar10 == 0.0) {
    lVar2 = 0;
  }
  else {
    func_0x00010c085be0(param_2);
    lVar2 = (long)dVar10;
    func_0x000100bc47dc();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010c27dd80();
  lVar4 = param_2;
  if (lVar3 < 6) {
    if (lVar3 == 1) {
      lVar3 = param_2;
      func_0x00010c1143e0();
      if (lVar3 == 3) {
        puVar8 = (undefined *)0x0;
        goto LAB_106971bac;
      }
      uVar7 = 1;
    }
    else if ((lVar3 == 2) || (lVar3 == 5)) {
      uVar7 = 2;
    }
    else {
      uVar7 = 0;
    }
  }
  else {
    uVar1 = 3;
    if (param_6 != 0) {
      uVar1 = 4;
    }
    uVar7 = 6;
    if (lVar3 != 10) {
      uVar7 = 0;
    }
    if (lVar3 != 7) {
      uVar1 = uVar7;
    }
    uVar7 = 3;
    if (lVar3 != 6) {
      uVar7 = uVar1;
    }
  }
  _objc_release(param_2);
  puVar8 = PTR_PTR_1126c51c8;
  func_0x00010c11ac00(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010bf85d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_2;
  func_0x00010bf5a820(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf5ab40();
  func_0x000109021670();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf62760(puVar8,param_3,lVar4,uVar7,lVar3,param_4,lVar6,lVar9,lVar2,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
LAB_106971bac:
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar9);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 106971c30; end: 106971d23;  */

void FUN_106971c30(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106971d24;
  uStack_30 = 0x106971d34;
  _objc_retain(param_1);
  uStack_28 = param_1;
  func_0x00010c0bee40(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106971d24; end: 106971d3b;  */

void FUN_106971d24(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106971d3c; end: 106971dab;  */

void FUN_106971d3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c51c8;
  func_0x00010bf62760(PTR_PTR_1126c51c8,param_2,param_2,param_3,param_4,0,param_6,param_7,param_8,
                      param_9);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106971dac; end: 106971e63;  */

undefined8 FUN_106971dac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0xffffffffffffffff;
  func_0x00010bf97e80(param_1);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106971e64; end: 106971eb3;  */

void FUN_106971e64(long param_1,long param_2,undefined8 param_3,undefined1 *param_4)

{
  func_0x00010c27dd80();
  if (param_2 == 7) {
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_3;
    *param_4 = 1;
  }
  return;
}



/* Entry: 106971eb4; end: 106971fd7;  */

undefined8 FUN_106971eb4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_1);
  lVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  uVar5 = 0;
  if (lVar2 != 0) {
    do {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        lVar6 = *(long *)(lVar7 * 8);
        lVar3 = lVar6;
        func_0x00010c27dd80();
        if ((lVar3 == 6) || (func_0x00010c27dd80(), lVar6 == 10)) {
          uVar5 = 1;
          goto LAB_106971f90;
        }
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = param_1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
    uVar5 = 0;
  }
LAB_106971f90:
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return uVar5;
  }
  ___stack_chk_fail();
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_1);
  lVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  uVar5 = 0;
  if (lVar2 != 0) {
    do {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        lVar3 = *(long *)(lVar7 * 8);
        func_0x00010c27dd80();
        if (lVar3 == 1) {
          uVar5 = 1;
          goto LAB_1069720a0;
        }
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = param_1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
    uVar5 = 0;
  }
LAB_1069720a0:
  _objc_release(param_1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
    ___stack_chk_fail();
    _objc_retain();
    puStack_268 = &uStack_270;
    uStack_270 = 0;
    uStack_260 = 0x2020000000;
    uStack_258 = 0;
    func_0x00010c0bee40(param_1);
    uVar5 = puStack_268[3];
    __Block_object_dispose(&uStack_270,8);
    _objc_release(param_1);
    return uVar5;
  }
  return uVar5;
}



/* Entry: 106971fd8; end: 1069720e7;  */

undefined8 FUN_106971fd8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_1);
  lVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  uVar5 = 0;
  if (lVar2 != 0) {
    do {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        lVar3 = *(long *)(lVar6 * 8);
        func_0x00010c27dd80();
        if (lVar3 == 1) {
          uVar5 = 1;
          goto LAB_1069720a0;
        }
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = param_1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
    uVar5 = 0;
  }
LAB_1069720a0:
  _objc_release(param_1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
    ___stack_chk_fail();
    _objc_retain();
    puStack_158 = &uStack_160;
    uStack_160 = 0;
    uStack_150 = 0x2020000000;
    uStack_148 = 0;
    func_0x00010c0bee40(param_1);
    uVar5 = puStack_158[3];
    __Block_object_dispose(&uStack_160,8);
    _objc_release(param_1);
    return uVar5;
  }
  return uVar5;
}



/* Entry: 1069720e8; end: 10697226b;  */

undefined8 FUN_1069720e8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  func_0x00010c0bee40(param_1);
  uVar1 = puStack_48[3];
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10697226c; end: 1069722f7;  */

void FUN_10697226c(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1069722f8; end: 106972ed3; -[SCSelectionStoryObservableRepositoryImpl initWithCustomStoriesDataFetcher:myStoriesDataCoordinator:storyPrivacySettingManager:storyCustomTTLSettingManager:ourStoriesDataCoordinator:snapProProfileIdProvider:snapProProfilesProvider:avatarProvider:selfieProvider:plusFeatureGating:storiesConfigProvider:selectionStoriesLastPostTimeRepository:userPreferences:eligibleForSpotlight:currentUserId:currentUsername:querySorter:circumstanceEngine:snapSource:preSelectedItems:overridePerformer:] */

undefined8 *
FUN_1069722f8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined1 param_16,
             undefined4 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             ulong param_21,undefined8 param_22,long param_23,long param_24)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_23);
  _objc_retain(param_24);
  puStack_138 = PTR_PTR_1126f3e80;
  puVar2 = &uStack_140;
  uStack_140 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 == (undefined8 *)0x0) goto LAB_106972dc0;
  _objc_retain(param_3);
  uVar3 = puVar2[1];
  puVar2[1] = param_3;
  _objc_release(uVar3);
  _objc_retain(param_4);
  uVar3 = puVar2[3];
  puVar2[3] = param_4;
  _objc_release(uVar3);
  _objc_retain(param_5);
  uVar3 = puVar2[2];
  puVar2[2] = param_5;
  _objc_release(uVar3);
  _objc_retain(param_6);
  uVar3 = puVar2[4];
  puVar2[4] = param_6;
  _objc_release(uVar3);
  _objc_retain(param_7);
  uVar3 = puVar2[5];
  puVar2[5] = param_7;
  _objc_release(uVar3);
  _objc_retain(param_8);
  uVar3 = puVar2[6];
  puVar2[6] = param_8;
  _objc_release(uVar3);
  _objc_retain(param_9);
  uVar3 = puVar2[7];
  puVar2[7] = param_9;
  _objc_release(uVar3);
  *(undefined1 *)(puVar2 + 0x21) = 1;
  *(undefined1 *)((long)puVar2 + 0x161) = 1;
  _objc_retain(param_10);
  uVar3 = puVar2[8];
  puVar2[8] = param_10;
  _objc_release(uVar3);
  _objc_retain(param_11);
  uVar3 = puVar2[9];
  puVar2[9] = param_11;
  _objc_release(uVar3);
  _objc_retain(param_12);
  uVar3 = puVar2[10];
  puVar2[10] = param_12;
  _objc_release(uVar3);
  _objc_retain(param_13);
  uVar3 = puVar2[0xb];
  puVar2[0xb] = param_13;
  _objc_release(uVar3);
  _objc_retain(param_18);
  uVar3 = puVar2[0xd];
  puVar2[0xd] = param_18;
  _objc_release(uVar3);
  puVar2[0xf] = param_22;
  _objc_retain(param_19);
  uVar3 = puVar2[0xe];
  puVar2[0xe] = param_19;
  _objc_release(uVar3);
  uVar3 = param_20;
  _objc_retainBlock();
  uVar13 = puVar2[0x10];
  puVar2[0x10] = uVar3;
  _objc_release(uVar13);
  _objc_retain(param_21);
  uVar3 = puVar2[0x12];
  puVar2[0x12] = param_21;
  _objc_release(uVar3);
  _objc_retain(param_14);
  uVar3 = puVar2[0xc];
  puVar2[0xc] = param_14;
  _objc_release(uVar3);
  _objc_retain(param_15);
  uVar3 = puVar2[0x13];
  puVar2[0x13] = param_15;
  _objc_release(uVar3);
  *(undefined1 *)(puVar2 + 0x33) = param_16;
  puVar4 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar3 = puVar2[0x15];
  puVar2[0x15] = puVar4;
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar3 = puVar2[0x16];
  puVar2[0x16] = puVar4;
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar3 = puVar2[0x17];
  puVar2[0x17] = puVar4;
  _objc_release(uVar3);
  if (param_24 == 0) {
    puVar4 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar3 = puVar2[0x11];
    puVar2[0x11] = puVar4;
    _objc_release(uVar3);
  }
  else {
    _objc_retain(param_24);
    puVar14 = (undefined *)puVar2[0x11];
    puVar2[0x11] = param_24;
  }
  _objc_release(puVar14);
  puVar2[0x1b] = 0;
  *(undefined1 *)(puVar2 + 0x1c) = 0;
  puVar4 = PTR_PTR_1126ae820;
  _objc_opt_new();
  uVar3 = puVar2[0x1a];
  puVar2[0x1a] = puVar4;
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126b10e0;
  _objc_opt_new();
  uVar3 = puVar2[0x32];
  puVar2[0x32] = puVar4;
  _objc_release(uVar3);
  _objc_initWeak(auStack_148,puVar2);
  puVar4 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_150,auStack_148);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = puVar2[0x19];
  puVar2[0x19] = puVar4;
  _objc_release(uVar3);
  uVar5 = param_21;
  func_0x000108060890();
  *(char *)(puVar2 + 0x2c) = (char)uVar5;
  uVar5 = param_21;
  func_0x000108f42234();
  *(char *)(puVar2 + 0x23) = (char)uVar5;
  if ((int)uVar5 == 0) {
    lVar15 = puVar2[10];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar15;
    func_0x00010c0d4bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar7;
    func_0x00010c252440();
    *(bool *)((long)puVar2 + 0x119) = lVar17 == 3;
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar15);
    if (*(char *)((long)puVar2 + 0x119) == '\x01') goto LAB_1069728b8;
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x119) = 1;
LAB_1069728b8:
    lVar6 = param_23;
    FUN_106972f14(param_23,param_6,0);
    puVar2[0x24] = lVar6;
    lVar6 = param_23;
    FUN_106972f14(param_23,param_6,1);
    puVar2[0x25] = lVar6;
    lVar6 = param_23;
    FUN_106972f14(param_23,param_6,2);
    puVar2[0x26] = lVar6;
  }
  if (*(char *)(puVar2 + 0x23) == '\x01') {
    *(undefined1 *)(puVar2 + 0x28) = 1;
LAB_106972978:
    lVar6 = param_23;
    func_0x0001006372a4(param_23,&PTR___NSConcreteGlobalBlock_11094e440);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(lVar6);
    lVar7 = lVar6;
    func_0x00010bf52a60();
    if (lVar7 != 0) {
      lVar17 = *plStack_120;
      do {
        lVar15 = 0;
        do {
          if (*plStack_120 != lVar17) {
            _objc_enumerationMutation(lVar6);
          }
          lVar16 = *(long *)(lStack_128 + lVar15 * 8);
          lVar8 = lVar16;
          func_0x00010c122a80();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar8;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar9;
          func_0x00010c122b80();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = lVar10;
          func_0x00010c08fa60();
          _objc_release(lVar10);
          _objc_release(lVar9);
          _objc_release(lVar8);
          puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if (lVar11 != 0) {
            func_0x000108f43540(lVar16);
            func_0x00010c0df780(puVar14);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c122a80(lVar16);
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar16;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            lVar9 = lVar8;
            func_0x00010c122b80();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar4);
            _objc_release(lVar9);
            _objc_release(lVar8);
            _objc_release(lVar16);
            _objc_release(puVar14);
          }
          lVar15 = lVar15 + 1;
        } while (lVar7 != lVar15);
        lVar7 = lVar6;
        func_0x00010bf52a60();
      } while (lVar7 != 0);
    }
    _objc_release(lVar6);
    _objc_release(lVar6);
    puVar14 = puVar4;
    func_0x00010c0d3c80();
    uVar3 = puVar2[0x29];
    puVar2[0x29] = puVar14;
    _objc_release(uVar3);
    _objc_release(puVar4);
  }
  else {
    lVar15 = puVar2[10];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar15;
    func_0x00010bf62280();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar7;
    func_0x00010c252440();
    *(bool *)(puVar2 + 0x28) = lVar17 == 3;
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar15);
    if (*(char *)(puVar2 + 0x28) == '\x01') goto LAB_106972978;
  }
  if ((*(byte *)(puVar2 + 0x23) & 1) == 0) {
    uVar5 = param_21;
    func_0x000108f42248();
    *(char *)((long)puVar2 + 0x141) = (char)uVar5;
    if ((uVar5 & 1) != 0) goto LAB_106972b6c;
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x141) = 1;
LAB_106972b6c:
    lVar6 = param_23;
    func_0x0001006372a4(param_23,&PTR___NSConcreteGlobalBlock_11094e460);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(lVar6);
    lVar7 = lVar6;
    func_0x00010bf52a60();
    if (lVar7 != 0) {
      lVar17 = *plStack_120;
      do {
        lVar15 = 0;
        do {
          if (*plStack_120 != lVar17) {
            _objc_enumerationMutation(lVar6);
          }
          lVar16 = *(long *)(lStack_128 + lVar15 * 8);
          lVar8 = lVar16;
          func_0x00010c122a80();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar8;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar9;
          func_0x00010c122b80();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = lVar10;
          func_0x00010c08fa60();
          _objc_release(lVar10);
          _objc_release(lVar9);
          _objc_release(lVar8);
          puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if (lVar11 != 0) {
            func_0x000108f43540(lVar16);
            func_0x00010c0df780(puVar14);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c122a80(lVar16);
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar16;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            lVar9 = lVar8;
            func_0x00010c122b80();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar4);
            _objc_release(lVar9);
            _objc_release(lVar8);
            _objc_release(lVar16);
            _objc_release(puVar14);
          }
          lVar15 = lVar15 + 1;
        } while (lVar7 != lVar15);
        lVar7 = lVar6;
        func_0x00010bf52a60();
      } while (lVar7 != 0);
    }
    _objc_release(lVar6);
    _objc_release(lVar6);
    puVar14 = puVar4;
    func_0x00010c0d3c80();
    uVar3 = puVar2[0x2a];
    puVar2[0x2a] = puVar14;
    _objc_release(uVar3);
    _objc_release(puVar4);
    uVar5 = param_21;
    func_0x000108f422e8();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[0x2b];
    puVar2[0x2b] = uVar5;
    _objc_release(uVar3);
    uVar5 = param_21;
    func_0x000108f42294();
    puVar2[0x27] = uVar5;
  }
  uVar5 = param_21;
  func_0x000108060914();
  *(char *)(puVar2 + 0x31) = (char)uVar5;
  FUN_106979890();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = puVar2[0x2d];
  puVar2[0x2d] = uVar5;
  _objc_release(uVar3);
  uVar1 = (undefined1)puVar2[0x12];
  func_0x000108f482e0();
  *(undefined1 *)((long)puVar2 + 0x189) = uVar1;
  _objc_destroyWeak(auStack_150);
  _objc_destroyWeak(auStack_148);
LAB_106972dc0:
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
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
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_150);
  _objc_destroyWeak(auStack_148);
  __Unwind_Resume(param_3);
  puVar2 = (undefined8 *)(param_3 + 0x20);
  _objc_loadWeakRetained(puVar2);
  puVar12 = puVar2;
  func_0x00010bdf3060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return puVar12;
}



/* Entry: 106972ed4; end: 106972f13;  */

void FUN_106972ed4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf3060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106972f14; end: 106972ff7;  */

long FUN_106972f14(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc0000000;
  uStack_48 = 0x1069779f8;
  puStack_40 = &UNK_11094e420;
  uStack_38 = param_3;
  func_0x0001006372a4(param_1,&puStack_58);
  lVar1 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar1 == 0) {
    lVar2 = param_2;
    func_0x00010c269d40(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf62880();
    _objc_release(lVar2);
  }
  else {
    lVar3 = lVar1;
    func_0x000108f43540(lVar1);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return lVar3;
}



/* Entry: 106972ff8; end: 106973523; -[SCSelectionStoryObservableRepositoryImpl _createSelectionStoryObservable] */

void FUN_106972ff8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
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
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  puVar1 = PTR_PTR_1126ae820;
  _objc_opt_new();
  uVar6 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined **)(param_1 + 0xc0) = puVar1;
  _objc_release(uVar6);
  _objc_initWeak(auStack_80,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c25ab00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106973524;
  puStack_90 = &UNK_110842a38;
  _objc_copyWeak(auStack_88,auStack_80);
  uVar5 = uVar6;
  func_0x00010c25ff60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar2);
  func_0x00010be71f20(param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c0b7fe0();
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x10697356c;
  puStack_b8 = &UNK_110842c58;
  _objc_copyWeak(auStack_b0,auStack_80);
  uVar5 = uVar6;
  func_0x00010c25ff60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c105580();
  _objc_retainAutoreleasedReturnValue();
  puStack_f8 = puVar1;
  uStack_f0 = 0xc2000000;
  uStack_e8 = 0x1069735b4;
  puStack_e0 = &UNK_110842c58;
  _objc_copyWeak(auStack_d8,auStack_80);
  uVar5 = uVar6;
  func_0x00010c25ff60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c0d1080();
  _objc_retainAutoreleasedReturnValue();
  puStack_120 = puVar1;
  uStack_118 = 0xc2000000;
  uStack_110 = 0x1069735fc;
  puStack_108 = &UNK_110842a38;
  _objc_copyWeak(auStack_100,auStack_80);
  uVar5 = uVar6;
  func_0x00010c25ff60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar2);
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  if (*(char *)(param_1 + 0x118) == '\x01') {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c0d4bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c28d760();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    puStack_148 = puVar1;
    uStack_140 = 0xc2000000;
    uStack_138 = 0x106973644;
    puStack_130 = &UNK_1108560f0;
    puVar7 = auStack_128;
    _objc_copyWeak(puVar7,auStack_80);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
  }
  else {
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c0d4bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c28d760();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = auStack_150;
    _objc_copyWeak(puVar7,auStack_80);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_destroyWeak(puVar7);
  uVar5 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010c2519e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 106973524; end: 106973673;  */

void FUN_106973524(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be71e20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106973674; end: 1069736d7;  */

void FUN_106973674(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c252440(param_2);
  _objc_release(param_2);
  func_0x00010bea5be0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069736d8; end: 1069737af; -[SCSelectionStoryObservableRepositoryImpl _performHandleUpdateOurStoryMostRecentPostTimestamp:] */

void FUN_1069736d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1069737b0; end: 1069737e3;  */

void FUN_1069737b0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069737e4; end: 1069737e7; -[SCSelectionStoryObservableRepositoryImpl _handleUpdateOurStoryMostRecentPostTimestamp:] */

void FUN_1069737e4(void)

{
  return;
}



/* Entry: 1069737e8; end: 1069738bf; -[SCSelectionStoryObservableRepositoryImpl _performHandleUpdatedStoryPrivacyValue:] */

void FUN_1069737e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1069738c0; end: 1069738f3;  */

void FUN_1069738c0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069738f4; end: 10697394b; -[SCSelectionStoryObservableRepositoryImpl _handleUpdatedStoryPrivacyValue:] */

void FUN_1069738f4(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010c067fc0();
  if ((*(char *)(param_1 + 0xe0) == '\x01') && (*(long *)(param_1 + 0xd8) == param_3)) {
    return;
  }
  *(long *)(param_1 + 0xd8) = param_3;
  *(undefined1 *)(param_1 + 0xe0) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bedf930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSelectionStories_1125957f0);
  return;
}



/* Entry: 10697394c; end: 1069739f3; -[SCSelectionStoryObservableRepositoryImpl _performInitializeSnapProProfiles] */

void FUN_10697394c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1069739f4; end: 106973a1f;  */

void FUN_1069739f4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be3bb80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106973a20; end: 106973a77; -[SCSelectionStoryObservableRepositoryImpl _initializeSnapProProfiles] */

void FUN_106973a20(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b7fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bedf930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSelectionStories_1125957f0);
  return;
}



/* Entry: 106973a78; end: 106973b4f; -[SCSelectionStoryObservableRepositoryImpl _performHandleUpdatedSnapProProfiles:] */

void FUN_106973a78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106973b50; end: 106973b83;  */

void FUN_106973b50(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106973b84; end: 106973be3; -[SCSelectionStoryObservableRepositoryImpl _handleUpdatedSnapProProfiles:] */

void FUN_106973b84(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0xe8);
  if ((param_3 != 0 || uVar1 != 0) && (func_0x00010c071ae0(uVar1,param_2,param_3), (uVar1 & 1) == 0)
     ) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0xe8);
    *(long *)(param_1 + 0xe8) = param_3;
    _objc_release(uVar2);
    func_0x00010bedf920(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106973be4; end: 106973cbb; -[SCSelectionStoryObservableRepositoryImpl _performHandleUpdatedCustomStories:] */

void FUN_106973be4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106973cbc; end: 106973cef;  */

void FUN_106973cbc(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106973cf0; end: 106973d27; -[SCSelectionStoryObservableRepositoryImpl _handleUpdatedCustomStories:] */

void FUN_106973cf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bedf930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSelectionStories_1125957f0);
  return;
}



/* Entry: 106973d28; end: 106974083; -[SCSelectionStoryObservableRepositoryImpl getMyStories] */

void FUN_106973d28(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010beb9f60();
  if ((int)lVar4 != 0) {
    if (*(char *)(param_1 + 0x119) == '\x01') {
      puVar10 = PTR_PTR_1126cf4e8;
      _objc_alloc();
      func_0x00010c01ece0();
    }
    else {
      puVar10 = (undefined *)0x0;
    }
    puVar9 = PTR_PTR_1126c51c8;
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf12ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c15ade0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d4dc0(puVar9,param_2,uVar1,uVar2,0,uVar6,uVar8,*(undefined8 *)(param_1 + 0xd8),
                        puVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    func_0x00010befa120(puVar3,param_2,puVar9);
    _objc_release(puVar9);
    _objc_release(puVar10);
  }
  lVar4 = param_1;
  func_0x00010beb9fa0();
  if ((int)lVar4 != 0) {
    if (*(char *)(param_1 + 0x119) == '\x01') {
      puVar10 = PTR_PTR_1126cf4e8;
      _objc_alloc();
      func_0x00010c01ece0();
    }
    else {
      puVar10 = (undefined *)0x0;
    }
    puVar9 = PTR_PTR_1126c51c8;
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf12ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c15ade0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d4dc0(puVar9,param_2,uVar1,uVar2,1,uVar6,uVar8,*(undefined8 *)(param_1 + 0xd8),
                        puVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    func_0x00010befa120(puVar3,param_2,puVar9);
    _objc_release(puVar9);
    _objc_release(puVar10);
  }
  lVar4 = param_1;
  func_0x00010beb9f80();
  if ((int)lVar4 != 0) {
    if (*(char *)(param_1 + 0x119) == '\x01') {
      puVar10 = PTR_PTR_1126cf4e8;
      _objc_alloc();
      func_0x00010c01ece0();
    }
    else {
      puVar10 = (undefined *)0x0;
    }
    puVar9 = PTR_PTR_1126c51c8;
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf12ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c15ade0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d4dc0(puVar9,param_2,uVar1,uVar2,2,uVar6,uVar8,*(undefined8 *)(param_1 + 0xd8),
                        puVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    func_0x00010befa120(puVar3,param_2,puVar9);
    _objc_release(puVar9);
    _objc_release(puVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106974084; end: 10697408b; -[SCSelectionStoryObservableRepositoryImpl _getPrivateStories] */

void FUN_106974084(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1e670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__getCustomStoriesByType__112565338,1);
  return;
}



/* Entry: 10697408c; end: 10697414b; -[SCSelectionStoryObservableRepositoryImpl _getCustomStoriesByType:] */

void FUN_10697408c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010bf51e00(uVar1);
  uVar2 = uVar1;
  func_0x0001006372a4();
  uVar3 = uVar2;
  func_0x000100504554();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10697414c; end: 10697417b;  */

bool FUN_10697414c(long param_1,long param_2)

{
  func_0x00010c27dd80(param_2);
  return param_2 == *(long *)(param_1 + 0x20);
}



/* Entry: 10697417c; end: 1069742b7;  */

void FUN_10697417c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c11ac00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_2;
    func_0x00010c11ac00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdf79e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_2;
    FUN_1069719d4(param_2,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68),0,uVar4,
                  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x188));
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      lVar2 = param_2;
      FUN_1069742b8(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_2;
      FUN_1069742fc(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126cf4f0;
      _objc_alloc(PTR_PTR_1126cf4f0);
      func_0x00010c043f60();
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
    _objc_release(uVar4);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1069742b8; end: 1069742fb;  */

void FUN_1069742b8(double param_1,undefined8 param_2)

{
  func_0x00010c246f40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d4780();
  _objc_release(param_2);
  if (param_1 != 2.2250738585072014e-308) {
    func_0x00010bf655e0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069742fc; end: 106974343;  */

void FUN_1069742fc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf5a820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf5ab40();
  func_0x000109021670();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106974344; end: 1069743bf; -[SCSelectionStoryObservableRepositoryImpl _getSharedStories] */

void FUN_106974344(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010be1e660(param_1,param_2,6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be1e660(param_1,param_2,10);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf09f80(uVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1069743c0; end: 10697450b; -[SCSelectionStoryObservableRepositoryImpl _getCommunitySelectionStory] */

void FUN_1069743c0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  lVar1 = *(long *)(param_1 + 0x100);
  func_0x00010bf51e00();
  lVar2 = lVar1;
  FUN_106971dac();
  puVar7 = (undefined *)0x0;
  if ((*(char *)(param_1 + 0x160) == '\x01') && (-1 < lVar2)) {
    lVar2 = lVar1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c11ac00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bdf79e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = lVar2;
    FUN_1069719d4(lVar2,*(undefined8 *)(param_1 + 0x68),0,lVar4,*(undefined1 *)(param_1 + 0x188));
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      lVar5 = lVar2;
      FUN_1069742b8(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      FUN_1069742fc(lVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126cf4f0;
      _objc_alloc(PTR_PTR_1126cf4f0);
      func_0x00010c043f60();
      _objc_release(lVar6);
      _objc_release(lVar5);
    }
    _objc_release(lVar3);
    _objc_release(lVar4);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10697450c; end: 106974613; -[SCSelectionStoryObservableRepositoryImpl _getMapsStory] */

void FUN_10697450c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  if ((((*(byte *)(param_1 + 0x108) & 1) == 0) && (*(char *)(param_1 + 0xf8) != '\x01')) ||
     (*(char *)(param_1 + 0x161) != '\x01')) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126c0e58;
    _objc_alloc(PTR_PTR_1126c0e58);
    func_0x00010c04f280();
    puVar2 = puVar1;
    func_0x00010853f454();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x0001069716dc();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfc7600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar6 = PTR_PTR_1126cf4f0;
    _objc_alloc(PTR_PTR_1126cf4f0);
    func_0x00010c043f60();
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106974614; end: 106974b9f; -[SCSelectionStoryObservableRepositoryImpl getSelectionStoryRankerParameters] */

void FUN_106974614(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  byte bVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  int iVar20;
  uint uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  undefined *puStack_178;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010be21b00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be228c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be1dea0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010be20660();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108f3e000();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar6 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar6;
  func_0x00010bfc7d40();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar6;
  func_0x00010bfc7d60();
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + 0x161) == '\x01') {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar17 = *(long *)(param_1 + 0xe8);
    _objc_retain(lVar17);
    lVar7 = lVar17;
    func_0x00010bf52a60();
    if (lVar7 == 0) {
      uVar21 = 0;
      uVar25 = 0;
      puStack_178 = (undefined *)0x0;
    }
    else {
      uVar22 = 0;
      uVar25 = 0;
      puStack_178 = (undefined *)0x0;
      lVar27 = *plStack_120;
      do {
        lVar18 = 0;
        do {
          if (*plStack_120 != lVar27) {
            _objc_enumerationMutation(lVar17);
          }
          uVar23 = *(undefined8 *)(lStack_128 + lVar18 * 8);
          uVar8 = uVar23;
          func_0x00010bf2d160();
          puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if ((int)uVar8 != 0) {
            if ((*(byte *)(param_1 + 0x118) & 1) == 0) {
              if (*(char *)(param_1 + 0x141) == '\x01') {
                iVar20 = (int)*(undefined8 *)(param_1 + 0x158);
                uVar25 = uVar23;
                func_0x00010c1164a0(uVar23);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c26e7a0();
                func_0x00010c0df780(puVar9);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf4b900();
                _objc_release(puVar9);
                _objc_release(uVar25);
                if (iVar20 != 0) goto LAB_106974788;
              }
              lVar26 = 0;
            }
            else {
LAB_106974788:
              uVar25 = uVar23;
              func_0x00010c1164a0(uVar23);
              _objc_retainAutoreleasedReturnValue();
              uVar22 = uVar25;
              func_0x00010c116a20();
              _objc_retainAutoreleasedReturnValue();
              lVar26 = param_1;
              func_0x00010bdf79c0(param_1);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar22);
              _objc_release(uVar25);
            }
            uVar25 = uVar23;
            func_0x00010c1164a0();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar25;
            func_0x00010c116a20();
            _objc_retainAutoreleasedReturnValue();
            uVar10 = *(undefined8 *)(param_1 + 0x30);
            func_0x00010c269d40(uVar10);
            _objc_retainAutoreleasedReturnValue();
            uVar11 = uVar10;
            func_0x00010c116a20();
            _objc_retainAutoreleasedReturnValue();
            uVar22 = uVar8;
            func_0x00010c0720c0();
            _objc_release(uVar11);
            _objc_release(uVar10);
            _objc_release(uVar8);
            _objc_release(uVar25);
            func_0x00010c1164a0(uVar23);
            _objc_retainAutoreleasedReturnValue();
            uVar25 = uVar23;
            FUN_1069713fc();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar23);
            puVar9 = PTR_PTR_1126cf4f0;
            _objc_alloc();
            if ((int)uVar22 == 0) {
              func_0x00010c043f60();
              func_0x00010befa120(puVar5);
              puVar12 = puVar9;
            }
            else {
              func_0x00010c043f60();
              puVar12 = puStack_178;
              puStack_178 = puVar9;
            }
            _objc_release(puVar12);
            _objc_release(uVar25);
            _objc_release(lVar26);
            uVar25 = 1;
          }
          uVar21 = (uint)uVar22;
          lVar18 = lVar18 + 1;
        } while (lVar7 != lVar18);
        lVar7 = lVar17;
        func_0x00010bf52a60();
      } while (lVar7 != 0);
    }
    _objc_release(lVar17);
    bVar16 = *(byte *)(param_1 + 0x161);
  }
  else {
    bVar16 = 0;
    uVar21 = 0;
    uVar25 = 0;
    puStack_178 = (undefined *)0x0;
  }
  func_0x000108f36ae0(*(undefined8 *)(param_1 + 400),
                      &PTR____CFConstantStringClassReference_110e3c018,bVar16 & 1,uVar25,uVar21 & 1,
                      1);
  func_0x00010bfc7d20();
  _objc_retainAutoreleasedReturnValue();
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  pcStack_150 = FUN_106974ba0;
  puStack_148 = &UNK_11094e240;
  _objc_retain(uVar24);
  uStack_140 = uVar24;
  _objc_retain(uVar19);
  ppuVar15 = &puStack_160;
  lVar7 = param_1;
  uStack_138 = uVar19;
  func_0x000100504554();
  lVar17 = lVar7;
  func_0x00010c0d3c80();
  _objc_release(lVar7);
  _objc_release(param_1);
  func_0x000108f3e050();
  func_0x000108f3e028();
  if (puStack_178 != (undefined *)0x0) {
    func_0x00010befa120(lVar17);
  }
  puVar9 = PTR_PTR_1126cf4f8;
  _objc_alloc();
  puVar12 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new();
  func_0x00010c03a3c0();
  _objc_release(puVar12);
  _objc_release(lVar17);
  _objc_release(uStack_138);
  _objc_release(uStack_140);
  _objc_release(uVar19);
  _objc_release(uVar24);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(puStack_178);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    uVar19 = *(undefined8 *)(lVar1 + 0x20);
    _objc_retain(uVar19);
    _objc_retain(ppuVar15);
    ppuVar13 = ppuVar15;
    func_0x000108f42a50();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuVar13;
    func_0x000108f433c0();
    uVar24 = uVar19;
    if ((int)ppuVar14 != 0) {
      uVar24 = *(undefined8 *)(lVar1 + 0x28);
      _objc_retain(uVar24);
      _objc_release(uVar19);
    }
    puVar9 = PTR_PTR_1126cf4f0;
    _objc_alloc(PTR_PTR_1126cf4f0);
    func_0x00010c043f60();
    _objc_release(ppuVar15);
    _objc_release(ppuVar13);
    _objc_release(uVar24);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 106974ba0; end: 106974c4b;  */

void FUN_106974ba0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x000108f42a50();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000108f433c0();
  uVar5 = uVar4;
  if ((int)uVar2 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    _objc_release(uVar4);
  }
  puVar3 = PTR_PTR_1126cf4f0;
  _objc_alloc(PTR_PTR_1126cf4f0);
  func_0x00010c043f60();
  _objc_release(param_2);
  _objc_release(uVar1);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106974c4c; end: 106974f33; -[SCSelectionStoryObservableRepositoryImpl defaultMyStoryAudienceRanker] */

undefined * FUN_106974c4c(long param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25aac0();
  _objc_release(uVar4);
  puVar5 = *(undefined **)(param_1 + 0x98);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar5;
  FUN_106978974();
  _objc_release(puVar5);
  lVar6 = *(long *)(param_1 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bfc7d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010bfc7d60();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf433a0();
  lVar10 = lVar8;
  if (lVar9 == 1) {
    puVar5 = (undefined *)0x3;
  }
  else {
    lVar9 = lVar8;
    func_0x00010bf433a0();
    if (lVar9 != 0) {
      lVar10 = lVar7;
    }
    puVar5 = (undefined *)0x3;
    if (lVar9 != 0) {
      puVar5 = puVar16;
    }
  }
  func_0x00010c26f320(lVar10);
  bVar2 = false;
  bVar3 = false;
  bVar1 = NAN((double)CONCAT17(in_register_00005007,
                               CONCAT16(in_register_00005006,
                                        CONCAT15(in_register_00005005,
                                                 CONCAT14(in_register_00005004,
                                                          CONCAT13(in_register_00005003,
                                                                   CONCAT12(in_register_00005002,
                                                                            CONCAT11(
                                                  in_register_00005001,in_b0))))))));
  if (!bVar1) {
    bVar2 = (double)CONCAT17(in_register_00005007,
                             CONCAT16(in_register_00005006,
                                      CONCAT15(in_register_00005005,
                                               CONCAT14(in_register_00005004,
                                                        CONCAT13(in_register_00005003,
                                                                 CONCAT12(in_register_00005002,
                                                                          CONCAT11(
                                                  in_register_00005001,in_b0))))))) < 0.0;
    bVar3 = (double)CONCAT17(in_register_00005007,
                             CONCAT16(in_register_00005006,
                                      CONCAT15(in_register_00005005,
                                               CONCAT14(in_register_00005004,
                                                        CONCAT13(in_register_00005003,
                                                                 CONCAT12(in_register_00005002,
                                                                          CONCAT11(
                                                  in_register_00005001,in_b0))))))) == 0.0;
  }
  if (bVar3 || bVar2 != bVar1) {
    lVar17 = *(long *)(param_1 + 0xe8);
    _objc_retain(lVar17);
    lVar10 = lVar17;
    func_0x00010bf52a60();
    lVar9 = lRam0000000000000000;
    while (lVar10 != 0) {
      lVar18 = 0;
      do {
        if (lRam0000000000000000 != lVar9) {
          _objc_enumerationMutation(lVar17);
        }
        lVar19 = *(long *)(lVar18 * 8);
        lVar11 = lVar19;
        func_0x00010c1164a0();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar11;
        func_0x00010c116a20();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010c269d40(uVar13);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar13;
        func_0x00010c116a20();
        _objc_retainAutoreleasedReturnValue();
        lVar14 = lVar12;
        func_0x00010c0720c0();
        _objc_release(uVar4);
        _objc_release(uVar13);
        _objc_release(lVar12);
        _objc_release(lVar11);
        if ((int)lVar14 != 0) {
          if (*(char *)(param_1 + 0x189) == '\x01') {
            func_0x00010c1164a0();
            _objc_retainAutoreleasedReturnValue();
            lVar11 = lVar19;
            func_0x00010c26e7a0();
            _objc_release(lVar19);
            if (lVar11 < 2) goto LAB_106974e68;
          }
          puVar16 = (undefined *)0x3;
          goto LAB_106974ea8;
        }
LAB_106974e68:
        lVar18 = lVar18 + 1;
      } while (lVar10 != lVar18);
      lVar10 = lVar17;
      func_0x00010bf52a60();
    }
LAB_106974ea8:
    _objc_release(lVar17);
    puVar5 = puVar16;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  FUN_1069789bc(puVar5,uVar4);
  _objc_release(uVar4);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return puVar5;
  }
  ___stack_chk_fail();
  func_0x00010bfca0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR_PTR_1126cf500;
  _objc_alloc(PTR_PTR_1126cf500);
  func_0x00010c0337c0();
  puVar5 = puVar16;
  func_0x00010bfc95a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar16);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return puVar5;
}



/* Entry: 106974f34; end: 106974fa7; -[SCSelectionStoryObservableRepositoryImpl _updateSelectionStoriesAboveBelowFoldWithRanker] */

void FUN_106974f34(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010bfca0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126cf500;
  _objc_alloc(PTR_PTR_1126cf500);
  func_0x00010c0337c0();
  puVar2 = puVar1;
  func_0x00010bfc95a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106974fa8; end: 106975b3b; -[SCSelectionStoryObservableRepositoryImpl _updateSelectionStories] */

void FUN_106974fa8(undefined *param_1,undefined **param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  byte bVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
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
  if ((*(long *)(param_1 + 0xe8) == 0) || (*(long *)(param_1 + 0x100) == 0)) goto LAB_106975afc;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x90);
  func_0x000108f3dfc4();
  if (iVar1 == 0) {
    puVar19 = param_1;
    func_0x00010beb9f60();
    if ((int)puVar19 != 0) {
      if (param_1[0x119] == '\x01') {
        puVar19 = PTR_PTR_1126cf4e8;
        _objc_alloc();
        func_0x00010c01ece0();
      }
      else {
        puVar19 = (undefined *)0x0;
      }
      puVar5 = PTR_PTR_1126c51c8;
      uVar3 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar3;
      func_0x00010bf12ea0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar4;
      func_0x00010c15ade0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d4dc0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar18);
      _objc_release(uVar4);
      _objc_release(uVar13);
      _objc_release(uVar3);
      func_0x00010befa120(puVar2);
      _objc_release(puVar5);
      _objc_release(puVar19);
    }
    puVar19 = param_1;
    func_0x00010beb9fa0();
    if ((int)puVar19 != 0) {
      if (param_1[0x119] == '\x01') {
        puVar19 = PTR_PTR_1126cf4e8;
        _objc_alloc();
        func_0x00010c01ece0();
      }
      else {
        puVar19 = (undefined *)0x0;
      }
      puVar5 = PTR_PTR_1126c51c8;
      uVar3 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar3;
      func_0x00010bf12ea0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar4;
      func_0x00010c15ade0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d4dc0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar18);
      _objc_release(uVar4);
      _objc_release(uVar13);
      _objc_release(uVar3);
      func_0x00010befa120(puVar2);
      _objc_release(puVar5);
      _objc_release(puVar19);
    }
    puVar19 = param_1;
    func_0x00010beb9f80();
    if ((int)puVar19 != 0) {
      if (param_1[0x119] == '\x01') {
        puVar19 = PTR_PTR_1126cf4e8;
        _objc_alloc();
        func_0x00010c01ece0();
      }
      else {
        puVar19 = (undefined *)0x0;
      }
      puVar5 = PTR_PTR_1126c51c8;
      uVar3 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar3;
      func_0x00010bf12ea0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar4;
      func_0x00010c15ade0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d4dc0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar18);
      _objc_release(uVar4);
      _objc_release(uVar13);
      _objc_release(uVar3);
      func_0x00010befa120(puVar2);
      _objc_release(puVar5);
      _objc_release(puVar19);
    }
    if (param_1[0x161] == '\x01') {
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      lStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      lVar15 = *(long *)(param_1 + 0xe8);
      _objc_retain(lVar15);
      lVar6 = lVar15;
      func_0x00010bf52a60();
      if (lVar6 != 0) {
        lVar16 = *plStack_130;
        do {
          lVar17 = 0;
          do {
            if (*plStack_130 != lVar16) {
              _objc_enumerationMutation(lVar15);
            }
            uVar18 = *(undefined8 *)(lStack_138 + lVar17 * 8);
            uVar13 = uVar18;
            func_0x00010bf2d160();
            puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            if ((int)uVar13 != 0) {
              if ((param_1[0x118] & 1) == 0) {
                if (param_1[0x141] == '\x01') {
                  iVar1 = (int)*(undefined8 *)(param_1 + 0x158);
                  uVar13 = uVar18;
                  func_0x00010c1164a0(uVar18);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c26e7a0();
                  func_0x00010c0df780(puVar19);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bf4b900();
                  _objc_release(puVar19);
                  _objc_release(uVar13);
                  if (iVar1 != 0) goto LAB_106975460;
                }
                puVar19 = (undefined *)0x0;
              }
              else {
LAB_106975460:
                uVar13 = uVar18;
                func_0x00010c1164a0(uVar18);
                _objc_retainAutoreleasedReturnValue();
                uVar3 = uVar13;
                func_0x00010c116a20();
                _objc_retainAutoreleasedReturnValue();
                puVar19 = param_1;
                func_0x00010bdf79c0(param_1);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar3);
                _objc_release(uVar13);
              }
              uVar13 = uVar18;
              func_0x00010c1164a0();
              _objc_retainAutoreleasedReturnValue();
              uVar3 = uVar13;
              func_0x00010c116a20();
              _objc_retainAutoreleasedReturnValue();
              uVar7 = *(undefined8 *)(param_1 + 0x30);
              func_0x00010c269d40(uVar7);
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar7;
              func_0x00010c116a20();
              _objc_retainAutoreleasedReturnValue();
              uVar8 = uVar3;
              func_0x00010c0720c0();
              _objc_release(uVar4);
              _objc_release(uVar7);
              _objc_release(uVar3);
              _objc_release(uVar13);
              uVar13 = uVar18;
              func_0x00010c1164a0(uVar18);
              _objc_retainAutoreleasedReturnValue();
              uVar3 = uVar13;
              FUN_1069713fc();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar13);
              if ((int)uVar8 == 0) {
                func_0x00010befa120(puVar2);
              }
              else {
                if (param_1[0x189] == '\x01') {
                  func_0x00010c1164a0();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c26e7a0();
                  _objc_release(uVar18);
                }
                func_0x00010c066b00(puVar2);
              }
              _objc_release(uVar3);
              _objc_release(puVar19);
            }
            lVar17 = lVar17 + 1;
          } while (lVar6 != lVar17);
          lVar6 = lVar15;
          func_0x00010bf52a60();
        } while (lVar6 != 0);
      }
      _objc_release(lVar15);
    }
    if (param_1[0xf8] == '\x01') {
      ppuVar9 = &PTR____CFConstantStringClassReference_110e662d8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e662d8,0);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = *(undefined8 *)(param_1 + 0xf0);
      *(undefined ***)(param_1 + 0xf0) = ppuVar9;
      _objc_release(uVar13);
    }
    puVar19 = param_1;
    func_0x00010c119a60();
    _objc_retainAutoreleasedReturnValue();
    iVar1 = (int)*(undefined8 *)(param_1 + 0x90);
    func_0x000108f48528();
    if (iVar1 == 0) {
      bVar14 = 0;
    }
    else {
      bVar14 = param_1[0x198];
    }
    if ((puVar19 != (undefined *)0x0) && ((bVar14 & 1) == 0)) {
      func_0x00010befa120(puVar2);
    }
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160();
    puVar10 = puVar5;
    FUN_106971dac();
    if ((param_1[0x160] == '\x01') && (-1 < (long)puVar10)) {
      puVar10 = puVar5;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d360(puVar5);
      puVar11 = puVar10;
      func_0x00010c11ac00(puVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = param_1;
      func_0x00010bdf79e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      puVar11 = puVar10;
      FUN_1069719d4(puVar10,*(undefined8 *)(param_1 + 0x68),0,puVar12,param_1[0x188]);
      _objc_retainAutoreleasedReturnValue();
      if (puVar11 != (undefined *)0x0) {
        func_0x00010befa120(puVar2);
      }
      _objc_release(puVar12);
      _objc_release(puVar10);
      _objc_release(puVar11);
    }
    puVar10 = puVar5;
    FUN_106971eb4();
    if (((int)puVar10 != 0) && (*(long *)(param_1 + 0x170) == 0)) {
      FUN_106979890();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = *(undefined8 *)(param_1 + 0x170);
      *(undefined **)(param_1 + 0x170) = puVar10;
      _objc_release(uVar13);
    }
    puVar10 = puVar5;
    FUN_106971fd8();
    if (((int)puVar10 != 0) && (*(long *)(param_1 + 0x178) == 0)) {
      uVar18 = *(undefined8 *)(param_1 + 0x90);
      func_0x000108f42188();
      uVar13 = *(undefined8 *)(param_1 + 0x90);
      func_0x000108f421c4(uVar13);
      FUN_1069798c4(uVar18,uVar13);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = *(undefined8 *)(param_1 + 0x178);
      *(undefined8 *)(param_1 + 0x178) = uVar18;
      _objc_release(uVar13);
    }
    if (*(long *)(param_1 + 0x180) == 0) {
      uVar18 = *(undefined8 *)(param_1 + 0x90);
      func_0x000108f42138();
      uVar13 = *(undefined8 *)(param_1 + 0x90);
      func_0x000108f42160(uVar13);
      FUN_1069798c4(uVar18,uVar13);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = *(undefined8 *)(param_1 + 0x180);
      *(undefined8 *)(param_1 + 0x180) = uVar18;
      _objc_release(uVar13);
    }
    puVar10 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    uStack_150 = 0;
    uStack_148 = 0;
    FUN_106978a54(puVar5,puVar10,&uStack_148,&uStack_150,param_1[0x160],
                  *(undefined8 *)(param_1 + 0x168),*(undefined8 *)(param_1 + 0x170),1,
                  *(undefined8 *)(param_1 + 0x180),*(undefined8 *)(param_1 + 0x178));
    uVar18 = uStack_148;
    _objc_retain(uStack_148);
    uVar13 = uStack_150;
    _objc_retain(uStack_150);
    _objc_release(puVar10);
    puVar10 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_170 = 0xc2000000;
    pcStack_168 = FUN_106975b44;
    puStack_160 = &UNK_11094e2b0;
    uVar3 = uVar18;
    puStack_158 = param_1;
    func_0x000100504554(uVar18,&puStack_178);
    func_0x00010befa160(puVar2);
    func_0x00010bf529e0(uVar3);
    puStack_1a0 = puVar10;
    uStack_198 = 0xc2000000;
    uStack_190 = 0x106975c0c;
    puStack_188 = &UNK_11094e2b0;
    param_2 = &puStack_1a0;
    uVar4 = uVar13;
    puStack_180 = param_1;
    func_0x000100504554(uVar13,param_2);
    func_0x00010befa160(puVar2);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar13);
    _objc_release(uVar18);
    _objc_release(puVar5);
    _objc_release(puVar19);
  }
  else {
    puVar19 = param_1;
    func_0x00010bedf940(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar19;
    func_0x00010c13ca20();
    _objc_retainAutoreleasedReturnValue();
    param_2 = &PTR___NSConcreteGlobalBlock_11094e290;
    puVar10 = puVar5;
    func_0x000100504554();
    puVar11 = puVar10;
    func_0x00010c0d3c80();
    _objc_release(puVar2);
    _objc_release(puVar10);
    _objc_release(puVar5);
    func_0x00010c26d520(puVar19);
    _objc_release(puVar19);
    puVar2 = puVar11;
  }
  puVar19 = puVar2;
  if ((*(ulong *)(param_1 + 0x78) < 0x1c) &&
     ((1L << (*(ulong *)(param_1 + 0x78) & 0x3f) & 0xc004400U) != 0)) {
    uVar13 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar13;
    func_0x00010c22b060();
    _objc_release(uVar13);
    uVar13 = *(undefined8 *)(param_1 + 0xc0);
    func_0x00010bf51e00(puVar2);
    if ((int)uVar18 != 0) goto LAB_106975aa4;
    puVar5 = param_1;
    func_0x00010be95900(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar13);
    _objc_release(puVar5);
  }
  else {
    uVar13 = *(undefined8 *)(param_1 + 0xc0);
    func_0x00010bf51e00(puVar2);
LAB_106975aa4:
    func_0x00010c0d9840(uVar13);
  }
  _objc_release(puVar19);
  if (param_1[0xe0] == '\x01') {
    uVar13 = *(undefined8 *)(param_1 + 0xd0);
    puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar13);
    _objc_release(puVar19);
  }
  _objc_release(puVar2);
LAB_106975afc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c15aa70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_selectionStory_1126344b8);
    return;
  }
  return;
}



/* Entry: 106975b3c; end: 106975b43;  */

void FUN_106975b3c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15aa70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_selectionStory_1126344b8);
  return;
}



/* Entry: 106975b44; end: 106975cd3;  */

void FUN_106975b44(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c11ac00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_2;
    func_0x00010c11ac00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdf79e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_2;
    FUN_1069719d4(param_2,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68),0,uVar2,
                  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x188));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106975cd4; end: 106975d4f; -[SCSelectionStoryObservableRepositoryImpl _restrictToMyStoryAndPrivateStoryForSpotlightSnaps:] */

void FUN_106975cd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(param_3);
  func_0x00010c1063a0(puVar1,param_2,&PTR___NSConcreteGlobalBlock_11094e300);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfaea40(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106975d50; end: 106975e57;  */

undefined1 FUN_106975d50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  func_0x00010c0bee40(param_2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 106975e58; end: 106975e87;  */

void FUN_106975e58(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 106975e88; end: 106975faf; -[SCSelectionStoryObservableRepositoryImpl _shouldHideEveryoneSetting] */

undefined * FUN_106975e88(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  ulong uVar7;
  
  puVar5 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x90);
  func_0x000108f420e8();
  if ((int)lVar1 == 0) {
    puVar8 = (undefined *)0x1;
  }
  else {
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    lVar1 = *(long *)(param_1 + 0xe8);
    _objc_retain(lVar1);
    lVar3 = lVar1;
    func_0x00010bf52a60();
    puVar8 = (undefined *)0x0;
    if (lVar3 != 0) {
      lVar9 = *plStack_100;
      do {
        lVar10 = 0;
        do {
          if (*plStack_100 != lVar9) {
            _objc_enumerationMutation(lVar1);
          }
          uVar7 = *(ulong *)(lStack_108 + lVar10 * 8);
          iVar6 = (int)uVar7;
          func_0x00010c074e40();
          if ((iVar6 != 0) && (func_0x00010bf2d160(), (uVar7 & 1) != 0)) {
            puVar8 = (undefined *)0x1;
            goto LAB_106975f70;
          }
          lVar10 = lVar10 + 1;
        } while (lVar3 != lVar10);
        lVar3 = lVar1;
        puVar5 = &uStack_110;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
      puVar8 = (undefined *)0x0;
    }
LAB_106975f70:
    _objc_release();
    param_3 = (undefined1 *)puVar5;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar8;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if ((*(char *)(lVar1 + 0x140) == '\x01') &&
     (puVar2 = param_3, func_0x00010c08fa60(), puVar2 != (undefined1 *)0x0)) {
    lVar3 = *(long *)(lVar1 + 0x148);
    func_0x00010c0e00e0(lVar3,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      uVar4 = *(undefined8 *)(lVar1 + 0x20);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf62860();
      _objc_release(uVar4);
    }
    else {
      func_0x00010c067fc0(lVar3);
    }
    puVar8 = PTR_PTR_1126cf4e8;
    _objc_alloc(PTR_PTR_1126cf4e8);
    func_0x00010c01ece0();
    _objc_release(lVar3);
  }
  else {
    puVar8 = (undefined *)0x0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return puVar8;
}



/* Entry: 106975fb0; end: 106976083; -[SCSelectionStoryObservableRepositoryImpl _customTTLInfoForCustomStoryPublicationId:] */

void FUN_106975fb0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  if ((*(char *)(param_1 + 0x140) == '\x01') && (lVar1 = param_3, func_0x00010c08fa60(), lVar1 != 0)
     ) {
    lVar1 = *(long *)(param_1 + 0x148);
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf62860();
      _objc_release(uVar2);
    }
    else {
      func_0x00010c067fc0(lVar1);
    }
    puVar3 = PTR_PTR_1126cf4e8;
    _objc_alloc(PTR_PTR_1126cf4e8);
    func_0x00010c01ece0();
    _objc_release(lVar1);
  }
  else {
    puVar3 = (undefined *)0x0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106976084; end: 10697616b; -[SCSelectionStoryObservableRepositoryImpl _customTTLInfoForBusinessStoryId:] */

void FUN_106976084(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  if ((*(char *)(param_1 + 0x141) == '\x01') && (lVar1 = param_3, func_0x00010c08fa60(), lVar1 != 0)
     ) {
    lVar1 = *(long *)(param_1 + 0x150);
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf62840();
      _objc_release(uVar2);
    }
    else {
      func_0x00010c067fc0();
    }
    puVar3 = PTR_PTR_1126cf4e8;
    _objc_alloc(PTR_PTR_1126cf4e8);
    func_0x00010c01ece0();
    _objc_release(lVar1);
  }
  else {
    puVar3 = (undefined *)0x0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10697616c; end: 106976173; -[SCSelectionStoryObservableRepositoryImpl selectionStoryObservable] */

void FUN_10697616c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 200),PTR_s_target_112678178);
  return;
}



/* Entry: 106976174; end: 10697617b; -[SCSelectionStoryObservableRepositoryImpl viewMoreThresholdObservable] */

void FUN_106976174(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf870b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xd0),PTR_s_distinctUntilChanged_1125bf5d0);
  return;
}



/* Entry: 10697617c; end: 106976257; -[SCSelectionStoryObservableRepositoryImpl searchSelectionStoryObservableForQuery:] */

void FUN_10697617c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 200);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106976258;
  puStack_48 = &UNK_1108cb418;
  uStack_40 = param_3;
  uStack_38 = uVar1;
  _objc_retain(param_3);
  _objc_retain(uVar1);
  uVar3 = uVar2;
  func_0x00010c0b8600(uVar2,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106976258; end: 1069762b3;  */

void FUN_106976258(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_11094e340);
  lVar1 = *(long *)(param_1 + 0x28);
  (**(code **)(lVar1 + 0x10))(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1069762b4; end: 1069762bb;  */

void FUN_1069762b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106971d24;
  uStack_30 = 0x106971d34;
  _objc_retain(param_2);
  uStack_28 = param_2;
  func_0x00010c0bee40(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1069762bc; end: 10697638b; -[SCSelectionStoryObservableRepositoryImpl selectedSelectionStoryObservable:] */

void FUN_1069762bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 200);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10697638c;
  puStack_40 = &UNK_110854bd0;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar2 = uVar1;
  func_0x00010c0b8600(uVar1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10697638c; end: 106976407;  */

void FUN_10697638c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106976408;
  puStack_30 = &UNK_11086b9c0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_28 = uVar1;
  func_0x0001006372a4(param_2,&puStack_48);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 106976408; end: 106976417;  */

ulong FUN_106976408(long param_1,long param_2)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **in_x5;
  undefined **in_x7;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined *puStack_268;
  long lStack_260;
  undefined8 *puStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined8 *puStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined8 *puStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 *puStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined *puStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *apuStack_f8 [16];
  long lStack_78;
  
  lVar7 = *(long *)(param_1 + 0x20);
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(lVar7);
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  lStack_138 = 0;
  puStack_140 = (undefined *)0x0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(lVar7);
  ppuVar9 = &puStack_140;
  ppuVar10 = apuStack_f8;
  ppuVar11 = (undefined **)0x10;
  lVar5 = lVar7;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar14 = *plStack_130;
    do {
      lVar15 = 0;
      do {
        if (*plStack_130 != lVar14) {
          _objc_enumerationMutation(lVar7);
        }
        uVar13 = *(ulong *)(lStack_138 + lVar15 * 8);
        uVar8 = uVar13;
        func_0x000108425a5c();
        if (((uVar8 & 1) == 0) && (uVar8 = uVar13, func_0x000108425b30(), (uVar8 & 1) == 0)) {
          uVar8 = uVar13;
          func_0x000108425950();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar3);
          _objc_release(uVar8);
          func_0x0001084259b4();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar4);
          _objc_release(uVar13);
        }
        lVar15 = lVar15 + 1;
      } while (lVar5 != lVar15);
      ppuVar9 = &puStack_140;
      ppuVar10 = apuStack_f8;
      ppuVar11 = (undefined **)0x10;
      lVar5 = lVar7;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release(lVar7);
  puVar6 = puVar3;
  func_0x00010bf529e0();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (puVar6 == (undefined *)0x0) {
    uVar12 = 0;
  }
  else {
    uStack_160 = 0;
    uStack_150 = 0x2020000000;
    uStack_148 = 0;
    puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_188 = 0xc2000000;
    pcStack_180 = FUN_10697a09c;
    puStack_178 = &UNK_11094e560;
    puStack_168 = &uStack_160;
    puStack_158 = &uStack_160;
    _objc_retain(puVar4);
    puStack_1c0 = puVar1;
    uStack_1b8 = 0xc2000000;
    pcStack_1b0 = FUN_10697a190;
    puStack_1a8 = &UNK_11094e590;
    puStack_198 = &uStack_160;
    puStack_170 = puVar4;
    _objc_retain(puVar3);
    puStack_1f0 = puVar1;
    uStack_1e8 = 0xc2000000;
    uStack_1e0 = 0x10697a1c4;
    puStack_1d8 = &UNK_11094e5c0;
    puStack_1c8 = &uStack_160;
    puStack_1a0 = puVar3;
    _objc_retain(puVar3);
    puStack_220 = puVar1;
    uStack_218 = 0xc2000000;
    uStack_210 = 0x10697a1f8;
    puStack_208 = &UNK_11094e5f0;
    puStack_1f8 = &uStack_160;
    puStack_1d0 = puVar3;
    _objc_retain(puVar3);
    puStack_250 = puVar1;
    uStack_248 = 0xc2000000;
    uStack_240 = 0x10697a22c;
    puStack_238 = &UNK_11094e620;
    puStack_228 = &uStack_160;
    puStack_200 = puVar3;
    _objc_retain(puVar3);
    puStack_280 = puVar1;
    uStack_278 = 0xc2000000;
    uStack_270 = 0x10697a260;
    puStack_268 = &UNK_11094e650;
    puStack_258 = &uStack_160;
    puStack_230 = puVar3;
    _objc_retain(lVar7);
    lStack_260 = lVar7;
    _objc_retain(puVar3);
    ppuVar9 = &puStack_190;
    ppuVar10 = &puStack_1c0;
    ppuVar11 = &puStack_1f0;
    in_x5 = &puStack_220;
    in_x7 = &puStack_280;
    func_0x00010c0bee40(param_2);
    uVar12 = (uint)*(byte *)(puStack_158 + 3);
    _objc_release(puVar3);
    _objc_release(lStack_260);
    _objc_release(puStack_230);
    _objc_release(puStack_200);
    _objc_release(puStack_1d0);
    _objc_release(puStack_1a0);
    _objc_release(puStack_170);
    __Block_object_dispose(&uStack_160,8);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return (ulong)(uVar12 & 1);
  }
  ___stack_chk_fail();
  uVar8 = 8;
  __Block_object_dispose(&uStack_160,8);
  __Unwind_Resume();
  _objc_retain(uVar8);
  _objc_retain(ppuVar9);
  _objc_retain(ppuVar11);
  _objc_retain(in_x5);
  _objc_retain(in_x7);
  if (ppuVar10 == (undefined **)0x2) {
    uVar2 = (undefined1)*(undefined8 *)(param_2 + 0x20);
  }
  else if (ppuVar10 == (undefined **)0x1) {
    uVar2 = (undefined1)*(undefined8 *)(param_2 + 0x20);
  }
  else {
    if (ppuVar10 != (undefined **)0x0) goto LAB_10697a154;
    uVar2 = (undefined1)*(undefined8 *)(param_2 + 0x20);
  }
  func_0x00010bf4b900();
  *(undefined1 *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + 0x18) = uVar2;
LAB_10697a154:
  _objc_release(in_x7);
  _objc_release(in_x5);
  _objc_release(ppuVar11);
  _objc_release(ppuVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return uVar8;
}



/* Entry: 106976418; end: 10697650f; -[SCSelectionStoryObservableRepositoryImpl setOurStorySubtextObservable:] */

void FUN_106976418(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0xb0));
  if (param_3 == 0) {
    func_0x00010be71da0(param_1);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    lVar1 = param_3;
    func_0x00010c25ff60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106976510; end: 106976557;  */

void FUN_106976510(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be71da0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106976558; end: 10697662f; -[SCSelectionStoryObservableRepositoryImpl _performHandleUpdatedOurStorySubtext:] */

void FUN_106976558(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106976630; end: 106976663;  */

void FUN_106976630(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32ae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106976664; end: 1069766c3; -[SCSelectionStoryObservableRepositoryImpl _handleUpdatedOurStorySubtext:] */

void FUN_106976664(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0xf0);
  if ((param_3 != 0 || uVar1 != 0) && (func_0x00010c0720c0(uVar1,param_2,param_3), (uVar1 & 1) == 0)
     ) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0xf0);
    *(long *)(param_1 + 0xf0) = param_3;
    _objc_release(uVar2);
    func_0x00010bedf920(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069766c4; end: 1069767e3; -[SCSelectionStoryObservableRepositoryImpl setOurStorySubtextAndPlaceTagObservable:placeTagsTracker:] */

void FUN_1069766c4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_storeWeak(param_1 + 0xa0,param_4);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0xb8));
  if (param_3 == 0) {
    func_0x00010be71dc0(param_1);
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    lVar1 = param_3;
    func_0x00010c25ff60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1069767e4; end: 10697682b;  */

void FUN_1069767e4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be71dc0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10697682c; end: 106976903; -[SCSelectionStoryObservableRepositoryImpl _performHandleUpdatedOurStorySubtextAndPlaceTag:] */

void FUN_10697682c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106976904; end: 106976937;  */

void FUN_106976904(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106976938; end: 106976b23; -[SCSelectionStoryObservableRepositoryImpl _handleUpdatedOurStorySubtextAndPlaceTag:] */

void FUN_106976938(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c260ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0fd560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = *(long *)(param_1 + 0x110);
  if ((*(long *)(param_1 + 0xf0) != 0 || lVar1 != 0) || lVar3 != 0) {
    func_0x00010c0720c0(lVar3,param_2,lVar2);
    if ((int)lVar3 != 0) {
      uVar4 = *(ulong *)(param_1 + 0xf0);
      func_0x00010c0720c0(uVar4,param_2,lVar1);
      if ((uVar4 & 1) != 0) goto LAB_106976b00;
    }
    _objc_retain(lVar1);
    uVar5 = *(undefined8 *)(param_1 + 0xf0);
    *(long *)(param_1 + 0xf0) = lVar1;
    _objc_release(uVar5);
    _objc_retain(lVar2);
    uVar5 = *(undefined8 *)(param_1 + 0x110);
    *(long *)(param_1 + 0x110) = lVar2;
    _objc_release(uVar5);
    lVar3 = param_1 + 0xa0;
    _objc_loadWeakRetained();
    if (lVar3 != 0) {
      lVar6 = param_1 + 0xa0;
      _objc_loadWeakRetained();
      lVar7 = lVar6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar6);
      _objc_release(lVar3);
      if (lVar7 != 0) {
        lVar3 = param_1 + 0xa0;
        _objc_loadWeakRetained();
        lVar6 = lVar3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010bf6b020();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar6);
        _objc_release(lVar3);
        if (lVar7 != 0) {
          lVar3 = lVar7;
          func_0x00010c2683a0();
          _objc_retainAutoreleasedReturnValue();
          if ((lVar3 != 0) && (lVar6 = lVar3, func_0x00010c27dd80(), lVar6 != 0)) {
            func_0x00010c27dd80(lVar3);
          }
          lVar6 = param_1 + 0xa0;
          _objc_loadWeakRetained(lVar6);
          lVar8 = lVar6;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c220840();
          _objc_release(lVar8);
          _objc_release(lVar6);
          func_0x00010bedf920(param_1);
          _objc_release(lVar3);
        }
        _objc_release(lVar7);
      }
    }
  }
LAB_106976b00:
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106976b24; end: 106976bdb; -[SCSelectionStoryObservableRepositoryImpl setShowBestOfSpectacles:] */

void FUN_106976b24(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106976bdc; end: 106976c0f;  */

void FUN_106976bdc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea7900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


