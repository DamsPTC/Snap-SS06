/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1054d9c54; end: 1054d9d7b; -[SCAdaptiveContentFetcher setItems:] */

void FUN_1054d9c54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_alloc();
  func_0x00010c01bf20();
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1054d9d7c;
  puStack_58 = &UNK_110848218;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uStack_50 = param_3;
  _objc_retain(puVar1);
  puStack_48 = puVar1;
  func_0x000100a0df38(uVar3,&puStack_70);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1054d9d7c; end: 1054d9db7;  */

void FUN_1054d9d7c(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea5000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054d9db8; end: 1054d9ea3; -[SCAdaptiveContentFetcher setVisibleIndicesWithStartIndex:endIndex:selectedIndexList:] */

void FUN_1054d9db8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1054d9ea4;
  puStack_70 = &UNK_11084d6b8;
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_58 = param_3;
  uStack_50 = param_4;
  _objc_retain(param_5);
  uStack_68 = param_5;
  func_0x000100a0df38(uVar1,&puStack_88);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  return;
}



/* Entry: 1054d9ea4; end: 1054d9edf;  */

void FUN_1054d9ea4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010beaa2a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054d9ee0; end: 1054da0db; -[SCAdaptiveContentFetcher _loadConfig:] */

void FUN_1054d9ee0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x30));
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126af7d0;
  _objc_opt_new(PTR_PTR_1126af7d0);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf63640(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160(puVar3,param_2,uVar2);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c1195e0(uVar4,param_2,*(undefined8 *)(param_1 + 0x38),puVar3,
                      *(undefined8 *)(param_1 + 0x48));
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b9f30;
  _objc_alloc();
  uVar2 = uVar4;
  func_0x00010c296d80(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lStack_58 = 0;
  func_0x00010c008360(puVar5,param_2,uVar2,&lStack_58);
  lVar1 = lStack_58;
  _objc_retain(lStack_58);
  _objc_release(uVar2);
  puVar7 = puVar5;
  if (lVar1 != 0) {
    puVar7 = *(undefined **)(param_1 + 0x40);
  }
  _objc_retain(puVar7);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar7;
  _objc_release(uVar2);
  uVar6 = *(ulong *)(param_1 + 0x10);
  func_0x00010bf69f20();
  *(ulong *)(param_1 + 0x90) = uVar6 & 0xffffffff;
  puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0c4700(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1054da0dc;
  puStack_68 = &UNK_110891210;
  _objc_retain(puVar7);
  puStack_60 = puVar7;
  func_0x00010bf97d40(uVar2,param_2,&puStack_80);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  *(undefined **)(param_1 + 0x88) = puVar7;
  _objc_retain(puVar7);
  _objc_release(uVar2);
  _objc_release(puStack_60);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(lVar1);
  _objc_release(puVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 1054da0dc; end: 1054da153;  */

void FUN_1054da0dc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1054da154; end: 1054da247; -[SCAdaptiveContentFetcher _initCollections] */

void FUN_1054da154(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  *(undefined **)(param_1 + 0x58) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  *(undefined **)(param_1 + 0x80) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  *(undefined **)(param_1 + 0x98) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined **)(param_1 + 0xa0) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined **)(param_1 + 0xb0) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 200);
  *(undefined **)(param_1 + 200) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined **)(param_1 + 0xb8) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined **)(param_1 + 0xc0) = puVar1;
  _objc_release(uVar2);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}



/* Entry: 1054da248; end: 1054da55b; -[SCAdaptiveContentFetcher _setItems:setItemsPromise:resolveNewAssetsPromise:itemIdForNewAssets:] */

void FUN_1054da248(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x30));
  puVar2 = PTR_PTR_1126b9f38;
  func_0x00010c082b80();
  if ((int)puVar2 == 0) goto LAB_1054da4e4;
  lVar3 = *(long *)(param_1 + 0x58);
  func_0x00010bf529e0();
  lVar9 = param_3;
  func_0x00010bf529e0();
  lVar4 = *(long *)(param_1 + 0x58);
  func_0x00010bf529e0();
  if (lVar4 != 0) {
    func_0x00010be2b020(param_1);
  }
  lVar4 = param_3;
  func_0x00010bf51e00();
  uVar11 = *(undefined8 *)(param_1 + 0x58);
  *(long *)(param_1 + 0x58) = lVar4;
  _objc_release(uVar11);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar5 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c0d3c80();
  uVar11 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(puVar2);
  _objc_retain(uVar5);
  func_0x00010bf97e80(uVar11);
  puVar6 = puVar2;
  func_0x00010bf51e00();
  uVar11 = *(undefined8 *)(param_1 + 0x80);
  *(undefined **)(param_1 + 0x80) = puVar6;
  _objc_release(uVar11);
  uVar11 = uVar5;
  func_0x00010bf51e00();
  uVar12 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = uVar11;
  _objc_release(uVar12);
  lVar7 = *(long *)(param_1 + 0x88);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar7;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar7);
      }
      uVar8 = *(ulong *)(lVar13 * 8);
      uVar14 = *(ulong *)(param_1 + 0x90);
      func_0x00010c2827c0();
      if (uVar14 <= uVar8) {
        uVar14 = uVar8;
      }
      *(ulong *)(param_1 + 0x90) = uVar14;
      lVar13 = lVar13 + 1;
    } while (lVar4 != lVar13);
    lVar4 = lVar7;
    func_0x00010bf52a60();
  }
  _objc_release(lVar7);
  if (lVar3 == lVar9) {
    if (*(long *)(param_1 + 0x60) + *(long *)(param_1 + 0x68) == 0) {
      lVar9 = *(long *)(param_1 + 0x70);
      func_0x00010bf529e0();
      if (lVar9 == 0) goto joined_r0x0001054da49c;
    }
    func_0x00010beaa2a0(param_1);
  }
  else {
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
joined_r0x0001054da49c:
  if (param_4 != 0) {
    func_0x00010bde3320(param_1);
  }
  if ((param_5 != 0) && (param_6 != 0)) {
    func_0x00010bde3240(param_1);
  }
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release(uVar5);
  _objc_release(puVar2);
LAB_1054da4e4:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_retain(param_2);
    func_0x00010c0df840(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_3 + 0x20);
    uVar11 = param_2;
    func_0x00010c0844e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar5);
    _objc_release(uVar11);
    _objc_release(puVar2);
    uVar11 = param_2;
    func_0x00010c129e20(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    uVar5 = *(undefined8 *)(param_3 + 0x28);
    _objc_retain(uVar5);
    func_0x00010bf97e80(uVar11);
    _objc_release(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar5);
    return;
  }
  return;
}



/* Entry: 1054da55c; end: 1054da66b;  */

void FUN_1054da55c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_2);
  func_0x00010c0df840(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x00010c0844e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_2;
  func_0x00010c129e20(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  func_0x00010bf97e80(uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1054da66c; end: 1054da7d3;  */

void FUN_1054da66c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar6 = *(long *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010bf4c4e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4c8a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c46a0();
  func_0x00010c0df780(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar6 == 0) {
    func_0x00010bf69f20(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10));
    func_0x00010c0df820(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = param_2;
    func_0x00010bf4c4e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf4c8a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c46a0();
    func_0x00010c0df780(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar5);
    _objc_release(puVar4);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054da7d4; end: 1054da9ef; -[SCAdaptiveContentFetcher _completeSetItemsPromise:] */

void FUN_1054da7d4(long param_1,undefined8 param_2,undefined *param_3,undefined1 *param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_3;
  _objc_retain(param_3);
  if (param_3 != (undefined *)0x0) {
    func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x30));
    _os_unfair_lock_lock(param_1 + 0xd0);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    lVar8 = *(long *)(param_1 + 0x58);
    _objc_retain(lVar8);
    param_4 = auStack_f0;
    lVar3 = lVar8;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar8);
        }
        uVar10 = *(undefined8 *)(lVar7 * 8);
        uVar9 = *(undefined8 *)(param_1 + 0xb0);
        uVar4 = uVar10;
        func_0x00010c0844e0();
        _objc_retainAutoreleasedReturnValue();
        FUN_1054d96b4(uVar9,uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar9;
        func_0x00010bfbc3e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0844e0(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(uVar10);
        _objc_release(uVar5);
        _objc_release(uVar9);
        _objc_release(uVar4);
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      param_4 = auStack_f0;
      lVar3 = lVar8;
      func_0x00010bf52a60();
    }
    _objc_release(lVar8);
    _objc_retain(puVar2);
    uVar4 = *(undefined8 *)(param_1 + 0xa8);
    *(undefined **)(param_1 + 0xa8) = puVar2;
    _objc_release(uVar4);
    puVar6 = puVar2;
    func_0x00010bf43d60(param_3);
    _objc_release(puVar2);
    _os_unfair_lock_unlock(param_1 + 0xd0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0xd0);
  __Unwind_Resume();
  _objc_retain(puVar6);
  _objc_retain(param_4);
  if (puVar6 != (undefined *)0x0) {
    func_0x00010bf0ae40(*(undefined8 *)(param_3 + 0x30));
    _os_unfair_lock_lock(param_3 + 0xd0);
    if (*(long *)(param_3 + 0xa8) != 0) {
      uVar5 = *(undefined8 *)(param_3 + 0xb0);
      FUN_1054d96b4(uVar5,param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x00010bfbc3e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_3 + 0xa8));
      _objc_release(uVar4);
      _objc_release(uVar5);
      uVar4 = *(undefined8 *)(param_3 + 0xa8);
      func_0x00010c0e00e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43d60(puVar6);
      _objc_release(uVar4);
    }
    _os_unfair_lock_unlock(param_3 + 0xd0);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 1054da9f0; end: 1054daaeb; -[SCAdaptiveContentFetcher _completeResolveNewAssetsPromise:itemId:] */

void FUN_1054da9f0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x30));
    _os_unfair_lock_lock(param_1 + 0xd0);
    if (*(long *)(param_1 + 0xa8) != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0xb0);
      FUN_1054d96b4(uVar1,param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bfbc3e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0xa8));
      _objc_release(uVar2);
      _objc_release(uVar1);
      uVar2 = *(undefined8 *)(param_1 + 0xa8);
      func_0x00010c0e00e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43d60(param_3);
      _objc_release(uVar2);
    }
    _os_unfair_lock_unlock(param_1 + 0xd0);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1054daaec; end: 1054dae63; -[SCAdaptiveContentFetcher _handleItemUpdate:] */

