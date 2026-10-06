/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10910ef6c; end: 10910f08f; -[SCAsset reset] */

void FUN_10910ef6c(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_48,param_1);
  ppuStack_40 = &PTR____CFConstantStringClassReference_110e3c5d8;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = auStack_48;
  _objc_copyWeak(auStack_50,puVar3);
  puVar4 = puVar1;
  func_0x00010c09c660(param_1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  puVar2 = auStack_48;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  __Unwind_Resume(puVar2);
  _objc_retain(puVar4);
  _objc_retain(puVar3);
  puVar2 = puVar2 + 0x20;
  _objc_loadWeakRetained(puVar2);
  func_0x00010bdfffa0();
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10910f090; end: 10910f0f7;  */

void FUN_10910f090(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfffa0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10910f0f8; end: 10910f0fb; -[SCAsset _didResetWithResponse:error:] */

void FUN_10910f0f8(void)

{
  return;
}



/* Entry: 10910f0fc; end: 10910f103; -[SCAsset mediaDataProvider] */

void FUN_10910f0fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_target_112678178);
  return;
}



/* Entry: 10910f104; end: 10910f227; -[SCAsset loadValuesForKeys:completionHandler:] */

void FUN_10910f104(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010c077480();
  if ((int)puVar1 == 0) {
    func_0x00010be4ed60(param_1);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10910f228; end: 10910f263;  */

void FUN_10910f228(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be4ed60(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10910f264; end: 10910f573; -[SCAsset _loadValuesForKeys:completionHandler:] */

void FUN_10910f264(long param_1,undefined8 param_2,undefined **param_3,undefined **param_4)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **unaff_x26;
  undefined8 unaff_x27;
  long unaff_x28;
  long lVar10;
  undefined *puStack_3a0;
  undefined8 uStack_398;
  code *pcStack_390;
  undefined *puStack_388;
  undefined **ppuStack_380;
  undefined *puStack_378;
  undefined **ppuStack_370;
  undefined *puStack_368;
  undefined **ppuStack_360;
  undefined **ppuStack_358;
  undefined1 ***pppuStack_350;
  code *pcStack_348;
  undefined *puStack_338;
  undefined8 uStack_330;
  code *pcStack_328;
  undefined *puStack_320;
  undefined **ppuStack_318;
  undefined1 auStack_310 [8];
  undefined1 auStack_308 [8];
  undefined **ppuStack_300;
  long lStack_2f8;
  undefined **ppuStack_2f0;
  undefined *puStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined1 **ppuStack_2d0;
  code *pcStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_1f0;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  undefined **ppuStack_1b0;
  undefined *puStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined **ppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined **ppuStack_158;
  undefined *puStack_150;
  undefined **ppuStack_148;
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
  ppuStack_180 = param_4;
  _objc_retain(param_4);
  puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lVar10 = param_1;
  func_0x00010bee7dc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x28 = *plStack_120;
    do {
      param_4 = (undefined **)0x0;
      do {
        if (*plStack_120 != unaff_x28) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x26 = *(undefined ***)(lStack_128 + (long)param_4 * 8);
        lVar2 = lVar10;
        func_0x00010bf4b900();
        if ((int)lVar2 == 0) {
          func_0x00010befa120(ppuVar8);
        }
        else {
          unaff_x27 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar7);
          _objc_release(unaff_x27);
        }
        param_4 = (undefined **)((long)param_4 + 1);
      } while (ppuVar1 != param_4);
      ppuVar1 = param_3;
      func_0x00010bf52a60();
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(param_3);
  ppuVar1 = ppuVar8;
  func_0x00010bf529e0();
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar1 = (undefined **)PTR_PTR_1126dd620;
    _objc_alloc();
    puVar9 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021060();
    ppuVar4 = (undefined **)0x0;
    (*(code *)ppuStack_180[2])(ppuStack_180,ppuVar1);
    _objc_release(ppuVar1);
    _objc_release(puVar9);
  }
  else {
    _objc_initWeak(auStack_138,param_1);
    puVar9 = *(undefined **)(param_1 + 0x68);
    ppuVar1 = param_3;
    if (ppuVar8 != (undefined **)0x0) {
      ppuVar1 = ppuVar8;
    }
    puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_170 = 0xc2000000;
    pcStack_168 = FUN_10910f574;
    puStack_160 = &UNK_110857fd0;
    param_4 = &puStack_178;
    _objc_copyWeak(auStack_140,auStack_138);
    _objc_retain(param_3);
    ppuStack_158 = param_3;
    _objc_retain(puVar7);
    unaff_x26 = ppuStack_180;
    puStack_150 = puVar7;
    _objc_retain(ppuStack_180);
    ppuStack_148 = unaff_x26;
    ppuVar4 = ppuVar1;
    func_0x00010c09c640(puVar9);
    _objc_release(ppuStack_148);
    _objc_release(puStack_150);
    _objc_release(ppuStack_158);
    _objc_destroyWeak(auStack_140);
    _objc_destroyWeak(auStack_138);
  }
  _objc_release(lVar10);
  _objc_release(ppuVar8);
  _objc_release(puVar7);
  _objc_release(ppuStack_180);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(param_4 + 7);
  _objc_destroyWeak(auStack_138);
  ppuVar3 = param_3;
  __Unwind_Resume();
  pcStack_188 = FUN_10910f574;
  lStack_1f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = ppuVar3 + 7;
  lStack_1e0 = unaff_x28;
  uStack_1d8 = unaff_x27;
  ppuStack_1d0 = unaff_x26;
  ppuStack_1c8 = ppuVar1;
  puStack_1c0 = puVar9;
  lStack_1b8 = lVar10;
  ppuStack_1b0 = ppuVar8;
  puStack_1a8 = puVar7;
  ppuStack_1a0 = param_4;
  ppuStack_198 = param_3;
  puStack_190 = &stack0xfffffffffffffff0;
  _objc_loadWeakRetained();
  if (ppuVar6 != (undefined **)0x0) {
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    plStack_2a0 = (long *)0x0;
    puVar9 = ppuVar3[4];
    ppuStack_2c0 = ppuVar3;
    _objc_retain(puVar9);
    puVar7 = puVar9;
    func_0x00010bf52a60();
    ppuVar8 = (undefined **)0x0;
    if (puVar7 != (undefined *)0x0) {
      lVar10 = *plStack_2a0;
      do {
        puVar5 = (undefined *)0x0;
        ppuVar1 = ppuVar8;
        do {
          if (*plStack_2a0 != lVar10) {
            _objc_enumerationMutation(puVar9);
          }
          ppuVar4 = ppuVar6;
          func_0x00010c0694a0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = ppuVar4;
          ppuStack_2b8 = ppuVar1;
          func_0x00010c2533c0();
          ppuVar8 = ppuStack_2b8;
          _objc_retain(ppuStack_2b8);
          _objc_release(ppuVar1);
          _objc_release(ppuVar4);
          if (ppuVar3 < (undefined **)0x2 || ppuVar3 == (undefined **)0x3) {
            if (ppuVar8 == (undefined **)0x0) {
              ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
              func_0x00010c14cb80();
              _objc_retainAutoreleasedReturnValue();
            }
          }
          else if (ppuVar3 == (undefined **)0x2) {
            ppuVar1 = ppuVar6;
            func_0x00010c0694a0(ppuVar6);
            _objc_retainAutoreleasedReturnValue();
            ppuVar4 = ppuVar1;
            func_0x00010c296f60();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(ppuStack_2c0[5]);
            _objc_release(ppuVar4);
            _objc_release(ppuVar1);
          }
          puVar5 = puVar5 + 1;
          ppuVar1 = ppuVar8;
        } while (puVar7 != puVar5);
        puVar7 = puVar9;
        func_0x00010bf52a60();
      } while (puVar7 != (undefined *)0x0);
    }
    _objc_release(puVar9);
    _os_unfair_lock_lock(ppuVar6 + 3);
    ppuVar1 = ppuStack_2c0;
    func_0x00010bef7f60(ppuVar6[4]);
    _os_unfair_lock_unlock(ppuVar6 + 3);
    puVar7 = ppuVar1[6];
    puVar9 = PTR_PTR_1126dd620;
    _objc_alloc(PTR_PTR_1126dd620);
    puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021060(puVar9);
    ppuVar4 = ppuVar8;
    (**(code **)(puVar7 + 0x10))(puVar7,puVar9);
    _objc_release(puVar9);
    _objc_release(puVar5);
    _objc_release(ppuVar8);
  }
  ppuVar1 = ppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f0) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(ppuVar6 + 3);
  ppuVar3 = ppuVar1;
  __Unwind_Resume();
  pcStack_2c8 = FUN_10910f818;
  lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_2f0 = ppuVar8;
  puStack_2e8 = puVar7;
  ppuStack_2e0 = ppuVar1;
  ppuStack_2d8 = ppuVar6;
  ppuStack_2d0 = &puStack_190;
  _objc_retain(ppuVar4);
  _objc_initWeak(auStack_308,ppuVar3);
  ppuStack_300 = &PTR____CFConstantStringClassReference_110f54598;
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puStack_338 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_330 = 0xc2000000;
  pcStack_328 = FUN_10910f964;
  puStack_320 = &UNK_1108a68e8;
  _objc_copyWeak(auStack_310,auStack_308);
  _objc_retain(ppuVar4);
  puVar9 = puVar7;
  ppuStack_318 = ppuVar4;
  func_0x00010be4ed60(ppuVar3);
  _objc_release(puVar7);
  _objc_release(ppuStack_318);
  _objc_destroyWeak(auStack_310);
  _objc_destroyWeak(auStack_308);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2f8) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_310);
  _objc_destroyWeak(auStack_308);
  ppuVar1 = ppuVar4;
  __Unwind_Resume();
  pcStack_348 = FUN_10910f964;
  ppuVar8 = ppuVar1 + 5;
  ppuStack_370 = &puStack_338;
  puStack_368 = puVar7;
  ppuStack_360 = ppuVar3;
  ppuStack_358 = ppuVar4;
  pppuStack_350 = &ppuStack_2d0;
  _objc_loadWeakRetained();
  if (ppuVar8 != (undefined **)0x0) {
    if (puVar9 == (undefined *)0x0) {
      ppuVar4 = ppuVar8;
      func_0x00010c0d5720();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar4;
      func_0x00010c0c6600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar4);
    }
    else {
      ppuVar6 = (undefined **)0x0;
    }
    puStack_3a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_398 = 0xc2000000;
    pcStack_390 = FUN_10910fa5c;
    puStack_388 = &UNK_11084aaa8;
    puVar7 = ppuVar1[4];
    _objc_retain(puVar7);
    ppuStack_380 = ppuVar6;
    puStack_378 = puVar7;
    _objc_retain(ppuVar6);
    func_0x000107c312cc("APPSTORE",&puStack_3a0);
    _objc_release(ppuStack_380);
    _objc_release(puStack_378);
    _objc_release(ppuVar6);
  }
  _objc_release(ppuVar8);
  return;
}



