/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106942b48; end: 106942baf;  */

void FUN_106942b48(long param_1)

{
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0bb40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106942bb0; end: 1069435ef; -[SCSpotlightQueryCoordinator _executeFetchSpotlightStoriesForQuery:storiesRequest:deltaFetchInfo:feedTypeEnum:section:existingDataStoreStories:prependExistingStoryDedupeFps:shouldFetchInterstitial:updatingBlock:token:] */

void FUN_106942bb0(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  int param_6,long param_7,undefined8 param_8,undefined8 param_9,char param_10,
                  undefined4 param_11,undefined8 param_12,undefined8 param_13)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  undefined *puStack_288;
  undefined8 uStack_280;
  code *pcStack_278;
  undefined *puStack_270;
  long lStack_268;
  undefined8 uStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined8 uStack_240;
  undefined1 auStack_238 [8];
  int iStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  code *pcStack_218;
  undefined *puStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1d0 [8];
  int iStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined1 auStack_168 [8];
  undefined4 uStack_160;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_13);
  func_0x00010c1ec040(param_4);
  lVar5 = param_3;
  func_0x00010c11d960();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010c0720c0();
  _objc_release(lVar5);
  if ((int)lVar7 == 0) {
    lVar5 = param_3;
    func_0x00010c11d960();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010c0720c0();
    _objc_release(lVar5);
    if ((int)lVar7 != 0) {
      lVar5 = param_7;
      func_0x00010c25c6c0(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b8a60(param_4);
      _objc_release(lVar5);
      goto LAB_106942d04;
    }
    lVar5 = param_3;
    func_0x00010c11d960();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010c0720c0();
    _objc_release(lVar5);
    if ((int)lVar7 == 0) {
      lVar5 = param_3;
      func_0x00010c11d960();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar5;
      func_0x00010c0720c0();
      _objc_release(lVar5);
      if ((int)lVar7 == 0) {
        lVar5 = param_3;
        func_0x00010c11d960();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar5;
        func_0x00010c0720c0();
        _objc_release(lVar5);
        if ((int)lVar7 == 0) goto LAB_106942d08;
      }
      goto LAB_106942d04;
    }
    lVar5 = param_7;
    func_0x00010c25c6c0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b8a60(param_4);
    _objc_release(lVar5);
    func_0x00010c21a2a0(param_4);
    puVar8 = PTR_PTR_1126cf318;
    _objc_opt_new(PTR_PTR_1126cf318);
    func_0x00010c1ed1e0();
    func_0x00010c1ed1c0(param_4);
    _objc_release(puVar8);
  }
  else {
LAB_106942d04:
    func_0x00010c21a2a0(param_4);
  }
LAB_106942d08:
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c10e0;
  func_0x00010bf0c840(PTR_PTR_1126c10e0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf1f320();
  _objc_release(puVar8);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    lVar5 = param_7;
    func_0x00010c25c6c0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b8a60(param_4);
    _objc_release(lVar5);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c10e0;
  func_0x00010bf3d4c0(PTR_PTR_1126c10e0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf1f320();
  _objc_release(puVar8);
  _objc_release(uVar1);
  if ((int)uVar3 == 0) {
    lVar5 = 0;
  }
  else {
    _os_unfair_lock_lock(param_1 + 0xb8);
    lVar7 = *(long *)(param_1 + 0xb0);
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar7;
    func_0x00010bf51e00();
    _objc_release(lVar7);
    _objc_release(puVar8);
    _os_unfair_lock_unlock(param_1 + 0xb8);
    puVar8 = PTR_PTR_1126cf320;
    _objc_opt_new(PTR_PTR_1126cf320);
    func_0x00010c1ded20();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    _objc_retain(lVar5);
    lVar7 = lVar5;
    func_0x00010bf52a60();
    if (lVar7 != 0) {
      lVar10 = *plStack_140;
      do {
        lVar11 = 0;
        do {
          if (*plStack_140 != lVar10) {
            _objc_enumerationMutation(lVar5);
          }
          uVar3 = *(undefined8 *)(lStack_148 + lVar11 * 8);
          func_0x000108f520ec(uVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
          _objc_release(uVar3);
          lVar11 = lVar11 + 1;
        } while (lVar7 != lVar11);
        lVar7 = lVar5;
        func_0x00010bf52a60();
      } while (lVar7 != 0);
    }
    _objc_release(lVar5);
    func_0x00010c20ca80(puVar8);
    func_0x00010c20e5a0(param_4);
    _objc_release(puVar2);
    _objc_release(puVar8);
  }
  if (param_5 != 0) {
    func_0x00010c18bae0(param_4);
  }
  if (param_6 == 0x102) {
    puVar4 = *(undefined **)(param_1 + 0x60);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126c2320;
    func_0x00010bfbb3a0(PTR_PTR_1126c2320);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010bf1f320();
    if (((ulong)puVar2 & 1) == 0) {
      _objc_release(puVar8);
    }
    else {
      lVar7 = param_7;
      func_0x00010bfbb3c0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar7;
      func_0x00010c08fa60();
      _objc_release(lVar7);
      _objc_release(puVar8);
      _objc_release(puVar4);
      if (lVar10 == 0) goto LAB_1069430bc;
      puVar4 = PTR_PTR_1126cf328;
      _objc_opt_new(PTR_PTR_1126cf328);
      lVar7 = param_7;
      func_0x00010bfbb3c0(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a1340(puVar4);
      _objc_release(lVar7);
      func_0x00010c1a1320(param_4);
    }
    _objc_release(puVar4);
  }
LAB_1069430bc:
  if (param_10 != '\0') {
    func_0x00010c200560(param_4);
  }
  if (param_7 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_110 = param_7;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar7 = param_3;
  func_0x00010c11d960(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be58660(param_1);
  _objc_release(lVar7);
  lVar7 = param_4;
  if (param_6 == 0x102) {
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c10e0;
    func_0x00010bfa37a0(PTR_PTR_1126c10e0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf1f320();
    _objc_release(puVar2);
    _objc_release(uVar1);
    _objc_initWeak(auStack_158,param_1);
    if ((int)uVar3 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0xf0);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + 8);
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1b8 = 0xc2000000;
      pcStack_1b0 = FUN_1069435f0;
      puStack_1a8 = &UNK_11094c828;
      _objc_retain(param_3);
      ppuVar9 = &puStack_1c0;
      puVar6 = auStack_158;
      lStack_1a0 = param_3;
      _objc_copyWeak(auStack_168,puVar6);
      uStack_160 = 0x102;
      _objc_retain(param_13);
      uStack_198 = param_13;
      _objc_retain(param_12);
      uStack_170 = param_12;
      _objc_retain(puVar8);
      puStack_190 = puVar8;
      _objc_retain(param_8);
      uStack_188 = param_8;
      _objc_retain(param_9);
      uStack_180 = param_9;
      _objc_retain(lVar5);
      lStack_178 = lVar5;
      func_0x00010c15bcc0(uVar3);
      _objc_release(uVar1);
      _objc_release(uVar3);
      _objc_release(lStack_178);
      _objc_release(uStack_180);
      _objc_release(uStack_188);
      _objc_release(puStack_190);
      _objc_release(uStack_170);
      _objc_release(uStack_198);
      _objc_destroyWeak(auStack_168);
      lVar10 = lStack_1a0;
      goto LAB_1069434a0;
    }
  }
  else {
    _objc_initWeak(auStack_158,param_1);
  }
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  puStack_228 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_220 = 0xc2000000;
  pcStack_218 = FUN_1069436c0;
  puStack_210 = &UNK_11094c858;
  _objc_retain(param_3);
  lStack_208 = param_3;
  _objc_copyWeak(auStack_1d0,auStack_158);
  iStack_1c8 = param_6;
  _objc_retain(param_13);
  uStack_200 = param_13;
  _objc_retain(param_12);
  uStack_1d8 = param_12;
  _objc_retain(puVar8);
  puStack_1f8 = puVar8;
  _objc_retain(param_8);
  uStack_1f0 = param_8;
  _objc_retain(param_9);
  uStack_1e8 = param_9;
  _objc_retain(lVar5);
  puStack_288 = puVar2;
  uStack_280 = 0xc2000000;
  pcStack_278 = FUN_106943804;
  puStack_270 = &UNK_11094c888;
  lStack_1e0 = lVar5;
  _objc_retain(param_3);
  ppuVar9 = &puStack_288;
  puVar6 = auStack_158;
  lStack_268 = param_3;
  _objc_copyWeak(auStack_238,puVar6);
  iStack_230 = param_6;
  _objc_retain(param_13);
  uStack_260 = param_13;
  _objc_retain(param_12);
  uStack_240 = param_12;
  _objc_retain(puVar8);
  puStack_258 = puVar8;
  _objc_retain(param_9);
  uStack_250 = param_9;
  _objc_retain(lVar5);
  lStack_248 = lVar5;
  func_0x00010c15c7a0(uVar3);
  _objc_release(lStack_248);
  _objc_release(uStack_250);
  _objc_release(puStack_258);
  _objc_release(uStack_240);
  _objc_release(uStack_260);
  _objc_destroyWeak(auStack_238);
  _objc_release(lStack_268);
  _objc_release(lStack_1e0);
  _objc_release(uStack_1e8);
  _objc_release(uStack_1f0);
  _objc_release(puStack_1f8);
  _objc_release(uStack_1d8);
  _objc_release(uStack_200);
  _objc_destroyWeak(auStack_1d0);
  lVar10 = lStack_208;
LAB_1069434a0:
  _objc_release(lVar10);
  _objc_destroyWeak(auStack_158);
  _objc_release(puVar8);
  _objc_release(lVar5);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    _objc_destroyWeak(ppuVar9 + 0xb);
    _objc_destroyWeak(auStack_158);
    __Unwind_Resume();
    _objc_retain(puVar6);
    _objc_retain(lVar7);
    lVar5 = param_3 + 0x58;
    _objc_loadWeakRetained(lVar5);
    if (lVar7 == 0) {
      func_0x00010bed84e0(lVar5);
      _objc_release(lVar5);
    }
    else {
      func_0x00010be09b40(lVar5);
      _objc_release(lVar5);
      lVar5 = *(long *)(param_3 + 0x50);
      if (lVar5 != 0) {
        (**(code **)(lVar5 + 0x10))(lVar5,0,0);
      }
    }
    _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar6);
    return;
  }
  return;
}



/* Entry: 1069435f0; end: 1069436bf;  */

void FUN_1069435f0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar1);
  if (param_3 == 0) {
    func_0x00010bed84e0(lVar1);
    _objc_release(lVar1);
  }
  else {
    func_0x00010be09b40(lVar1);
    _objc_release(lVar1);
    lVar1 = *(long *)(param_1 + 0x50);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,0,0);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069436c0; end: 106943803;  */

void FUN_1069436c0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar1);
  if (param_4 == 0) {
    func_0x00010bed84e0(lVar1);
    _objc_release(lVar1);
  }
  else {
    func_0x00010be09b40(lVar1);
    _objc_release(lVar1);
    lVar1 = param_1 + 0x58;
    _objc_loadWeakRetained(lVar1);
    func_0x00010be5e080();
    _objc_release(lVar1);
    lVar1 = *(long *)(param_1 + 0x50);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,0,0);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106943804; end: 10694391b;  */

void FUN_106943804(long param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_5 == 0) && (param_2 != 0 || param_3 != 0)) {
    param_1 = param_1 + 0x50;
    _objc_loadWeakRetained(param_1);
    func_0x00010bed8440();
    _objc_release(param_1);
  }
  else {
    lVar1 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar1);
    func_0x00010be09b40();
    _objc_release(lVar1);
    lVar1 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar1);
    func_0x00010be5e080();
    _objc_release(lVar1);
    lVar1 = *(long *)(param_1 + 0x48);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,0,0);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10694391c; end: 106943923; -[SCSpotlightQueryCoordinator _mockInterstitialInjector] */

void FUN_10694391c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 106943924; end: 1069439f7; -[SCSpotlightQueryCoordinator _warmInterstitialMediaForFeedType:] */

void FUN_106943924(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  if (*(long *)(param_1 + 0xf8) != 0) {
    lVar1 = *(long *)(param_1 + 0x98);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c24b6a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0xf8);
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010c11de00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_1069439f8;
      puStack_40 = &UNK_11094c8b8;
      lStack_38 = lVar2;
      func_0x00010bf5f060(uVar4,param_2,uVar3,&puStack_58);
      _objc_release(uVar3);
    }
    _objc_release(lVar2);
  }
  return;
}



/* Entry: 1069439f8; end: 106943b93;  */

void FUN_1069439f8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf2f7c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar8 = *(undefined8 *)(lVar7 * 8);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf2f760(uVar8);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_2;
      func_0x00010c1356e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa8600(uVar4);
      _objc_release(lVar5);
      _objc_release(uVar8);
      _objc_release(uVar4);
      lVar7 = lVar7 + 1;
    } while (lVar3 != lVar7);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010be60c80();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    func_0x00010c156ee0(param_2);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 106943b94; end: 106943c1f; -[SCSpotlightQueryCoordinator _seedMockInterstitialIfRepositoryEmptyForFeedType:] */

void FUN_106943b94(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined4 uStack_38;
  
  lVar1 = param_1;
  func_0x00010be60c80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_106943c20;
    puStack_48 = &UNK_11094c8e8;
    lStack_40 = param_1;
    uStack_38 = param_3;
    func_0x00010c156ee0(lVar1,param_2,&puStack_60);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106943c20; end: 106943c87;  */

void FUN_106943c20(long param_1,int param_2)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined4 uStack_18;
  
  if (param_2 != 0) {
    lStack_20 = *(long *)(param_1 + 0x20);
    puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_38 = 0xc2000000;
    pcStack_30 = FUN_106943c88;
    puStack_28 = &UNK_110868698;
    uStack_18 = *(undefined4 *)(param_1 + 0x28);
    func_0x00010c0f7fc0(*(undefined8 *)(lStack_20 + 8),param_2,&puStack_40);
  }
  return;
}



/* Entry: 106943c88; end: 106943c97;  */

void FUN_106943c88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beea690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__warmInterstitialMediaForFeedTyp_112598348,
             *(undefined4 *)(param_1 + 0x28));
  return;
}



/* Entry: 106943c98; end: 106943e3f; -[SCSpotlightQueryCoordinator _processInterstitialForStoriesBatchResponse:feedType:completion:] */

void FUN_106943c98(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  long param_5)

{
  undefined **ppuVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [8];
  undefined4 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (*(long *)(param_1 + 0x100) == 0) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5);
    }
  }
  else {
    _objc_initWeak(auStack_58,param_1);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_106943e40;
    puStack_80 = &UNK_11089a980;
    _objc_copyWeak(auStack_68,auStack_58);
    _objc_retain(param_3);
    uStack_78 = param_3;
    uStack_60 = param_4;
    _objc_retain(param_5);
    ppuVar1 = &puStack_98;
    lStack_70 = param_5;
    _objc_retainBlock();
    func_0x00010be60c80();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      (*(code *)ppuVar1[2])(ppuVar1);
    }
    else {
      _objc_retain(ppuVar1);
      func_0x00010c0650a0(param_1);
      _objc_release(ppuVar1);
    }
    _objc_release(param_1);
    _objc_release(ppuVar1);
    _objc_release(lStack_70);
    _objc_release(uStack_78);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106943e40; end: 106943ee7;  */