void FUN_1054daaec(long param_1,ulong param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined *puVar17;
  ulong uVar18;
  undefined *puVar19;
  long lVar20;
  undefined8 uVar21;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x30));
  lVar2 = *(long *)(param_1 + 0x58);
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    _objc_retain(puVar3);
    _objc_retain(puVar5);
    _objc_retain(puVar4);
    func_0x00010bf97e80(param_3);
    lVar20 = *(long *)(param_1 + 0x58);
    _objc_retain(lVar20);
    lVar2 = lVar20;
    func_0x00010bf52a60();
    lVar14 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar16 = 0;
      do {
        if (lRam0000000000000000 != lVar14) {
          _objc_enumerationMutation(lVar20);
        }
        uVar21 = *(undefined8 *)(lVar16 * 8);
        uVar15 = uVar21;
        func_0x00010c0844e0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010bf4b900();
        if (((ulong)puVar6 & 1) == 0) {
          _objc_release(uVar15);
LAB_1054dac98:
          func_0x00010c0844e0(uVar21);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bde1020(param_1);
          _objc_release(uVar21);
        }
        else {
          uVar7 = uVar21;
          func_0x00010c0844e0(uVar21);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar4;
          func_0x00010bf4b900();
          _objc_release(uVar7);
          _objc_release(uVar15);
          if ((int)puVar6 != 0) goto LAB_1054dac98;
        }
        lVar16 = lVar16 + 1;
      } while (lVar2 != lVar16);
      lVar2 = lVar20;
      func_0x00010bf52a60();
    }
    _objc_release(lVar20);
    puVar6 = puVar5;
    func_0x00010bf529e0();
    if (puVar6 != (undefined *)0x0) {
      _os_unfair_lock_lock(param_1 + 0xd0);
      _objc_retain(puVar5);
      puVar6 = puVar5;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (puVar6 != (undefined *)0x0) {
        puVar17 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(puVar5);
          }
          iVar1 = (int)*(undefined8 *)(param_1 + 200);
          func_0x00010bf4b900();
          if (iVar1 != 0) {
            func_0x00010c1d0640(*(undefined8 *)(param_1 + 0xb0));
            func_0x00010c12d360(*(undefined8 *)(param_1 + 200));
          }
          puVar17 = puVar17 + 1;
        } while (puVar6 != puVar17);
        puVar6 = puVar5;
        func_0x00010bf52a60();
      }
      _objc_release(puVar5);
      _os_unfair_lock_unlock(param_1 + 0xd0);
    }
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0xd0);
  __Unwind_Resume();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = param_2;
  _objc_retain(param_2);
  uVar15 = *(undefined8 *)(param_3 + 0x20);
  uVar8 = param_2;
  func_0x00010c0844e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar15);
  _objc_release(uVar8);
  lVar2 = *(long *)(*(long *)(param_3 + 0x28) + 0x80);
  uVar8 = param_2;
  func_0x00010c0844e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  if (lVar2 != 0) {
    uVar18 = *(ulong *)(*(long *)(param_3 + 0x28) + 0x58);
    func_0x00010c067ec0(lVar2);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_2;
    func_0x00010c129e20();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar9;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    uVar9 = uVar18;
    func_0x00010c129e20(uVar18);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    uVar11 = uVar8;
    uVar9 = uVar10;
    func_0x00010b0ee940(uVar8,uVar10);
    if ((uVar11 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c225c20();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c225c20();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf529e0();
      puVar17 = puVar4;
      func_0x00010bf529e0();
      _objc_retain(puVar5);
      puVar3 = puVar5;
      func_0x00010bf52a60();
      lVar14 = lRam0000000000000000;
      while (puVar3 != (undefined *)0x0) {
        puVar19 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar14) {
            _objc_enumerationMutation(puVar5);
          }
          puVar12 = puVar4;
          func_0x00010bf4b900();
          if ((int)puVar12 == 0) {
            _objc_release(puVar5);
            goto LAB_1054db0b0;
          }
          puVar19 = puVar19 + 1;
        } while (puVar3 != puVar19);
        puVar3 = puVar5;
        func_0x00010bf52a60();
      }
      _objc_release(puVar5);
      if (puVar6 < puVar17) {
        lVar14 = 0x30;
      }
      else {
LAB_1054db0b0:
        lVar14 = 0x38;
      }
      uVar15 = *(undefined8 *)(param_3 + lVar14);
      uVar11 = uVar18;
      func_0x00010c0844e0(uVar18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar15);
      _objc_release(uVar11);
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    _objc_release(uVar10);
    _objc_release(uVar8);
    _objc_release(uVar18);
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf4c4e0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010bf4c8a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 1054dae64; end: 1054db157;  */

void FUN_1054dae64(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  undefined *puVar16;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_2;
  _objc_retain(param_2);
  uVar13 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c0844e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar13);
  _objc_release(uVar1);
  lVar14 = *(long *)(*(long *)(param_1 + 0x28) + 0x80);
  uVar1 = param_2;
  func_0x00010c0844e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar14 != 0) {
    uVar15 = *(ulong *)(*(long *)(param_1 + 0x28) + 0x58);
    func_0x00010c067ec0(lVar14);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010c129e20();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar15;
    func_0x00010c129e20(uVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar4 = uVar1;
    uVar2 = uVar3;
    func_0x00010b0ee940(uVar1,uVar3);
    if ((uVar4 & 1) == 0) {
      puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c225c20();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c225c20();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bf529e0();
      puVar8 = puVar5;
      func_0x00010bf529e0();
      _objc_retain(puVar6);
      puVar9 = puVar6;
      func_0x00010bf52a60();
      lVar12 = lRam0000000000000000;
      while (puVar9 != (undefined *)0x0) {
        puVar16 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar12) {
            _objc_enumerationMutation(puVar6);
          }
          puVar10 = puVar5;
          func_0x00010bf4b900();
          if ((int)puVar10 == 0) {
            _objc_release(puVar6);
            goto LAB_1054db0b0;
          }
          puVar16 = puVar16 + 1;
        } while (puVar9 != puVar16);
        puVar9 = puVar6;
        func_0x00010bf52a60();
      }
      _objc_release(puVar6);
      if (puVar7 < puVar8) {
        lVar12 = 0x30;
      }
      else {
LAB_1054db0b0:
        lVar12 = 0x38;
      }
      uVar13 = *(undefined8 *)(param_1 + lVar12);
      uVar4 = uVar15;
      func_0x00010c0844e0(uVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar13);
      _objc_release(uVar4);
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar15);
  }
  _objc_release(lVar14);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf4c4e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf4c8a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054db158; end: 1054db1e7;  */