/* Entry: 10910f574; end: 10910f817;  */

void FUN_10910f574(long param_1,undefined8 param_2,undefined *param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  long unaff_x21;
  long lVar10;
  undefined8 uVar11;
  undefined *unaff_x22;
  long lVar12;
  undefined *puStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined **ppuStack_1f0;
  undefined *puStack_1e8;
  ulong uStack_1e0;
  undefined *puStack_1d8;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined **ppuStack_180;
  long lStack_178;
  undefined *puStack_170;
  long lStack_168;
  ulong uStack_160;
  ulong uStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar10 = *(long *)(param_1 + 0x20);
    lStack_140 = param_1;
    _objc_retain(lVar10);
    lVar2 = lVar10;
    func_0x00010bf52a60();
    unaff_x22 = (undefined *)0x0;
    if (lVar2 != 0) {
      lVar12 = *plStack_120;
      do {
        lVar8 = 0;
        puVar5 = unaff_x22;
        do {
          if (*plStack_120 != lVar12) {
            _objc_enumerationMutation(lVar10);
          }
          uVar3 = uVar1;
          func_0x00010c0694a0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          puStack_138 = puVar5;
          func_0x00010c2533c0();
          unaff_x22 = puStack_138;
          _objc_retain(puStack_138);
          _objc_release(puVar5);
          _objc_release(uVar3);
          if (uVar4 < 2 || uVar4 == 3) {
            if (unaff_x22 == (undefined *)0x0) {
              unaff_x22 = PTR__OBJC_CLASS___NSError_1126ae858;
              func_0x00010c14cb80();
              _objc_retainAutoreleasedReturnValue();
            }
          }
          else if (uVar4 == 2) {
            uVar3 = uVar1;
            func_0x00010c0694a0(uVar1);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar3;
            func_0x00010c296f60();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(*(undefined8 *)(lStack_140 + 0x28));
            _objc_release(uVar4);
            _objc_release(uVar3);
          }
          lVar8 = lVar8 + 1;
          puVar5 = unaff_x22;
        } while (lVar2 != lVar8);
        lVar2 = lVar10;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(lVar10);
    _os_unfair_lock_lock(uVar1 + 0x18);
    lVar2 = lStack_140;
    func_0x00010bef7f60(*(undefined8 *)(uVar1 + 0x20));
    _os_unfair_lock_unlock(uVar1 + 0x18);
    unaff_x21 = *(long *)(lVar2 + 0x30);
    puVar5 = PTR_PTR_1126dd620;
    _objc_alloc(PTR_PTR_1126dd620);
    puVar9 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021060(puVar5);
    param_3 = unaff_x22;
    (**(code **)(unaff_x21 + 0x10))(unaff_x21,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar9);
    _objc_release(unaff_x22);
  }
  uVar3 = uVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(uVar1 + 0x18);
  uVar4 = uVar3;
  __Unwind_Resume();
  pcStack_148 = FUN_10910f818;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_170 = unaff_x22;
  lStack_168 = unaff_x21;
  uStack_160 = uVar3;
  uStack_158 = uVar1;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  _objc_initWeak(auStack_188,uVar4);
  ppuStack_180 = &PTR____CFConstantStringClassReference_110f54598;
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1b0 = 0xc2000000;
  pcStack_1a8 = FUN_10910f964;
  puStack_1a0 = &UNK_1108a68e8;
  _objc_copyWeak(auStack_190,auStack_188);
  _objc_retain(param_3);
  puVar9 = puVar5;
  puStack_198 = param_3;
  func_0x00010be4ed60(uVar4);
  _objc_release(puVar5);
  _objc_release(puStack_198);
  _objc_destroyWeak(auStack_190);
  _objc_destroyWeak(auStack_188);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_190);
  _objc_destroyWeak(auStack_188);
  puVar6 = param_3;
  __Unwind_Resume();
  pcStack_1c8 = FUN_10910f964;
  puVar7 = puVar6 + 0x28;
  ppuStack_1f0 = &puStack_1b8;
  puStack_1e8 = puVar5;
  uStack_1e0 = uVar4;
  puStack_1d8 = param_3;
  ppuStack_1d0 = &puStack_150;
  _objc_loadWeakRetained();
  if (puVar7 != (undefined *)0x0) {
    if (puVar9 == (undefined *)0x0) {
      puVar5 = puVar7;
      func_0x00010c0d5720();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar5;
      func_0x00010c0c6600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
    }
    else {
      puVar9 = (undefined *)0x0;
    }
    puStack_220 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_218 = 0xc2000000;
    pcStack_210 = FUN_10910fa5c;
    puStack_208 = &UNK_11084aaa8;
    uVar11 = *(undefined8 *)(puVar6 + 0x20);
    _objc_retain(uVar11);
    puStack_200 = puVar9;
    uStack_1f8 = uVar11;
    _objc_retain(puVar9);
    func_0x000107c312cc("APPSTORE",&puStack_220);
    _objc_release(puStack_200);
    _objc_release(uStack_1f8);
    _objc_release(puVar9);
  }
  _objc_release(puVar7);
  return;
}



/* Entry: 10910f818; end: 10910f963; -[SCAsset loadSubtitlesWithMainQueueCallback:] */

void FUN_10910f818(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  ppuStack_40 = &PTR____CFConstantStringClassReference_110f54598;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10910f964;
  puStack_60 = &UNK_1108a68e8;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  puVar5 = puVar1;
  lStack_58 = param_3;
  func_0x00010be4ed60(param_1);
  _objc_release(puVar1);
  _objc_release(lStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  lVar2 = param_3;
  __Unwind_Resume();
  pcStack_88 = FUN_10910f964;
  lVar3 = lVar2 + 0x28;
  ppuStack_b0 = &puStack_78;
  puStack_a8 = puVar1;
  uStack_a0 = param_1;
  lStack_98 = param_3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    if (puVar5 == (undefined *)0x0) {
      lVar4 = lVar3;
      func_0x00010c0d5720();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar4;
      func_0x00010c0c6600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
    }
    else {
      lVar6 = 0;
    }
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_10910fa5c;
    puStack_c8 = &UNK_11084aaa8;
    uVar7 = *(undefined8 *)(lVar2 + 0x20);
    _objc_retain(uVar7);
    lStack_c0 = lVar6;
    uStack_b8 = uVar7;
    _objc_retain(lVar6);
    func_0x000107c312cc("APPSTORE",&puStack_e0);
    _objc_release(lStack_c0);
    _objc_release(uStack_b8);
    _objc_release(lVar6);
  }
  _objc_release(lVar3);
  return;
}



