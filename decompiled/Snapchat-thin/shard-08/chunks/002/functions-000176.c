/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105f19350; end: 105f1938b; -[SCMapClusterInfoBuilder .cxx_destruct] */

void FUN_105f19350(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f1938c; end: 105f1941b; -[SCMapDropsAnnotationManager initWithMapSDKSession:basemapPersonalization:] */

undefined1 * FUN_105f1938c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ee030;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f1941c; end: 105f19613; -[SCMapDropsAnnotationManager placeDrops:] */

void FUN_105f1941c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined **ppuStack_138;
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
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar7 = &uStack_130;
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar12 = *plStack_120;
    ppuStack_138 = &PTR____CFConstantStringClassReference_110e30138;
    do {
      lVar13 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(param_3);
        }
        lVar9 = *(long *)(lStack_128 + lVar13 * 8);
        lVar10 = *(long *)(param_1 + 0x10);
        lVar2 = lVar9;
        func_0x00010bf8aa20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0(lVar10,param_2,lVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar2);
        if (lVar10 == 0) {
          lVar2 = lVar9;
          FUN_10676a2c0();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar2;
          func_0x00010bfe5ea0();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = *(undefined8 *)(param_1 + 0x10);
          lVar3 = lVar9;
          func_0x00010bf8aa20(lVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(uVar11,param_2,lVar10,lVar3);
          _objc_release(lVar3);
          _objc_release(lVar10);
          func_0x00010c252440();
          ppuVar8 = ppuStack_138;
          if ((lVar9 - 2U < 2) ||
             (ppuVar8 = &PTR____CFConstantStringClassReference_110e5be78, lVar9 == 1)) {
            func_0x00010bef8340(*(undefined8 *)(param_1 + 8),param_2,ppuVar8,lVar2);
          }
          _objc_release(lVar2);
        }
        lVar13 = lVar13 + 1;
      } while (lVar1 != lVar13);
      puVar7 = &uStack_130;
      lVar1 = param_3;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (puVar7 == (undefined8 *)0x0) {
      return;
    }
    _objc_retain(puVar7);
    func_0x00010be8bec0(param_3,param_2,puVar7);
    puVar4 = puVar7;
    FUN_10676a2c0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_3 + 0x10);
    puVar6 = puVar7;
    func_0x00010bf8aa20(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar11,param_2,puVar5,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = puVar7;
    func_0x00010c252440();
    _objc_release(puVar7);
    if ((long)puVar5 - 1U < 3) {
      func_0x00010bef8340(*(undefined8 *)(param_3 + 8),param_2,
                          *(undefined8 *)(&PTR_PTR_1108f8e78)[(long)puVar5 - 1U],puVar4);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  return;
}



/* Entry: 105f19614; end: 105f196fb; -[SCMapDropsAnnotationManager updateDrop:] */

void FUN_105f19614(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    func_0x00010be8bec0(param_1,param_2,param_3);
    lVar1 = param_3;
    FUN_10676a2c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    lVar3 = param_3;
    func_0x00010bf8aa20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4,param_2,lVar2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c252440();
    _objc_release(param_3);
    if (lVar2 - 1U < 3) {
      func_0x00010bef8340(*(undefined8 *)(param_1 + 8),param_2,
                          *(undefined8 *)(&PTR_PTR_1108f8e78)[lVar2 - 1U],lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 105f196fc; end: 105f19707; -[SCMapDropsAnnotationManager removeDrop:] */

void FUN_105f196fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be8bed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeDrop__112580950);
    return;
  }
  return;
}



/* Entry: 105f19708; end: 105f19803; -[SCMapDropsAnnotationManager _removeDrop:] */

void FUN_105f19708(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x10);
  lVar1 = param_3;
  func_0x00010bf8aa20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c252440();
    if (lVar1 - 2U < 2) {
      func_0x00010c135460(*(undefined8 *)(param_1 + 8),param_2,
                          &PTR____CFConstantStringClassReference_110e30138,lVar2);
    }
    else if (lVar1 == 1) {
      func_0x00010c12c480(*(undefined8 *)(param_1 + 8),param_2,
                          &PTR____CFConstantStringClassReference_110e5be78,lVar2);
    }
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    lVar1 = param_3;
    func_0x00010bf8aa20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(uVar3,param_2,lVar1);
    _objc_release(lVar1);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f19804; end: 105f19833; -[SCMapDropsAnnotationManager .cxx_destruct] */

void FUN_105f19804(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f19834; end: 105f198d7; -[SCMapDropsAnnotationManagerFactoryImpl initWithMapViewServices:basemapPersonalizationServices:] */

undefined1 *
FUN_105f19834(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ee038;
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



/* Entry: 105f198d8; end: 105f19993; -[SCMapDropsAnnotationManagerFactoryImpl makeAnnotationManager] */

void FUN_105f198d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126c5ef0;
  _objc_alloc(PTR_PTR_1126c5ef0);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0ba460(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c1530a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf164e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c028520(puVar1,param_2,uVar4,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f19994; end: 105f199c3; -[SCMapDropsAnnotationManagerFactoryImpl .cxx_destruct] */

void FUN_105f19994(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f199c4; end: 105f19a67; -[SCMapDropsAnnotationServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f199c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c5ef8;
  _objc_alloc(PTR_PTR_1126c5ef8);
  lVar2 = param_1 + _DAT_11273a618;
  _objc_loadWeakRetained(lVar2);
  param_1 = param_1 + _DAT_11273a61c;
  _objc_loadWeakRetained(param_1);
  func_0x00010c028900(puVar1,param_2,lVar2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126c5f00;
  _objc_alloc(PTR_PTR_1126c5f00);
  func_0x00010c0282e0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105f19a68; end: 105f19aab; -[SCMapDropsAnnotationServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f19a68(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273a61c);
  _objc_destroyWeak(param_1 + _DAT_11273a618);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273a620);
  return;
}



/* Entry: 105f19aac; end: 105f19e03; -[SCMapDropsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f19aac(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar1 = param_1 + _DAT_11273a628;
  _objc_loadWeakRetained(lVar1);
  lVar8 = lVar1;
  func_0x00010bfc1a20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc5c0();
  _objc_release(lVar2);
  _objc_release(lVar8);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11273a62c;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0b9680();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11273a630;
  _objc_loadWeakRetained(lVar8);
  lVar4 = lVar8;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010c0b96e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + _DAT_11273a634);
  *(long *)(param_1 + _DAT_11273a634) = lVar6;
  _objc_release(uVar7);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar8);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11273a638;
  _objc_loadWeakRetained();
  lVar8 = lVar1;
  func_0x00010bf0c120();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c11e0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + _DAT_11273a63c);
  *(long *)(param_1 + _DAT_11273a63c) = lVar3;
  _objc_release(uVar7);
  _objc_release(lVar2);
  _objc_release(lVar8);
  _objc_release(lVar1);
  *(undefined4 *)(param_1 + _DAT_11273a640) = 0;
  lVar1 = param_1 + _DAT_11273a644;
  _objc_loadWeakRetained();
  lVar8 = lVar1;
  func_0x00010c0b6f20();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + _DAT_11273a648);
  *(long *)(param_1 + _DAT_11273a648) = lVar8;
  _objc_release(uVar7);
  _objc_release(lVar1);
  _objc_initWeak(auStack_58,param_1);
  lVar8 = (long)_DAT_11273a64c;
  lVar1 = param_1 + lVar8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf8ac00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0fa340();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  lVar5 = lVar4;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + _DAT_11273a650);
  *(long *)(param_1 + _DAT_11273a650) = lVar5;
  _objc_release(uVar7);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar8 = param_1 + lVar8;
  _objc_loadWeakRetained(lVar8);
  lVar1 = lVar8;
  func_0x00010bf8ac00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa92c0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar8);
  func_0x00010beaa8c0(param_1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105f19e04; end: 105f19e57;  */

void FUN_105f19e04(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be74200();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105f19e58; end: 105f19efb; -[SCMapDropsEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f19e58(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1 + _DAT_11273a628;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bfc1a20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12ec40();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_1126ee040;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f19efc; end: 105f1a203; -[SCMapDropsEntryPoint _placePersistedDrops:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f19efc(long param_1,undefined1 *param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_1a8 [8];
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
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
  lVar4 = (long)_DAT_11273a640;
  _os_unfair_lock_lock(param_1 + lVar4);
  lVar5 = (long)_DAT_11273a654;
  if (*(long *)(param_1 + lVar5) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
  }
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x22 = *(long *)(lStack_128 + lVar7 * 8);
        uVar3 = *(undefined8 *)(param_1 + lVar5);
        func_0x00010bf8aa20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar3);
        _objc_release(unaff_x22);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  lVar5 = 0;
  _objc_release(param_3);
  _os_unfair_lock_unlock(param_1 + lVar4);
  if ((*(byte *)(param_1 + _DAT_11273a658) & 1) == 0) {
    _objc_initWeak(auStack_138,param_1);
    lVar5 = param_1 + _DAT_11273a65c;
    _objc_loadWeakRetained();
    unaff_x22 = lVar5;
    func_0x00010c0ba460();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = unaff_x22;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c0b9340();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar6;
    func_0x00010c09d420();
    _objc_retainAutoreleasedReturnValue();
    puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_160 = 0xc2000000;
    pcStack_158 = FUN_105f1a204;
    puStack_150 = &UNK_1108f5d50;
    param_2 = auStack_138;
    _objc_copyWeak(auStack_140,param_2);
    _objc_retain(param_3);
    lVar7 = lVar4;
    lStack_148 = param_3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + _DAT_11273a660);
    *(long *)(param_1 + _DAT_11273a660) = lVar7;
    _objc_release(uVar3);
    _objc_release(lVar4);
    _objc_release(lVar6);
    _objc_release(lVar2);
    _objc_release(unaff_x22);
    _objc_release(lVar5);
    _objc_release(lStack_148);
    _objc_destroyWeak(auStack_140);
    _objc_destroyWeak(auStack_138);
  }
  else {
    func_0x00010c0fd040(*(undefined8 *)(param_1 + _DAT_11273a648));
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + lVar4);
  lVar4 = param_3;
  __Unwind_Resume();
  pcStack_178 = FUN_105f1a204;
  lStack_1a0 = unaff_x22;
  lStack_198 = lVar5;
  lStack_190 = param_1;
  lStack_188 = param_3;
  puStack_180 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  _objc_copyWeak(auStack_1a8,lVar4 + 0x28);
  uVar3 = *(undefined8 *)(lVar4 + 0x20);
  _objc_retain(uVar3);
  func_0x00010c0bec40(param_2);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_1a8);
  _objc_release(param_2);
  return;
}



/* Entry: 105f1a204; end: 105f1a2cf;  */

void FUN_105f1a204(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0bec40(param_2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105f1a2d0; end: 105f1a2d3;  */

void FUN_105f1a2d0(void)

{
  return;
}



/* Entry: 105f1a2d4; end: 105f1a327;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f1a2d4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + _DAT_11273a658) = 1;
    func_0x00010c0fd040(*(undefined8 *)(lVar1 + _DAT_11273a648),param_2,
                        *(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105f1a328; end: 105f1a32b;  */

void FUN_105f1a328(void)

{
  return;
}



/* Entry: 105f1a32c; end: 105f1a333; -[SCMapDropsEntryPoint feature] */

undefined8 FUN_105f1a32c(void)

{
  return 7;
}



/* Entry: 105f1a334; end: 105f1a33b; -[SCMapDropsEntryPoint touchPriority] */

undefined8 FUN_105f1a334(void)

{
  return 6;
}



/* Entry: 105f1a33c; end: 105f1a34f; -[SCMapDropsEntryPoint didTouchDownOnMapAtPoint:featureDescriptors:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105f1a33c(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11273a624) = 0;
  return 0;
}



/* Entry: 105f1a350; end: 105f1a35f; -[SCMapDropsEntryPoint didTouchUpOnMapAtPoint:touchWorldLocation:featureDescriptors:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105f1a350(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11273a624);
}



/* Entry: 105f1a360; end: 105f1a387; -[SCMapDropsEntryPoint didLongPressOnMapAtPoint:featureDescriptors:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105f1a360(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11273a624) = 1;
  func_0x00010be2bcc0();
  return 0x101;
}



/* Entry: 105f1a388; end: 105f1a38b; -[SCMapDropsEntryPoint didCancelTouchOnMapWithReason:] */

void FUN_105f1a388(void)

{
  return;
}



/* Entry: 105f1a38c; end: 105f1a38f; -[SCMapDropsEntryPoint priorResponderDidHandleTouch:] */

void FUN_105f1a38c(void)

{
  return;
}



/* Entry: 105f1a390; end: 105f1a4bf; -[SCMapDropsEntryPoint _handleLongPressAtPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f1a390(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  func_0x00010bde4e80();
  lVar7 = (long)_DAT_11273a664;
  lVar1 = *(long *)(param_3 + lVar7);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = param_3;
    func_0x00010be06a00(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(param_3 + lVar7),param_4,puVar2);
    param_3 = param_3 + _DAT_11273a65c;
    _objc_loadWeakRetained(param_3);
    puVar3 = param_3;
    func_0x00010c0ba460();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf218e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c192140();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(param_3);
  }
  else {
    func_0x00010bde9900();
    uVar6 = *(undefined8 *)(param_3 + _DAT_11273a668);
    puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c2972a0(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar6,param_4,puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105f1a4c0; end: 105f1a577; -[SCMapDropsEntryPoint _coordinateFromPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_105f1a4c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  param_3 = param_3 + _DAT_11273a65c;
  _objc_loadWeakRetained(param_3);
  lVar1 = param_3;
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_3);
  lVar1 = lVar2;
  func_0x00010c0baae0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51220(param_1,param_2);
  _objc_release(lVar1);
  _objc_release(lVar2);
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 105f1a578; end: 105f1a713; -[SCMapDropsEntryPoint _dropScopeFromPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f1a578(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  func_0x00010bde9900();
  puVar1 = PTR_PTR_1126ae568;
  _objc_alloc_init();
  uVar6 = *(undefined8 *)(param_3 + _DAT_11273a668);
  *(undefined **)(param_3 + _DAT_11273a668) = puVar1;
  _objc_release(uVar6);
  puVar1 = PTR_PTR_1126bf000;
  _objc_alloc(PTR_PTR_1126bf000);
  puVar2 = puVar1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_11273a634;
  uVar6 = *(undefined8 *)(param_3 + lVar7);
  func_0x00010c2923e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010be069a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_3 + lVar7);
  func_0x00010bf1acc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_3 + lVar7);
  func_0x00010bf1c0a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00e760(param_1,param_2,puVar1,param_4,puVar2,uVar6,lVar3,uVar4,uVar5,3,1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(uVar6);
  _objc_release(puVar2);
  param_3 = param_3 + _DAT_11273a66c;
  _objc_loadWeakRetained(param_3);
  lVar3 = param_3;
  func_0x00010bf230c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105f1a714; end: 105f1a81b; -[SCMapDropsEntryPoint _dropName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f1a714(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_11273a634;
  lVar1 = *(long *)(param_1 + lVar6);
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x0001068750ac();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  if (lVar2 == 0) {
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar5,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010901e6c8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar5,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
  }
  _objc_release(uVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105f1a81c; end: 105f1a98f; -[SCMapDropsEntryPoint _setupAppTriggerObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f1a81c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  lVar1 = param_1 + _DAT_11273a65c;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf06540();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126c5f08);
  lVar5 = lVar4;
  func_0x00010c27c040();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  lVar6 = lVar5;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + _DAT_11273a670);
  *(long *)(param_1 + _DAT_11273a670) = lVar6;
  _objc_release(uVar7);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105f1a990; end: 105f1aa13;  */

void FUN_105f1a990(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126c5f08;
  _objc_opt_class(PTR_PTR_1126c5f08);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be2b180();
    _objc_release(param_1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105f1aa14; end: 105f1aa7f; -[SCMapDropsEntryPoint _handleLaunchDropsTrigger:] */

void FUN_105f1aa14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x00010bf8a9e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010be18500(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar1 != 0) {
    func_0x00010be0ce80(param_1,param_2,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105f1aa80; end: 105f1ab3f; -[SCMapDropsEntryPoint _focusedDropForIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f1aa80(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11273a640;
  _os_unfair_lock_lock(param_1 + lVar3);
  lVar1 = *(long *)(param_1 + _DAT_11273a654);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + lVar3);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c07d080(lVar1);
    lVar3 = lVar1;
    func_0x00010c2b9fc0(lVar1,param_2,2,lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105f1ab40; end: 105f1ac57; -[SCMapDropsEntryPoint _exposeFocusedDropScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f1ab40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11273a664;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = param_1 + _DAT_11273a66c;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf230c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar4),param_2,lVar2);
    param_1 = param_1 + _DAT_11273a65c;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c0ba460();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010bf218e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c192140();
    _objc_release(lVar3);
    _objc_release(lVar4);
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f1ac58; end: 105f1ad07; -[SCMapDropsEntryPoint _configureChrome] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f1ac58(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273a63c);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105f1ad08; end: 105f1ad9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f1ad08(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1 + _DAT_11273a674;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0b8ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b1f10;
  func_0x00010c09e300(PTR_PTR_1126b1f10);
  func_0x00010c223900(lVar3,param_2,puVar4,0);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f1ada0; end: 105f1ae4f; -[SCMapDropsEntryPoint _resetChromeToDefaults] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f1ada0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273a63c);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105f1ae50; end: 105f1aee7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f1ae50(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1 + _DAT_11273a674;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0b8ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b1f10;
  func_0x00010beffb20(PTR_PTR_1126b1f10);
  func_0x00010c223900(lVar3,param_2,puVar4,0);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f1aee8; end: 105f1aeeb; -[SCMapDropsEntryPoint _reset] */

void FUN_105f1aee8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be926d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetChromeToDefaults_112582350);
  return;
}



/* Entry: 105f1aeec; end: 105f1af4b; -[SCMapDropsEntryPoint _displaySentNotification] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f1aeec(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105f1af4c;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + _DAT_11273a63c),param_2,&puStack_38);
  return;
}



/* Entry: 105f1af4c; end: 105f1b007;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f1af4c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126afde0;
  lVar1 = param_1;
  FUN_105f1b4b0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf54760(puVar2,param_2,lVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_11273a678;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105f1b008; end: 105f1b073; -[SCMapDropsEntryPoint didCloseDropsTray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f1b008(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273a664;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010be92150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reset_1125821f0);
    return;
  }
  return;
}



/* Entry: 105f1b074; end: 105f1b18b; -[SCMapDropsEntryPoint didSuccessfullySendDrop:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f1b074(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = (long)_DAT_11273a664;
  lVar5 = *(long *)(param_1 + lVar6);
  _objc_retain(param_3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar6));
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010be92140(param_1);
  }
  func_0x00010be04d80(param_1);
  lVar5 = param_1;
  func_0x00010bdf13a0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11273a648);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_40 = lVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c0fd040(uVar4,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  lVar7 = (long)_DAT_11273a640;
  _os_unfair_lock_lock(lVar5 + lVar7);
  lVar8 = (long)_DAT_11273a654;
  lVar6 = *(long *)(lVar5 + lVar8);
  puVar1 = puVar3;
  func_0x00010bf8aa20(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar6,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    lVar2 = lVar5;
    func_0x00010bdf13a0(lVar5,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar6);
    lVar2 = lVar6;
  }
  _objc_release(lVar6);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(lVar5 + lVar8);
  puVar1 = puVar3;
  func_0x00010bf8aa20(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar4,param_2,puVar1);
  _objc_release(puVar1);
  _os_unfair_lock_unlock(lVar5 + lVar7);
  uVar4 = *(undefined8 *)(lVar5 + _DAT_11273a63c);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_105f1b308;
  puStack_a8 = &UNK_110841f80;
  lStack_a0 = lVar5;
  lStack_98 = lVar2;
  _objc_retain(lVar2);
  func_0x00010c0f7fc0(uVar4,param_2,&puStack_c0);
  _objc_release(lStack_98);
  _objc_release(lVar2);
  _objc_release(puVar3);
  return;
}



/* Entry: 105f1b18c; end: 105f1b307; -[SCMapDropsEntryPoint didSuccessfullyHideDrop:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f1b18c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11273a640;
  _os_unfair_lock_lock(param_1 + lVar5);
  lVar6 = (long)_DAT_11273a654;
  lVar2 = *(long *)(param_1 + lVar6);
  uVar3 = param_3;
  func_0x00010bf8aa20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar1 = param_1;
    func_0x00010bdf13a0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar2);
    lVar1 = lVar2;
  }
  _objc_release(lVar2);
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  uVar3 = param_3;
  func_0x00010bf8aa20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar4,param_2,uVar3);
  _objc_release(uVar3);
  _os_unfair_lock_unlock(param_1 + lVar5);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11273a63c);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105f1b308;
  puStack_68 = &UNK_110841f80;
  lStack_60 = param_1;
  lStack_58 = lVar1;
  _objc_retain(lVar1);
  func_0x00010c0f7fc0(uVar3,param_2,&puStack_80);
  _objc_release(lStack_58);
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105f1b308; end: 105f1b31b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f1b308(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12c050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11273a648),
             PTR_s_removeDrop__112628a30,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105f1b31c; end: 105f1b36f; -[SCMapDropsEntryPoint _createPersistedDrop:] */

void FUN_105f1b31c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c07d080(param_3);
  uVar2 = param_3;
  func_0x00010c2b9fc0(param_3,param_2,1,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105f1b370; end: 105f1b4af; -[SCMapDropsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f1b370(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273a664,0);
  _objc_destroyWeak(param_1 + _DAT_11273a66c);
  _objc_destroyWeak(param_1 + _DAT_11273a674);
  _objc_destroyWeak(param_1 + _DAT_11273a680);
  _objc_destroyWeak(param_1 + _DAT_11273a638);
  _objc_destroyWeak(param_1 + _DAT_11273a678);
  _objc_destroyWeak(param_1 + _DAT_11273a62c);
  _objc_destroyWeak(param_1 + _DAT_11273a65c);
  _objc_destroyWeak(param_1 + _DAT_11273a628);
  _objc_destroyWeak(param_1 + _DAT_11273a64c);
  _objc_destroyWeak(param_1 + _DAT_11273a644);
  _objc_destroyWeak(param_1 + _DAT_11273a630);
  _objc_destroyWeak(param_1 + _DAT_11273a67c);
  _objc_storeStrong(param_1 + _DAT_11273a648,0);
  _objc_storeStrong(param_1 + _DAT_11273a654,0);
  _objc_storeStrong(param_1 + _DAT_11273a670,0);
  _objc_storeStrong(param_1 + _DAT_11273a650,0);
  _objc_storeStrong(param_1 + _DAT_11273a660,0);
  _objc_storeStrong(param_1 + _DAT_11273a668,0);
  _objc_storeStrong(param_1 + _DAT_11273a63c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273a634,0);
  return;
}



/* Entry: 105f1b4b0; end: 105f1b4c7;  */

void FUN_105f1b4b0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e31818;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e31818,
                      &PTR____CFConstantStringClassReference_110e31838,0);
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



/* Entry: 105f1b4c8; end: 105f1b5ab; -[SCMapFocusViewLoggingServiceProvider provide] */

void FUN_105f1b4c8(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126c5f10;
  _objc_alloc(PTR_PTR_1126c5f10);
  func_0x00010c013a00();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f1b5ac; end: 105f1b5eb;  */

void FUN_105f1b5ac(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be184c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105f1b5ec; end: 105f1b6e3; -[SCMapFocusViewLoggingServiceProvider _focusViewLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f1b5ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126c5f18;
  _objc_alloc(PTR_PTR_1126c5f18);
  lVar2 = param_1 + _DAT_11273a684;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11273a688;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c0b9440();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11273a68c;
  _objc_loadWeakRetained(param_1);
  lVar6 = param_1;
  func_0x00010c0b97a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff88c0(puVar1,param_2,lVar3,lVar5,lVar6);
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f1b6e4; end: 105f1b733; -[SCMapFocusViewLoggingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f1b6e4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273a68c);
  _objc_destroyWeak(param_1 + _DAT_11273a688);
  _objc_destroyWeak(param_1 + _DAT_11273a684);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273a690);
  return;
}



/* Entry: 105f1b734; end: 105f1b85b; -[SCMapFriendFocusViewLogger initWithBlizzardLogger:mapLoggingSessionInfoProvider:personLocationProvider:] */

undefined1 *
FUN_105f1b734(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ee048;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c5f20;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f3c0();
    *(long *)((long)puVar1 + 0x28) = (long)(param_1 * 1000.0);
    _objc_release(puVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 105f1b85c; end: 105f1b863; -[SCMapFriendFocusViewLogger traySessionID] */

undefined8 FUN_105f1b85c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105f1b864; end: 105f1bb5b; -[SCMapFriendFocusViewLogger logMapFriendFocusViewOpen:userIDs:targetBestFriendCount:targetFriendWithStoryCount:numFriendStoryAvailable:type:zoomLevel:directionsWalkEta:directionsDriveEta:source:sourceSessionId:] */

void FUN_105f1b864(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,ulong param_10,ulong param_11,long param_12,long param_13)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c5f28;
  _objc_alloc_init(PTR_PTR_1126c5f28);
  if (param_11 != 0) {
    func_0x00010c18e240((double)param_11,puVar1);
  }
  if (param_10 != 0) {
    func_0x00010c18e2a0((double)param_10,puVar1);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c15ffa0();
  func_0x00010c1c25a0(puVar1,param_3,uVar6);
  _objc_release(uVar2);
  func_0x00010c1cec40(puVar1,param_3,param_8);
  func_0x00010c212240(puVar1,param_3,param_6);
  func_0x00010c2123a0(puVar1,param_3,param_4);
  func_0x00010c2123e0(puVar1,param_3,param_7);
  uVar6 = param_5;
  func_0x00010bf446e0(param_5,param_3,&PTR____CFConstantStringClassReference_110dbdd98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212600(puVar1,param_3,uVar6);
  _objc_release(uVar6);
  func_0x00010c219fc0(puVar1,param_3,*(undefined8 *)(param_2 + 0x28));
  func_0x00010c227be0(param_1,puVar1);
  if (param_12 - 1U < 0x12) {
    uVar6 = *(undefined8 *)(&UNK_10ddd1800 + (param_12 - 1U) * 8);
  }
  else {
    uVar6 = 0x7c;
  }
  func_0x00010c206c40(puVar1,param_3,uVar6);
  if ((param_12 == 0xd) && (param_13 != 0)) {
    func_0x00010c1c2020(puVar1);
  }
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_5;
  func_0x00010bfb1920(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c0fa580(uVar3,param_3,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar3);
  uVar6 = uVar2;
  func_0x00010c118b00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e5000(puVar1,param_3,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar6);
  if (param_9 == 1) {
    uVar6 = 1;
  }
  else if (param_9 == 0) {
    uVar6 = uVar2;
    func_0x00010c0fa5e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c253880();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0dab60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cd8e0(puVar1,param_3,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar6);
    uVar6 = 0;
  }
  else {
    uVar6 = 0xffffffffffffffff;
  }
  func_0x00010c21acc0(puVar1,param_3,uVar6);
  uVar6 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105f1bb5c; end: 105f1bc17; -[SCMapFriendFocusViewLogger logMapFriendFocusViewClose:viewTimeSec:] */

void FUN_105f1bb5c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c5f30;
  _objc_alloc_init(PTR_PTR_1126c5f30);
  func_0x00010c198340();
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c15ffa0();
  func_0x00010c1c25a0(puVar1,param_3,uVar3);
  _objc_release(uVar2);
  func_0x00010c219fc0(puVar1,param_3,*(undefined8 *)(param_2 + 0x28));
  func_0x00010c222d20(param_1,puVar1);
  uVar3 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f1bc18; end: 105f1bdbf; -[SCMapFriendFocusViewLogger logMapFriendFocusViewAction:subAction:targetGhostUserIds:isBestFriend:numFriendStoryAvailable:type:section:isClustered:] */

void FUN_105f1bc18(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  ulong param_9,undefined1 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c5f38;
  _objc_retain(param_5);
  _objc_alloc_init(puVar1);
  if (param_3 < 0xf) {
    uVar3 = *(undefined8 *)(&UNK_10ddd1890 + param_3 * 8);
  }
  else {
    uVar3 = 0xffffffffffffffff;
  }
  func_0x00010c161620(puVar1,param_2,uVar3);
  func_0x00010c1af880(puVar1,param_2,param_6);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c15ffa0();
  func_0x00010c1c25a0(puVar1,param_2,uVar3);
  _objc_release(uVar2);
  func_0x00010c1cec40(puVar1,param_2,param_7);
  if (param_9 < 4) {
    uVar3 = *(undefined8 *)(&UNK_10ddd1908 + param_9 * 8);
  }
  else {
    uVar3 = 0xffffffffffffffff;
  }
  func_0x00010c1f9160(puVar1,param_2,uVar3);
  FUN_105f1bdc0(param_4);
  func_0x00010c20ec00(puVar1,param_2,param_4);
  uVar3 = param_5;
  func_0x00010bf446e0(param_5,param_2,&PTR____CFConstantStringClassReference_110dbdd98);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c212600(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  func_0x00010c219fc0(puVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  uVar3 = 1;
  if (param_8 != 1) {
    uVar3 = 0xffffffffffffffff;
  }
  uVar2 = 0;
  if (param_8 != 0) {
    uVar2 = uVar3;
  }
  func_0x00010c21acc0(puVar1,param_2,uVar2);
  func_0x00010c1b0060(puVar1,param_2,param_10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f1bdc0; end: 105f1bde3;  */

undefined8 FUN_105f1bdc0(long param_1)

{
  if (param_1 - 1U < 7) {
    return *(undefined8 *)(&UNK_10ddd1928 + (param_1 - 1U) * 8);
  }
  return 0xffffffffffffffff;
}



/* Entry: 105f1bde4; end: 105f1c003; -[SCMapFriendFocusViewLogger logReactionWithFriendID:isBestFriend:numFriendStoryAvailable:reactionIndex:reactionName:isBitmojiReaction:isClustered:] */

void FUN_105f1bde4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 in_x6;
  int in_w7;
  
  puVar1 = PTR_PTR_1126c5f38;
  _objc_retain(in_x6);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c161620();
  func_0x00010c1af880(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15ffa0();
  func_0x00010c1c25a0(puVar1);
  _objc_release(uVar2);
  func_0x00010c1cec40(puVar1);
  func_0x00010c1f9160(puVar1);
  uVar2 = 6;
  if (in_w7 != 0) {
    uVar2 = 7;
  }
  FUN_105f1bdc0(uVar2);
  func_0x00010c20ec00(puVar1);
  func_0x00010c212600(puVar1);
  func_0x00010c219fc0(puVar1);
  func_0x00010c21acc0(puVar1);
  func_0x00010c1b0060(puVar1);
  func_0x00010c1e7cc0(puVar1);
  _objc_release(in_x6);
  func_0x00010c1e7c40(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126c5f40;
  _objc_alloc_init(PTR_PTR_1126c5f40);
  func_0x00010c16f140();
  func_0x00010c16f180(puVar3);
  func_0x00010c212400(puVar3);
  _objc_release(param_3);
  func_0x00010c206c40(puVar3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  FUN_105f1c48c(uVar2,puVar4,1);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f1c004; end: 105f1c00f; -[SCMapFriendFocusViewLogger logReactionSent] */

void FUN_105f1c004(long param_1)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 0x20) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1108f9090,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105f1c010; end: 105f1c07b; -[SCMapFriendFocusViewLogger logReactionBannerTapped] */

void FUN_105f1c010(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf9a1e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b87e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar3 = *(long **)(*(long *)(param_1 + 0x20) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_1108f8fa0,&uStack_40,1);
    func_0x00010007e5dc(&stack0xffffffffffffffd8);
  }
  return;
}



/* Entry: 105f1c07c; end: 105f1c0e7; -[SCMapFriendFocusViewLogger logReactionBannerUndo] */

void FUN_105f1c07c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf9a1e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b87e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar3 = *(long **)(*(long *)(param_1 + 0x20) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_1108f8ff0,&uStack_40,1);
    func_0x00010007e5dc(&stack0xffffffffffffffd8);
  }
  return;
}



/* Entry: 105f1c0e8; end: 105f1c0f3; -[SCMapFriendFocusViewLogger logEmojiPickerLaunched] */

void FUN_105f1c0e8(long param_1)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 0x20) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1108f8f00,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105f1c0f4; end: 105f1c0ff; -[SCMapFriendFocusViewLogger logEmojiPickerSelection] */

void FUN_105f1c0f4(long param_1)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 0x20) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1108f8f50,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105f1c100; end: 105f1c1ef; -[SCMapFriendFocusViewLogger logMapSnapshotTapWithTargetGhostUserIds:] */

void FUN_105f1c100(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c5f38;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c161620();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c15ffa0();
  func_0x00010c1c25a0(puVar1,param_2,uVar3);
  _objc_release(uVar2);
  uVar3 = param_3;
  func_0x00010bf446e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dbdd98);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c212600(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  func_0x00010c219fc0(puVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x00010c1b0060(puVar1,param_2,1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f1c1f0; end: 105f1c237; -[SCMapFriendFocusViewLogger .cxx_destruct] */

void FUN_105f1c1f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f1c238; end: 105f1c2ab; -[SCGrapheneMapReactionsMetric2 init] */

undefined1 * FUN_105f1c238(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ee050;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105f1c2ac; end: 105f1c323;  */

void FUN_105f1c2ac(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108f8f00,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105f1c324; end: 105f1c39b;  */

void FUN_105f1c324(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108f8f50,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105f1c39c; end: 105f1c413;  */

void FUN_105f1c39c(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108f8fa0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105f1c414; end: 105f1c48b;  */

void FUN_105f1c414(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108f8ff0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105f1c48c; end: 105f1c5ff;  */

void FUN_105f1c48c(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f34ef30;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_1108f9040;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1108f9040,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_105f1c600;
  if (puVar3 != (undefined *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_a0 = puVar2;
    puStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_1108f9090,&uStack_c0,puVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 105f1c600; end: 105f1c677;  */

void FUN_105f1c600(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108f9090,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105f1c678; end: 105f1c86b; -[SCMapFriendFocusViewScope _initWithDelegate:type:mapPersonId:pet:operaPresentingController:cameraRestorationBlock:isSelfInCluster:zoomLevel:focusViewSource:shouldHideCloseButton:reactions:reactionImages:sourceSessionId:isInitialDestination:] */

undefined8 *
FUN_105f1c678(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
             undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined1 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  puStack_78 = PTR_PTR_1126ee058;
  puVar1 = &uStack_80;
  uStack_80 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 2,param_4);
    puVar1[3] = param_5;
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 7,param_8);
    uVar2 = param_9;
    _objc_retainBlock();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_10;
    puVar1[8] = param_1;
    puVar1[9] = param_12;
    *(undefined1 *)((long)puVar1 + 9) = param_13;
    _objc_retain(param_15);
    uVar2 = puVar1[10];
    puVar1[10] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_17;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 10) = param_18;
  }
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 105f1c86c; end: 105f1c8cb; -[SCMapFriendFocusViewScope initWithDelegate:mapPersonId:operaPresentingController:cameraRestorationBlock:isSelfInCluster:zoomLevel:focusViewSource:shouldHideCloseButton:reactions:reactionImages:sourceSessionId:isInitialDestination:] */

void FUN_105f1c86c(void)

{
  func_0x00010be3abc0();
  return;
}



/* Entry: 105f1c8cc; end: 105f1c927; -[SCMapFriendFocusViewScope initWithDelegate:pet:operaPresentingController:cameraRestorationBlock:zoomLevel:focusViewSource:shouldHideCloseButton:sourceSessionId:isInitialDestination:] */

void FUN_105f1c8cc(void)

{
  func_0x00010be3abc0();
  return;
}



/* Entry: 105f1c928; end: 105f1c93f; -[SCMapFriendFocusViewScope delegate] */

void FUN_105f1c928(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f1c940; end: 105f1c947; -[SCMapFriendFocusViewScope type] */

undefined8 FUN_105f1c940(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105f1c948; end: 105f1c94f; -[SCMapFriendFocusViewScope mapPersonId] */

undefined8 FUN_105f1c948(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105f1c950; end: 105f1c957; -[SCMapFriendFocusViewScope pet] */

undefined8 FUN_105f1c950(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105f1c958; end: 105f1c95f; -[SCMapFriendFocusViewScope cameraRestorationBlock] */

undefined8 FUN_105f1c958(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105f1c960; end: 105f1c977; -[SCMapFriendFocusViewScope operaPresentingController] */

void FUN_105f1c960(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f1c978; end: 105f1c97f; -[SCMapFriendFocusViewScope isSelfInCluster] */

undefined1 FUN_105f1c978(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105f1c980; end: 105f1c987; -[SCMapFriendFocusViewScope zoomLevel] */

undefined8 FUN_105f1c980(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105f1c988; end: 105f1c98f; -[SCMapFriendFocusViewScope focusViewSource] */

undefined8 FUN_105f1c988(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105f1c990; end: 105f1c997; -[SCMapFriendFocusViewScope shouldHideCloseButton] */

undefined1 FUN_105f1c990(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 105f1c998; end: 105f1c99f; -[SCMapFriendFocusViewScope reactions] */

undefined8 FUN_105f1c998(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 105f1c9a0; end: 105f1c9a7; -[SCMapFriendFocusViewScope reactionImages] */

undefined8 FUN_105f1c9a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 105f1c9a8; end: 105f1c9af; -[SCMapFriendFocusViewScope sourceSessionId] */

undefined8 FUN_105f1c9a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 105f1c9b0; end: 105f1c9b7; -[SCMapFriendFocusViewScope isInitialDestination] */

undefined1 FUN_105f1c9b0(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 105f1c9b8; end: 105f1ca27; -[SCMapFriendFocusViewScope .cxx_destruct] */

void FUN_105f1c9b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 105f1ca28; end: 105f1cabf; -[SCSimplePitchConsolidator initWithAutomaticPitchStartZoom:startPitch:endZoom:endPitch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f1ca28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ee060;
  uStack_40 = param_5;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initInternal_1125d9558);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11273a6fc) = param_1;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11273a700) = param_3;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11273a704) = param_2;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11273a708) = param_4;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11273a70c) =
         *(undefined8 *)((long)puVar1 + (long)_DAT_11273a704);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11273a710) =
         *(undefined8 *)((long)puVar1 + (long)_DAT_11273a6fc);
  }
  return;
}



/* Entry: 105f1cac0; end: 105f1cb67; -[SCSimplePitchConsolidator consolidatedPitchForZoomLevel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_105f1cac0(double param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar9 = *(double *)(param_2 + _DAT_11273a70c);
  dVar8 = *(double *)(param_2 + _DAT_11273a708);
  if (dVar8 < dVar9) {
    return dVar9;
  }
  dVar10 = *(double *)(param_2 + _DAT_11273a710);
  dVar7 = dVar9;
  if (dVar9 <= *(double *)(param_2 + _DAT_11273a704)) {
    dVar5 = *(double *)(param_2 + _DAT_11273a700);
    dVar4 = *(double *)(param_2 + _DAT_11273a6fc);
    if (*(double *)(param_2 + _DAT_11273a6fc) < dVar10) {
      bVar1 = false;
      bVar2 = true;
      if (dVar10 < param_1) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(dVar10) && !NAN(dVar5)) {
          bVar1 = dVar10 == dVar5;
          bVar2 = dVar5 <= dVar10;
        }
      }
      dVar4 = dVar10;
      if (bVar2 && !bVar1) {
        return dVar9;
      }
    }
  }
  else {
    dVar5 = *(double *)(param_2 + _DAT_11273a700);
    dVar3 = *(double *)(param_2 + _DAT_11273a6fc);
    dVar6 = dVar5;
    if ((dVar5 <= dVar10) ||
       ((dVar4 = dVar3, dVar3 < dVar10 && (dVar4 = dVar10, dVar6 = dVar10, param_1 < dVar10)))) {
      dVar4 = dVar3;
      dVar5 = dVar6;
      dVar7 = *(double *)(param_2 + _DAT_11273a704);
      dVar8 = dVar9;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010be3d530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,dVar4,dVar5,dVar7,dVar8,param_2,
             PTR_s__interpolatedPitchForZoom_withSt_11256cee8);
  return param_1;
}



/* Entry: 105f1cb68; end: 105f1cb8f; -[SCSimplePitchConsolidator _interpolatedPitchForZoom:withStartZoom:endZoom:startPitch:endPitch:] */

double FUN_105f1cb68(double param_1,double param_2,double param_3,double param_4,double param_5)

{
  double dVar1;
  
  dVar1 = (param_1 - param_2) / (param_3 - param_2);
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  dVar1 = (double)NEON_fminnm(dVar1,0x3ff0000000000000);
  return param_4 + (param_5 - param_4) * dVar1;
}



/* Entry: 105f1cb90; end: 105f1cbbb; -[SCSimplePitchConsolidator resetCustomZoomAndPitch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f1cb90(long param_1)

{
  *(undefined8 *)(param_1 + _DAT_11273a710) = *(undefined8 *)(param_1 + _DAT_11273a6fc);
  *(undefined8 *)(param_1 + _DAT_11273a70c) = *(undefined8 *)(param_1 + _DAT_11273a704);
  return;
}



/* Entry: 105f1cbbc; end: 105f1cbd7; -[SCSimplePitchConsolidator setCustomPitch:customZoom:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f1cbbc(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + _DAT_11273a710) = param_2;
  *(undefined8 *)(param_3 + _DAT_11273a70c) = param_1;
  return;
}



/* Entry: 105f1cbd8; end: 105f1cbe7; -[SCSimplePitchConsolidator setCustomZoom:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f1cbd8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11273a710) = param_1;
  return;
}



/* Entry: 105f1cbe8; end: 105f1cbf7; -[SCSimplePitchConsolidator setCustomPitch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f1cbe8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11273a70c) = param_1;
  return;
}