void FUN_1054db158(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf4c4e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf4c8a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054db1e8; end: 1054db87f; -[SCAdaptiveContentFetcher _setVisibleIndicesWithStartIndex:endIndex:selectedIndexList:enableDebounce:] */

void FUN_1054db1e8(double param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 *param_6,int param_7)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined *puVar22;
  long lVar23;
  double dVar24;
  long lStack_318;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  func_0x00010bf0ae40(*(undefined8 *)(param_2 + 0x30));
  if (param_7 != 0) {
    _CACurrentMediaTime();
    dVar24 = param_1 - *(double *)(param_2 + 0x78);
    uVar1 = *(ulong *)(param_2 + 0x10);
    func_0x00010c1ac1a0();
    param_1 = (double)(uVar1 & 0xffffffff);
    if (((dVar24 * 1000.0 <= param_1) && (*(long *)(param_2 + 0x60) == param_4)) &&
       (*(long *)(param_2 + 0x68) == param_5)) {
      uVar1 = *(ulong *)(param_2 + 0x70);
      puVar16 = param_6;
      func_0x00010c071b60();
      if ((uVar1 & 1) != 0) goto LAB_1054db838;
    }
  }
  _CACurrentMediaTime();
  *(double *)(param_2 + 0x78) = param_1;
  puVar2 = *(undefined8 **)(param_2 + 0x58);
  FUN_1054dee04(puVar2,param_4,param_5,param_6,*(undefined8 *)(param_2 + 0x90));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  puVar16 = puVar2;
  func_0x00010bdce6e0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x60) = param_4;
  *(long *)(param_2 + 0x68) = param_5;
  puVar4 = param_6;
  func_0x00010bf51e00();
  uVar17 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 **)(param_2 + 0x70) = puVar4;
  _objc_release(uVar17);
  lVar5 = lVar3;
  func_0x00010bf529e0();
  if (lVar5 != 0) {
    lVar5 = *(long *)(param_2 + 0x88);
    func_0x00010c0d3c80();
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    plStack_230 = (long *)0x0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    _objc_retain(lVar3);
    puVar16 = &uStack_240;
    lStack_318 = lVar3;
    func_0x00010bf52a60();
    if (lStack_318 != 0) {
      lVar18 = *plStack_230;
      do {
        lVar19 = 0;
        do {
          if (*plStack_230 != lVar18) {
            _objc_enumerationMutation(lVar3);
          }
          lVar20 = *(long *)(param_2 + 0x58);
          uVar17 = *(undefined8 *)(param_2 + 0x80);
          func_0x00010c0e00e0(uVar17);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2827c0();
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar17);
          if (*(long *)(param_2 + 0x70) != 0) {
            uVar17 = *(undefined8 *)(param_2 + 0x80);
            func_0x00010c0e00e0(uVar17);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf4b900();
            _objc_release(uVar17);
          }
          puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
          _objc_opt_new();
          lVar7 = lVar20;
          func_0x00010c129e20();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar7;
          func_0x00010bf52a60();
          lVar14 = lRam0000000000000000;
          while (lVar8 != 0) {
            lVar23 = 0;
            do {
              if (lRam0000000000000000 != lVar14) {
                _objc_enumerationMutation(lVar7);
              }
              puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              uVar21 = *(undefined8 *)(lVar23 * 8);
              uVar17 = uVar21;
              func_0x00010bf4c4e0(uVar21);
              _objc_retainAutoreleasedReturnValue();
              uVar9 = uVar17;
              func_0x00010bf4c8a0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0c46a0();
              func_0x00010c0df780(puVar10);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar9);
              _objc_release(uVar17);
              lVar11 = lVar5;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              if (lVar11 != 0) {
                lVar12 = lVar5;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                lVar13 = lVar12;
                func_0x00010c067ec0();
                _objc_release(lVar12);
                _objc_release(lVar11);
                if (0 < (int)lVar13) {
                  lVar12 = *(long *)(param_2 + 0xa0);
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  uVar17 = uVar21;
                  func_0x00010bf4c4e0(uVar21);
                  _objc_retainAutoreleasedReturnValue();
                  uVar9 = uVar17;
                  func_0x00010bf4c8a0();
                  _objc_retainAutoreleasedReturnValue();
                  lVar11 = lVar12;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  _objc_release(uVar9);
                  _objc_release(uVar17);
                  _objc_release(lVar12);
                  if (lVar11 != 0) {
                    lVar13 = *(long *)(param_2 + 0xa0);
                    func_0x00010c0e00e0();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bf4c4e0(uVar21);
                    _objc_retainAutoreleasedReturnValue();
                    uVar17 = uVar21;
                    func_0x00010bf4c8a0();
                    _objc_retainAutoreleasedReturnValue();
                    lVar11 = lVar13;
                    func_0x00010c0e00e0();
                    _objc_retainAutoreleasedReturnValue();
                    lVar12 = lVar11;
                    func_0x00010bfcaaa0();
                    _objc_release(lVar11);
                    _objc_release(uVar17);
                    _objc_release(uVar21);
                    _objc_release(lVar13);
                    if (lVar12 == 0) goto LAB_1054db678;
                  }
                  func_0x00010bec6340(param_2);
                  func_0x00010befa120(puVar6);
                }
              }
LAB_1054db678:
              _objc_release(puVar10);
              lVar23 = lVar23 + 1;
            } while (lVar8 != lVar23);
            lVar8 = lVar7;
            func_0x00010bf52a60();
          }
          _objc_release(lVar7);
          _objc_retain(puVar6);
          puVar10 = puVar6;
          func_0x00010bf52a60();
          lVar8 = lRam0000000000000000;
          while (puVar10 != (undefined *)0x0) {
            puVar22 = (undefined *)0x0;
            do {
              if (lRam0000000000000000 != lVar8) {
                _objc_enumerationMutation(puVar6);
              }
              lVar14 = lVar5;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              if (lVar14 != 0) {
                lVar14 = lVar5;
                func_0x00010c0e00e0(lVar5);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c067ec0();
                func_0x00010c0df760(puVar15);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(lVar5);
                _objc_release(puVar15);
                _objc_release(lVar14);
              }
              puVar22 = puVar22 + 1;
            } while (puVar10 != puVar22);
            puVar10 = puVar6;
            func_0x00010bf52a60();
          }
          _objc_release(puVar6);
          _objc_release(puVar6);
          _objc_release(lVar20);
          lVar19 = lVar19 + 1;
        } while (lVar19 != lStack_318);
        puVar16 = &uStack_240;
        lStack_318 = lVar3;
        func_0x00010bf52a60();
      } while (lStack_318 != 0);
    }
    _objc_release(lVar3);
    _objc_release(lVar5);
  }
  _objc_release(lVar3);
  _objc_release(puVar2);
LAB_1054db838:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf0ae40(param_6[6]);
  param_6[10] = puVar16;
                    /* WARNING: Could not recover jumptable at 0x00010beaa2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_6,PTR_s__setVisibleIndicesWithStartIndex_112588250,param_6[0xc],param_6[0xd],
             param_6[0xe],0);
  return;
}



/* Entry: 1054db880; end: 1054db8bb; -[SCAdaptiveContentFetcher _setFeatureState:] */

void FUN_1054db880(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x30));
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010beaa2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setVisibleIndicesWithStartIndex_112588250,
             *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
             *(undefined8 *)(param_1 + 0x70),0);
  return;
}



/* Entry: 1054db8bc; end: 1054db993; -[SCAdaptiveContentFetcher _applyPrefetchWindowFilterForItemsIds:] */

void FUN_1054db8bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x30));
  puVar1 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 0x88);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1054db994;
  puStack_50 = &UNK_110891330;
  uStack_48 = param_3;
  lStack_40 = param_1;
  puStack_38 = puVar1;
  _objc_retain();
  _objc_retain(param_3);
  func_0x00010bf97ce0(uVar3,param_2,&puStack_68);
  puVar2 = puVar1;
  func_0x00010bf09f00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_38);
  _objc_release(uStack_48);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1054db994; end: 1054dbc27;  */

void FUN_1054db994(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lStack_210;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  func_0x00010c067fc0();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar16 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar16);
  puVar12 = &uStack_1b0;
  puVar13 = auStack_f0;
  uVar14 = 0x10;
  lStack_210 = lVar16;
  func_0x00010bf52a60();
  if (lStack_210 != 0) {
    lVar15 = *plStack_1a0;
    do {
      lVar17 = 0;
      do {
        if (*plStack_1a0 != lVar15) {
          _objc_enumerationMutation(lVar16);
        }
        if (param_3 == 0) goto LAB_1054dbbdc;
        puVar18 = *(undefined8 **)(lStack_1a8 + lVar17 * 8);
        lVar20 = *(long *)(*(long *)(param_1 + 0x28) + 0x58);
        uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x80);
        func_0x00010c0e00e0(uVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2827c0();
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar14);
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        lVar1 = lVar20;
        func_0x00010c129e20();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = &uStack_1f0;
        puVar13 = auStack_170;
        uVar14 = 0x10;
        lVar2 = lVar1;
        func_0x00010bf52a60();
        if (lVar2 != 0) {
          lVar19 = *plStack_1e0;
          do {
            lVar21 = 0;
            do {
              if (*plStack_1e0 != lVar19) {
                _objc_enumerationMutation(lVar1);
              }
              lVar3 = *(long *)(lStack_1e8 + lVar21 * 8);
              func_0x00010bf4c4e0();
              _objc_retainAutoreleasedReturnValue();
              lVar4 = lVar3;
              func_0x00010bf4c8a0();
              _objc_retainAutoreleasedReturnValue();
              lVar5 = lVar4;
              func_0x00010c0c46a0();
              lVar6 = param_2;
              func_0x00010c067fc0();
              _objc_release(lVar4);
              _objc_release(lVar3);
              if (lVar5 == lVar6) {
                func_0x00010befa120(*(undefined8 *)(param_1 + 0x30));
                param_3 = param_3 + -1;
                puVar12 = puVar18;
                goto LAB_1054dbba0;
              }
              lVar21 = lVar21 + 1;
            } while (lVar2 != lVar21);
            puVar12 = &uStack_1f0;
            puVar13 = auStack_170;
            uVar14 = 0x10;
            lVar2 = lVar1;
            func_0x00010bf52a60();
          } while (lVar2 != 0);
        }
LAB_1054dbba0:
        _objc_release(lVar1);
        _objc_release(lVar20);
        lVar17 = lVar17 + 1;
      } while (lVar17 != lStack_210);
      puVar12 = &uStack_1b0;
      puVar13 = auStack_f0;
      uVar14 = 0x10;
      lStack_210 = lVar16;
      func_0x00010bf52a60();
    } while (lStack_210 != 0);
  }
LAB_1054dbbdc:
  _objc_release(lVar16);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(puVar12);
    _objc_retain(puVar13);
    _objc_retain(uVar14);
    func_0x00010bf0ae40(*(undefined8 *)(param_2 + 0x30));
    if ((puVar12 != (undefined8 *)0x0) &&
       (puVar7 = puVar13, func_0x00010bf529e0(), puVar7 != (undefined1 *)0x0)) {
      lVar16 = *(long *)(param_2 + 0x80);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar16 != 0) {
        uVar8 = *(undefined8 *)(param_2 + 0x80);
        func_0x00010c0e00e0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2827c0();
        _objc_release(uVar8);
        uVar9 = *(undefined8 *)(param_2 + 0x58);
        func_0x00010c0dfd40(uVar9);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        uVar8 = uVar9;
        func_0x00010c129e20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0a0c0(puVar10);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar8);
        func_0x00010befa160(puVar10);
        puVar11 = PTR_PTR_1126b9f38;
        _objc_alloc(PTR_PTR_1126b9f38);
        func_0x00010c020000();
        uVar8 = *(undefined8 *)(param_2 + 0x58);
        func_0x00010c0d3c80(uVar8);
        func_0x00010c130f40();
        func_0x00010bea5000(param_2);
        _objc_release(uVar8);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(uVar9);
      }
    }
    _objc_release(uVar14);
    _objc_release(puVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar12);
    return;
  }
  return;
}



/* Entry: 1054dbc28; end: 1054dbdc3; -[SCAdaptiveContentFetcher _resolveNewAssetListForACFItemId:remoteAssetList:promise:] */