/* Entry: 10910f964; end: 10910fa5b;  */

void FUN_10910f964(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_3 == 0) {
      lVar2 = lVar1;
      func_0x00010c0d5720();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0c6600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
    }
    else {
      lVar3 = 0;
    }
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10910fa5c;
    puStack_48 = &UNK_11084aaa8;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    lStack_40 = lVar3;
    uStack_38 = uVar4;
    _objc_retain(lVar3);
    func_0x000107c312cc("APPSTORE",&puStack_60);
    _objc_release(lStack_40);
    _objc_release(uStack_38);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10910fa5c; end: 10910fa6b;  */

void FUN_10910fa5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010910fa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10910fa6c; end: 10910fb6f; -[SCAsset duration] */

void FUN_10910fa6c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar1 = param_2;
  func_0x00010bee7e00(param_2,param_3,&PTR____CFConstantStringClassReference_110dd00b8);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    if (*(long *)(param_2 + 0x68) == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    else {
      func_0x00010bf8b160(param_1);
    }
    uStack_48 = param_1[1];
    uStack_50 = *param_1;
    uStack_40 = param_1[2];
    uStack_68 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_70 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_60 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    puVar2 = &uStack_50;
    _CMTimeCompare(puVar2,&uStack_70);
    if ((int)puVar2 != 0) {
      uStack_48 = param_1[1];
      uStack_50 = *param_1;
      uStack_40 = param_1[2];
      puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bee7de0(param_2);
      _objc_release(puVar3);
    }
  }
  else {
    func_0x00010bdc1140(param_1,lVar1);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10910fb70; end: 10910fbfb; -[SCAsset tracks] */

void FUN_10910fb70(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bee7e00(param_1,param_2,&PTR____CFConstantStringClassReference_110e3c5d8);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x68);
    func_0x00010c2791a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      func_0x00010bee7de0(param_1,param_2,&PTR____CFConstantStringClassReference_110e3c5d8,lVar2);
    }
  }
  else {
    _objc_retain(lVar1);
    lVar2 = lVar1;
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10910fbfc; end: 10910fc73; -[SCAsset _valueCacheReadForKey:] */

void FUN_10910fbfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0x18);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10910fc74; end: 10910fcef; -[SCAsset _valueCachePutForKey:value:] */

void FUN_10910fc74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x18);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20),param_2,param_4,param_3);
  _os_unfair_lock_unlock(param_1 + 0x18);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10910fcf0; end: 10910fd77; -[SCAsset _valueCacheCachedKeys] */

void FUN_10910fcf0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _os_unfair_lock_lock(param_1 + 0x18);
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf002e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10910fd78; end: 10910fda7; -[SCAsset setBufferedContentFetcher:] */

void FUN_10910fd78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10910fda8; end: 10910ffe3; -[SCAsset downloadAndSitchURLFor:mediaContextType:encryptionKey:encryptionIV:] */