void FUN_106943e40(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(lVar3 + 0x100);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106943ee8;
    puStack_50 = &UNK_11094c918;
    uStack_38 = *(undefined4 *)(param_1 + 0x38);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    lStack_48 = lVar3;
    _objc_retain(uVar2);
    uStack_40 = uVar2;
    func_0x00010c115720(uVar4,param_2,uVar1,&puStack_68);
    _objc_release(uStack_40);
  }
  _objc_release(lVar3);
  return;
}



/* Entry: 106943ee8; end: 106943f63;  */

void FUN_106943ee8(long param_1,int param_2)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined4 uStack_28;
  
  if (param_2 != 0) {
    lStack_30 = *(long *)(param_1 + 0x20);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_106943f64;
    puStack_38 = &UNK_110868698;
    uStack_28 = *(undefined4 *)(param_1 + 0x30);
    func_0x00010c0f7fc0(*(undefined8 *)(lStack_30 + 8),param_2,&puStack_50);
  }
  func_0x00010c0f7fc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
  return;
}



/* Entry: 106943f64; end: 106943f7f;  */

void FUN_106943f64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beea690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__warmInterstitialMediaForFeedTyp_112598348,
             *(undefined4 *)(param_1 + 0x28));
  return;
}



/* Entry: 106943f80; end: 106944203; -[SCSpotlightQueryCoordinator _updateForResponseFromQuery:existingSections:feedType:response:data:existingDataStoreStories:prependExistingStoryDedupeFps:bloomFilterIdsToSend:retryFailedRequest:updatingBlock:token:] */

void FUN_106943f80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,ulong param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  uVar1 = param_3;
  func_0x00010846e5b0(param_3,*(undefined8 *)(param_1 + 0x60));
  func_0x00010c08fa60(param_7);
  uVar2 = param_3;
  func_0x00010c11d960(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be52740(param_1);
  _objc_release(uVar2);
  if ((int)uVar1 == 0) {
    puVar5 = PTR_PTR_1126b7600;
    _objc_alloc(PTR_PTR_1126b7600);
    lVar7 = -0x68;
    func_0x00010c008360();
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126b7608;
    _objc_alloc(PTR_PTR_1126b7608);
    lVar7 = -0x60;
    func_0x00010c008360();
    puVar5 = (undefined *)0x0;
  }
  lVar7 = *(long *)(&stack0xfffffffffffffff0 + lVar7);
  _objc_retain(lVar7);
  if (lVar7 == 0) {
    func_0x00010bed8440(param_1);
  }
  else {
    lVar3 = param_1;
    func_0x00010bf5fc80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_11;
    (**(code **)(param_11 + 0x10))(param_11,lVar3);
    _objc_release(lVar3);
    if ((uVar4 & 1) == 0) {
      func_0x00010be09b40(param_1);
    }
  }
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar7);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106944204; end: 1069446ff; -[SCSpotlightQueryCoordinator _updateForDecodedResponseFromQuery:existingSections:feedType:response:storiesResponse:batchResponse:isBatchQuery:prependExistingStoryDedupeFps:bloomFilterIdsToSend:updatingBlock:token:] */

void FUN_106944204(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  byte param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
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
  undefined4 uStack_70;
  byte bStack_6c;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  if ((param_9 & 1) == 0) {
    _objc_retain(param_7);
    uVar1 = param_7;
  }
  else {
    uVar6 = param_8;
    func_0x00010c258b60();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar6;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
  }
  uVar2 = *(ulong *)(param_1 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c2320;
  func_0x00010bfbb3a0(PTR_PTR_1126c2320);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf1f320();
  _objc_release(puVar3);
  _objc_release(uVar2);
  uVar6 = uVar1;
  func_0x00010bfd7500();
  if ((uVar4 & 1) == 0) {
    if ((int)uVar6 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0xa8);
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      FUN_10694998c(uVar6,puVar3,1);
      _objc_release(puVar3);
    }
  }
  else if ((int)uVar6 != 0) {
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_106944700;
    puStack_d0 = &UNK_11094c948;
    lStack_c8 = param_1;
    _objc_retain(uVar1);
    uStack_c0 = uVar1;
    _objc_retain(param_3);
    uStack_b8 = param_3;
    _objc_retain(param_4);
    uStack_b0 = param_4;
    uStack_70 = param_5;
    _objc_retain(param_6);
    uStack_a8 = param_6;
    _objc_retain(param_7);
    uStack_a0 = param_7;
    _objc_retain(param_8);
    bStack_6c = param_9;
    uStack_98 = param_8;
    _objc_retain(param_11);
    uStack_90 = param_11;
    _objc_retain(param_12);
    uStack_88 = param_12;
    _objc_retain(param_13);
    uStack_78 = param_13;
    _objc_retain(param_14);
    uStack_80 = param_14;
    ppuVar5 = &puStack_e8;
    _objc_retainBlock();
    if (param_9 == 0) {
      (*(code *)ppuVar5[2])(ppuVar5);
    }
    else {
      func_0x00010be815a0(param_1);
    }
    _objc_release(ppuVar5);
    _objc_release(uStack_80);
    _objc_release(uStack_78);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    _objc_release(uStack_a8);
    _objc_release(uStack_b0);
    _objc_release(uStack_b8);
    _objc_release(uStack_c0);
    goto LAB_106944690;
  }
  if (param_9 == 0) {
    func_0x00010be31000(param_1);
  }
  else {
    _objc_retain(param_8);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_6);
    _objc_retain(param_11);
    _objc_retain(param_12);
    _objc_retain(param_13);
    _objc_retain(param_14);
    func_0x00010be815a0(param_1);
    _objc_release(param_14);
    _objc_release(param_13);
    _objc_release(param_12);
    _objc_release(param_11);
    _objc_release(param_6);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_8);
  }
LAB_106944690:
  _objc_release(uVar1);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106944700; end: 10694478f;  */

void FUN_106944700(long param_1,undefined8 param_2)

{
  func_0x00010be2a120(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined4 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                      *(undefined1 *)(param_1 + 0x7c));
  return;
}



/* Entry: 106944790; end: 106944af3; -[SCSpotlightQueryCoordinator _handleFrontierResponse:query:existingSections:feedType:response:storiesResponse:batchResponse:isBatchQuery:prependExistingStoryDedupeFps:bloomFilterIdsToSend:updatingBlock:token:] */

void FUN_106944790(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,byte param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  int iVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  uVar4 = param_3;
  func_0x00010bfbb360();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bfa38e0();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0xa8);
  iVar6 = (int)uVar1;
  if (iVar6 - 1U < 3) {
    ppuVar5 = (undefined **)(&PTR_PTR_11094ca88)[iVar6 - 1U];
  }
  else {
    ppuVar5 = &PTR____CFConstantStringClassReference_110db8b78;
  }
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  FUN_10694975c(uVar4,ppuVar5,puVar2,1);
  _objc_release(puVar2);
  if ((param_10 == 0) || (iVar6 != 3)) {
    if (((param_10 & 1) != 0) || (iVar6 != 2)) goto LAB_106944964;
    ppuVar5 = &PTR____CFConstantStringClassReference_110e65718;
  }
  else {
    ppuVar5 = &PTR____CFConstantStringClassReference_110e656f8;
  }
  uVar4 = *(undefined8 *)(param_1 + 0xa8);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  FUN_106949b00(uVar4,ppuVar5,puVar2,1);
  _objc_release(puVar2);
LAB_106944964:
  if (iVar6 == 3) {
    func_0x00010be31000(param_1);
  }
  else if (iVar6 == 1) {
    uVar4 = param_3;
    func_0x00010c252d60(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010bfbb360(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bfbb3c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be2a100(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar4);
  }
  else {
    func_0x00010be264e0(param_1);
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106944af4; end: 106944d63; -[SCSpotlightQueryCoordinator _handleBatchResponse:query:existingSections:feedType:response:prependExistingStoryDedupeFps:bloomFilterIdsToSend:updatingBlock:token:] */

void FUN_106944af4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [8];
  undefined4 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  func_0x00010be56080(param_1);
  func_0x00010be57d20(param_1);
  uVar2 = param_3;
  func_0x00010c258b60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be57da0(param_1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_initWeak(auStack_68,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_78,auStack_68);
  uStack_70 = param_6;
  _objc_retain(param_11);
  _objc_retain(param_9);
  func_0x00010bfd2a40(uVar2);
  func_0x00010c252ee0(param_7);
  uVar2 = param_3;
  func_0x00010c252d60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ec40();
  func_0x00010be38760(param_1);
  _objc_release(uVar2);
  _objc_release(param_9);
  _objc_release(param_11);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106944d64; end: 106944ddf;  */

void FUN_106944d64(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be09b40();
  _objc_release(lVar1);
  if (param_2 != 0) {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010be8df40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106944de0; end: 106944fd7; -[SCSpotlightQueryCoordinator _handleStoriesResponse:query:feedType:response:bloomFilterIdsToSend:updatingBlock:token:] */

void FUN_106944de0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined1 auStack_78 [8];
  undefined4 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  func_0x00010be560a0(param_1);
  func_0x00010be57d40(param_1);
  func_0x00010be57da0(param_1);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_78,auStack_68);
  uStack_70 = param_5;
  _objc_retain(param_9);
  _objc_retain(param_7);
  func_0x00010bfd2a60(uVar1);
  func_0x00010c252ee0(param_6);
  uVar1 = param_3;
  func_0x00010c252d60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ec40();
  func_0x00010be38760(param_1);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_9);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106944fd8; end: 106945053;  */

void FUN_106944fd8(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be09b40();
  _objc_release(lVar1);
  if (param_2 != 0) {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010be8df40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106945054; end: 10694515b; -[SCSpotlightQueryCoordinator _incrementRequestResultMetricForFeedType:isBatchQuery:httpStatusCode:responseStatusCode:] */

void FUN_106945054(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 in_x5;
  undefined8 in_x7;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0xa8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110daf4f8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  FUN_106948ba8(uVar5,&PTR____CFConstantStringClassReference_110e65578,puVar1,puVar2,puVar3,puVar4,1
                ,in_x7,in_x5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10694515c; end: 106945417; -[SCSpotlightQueryCoordinator _handleFrontierNoOpForFeedType:responseStatus:frontierToken:existingSections:bloomFilterIdsToSend:isBatchQuery:httpResponse:updatingBlock:token:] */

void FUN_10694515c(long param_1,undefined8 param_2,undefined4 param_3,long param_4,long param_5,
                  long param_6,undefined8 param_7,undefined1 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 uStack_80;
  undefined1 auStack_78 [8];
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  uVar4 = param_9;
  func_0x00010c252ee0();
  lVar1 = param_4;
  func_0x00010bf3ec40();
  _objc_initWeak(auStack_78,param_1);
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_106945418;
  puStack_b8 = &UNK_1108a9e10;
  _objc_copyWeak(auStack_98,auStack_78);
  uStack_84 = (undefined4)lVar1;
  uStack_90 = uVar4;
  uStack_88 = param_3;
  uStack_80 = param_8;
  _objc_retain(param_7);
  uStack_b0 = param_7;
  _objc_retain(param_10);
  uStack_a0 = param_10;
  _objc_retain(param_11);
  uStack_a8 = param_11;
  ppuVar2 = &puStack_d0;
  _objc_retainBlock();
  lVar1 = param_6;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_5;
  func_0x00010c08fa60();
  if ((lVar3 == 0) || (lVar1 == 0)) {
    (*(code *)ppuVar2[2])(ppuVar2);
  }
  else {
    lVar3 = param_1;
    func_0x00010be9cbe0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_70 = lVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c289980(uVar4);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  _objc_release(ppuVar2);
  _objc_release(uStack_a8);
  _objc_release(uStack_a0);
  _objc_release(uStack_b0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  param_4 = param_4 + 0x38;
  _objc_loadWeakRetained(param_4);
  func_0x00010bde2d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106945418; end: 106945467;  */

void FUN_106945418(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde2d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106945468; end: 1069455c7; -[SCSpotlightQueryCoordinator _completeFrontierNoOpForFeedType:isBatchQuery:httpStatusCode:responseStatusCode:bloomFilterIdsToSend:updatingBlock:token:] */

void FUN_106945468(long param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_88,auStack_68);
  uStack_78 = param_3;
  _objc_retain(param_9);
  _objc_retain(param_7);
  uStack_80 = param_5;
  uStack_74 = param_6;
  uStack_70 = param_4;
  _objc_retain(param_8);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_9);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return;
}



/* Entry: 1069455c8; end: 106945647;  */

void FUN_1069455c8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be09b40(lVar1);
    func_0x00010be8df40(lVar1);
    func_0x00010be38760(lVar1);
    lVar2 = *(long *)(param_1 + 0x30);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,0,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106945648; end: 1069457f7; -[SCSpotlightQueryCoordinator _sectionByReplacingFrontierToken:onSection:] */

void FUN_106945648(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  puVar1 = PTR_PTR_1126cecc8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_4;
  func_0x00010bfa4340();
  uVar3 = param_4;
  func_0x00010c259d20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010bf86660();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010c0b3b40(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010c25c6c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_4;
  func_0x00010bfab800(param_4);
  uVar8 = param_4;
  func_0x00010bfd9420();
  uVar9 = param_4;
  func_0x00010c08cb80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_4;
  func_0x00010c137ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_4;
  func_0x00010c0cc060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd93a0();
  _objc_release(param_4);
  func_0x00010c012780(puVar1,param_2,uVar2 & 0xffffffff,uVar3,uVar4,uVar5,uVar6,uVar7,(char)uVar8);
  _objc_release(param_3);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1069457f8; end: 1069458af; -[SCSpotlightQueryCoordinator _removeViewedStoryIds:forFeedType:] */

void FUN_1069457f8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    _os_unfair_lock_lock(param_1 + 0xb8);
    uVar3 = *(undefined8 *)(param_1 + 0xb0);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ce860();
    _objc_release(uVar3);
    _objc_release(puVar2);
    _os_unfair_lock_unlock(param_1 + 0xb8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069458b0; end: 1069458b7; -[SCSpotlightQueryCoordinator isLoading] */

void FUN_1069458b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be41950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__isLoadingFeedType__11256dff0,0xf0);
  return;
}



/* Entry: 1069458b8; end: 1069458bf; -[SCSpotlightQueryCoordinator currentQuery] */

void FUN_1069458b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5fc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_currentQueryForFeedType__1125b58c8,0xf0);
  return;
}



/* Entry: 1069458c0; end: 1069458fb; -[SCSpotlightQueryCoordinator setCurrentQuery:] */

void FUN_1069458c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010bea3300(param_1,param_2,param_3,0xf0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069458fc; end: 10694598f; -[SCSpotlightQueryCoordinator _setCurrentQuery:forFeedType:] */

void FUN_1069458fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0xd8);
  uVar2 = *(undefined8 *)(param_1 + 0xd0);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2,param_2,param_3,puVar1);
  _objc_release(puVar1);
  _os_unfair_lock_unlock(param_1 + 0xd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106945990; end: 106945a1f; -[SCSpotlightQueryCoordinator currentQueryForFeedType:] */

void FUN_106945990(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _os_unfair_lock_lock(param_1 + 0xd8);
  uVar2 = *(undefined8 *)(param_1 + 0xd0);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _os_unfair_lock_unlock(param_1 + 0xd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106945a20; end: 106945b7f; -[SCSpotlightQueryCoordinator handlePrefetchedStoriesBatchResponse:completion:] */

void FUN_106945a20(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,0);
    }
  }
  else {
    lVar1 = param_1;
    func_0x00010bdd3660();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      if (param_4 != 0) {
        (**(code **)(param_4 + 0x10))(param_4,0);
      }
    }
    else {
      lVar2 = param_1;
      func_0x00010bebee60();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_4);
      _objc_retain(param_3);
      _objc_retain(lVar1);
      _objc_retain(lVar2);
      func_0x00010be815a0(param_1);
      _objc_release(lVar1);
      _objc_release(lVar2);
      _objc_release(param_3);
      _objc_release(param_4);
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106945b80; end: 106945dd3;  */

void FUN_106945b80(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined1 *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = (long *)(param_1 + 0x20);
  lVar7 = *(long *)(*plVar8 + 8);
  _objc_retain(lVar7);
  _objc_initWeak(auStack_90,*plVar8);
  uVar2 = *(undefined8 *)(*plVar8 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_106945dd4;
  puStack_c8 = &UNK_11094c9d8;
  _objc_retain(lVar7);
  puVar6 = auStack_90;
  lStack_c0 = lVar7;
  _objc_copyWeak(auStack_98);
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar9);
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  uStack_a0 = uVar9;
  _objc_retain(uVar10);
  uVar11 = *(undefined8 *)(param_1 + 0x30);
  uStack_b8 = uVar10;
  _objc_retain(uVar11);
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  uStack_b0 = uVar11;
  _objc_retain(uVar9);
  uStack_a8 = uVar9;
  _objc_retain(&puStack_e0);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(uVar2);
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = puVar1;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x106948af0;
  puStack_70 = &UNK_110859310;
  puStack_68 = (undefined1 *)&puStack_e0;
  _objc_retain(&puStack_e0);
  func_0x00010bfa9fc0(uVar2);
  _objc_release(uVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puStack_68);
  _objc_release(&puStack_e0);
  _objc_release(uVar2);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_a0);
  _objc_destroyWeak(auStack_98);
  _objc_release(lStack_c0);
  _objc_destroyWeak(auStack_90);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_90);
  lVar5 = lVar7;
  __Unwind_Resume();
  puStack_120 = puVar1;
  pcStack_e8 = FUN_106945dd4;
  puStack_118 = (undefined1 *)&puStack_e0;
  puStack_110 = puVar4;
  puStack_108 = puVar3;
  uStack_100 = uVar2;
  lStack_f8 = lVar7;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  uVar9 = *(undefined8 *)(lVar5 + 0x20);
  _objc_copyWeak(auStack_128,lVar5 + 0x48);
  uVar10 = *(undefined8 *)(lVar5 + 0x40);
  _objc_retain(uVar10);
  _objc_retain(puVar6);
  uVar11 = *(undefined8 *)(lVar5 + 0x28);
  _objc_retain(uVar11);
  uVar12 = *(undefined8 *)(lVar5 + 0x30);
  _objc_retain(uVar12);
  uVar2 = *(undefined8 *)(lVar5 + 0x38);
  _objc_retain(uVar2);
  func_0x00010c0f7fc0(uVar9);
  _objc_release(uVar2);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(puVar6);
  _objc_release(uVar10);
  _objc_destroyWeak(auStack_128);
  _objc_release(puVar6);
  return;
}



/* Entry: 106945dd4; end: 106945ef7;  */

void FUN_106945dd4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_48,param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar3);
  _objc_retain(param_2);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 106945ef8; end: 106946053;  */

void FUN_106945ef8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    lVar1 = *(long *)(param_1 + 0x40);
    if (lVar1 != 0) {
      param_2 = 0;
      (**(code **)(lVar1 + 0x10))(lVar1,0);
    }
  }
  else {
    if (*(long *)(param_1 + 0x20) == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar6 = *(undefined8 *)(lVar2 + 0x10);
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar7);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar5);
    func_0x00010bfd2a40(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar7);
    _objc_release(puVar4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010be09b40(*(undefined8 *)(lVar2 + 0x20));
  lVar2 = *(long *)(lVar2 + 0x30);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106946094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))(lVar2,param_2);
    return;
  }
  return;
}



/* Entry: 106946054; end: 1069460a3;  */

void FUN_106946054(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010be09b40(*(undefined8 *)(param_1 + 0x20),param_2,param_2,0x10d,
                      *(undefined8 *)(param_1 + 0x28));
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106946094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
    return;
  }
  return;
}



/* Entry: 1069460a4; end: 106946133; -[SCSpotlightQueryCoordinator _previousRequestTimeForFeedType:] */

void FUN_1069460a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _os_unfair_lock_lock(param_1 + 0xd8);
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _os_unfair_lock_unlock(param_1 + 0xd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106946134; end: 106946167; -[SCSpotlightQueryCoordinator _isPreviousRequestTimeConsideredLoading:] */

bool FUN_106946134(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
    func_0x00010c26f3a0(param_4);
    return -300.0 < param_1;
  }
  return false;
}



/* Entry: 106946168; end: 10694628f; -[SCSpotlightQueryCoordinator _isLoadingFeedType:] */

ulong FUN_106946168(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c0e00;
  func_0x00010c0f27e0(PTR_PTR_1126c0e00);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf1f320(uVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  if ((int)uVar3 == 0) {
    uVar4 = param_1;
    func_0x00010be800c0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be42f60(param_1,param_2,uVar4);
    _objc_release(uVar4);
  }
  else {
    _os_unfair_lock_lock(param_1 + 0xd8);
    lVar5 = *(long *)(param_1 + 200);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar5,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar2);
    _os_unfair_lock_unlock(param_1 + 0xd8);
    param_1 = (ulong)(lVar5 != 0);
  }
  return param_1;
}



/* Entry: 106946290; end: 1069465db; -[SCSpotlightQueryCoordinator _beginLoadingIfAvailableForFeedType:] */

void FUN_106946290(float param_1,ulong param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_88 [8];
  undefined4 uStack_80;
  undefined1 auStack_78 [8];
  
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c0e00;
  func_0x00010c0f27e0(PTR_PTR_1126c0e00);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010bf1f320();
  _objc_release(puVar2);
  _objc_release(uVar1);
  _os_unfair_lock_lock(param_2 + 0xd8);
  if ((int)uVar7 == 0) {
    lVar6 = *(long *)(param_2 + 0xc0);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar3 = param_2;
    func_0x00010be42f60();
    if ((uVar3 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_2 + 0xc0);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar7);
      _objc_release(puVar4);
      _objc_release(puVar2);
      ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
      goto LAB_10694656c;
    }
  }
  else {
    lVar6 = *(long *)(param_2 + 200);
    ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar6 == 0) {
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_2 + 0xc0);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar7);
      _objc_release(puVar4);
      _objc_release(puVar2);
      uVar7 = *(undefined8 *)(param_2 + 200);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar7);
      _objc_release(puVar2);
      uVar7 = *(undefined8 *)(param_2 + 0x60);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126c0e00;
      func_0x00010c0f2960(PTR_PTR_1126c0e00);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c20(uVar7);
      _objc_release(puVar2);
      _objc_release(uVar7);
      _objc_initWeak(auStack_78,param_2);
      uVar7 = *(undefined8 *)(param_2 + 8);
      _objc_copyWeak(auStack_88,auStack_78);
      uStack_80 = param_4;
      _objc_retain(ppuVar5);
      func_0x00010c0f7fe0((double)param_1,uVar7);
      _objc_release(ppuVar5);
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(auStack_78);
      goto LAB_10694656c;
    }
  }
  ppuVar5 = (undefined **)0x0;