void FUN_1054dbc28(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x30));
  if ((param_3 != 0) && (lVar1 = param_4, func_0x00010bf529e0(), lVar1 != 0)) {
    lVar1 = *(long *)(param_1 + 0x80);
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x80);
      func_0x00010c0e00e0(uVar2,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010c2827c0();
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010c0dfd40(uVar2,param_2,uVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      uVar5 = uVar2;
      func_0x00010c129e20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0a0c0(puVar3,param_2,uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      func_0x00010befa160(puVar3,param_2,param_4);
      puVar4 = PTR_PTR_1126b9f38;
      _objc_alloc(PTR_PTR_1126b9f38);
      func_0x00010c020000();
      uVar5 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010c0d3c80(uVar5);
      func_0x00010c130f40();
      func_0x00010bea5000(param_1,param_2,uVar5,0,param_5,param_3);
      _objc_release(uVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(uVar2);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1054dbdc4; end: 1054dc0b3; -[SCAdaptiveContentFetcher _submitOrUpdateRequestWithItemId:remoteAsset:importance:fetchPriority:] */

void FUN_1054dbdc4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x30));
  puVar1 = PTR_PTR_1126b7fc8;
  _objc_alloc(PTR_PTR_1126b7fc8);
  func_0x00010c0631e0();
  puVar2 = PTR_PTR_1126b7fd0;
  _objc_alloc(PTR_PTR_1126b7fd0);
  uVar3 = param_4;
  func_0x00010bf4c4e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf4c8a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0c46a0();
  func_0x00010c0291a0(puVar2,param_2,uVar5,puVar1,param_6,param_5,0,5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar6 = PTR_PTR_1126b1378;
  _objc_alloc(PTR_PTR_1126b1378);
  puVar9 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  func_0x00010c032f60();
  func_0x00010c03cd40(puVar6,param_2,puVar2,puVar9,0,0);
  _objc_release(puVar9);
  lVar7 = *(long *)(param_1 + 0x98);
  func_0x00010c0e00e0(lVar7,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar7 == 0) {
    puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x98),param_2,puVar9,param_3);
    _objc_release(puVar9);
  }
  lVar8 = *(long *)(param_1 + 0x98);
  func_0x00010c0e00e0(lVar8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010bf4c4e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf4c8a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar8;
  func_0x00010c0e00e0(lVar8,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar8);
  if (lVar7 == 0) {
    func_0x00010bec6260(param_1,param_2,param_3,param_4,puVar6);
    lVar7 = *(long *)(param_1 + 0xa0);
    func_0x00010c0e00e0(lVar7,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar7 != 0) goto LAB_1054dc050;
    puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0xa0),param_2,puVar9,param_3);
  }
  else {
    puVar9 = *(undefined **)(param_1 + 0x98);
    func_0x00010c0e00e0(puVar9,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010bf4c4e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf4c8a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c0e00e0(puVar9,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ebb40();
    _objc_release(puVar10);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(puVar9);
LAB_1054dc050:
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1054dc0b4; end: 1054dc303; -[SCAdaptiveContentFetcher _submitNewRequestWithItemId:remoteAsset:requestContext:] */

void FUN_1054dc0b4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010bf9e0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126b17d8;
    _objc_alloc(PTR_PTR_1126b17d8);
    lVar1 = param_4;
    func_0x00010bf4c4e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c003560(puVar2);
    _objc_release(lVar1);
    func_0x00010c1cc500(puVar2);
    _objc_initWeak(auStack_68,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    _objc_retain(param_4);
    uVar4 = uVar3;
    func_0x00010c13e600(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x98);
    func_0x00010c0e00e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_4;
    func_0x00010bf4c4e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010bf4c8a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar3);
    _objc_release(lVar5);
    _objc_release(lVar1);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar2);
  }
  else {
    func_0x00010bec5fc0(param_1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1054dc304; end: 1054dc40f;  */

void FUN_1054dc304(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x30);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1054dc410;
    puStack_68 = &UNK_110850cf8;
    _objc_copyWeak(auStack_48,param_1 + 0x30);
    _objc_retain(param_2);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uStack_60 = param_2;
    _objc_retain(uVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uStack_58 = uVar4;
    _objc_retain(uVar2);
    uStack_50 = uVar2;
    func_0x000100a0df38(uVar3,&puStack_80);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
    _objc_release(uStack_60);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1054dc410; end: 1054dc447;  */

void FUN_1054dc410(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be27700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054dc448; end: 1054dc7db; -[SCAdaptiveContentFetcher _submitExternalFetchRequestWithItemId:remoteAsset:requestContext:] */

void FUN_1054dc448(undefined **param_1,undefined8 param_2,long param_3,undefined **param_4,
                  undefined **param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  undefined1 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *unaff_x23;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puStack_210;
  undefined8 uStack_208;
  code *pcStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1e0 [8];
  undefined1 uStack_1d8;
  undefined **ppuStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  long lStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  long lStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined **ppuStack_150;
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
  lStack_178 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuStack_188 = param_5;
  _objc_retain(param_5);
  puVar1 = param_1[5];
  ppuStack_180 = param_1;
  func_0x00010bf529e0();
  uVar9 = (undefined1)param_2;
  if (puVar1 != (undefined *)0x0) {
    param_1 = param_4;
    func_0x00010bf9e0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar9 = (undefined1)param_2;
    if (param_1 != (undefined **)0x0) {
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      puVar14 = ppuStack_180[5];
      _objc_retain(puVar14);
      puVar1 = puVar14;
      func_0x00010bf52a60();
      uVar9 = (undefined1)param_2;
      if (puVar1 != (undefined *)0x0) {
        lVar10 = *plStack_120;
        do {
          unaff_x23 = (undefined *)0x0;
          do {
            if (*plStack_120 != lVar10) {
              _objc_enumerationMutation(puVar14);
            }
            puVar11 = *(undefined **)(lStack_128 + (long)unaff_x23 * 8);
            puVar2 = puVar11;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar2;
            func_0x00010bfabac0();
            _objc_retainAutoreleasedReturnValue();
            param_1 = param_4;
            func_0x00010bf9e0e0();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010c0720c0();
            _objc_release(param_1);
            _objc_release(puVar3);
            _objc_release(puVar2);
            uVar9 = (undefined1)param_2;
            if (((ulong)puVar4 & 1) != 0) {
              _objc_retain(puVar11);
              _objc_release(puVar14);
              if (puVar11 == (undefined *)0x0) goto LAB_1054dc6e4;
              _objc_initWeak(auStack_138,ppuStack_180);
              unaff_x23 = puVar11;
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              ppuVar5 = ppuStack_188;
              func_0x00010c11fca0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfa96c0();
              ppuVar6 = ppuStack_188;
              func_0x00010c11fca0(ppuStack_188);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfea580();
              puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_168 = 0xc2000000;
              pcStack_160 = FUN_1054dc7dc;
              puStack_158 = &UNK_11085dbf8;
              param_1 = &puStack_170;
              uVar9 = SUB81(auStack_138,0);
              _objc_copyWeak(auStack_140);
              _objc_retain(param_4);
              lVar10 = lStack_178;
              ppuStack_150 = param_4;
              _objc_retain(lStack_178);
              lStack_148 = lVar10;
              func_0x00010bfa7b80(unaff_x23);
              _objc_release(ppuVar6);
              _objc_release(ppuVar5);
              _objc_release(unaff_x23);
              _objc_release(lStack_148);
              _objc_release(ppuStack_150);
              _objc_destroyWeak(auStack_140);
              _objc_destroyWeak(auStack_138);
              goto LAB_1054dc754;
            }
            unaff_x23 = unaff_x23 + 1;
          } while (puVar1 != unaff_x23);
          puVar1 = puVar14;
          func_0x00010bf52a60();
          uVar9 = (undefined1)param_2;
        } while (puVar1 != (undefined *)0x0);
      }
      _objc_release(puVar14);
    }
  }
LAB_1054dc6e4:
  puVar11 = PTR_PTR_1126b7ff0;
  _objc_alloc();
  ppuVar5 = param_4;
  func_0x00010bf4c4e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010bf4c8a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c003760();
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  func_0x00010be27700(ppuStack_180);
LAB_1054dc754:
  _objc_release(puVar11);
  _objc_release(ppuStack_188);
  _objc_release(param_4);
  lVar10 = lStack_178;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(param_1 + 6);
  _objc_destroyWeak(auStack_138);
  lVar7 = lVar10;
  __Unwind_Resume();
  pcStack_198 = FUN_1054dc7dc;
  lVar8 = lVar7 + 0x30;
  ppuStack_1d0 = ppuVar5;
  puStack_1c8 = unaff_x23;
  puStack_1c0 = puVar11;
  ppuStack_1b8 = param_1;
  ppuStack_1b0 = param_4;
  lStack_1a8 = lVar10;
  puStack_1a0 = &stack0xfffffffffffffff0;
  _objc_loadWeakRetained();
  if (lVar8 != 0) {
    uVar12 = *(undefined8 *)(lVar8 + 0x30);
    puStack_210 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_208 = 0xc2000000;
    pcStack_200 = FUN_1054dc8c8;
    puStack_1f8 = &UNK_110844dd0;
    uVar13 = *(undefined8 *)(lVar7 + 0x20);
    _objc_retain(uVar13);
    uStack_1f0 = uVar13;
    uStack_1d8 = uVar9;
    _objc_copyWeak(auStack_1e0,lVar7 + 0x30);
    uVar13 = *(undefined8 *)(lVar7 + 0x28);
    _objc_retain(uVar13);
    uStack_1e8 = uVar13;
    func_0x000100a0df38(uVar12,&puStack_210);
    _objc_release(uStack_1e8);
    _objc_destroyWeak(auStack_1e0);
    _objc_release(uStack_1f0);
  }
  _objc_release(lVar8);
  return;
}



/* Entry: 1054dc7dc; end: 1054dc8c7;  */

void FUN_1054dc7dc(long param_1,undefined1 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 uStack_48;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1054dc8c8;
    puStack_68 = &UNK_110844dd0;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uStack_60 = uVar3;
    uStack_48 = param_2;
    _objc_copyWeak(auStack_50,param_1 + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    uStack_58 = uVar3;
    func_0x000100a0df38(uVar2,&puStack_80);
    _objc_release(uStack_58);
    _objc_destroyWeak(auStack_50);
    _objc_release(uStack_60);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1054dc8c8; end: 1054dc97b;  */

void FUN_1054dc8c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_PTR_1126b7ff0;
  _objc_alloc(PTR_PTR_1126b7ff0);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4c4e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf4c8a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0;
  if (*(char *)(param_1 + 0x38) == '\0') {
    uVar1 = 4;
  }
  func_0x00010c003760(puVar2,param_2,uVar4,uVar1,0,0);
  _objc_release(uVar4);
  _objc_release(uVar3);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be27700();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1054dc97c; end: 1054dcd9f; -[SCAdaptiveContentFetcher _handleContentResult:forItemId:remoteAsset:] */

void FUN_1054dc97c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  int param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lStack_148;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x30));
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_5;
  func_0x00010bf4c4e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010bf4c8a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = 0;
  lVar15 = lVar2;
  func_0x00010c1d0640(uVar1);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(uVar1);
  if (param_3 != 0) {
    lVar3 = *(long *)(param_1 + 0xa0);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0xa0));
      _objc_release(puVar4);
    }
    uVar11 = *(undefined8 *)(param_1 + 0xa0);
    func_0x00010c0e00e0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_5;
    func_0x00010bf4c4e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bf4c8a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar11);
    _objc_release(lVar2);
    _objc_release(lVar3);
    _objc_release(uVar11);
    lVar13 = *(long *)(param_1 + 0x58);
    uVar11 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2827c0();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar11);
    lVar2 = lVar13;
    func_0x00010c129e20();
    _objc_retainAutoreleasedReturnValue();
    lStack_148 = lVar2;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    if (lStack_148 == 0) {
      param_6 = 1;
    }
    else {
      do {
        lVar15 = 0;
        do {
          if (lRam0000000000000000 != lVar3) {
            _objc_enumerationMutation(lVar2);
          }
          uVar14 = *(undefined8 *)(lVar15 * 8);
          lVar5 = *(long *)(param_1 + 0xa0);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar14;
          func_0x00010bf4c4e0();
          _objc_retainAutoreleasedReturnValue();
          uVar1 = uVar11;
          func_0x00010bf4c8a0();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar6 == 0) {
            _objc_release(uVar1);
            _objc_release(uVar11);
            _objc_release(lVar5);
            param_6 = 0;
            goto LAB_1054dcd24;
          }
          lVar7 = *(long *)(param_1 + 0xa0);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf4c4e0(uVar14);
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar14;
          func_0x00010bf4c8a0();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar7;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar8;
          func_0x00010bfcaaa0();
          _objc_release(lVar8);
          _objc_release(uVar10);
          _objc_release(uVar14);
          _objc_release(lVar7);
          _objc_release(lVar6);
          _objc_release(uVar1);
          _objc_release(uVar11);
          _objc_release(lVar5);
          if (lVar9 != 0) {
            param_6 = 0;
            goto LAB_1054dcd24;
          }
          lVar15 = lVar15 + 1;
        } while (lStack_148 != lVar15);
        lStack_148 = lVar2;
        func_0x00010bf52a60();
      } while (lStack_148 != 0);
      param_6 = 1;
    }