void FUN_10910fda8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (*(long *)(param_1 + 0x38) == 0) {
    puVar9 = (undefined *)0x0;
    goto LAB_10910ffa0;
  }
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  lVar2 = *(long *)(param_1 + 0x40);
  if (lVar2 == 0) {
    lVar2 = param_3;
    func_0x00010b0eebcc(param_3,&PTR__OBJC_CLASS___NSConstantArray_1111837a0);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_5;
    func_0x00010c08fa60();
    lVar4 = lVar2;
    if ((lVar3 != 0) && (lVar3 = param_6, func_0x00010c08fa60(), lVar3 != 0)) {
      func_0x00010c2ad2a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
    }
    puVar9 = PTR_PTR_1126b1378;
    if (lVar4 != 0) {
      puVar5 = PTR_PTR_1126b1060;
      _objc_alloc(PTR_PTR_1126b1060);
      func_0x00010c032f60();
      func_0x00010c291560(puVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      uVar6 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bfa6dc0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x40) = uVar7;
      _objc_release(uVar8);
      _objc_release(uVar6);
      _objc_release(puVar9);
      _objc_release(lVar4);
      lVar2 = *(long *)(param_1 + 0x40);
      goto LAB_10910ff10;
    }
    puVar9 = (undefined *)0x0;
  }
  else {
LAB_10910ff10:
    func_0x00010c2556e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    func_0x00010c26d0c0(lVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar9 = puVar1;
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  _objc_release(puVar1);
LAB_10910ffa0:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10910ffe4; end: 1091100d7;  */

undefined8 FUN_10910ffe4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bfc1d60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0bfa60(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar1);
  return 0;
}



/* Entry: 1091100d8; end: 1091100df;  */

undefined8 FUN_1091100d8(void)

{
  return 0;
}



/* Entry: 1091100e0; end: 1091100e7; -[SCAsset subtitlesUrl] */

undefined8 FUN_1091100e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1091100e8; end: 109110117; -[SCAsset setSubtitlesUrl:] */

void FUN_1091100e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109110118; end: 10911011f; -[SCAsset contentViewSource] */

undefined8 FUN_109110118(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 109110120; end: 109110127; -[SCAsset setContentViewSource:] */

void FUN_109110120(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 109110128; end: 10911012f; -[SCAsset prefetchHintKiBPerTimeWindow] */

undefined8 FUN_109110128(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 109110130; end: 109110137; -[SCAsset setPrefetchHintKiBPerTimeWindow:] */

void FUN_109110130(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 109110138; end: 10911013f; -[SCAsset prefetchHintTimeWindowMs] */

undefined8 FUN_109110138(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 109110140; end: 109110147; -[SCAsset setPrefetchHintTimeWindowMs:] */

void FUN_109110140(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 109110148; end: 10911014f; -[SCAsset setMediaContextType:] */

void FUN_109110148(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 109110150; end: 10911015b; -[SCAsset internalNativeAsset] */

void FUN_109110150(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x68,1);
  return;
}



/* Entry: 10911015c; end: 109110163; -[SCAsset setInternalNativeAsset:] */

void FUN_10911015c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 109110164; end: 1091101e7; -[SCAsset .cxx_destruct] */

void FUN_109110164(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091101e8; end: 10911026b; -[SCMutableComposition initWithMediaAsset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1091101e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1127006c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112781a54;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10911026c; end: 10911027b; -[SCMutableComposition mediaAsset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10911026c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781a54);
}



/* Entry: 10911027c; end: 1091102bb; -[SCMutableComposition setMediaAsset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10911027c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112781a54;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091102bc; end: 1091102cf; -[SCMutableComposition .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091102bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112781a54,0);
  return;
}



/* Entry: 1091102d0; end: 109110373; -[SCPlaybackAssetValueLoadingResponseImpl initWithKeys:data:] */

undefined1 *
FUN_1091102d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127006d0;
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



/* Entry: 109110374; end: 1091103cf; -[SCPlaybackAssetValueLoadingResponseImpl playable] */

undefined8 FUN_109110374(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bdcf5e0(param_1,param_2,&PTR____CFConstantStringClassReference_110dfbf18);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0e00e0(uVar1,param_2,&PTR____CFConstantStringClassReference_110dfbf18);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1091103d0; end: 109110443; -[SCPlaybackAssetValueLoadingResponseImpl duration] */

void FUN_1091103d0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x00010bdcf5e0(param_2,param_3,&PTR____CFConstantStringClassReference_110dd00b8);
  lVar1 = *(long *)(param_2 + 0x10);
  func_0x00010c0e00e0(lVar1,param_3,&PTR____CFConstantStringClassReference_110dd00b8);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    func_0x00010bdc1140(param_1,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 109110444; end: 10911047b; -[SCPlaybackAssetValueLoadingResponseImpl tracks] */

void FUN_109110444(long param_1,undefined8 param_2)

{
  func_0x00010bdcf5e0(param_1,param_2,&PTR____CFConstantStringClassReference_110e3c5d8);
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_objectForKeyedSubscript__112615a50,
             &PTR____CFConstantStringClassReference_110e3c5d8);
  return;
}



/* Entry: 10911047c; end: 1091104b7; -[SCPlaybackAssetValueLoadingResponseImpl trackCount] */

undefined8 FUN_10911047c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c2791a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1091104b8; end: 1091104bb; -[SCPlaybackAssetValueLoadingResponseImpl _assertForKeyLoaded:] */

void FUN_1091104b8(void)

{
  return;
}



/* Entry: 1091104bc; end: 1091104eb; -[SCPlaybackAssetValueLoadingResponseImpl .cxx_destruct] */

void FUN_1091104bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091104ec; end: 109110523;  */

void FUN_1091104ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getAssociatedObject_11034d240)
            (param_1,PTR_s_contentRetrievalMetrics_1125b0eb0);
  return;
}



/* Entry: 109110524; end: 109110673;  */

void FUN_109110524(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf4d420();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf4d2e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c15a360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 109110674; end: 1091106db;  */

undefined ** FUN_109110674(ulong param_1)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  func_0x00010bf4d420();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c108000();
    if (uVar1 < 0x23) {
      ppuVar2 = (undefined **)(&PTR_PTR_110adcd18)[uVar1];
    }
    else {
      ppuVar2 = &PTR____CFConstantStringClassReference_110daf6b8;
    }
  }
  _objc_release(param_1);
  return ppuVar2;
}



/* Entry: 1091106dc; end: 1091109fb;  */

ulong FUN_1091106dc(ulong param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar2;
  
  _objc_retain(param_3);
  if (param_3 == param_1) {
    param_1 = 1;
    goto LAB_1091109d4;
  }
  if (param_3 != 0) {
    uVar2 = param_3;
    _objc_opt_class();
    iVar1 = (int)uVar2;
    _objc_opt_class(param_1);
    func_0x00010c071ae0();
    puVar3 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    if (iVar1 != 0) {
      _objc_retain(param_1);
      _objc_opt_class(puVar3);
      uVar4 = param_1;
      _objc_opt_isKindOfClass(param_1,puVar3);
      uVar2 = param_1;
      if ((uVar4 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(param_1);
      puVar3 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
      _objc_retain(param_3);
      _objc_opt_class(puVar3);
      uVar5 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      uVar4 = param_3;
      if ((uVar5 & 1) == 0) {
        uVar4 = 0;
      }
      _objc_retain(uVar4);
      _objc_release(param_3);
      if ((uVar2 == 0) || ((uVar5 & 1) == 0)) {
        func_0x00010c071ae0(param_1);
      }
      else {
        uVar5 = param_1;
        func_0x00010bdc2b80();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar4;
        func_0x00010bdc2b80(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar5;
        func_0x00010c071ae0();
        _objc_release(uVar6);
        _objc_release(uVar5);
        if ((uVar7 & 1) == 0) {
          uVar5 = param_1;
          func_0x00010bdc2b80();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010bfe4420();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar4;
          func_0x00010bdc2b80(uVar4);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010bfe4420();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar6;
          func_0x00010c071ae0();
          _objc_release(uVar8);
          _objc_release(uVar7);
          _objc_release(uVar6);
          _objc_release(uVar5);
          if ((int)uVar9 != 0) {
            uVar5 = param_1;
            func_0x00010bdc2b80();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar5;
            func_0x00010c11d080();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar6;
            func_0x00010c11f420();
            _objc_release(uVar6);
            _objc_release(uVar5);
            if (uVar7 != 0x7fffffffffffffff) {
              uVar5 = param_1;
              func_0x00010bdc2b80();
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar5;
              func_0x00010c0f58c0();
              _objc_retainAutoreleasedReturnValue();
              uVar7 = uVar6;
              func_0x00010c0720c0();
              _objc_release(uVar6);
              _objc_release(uVar5);
              if ((int)uVar7 != 0) {
                func_0x00010bdc2b80(param_1);
                _objc_retainAutoreleasedReturnValue();
                uVar5 = param_1;
                func_0x00010c0f5800();
                _objc_retainAutoreleasedReturnValue();
                uVar6 = uVar4;
                func_0x00010bdc2b80(uVar4);
                _objc_retainAutoreleasedReturnValue();
                uVar7 = uVar6;
                func_0x00010c0f5800();
                _objc_retainAutoreleasedReturnValue();
                uVar8 = uVar5;
                func_0x00010c071ae0(uVar5);
                _objc_release(uVar7);
                _objc_release(uVar6);
                _objc_release(uVar5);
                _objc_release(param_1);
                param_1 = uVar8;
                goto LAB_1091109c4;
              }
            }
          }
          param_1 = 0;
        }
        else {
          param_1 = 1;
        }
      }
LAB_1091109c4:
      _objc_release(uVar4);
      _objc_release(uVar2);
      goto LAB_1091109d4;
    }
  }
  param_1 = 0;
LAB_1091109d4:
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1091109fc; end: 109110c43;  */

double FUN_1091109fc(double param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  double dStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  double dStack_168;
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
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  _objc_opt_class(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
  uVar4 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar3);
  if ((uVar4 & 1) != 0) {
    uVar4 = param_2;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    uStack_100 = 0;
    uStack_108 = 0;
    uVar7 = uVar4;
    func_0x00010bfc99e0();
    uVar2 = uStack_100;
    _objc_retain(uStack_100);
    uVar1 = uStack_108;
    _objc_retain(uStack_108);
    _objc_release(uVar4);
    if ((uVar7 & 1) == 0) {
      _objc_release(uVar1);
      _objc_release(uVar2);
    }
    else {
      func_0x00010bfb2c80(uVar2);
      dVar9 = param_1;
      _objc_release(uVar1);
      _objc_release(uVar2);
      if (SUB84(param_1,0) != 0.0) {
        puVar3 = PTR__OBJC_CLASS___AVComposition_1126cfa20;
        _objc_opt_class(PTR__OBJC_CLASS___AVComposition_1126cfa20);
        uVar4 = param_2;
        _objc_opt_isKindOfClass(param_2,puVar3);
        if ((uVar4 & 1) == 0) {
          dVar10 = (double)SUB84(param_1,0);
          goto LAB_109110c00;
        }
      }
    }
  }
  func_0x00010c2791a0();
  _objc_retainAutoreleasedReturnValue();
  dVar9 = 0.0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uVar4 = param_2;
  func_0x00010bf52a60();
  if (uVar4 == 0) {
    dVar10 = 0.0;
  }
  else {
    lVar6 = *plStack_140;
    fVar11 = 0.0;
    do {
      uVar7 = 0;
      do {
        fVar8 = SUB84(dVar9,0);
        if (*plStack_140 != lVar6) {
          _objc_enumerationMutation(param_2);
        }
        lVar5 = *(long *)(lStack_148 + uVar7 * 8);
        func_0x00010bf99700(lVar5);
        if (lVar5 == 0) {
          dStack_168 = 0.0;
          uStack_170 = 0;
          uStack_158 = 0;
          uStack_160 = 0;
          uStack_178 = 0;
          uStack_180 = 0;
        }
        else {
          func_0x00010c26f620(&uStack_180,lVar5);
        }
        uStack_198 = uStack_160;
        dStack_1a0 = dStack_168;
        uStack_190 = uStack_158;
        dVar10 = dStack_168;
        _CMTimeGetSeconds(&dStack_1a0);
        dVar9 = (double)(ulong)(uint)(float)dVar10;
        fVar11 = fVar11 + fVar8 * 0.125 * (float)dVar10;
        uVar7 = uVar7 + 1;
      } while (uVar4 != uVar7);
      uVar4 = param_2;
      func_0x00010bf52a60();
    } while (uVar4 != 0);
    dVar10 = (double)fVar11;
  }
  _objc_release(param_2);
LAB_109110c00:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return dVar10;
  }
  ___stack_chk_fail();
  func_0x00010bf9eda0();
  return dVar9;
}



/* Entry: 109110c44; end: 109110c7f;  */

void FUN_109110c44(void)

{
  func_0x00010bf9eda0();
  return;
}



/* Entry: 109110c80; end: 109110e7b;  */

void FUN_109110c80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8,
                  long param_9)

{
  bool bVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  _objc_retain(param_8);
  puVar2 = PTR__OBJC_CLASS___AVAssetImageGenerator_1126ba170;
  _objc_alloc();
  func_0x00010bff41a0();
  func_0x00010c169b80();
  uStack_88 = param_7[1];
  uStack_90 = *param_7;
  uStack_80 = param_7[2];
  func_0x00010c1ec3e0(puVar2);
  uStack_88 = param_7[1];
  uStack_90 = *param_7;
  uStack_80 = param_7[2];
  func_0x00010c1ec3c0(puVar2);
  func_0x00010c1c3cc0(param_1,param_2,puVar2);
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_109110e7c;
  puStack_c0 = &UNK_110adce30;
  uStack_b8 = param_6;
  uStack_b0 = param_8;
  uStack_a8 = param_1;
  uStack_a0 = param_2;
  uStack_98 = param_3;
  _objc_retain(param_6);
  _objc_retain(param_8);
  ppuVar3 = &puStack_d8;
  _objc_retainBlock();
  uStack_88 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_90 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_80 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297200();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar4;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bfbf180(puVar2);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  _objc_release(uStack_b8);
  _objc_release(uStack_b0);
  _objc_release(param_6);
  _objc_release(param_8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if ((puVar7 != (undefined *)0x0) && (param_9 == 0)) {
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe9240(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    if (*(long *)(puVar2 + 0x20) != 0) {
      func_0x00010befa160(puVar5);
    }
    dVar9 = *(double *)(puVar2 + 0x30);
    dVar10 = *(double *)(puVar2 + 0x38);
    dVar8 = *(double *)PTR__CGSizeZero_110347620;
    bVar1 = false;
    if ((dVar9 == dVar8) &&
       (bVar1 = false, !NAN(dVar10) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
      bVar1 = dVar10 == *(double *)(PTR__CGSizeZero_110347620 + 8);
    }
    if (bVar1) {
      func_0x00010c23d0a0(puVar4);
      dVar9 = dVar8;
      func_0x00010c14e120(puVar4);
      dVar8 = dVar8 * dVar9;
      dVar10 = *(double *)(puVar2 + 0x40);
      dVar9 = dVar8 / dVar10;
      func_0x00010c23d0a0(puVar4);
      func_0x00010c14e120(puVar4);
      dVar10 = (dVar10 * dVar8) / *(double *)(puVar2 + 0x40);
    }
    puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
    puVar6 = puVar5;
    func_0x00010bf51e00(puVar5);
    func_0x00010bfe6ce0(dVar9,dVar10,*(undefined8 *)(puVar2 + 0x40),puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    (**(code **)(*(long *)(puVar2 + 0x28) + 0x10))(*(long *)(puVar2 + 0x28),puVar7,0);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000109111010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar2 + 0x28) + 0x10))(*(long *)(puVar2 + 0x28),0,param_9);
  return;
}



/* Entry: 109110e7c; end: 109111013;  */

void FUN_109110e7c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if ((param_3 != 0) && (param_6 == 0)) {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe9240(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    if (*(long *)(param_1 + 0x20) != 0) {
      func_0x00010befa160(puVar3);
    }
    dVar7 = *(double *)(param_1 + 0x30);
    dVar8 = *(double *)(param_1 + 0x38);
    dVar6 = *(double *)PTR__CGSizeZero_110347620;
    bVar1 = false;
    if ((dVar7 == dVar6) &&
       (bVar1 = false, !NAN(dVar8) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
      bVar1 = dVar8 == *(double *)(PTR__CGSizeZero_110347620 + 8);
    }
    if (bVar1) {
      func_0x00010c23d0a0(puVar2);
      dVar7 = dVar6;
      func_0x00010c14e120(puVar2);
      dVar6 = dVar6 * dVar7;
      dVar8 = *(double *)(param_1 + 0x40);
      dVar7 = dVar6 / dVar8;
      func_0x00010c23d0a0(puVar2);
      func_0x00010c14e120(puVar2);
      dVar8 = (dVar8 * dVar6) / *(double *)(param_1 + 0x40);
    }
    puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
    puVar4 = puVar3;
    func_0x00010bf51e00(puVar3);
    func_0x00010bfe6ce0(dVar7,dVar8,*(undefined8 *)(param_1 + 0x40),puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar5,0);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000109111010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,param_6);
  return;
}



/* Entry: 109111014; end: 109111063;  */

void FUN_109111014(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = param_3[1];
  uStack_30 = *param_3;
  uStack_20 = param_3[2];
  uStack_48 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_50 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_40 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  func_0x00010bfe6c40(param_1,param_2,&uStack_30,&uStack_50,param_4);
  return;
}



/* Entry: 109111064; end: 109111203;  */

void FUN_109111064(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___AVAssetImageGenerator_1126ba170;
  _objc_alloc();
  func_0x00010bff41a0();
  func_0x00010c169b80();
  uStack_68 = param_4[1];
  uStack_70 = *param_4;
  uStack_60 = param_4[2];
  func_0x00010c1ec3e0(puVar1);
  uStack_68 = param_4[1];
  uStack_70 = *param_4;
  uStack_60 = param_4[2];
  func_0x00010c1ec3c0(puVar1);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_109111204;
  puStack_80 = &UNK_110919150;
  uStack_78 = param_5;
  _objc_retain(param_5);
  ppuVar2 = &puStack_98;
  _objc_retainBlock(ppuVar2);
  uStack_68 = param_3[1];
  uStack_70 = *param_3;
  uStack_60 = param_3[2];
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297200();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bfbf180(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(ppuVar2);
  _objc_release(uStack_78);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if ((puVar5 != (undefined *)0x0) && (param_6 == 0)) {
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe9240(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(*(long *)(puVar1 + 0x20) + 0x10))(*(long *)(puVar1 + 0x20),puVar3,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000109111270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + 0x20) + 0x10))(*(long *)(puVar1 + 0x20),0,param_6);
  return;
}



/* Entry: 109111204; end: 109111273;  */

void FUN_109111204(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  
  if ((param_3 != 0) && (param_6 == 0)) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe9240(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000109111270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,param_6);
  return;
}



/* Entry: 109111274; end: 109111383;  */

void FUN_109111274(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar1 = PTR__OBJC_CLASS___AVAssetImageGenerator_1126ba170;
  _objc_alloc();
  func_0x00010bff41a0();
  func_0x00010c169b80();
  uVar6 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uVar5 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uVar4 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  uStack_60 = uVar5;
  uStack_58 = uVar6;
  uStack_50 = uVar4;
  func_0x00010c1ec3e0(puVar1,param_4,&uStack_60);
  uStack_60 = uVar5;
  uStack_58 = uVar6;
  uStack_50 = uVar4;
  func_0x00010c1ec3c0(puVar1,param_4,&uStack_60);
  func_0x00010c1c3cc0(param_1,param_2,puVar1);
  uStack_58 = param_5[1];
  uStack_60 = *param_5;
  uStack_50 = param_5[2];
  puVar2 = puVar1;
  func_0x00010bf51e60(puVar1,param_4,&uStack_60,0,0);
  if (puVar2 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe9240(PTR__OBJC_CLASS___UIImage_1126aea68,param_4,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _CGImageRelease(puVar2);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 109111384; end: 10911150b;  */

void FUN_109111384(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain();
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_5 == 0) {
LAB_109111488:
    if (param_7 == 0) goto LAB_1091114d8;
    lVar2 = param_7;
    func_0x00010c245f60();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      func_0x00010c211780(lVar2);
      func_0x00010bfb68e0(param_7);
      func_0x00010c19f0e0(lVar2);
      func_0x00010befbb60(param_8);
    }
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d5740();
    _objc_release(puVar1);
    lVar2 = param_5;
    func_0x00010c266c00(param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) goto LAB_109111488;
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
    func_0x00010c01bf60();
    func_0x00010c211780();
    func_0x00010bf20c00(param_8);
    func_0x00010c19f0e0(puVar1);
    func_0x00010c182220(puVar1);
    func_0x00010c17d4c0(puVar1);
    func_0x00010befbb60(param_8);
    _objc_release(puVar1);
  }
  _objc_release(lVar2);
LAB_1091114d8:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  return;
}



/* Entry: 10911150c; end: 10911153f;  */

void FUN_10911150c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c29ea20(param_1,param_2,9999);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109111540; end: 109111637;  */

void FUN_109111540(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010c077480();
  if ((int)puVar1 == 0) {
    func_0x00010be4ea20(param_1);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = 0;
    _dispatch_get_global_queue(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_109111638;
    puStack_50 = &UNK_110848708;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    uStack_48 = param_3;
    func_0x000107c27d8c(uVar2,&puStack_68);
    _objc_release(uVar2);
    _objc_release(uStack_48);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 109111638; end: 10911166b;  */

void FUN_109111638(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4ea20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10911166c; end: 10911187f;  */

void FUN_10911166c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  uStack_68 = 0x109111790;
  puStack_60 = &UNK_11084a9e8;
  uStack_58 = param_1;
  puStack_50 = puVar2;
  uStack_48 = param_3;
  _objc_retain(param_3);
  _objc_retain(puVar2);
  func_0x00010c09c640(param_1);
  _objc_release(puVar3);
  _objc_release(uStack_48);
  _objc_release(puStack_50);
  _objc_release(param_3);
  puVar4 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  uStack_88 = 0x109111790;
  lVar5 = *(long *)(puVar4 + 0x20);
  uStack_b8 = 0;
  puStack_b0 = puVar3;
  uStack_a8 = param_1;
  puStack_a0 = puVar2;
  uStack_98 = param_3;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x00010c2533c0();
  uVar1 = uStack_b8;
  _objc_retain(uStack_b8);
  uVar6 = 0;
  if (lVar5 == 2) {
    uVar6 = *(undefined8 *)(puVar4 + 0x20);
    func_0x00010c0c6600();
    _objc_retainAutoreleasedReturnValue();
  }
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_109111880;
  puStack_d0 = &UNK_11084aaa8;
  uVar7 = *(undefined8 *)(puVar4 + 0x30);
  _objc_retain(uVar7);
  uStack_c8 = uVar6;
  uStack_c0 = uVar7;
  _objc_retain(uVar6);
  func_0x000107c312cc("APPSTORE",&puStack_e8);
  _objc_release(uStack_c8);
  _objc_release(uStack_c0);
  _objc_release(uVar1);
  _objc_release(uVar6);
  return;
}



/* Entry: 109111880; end: 10911188f;  */

void FUN_109111880(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010911188c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 109111890; end: 1091119d3;  */

void FUN_109111890(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar4 = param_4;
  func_0x00010c0ec860();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010bf529e0();
  _objc_release(lVar4);
  lVar4 = 0;
  if (lVar1 != 0) {
    lVar4 = param_4;
    func_0x00010c0ec860();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x000107c31908();
    _objc_release(lVar4);
    lVar4 = lVar1;
    func_0x00010bf529e0();
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      uStack_58 = 0x109111a38;
      puStack_50 = &UNK_110adcea0;
      _objc_retain(param_3);
      lVar2 = lVar1;
      uStack_48 = param_3;
      func_0x000107c31908(lVar1,&puStack_68);
      lVar3 = lVar2;
      func_0x00010bf529e0();
      lVar4 = lVar1;
      if (lVar3 != 0) {
        lVar4 = lVar2;
      }
      func_0x00010c0dfd40(lVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(uStack_48);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1091119d4; end: 109111abf;  */

void FUN_1091119d4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c09e1e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = param_2;
  }
  _objc_retain(lVar1);
  _objc_release(param_2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 109111ac0; end: 109111bb3;  */

void FUN_109111ac0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c11fdc0();
  func_0x00010c0df740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f180();
  uVar2 = param_1;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c14c9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110f21a98);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 109111bb4; end: 109111c43;  */

bool FUN_109111bb4(float param_1,long param_2)

{
  float fVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  lVar2 = param_2;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar2 == 0) && (lVar3 = param_2, func_0x00010c26f180(), lVar3 == 2)) {
    func_0x00010c11fdc0(param_2);
    fVar1 = ABS(param_1 + 0.0) * 2.220446e-16;
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    bVar4 = fVar1 <= ABS(param_1);
  }
  else {
    bVar4 = false;
  }
  _objc_release(lVar2);
  return bVar4;
}



/* Entry: 109111c44; end: 109111e5b;  */

bool FUN_109111c44(double param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c07a320();
  if (((uVar2 & 1) == 0) && (uVar2 = param_2, func_0x00010c07a360(), (uVar2 & 1) == 0)) {
    if (param_2 == 0) {
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
    }
    else {
      func_0x00010c09c8c0(&uStack_48,param_2);
    }
    _CMTimeGetSeconds(&uStack_48);
    dVar3 = ABS(param_1);
    dVar4 = ABS(param_1 + 0.0) * 2.220446049250313e-16;
    bVar1 = true;
    if ((2.2250738585072014e-308 <= dVar3) && (bVar1 = false, !NAN(dVar3) && !NAN(dVar4))) {
      bVar1 = dVar3 < dVar4;
    }
    if (bVar1) {
      bVar1 = false;
      goto LAB_109111c80;
    }
    func_0x00010c09ca00(param_2);
    dVar4 = param_1 * dVar3;
    if (param_2 == 0) {
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
    }
    else {
      func_0x00010c09c8a0(&uStack_48,param_2);
    }
    _CMTimeGetSeconds(&uStack_48);
    if (dVar4 - dVar3 <= 2.0) {
      bVar1 = ABS(param_1 - dVar4) < 2.0;
      goto LAB_109111c80;
    }
  }
  bVar1 = true;
LAB_109111c80:
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 109111e5c; end: 109111e97;  */

undefined8 FUN_109111e5c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c14d840();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 109111e98; end: 109111f5b;  */

long FUN_109111e98(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_3 == param_1) {
    lVar2 = 1;
  }
  else {
    if (param_3 != 0) {
      lVar2 = param_3;
      _objc_opt_class();
      lVar1 = param_1;
      _objc_opt_class(param_1);
      func_0x00010c071ae0(lVar2,param_2,lVar1);
      if ((int)lVar2 != 0) {
        func_0x00010bf0af00(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = param_3;
        func_0x00010bf0af00(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = param_1;
        func_0x00010c14d1a0(param_1,param_2,lVar1);
        _objc_release(lVar1);
        _objc_release(param_1);
        goto LAB_109111f40;
      }
    }
    lVar2 = 0;
  }
LAB_109111f40:
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 109111f5c; end: 109112033;  */

void FUN_109111f5c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = param_2;
  func_0x00010c252d60();
  puVar1 = PTR__kCMTimeZero_110348670;
  if (lVar2 == 1) {
    lVar2 = param_2;
    func_0x00010bf0af00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c2533c0();
    _objc_retain(0);
    _objc_release(lVar2);
    puVar1 = PTR__kCMTimeZero_110348670;
    if (lVar3 == 2) {
      func_0x00010bf60480(param_1,param_2);
    }
    else {
      uVar4 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      param_1[1] = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      *param_1 = uVar4;
      param_1[2] = *(undefined8 *)(puVar1 + 0x10);
    }
    _objc_release(0);
  }
  else {
    uVar4 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    param_1[1] = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    *param_1 = uVar4;
    param_1[2] = *(undefined8 *)(puVar1 + 0x10);
  }
  return;
}



/* Entry: 109112034; end: 1091120c3;  */

void FUN_109112034(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010c2533c0();
  puVar1 = PTR__kCMTimeZero_110348670;
  if (lVar2 == 2) {
    if (param_2 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    else {
      func_0x00010bf8b160(param_1,param_2);
    }
  }
  else {
    uVar3 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    param_1[1] = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    *param_1 = uVar3;
    param_1[2] = *(undefined8 *)(puVar1 + 0x10);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1091120c4; end: 109112323;  */

void FUN_1091120c4(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar2 = param_2;
  func_0x00010c09ca60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  puVar1 = PTR__kCMTimeZero_110348670;
  if (lVar3 == 0) {
    uVar4 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    param_1[1] = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    *param_1 = uVar4;
    param_1[2] = *(undefined8 *)(puVar1 + 0x10);
  }
  else {
    func_0x00010c09ca60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
    }
    else {
      func_0x00010bdc1120(&uStack_60,lVar2);
    }
    _objc_release(lVar2);
    _objc_release(param_2);
    uStack_78 = uStack_58;
    uStack_80 = uStack_60;
    uStack_70 = uStack_50;
    uStack_98 = uStack_40;
    uStack_a0 = uStack_48;
    uStack_90 = uStack_38;
    _CMTimeAdd(param_1,&uStack_80,&uStack_a0);
  }
  return;
}



/* Entry: 109112324; end: 1091124e3;  */

double * FUN_109112324(double param_1,double *param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  double *pdVar3;
  undefined8 unaff_x20;
  long lVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined8 uStack_1d0;
  double *pdStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  double dStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 auStack_178 [24];
  double dStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
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
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09c8c0(&dStack_160);
  pdVar3 = &dStack_160;
  _CMTimeGetSeconds(pdVar3);
  dVar6 = ABS(param_1);
  dVar7 = ABS(param_1 + 0.0) * 2.220446049250313e-16;
  bVar1 = true;
  if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar7))) {
    bVar1 = dVar6 < dVar7;
  }
  dVar6 = 0.0;
  if (!bVar1) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    func_0x00010c09ca60();
    _objc_retainAutoreleasedReturnValue();
    pdVar3 = param_2;
    func_0x00010bf52a60();
    dVar7 = 0.0;
    if (pdVar3 != (double *)0x0) {
      lVar4 = *plStack_120;
      do {
        pdVar5 = (double *)0x0;
        do {
          if (*plStack_120 != lVar4) {
            _objc_enumerationMutation(param_2);
          }
          if (*(long *)(lStack_128 + (long)pdVar5 * 8) == 0) {
            uStack_148 = 0;
            uStack_150 = 0;
            uStack_138 = 0;
            uStack_140 = 0;
            uStack_158 = 0;
            dStack_160 = 0.0;
          }
          else {
            func_0x00010bdc1120(&dStack_160);
          }
          uStack_188 = uStack_140;
          uStack_190 = uStack_148;
          uStack_180 = uStack_138;
          uStack_1a8 = uStack_158;
          dStack_1b0 = dStack_160;
          uStack_1a0 = uStack_150;
          dVar6 = dStack_160;
          _CMTimeAdd(auStack_178,&uStack_190,&dStack_1b0);
          _CMTimeGetSeconds(auStack_178);
          dVar7 = dVar7 + dVar6 / param_1;
          pdVar5 = (double *)((long)pdVar5 + 1);
        } while (pdVar3 != pdVar5);
        pdVar3 = param_2;
        func_0x00010bf52a60();
        unaff_x20 = 0;
      } while (pdVar3 != (double *)0x0);
    }
    pdVar3 = param_2;
    _objc_release(param_2);
    if (dVar7 <= 0.0) {
      dVar7 = 0.0;
    }
    dVar6 = 1.0;
    if (dVar7 <= 1.0) {
      dVar6 = dVar7;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pdVar3;
  }
  ___stack_chk_fail();
  pcStack_1b8 = FUN_1091124e4;
  uStack_1d0 = unaff_x20;
  pdStack_1c8 = param_2;
  puStack_1c0 = &stack0xfffffffffffffff0;
  func_0x00010c09c8c0(auStack_1e8);
  _CMTimeGetSeconds(auStack_1e8);
  if (dVar6 <= 0.0) {
    pdVar3 = (double *)0x0;
  }
  else {
    func_0x00010c09c8a0(auStack_1e8,pdVar3);
    func_0x00010c09c8c0(auStack_200,pdVar3);
    puVar2 = auStack_1e8;
    _CMTimeCompare(puVar2,auStack_200);
    pdVar3 = (double *)(ulong)(~(uint)puVar2 >> 0x1f);
  }
  return pdVar3;
}



/* Entry: 1091124e4; end: 109112553;  */

uint FUN_1091124e4(double param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x00010c09c8c0(auStack_38);
  _CMTimeGetSeconds(auStack_38);
  if (param_1 <= 0.0) {
    uVar1 = 0;
  }
  else {
    func_0x00010c09c8a0(auStack_38,param_2);
    func_0x00010c09c8c0(auStack_50,param_2);
    puVar2 = auStack_38;
    _CMTimeCompare(puVar2,auStack_50);
    uVar1 = ~(uint)puVar2 >> 0x1f;
  }
  return uVar1;
}



/* Entry: 109112554; end: 1091127db;  */

void FUN_109112554(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_58 [24];
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar2 = param_1;
  func_0x00010c252d60(param_1);
  func_0x00010c0df780(puVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110ebf138);
  _objc_release(puVar3);
  func_0x00010c09c8c0(auStack_58,param_1);
  _CMTimeGetSeconds(auStack_58);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110ebf118);
  _objc_release(puVar3);
  func_0x00010c09c8a0(auStack_58,param_1);
  _CMTimeGetSeconds(auStack_58);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110ebf0f8);
  _objc_release(puVar3);
  func_0x00010beecca0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf9a520();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(param_1);
  if (lVar4 != 0) {
    func_0x00010c158620(lVar4);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110ebf0d8);
    _objc_release(puVar3);
    lVar2 = lVar4;
    func_0x00010c0deb40(lVar4);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110f21ab8);
    _objc_release(puVar3);
    func_0x00010c2523a0(lVar4);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110f21b18);
    _objc_release(puVar3);
    lVar2 = lVar4;
    func_0x00010c0decc0(lVar4);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110f21ad8);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0e1240(lVar4);
    func_0x00010c0df720(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110f21af8);
    _objc_release(puVar3);
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1091127dc; end: 109113053;  */

void FUN_1091127dc(undefined **param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  _objc_opt_class(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
  ppuVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  ppuVar1 = param_1;
  if (((ulong)ppuVar3 & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
  _objc_release(param_1);
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110f21b38;
  }
  else {
    func_0x00010bdc2b80(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = param_1;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 109113054; end: 109113227;  */

ulong FUN_109113054(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010be3f160();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be44590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__isStreamingConnectionError_11256eb00);
  return param_1;
}



/* Entry: 109113228; end: 10911336f;  */

undefined * FUN_109113228(float param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar1 = param_4;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = param_4;
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (puVar1 == (undefined *)0x0) {
      _objc_opt_class(param_2);
      func_0x00010bf6e340();
      _objc_retainAutoreleasedReturnValue();
      uStack_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_40 = &PTR____CFConstantStringClassReference_110f21e98;
      puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&ppuStack_40,&uStack_48,1
                         );
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240(puVar2,param_3,param_2,0,puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_release(param_2);
      puVar1 = puVar2;
    }
  }
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010c267460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(param_4);
  return (undefined *)(ulong)(14.0 <= param_1);
}



/* Entry: 109113370; end: 1091133b3; -[SCDevice supportsWEBP] */

bool FUN_109113370(float param_1,undefined8 param_2)

{
  func_0x00010c267460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(param_2);
  return 14.0 <= param_1;
}



/* Entry: 1091133b4; end: 1091133f7; -[SCDevice supportsHEIF] */

bool FUN_1091133b4(float param_1,undefined8 param_2)

{
  func_0x00010c267460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(param_2);
  return 11.0 <= param_1;
}



/* Entry: 1091133f8; end: 1091133ff; -[SCDevice supportsAVIF] */

undefined8 FUN_1091133f8(void)

{
  return 0;
}



/* Entry: 109113400; end: 109113457; +[SCPlaybackPlayerEvent onIsPlayingChangedWithIsPlaying:] */

void FUN_109113400(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126dd630;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[0x10] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 109113458; end: 1091134a3; +[SCPlaybackPlayerEvent onPlaybackEnd] */

void FUN_109113458(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126dd630;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091134a4; end: 109113503; +[SCPlaybackPlayerEvent onPlaybackProgressUpdatedWithCurrentPositionSecs:playbackDurationSecs:] */

void FUN_1091134a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126dd630;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 7;
  *(undefined8 *)(puVar2 + 0x40) = param_1;
  *(undefined8 *)(puVar2 + 0x48) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 109113504; end: 109113577; +[SCPlaybackPlayerEvent onPlayerBufferChangedWithIsPlaybackLikelyToKeepUp:bufferedTimeRangesInternal:] */

void FUN_109113504(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126dd630;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  puVar2[0x28] = param_3;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 109113578; end: 1091135e3; +[SCPlaybackPlayerEvent onPlayerErrorWithError:] */

void FUN_109113578(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126dd630;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091135e4; end: 10911363f; +[SCPlaybackPlayerEvent onPlayerRateChangedWithRate:] */

void FUN_1091135e4(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126dd630;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
  *(undefined4 *)(puVar2 + 0x38) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 109113640; end: 10911368b; +[SCPlaybackPlayerEvent onPlayerReady] */

void FUN_109113640(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126dd630;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10911368c; end: 1091136e7; +[SCPlaybackPlayerEvent onPlayerStateChangedWithState:] */

void FUN_10911368c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126dd630;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091136e8; end: 10911370b; -[SCPlaybackPlayerEvent copyWithZone:] */

undefined8 FUN_1091136e8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10911370c; end: 10911380b; -[SCPlaybackPlayerEvent hash] */

void FUN_10911370c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_70 = *(undefined8 *)(param_1 + 8);
  uStack_68 = (ulong)*(byte *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x20);
  lStack_58 = -lVar4;
  if (-1 < lVar4) {
    lStack_58 = lVar4;
  }
  uStack_50 = (ulong)*(byte *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar5 = (ulong)*(uint *)(param_1 + 0x38) * 0x200000 - 1;
  uVar5 = (uVar5 ^ uVar5 >> 0x18) * 0x109;
  uVar5 = (uVar5 ^ uVar5 >> 0xe) * 0x15;
  lStack_40 = (uVar5 ^ uVar5 >> 0x1c) * 0x80000001;
  uVar5 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_38 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_48 = uVar2;
  func_0x000107c3191c(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_98 = PTR_PTR_1127006d8;
  puStack_a0 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_a0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10911380c; end: 10911384f; -[SCPlaybackPlayerEvent internalInit] */

void FUN_10911380c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1127006d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109113850; end: 1091139cf; -[SCPlaybackPlayerEvent isEqual:] */

long FUN_109113850(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1091139a8:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1091139b4;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
          (*(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10))) &&
         (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
        (*(char *)(param_1 + 0x28) == *(char *)(param_3 + 0x28))))) {
      fVar7 = ABS(*(float *)(param_1 + 0x38) - *(float *)(param_3 + 0x38));
      fVar5 = ABS(*(float *)(param_1 + 0x38) + *(float *)(param_3 + 0x38)) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar7) && (bVar1 = false, !NAN(fVar7) && !NAN(fVar5))) {
        bVar1 = fVar7 < fVar5;
      }
      if (bVar1) {
        dVar8 = ABS(*(double *)(param_1 + 0x40) - *(double *)(param_3 + 0x40));
        dVar6 = ABS(*(double *)(param_1 + 0x40) + *(double *)(param_3 + 0x40)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar6))) {
          bVar1 = dVar8 < dVar6;
        }
        if (bVar1) {
          dVar6 = ABS(*(double *)(param_1 + 0x48) - *(double *)(param_3 + 0x48));
          if (((dVar6 < 2.2250738585072014e-308) ||
              (dVar6 < ABS(*(double *)(param_1 + 0x48) + *(double *)(param_3 + 0x48)) *
                       2.220446049250313e-16)) &&
             ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
            lVar4 = *(long *)(param_1 + 0x30);
            if (lVar4 != *(long *)(param_3 + 0x30)) {
              func_0x00010c071ae0();
              goto LAB_1091139b4;
            }
            goto LAB_1091139a8;
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_1091139b4:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 1091139d0; end: 109113bab; -[SCPlaybackPlayerEvent matchOnIsPlayingChanged:onPlayerError:onPlayerReady:onPlayerStateChanged:onPlayerBufferChanged:onPlaybackEnd:onPlayerRateChanged:onPlaybackProgressUpdated:] */

void FUN_1091139d0(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,long param_10)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 4) {
    if (lVar2 < 2) {
      if (lVar2 == 0) {
        if (param_3 != 0) {
          (**(code **)(param_3 + 0x10))(param_3,*(undefined1 *)(param_1 + 0x10));
        }
        goto LAB_109113b54;
      }
      if ((lVar2 != 1) || (param_4 == 0)) goto LAB_109113b54;
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      pcVar3 = *(code **)(param_4 + 0x10);
      lVar2 = param_4;
    }
    else {
      if (lVar2 == 2) {
        if (param_5 == 0) goto LAB_109113b54;
        pcVar3 = *(code **)(param_5 + 0x10);
        lVar2 = param_5;
        goto LAB_109113b38;
      }
      if ((lVar2 != 3) || (param_6 == 0)) goto LAB_109113b54;
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      pcVar3 = *(code **)(param_6 + 0x10);
      lVar2 = param_6;
    }
    (*pcVar3)(lVar2,uVar1);
  }
  else {
    if (5 < lVar2) {
      if (lVar2 == 6) {
        if (param_9 != 0) {
          (**(code **)(param_9 + 0x10))(*(undefined4 *)(param_1 + 0x38),param_9);
        }
      }
      else if ((lVar2 == 7) && (param_10 != 0)) {
        (**(code **)(param_10 + 0x10))
                  (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),param_10);
      }
      goto LAB_109113b54;
    }
    if (lVar2 == 4) {
      if (param_7 != 0) {
        (**(code **)(param_7 + 0x10))
                  (param_7,*(undefined1 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
      }
      goto LAB_109113b54;
    }
    if ((lVar2 != 5) || (param_8 == 0)) goto LAB_109113b54;
    pcVar3 = *(code **)(param_8 + 0x10);
    lVar2 = param_8;
LAB_109113b38:
    (*pcVar3)(lVar2);
  }
LAB_109113b54:
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 109113bac; end: 109113bdb; -[SCPlaybackPlayerEvent .cxx_destruct] */

void FUN_109113bac(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 109113bdc; end: 109113c77; -[SCPlaybackPlayerSnapshot initWithCoder:] */

undefined1 *
FUN_109113bdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_1127006e0;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf66da0(param_4);
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    func_0x00010bf66da0(param_4);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 109113c78; end: 109113cd3; -[SCPlaybackPlayerSnapshot initWithPlaybackPosition:totalDuration:state:] */

void FUN_109113c78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1127006e0;
  uStack_40 = param_3;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  return;
}



/* Entry: 109113cd4; end: 109113cf7; -[SCPlaybackPlayerSnapshot copyWithZone:] */

undefined8 FUN_109113cd4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 109113cf8; end: 109113d6b; -[SCPlaybackPlayerSnapshot encodeWithCoder:] */

void FUN_109113cf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92e80(uVar1,param_3,param_2,&PTR____CFConstantStringClassReference_110f21eb8);
  func_0x00010bf92e80(*(undefined8 *)(param_1 + 0x10),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f21ed8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110efd998);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 109113d6c; end: 109113e0f; -[SCPlaybackPlayerSnapshot hash] */

ulong * FUN_109113d6c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  bool bVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  double dVar8;
  double dVar9;
  ulong uStack_30;
  ulong uStack_28;
  long lStack_20;
  long lStack_18;
  
  puVar3 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uVar5 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_28 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  lVar6 = *(long *)(param_1 + 0x18);
  lStack_20 = -lVar6;
  if (-1 < lVar6) {
    lStack_20 = lVar6;
  }
  func_0x000107c3191c(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (ulong *)param_3) {
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar3 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar7 = (undefined1 *)puVar3;
      _objc_opt_class(puVar3);
      puVar4 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar7);
      if ((((ulong)puVar4 & 1) != 0) &&
         (*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18))) {
        dVar9 = ABS(*(double *)((long)puVar3 + 8) - *(double *)(param_3 + 8));
        dVar8 = ABS(*(double *)((long)puVar3 + 8) + *(double *)(param_3 + 8)) *
                2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar9) && (bVar2 = false, !NAN(dVar9) && !NAN(dVar8))) {
          bVar2 = dVar9 < dVar8;
        }
        if (bVar2) {
          dVar8 = ABS(*(double *)((long)puVar3 + 0x10) + *(double *)(param_3 + 0x10)) *
                  2.220446049250313e-16;
          if (dVar8 <= 2.2250738585072014e-308) {
            dVar8 = 2.2250738585072014e-308;
          }
          puVar7 = (undefined1 *)
                   (ulong)(ABS(*(double *)((long)puVar3 + 0x10) - *(double *)(param_3 + 0x10)) <
                          dVar8);
          goto LAB_109113ee4;
        }
      }
      puVar7 = (undefined1 *)0x0;
    }
  }
LAB_109113ee4:
  _objc_release(param_3);
  return (ulong *)puVar7;
}



/* Entry: 109113e10; end: 109113eff; -[SCPlaybackPlayerSnapshot isEqual:] */

bool FUN_109113e10(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) != 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) {
        dVar5 = ABS(*(double *)(param_1 + 8) - *(double *)(param_3 + 8));
        dVar4 = ABS(*(double *)(param_1 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
          bVar1 = dVar5 < dVar4;
        }
        if (bVar1) {
          dVar4 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                  2.220446049250313e-16;
          if (dVar4 <= 2.2250738585072014e-308) {
            dVar4 = 2.2250738585072014e-308;
          }
          bVar1 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10)) < dVar4;
          goto LAB_109113ee4;
        }
      }
      bVar1 = false;
    }
  }
LAB_109113ee4:
  _objc_release(param_3);
  return bVar1;
}