LAB_10694656c:
  _objc_release(lVar6);
  _os_unfair_lock_unlock(param_2 + 0xd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 1069465dc; end: 106946613;  */

void FUN_1069465dc(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010beea900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106946614; end: 10694673f; -[SCSpotlightQueryCoordinator _watchdogExpiredForFeedType:token:] */

void FUN_106946614(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0xd8);
  uVar2 = *(undefined8 *)(param_1 + 200);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = uVar2;
  func_0x00010c0720c0(uVar2,param_2,param_4);
  if ((int)uVar3 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 200);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar3,param_2,0,puVar1);
    _objc_release(puVar1);
    uVar3 = *(undefined8 *)(param_1 + 0xc0);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar3,param_2,0,puVar1);
    _objc_release(puVar1);
  }
  _objc_release(uVar2);
  _os_unfair_lock_unlock(param_1 + 0xd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106946740; end: 1069468af; -[SCSpotlightQueryCoordinator _endLoadingAndSaveToDisk:forFeedType:token:] */

void FUN_106946740(long param_1,undefined8 param_2,int param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  _os_unfair_lock_lock(param_1 + 0xd8);
  lVar1 = param_5;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
LAB_106946810:
    uVar5 = *(undefined8 *)(param_1 + 0xc0);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar5,param_2,0,puVar2);
    _objc_release(puVar2);
    if (param_3 == 0) goto LAB_106946870;
    uVar4 = *(ulong *)(param_1 + 0x30);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14b1a0();
  }
  else {
    uVar4 = *(ulong *)(param_1 + 200);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar4,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar3 = uVar4;
    func_0x00010c0720c0(uVar4,param_2,param_5);
    if ((uVar3 & 1) != 0) {
      uVar5 = *(undefined8 *)(param_1 + 200);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar5,param_2,0,puVar2);
      _objc_release(puVar2);
      _objc_release(uVar4);
      goto LAB_106946810;
    }
  }
  _objc_release(uVar4);