LAB_1054dcd24:
    _objc_release(lVar2);
    uVar11 = param_4;
    lVar15 = param_5;
    lVar6 = param_3;
    func_0x00010bde2d40(param_1);
    _objc_release(lVar13);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    _objc_retain(uVar11);
    _objc_retain(lVar15);
    _objc_retain(lVar6);
    func_0x00010bf0ae40(*(undefined8 *)(param_3 + 0x30));
    _os_unfair_lock_lock(param_3 + 0xd0);
    uVar1 = *(undefined8 *)(param_3 + 0xc0);
    lVar3 = lVar15;
    func_0x00010bf4c4e0(lVar15);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bf4c8a0();
    _objc_retainAutoreleasedReturnValue();
    FUN_1054d96b4(uVar1,lVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bfcaaa0(lVar6);
    func_0x00010c0df780(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(uVar1);
    _objc_release(puVar4);
    _objc_release(uVar1);
    _objc_release(lVar2);
    _objc_release(lVar3);
    uVar1 = *(undefined8 *)(param_3 + 0xb8);
    lVar3 = lVar15;
    func_0x00010bf4c4e0(lVar15);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bf4c8a0();
    _objc_retainAutoreleasedReturnValue();
    FUN_1054d96b4(uVar1,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60();
    _objc_release(uVar1);
    _objc_release(lVar2);
    _objc_release(lVar3);
    if (param_6 != 0) {
      uVar14 = *(undefined8 *)(param_3 + 0xb0);
      FUN_1054d96b4(uVar14,uVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_3 + 0xa0);
      func_0x00010c0e00e0(uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar10;
      func_0x00010bf51e00();
      func_0x00010bf43d60(uVar14);
      _objc_release(uVar1);
      _objc_release(uVar10);
      _objc_release(uVar14);
      func_0x00010befa120(*(undefined8 *)(param_3 + 200));
    }
    _os_unfair_lock_unlock(param_3 + 0xd0);
    _objc_release(lVar6);
    _objc_release(lVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar11);
    return;
  }
  return;
}



/* Entry: 1054dcda0; end: 1054dcfa3; -[SCAdaptiveContentFetcher _completeFutureForItemId:remoteAsset:result:allRemoteAssetsFetchedForItem:] */

void FUN_1054dcda0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x30));
  _os_unfair_lock_lock(param_1 + 0xd0);
  uVar4 = *(undefined8 *)(param_1 + 0xc0);
  uVar1 = param_4;
  func_0x00010bf4c4e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf4c8a0();
  _objc_retainAutoreleasedReturnValue();
  FUN_1054d96b4(uVar4,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfcaaa0(param_5);
  func_0x00010c0df780(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar4);
  _objc_release(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0xb8);
  uVar1 = param_4;
  func_0x00010bf4c4e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf4c8a0();
  _objc_retainAutoreleasedReturnValue();
  FUN_1054d96b4(uVar4,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  if (param_6 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0xb0);
    FUN_1054d96b4(uVar3,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0xa0);
    func_0x00010c0e00e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010bf51e00();
    func_0x00010bf43d60(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar4);
    _objc_release(uVar3);
    func_0x00010befa120(*(undefined8 *)(param_1 + 200));
  }
  _os_unfair_lock_unlock(param_1 + 0xd0);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1054dcfa4; end: 1054dd313; -[SCAdaptiveContentFetcher _clearStateForItemId:] */

void FUN_1054dcfa4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x30));
  lVar2 = *(long *)(param_1 + 0x98);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    _objc_retain(lVar2);
    lVar3 = lVar2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar2);
        }
        lVar7 = lVar2;
        func_0x00010c0e00e0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf2dba0();
        _objc_release(lVar7);
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    }
    _objc_release(lVar2);
    func_0x00010c12adc0(lVar2);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x98));
  }
  uVar4 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c0e00e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
  _objc_release(uVar4);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0xa0));
  lVar7 = *(long *)(param_1 + 0x58);
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c0e00e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2827c0();
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  func_0x00010c12d360(*(undefined8 *)(param_1 + 200));
  _os_unfair_lock_lock(param_1 + 0xd0);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0xb0));
  lVar8 = lVar7;
  func_0x00010c129e20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar8;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar8);
      }
      uVar9 = *(undefined8 *)(lVar6 * 8);
      uVar11 = *(undefined8 *)(param_1 + 0xc0);
      uVar4 = uVar9;
      func_0x00010bf4c4e0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar4;
      func_0x00010bf4c8a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar4);
      uVar10 = *(undefined8 *)(param_1 + 0xb8);
      func_0x00010bf4c4e0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar9;
      func_0x00010bf4c8a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar10);
      _objc_release(uVar4);
      _objc_release(uVar9);
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = lVar8;
    func_0x00010bf52a60();
  }
  _objc_release(lVar8);
  _os_unfair_lock_unlock(param_1 + 0xd0);
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0xd0);
  __Unwind_Resume(param_3);
  _objc_storeStrong(param_3 + 200,0);
  _objc_storeStrong(param_3 + 0xc0,0);
  _objc_storeStrong(param_3 + 0xb8,0);
  _objc_storeStrong(param_3 + 0xb0,0);
  _objc_storeStrong(param_3 + 0xa8,0);
  _objc_storeStrong(param_3 + 0xa0,0);
  _objc_storeStrong(param_3 + 0x98,0);
  _objc_storeStrong(param_3 + 0x88,0);
  _objc_storeStrong(param_3 + 0x80,0);
  _objc_storeStrong(param_3 + 0x70,0);
  _objc_storeStrong(param_3 + 0x58,0);
  _objc_storeStrong(param_3 + 0x48,0);
  _objc_storeStrong(param_3 + 0x40,0);
  _objc_storeStrong(param_3 + 0x38,0);
  _objc_storeStrong(param_3 + 0x30,0);
  _objc_storeStrong(param_3 + 0x28,0);
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 1054dd314; end: 1054dd41b; -[SCAdaptiveContentFetcher .cxx_destruct] */

void FUN_1054dd314(long param_1)

{
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 1054dd41c; end: 1054dd4e3; -[SCAdaptiveContentFetcherFactoryImpl adaptiveContentFetcherLazyForFeatureType:] */

void FUN_1054dd41c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054dd4e4; end: 1054dd587;  */

void FUN_1054dd4e4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdc5ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1054dd588; end: 1054dd707; -[SCAdaptiveContentFetcherFactoryImpl _adaptiveContentFetcherForFeatureType:featureProvidedSignals:useSystemContentDeliveryScope:externalFetchersList:] */

void FUN_1054dd588(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  ,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar3 = PTR_PTR_1126b9f40;
  lVar4 = 0x28;
  if (param_5 == 0) {
    lVar4 = 0x18;
  }
  uVar8 = *(undefined8 *)(param_1 + lVar4);
  lVar4 = 0x30;
  if (param_5 == 0) {
    lVar4 = 0x20;
  }
  uVar9 = *(undefined8 *)(param_1 + lVar4);
  _objc_retain(uVar9);
  _objc_retain(uVar8);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_alloc(puVar3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lVar4 = param_1;
  func_0x00010bde4600(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bdf9320(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c11e0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffe660(puVar3,param_2,uVar1,uVar2,lVar4,lVar5,param_4,uVar8,uVar9,param_6,uVar7);
  _objc_release(uVar9);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1054dd708; end: 1054dd7cf; -[SCAdaptiveContentFetcherFactoryImpl batchContentFetcherLazyForFeatureType:] */

void FUN_1054dd708(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054dd7d0; end: 1054dd81f;  */

void FUN_1054dd7d0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdd2dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1054dd820; end: 1054dd923; -[SCAdaptiveContentFetcherFactoryImpl batchContentFetcherLazyForFeatureType:useSystemContentDeliveryScope:externalFetchersList:] */

void FUN_1054dd820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_58 = param_3;
  uStack_50 = param_4;
  _objc_retain(param_5);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054dd924; end: 1054dd973;  */

void FUN_1054dd924(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdd2dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1054dd974; end: 1054dda77; -[SCAdaptiveContentFetcherFactoryImpl _batchContentFetcherLazyForFeatureType:useSystemContentDeliveryScope:externalFetchersList:] */

void FUN_1054dd974(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  )

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar2 = PTR_PTR_1126b9f48;
  lVar1 = 0x28;
  if (param_4 == 0) {
    lVar1 = 0x18;
  }
  uVar5 = *(undefined8 *)(param_1 + lVar1);
  lVar1 = 0x30;
  if (param_4 == 0) {
    lVar1 = 0x20;
  }
  uVar6 = *(undefined8 *)(param_1 + lVar1);
  _objc_retain(uVar6);
  _objc_retain(uVar5);
  _objc_retain(param_5);
  _objc_alloc(puVar2);
  uVar7 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c11e0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffe500(puVar2,param_2,uVar7,uVar5,uVar6,param_5,uVar4);
  _objc_release(uVar6);
  _objc_release(param_5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1054dda78; end: 1054dda8b; -[SCAdaptiveContentFetcherFactoryImpl _configKeyForACFFeatureType:] */

undefined ** FUN_1054dda78(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110de5ff8;
  if (param_3 != 0) {
    ppuVar1 = (undefined **)0x0;
  }
  return ppuVar1;
}



/* Entry: 1054dda8c; end: 1054ddb27; -[SCAdaptiveContentFetcherFactoryImpl _defaultConfigForACFFeatureType:] */

void FUN_1054dda8c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_3 == 0) {
    puVar2 = PTR_PTR_1126b9f30;
    _objc_opt_new(PTR_PTR_1126b9f30);
    func_0x00010c18b180();
    func_0x00010c1fe140(puVar2,param_2,500);
    puVar1 = puVar2;
    func_0x00010c0c4700(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21af40();
    _objc_release(puVar1);
    puVar1 = puVar2;
    func_0x00010c0c4700(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21af40();
    _objc_release(puVar1);
  }
  else {
    puVar2 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1054ddb28; end: 1054ddb93; -[SCAdaptiveContentFetcherFactoryImpl .cxx_destruct] */

void FUN_1054ddb28(long param_1)

{
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



/* Entry: 1054ddb94; end: 1054ddbfb; -[SCAdaptiveContentFetchingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054ddb94(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272499c);
  _objc_destroyWeak(param_1 + _DAT_112724998);
  _objc_destroyWeak(param_1 + _DAT_112724994);
  _objc_destroyWeak(param_1 + _DAT_112724990);
  _objc_destroyWeak(param_1 + _DAT_11272498c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127249a0);
  return;
}



/* Entry: 1054ddbfc; end: 1054ddd3f; -[SCBatchContentFetcher initWithCircumstanceEngine:contentDeliveryLazy:simpleContentFetcherLazy:externalFetchersList:queue:] */

undefined1 *
FUN_1054ddbfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e8ae0;
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x38) = 0;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1054ddd40; end: 1054dde4f; -[SCBatchContentFetcher passiveFetchItems:feature:completion:] */

void FUN_1054ddd40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1054dde50;
  puStack_70 = &UNK_1108484f8;
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  uStack_68 = param_3;
  uStack_50 = param_4;
  _objc_retain(param_5);
  uStack_60 = param_5;
  func_0x000100a0df38(uVar1,&puStack_88);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1054dde50; end: 1054dde87;  */

void FUN_1054dde50(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be708a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054dde88; end: 1054ddf17; -[SCBatchContentFetcher fetchContentStatusForRemoteAssetContentKey:] */

void FUN_1054dde88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  FUN_1054ddf18(uVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1054ddf18; end: 1054ddfbf;  */

void FUN_1054ddf18(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126ae560;
    _objc_opt_new(PTR_PTR_1126ae560);
    func_0x00010c1d0640(param_1);
    _objc_release(puVar2);
  }
  lVar1 = param_1;
  func_0x00010c0e00e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1054ddfc0; end: 1054de127; -[SCBatchContentFetcher _passiveFetchItems:feature:completion:] */

void FUN_1054ddfc0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b9f38;
  func_0x00010c082b80();
  if ((((ulong)puVar1 & 1) == 0) || (lVar2 = param_3, func_0x00010bf529e0(), lVar2 == 0)) {
    (**(code **)(param_5 + 0x10))(param_5);
  }
  else {
    func_0x00010be21960(param_1);
    lVar2 = param_3;
    func_0x00010c099060();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    _dispatch_group_create();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1054de128;
    puStack_68 = &UNK_110891480;
    lStack_60 = param_1;
    _objc_retain();
    lStack_58 = lVar3;
    func_0x00010bf97e80(lVar2);
    if (param_5 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      puStack_a8 = puVar1;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_1054de178;
      puStack_90 = &UNK_110849530;
      _objc_retain(param_5);
      lStack_88 = param_5;
      func_0x00010bcbe628(lVar3,uVar4,&puStack_a8);
      _objc_release(lStack_88);
    }
    _objc_release(lStack_58);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1054de128; end: 1054de177;  */

void FUN_1054de128(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c129e20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0fac0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054de178; end: 1054de183;  */

void FUN_1054de178(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001054de180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1054de184; end: 1054de26b; -[SCBatchContentFetcher _fetchAssets:dispatchGroup:] */

void FUN_1054de184(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  _objc_retain(param_4);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf97e80(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1054de26c; end: 1054de2cb;  */

void FUN_1054de26c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  _dispatch_group_enter(uVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec6280();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054de2cc; end: 1054de577; -[SCBatchContentFetcher _submitNewRequestWithRemoteAsset:dispatchGroup:] */

void FUN_1054de2cc(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b7fc8;
  _objc_alloc(PTR_PTR_1126b7fc8);
  func_0x00010c0631e0();
  puVar2 = PTR_PTR_1126b7fd0;
  _objc_alloc(PTR_PTR_1126b7fd0);
  lVar3 = param_3;
  func_0x00010bf4c4e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf4c8a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c46a0();
  func_0x00010c0291a0(puVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar5 = PTR_PTR_1126b1378;
  _objc_alloc(PTR_PTR_1126b1378);
  puVar6 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  func_0x00010c032f60();
  func_0x00010c03cd40(puVar5);
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126b17d8;
  _objc_alloc(PTR_PTR_1126b17d8);
  lVar3 = param_3;
  func_0x00010bf4c4e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c003560(puVar6);
  _objc_release(lVar3);
  func_0x00010c1cc500(puVar6);
  lVar3 = param_3;
  func_0x00010bf9e0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    _objc_initWeak(auStack_58,param_1);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c13e600(uVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  else {
    func_0x00010bec5fe0(param_1);
  }
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1054de578; end: 1054de673;  */

void FUN_1054de578(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1054de674;
    puStack_60 = &UNK_110848218;
    _objc_copyWeak(auStack_48,param_1 + 0x30);
    _objc_retain(param_2);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uStack_58 = param_2;
    _objc_retain(uVar3);
    uStack_50 = uVar3;
    func_0x000100a0df38(uVar2,&puStack_78);
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
    _objc_release(uStack_50);
    _objc_release(uStack_58);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1054de674; end: 1054de6eb;  */

void FUN_1054de674(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf4c4e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf4c8a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be27740(lVar2,param_2,uVar1,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1054de6ec; end: 1054deabf; -[SCBatchContentFetcher _submitExternalFetchRequestWithRemoteAsset:requestContext:dispatchGroup:] */

void FUN_1054de6ec(long param_1,undefined8 param_2,undefined **param_3,undefined **param_4,
                  long param_5)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined1 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *unaff_x23;
  undefined *puVar12;
  undefined *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined1 auStack_1e0 [8];
  undefined1 uStack_1d8;
  undefined **ppuStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  undefined **ppuStack_188;
  long lStack_180;
  long lStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined **ppuStack_150;
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
  ppuStack_188 = param_4;
  _objc_retain(param_4);
  lStack_178 = param_5;
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 0x20);
  lStack_180 = param_1;
  func_0x00010bf529e0();
  uVar9 = (undefined1)param_2;
  if (lVar1 != 0) {
    ppuVar2 = param_3;
    func_0x00010bf9e0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar9 = (undefined1)param_2;
    if (ppuVar2 != (undefined **)0x0) {
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      puVar12 = *(undefined **)(lStack_180 + 0x20);
      _objc_retain(puVar12);
      puVar11 = puVar12;
      func_0x00010bf52a60();
      uVar9 = (undefined1)param_2;
      if (puVar11 != (undefined *)0x0) {
        param_5 = *plStack_120;
        do {
          unaff_x23 = (undefined *)0x0;
          do {
            if (*plStack_120 != param_5) {
              _objc_enumerationMutation(puVar12);
            }
            puVar10 = *(undefined **)(lStack_128 + (long)unaff_x23 * 8);
            puVar3 = puVar10;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010bfabac0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar2 = param_3;
            func_0x00010bf9e0e0(param_3);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar4;
            func_0x00010c0720c0();
            _objc_release(ppuVar2);
            _objc_release(puVar4);
            _objc_release(puVar3);
            uVar9 = (undefined1)param_2;
            if (((ulong)puVar5 & 1) != 0) {
              _objc_retain(puVar10);
              _objc_release(puVar12);
              if (puVar10 == (undefined *)0x0) goto LAB_1054de98c;
              _objc_initWeak(auStack_138,lStack_180);
              unaff_x23 = puVar10;
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              ppuVar6 = ppuStack_188;
              func_0x00010c11fca0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfa96c0();
              ppuVar7 = ppuStack_188;
              func_0x00010c11fca0(ppuStack_188);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfea580();
              puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_168 = 0xc2000000;
              pcStack_160 = FUN_1054deac0;
              puStack_158 = &UNK_11085dbf8;
              ppuVar2 = &puStack_170;
              uVar9 = SUB81(auStack_138,0);
              _objc_copyWeak(auStack_140);
              _objc_retain(param_3);
              param_5 = lStack_178;
              ppuStack_150 = param_3;
              _objc_retain(lStack_178);
              lStack_148 = param_5;
              func_0x00010bfa7b80(unaff_x23);
              _objc_release(ppuVar7);
              _objc_release(ppuVar6);
              _objc_release(unaff_x23);
              _objc_release(lStack_148);
              _objc_release(ppuStack_150);
              _objc_destroyWeak(auStack_140);
              _objc_destroyWeak(auStack_138);
              goto LAB_1054dea38;
            }
            unaff_x23 = unaff_x23 + 1;
          } while (puVar11 != unaff_x23);
          puVar11 = puVar12;
          func_0x00010bf52a60();
          uVar9 = (undefined1)param_2;
        } while (puVar11 != (undefined *)0x0);
      }
      _objc_release(puVar12);
    }
  }
LAB_1054de98c:
  puVar10 = PTR_PTR_1126b7ff0;
  _objc_alloc();
  ppuVar2 = param_3;
  func_0x00010bf4c4e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar2;
  func_0x00010bf4c8a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c003760();
  _objc_release(ppuVar6);
  _objc_release(ppuVar2);
  ppuVar6 = param_3;
  func_0x00010bf4c4e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar6;
  func_0x00010bf4c8a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be27740(lStack_180);
  _objc_release(ppuVar2);
  _objc_release(ppuVar6);
  _dispatch_group_leave(lStack_178);
LAB_1054dea38:
  _objc_release(puVar10);
  _objc_release(lStack_178);
  _objc_release(ppuStack_188);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar2 + 6);
  _objc_destroyWeak(auStack_138);
  ppuVar8 = param_3;
  __Unwind_Resume();
  pcStack_198 = FUN_1054deac0;
  ppuVar7 = ppuVar8 + 6;
  ppuStack_1d0 = ppuVar6;
  puStack_1c8 = unaff_x23;
  puStack_1c0 = puVar10;
  lStack_1b8 = param_5;
  ppuStack_1b0 = ppuVar2;
  ppuStack_1a8 = param_3;
  puStack_1a0 = &stack0xfffffffffffffff0;
  _objc_loadWeakRetained();
  if (ppuVar7 != (undefined **)0x0) {
    puVar11 = ppuVar7[5];
    puStack_208 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_200 = 0xc2000000;
    pcStack_1f8 = FUN_1054deb9c;
    puStack_1f0 = &UNK_1108488f8;
    puVar12 = ppuVar8[4];
    _objc_retain(puVar12);
    puStack_1e8 = puVar12;
    uStack_1d8 = uVar9;
    _objc_copyWeak(auStack_1e0,ppuVar8 + 6);
    func_0x000100a0df38(puVar11,&puStack_208);
    _dispatch_group_leave(ppuVar8[5]);
    _objc_destroyWeak(auStack_1e0);
    _objc_release(puStack_1e8);
  }
  _objc_release(ppuVar7);
  return;
}



/* Entry: 1054deac0; end: 1054deb9b;  */

void FUN_1054deac0(long param_1,undefined1 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 uStack_48;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1054deb9c;
    puStack_60 = &UNK_1108488f8;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uStack_58 = uVar3;
    uStack_48 = param_2;
    _objc_copyWeak(auStack_50,param_1 + 0x30);
    func_0x000100a0df38(uVar2,&puStack_78);
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
    _objc_destroyWeak(auStack_50);
    _objc_release(uStack_58);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1054deb9c; end: 1054dec87;  */

void FUN_1054deb9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b7ff0;
  _objc_alloc(PTR_PTR_1126b7ff0);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4c4e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf4c8a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0;
  if (*(char *)(param_1 + 0x30) == '\0') {
    uVar5 = 4;
  }
  func_0x00010c003760(puVar1,param_2,uVar4,uVar5,0,0);
  _objc_release(uVar4);
  _objc_release(uVar2);
  lVar3 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4c4e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf4c8a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be27740(lVar3,param_2,puVar1,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1054dec88; end: 1054ded5f; -[SCBatchContentFetcher _handleContentResult:remoteAssetContentKey:] */

void FUN_1054dec88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x28));
  _os_unfair_lock_lock(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  FUN_1054ddf18(uVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfcaaa0(param_3);
  func_0x00010c0df780(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar1);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x38);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1054ded60; end: 1054deda3; -[SCBatchContentFetcher _getPrefetchLimitForFeature:] */

long FUN_1054ded60(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110de6038;
  if (param_3 != 0) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110de6018;
  if (param_3 != 1) {
    ppuVar2 = ppuVar1;
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c067f00(uVar3,param_2,ppuVar2,5,0);
  return (long)(int)uVar3;
}



/* Entry: 1054deda4; end: 1054dee03; -[SCBatchContentFetcher .cxx_destruct] */

void FUN_1054deda4(long param_1)

{
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



/* Entry: 1054dee04; end: 1054df09f;  */

void FUN_1054dee04(undefined *param_1,ulong param_2,ulong param_3,long param_4,undefined *param_5)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  _objc_retain();
  _objc_retain(param_4);
  puVar7 = PTR____NSArray0__struct_11034ab48;
  if ((param_2 <= param_3) &&
     (puVar10 = param_1, func_0x00010bf529e0(), puVar7 = PTR____NSArray0__struct_11034ab48,
     puVar10 != (undefined *)0x0)) {
    lVar3 = param_4;
    func_0x00010bf529e0();
    if (lVar3 == 0) {
      puVar10 = (undefined *)(param_3 + param_2 >> 1);
    }
    else {
      lVar3 = param_4;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c067ec0();
      lVar5 = param_4;
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c067ec0();
      _objc_release(lVar5);
      _objc_release(lVar3);
      puVar7 = PTR____NSArray0__struct_11034ab48;
      if ((int)lVar6 < (int)lVar4) goto LAB_1054df074;
      lVar3 = param_4;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c067ec0();
      lVar5 = param_4;
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c067ec0();
      iVar1 = (int)lVar6 + (int)lVar4;
      puVar10 = (undefined *)((long)((ulong)(uint)(iVar1 - (iVar1 >> 0x1f)) << 0x20) >> 0x21);
      _objc_release(lVar5);
      _objc_release(lVar3);
    }
    puVar11 = param_1;
    func_0x00010bf529e0();
    puVar7 = PTR____NSArray0__struct_11034ab48;
    if (puVar10 < puVar11) {
      puVar7 = param_1;
      func_0x00010bf529e0();
      if (puVar7 <= param_5) {
        param_5 = puVar7;
      }
      puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar7;
      func_0x00010bf529e0();
      if (puVar11 < param_5) {
        puVar11 = puVar10 + -1;
        bVar2 = true;
        do {
          if (((long)puVar10 < 0) ||
             (puVar8 = param_1, func_0x00010bf529e0(), (long)puVar8 <= (long)puVar10)) {
            if (((long)puVar11 < 0) ||
               (puVar8 = param_1, func_0x00010bf529e0(), (long)puVar8 <= (long)puVar11)) break;
            if (!bVar2) {
LAB_1054deff4:
              puVar8 = param_1;
              func_0x00010bf529e0();
              if ((long)puVar11 < (long)puVar8) {
                puVar8 = param_1;
                func_0x00010c0dfd40(param_1);
                _objc_retainAutoreleasedReturnValue();
                puVar9 = puVar8;
                func_0x00010c0844e0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar7);
                _objc_release(puVar9);
                _objc_release(puVar8);
                puVar11 = puVar11 + -1;
              }
              goto LAB_1054df04c;
            }
            if (-1 < (long)puVar10) goto LAB_1054def94;
LAB_1054df054:
            bVar2 = false;
          }
          else if (bVar2) {
LAB_1054def94:
            puVar8 = param_1;
            func_0x00010bf529e0();
            if ((long)puVar8 <= (long)puVar10) goto LAB_1054df054;
            puVar8 = param_1;
            func_0x00010c0dfd40(param_1);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar8;
            func_0x00010c0844e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar7);
            _objc_release(puVar9);
            _objc_release(puVar8);
            bVar2 = false;
            puVar10 = puVar10 + 1;
          }
          else {
            if (-1 < (long)puVar11) goto LAB_1054deff4;
LAB_1054df04c:
            bVar2 = true;
          }
          puVar8 = puVar7;
          func_0x00010bf529e0();
        } while (puVar8 < param_5);
      }
    }
  }
LAB_1054df074:
  _objc_release(param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1054df0a0; end: 1054df107; +[SCContentManagerAdaptiveContentFetcherConfig descriptor] */

void FUN_1054df0a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc7d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a41360,
                        &PTR____CFConstantStringClassReference_110de6058,&PTR_DAT_1130e09e0,
                        &PTR_DAT_1130e09f8,4,0x18,0x1c);
    puRam00000001136bc7d8 = puVar1;
  }
  return;
}



/* Entry: 1054df108; end: 1054df203; -[SCBoltOnDemandResourceDownloader initWithContentDelivery:imageFetchingService:circumstanceEngine:contentResultDataFactory:contentResultUnzipper:] */

undefined1 *
FUN_1054df108(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e8ae8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1054df204; end: 1054df20b; -[SCBoltOnDemandResourceDownloader prefetch:] */

void FUN_1054df204(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf88770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_download_completion__1125bfb80,param_3,0);
  return;
}



/* Entry: 1054df20c; end: 1054df36f; -[SCBoltOnDemandResourceDownloader download:completion:] */

void FUN_1054df20c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x1054df2e8;
  puStack_50 = &UNK_1108914e0;
  uStack_48 = param_3;
  uStack_40 = uVar1;
  uStack_38 = param_4;
  _objc_retain(uVar1);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be897a0(param_1,param_2,param_3,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1054df370; end: 1054df46f; -[SCBoltOnDemandResourceDownloader downloadAndUnzip:completion:] */

void FUN_1054df370(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010be897a0(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1054df470; end: 1054df513;  */

void FUN_1054df470(long param_1,undefined8 param_2,int param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  if (*(long *)(param_1 + 0x28) != 0) {
    if ((param_3 == 0) || ((param_4 & 1) == 0)) {
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_new(PTR__OBJC_CLASS___NSArray_1126ae530);
    }
    else {
      puVar1 = (undefined *)(param_1 + 0x30);
      _objc_loadWeakRetained(puVar1);
      puVar2 = puVar1;
      func_0x00010bed2300();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
    }
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054df514; end: 1054df64f; -[SCBoltOnDemandResourceDownloader downloadAndUnzipToNamedContents:completion:] */

void FUN_1054df514(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1054df5c8;
  puStack_48 = &UNK_110891540;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be897a0(param_1,param_2,param_3,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1054df650; end: 1054df7cb; -[SCBoltOnDemandResourceDownloader downloadImage:attributedFeature:completion:] */

void FUN_1054df650(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126b85a0;
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0b6c20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010c0e3660(puVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b85a8;
  _objc_alloc(PTR_PTR_1126b85a8);
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010c01cf00(puVar1,param_2,puVar2,param_4);
  _objc_release(param_4);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1054df7cc;
  puStack_60 = &UNK_11084d628;
  uStack_58 = param_5;
  _objc_retain(param_5);
  func_0x00010bfa7900(uVar4,param_2,puVar1,&puStack_78);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(puVar1);
  _objc_release(puVar2);
  return;
}



/* Entry: 1054df7cc; end: 1054df887;  */

void FUN_1054df7cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1054df888; end: 1054df8db;  */

void FUN_1054df888(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    func_0x00010bfe6ac0(param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 1054df8dc; end: 1054df8f3;  */

void FUN_1054df8dc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001054df8ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 1054df8f4; end: 1054df8ff; -[SCBoltOnDemandResourceDownloader _unzipResource:fromResult:] */

void FUN_1054df8f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c282f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_unzipContentResult__11267e5f0,param_4);
  return;
}



/* Entry: 1054df900; end: 1054dfad7; -[SCBoltOnDemandResourceDownloader _registerIfRequiredAndRetriveResource:completion:] */

void FUN_1054df900(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b08b8;
  _objc_alloc(PTR_PTR_1126b08b8);
  lVar2 = param_1;
  func_0x00010c28f760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0295e0(puVar1);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126b9f60;
  _objc_alloc(PTR_PTR_1126b9f60);
  lVar2 = param_1;
  func_0x00010be060c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040f00(puVar3);
  _objc_release(lVar2);
  _objc_initWeak(auStack_48,param_1);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c126160(uVar4);
  _objc_release(uVar4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1054dfad8; end: 1054dfb9f;  */

void FUN_1054dfad8(long param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_2 == 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001054dfb88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x10))(lVar2,0,0,0);
      return;
    }
  }
  else {
    lVar2 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar1);
    func_0x00010be96b20(lVar2);
    _objc_release(lVar2);
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 1054dfba0; end: 1054dfbb3;  */

void FUN_1054dfba0(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001054dfbac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1054dfbb4; end: 1054dfcfb; -[SCBoltOnDemandResourceDownloader _retrieveResource:completion:] */

void FUN_1054dfbb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b08b8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1;
  func_0x00010c28f760(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0295e0(puVar1,param_2,lVar2,0xd);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  func_0x00010c032f60();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1054dfcfc;
  puStack_50 = &UNK_110860410;
  uStack_48 = param_4;
  _objc_retain(param_4);
  func_0x00010c13e560(uVar4,param_2,puVar1,puVar3,&puStack_68);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  return;
}



/* Entry: 1054dfcfc; end: 1054dfd6b;  */

void FUN_1054dfcfc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    _objc_retain(param_2);
    lVar1 = param_2;
    func_0x00010bfcaaa0(param_2);
    lVar2 = param_2;
    func_0x00010bfc68c0(param_2);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
              (*(long *)(param_1 + 0x20),param_2,lVar1 == 0,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 1054dfd6c; end: 1054dfe37; -[SCBoltOnDemandResourceDownloader _downloadRequestForResource:] */

void FUN_1054dfd6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b4960;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c28f760(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28f760(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf58680(puVar2,param_2,uVar1,0,0,param_1,PTR____NSArray0__struct_11034ab48,2,1,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1054dfe38; end: 1054dff73; -[SCBoltOnDemandResourceDownloader urlOfResource:] */

void FUN_1054dfe38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1054dff74;
  uStack_40 = 0x1054dff84;
  uStack_38 = 0;
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _objc_release(puVar1);
  func_0x00010c0bfb40(param_3);
  uVar2 = puStack_58[5];
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1054dff74; end: 1054dff8b;  */

void FUN_1054dff74(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1054dff8c; end: 1054dfffb;  */

void FUN_1054dff8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = param_2;
  if (*(int *)(param_1 + 0x28) != 2) {
    uVar1 = param_3;
  }
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054dfffc; end: 1054e0033;  */

void FUN_1054dfffc(long param_1,undefined8 param_2)

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



/* Entry: 1054e0034; end: 1054e0087; -[SCBoltOnDemandResourceDownloader .cxx_destruct] */

void FUN_1054e0034(long param_1)

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



/* Entry: 1054e0088; end: 1054e008f; -[SCDefaultContentResultDataFactory createDataFromContentResult:] */

void FUN_1054e0088(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010bfcaaa0(), lVar1 != 0)) {
    lVar3 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c13e900();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar2 = param_3;
      func_0x00010bf58280(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bfc48a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
    }
    else {
      _objc_retain(lVar1);
      lVar3 = lVar1;
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1054e0090; end: 1054e0117; -[SCDefaultContentResultUnzipper unzipContentResult:] */

void FUN_1054e0090(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000108461f24(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bd86c68();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054e0118; end: 1054e024f; -[SCBoltOnDemandResourceEntryPoint _createDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054e0118(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar1 = PTR_PTR_1126b9f70;
  _objc_alloc(PTR_PTR_1126b9f70);
  lVar2 = param_1 + _DAT_1127249d8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf4c240();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_1127249dc;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bfe7760();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_1127249e0;
  _objc_loadWeakRetained(param_1);
  lVar6 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b9f78;
  _objc_opt_new(PTR_PTR_1126b9f78);
  puVar8 = PTR_PTR_1126b9f80;
  _objc_opt_new(PTR_PTR_1126b9f80);
  func_0x00010c003040(puVar1,param_2,lVar3,lVar5,lVar6,puVar7,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
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



/* Entry: 1054e0250; end: 1054e02af; -[SCBoltOnDemandResourceEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054e0250(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127249d4,0);
  _objc_destroyWeak(param_1 + _DAT_1127249e0);
  _objc_destroyWeak(param_1 + _DAT_1127249dc);
  _objc_destroyWeak(param_1 + _DAT_1127249d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127249e4);
  return;
}



/* Entry: 1054e02b0; end: 1054e0323; -[SCDynamicImageSourceProviderFactoryImplementation initWithImageFetchingService:] */

undefined1 * FUN_1054e02b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8af0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1054e0324; end: 1054e0397; -[SCDynamicImageSourceProviderFactoryImplementation createDynamicImageSourceProvider:contentKey:] */

void FUN_1054e0324(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b9f88;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c001040();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054e0398; end: 1054e03a3; -[SCDynamicImageSourceProviderFactoryImplementation .cxx_destruct] */

void FUN_1054e0398(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054e03a4; end: 1054e047b; -[SCDynamicImageSourceProviderImplementation initWithConfigBuilder:contentKey:imageFetchingService:] */

undefined1 *
FUN_1054e03a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e8af8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf220e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
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



/* Entry: 1054e047c; end: 1054e04a3; -[SCDynamicImageSourceProviderImplementation contentKey] */

void FUN_1054e047c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054e04a4; end: 1054e04bb; -[SCDynamicImageSourceProviderImplementation fetchImageWithCompletion:attributedFeature:completionQueue:] */

void FUN_1054e04a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010be11c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)PTR__CGSizeZero_110347620,*(undefined8 *)(PTR__CGSizeZero_110347620 + 8)
             ,param_1,PTR_s__fetchImageWithCompletion_attrib_1125620a0,param_3,param_4,0,param_5);
  return;
}



/* Entry: 1054e04bc; end: 1054e07ff; -[SCDynamicImageSourceProviderImplementation _fetchImageWithCompletion:attributedFeature:targetSize:isDiskCacheOnly:completionQueue:] */

void FUN_1054e04bc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  pcStack_98 = FUN_1054e0800;
  uStack_90 = 0x1054e0810;
  uStack_88 = 0;
  uStack_e0 = 0;
  uStack_d0 = 0x3032000000;
  pcStack_c8 = FUN_1054e0800;
  uStack_c0 = 0x1054e0810;
  uStack_b8 = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_d8 = &uStack_e0;
  puStack_a8 = &uStack_b0;
  func_0x00010bf4d200(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_1054e0818;
  puStack_f0 = &UNK_110842b58;
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0xc2000000;
  uStack_120 = 0x1054e0850;
  puStack_118 = &UNK_11084c9b0;
  puStack_110 = &uStack_e0;
  puStack_e8 = &uStack_b0;
  func_0x00010c0bcf80();
  _objc_release(uVar1);
  lVar2 = puStack_a8[5];
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    lVar2 = puStack_d8[5];
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
      _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
      func_0x00010c00e2e0();
      (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x10),0,puVar5,0);
      uVar1 = 0;
      goto LAB_1054e06fc;
    }
  }
  puVar5 = PTR_PTR_1126b85a0;
  func_0x00010bf8b920(PTR_PTR_1126b85a0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b85a8;
  _objc_alloc(PTR_PTR_1126b85a8);
  puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010c01cf00(puVar3);
  _objc_release(puVar4);
  _objc_initWeak(auStack_138,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_140,auStack_138);
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010bfa7900(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_138);
  _objc_release(puVar3);
LAB_1054e06fc:
  _objc_release(puVar5);
  __Block_object_dispose(&uStack_e0,8);
  _objc_release(uStack_b8);
  __Block_object_dispose(&uStack_b0,8);
  _objc_release(uStack_88);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054e0800; end: 1054e0817;  */

void FUN_1054e0800(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1054e0818; end: 1054e0887;  */

void FUN_1054e0818(long param_1,undefined8 param_2)

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



/* Entry: 1054e0888; end: 1054e088f;  */

void FUN_1054e0888(void)

{
  return;
}