LAB_106946870:
  _os_unfair_lock_unlock(param_1 + 0xd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1069468b0; end: 106946a9f; -[SCSpotlightQueryCoordinator _spotlightOnFriendsFeedPrefetchQuery] */

void FUN_1069468b0(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = (undefined *)0x10d;
  puVar1 = param_1;
  func_0x00010bf5fc80(param_1,param_2,0x10d);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b1138;
    _objc_alloc();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0x10d);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = puVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_60,1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    func_0x00010bdc3540(PTR__OBJC_CLASS___NSUUID_1126b0270);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0127e0(puVar2,param_2,puVar3,0,puVar5,5);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar6);
    puVar3 = PTR_PTR_1126b1158;
    _objc_alloc();
    puVar6 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    func_0x00010bdc3540(PTR__OBJC_CLASS___NSUUID_1126b0270);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03c440(puVar3,param_2,&PTR____CFConstantStringClassReference_110ee1178,
                        &PTR____CFConstantStringClassReference_110daafd8,puVar4,0,puVar2);
    _objc_release(puVar4);
    _objc_release(puVar6);
    puVar4 = puVar3;
    func_0x00010bf51e00(puVar3);
    param_4 = 0x10d;
    puVar6 = puVar4;
    func_0x00010bea3300(param_1,param_2,puVar4,0x10d);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  else {
    _objc_retain(puVar1);
    puVar3 = puVar1;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  uVar7 = *(undefined8 *)(puVar1 + 0xa0);
  _objc_retain(param_4);
  _objc_retain(puVar6);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be46e80(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c1d0560(uVar7,param_2,puVar6,puVar1);
  _objc_release(puVar6);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 106946aa0; end: 106946b37; -[SCSpotlightQueryCoordinator _setLastDeepSessionTimestamp:feedType:] */

void FUN_106946aa0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be46e80(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c1d0560(uVar1,param_2,param_3,param_1);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106946b38; end: 106946bcb; -[SCSpotlightQueryCoordinator _getLastDeepSessionTimestampForFeedType:] */

void FUN_106946b38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be46e80(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar1 = uVar2;
  func_0x00010bf64fa0(uVar2,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106946bcc; end: 106946bfb; -[SCSpotlightQueryCoordinator _lastDeepSessionTimestampKeyForFeedType:] */

void FUN_106946bcc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e655b8);
  return;
}



/* Entry: 106946bfc; end: 106946cc7; -[SCSpotlightQueryCoordinator _shortenedQuerySource:] */

void FUN_106946bfc(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110ee1178);
  if (((ulong)ppuVar1 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110ee1138);
    if (((ulong)ppuVar1 & 1) == 0) {
      ppuVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110ee10f8);
      if (((ulong)ppuVar1 & 1) == 0) {
        ppuVar1 = param_3;
        func_0x00010c08fa60();
        ppuVar2 = param_3;
        if (ppuVar1 < (undefined **)0xf) {
          _objc_retain(param_3);
        }
        else {
          ppuVar1 = param_3;
          func_0x00010c08fa60(param_3);
          func_0x00010c260c00(param_3,param_2,(long)ppuVar1 + -0xf);
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        ppuVar2 = &PTR____CFConstantStringClassReference_110e655f8;
      }
    }
    else {
      ppuVar2 = &PTR____CFConstantStringClassReference_110e655d8;
    }
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110de3fd8;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 106946cc8; end: 106946d17; -[SCSpotlightQueryCoordinator _logSendRequestForFeedType:querySource:] */

void FUN_106946cc8(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010beb2440(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0580(uVar1,param_2,(long)param_3,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106946d18; end: 106946d6f; -[SCSpotlightQueryCoordinator _logDownloadDataSize:feedType:querySource:] */

void FUN_106946d18(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  )

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010beb2440(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0560(uVar1,param_2,param_3,(long)param_4,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106946d70; end: 106946d73; -[SCSpotlightQueryCoordinator _logResponseCountOfStoriesResponse:] */

void FUN_106946d70(void)

{
  return;
}



/* Entry: 106946d74; end: 106946e6f; -[SCSpotlightQueryCoordinator _logResponseCountOfBatchStoriesResponse:] */

void FUN_106946d74(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_178;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar1 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  func_0x00010c258b60();
  _objc_retainAutoreleasedReturnValue();
  iVar4 = (int)auStack_c8;
  lVar10 = param_3;
  func_0x00010bf52a60();
  if (lVar10 != 0) {
    lVar6 = *plStack_100;
    do {
      lVar7 = 0;
      do {
        if (*plStack_100 != lVar6) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010be57d40(param_1,param_2,*(undefined8 *)(lStack_108 + lVar7 * 8));
        lVar7 = lVar7 + 1;
      } while (lVar10 != lVar7);
      iVar4 = (int)auStack_c8;
      lVar10 = param_3;
      puVar1 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar10 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = &uStack_240;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  func_0x00010c258b60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = (undefined1 *)puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    lVar10 = *plStack_230;
    do {
      puVar11 = (undefined1 *)0x0;
      do {
        if (*plStack_230 != lVar10) {
          _objc_enumerationMutation(puVar1);
        }
        uVar8 = *(undefined8 *)(lStack_238 + (long)puVar11 * 8);
        uVar5 = uVar8;
        func_0x00010bfa3f40();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar5;
        func_0x00010bfa4340();
        if ((int)uVar9 == iVar4) {
          uVar9 = uVar8;
          func_0x00010bf98260();
          _objc_release(uVar5);
          if ((int)uVar9 != 0) {
            uVar9 = *(undefined8 *)(param_3 + 0x38);
            func_0x00010bfa3f40(uVar8);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar8;
            func_0x00010bfa4340();
            lVar6 = param_3;
            func_0x00010bee9760(param_3,param_2,(long)(int)uVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0b0520(uVar9,param_2,lVar6);
            _objc_release(lVar6);
            uVar5 = uVar8;
            goto LAB_106946f8c;
          }
        }
        else {
LAB_106946f8c:
          _objc_release(uVar5);
        }
        puVar11 = puVar11 + 1;
      } while (puVar2 != puVar11);
      puVar2 = (undefined1 *)puVar1;
      puVar3 = &uStack_240;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  puVar2 = (undefined1 *)puVar3;
  func_0x00010bf98260();
  if ((int)puVar2 != 0) {
    uVar5 = *(undefined8 *)((long)puVar1 + 0x38);
    puVar2 = (undefined1 *)puVar3;
    func_0x00010bfa3f40(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar2;
    func_0x00010bfa4340();
    func_0x00010bee9760(puVar1,param_2,(long)(int)puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b0520(uVar5,param_2,puVar1);
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 106946e70; end: 106946fff; -[SCSpotlightQueryCoordinator _logMetricsForBatchStoriesResponse:targetFeedType:] */

void FUN_106946e70(long param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010c258b60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        uVar7 = *(undefined8 *)(lStack_128 + lVar10 * 8);
        uVar6 = uVar7;
        func_0x00010bfa3f40();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar6;
        func_0x00010bfa4340();
        if ((int)uVar8 == param_4) {
          uVar8 = uVar7;
          func_0x00010bf98260();
          _objc_release(uVar6);
          if ((int)uVar8 != 0) {
            uVar8 = *(undefined8 *)(param_1 + 0x38);
            func_0x00010bfa3f40(uVar7);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar7;
            func_0x00010bfa4340();
            lVar2 = param_1;
            func_0x00010bee9760(param_1,param_2,(long)(int)uVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0b0520(uVar8,param_2,lVar2);
            _objc_release(lVar2);
            uVar6 = uVar7;
            goto LAB_106946f8c;
          }
        }
        else {
LAB_106946f8c:
          _objc_release(uVar6);
        }
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      lVar1 = param_3;
      puVar5 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  puVar3 = (undefined1 *)puVar5;
  func_0x00010bf98260();
  if ((int)puVar3 != 0) {
    uVar6 = *(undefined8 *)(param_3 + 0x38);
    puVar3 = (undefined1 *)puVar5;
    func_0x00010bfa3f40(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfa4340();
    func_0x00010bee9760(param_3,param_2,(long)(int)puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b0520(uVar6,param_2,param_3);
    _objc_release(param_3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 106947000; end: 10694708f; -[SCSpotlightQueryCoordinator _logMetricsForStoriesResponse:] */

void FUN_106947000(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf98260();
  if ((int)uVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    uVar1 = param_3;
    func_0x00010bfa3f40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfa4340();
    func_0x00010bee9760(param_1,param_2,(long)(int)uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b0520(uVar3,param_2,param_1);
    _objc_release(param_1);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106947090; end: 106947517; -[SCSpotlightQueryCoordinator _logResponseStoryCountForStoriesResponse:feedType:isPaginationRequest:] */

void FUN_106947090(long param_1,undefined8 param_2,long param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
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
  lVar10 = param_3;
  func_0x00010c0ece40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar10;
  func_0x00010bf32220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar10);
  lVar10 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar10 == 0) {
    lVar11 = 0;
    lStack_168 = 0;
    lStack_160 = 0;
    lVar16 = 0;
    lVar14 = 0;
    lStack_158 = 0;
    lStack_150 = 0;
    lStack_138 = 0;
  }
  else {
    lVar11 = 0;
    lStack_168 = 0;
    lStack_160 = 0;
    lVar16 = 0;
    lVar14 = 0;
    lStack_158 = 0;
    lStack_150 = 0;
    lVar13 = *plStack_120;
    lStack_138 = 0;
    do {
      lVar15 = 0;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(lVar2);
        }
        lVar12 = *(long *)(lStack_128 + lVar15 * 8);
        lVar3 = lVar12;
        func_0x00010bf31ee0();
        iVar1 = (int)lVar3;
        if (iVar1 == 3) {
          lVar3 = param_1;
          func_0x00010bec4720(param_1,param_2,lVar12);
          func_0x00010c11b540();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar12;
          func_0x00010c245680();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010c2456a0();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010bf529e0();
          _objc_release(lVar5);
          _objc_release(lVar4);
          _objc_release(lVar12);
          if ((int)lVar3 == 0) {
            lStack_160 = lStack_160 + 1;
            lStack_150 = lVar6 + lStack_150;
          }
          else {
            lStack_168 = lStack_168 + 1;
            lStack_158 = lVar6 + lStack_158;
          }
        }
        else {
          if (iVar1 == 4) {
            lVar11 = lVar11 + 1;
            func_0x00010c11ab00(lVar12);
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar12;
            func_0x00010c2456a0();
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar3;
            func_0x00010bf529e0();
            lVar14 = lVar4 + lVar14;
            _objc_release(lVar3);
          }
          else {
            if (iVar1 != 0x26) goto LAB_1069472e4;
            lStack_138 = lStack_138 + 1;
            func_0x00010c23cdc0(lVar12);
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar12;
            func_0x00010c2456a0();
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar3;
            func_0x00010bf529e0();
            lVar16 = lVar4 + lVar16;
            _objc_release(lVar3);
          }
          _objc_release(lVar12);
        }
LAB_1069472e4:
        lVar15 = lVar15 + 1;
      } while (lVar10 != lVar15);
      lVar10 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar10 != 0);
  }
  _objc_release(lVar2);
  if (param_4 == 0x102) {
    uVar7 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126c10e0;
    func_0x00010bfa37a0(PTR_PTR_1126c10e0);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010bf1f320(uVar7,param_2,puVar8);
    _objc_release(puVar8);
    _objc_release(uVar7);
    if ((int)uVar9 != 0) {
      uVar9 = *(undefined8 *)(param_1 + 0xe0);
      func_0x00010c269d40(uVar9);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = param_3;
      func_0x00010c0ece40();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar10;
      func_0x00010bf32220();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar2;
      func_0x00010bf529e0();
      func_0x00010c0a6160(uVar9,param_2,lVar16,0x102,lStack_138,lVar11,lStack_160,lStack_168,
                          (char)param_5);
      _objc_release(lVar2);
      _objc_release(lVar10);
      _objc_release(uVar9);
      uVar9 = *(undefined8 *)(param_1 + 0xe0);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = 0x102;
      func_0x00010c0a6140();
      _objc_release(uVar9);
      goto LAB_1069474d4;
    }
  }
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  lVar2 = param_3;
  func_0x00010c0ece40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar2;
  func_0x00010bf32220();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar13;
  func_0x00010bf529e0();
  lVar10 = (long)param_4;
  func_0x00010c0b0600(uVar9,param_2,lVar15,lVar10,lStack_138,lVar11,lStack_160,lStack_168,
                      (char)param_5);
  _objc_release(lVar13);
  _objc_release(lVar2);
  func_0x00010c0b05e0(*(undefined8 *)(param_1 + 0x38),param_2,lVar10,lVar16,lVar14,lStack_150,
                      lStack_158,param_5);
LAB_1069474d4:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    uVar9 = 4;
    if (lVar10 != 0x109) {
      uVar9 = 0xffffffffffffffff;
    }
    if (lVar10 == 0xf0) {
      uVar9 = 0x49;
    }
    uVar7 = 0x62;
    if (lVar10 != 0x102) {
      uVar7 = uVar9;
    }
    uVar9 = 0x62;
    if (lVar10 != 0x107) {
      uVar9 = uVar7;
    }
    func_0x000108534a80(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar9;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
    return;
  }
  return;
}



/* Entry: 106947518; end: 106947587; -[SCSpotlightQueryCoordinator _viewLocationFromFeedType:] */

void FUN_106947518(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 4;
  if (param_3 != 0x109) {
    uVar1 = 0xffffffffffffffff;
  }
  if (param_3 == 0xf0) {
    uVar1 = 0x49;
  }
  uVar2 = 0x62;
  if (param_3 != 0x102) {
    uVar2 = uVar1;
  }
  uVar1 = 0x62;
  if (param_3 != 0x107) {
    uVar1 = uVar2;
  }
  func_0x000108534a80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106947588; end: 106947663; -[SCSpotlightQueryCoordinator _storyCardIsLongformShow:] */

bool FUN_106947588(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf31ee0();
  if ((int)lVar2 == 3) {
    lVar2 = param_3;
    func_0x00010c11b540();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfde4e0();
    if ((int)lVar3 == 0) {
      bVar1 = false;
    }
    else {
      lVar3 = param_3;
      func_0x00010c11b540(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c29ba40();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c29ba60();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf529e0();
      bVar1 = lVar6 != 0;
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106947664; end: 10694790b; -[SCSpotlightQueryCoordinator _maybeLogPayloadForFailuresInQuery:feedTypeEnum:response:responseData:] */

void FUN_106947664(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_6);
  uVar12 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(param_5);
  func_0x00010846e5b0(param_3,uVar12);
  if (param_6 == 0) {
    uVar11 = *(undefined8 *)(param_1 + 0xa8);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar12 = param_5;
    func_0x00010c252ee0();
    _objc_release(param_5);
    func_0x00010c14de00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    FUN_106948ba8(uVar11,&PTR____CFConstantStringClassReference_110e65578,puVar5,puVar10,puVar4,
                  &PTR____CFConstantStringClassReference_110db1158,1,param_8,uVar12);
    _objc_release(puVar4);
    _objc_release(puVar10);
  }
  else {
    bVar3 = (int)param_3 == 0;
    puVar1 = &uStack_68;
    if (bVar3) {
      puVar1 = &uStack_70;
    }
    ppuVar2 = &PTR_PTR_1126b7608;
    if (bVar3) {
      ppuVar2 = &PTR_PTR_1126b7600;
    }
    puVar4 = *ppuVar2;
    _objc_alloc();
    *puVar1 = 0;
    func_0x00010c008360();
    puVar5 = (undefined *)*puVar1;
    _objc_retain();
    puVar6 = puVar4;
    func_0x00010c252d60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    uVar12 = *(undefined8 *)(param_1 + 0xa8);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c252ee0();
    _objc_release(param_5);
    func_0x00010c14de00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar9 = puVar6;
    func_0x00010bf3ec40();
    func_0x00010c14de00(puVar10);
    _objc_retainAutoreleasedReturnValue();
    FUN_106948ba8(uVar12,&PTR____CFConstantStringClassReference_110e65578,puVar7,puVar8,puVar4,
                  puVar10,1,param_8,puVar9);
    _objc_release(puVar10);
    _objc_release(puVar4);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
  _objc_release(param_6);
  return;
}



/* Entry: 10694790c; end: 106947f5f; -[SCSpotlightQueryCoordinator _refreshEngagementStatsForStaleStories:] */

ulong FUN_10694790c(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  undefined **ppuVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined1 auStack_190 [8];
  undefined *puStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined **ppuStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  ppuVar1 = *(undefined ***)(param_2 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c10e0;
  func_0x00010bf95fa0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar16 = ppuVar1;
  func_0x00010bf1f320();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  if (((ulong)ppuVar16 & 1) == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e65618;
    FUN_106948f58(*(undefined8 *)(param_2 + 0xa8),&PTR____CFConstantStringClassReference_110e65618,1
                 );
  }
  else {
    lVar3 = *(long *)(param_2 + 0x60);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c10e0;
    func_0x00010bf95fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar3;
    func_0x00010c067e20();
    _objc_release(puVar2);
    _objc_release(lVar3);
    if (lVar15 < 1) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e65638;
      FUN_106948f58(*(undefined8 *)(param_2 + 0xa8),&PTR____CFConstantStringClassReference_110e65638
                    ,1);
    }
    else {
      ppuVar1 = *(undefined ***)(param_2 + 0x60);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126c10e0;
      func_0x00010bf96000(PTR_PTR_1126c10e0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar16 = ppuVar1;
      func_0x00010c067e20();
      _objc_release(puVar2);
      _objc_release(ppuVar1);
      uVar4 = *(undefined8 *)(param_2 + 0x60);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126c10e0;
      func_0x00010bf95fe0();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar4;
      func_0x00010c067e20();
      _objc_release(puVar2);
      _objc_release(uVar4);
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_130 = 0xc2000000;
      pcStack_128 = FUN_106947f60;
      puStack_120 = &UNK_11094ca08;
      uStack_110 = uVar17;
      _objc_retain();
      uVar14 = param_4;
      puStack_118 = puVar2;
      ppuStack_108 = ppuVar16;
      func_0x0001006372a4(param_4,&puStack_138);
      uVar5 = uVar14;
      func_0x00010bf529e0();
      if (uVar5 == 0) {
        ppuVar1 = &PTR____CFConstantStringClassReference_110e65658;
        FUN_106948f58(*(undefined8 *)(param_2 + 0xa8),
                      &PTR____CFConstantStringClassReference_110e65658,1);
      }
      else {
        uVar5 = uVar14;
        func_0x00010c246ca0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf529e0();
        uVar6 = uVar5;
        func_0x00010c25e980();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf529e0();
        func_0x00010bf0a0e0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf529e0(uVar6);
        func_0x00010bf71fe0();
        _objc_retainAutoreleasedReturnValue();
        param_1 = 0.0;
        lStack_178 = 0;
        uStack_180 = 0;
        uStack_168 = 0;
        plStack_170 = (long *)0x0;
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        _objc_retain(uVar6);
        uVar9 = uVar6;
        func_0x00010bf52a60();
        if (uVar9 != 0) {
          lVar15 = *plStack_170;
          do {
            uVar18 = 0;
            do {
              if (*plStack_170 != lVar15) {
                _objc_enumerationMutation(uVar6);
              }
              ppuVar16 = *(undefined ***)(lStack_178 + uVar18 * 8);
              func_0x00010c259560();
              _objc_retainAutoreleasedReturnValue();
              ppuVar1 = ppuVar16;
              func_0x00010afef86c();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuVar16);
              ppuVar16 = ppuVar1;
              func_0x00010c245680();
              _objc_retainAutoreleasedReturnValue();
              ppuVar10 = ppuVar16;
              func_0x00010bfb1920();
              _objc_retainAutoreleasedReturnValue();
              ppuVar11 = ppuVar10;
              func_0x00010c241220();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuVar10);
              _objc_release(ppuVar16);
              ppuVar10 = ppuVar11;
              func_0x00010c08fa60();
              if (ppuVar10 != (undefined **)0x0) {
                func_0x00010befa120(puVar7);
                func_0x00010c1d0640(puVar8);
              }
              _objc_release(ppuVar11);
              _objc_release(ppuVar1);
              uVar18 = uVar18 + 1;
            } while (uVar9 != uVar18);
            uVar9 = uVar6;
            func_0x00010bf52a60();
          } while (uVar9 != 0);
        }
        _objc_release(uVar6);
        puVar12 = puVar7;
        func_0x00010bf529e0();
        if (puVar12 == (undefined *)0x0) {
          ppuVar1 = &PTR____CFConstantStringClassReference_110e65658;
          FUN_106948f58(*(undefined8 *)(param_2 + 0xa8),
                        &PTR____CFConstantStringClassReference_110e65658,1);
        }
        else {
          FUN_106948f58(*(undefined8 *)(param_2 + 0xa8),
                        &PTR____CFConstantStringClassReference_110e65678,1);
          puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          uVar17 = *(undefined8 *)(param_2 + 0xa8);
          func_0x00010bf529e0();
          func_0x00010c14de00(puVar12);
          _objc_retainAutoreleasedReturnValue();
          puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010bf529e0();
          func_0x00010c14de00(puVar13);
          _objc_retainAutoreleasedReturnValue();
          FUN_1069490cc(uVar17,puVar12,puVar13,1);
          _objc_release(puVar13);
          _objc_release(puVar12);
          _objc_initWeak(&puStack_188,param_2);
          uVar17 = *(undefined8 *)(param_2 + 0x48);
          func_0x00010c269d40(uVar17);
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar7;
          func_0x00010bf51e00(puVar7);
          uVar4 = *(undefined8 *)(param_2 + 8);
          func_0x00010c11de00();
          _objc_retainAutoreleasedReturnValue();
          puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_1b0 = 0xc2000000;
          uStack_1a8 = 0x1069480d8;
          puStack_1a0 = &UNK_11094ca58;
          ppuVar16 = &puStack_1b8;
          ppuVar1 = &puStack_188;
          _objc_copyWeak(auStack_190);
          _objc_retain(puVar8);
          puStack_198 = puVar8;
          func_0x00010bfaa680(uVar17);
          _objc_release(uVar4);
          _objc_release(puVar12);
          _objc_release(uVar17);
          _objc_release(puStack_198);
          _objc_destroyWeak(auStack_190);
          _objc_destroyWeak(&puStack_188);
        }
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(uVar6);
        _objc_release(uVar5);
      }
      _objc_release(uVar14);
      _objc_release(puStack_118);
      _objc_release(puVar2);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return param_4;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar16 + 5);
  _objc_destroyWeak(&puStack_188);
  __Unwind_Resume();
  _objc_retain(ppuVar1);
  ppuVar16 = ppuVar1;
  func_0x00010c13bd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar16 == (undefined **)0x0) {
LAB_106947fec:
    uVar14 = 0;
  }
  else {
    if (0 < *(long *)(param_4 + 0x28)) {
      uVar17 = *(undefined8 *)(param_4 + 0x20);
      ppuVar16 = ppuVar1;
      func_0x00010c13bd00(ppuVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380(uVar17);
      lVar15 = *(long *)(param_4 + 0x28);
      _objc_release(ppuVar16);
      if (param_1 < (double)lVar15) goto LAB_106947fec;
    }
    if (*(long *)(param_4 + 0x30) < 1) {
      uVar14 = 1;
    }
    else {
      ppuVar16 = ppuVar1;
      func_0x00010c09ab40(ppuVar1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar16;
      func_0x00010c067fc0();
      uVar14 = (ulong)((long)ppuVar10 < *(long *)(param_4 + 0x30));
      _objc_release(ppuVar16);
    }
  }
  _objc_release(ppuVar1);
  return uVar14;
}



/* Entry: 106947f60; end: 106948053;  */

bool FUN_106947f60(double param_1,long param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c13bd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
LAB_106947fec:
    bVar2 = false;
  }
  else {
    if (0 < *(long *)(param_2 + 0x28)) {
      uVar3 = *(undefined8 *)(param_2 + 0x20);
      lVar1 = param_3;
      func_0x00010c13bd00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380(uVar3);
      lVar4 = *(long *)(param_2 + 0x28);
      _objc_release(lVar1);
      if (param_1 < (double)lVar4) goto LAB_106947fec;
    }
    if (*(long *)(param_2 + 0x30) < 1) {
      bVar2 = true;
    }
    else {
      lVar1 = param_3;
      func_0x00010c09ab40(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      func_0x00010c067fc0();
      bVar2 = lVar4 < *(long *)(param_2 + 0x30);
      _objc_release(lVar1);
    }
  }
  _objc_release(param_3);
  return bVar2;
}



/* Entry: 106948054; end: 106948133;  */

undefined8 FUN_106948054(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c13bd00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c13bd00(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_2;
  func_0x00010bf433a0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 106948134; end: 1069483c7; -[SCSpotlightQueryCoordinator _applyRefreshedEngagementStatsFromResponse:statusCode:storiesBySnapId:] */

undefined *
FUN_106948134(double param_1,long param_2,undefined8 param_3,undefined *param_4,undefined8 param_5,
             long param_6)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  long lVar15;
  ulong uVar16;
  undefined *puVar17;
  long lVar18;
  undefined8 uVar19;
  undefined *puVar20;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_6);
  if (param_4 == (undefined *)0x0) {
    ppuVar13 = &PTR____CFConstantStringClassReference_110db1158;
    ppuVar14 = (undefined **)0x1;
    FUN_1069492fc(*(undefined8 *)(param_2 + 0xa8),&PTR____CFConstantStringClassReference_110e656b8);
  }
  else {
    puVar20 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    param_1 = 0.0;
    puVar3 = param_4;
    func_0x00010c24c400();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    ppuVar7 = &PTR____CFConstantStringClassReference_110dd2e98;
    if (puVar4 != (undefined *)0x0) {
      lVar18 = 0;
      do {
        puVar17 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(puVar3);
          }
          uVar19 = *(undefined8 *)((long)puVar17 * 8);
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = param_6;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(uVar19);
          if (lVar5 != 0) {
            lVar18 = lVar18 + 1;
          }
          lVar5 = param_2;
          func_0x00010be86b20();
          _objc_retainAutoreleasedReturnValue();
          if (lVar5 != 0) {
            func_0x00010befa120(puVar20);
          }
          _objc_release(lVar5);
          puVar17 = puVar17 + 1;
        } while (puVar4 != puVar17);
        puVar4 = puVar3;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined *)0x0);
      ppuVar7 = &PTR____CFConstantStringClassReference_110dd2e98;
      if (lVar18 != 0) {
        ppuVar7 = &PTR____CFConstantStringClassReference_110e656d8;
      }
    }
    _objc_release(puVar3);
    ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010bf529e0();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar20;
    func_0x00010bf529e0();
    if (puVar3 != (undefined *)0x0) {
      uVar19 = *(undefined8 *)(param_2 + 0x30);
      func_0x00010c269d40(uVar19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28a480();
      _objc_release(uVar19);
      ppuVar7 = &PTR____CFConstantStringClassReference_110dae6f8;
    }
    ppuVar14 = (undefined **)0x1;
    ppuVar13 = ppuVar6;
    FUN_1069492fc(*(undefined8 *)(param_2 + 0xa8),ppuVar7);
    _objc_release(ppuVar6);
    _objc_release(puVar20);
  }
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return param_4;
  }
  ___stack_chk_fail();
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar13);
  _objc_retain(ppuVar14);
  ppuVar7 = ppuVar13;
  func_0x00010c241220(ppuVar13);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar14;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar14);
  _objc_release(ppuVar7);
  if (ppuVar6 == (undefined **)0x0) {
    puVar20 = (undefined *)0x0;
    goto LAB_1069488a0;
  }
  ppuVar14 = ppuVar6;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar14;
  func_0x00010afef86c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar14);
  ppuVar14 = ppuVar7;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar14;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar14);
  if (ppuVar8 == (undefined **)0x0) {
    puVar20 = (undefined *)0x0;
  }
  else {
    ppuVar14 = ppuVar8;
    func_0x00010c24b260();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar14;
    func_0x00010c24b580();
    ppuVar9 = ppuVar13;
    func_0x00010c09aaa0();
    uVar16 = (long)ppuVar9 - (long)ppuVar11;
    uVar19 = *(undefined8 *)(param_4 + 0xa8);
    if ((long)ppuVar11 < 1) {
      ppuVar10 = &PTR____CFConstantStringClassReference_110db1158;
    }
    else if (ppuVar11 < (undefined **)0x6) {
      ppuVar10 = &PTR____CFConstantStringClassReference_110e65738;
    }
    else {
      ppuVar10 = &PTR____CFConstantStringClassReference_110e65758;
      if ((undefined **)0x19 < ppuVar11) {
        ppuVar10 = &PTR____CFConstantStringClassReference_110e65778;
      }
    }
    uVar1 = -uVar16;
    if (-1 < (long)uVar16) {
      uVar1 = uVar16;
    }
    if (ppuVar9 == ppuVar11) {
      ppuVar9 = &PTR____CFConstantStringClassReference_110db1158;
    }
    else if (uVar1 < 6) {
      ppuVar9 = &PTR____CFConstantStringClassReference_110e65738;
    }
    else if (uVar1 < 0xb) {
      ppuVar9 = &PTR____CFConstantStringClassReference_110e65798;
    }
    else {
      ppuVar9 = &PTR____CFConstantStringClassReference_110e657b8;
      if (0x32 < uVar1) {
        ppuVar9 = &PTR____CFConstantStringClassReference_110e657d8;
      }
    }
    _objc_retain(ppuVar10);
    FUN_10694952c(uVar19,ppuVar10,ppuVar9,1);
    _objc_release(ppuVar10);
    ppuVar9 = ppuVar13;
    func_0x00010c09aaa0();
    if ((ppuVar14 == (undefined **)0x0) ||
       ((undefined **)((ulong)ppuVar9 & ((long)ppuVar9 >> 0x3f ^ 0xffffffffffffffffU)) != ppuVar11))
    {
LAB_1069485fc:
      puVar3 = PTR_PTR_1126ca6f8;
      _objc_alloc();
      puVar20 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      func_0x00010bf1f680();
      func_0x00010c22a980();
      func_0x00010c29c5c0();
      func_0x00010c25e440();
      if (ppuVar14 == (undefined **)0x0) {
        ppuVar11 = (undefined **)0x0;
        func_0x00010c275280(0);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c129760();
        ppuVar11 = ppuVar14;
        func_0x00010c275280(ppuVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c27b920();
      }
      ppuVar9 = ppuVar14;
      func_0x00010bf50280();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar14;
      func_0x00010bf50620();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d8de0();
      func_0x00010c09aaa0();
      func_0x00010c0f7900();
      func_0x00010c123100();
      func_0x00010c052aa0(param_1 * 1000.0,puVar3);
      _objc_release(ppuVar10);
      _objc_release(ppuVar9);
      _objc_release(ppuVar11);
      _objc_release(puVar20);
      puVar4 = PTR_PTR_1126cf330;
      func_0x00010bf821a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b9d60();
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar17 = puVar4;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar6;
      func_0x000108f4bc64(ppuVar6,puVar20);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar20);
      puVar12 = PTR_PTR_1126c6d78;
      func_0x00010bf82080(PTR_PTR_1126c6d78);
      _objc_retainAutoreleasedReturnValue();
      puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c09aaa0(ppuVar13);
      func_0x00010c0df840(puVar20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b2ec0(puVar12);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar20);
      puVar20 = puVar12;
      func_0x00010bf21f60(puVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      _objc_release(ppuVar11);
      _objc_release(puVar17);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    else {
      ppuVar9 = ppuVar6;
      func_0x00010c09ab40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar9;
      func_0x00010c067fc0();
      _objc_release(ppuVar9);
      if (ppuVar11 != ppuVar10) goto LAB_1069485fc;
      puVar20 = (undefined *)0x0;
    }
    _objc_release(ppuVar14);
  }
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
LAB_1069488a0:
  _objc_release(ppuVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar15) {
    ___stack_chk_fail();
    return ppuVar13[0x22];
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
  return puVar20;
}



/* Entry: 1069483c8; end: 1069488f3; -[SCSpotlightQueryCoordinator _rebuildStoryWithRefreshedStats:storiesBySnapId:] */

undefined *
FUN_1069483c8(double param_1,long param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined *puVar17;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_4;
  func_0x00010c241220(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(uVar2);
  if (uVar3 == 0) {
    puVar17 = (undefined *)0x0;
    goto LAB_1069488a0;
  }
  uVar2 = uVar3;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010afef86c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar4;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (uVar5 == 0) {
    puVar17 = (undefined *)0x0;
  }
  else {
    uVar2 = uVar5;
    func_0x00010c24b260();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010c24b580();
    uVar6 = param_4;
    func_0x00010c09aaa0();
    uVar13 = uVar6 - uVar8;
    uVar14 = *(undefined8 *)(param_2 + 0xa8);
    if ((long)uVar8 < 1) {
      ppuVar15 = &PTR____CFConstantStringClassReference_110db1158;
    }
    else if (uVar8 < 6) {
      ppuVar15 = &PTR____CFConstantStringClassReference_110e65738;
    }
    else {
      ppuVar15 = &PTR____CFConstantStringClassReference_110e65758;
      if (0x19 < uVar8) {
        ppuVar15 = &PTR____CFConstantStringClassReference_110e65778;
      }
    }
    uVar1 = -uVar13;
    if (-1 < (long)uVar13) {
      uVar1 = uVar13;
    }
    if (uVar6 == uVar8) {
      ppuVar16 = &PTR____CFConstantStringClassReference_110db1158;
    }
    else if (uVar1 < 6) {
      ppuVar16 = &PTR____CFConstantStringClassReference_110e65738;
    }
    else if (uVar1 < 0xb) {
      ppuVar16 = &PTR____CFConstantStringClassReference_110e65798;
    }
    else {
      ppuVar16 = &PTR____CFConstantStringClassReference_110e657b8;
      if (0x32 < uVar1) {
        ppuVar16 = &PTR____CFConstantStringClassReference_110e657d8;
      }
    }
    _objc_retain(ppuVar15);
    FUN_10694952c(uVar14,ppuVar15,ppuVar16,1);
    _objc_release(ppuVar15);
    uVar6 = param_4;
    func_0x00010c09aaa0();
    if ((uVar2 == 0) || ((uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU)) != uVar8)) {
LAB_1069485fc:
      puVar7 = PTR_PTR_1126ca6f8;
      _objc_alloc();
      puVar17 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      func_0x00010bf1f680();
      func_0x00010c22a980();
      func_0x00010c29c5c0();
      func_0x00010c25e440();
      if (uVar2 == 0) {
        uVar8 = 0;
        func_0x00010c275280(0);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c129760();
        uVar8 = uVar2;
        func_0x00010c275280(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c27b920();
      }
      uVar6 = uVar2;
      func_0x00010bf50280();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar2;
      func_0x00010bf50620();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d8de0();
      func_0x00010c09aaa0();
      func_0x00010c0f7900();
      func_0x00010c123100();
      func_0x00010c052aa0(param_1 * 1000.0,puVar7);
      _objc_release(uVar13);
      _objc_release(uVar6);
      _objc_release(uVar8);
      _objc_release(puVar17);
      puVar9 = PTR_PTR_1126cf330;
      func_0x00010bf821a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b9d60();
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar3;
      func_0x000108f4bc64(uVar3,puVar17);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar17);
      puVar11 = PTR_PTR_1126c6d78;
      func_0x00010bf82080(PTR_PTR_1126c6d78);
      _objc_retainAutoreleasedReturnValue();
      puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c09aaa0(param_4);
      func_0x00010c0df840(puVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b2ec0(puVar11);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar17);
      puVar17 = puVar11;
      func_0x00010bf21f60(puVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      _objc_release(uVar8);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar7);
    }
    else {
      uVar6 = uVar3;
      func_0x00010c09ab40();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar6;
      func_0x00010c067fc0();
      _objc_release(uVar6);
      if (uVar8 != uVar13) goto LAB_1069485fc;
      puVar17 = (undefined *)0x0;
    }
    _objc_release(uVar2);
  }
  _objc_release(uVar5);
  _objc_release(uVar4);
LAB_1069488a0:
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    return *(undefined **)(param_4 + 0x110);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return puVar17;
}



/* Entry: 1069488f4; end: 1069488fb; -[SCSpotlightQueryCoordinator sectionExtensionServices] */

undefined8 FUN_1069488f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



/* Entry: 1069488fc; end: 10694892b; -[SCSpotlightQueryCoordinator setSectionExtensionServices:] */

void FUN_1069488fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x110) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10694892c; end: 106948943; -[SCSpotlightQueryCoordinator delegate] */

void FUN_10694892c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x118);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106948944; end: 10694894f; -[SCSpotlightQueryCoordinator setDelegate:] */

void FUN_106948944(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x118,param_3);
  return;
}



/* Entry: 106948950; end: 106948b33; -[SCSpotlightQueryCoordinator .cxx_destruct] */

void FUN_106948950(long param_1)

{
  _objc_destroyWeak(param_1 + 0x118);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106948b34; end: 106948ba7; -[SCGrapheneSpotlightQueryCoordinatorMetric2 init] */

undefined1 * FUN_106948b34(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f3de8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106948ba8; end: 106948f57;  */

/* WARNING: Removing unreachable block (ram,0x000106948f10) */

void FUN_106948ba8(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined1 *puVar15;
  long *plVar16;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 *puStack_500;
  undefined8 auStack_4f8 [2];
  char cStack_4e1;
  undefined8 auStack_4e0 [2];
  char cStack_4c9;
  long lStack_4c8;
  undefined8 *puStack_4c0;
  undefined8 *puStack_4b8;
  undefined8 *puStack_4b0;
  long *plStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 *puStack_498;
  undefined8 ***pppuStack_490;
  code *pcStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined1 *puStack_468;
  undefined8 auStack_460 [2];
  char cStack_449;
  long lStack_448;
  undefined8 *puStack_440;
  undefined8 *puStack_438;
  undefined8 *puStack_430;
  undefined8 *puStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined8 ***pppuStack_410;
  code *pcStack_408;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 auStack_3d8 [2];
  char cStack_3c1;
  undefined8 auStack_3c0 [2];
  char cStack_3a9;
  long lStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 *puStack_398;
  undefined8 *puStack_390;
  undefined8 *puStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 ***pppuStack_370;
  code *pcStack_368;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 *puStack_340;
  undefined8 auStack_338 [2];
  char cStack_321;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 auStack_298 [2];
  char cStack_281;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 auStack_1f8 [2];
  char cStack_1e1;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined *puStack_1b0;
  long *plStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined8 auStack_80 [2];
  char cStack_69;
  long lStack_68;
  
  puVar3 = &uStack_100;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar6 = param_3;
  puVar5 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar15 = (undefined1 *)0x0;
  if (param_1 != 0) {
    plVar16 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3a383c;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_e0,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3a383c;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_c8,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3a383c;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_b0,puVar1);
    _objc_retain(param_5);
    if (param_5 == (undefined8 *)0x0) {
      puVar2 = &UNK_10f3a383c;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar2 = (undefined *)param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_98,puVar2);
    _objc_retain(param_6);
    if (param_6 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3a383c;
    }
    else {
      _objc_retainAutorelease(param_6);
      puVar1 = param_6;
      func_0x00010bdc3520(param_6);
    }
    _objc_release(param_6);
    func_0x00010002b838(auStack_80,puVar1);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_68,5);
    puVar1 = (undefined8 *)&UNK_11094caa0;
    (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_11094caa0,&uStack_100,param_7);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    lVar14 = 0;
    puVar15 = auStack_e0;
    puVar6 = puVar3;
    puVar5 = param_7;
    do {
      if ((&cStack_69)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_80 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x78);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_6);
  do {
    puVar15 = puVar15 + -0x18;
  } while (puVar15 != auStack_e0);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  puVar12 = &uStack_180;
  pcStack_108 = FUN_106948f58;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar1;
  puVar11 = puVar6;
  puStack_140 = puVar3;
  puStack_138 = param_6;
  puStack_130 = (undefined *)param_5;
  puStack_128 = param_4;
  puStack_120 = param_3;
  puStack_118 = param_2;
  puStack_110 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  plVar16 = (long *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar16 = (long *)puVar4[1];
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3a383c;
    }
    else {
      puVar5 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    param_6 = auStack_160;
    func_0x00010002b838(auStack_160,puVar5);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    puVar10 = (undefined8 *)&UNK_11094caf0;
    (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_11094caf0,&uStack_180,puVar6);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar11 = puVar12;
    puVar5 = puVar6;
    param_5 = &uStack_180;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar11 = puVar12;
      puVar5 = puVar6;
      param_5 = &uStack_180;
    }
  }
  puVar6 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar7 = puVar6;
  __Unwind_Resume();
  pcStack_188 = FUN_1069490cc;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar10;
  puVar12 = puVar11;
  puVar9 = puVar5;
  puStack_1c0 = puVar3;
  puStack_1b8 = param_6;
  puStack_1b0 = (undefined *)param_5;
  plStack_1a8 = plVar16;
  puStack_1a0 = puVar6;
  puStack_198 = puVar1;
  ppuStack_190 = &puStack_110;
  _objc_retain(puVar10);
  _objc_retain(puVar11);
  puVar1 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    plVar16 = (long *)puVar7[1];
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3a383c;
    }
    else {
      puVar1 = puVar10;
      _objc_retainAutorelease(puVar10);
      func_0x00010bdc3520();
    }
    _objc_release(puVar10);
    puVar3 = auStack_1f8;
    func_0x00010002b838(auStack_1f8,puVar1);
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3a383c;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar1 = puVar11;
      func_0x00010bdc3520(puVar11);
    }
    _objc_release(puVar11);
    func_0x00010002b838(auStack_1e0,puVar1);
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    func_0x00010007e1e8(&uStack_218,auStack_1f8,&lStack_1c8,2);
    puVar4 = (undefined8 *)&UNK_11094cb40;
    param_6 = &uStack_218;
    puVar12 = &uStack_218;
    (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_11094cb40,puVar12,puVar5);
    puStack_200 = param_6;
    func_0x00010007e5dc(&puStack_200);
    lVar14 = 0;
    puVar1 = auStack_1f8;
    puVar9 = puVar5;
    do {
      if ((&cStack_1c9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1e0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar11);
  puVar6 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar11);
  if (cStack_1e1 < '\0') {
    __ZdlPv(auStack_1f8[0]);
  }
  _objc_release(puVar11);
  _objc_release(puVar10);
  puVar8 = puVar6;
  __Unwind_Resume();
  pcStack_228 = FUN_1069492fc;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar4;
  puVar7 = puVar12;
  puVar13 = puVar9;
  puStack_260 = puVar3;
  puStack_258 = param_6;
  puStack_250 = puVar1;
  puStack_248 = puVar6;
  puStack_240 = puVar11;
  puStack_238 = puVar10;
  pppuStack_230 = &ppuStack_190;
  _objc_retain(puVar4);
  _objc_retain(puVar12);
  puVar1 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    plVar16 = (long *)puVar8[1];
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3a383c;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    puVar3 = auStack_298;
    func_0x00010002b838(auStack_298,puVar1);
    _objc_retain(puVar12);
    if (puVar12 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3a383c;
    }
    else {
      _objc_retainAutorelease(puVar12);
      puVar1 = puVar12;
      func_0x00010bdc3520(puVar12);
    }
    _objc_release(puVar12);
    func_0x00010002b838(auStack_280,puVar1);
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    func_0x00010007e1e8(&uStack_2b8,auStack_298,&lStack_268,2);
    puVar5 = (undefined8 *)&UNK_11094cb90;
    param_6 = &uStack_2b8;
    puVar7 = &uStack_2b8;
    (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_11094cb90,puVar7,puVar9);
    puStack_2a0 = param_6;
    func_0x00010007e5dc(&puStack_2a0);
    lVar14 = 0;
    puVar1 = auStack_298;
    puVar13 = puVar9;
    do {
      if ((&cStack_269)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_280 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar12);
  puVar6 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_268) {
    ___stack_chk_fail();
    _objc_release(puVar12);
    if (cStack_281 < '\0') {
      __ZdlPv(auStack_298[0]);
    }
    _objc_release(puVar12);
    _objc_release(puVar4);
    puVar9 = puVar6;
    __Unwind_Resume();
    pcStack_2c8 = FUN_10694952c;
    lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar10 = puVar5;
    puVar11 = puVar7;
    puVar8 = puVar13;
    puStack_300 = puVar3;
    puStack_2f8 = param_6;
    puStack_2f0 = puVar1;
    puStack_2e8 = puVar6;
    puStack_2e0 = puVar12;
    puStack_2d8 = puVar4;
    pppuStack_2d0 = &pppuStack_230;
    _objc_retain(puVar5);
    _objc_retain(puVar7);
    puVar1 = (undefined8 *)0x0;
    if (puVar9 != (undefined8 *)0x0) {
      plVar16 = (long *)puVar9[1];
      _objc_retain(puVar5);
      if (puVar5 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3a383c;
      }
      else {
        puVar1 = puVar5;
        _objc_retainAutorelease(puVar5);
        func_0x00010bdc3520();
      }
      _objc_release(puVar5);
      puVar3 = auStack_338;
      func_0x00010002b838(auStack_338,puVar1);
      _objc_retain(puVar7);
      if (puVar7 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3a383c;
      }
      else {
        _objc_retainAutorelease(puVar7);
        puVar1 = puVar7;
        func_0x00010bdc3520(puVar7);
      }
      _objc_release(puVar7);
      func_0x00010002b838(auStack_320,puVar1);
      uStack_358 = 0;
      uStack_350 = 0;
      uStack_348 = 0;
      func_0x00010007e1e8(&uStack_358,auStack_338,&lStack_308,2);
      puVar10 = (undefined8 *)&UNK_11094cbe0;
      param_6 = &uStack_358;
      puVar11 = &uStack_358;
      (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_11094cbe0,puVar11,puVar13);
      puStack_340 = param_6;
      func_0x00010007e5dc(&puStack_340);
      lVar14 = 0;
      puVar1 = auStack_338;
      puVar8 = puVar13;
      do {
        if ((&cStack_309)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_320 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
    _objc_release(puVar7);
    puVar6 = puVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar7);
    if (cStack_321 < '\0') {
      __ZdlPv(auStack_338[0]);
    }
    _objc_release(puVar7);
    _objc_release(puVar5);
    puVar9 = puVar6;
    __Unwind_Resume();
    pcStack_368 = FUN_10694975c;
    lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar4 = puVar10;
    puVar12 = puVar11;
    puVar13 = puVar8;
    puStack_3a0 = puVar3;
    puStack_398 = param_6;
    puStack_390 = puVar1;
    puStack_388 = puVar6;
    puStack_380 = puVar7;
    puStack_378 = puVar5;
    pppuStack_370 = &pppuStack_2d0;
    _objc_retain(puVar10);
    _objc_retain(puVar11);
    puVar1 = (undefined8 *)0x0;
    if (puVar9 != (undefined8 *)0x0) {
      plVar16 = (long *)puVar9[1];
      _objc_retain(puVar10);
      if (puVar10 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3a383c;
      }
      else {
        puVar1 = puVar10;
        _objc_retainAutorelease(puVar10);
        func_0x00010bdc3520();
      }
      _objc_release(puVar10);
      puVar3 = auStack_3d8;
      func_0x00010002b838(auStack_3d8,puVar1);
      _objc_retain(puVar11);
      if (puVar11 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3a383c;
      }
      else {
        _objc_retainAutorelease(puVar11);
        puVar1 = puVar11;
        func_0x00010bdc3520(puVar11);
      }
      _objc_release(puVar11);
      func_0x00010002b838(auStack_3c0,puVar1);
      uStack_3f8 = 0;
      uStack_3f0 = 0;
      uStack_3e8 = 0;
      func_0x00010007e1e8(&uStack_3f8,auStack_3d8,&lStack_3a8,2);
      puVar4 = (undefined8 *)&UNK_11094cc30;
      param_6 = &uStack_3f8;
      puVar12 = &uStack_3f8;
      (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_11094cc30,puVar12,puVar8);
      puStack_3e0 = param_6;
      func_0x00010007e5dc(&puStack_3e0);
      lVar14 = 0;
      puVar1 = auStack_3d8;
      puVar13 = puVar8;
      do {
        if ((&cStack_3a9)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_3c0 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
    _objc_release(puVar11);
    puVar6 = puVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3a8) {
      ___stack_chk_fail();
      _objc_release(puVar11);
      if (cStack_3c1 < '\0') {
        __ZdlPv(auStack_3d8[0]);
      }
      _objc_release(puVar11);
      _objc_release(puVar10);
      puVar7 = puVar6;
      __Unwind_Resume();
      puVar8 = &uStack_480;
      pcStack_408 = FUN_10694998c;
      lStack_448 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar5 = puVar4;
      puVar9 = puVar12;
      puStack_440 = puVar3;
      puStack_438 = param_6;
      puStack_430 = puVar1;
      puStack_428 = puVar6;
      puStack_420 = puVar11;
      puStack_418 = puVar10;
      pppuStack_410 = &pppuStack_370;
      _objc_retain(puVar4);
      plVar16 = (long *)0x0;
      if (puVar7 != (undefined8 *)0x0) {
        plVar16 = (long *)puVar7[1];
        _objc_retain(puVar4);
        if (puVar4 == (undefined8 *)0x0) {
          puVar1 = (undefined8 *)&UNK_10f3a383c;
        }
        else {
          puVar1 = puVar4;
          _objc_retainAutorelease(puVar4);
          func_0x00010bdc3520();
        }
        _objc_release(puVar4);
        param_6 = auStack_460;
        func_0x00010002b838(auStack_460,puVar1);
        uStack_480 = 0;
        uStack_478 = 0;
        uStack_470 = 0;
        func_0x00010007e1e8(&uStack_480,auStack_460,&lStack_448,1);
        puVar5 = (undefined8 *)&UNK_11094cc80;
        (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_11094cc80,&uStack_480,puVar12);
        puStack_468 = (undefined1 *)&uStack_480;
        func_0x00010007e5dc(&puStack_468);
        puVar9 = puVar8;
        puVar13 = puVar12;
        puVar1 = &uStack_480;
        if (cStack_449 < '\0') {
          __ZdlPv(auStack_460[0]);
          puVar9 = puVar8;
          puVar13 = puVar12;
          puVar1 = &uStack_480;
        }
      }
      puVar6 = puVar4;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_448) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(puVar4);
      _objc_release(puVar4);
      puVar10 = puVar6;
      __Unwind_Resume();
      pcStack_488 = FUN_106949b00;
      lStack_4c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_4c0 = puVar3;
      puStack_4b8 = param_6;
      puStack_4b0 = puVar1;
      plStack_4a8 = plVar16;
      puStack_4a0 = puVar6;
      puStack_498 = puVar4;
      pppuStack_490 = &pppuStack_410;
      _objc_retain(puVar5);
      _objc_retain(puVar9);
      if (puVar10 != (undefined8 *)0x0) {
        plVar16 = (long *)puVar10[1];
        _objc_retain(puVar5);
        if (puVar5 == (undefined8 *)0x0) {
          puVar1 = (undefined8 *)&UNK_10f3a383c;
        }
        else {
          puVar1 = puVar5;
          _objc_retainAutorelease(puVar5);
          func_0x00010bdc3520();
        }
        _objc_release(puVar5);
        func_0x00010002b838(auStack_4f8,puVar1);
        _objc_retain(puVar9);
        if (puVar9 == (undefined8 *)0x0) {
          puVar1 = (undefined8 *)&UNK_10f3a383c;
        }
        else {
          _objc_retainAutorelease(puVar9);
          puVar1 = puVar9;
          func_0x00010bdc3520(puVar9);
        }
        _objc_release(puVar9);
        func_0x00010002b838(auStack_4e0,puVar1);
        uStack_518 = 0;
        uStack_510 = 0;
        uStack_508 = 0;
        func_0x00010007e1e8(&uStack_518,auStack_4f8,&lStack_4c8,2);
        (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_11094ccd0,&uStack_518,puVar13);
        puStack_500 = &uStack_518;
        func_0x00010007e5dc(&puStack_500);
        lVar14 = 0;
        do {
          if ((&cStack_4c9)[lVar14] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_4e0 + lVar14));
          }
          lVar14 = lVar14 + -0x18;
        } while (lVar14 != -0x30);
      }
      _objc_release(puVar9);
      puVar1 = puVar5;
      _objc_release(puVar5);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4c8) {
        ___stack_chk_fail();
        _objc_release(puVar9);
        if (cStack_4e1 < '\0') {
          __ZdlPv(auStack_4f8[0]);
        }
        _objc_release(puVar9);
        _objc_release(puVar5);
        __Unwind_Resume(puVar1);
        if (puRam00000001136c4748 == (undefined *)0x0) {
          puVar2 = PTR_PTR_1126ae978;
          func_0x00010bf00dc0();
          puRam00000001136c4748 = puVar2;
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 106948f58; end: 1069490cb;  */

void FUN_106948f58(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 *puStack_400;
  undefined8 auStack_3f8 [2];
  char cStack_3e1;
  undefined8 auStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 *puStack_3b0;
  long *plStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined8 ***pppuStack_390;
  code *pcStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 *puStack_330;
  undefined *puStack_328;
  undefined8 *puStack_320;
  undefined *puStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 auStack_2d8 [2];
  char cStack_2c1;
  undefined8 auStack_2c0 [2];
  char cStack_2a9;
  long lStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 *puStack_290;
  undefined *puStack_288;
  undefined8 *puStack_280;
  undefined *puStack_278;
  undefined8 ***pppuStack_270;
  code *pcStack_268;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 *puStack_240;
  undefined8 auStack_238 [2];
  char cStack_221;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined *puStack_148;
  undefined8 *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a383c;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = auStack_60;
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_11094caf0;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11094caf0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = puVar3;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = puVar3;
      param_4 = param_3;
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
  __Unwind_Resume();
  pcStack_88 = FUN_1069490cc;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar3 = puVar5;
  puVar10 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar5);
  puVar9 = (undefined8 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3a383c;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_f8;
    func_0x00010002b838(auStack_f8,puVar2);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3a383c;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_e0,puVar3);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    puVar6 = &UNK_11094cb40;
    unaff_x23 = &uStack_118;
    puVar3 = &uStack_118;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11094cb40,puVar3,param_4);
    puStack_100 = unaff_x23;
    func_0x00010007e5dc(&puStack_100);
    lVar13 = 0;
    puVar9 = auStack_f8;
    puVar10 = param_4;
    do {
      if ((&cStack_c9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar5);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_128 = FUN_1069492fc;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar6;
  puVar8 = puVar3;
  puVar11 = puVar10;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar9;
  puStack_148 = puVar2;
  puStack_140 = puVar5;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_90;
  _objc_retain(puVar6);
  _objc_retain(puVar3);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a383c;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x24 = auStack_198;
    func_0x00010002b838(auStack_198,puVar1);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3a383c;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar5 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_180,puVar5);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x00010007e1e8(&uStack_1b8,auStack_198,&lStack_168,2);
    puVar7 = &UNK_11094cb90;
    unaff_x23 = &uStack_1b8;
    puVar8 = &uStack_1b8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11094cb90,puVar8,puVar10);
    puStack_1a0 = unaff_x23;
    func_0x00010007e5dc(&puStack_1a0);
    lVar13 = 0;
    puVar5 = auStack_198;
    puVar11 = puVar10;
    do {
      if ((&cStack_169)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar3);
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar6);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_1c8 = FUN_10694952c;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar7;
  puVar9 = puVar8;
  puVar10 = puVar11;
  puStack_200 = unaff_x24;
  puStack_1f8 = unaff_x23;
  puStack_1f0 = puVar5;
  puStack_1e8 = puVar1;
  puStack_1e0 = puVar3;
  puStack_1d8 = puVar6;
  pppuStack_1d0 = &ppuStack_130;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a383c;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x24 = auStack_238;
    func_0x00010002b838(auStack_238,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3a383c;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar5 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_220,puVar5);
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    func_0x00010007e1e8(&uStack_258,auStack_238,&lStack_208,2);
    puVar2 = &UNK_11094cbe0;
    unaff_x23 = &uStack_258;
    puVar9 = &uStack_258;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11094cbe0,puVar9,puVar11);
    puStack_240 = unaff_x23;
    func_0x00010007e5dc(&puStack_240);
    lVar13 = 0;
    puVar5 = auStack_238;
    puVar10 = puVar11;
    do {
      if ((&cStack_209)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_220 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar8);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_221 < '\0') {
    __ZdlPv(auStack_238[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_268 = FUN_10694975c;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar2;
  puVar3 = puVar9;
  puVar11 = puVar10;
  puStack_2a0 = unaff_x24;
  puStack_298 = unaff_x23;
  puStack_290 = puVar5;
  puStack_288 = puVar1;
  puStack_280 = puVar8;
  puStack_278 = puVar7;
  pppuStack_270 = &pppuStack_1d0;
  _objc_retain(puVar2);
  _objc_retain(puVar9);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a383c;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x24 = auStack_2d8;
    func_0x00010002b838(auStack_2d8,puVar1);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3a383c;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar5 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_2c0,puVar5);
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    func_0x00010007e1e8(&uStack_2f8,auStack_2d8,&lStack_2a8,2);
    puVar6 = &UNK_11094cc30;
    unaff_x23 = &uStack_2f8;
    puVar3 = &uStack_2f8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11094cc30,puVar3,puVar10);
    puStack_2e0 = unaff_x23;
    func_0x00010007e5dc(&puStack_2e0);
    lVar13 = 0;
    puVar5 = auStack_2d8;
    puVar11 = puVar10;
    do {
      if ((&cStack_2a9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2c0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar9);
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_2c1 < '\0') {
    __ZdlPv(auStack_2d8[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar2);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar8 = &uStack_380;
  pcStack_308 = FUN_10694998c;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar6;
  puVar10 = puVar3;
  puStack_340 = unaff_x24;
  puStack_338 = unaff_x23;
  puStack_330 = puVar5;
  puStack_328 = puVar1;
  puStack_320 = puVar9;
  puStack_318 = puVar2;
  pppuStack_310 = &pppuStack_270;
  _objc_retain(puVar6);
  plVar12 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a383c;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x23 = auStack_360;
    func_0x00010002b838(auStack_360,puVar1);
    uStack_380 = 0;
    uStack_378 = 0;
    uStack_370 = 0;
    func_0x00010007e1e8(&uStack_380,auStack_360,&lStack_348,1);
    puVar7 = &UNK_11094cc80;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11094cc80,&uStack_380,puVar3);
    puStack_368 = (undefined1 *)&uStack_380;
    func_0x00010007e5dc(&puStack_368);
    puVar10 = puVar8;
    puVar11 = puVar3;
    puVar5 = &uStack_380;
    if (cStack_349 < '\0') {
      __ZdlPv(auStack_360[0]);
      puVar10 = puVar8;
      puVar11 = puVar3;
      puVar5 = &uStack_380;
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar2 = puVar1;
  __Unwind_Resume();
  pcStack_388 = FUN_106949b00;
  lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_3c0 = unaff_x24;
  puStack_3b8 = unaff_x23;
  puStack_3b0 = puVar5;
  plStack_3a8 = plVar12;
  puStack_3a0 = puVar1;
  puStack_398 = puVar6;
  pppuStack_390 = &pppuStack_310;
  _objc_retain(puVar7);
  _objc_retain(puVar10);
  if (puVar2 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar2 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a383c;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_3f8,puVar1);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3a383c;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar5 = puVar10;
      func_0x00010bdc3520(puVar10);
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_3e0,puVar5);
    uStack_418 = 0;
    uStack_410 = 0;
    uStack_408 = 0;
    func_0x00010007e1e8(&uStack_418,auStack_3f8,&lStack_3c8,2);
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11094ccd0,&uStack_418,puVar11);
    puStack_400 = &uStack_418;
    func_0x00010007e5dc(&puStack_400);
    lVar13 = 0;
    do {
      if ((&cStack_3c9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3e0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar10);
  puVar1 = puVar7;
  _objc_release(puVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  if (cStack_3e1 < '\0') {
    __ZdlPv(auStack_3f8[0]);
  }
  _objc_release(puVar10);
  _objc_release(puVar7);
  __Unwind_Resume(puVar1);
  if (puRam00000001136c4748 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0();
    puRam00000001136c4748 = puVar1;
  }
  return;
}



/* Entry: 1069490cc; end: 1069492fb;  */

void FUN_1069490cc(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 *puStack_380;
  undefined8 auStack_378 [2];
  char cStack_361;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 *puStack_330;
  long *plStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined *puStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined *puStack_208;
  undefined8 *puStack_200;
  undefined *puStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  puVar9 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar5 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a383c;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3a383c;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_11094cb40;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11094cb40,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar12 = 0;
    puVar5 = auStack_78;
    puVar9 = param_4;
    do {
      if ((&cStack_49)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_1069492fc;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar2;
  puVar11 = puVar9;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar5;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f3a383c;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3a383c;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_100,puVar5);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar7 = &UNK_11094cb90;
    unaff_x23 = &uStack_138;
    puVar8 = &uStack_138;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11094cb90,puVar8,puVar9);
    puStack_120 = unaff_x23;
    func_0x00010007e5dc(&puStack_120);
    lVar12 = 0;
    puVar5 = auStack_118;
    puVar11 = puVar9;
    do {
      if ((&cStack_e9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar6 = puVar3;
  __Unwind_Resume();
  pcStack_148 = FUN_10694952c;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar7;
  puVar9 = puVar8;
  puVar10 = puVar11;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar5;
  puStack_168 = puVar3;
  puStack_160 = puVar2;
  puStack_158 = puVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  puVar2 = (undefined8 *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a383c;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x24 = auStack_1b8;
    func_0x00010002b838(auStack_1b8,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3a383c;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar2 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_1a0,puVar2);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
    puVar4 = &UNK_11094cbe0;
    unaff_x23 = &uStack_1d8;
    puVar9 = &uStack_1d8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11094cbe0,puVar9,puVar11);
    puStack_1c0 = unaff_x23;
    func_0x00010007e5dc(&puStack_1c0);
    lVar12 = 0;
    puVar2 = auStack_1b8;
    puVar10 = puVar11;
    do {
      if ((&cStack_189)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar8);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar6 = puVar1;
  __Unwind_Resume();
  pcStack_1e8 = FUN_10694975c;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar4;
  puVar5 = puVar9;
  puVar11 = puVar10;
  puStack_220 = unaff_x24;
  puStack_218 = unaff_x23;
  puStack_210 = puVar2;
  puStack_208 = puVar1;
  puStack_200 = puVar8;
  puStack_1f8 = puVar7;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(puVar4);
  _objc_retain(puVar9);
  puVar2 = (undefined8 *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a383c;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x24 = auStack_258;
    func_0x00010002b838(auStack_258,puVar1);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3a383c;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar2 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_240,puVar2);
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    func_0x00010007e1e8(&uStack_278,auStack_258,&lStack_228,2);
    puVar3 = &UNK_11094cc30;
    unaff_x23 = &uStack_278;
    puVar5 = &uStack_278;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11094cc30,puVar5,puVar10);
    puStack_260 = unaff_x23;
    func_0x00010007e5dc(&puStack_260);
    lVar12 = 0;
    puVar2 = auStack_258;
    puVar11 = puVar10;
    do {
      if ((&cStack_229)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar9);
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar4);
  puVar6 = puVar1;
  __Unwind_Resume();
  puVar10 = &uStack_300;
  pcStack_288 = FUN_10694998c;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar3;
  puVar8 = puVar5;
  puStack_2c0 = unaff_x24;
  puStack_2b8 = unaff_x23;
  puStack_2b0 = puVar2;
  puStack_2a8 = puVar1;
  puStack_2a0 = puVar9;
  puStack_298 = puVar4;
  pppuStack_290 = &pppuStack_1f0;
  _objc_retain(puVar3);
  plVar13 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a383c;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x23 = auStack_2e0;
    func_0x00010002b838(auStack_2e0,puVar1);
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    func_0x00010007e1e8(&uStack_300,auStack_2e0,&lStack_2c8,1);
    puVar7 = &UNK_11094cc80;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11094cc80,&uStack_300,puVar5);
    puStack_2e8 = (undefined1 *)&uStack_300;
    func_0x00010007e5dc(&puStack_2e8);
    puVar8 = puVar10;
    puVar11 = puVar5;
    puVar2 = &uStack_300;
    if (cStack_2c9 < '\0') {
      __ZdlPv(auStack_2e0[0]);
      puVar8 = puVar10;
      puVar11 = puVar5;
      puVar2 = &uStack_300;
    }
  }
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_308 = FUN_106949b00;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_340 = unaff_x24;
  puStack_338 = unaff_x23;
  puStack_330 = puVar2;
  plStack_328 = plVar13;
  puStack_320 = puVar1;
  puStack_318 = puVar3;
  pppuStack_310 = &pppuStack_290;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  if (puVar4 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar4 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a383c;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_378,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3a383c;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar2 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_360,puVar2);
    uStack_398 = 0;
    uStack_390 = 0;
    uStack_388 = 0;
    func_0x00010007e1e8(&uStack_398,auStack_378,&lStack_348,2);
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11094ccd0,&uStack_398,puVar11);
    puStack_380 = &uStack_398;
    func_0x00010007e5dc(&puStack_380);
    lVar12 = 0;
    do {
      if ((&cStack_349)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_360 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar8);
  puVar1 = puVar7;
  _objc_release(puVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_361 < '\0') {
    __ZdlPv(auStack_378[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  __Unwind_Resume(puVar1);
  if (puRam00000001136c4748 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0();
    puRam00000001136c4748 = puVar1;
  }
  return;
}



/* Entry: 1069492fc; end: 10694952b;  */

void FUN_1069492fc(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 auStack_2d8 [2];
  char cStack_2c1;
  undefined8 auStack_2c0 [2];
  char cStack_2a9;
  long lStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 *puStack_290;
  long *plStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined8 ***pppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 *puStack_248;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined *puStack_208;
  undefined8 *puStack_200;
  undefined *puStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  puVar9 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar5 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a383c;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3a383c;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_11094cb90;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11094cb90,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar12 = 0;
    puVar5 = auStack_78;
    puVar9 = param_4;
    do {
      if ((&cStack_49)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_10694952c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar2;
  puVar10 = puVar9;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar5;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f3a383c;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3a383c;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_100,puVar5);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar7 = &UNK_11094cbe0;
    unaff_x23 = &uStack_138;
    puVar8 = &uStack_138;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11094cbe0,puVar8,puVar9);
    puStack_120 = unaff_x23;
    func_0x00010007e5dc(&puStack_120);
    lVar12 = 0;
    puVar5 = auStack_118;
    puVar10 = puVar9;
    do {
      if ((&cStack_e9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar6 = puVar3;
  __Unwind_Resume();
  pcStack_148 = FUN_10694975c;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar7;
  puVar9 = puVar8;
  puVar11 = puVar10;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar5;
  puStack_168 = puVar3;
  puStack_160 = puVar2;
  puStack_158 = puVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  puVar2 = (undefined8 *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a383c;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x24 = auStack_1b8;
    func_0x00010002b838(auStack_1b8,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3a383c;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar2 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_1a0,puVar2);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
    puVar4 = &UNK_11094cc30;
    unaff_x23 = &uStack_1d8;
    puVar9 = &uStack_1d8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11094cc30,puVar9,puVar10);
    puStack_1c0 = unaff_x23;
    func_0x00010007e5dc(&puStack_1c0);
    lVar12 = 0;
    puVar2 = auStack_1b8;
    puVar11 = puVar10;
    do {
      if ((&cStack_189)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar8);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar6 = puVar1;
  __Unwind_Resume();
  puVar10 = &uStack_260;
  pcStack_1e8 = FUN_10694998c;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar4;
  puVar5 = puVar9;
  puStack_220 = unaff_x24;
  puStack_218 = unaff_x23;
  puStack_210 = puVar2;
  puStack_208 = puVar1;
  puStack_200 = puVar8;
  puStack_1f8 = puVar7;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(puVar4);
  plVar13 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a383c;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x23 = auStack_240;
    func_0x00010002b838(auStack_240,puVar1);
    uStack_260 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    func_0x00010007e1e8(&uStack_260,auStack_240,&lStack_228,1);
    puVar3 = &UNK_11094cc80;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11094cc80,&uStack_260,puVar9);
    puStack_248 = (undefined1 *)&uStack_260;
    func_0x00010007e5dc(&puStack_248);
    puVar5 = puVar10;
    puVar11 = puVar9;
    puVar2 = &uStack_260;
    if (cStack_229 < '\0') {
      __ZdlPv(auStack_240[0]);
      puVar5 = puVar10;
      puVar11 = puVar9;
      puVar2 = &uStack_260;
    }
  }
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  puVar7 = puVar1;
  __Unwind_Resume();
  pcStack_268 = FUN_106949b00;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_2a0 = unaff_x24;
  puStack_298 = unaff_x23;
  puStack_290 = puVar2;
  plStack_288 = plVar13;
  puStack_280 = puVar1;
  puStack_278 = puVar4;
  pppuStack_270 = &pppuStack_1f0;
  _objc_retain(puVar3);
  _objc_retain(puVar5);
  if (puVar7 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar7 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a383c;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_2d8,puVar1);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3a383c;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar2 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_2c0,puVar2);
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    func_0x00010007e1e8(&uStack_2f8,auStack_2d8,&lStack_2a8,2);
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11094ccd0,&uStack_2f8,puVar11);
    puStack_2e0 = &uStack_2f8;
    func_0x00010007e5dc(&puStack_2e0);
    lVar12 = 0;
    do {
      if ((&cStack_2a9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2c0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar5);
  puVar1 = puVar3;
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_2c1 < '\0') {
    __ZdlPv(auStack_2d8[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar3);
  __Unwind_Resume(puVar1);
  if (puRam00000001136c4748 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0();
    puRam00000001136c4748 = puVar1;
  }
  return;
}



/* Entry: 10694952c; end: 10694975b;  */

void FUN_10694952c(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 *puStack_240;
  undefined8 auStack_238 [2];
  char cStack_221;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  long *plStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  puVar9 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar5 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a383c;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3a383c;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_11094cbe0;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11094cbe0,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar12 = 0;
    puVar5 = auStack_78;
    puVar9 = param_4;
    do {
      if ((&cStack_49)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_10694975c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar2;
  puVar11 = puVar9;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar5;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f3a383c;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3a383c;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_100,puVar5);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar7 = &UNK_11094cc30;
    unaff_x23 = &uStack_138;
    puVar8 = &uStack_138;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11094cc30,puVar8,puVar9);
    puStack_120 = unaff_x23;
    func_0x00010007e5dc(&puStack_120);
    lVar12 = 0;
    puVar5 = auStack_118;
    puVar11 = puVar9;
    do {
      if ((&cStack_e9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar6 = puVar3;
  __Unwind_Resume();
  puVar10 = &uStack_1c0;
  pcStack_148 = FUN_10694998c;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar7;
  puVar9 = puVar8;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar5;
  puStack_168 = puVar3;
  puStack_160 = puVar2;
  puStack_158 = puVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar7);
  plVar13 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a383c;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x23 = auStack_1a0;
    func_0x00010002b838(auStack_1a0,puVar1);
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    func_0x00010007e1e8(&uStack_1c0,auStack_1a0,&lStack_188,1);
    puVar4 = &UNK_11094cc80;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11094cc80,&uStack_1c0,puVar8);
    puStack_1a8 = (undefined1 *)&uStack_1c0;
    func_0x00010007e5dc(&puStack_1a8);
    puVar9 = puVar10;
    puVar11 = puVar8;
    puVar5 = &uStack_1c0;
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
      puVar9 = puVar10;
      puVar11 = puVar8;
      puVar5 = &uStack_1c0;
    }
  }
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar3 = puVar1;
  __Unwind_Resume();
  pcStack_1c8 = FUN_106949b00;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_200 = unaff_x24;
  puStack_1f8 = unaff_x23;
  puStack_1f0 = puVar5;
  plStack_1e8 = plVar13;
  puStack_1e0 = puVar1;
  puStack_1d8 = puVar7;
  pppuStack_1d0 = &ppuStack_150;
  _objc_retain(puVar4);
  _objc_retain(puVar9);
  if (puVar3 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar3 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a383c;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_238,puVar1);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3a383c;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar2 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_220,puVar2);
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    func_0x00010007e1e8(&uStack_258,auStack_238,&lStack_208,2);
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11094ccd0,&uStack_258,puVar11);
    puStack_240 = &uStack_258;
    func_0x00010007e5dc(&puStack_240);
    lVar12 = 0;
    do {
      if ((&cStack_209)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_220 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar9);
  puVar1 = puVar4;
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_221 < '\0') {
    __ZdlPv(auStack_238[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar4);
  __Unwind_Resume(puVar1);
  if (puRam00000001136c4748 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0();
    puRam00000001136c4748 = puVar1;
  }
  return;
}



/* Entry: 10694975c; end: 10694998b;  */

void FUN_10694975c(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  puVar8 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar11 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a383c;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3a383c;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_11094cc30;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11094cc30,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar9 = 0;
    puVar11 = auStack_78;
    puVar8 = param_4;
    do {
      if ((&cStack_49)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  puVar7 = &uStack_120;
  pcStack_a8 = FUN_10694998c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puVar6 = puVar2;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar11;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  plVar10 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f3a383c;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_100;
    func_0x00010002b838(auStack_100,puVar3);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x00010007e1e8(&uStack_120,auStack_100,&lStack_e8,1);
    puVar5 = &UNK_11094cc80;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11094cc80,&uStack_120,puVar2);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x00010007e5dc(&puStack_108);
    puVar6 = puVar7;
    puVar8 = puVar2;
    puVar11 = &uStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar6 = puVar7;
      puVar8 = puVar2;
      puVar11 = &uStack_120;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_128 = FUN_106949b00;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar11;
  plStack_148 = plVar10;
  puStack_140 = puVar3;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_b0;
  _objc_retain(puVar5);
  _objc_retain(puVar6);
  if (puVar4 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar4 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a383c;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_198,puVar1);
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3a383c;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar2 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_180,puVar2);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x00010007e1e8(&uStack_1b8,auStack_198,&lStack_168,2);
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11094ccd0,&uStack_1b8,puVar8);
    puStack_1a0 = &uStack_1b8;
    func_0x00010007e5dc(&puStack_1a0);
    lVar9 = 0;
    do {
      if ((&cStack_169)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(puVar6);
  puVar1 = puVar5;
  _objc_release(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(puVar6);
  _objc_release(puVar5);
  __Unwind_Resume(puVar1);
  if (puRam00000001136c4748 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0();
    puRam00000001136c4748 = puVar1;
  }
  return;
}



/* Entry: 10694998c; end: 106949aff;  */

void FUN_10694998c(long param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar4 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a383c;
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
    puVar1 = &UNK_11094cc80;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_11094cc80,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar3 = (undefined *)puVar4;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = (undefined *)puVar4;
      param_4 = param_3;
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
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar1);
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar5 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3a383c;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_f8,puVar2);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar2 = &UNK_10f3a383c;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar2 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_11094ccd0,&uStack_118,param_4);
    puStack_100 = &uStack_118;
    func_0x00010007e5dc(&puStack_100);
    lVar6 = 0;
    do {
      if ((&cStack_c9)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
  }
  _objc_release(puVar3);
  puVar2 = puVar1;
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar1);
  __Unwind_Resume(puVar2);
  if (puRam00000001136c4748 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0();
    puRam00000001136c4748 = puVar1;
  }
  return;
}



/* Entry: 106949b00; end: 106949d2f;  */

void FUN_106949b00(long param_1,undefined *param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar3 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a383c;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3a383c;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_11094ccd0,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar2 = 0;
    do {
      if ((&cStack_49)[lVar2] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != -0x30);
  }
  _objc_release(param_3);
  puVar1 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume(puVar1);
  if (puRam00000001136c4748 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0();
    puRam00000001136c4748 = puVar1;
  }
  return;
}



/* Entry: 106949d30; end: 106949d97; +[MFCGetFeedsRequest descriptor] */

void FUN_106949d30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4748 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b07010,
                        &PTR____CFConstantStringClassReference_110e657f8,&PTR_DAT_11316a300,
                        &PTR_DAT_11316a498,7,0x40,0x1c);
    puRam00000001136c4748 = puVar1;
  }
  return;
}



/* Entry: 106949d98; end: 106949e13; +[MFCGetFeedsRequest_FeedRequest descriptor] */

undefined * FUN_106949d98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4750 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b07060,
                        &PTR____CFConstantStringClassReference_110e65818,&PTR_DAT_11316a300,
                        &PTR_DAT_11316a398,4,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001136c4750 = puVar1;
  }
  return puRam00000001136c4750;
}



/* Entry: 106949e14; end: 106949e9f; +[MFCPrefetch descriptor] */

undefined * FUN_106949e14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4758 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b070b0,
                        &PTR____CFConstantStringClassReference_110e060b8,&PTR_DAT_11316a300,
                        &PTR_DAT_11316a318,2,0xc,0x1c);
    func_0x00010c229040();
    puRam00000001136c4758 = puVar1;
  }
  return puRam00000001136c4758;
}



/* Entry: 106949ea0; end: 106949f07; +[MFCProductFilter descriptor] */

void FUN_106949ea0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4760 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b07100,
                        &PTR____CFConstantStringClassReference_110e65838,&PTR_DAT_11316a300,
                        &PTR_DAT_11316a578,7,0x30,0x1c);
    puRam00000001136c4760 = puVar1;
  }
  return;
}



/* Entry: 106949f08; end: 106949f6f; +[MFCPublicProfileFilter descriptor] */

void FUN_106949f08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4768 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b07150,
                        &PTR____CFConstantStringClassReference_110e65858,&PTR_DAT_11316a300,
                        &PTR_s_creatorId_11316a358,2,0x18,0x1c);
    puRam00000001136c4768 = puVar1;
  }
  return;
}



/* Entry: 106949f70; end: 10694a053; +[MFCRecentUserInteractions descriptor] */

void FUN_106949f70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4770 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b071a0,
                        &PTR____CFConstantStringClassReference_110e65878,&PTR_DAT_11316a300,
                        &PTR_DAT_11316a418,4,0x28,0x1c);
    puRam00000001136c4770 = puVar1;
  }
  return;
}



/* Entry: 10694a054; end: 10694a05f;  */

bool FUN_10694a054(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 10694a060; end: 10694a0db;  */

undefined * FUN_10694a060(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c4780 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e658b8,
                        &UNK_10dde3010,&UNK_10dde3028,3,FUN_10694a0dc,0);
    do {
      if (puRam00000001136c4780 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c4780;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c4780,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c4780 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c4780;
}



/* Entry: 10694a0dc; end: 10694a0e7;  */

bool FUN_10694a0dc(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10694a0e8; end: 10694a163;  */

undefined * FUN_10694a0e8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c4788 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e658d8,
                        &UNK_10dde3034,&UNK_10dde3048,3,FUN_10694a164,0);
    do {
      if (puRam00000001136c4788 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c4788;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c4788,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c4788 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c4788;
}



/* Entry: 10694a164; end: 10694a16f;  */

bool FUN_10694a164(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10694a170; end: 10694a1eb;  */

undefined * FUN_10694a170(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c4790 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e658f8,
                        &UNK_10dde3054,&UNK_10dde3064,2,FUN_10694a1ec,0);
    do {
      if (puRam00000001136c4790 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c4790;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c4790,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c4790 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c4790;
}



/* Entry: 10694a1ec; end: 10694a1f7;  */

bool FUN_10694a1ec(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10694a1f8; end: 10694a273;  */

undefined * FUN_10694a1f8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c4798 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e65918,
                        &UNK_10dde306c,&UNK_10dde309c,4,FUN_10694a274,0);
    do {
      if (puRam00000001136c4798 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c4798;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c4798,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c4798 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c4798;
}



/* Entry: 10694a274; end: 10694a27f;  */

bool FUN_10694a274(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10694a280; end: 10694a2e7; +[BadgeType descriptor] */

void FUN_10694a280(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c47a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b07240,
                        &PTR____CFConstantStringClassReference_110e65938,&PTR_DAT_11316a658,0,0,4,
                        0x1c);
    puRam00000001136c47a0 = puVar1;
  }
  return;
}



/* Entry: 10694a2e8; end: 10694a34f; +[BadgeTapDestinationType descriptor] */

void FUN_10694a2e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c47a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b07290,
                        &PTR____CFConstantStringClassReference_110e65958,&PTR_DAT_11316a658,0,0,4,
                        0x1c);
    puRam00000001136c47a8 = puVar1;
  }
  return;
}



/* Entry: 10694a350; end: 10694a3b7; +[BadgeMetadata descriptor] */

void FUN_10694a350(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c47b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b072e0,
                        &PTR____CFConstantStringClassReference_110e65978,&PTR_DAT_11316a658,
                        &PTR_DAT_11316a710,6,0x28,0x1c);
    puRam00000001136c47b0 = puVar1;
  }
  return;
}



/* Entry: 10694a3b8; end: 10694a41f; +[BadgeHeadline descriptor] */

void FUN_10694a3b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c47b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b07420,
                        &PTR____CFConstantStringClassReference_110e65998,&PTR_DAT_11316a658,
                        &PTR_DAT_11316a670,5,0x28,0x1c);
    puRam00000001136c47b8 = puVar1;
  }
  return;
}


