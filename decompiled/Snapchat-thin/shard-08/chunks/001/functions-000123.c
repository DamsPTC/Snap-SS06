/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105e18048; end: 105e180cf; -[SCSendToWorkflow _getCustomStoriesOnboardingPresenter] */

void FUN_105e18048(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x340);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126b5160;
    _objc_alloc();
    func_0x00010c007860();
    uVar2 = *(undefined8 *)(param_1 + 0x340);
    *(undefined **)(param_1 + 0x340) = puVar1;
    _objc_release(uVar2);
    func_0x00010c1e1580(*(undefined8 *)(param_1 + 0x340),param_2,*(undefined8 *)(param_1 + 0x168));
    lVar3 = *(long *)(param_1 + 0x340);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105e180d0; end: 105e18203; -[SCSendToWorkflow _launchQueuedExternalDestination:uiContainer:] */

void FUN_105e180d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  func_0x000108f94c24(param_3);
  lVar1 = *(long *)(param_1 + 0x350);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x2d0);
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126b3ee8;
      _objc_alloc(PTR_PTR_1126b3ee8);
      func_0x000108f95ed0(*(undefined8 *)(param_1 + 0x230));
      uVar3 = *(undefined8 *)(param_1 + 0x230);
      func_0x00010c15d5c0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c045aa0(puVar2);
      _objc_release(uVar3);
      uVar4 = *(undefined8 *)(param_1 + 0x2c8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010bf57580();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x2d0);
      *(undefined8 *)(param_1 + 0x2d0) = uVar3;
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(puVar2);
      lVar1 = *(long *)(param_1 + 0x2d0);
    }
    *(undefined1 *)(param_1 + 0x2d9) = 1;
    func_0x00010bfd26e0(lVar1);
  }
  else {
    *(undefined1 *)(param_1 + 0x2d9) = 1;
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105e18204; end: 105e18577; -[SCSendToWorkflow _saveMassSnapSuggestion:] */

void FUN_105e18204(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  undefined **ppuVar12;
  long lVar13;
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
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x1b8);
  func_0x000108f3e0c8();
  if (iVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    _objc_retain(param_3);
    lVar3 = param_3;
    func_0x00010bf52a60(param_3,param_2,&uStack_1b0,auStack_f0,0x10);
    if (lVar3 != 0) {
      lVar10 = *plStack_1a0;
      do {
        lVar13 = 0;
        do {
          if (*plStack_1a0 != lVar10) {
            _objc_enumerationMutation(param_3);
          }
          ppuVar12 = *(undefined ***)(lStack_1a8 + lVar13 * 8);
          ppuVar4 = ppuVar12;
          func_0x00010c122a80();
          _objc_retainAutoreleasedReturnValue();
          ppuVar9 = ppuVar4;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar5 = ppuVar9;
          func_0x00010c15ab60();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar9);
          _objc_release(ppuVar4);
          if (ppuVar5 == &PTR____CFConstantStringClassReference_110f52c78 ||
              ppuVar5 == &PTR____CFConstantStringClassReference_110f52c98) {
            ppuVar4 = ppuVar12;
            func_0x00010c0f4aa0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar9 = ppuVar4;
            func_0x00010bf529e0();
            _objc_release(ppuVar4);
            if (ppuVar9 == (undefined **)0x0) {
              func_0x00010c122a80(ppuVar12);
              _objc_retainAutoreleasedReturnValue();
              ppuVar4 = ppuVar12;
              func_0x00010bfe5ec0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar9 = ppuVar4;
              func_0x00010c122b80();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar2,param_2,ppuVar9);
              _objc_release(ppuVar9);
              _objc_release(ppuVar4);
            }
            else {
              uStack_1c8 = 0;
              uStack_1d0 = 0;
              uStack_1b8 = 0;
              uStack_1c0 = 0;
              lStack_1e8 = 0;
              uStack_1f0 = 0;
              uStack_1d8 = 0;
              plStack_1e0 = (long *)0x0;
              func_0x00010c0f4aa0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar4 = ppuVar12;
              func_0x00010bf52a60();
              if (ppuVar4 != (undefined **)0x0) {
                lVar11 = *plStack_1e0;
                do {
                  ppuVar9 = (undefined **)0x0;
                  do {
                    if (*plStack_1e0 != lVar11) {
                      _objc_enumerationMutation(ppuVar12);
                    }
                    uVar6 = *(undefined8 *)(lStack_1e8 + (long)ppuVar9 * 8);
                    func_0x00010bfe5ec0(uVar6);
                    _objc_retainAutoreleasedReturnValue();
                    uVar8 = uVar6;
                    func_0x00010c122b80();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010befa120(puVar2,param_2,uVar8);
                    _objc_release(uVar8);
                    _objc_release(uVar6);
                    ppuVar9 = (undefined **)((long)ppuVar9 + 1);
                  } while (ppuVar4 != ppuVar9);
                  ppuVar4 = ppuVar12;
                  func_0x00010bf52a60(ppuVar12,param_2,&uStack_1f0,auStack_170,0x10);
                } while (ppuVar4 != (undefined **)0x0);
              }
            }
            _objc_release(ppuVar12);
          }
          _objc_release(ppuVar5);
          lVar13 = lVar13 + 1;
        } while (lVar13 != lVar3);
        lVar3 = param_3;
        func_0x00010bf52a60(param_3,param_2,&uStack_1b0,auStack_f0,0x10);
      } while (lVar3 != 0);
    }
    _objc_release(param_3);
    func_0x00010c12d360(puVar2,param_2,*(undefined8 *)(param_1 + 0x150));
    puVar7 = puVar2;
    func_0x00010bf529e0();
    if ((undefined *)0x1 < puVar7) {
      uVar8 = *(undefined8 *)(param_1 + 0x2f8);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar2;
      func_0x00010bf00560(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067020(uVar8,param_2,puVar7,0,&PTR___NSConcreteGlobalBlock_1108eb2a0);
      _objc_release(puVar7);
      _objc_release(uVar8);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 105e18578; end: 105e1857b;  */

void FUN_105e18578(void)

{
  return;
}



/* Entry: 105e1857c; end: 105e185e3; -[SCSendToWorkflow createPostScope:didCreatePostWithConfig:] */

void FUN_105e1857c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x00010c24c700();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x380);
  *(undefined8 *)(param_1 + 0x380) = param_3;
  _objc_release(uVar1);
  func_0x00010bdcdf00(param_1,param_2,param_4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105e185e4; end: 105e18b03; -[SCSendToWorkflow _applyCreatePostConfig:fromDismiss:] */

void FUN_105e185e4(long param_1,undefined8 param_2,undefined *param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar12 = *(undefined8 *)(param_1 + 0x378);
  _objc_retain(uVar12);
  func_0x00010bec9d80(param_1);
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x378);
  *(undefined **)(param_1 + 0x378) = param_3;
  _objc_release(uVar2);
  puVar3 = param_3;
  func_0x00010c159e60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 1000);
  *(undefined **)(param_1 + 1000) = puVar3;
  _objc_release(uVar2);
  puVar3 = param_3;
  func_0x00010c159e60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x280);
  *(undefined **)(param_1 + 0x280) = puVar4;
  _objc_release(uVar2);
  _objc_release(puVar3);
  puVar3 = param_3;
  func_0x00010c159e60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2d4c0();
  func_0x00010c177ce0(*(undefined8 *)(param_1 + 0x1a8));
  _objc_release(puVar3);
  puVar3 = param_3;
  func_0x00010c105780();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x398);
  *(undefined **)(param_1 + 0x398) = puVar3;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_3;
  func_0x00010c159e60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2d4c0();
  func_0x00010c167240(uVar2);
  _objc_release(puVar3);
  _objc_release(uVar2);
  *(undefined1 *)(param_1 + 0x3b8) = 1;
  if (*(long *)(param_1 + 0x370) != 0) {
    func_0x00010bf6f440();
  }
  if (*(long *)(param_1 + 0x368) == 0) goto LAB_105e187f4;
  puVar3 = param_3;
  func_0x0001085404dc(param_3,uVar12);
  if (param_4 == 0) {
LAB_105e187d0:
    func_0x00010c1fb940(*(undefined8 *)(param_1 + 0x140));
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0xe8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf8fce0();
    if ((int)uVar2 != 0) {
      _objc_release(uVar5);
      goto LAB_105e187d0;
    }
    uVar6 = *(undefined8 *)(param_1 + 0xe8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010bf8fd00();
    _objc_release(uVar6);
    _objc_release(uVar5);
    if (((uint)uVar2 & (uint)puVar3) == 1) goto LAB_105e187d0;
  }
  func_0x00010bea31a0(param_1);
LAB_105e187f4:
  puVar3 = param_3;
  func_0x00010c0f29e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c15a0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010c252d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (puVar7 == (undefined *)0x0) {
    uVar2 = *(undefined8 *)(param_1 + 0x1a8);
    puVar3 = PTR_PTR_1126b50d0;
    func_0x00010bf3c140(PTR_PTR_1126b50d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8de60(uVar2);
  }
  else {
    puVar4 = param_3;
    func_0x00010c0f29e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010c15a0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010c252d60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126b50d0;
    uVar2 = *(undefined8 *)(param_1 + 0x1a8);
    puVar7 = puVar3;
    func_0x00010c116a20(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar3;
    func_0x00010bf85d80(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c159060(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8de60(uVar2);
    _objc_release(puVar4);
    _objc_release(puVar11);
    _objc_release(puVar7);
    puVar4 = param_3;
    func_0x00010c0f29e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010c24a120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c207f40(*(undefined8 *)(param_1 + 0x1a8));
    _objc_release(puVar7);
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  puVar3 = param_3;
  func_0x00010c0fd640(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be30b20(param_1);
  _objc_release(puVar3);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_3;
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar7;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar3 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar7);
      }
      lVar13 = *(long *)((long)puVar11 * 8);
      lVar8 = lVar13;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010c08fa60();
      _objc_release(lVar8);
      if (lVar9 != 0) {
        func_0x00010c2923e0(lVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        _objc_release(lVar13);
      }
      puVar11 = puVar11 + 1;
    } while (puVar3 != puVar11);
    puVar3 = puVar7;
    func_0x00010bf52a60();
  }
  _objc_release(puVar7);
  puVar3 = puVar4;
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x128));
  _objc_release(puVar4);
  _objc_release(uVar12);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  puVar4 = param_3;
  func_0x00010be742c0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 != (undefined *)0x0) {
    puVar7 = puVar4;
    func_0x00010c2683a0();
    _objc_retainAutoreleasedReturnValue();
    if ((puVar3 == (undefined *)0x0) && (puVar7 != (undefined *)0x0)) {
      func_0x00010c12dae0(puVar4);
    }
    else {
      puVar11 = puVar3;
      func_0x00010853f8ac();
      if ((int)puVar11 != 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x130);
        func_0x00010c23f6e0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar3;
        func_0x00010853f90c(puVar3,uVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        func_0x00010befa940(puVar4);
        _objc_release(puVar11);
      }
    }
    _objc_release(puVar7);
  }
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105e18b04; end: 105e18be7; -[SCSendToWorkflow _handleSpotlightPlaceTag:] */

void FUN_105e18b04(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be742c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c2683a0();
    _objc_retainAutoreleasedReturnValue();
    if ((param_3 == 0) && (lVar2 != 0)) {
      func_0x00010c12dae0(lVar1);
    }
    else {
      lVar3 = param_3;
      func_0x00010853f8ac();
      if ((int)lVar3 != 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x130);
        func_0x00010c23f6e0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_3;
        func_0x00010853f90c(param_3,uVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        func_0x00010befa940(lVar1);
        _objc_release(lVar3);
      }
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e18be8; end: 105e18d37; -[SCSendToWorkflow _musicSpotlightHintForTrackTitle:artistName:] */

void FUN_105e18be8(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = param_3;
  func_0x00010c08fa60();
  puVar3 = param_4;
  func_0x00010c08fa60();
  if ((puVar2 == (undefined *)0x0) || (puVar3 == (undefined *)0x0)) {
    if (puVar2 == (undefined *)0x0) {
      if (puVar3 == (undefined *)0x0) {
        puVar2 = (undefined *)0x0;
      }
      else {
        _objc_retain(param_4);
        puVar2 = param_4;
      }
    }
    else {
      _objc_retain(param_3);
      puVar2 = param_3;
    }
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dc7218);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (puVar2 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c23bba0(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,0x1a5,0,0x4a);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b5218;
    _objc_alloc(PTR_PTR_1126b5218);
    func_0x00010c0513c0();
    _objc_release(puVar1);
  }
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105e18d38; end: 105e18dcf; -[SCSendToWorkflow createPostScope:didSelectMusic:] */

void FUN_105e18d38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c277f60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x388);
  *(undefined8 *)(param_1 + 0x388) = uVar1;
  _objc_release(uVar3);
  lVar2 = *(long *)(param_1 + 0x118);
  func_0x00010c0d3700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = *(long *)(param_1 + 0x118);
    func_0x00010c0d3700();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))();
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105e18dd0; end: 105e18e9f; -[SCSendToWorkflow createPostScope:didDismissWithConfig:] */

void FUN_105e18dd0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x370) != 0) {
    func_0x00010bf6f440(*(long *)(param_1 + 0x370),param_2,0);
    iVar1 = (int)*(undefined8 *)(param_1 + 0x1b8);
    func_0x000108f48664();
    if (iVar1 != 0) {
      func_0x00010bee0820(param_1);
    }
  }
  if (param_4 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xe8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf8fca0();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      uVar3 = param_3;
      func_0x00010c24c700();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x380);
      *(undefined8 *)(param_1 + 0x380) = uVar3;
      _objc_release(uVar2);
      func_0x00010bdcdf00(param_1,param_2,param_4,1);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e18ea0; end: 105e18ee7; -[SCSendToWorkflow _dismissCreatePostTray] */

void FUN_105e18ea0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x360);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x360));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105e18ee8; end: 105e18ef7; -[SCSendToWorkflow dismissTrayViewController:] */

void FUN_105e18ee8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_dismissViewControllerAnimated_co_1125bec68,0,0);
  return;
}



/* Entry: 105e18ef8; end: 105e18f83; -[SCSendToWorkflow didDismissTrayViewController:] */

void FUN_105e18ef8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR_PTR_1126b50d0;
  uVar4 = *(undefined8 *)(param_1 + 0x1a8);
  uVar1 = uVar4;
  func_0x00010c15ab20(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ecca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84d80(puVar3,param_2,uVar2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8de60(uVar4,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e18f84; end: 105e1902b; -[SCSendToWorkflow trayDidChangeExpansion:] */

void FUN_105e18f84(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x1a8);
  puVar1 = PTR_PTR_1126b50d0;
  func_0x00010c15d700(PTR_PTR_1126b50d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8de60(uVar4);
  _objc_release(puVar1);
  uVar2 = param_1 + 0x160;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) {
    param_1 = param_1 + 0x160;
    _objc_loadWeakRetained(param_1);
    func_0x00010c27b280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105e1902c; end: 105e195eb; -[SCSendToWorkflow _syncStorySelectionsFromCreatePostConfig:] */

void FUN_105e1902c(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uStack_370;
  long lStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  long *plStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 auStack_270 [128];
  undefined1 auStack_1f0 [128];
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x420);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x418);
    func_0x00010c06fa80(uVar2,param_2,0);
    _objc_release(lVar1);
    if ((int)uVar2 != 0) {
      puVar3 = *(undefined **)(param_1 + 0x420);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf8d4a0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar4 == (undefined *)0x0) {
        puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
        func_0x00010c1607a0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(puVar4);
        puVar5 = puVar4;
      }
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar3 = param_3;
      func_0x00010c134420();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      func_0x00010bf1f3c0();
      puVar4 = PTR____NSArray0__struct_11034ab48;
      if ((int)puVar6 != 0) {
        puVar6 = param_3;
        func_0x00010c15a100();
        _objc_retainAutoreleasedReturnValue();
        if (puVar6 != (undefined *)0x0) {
          puVar4 = puVar6;
        }
        _objc_retain(puVar4);
        _objc_release(puVar6);
      }
      _objc_release(puVar3);
      uVar7 = *(undefined8 *)(param_1 + 0x420);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar7;
      func_0x00010bf58b80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      lStack_2a8 = 0;
      uStack_2b0 = 0;
      uStack_298 = 0;
      plStack_2a0 = (long *)0x0;
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_278 = 0;
      uStack_280 = 0;
      _objc_retain(puVar5);
      puVar8 = puVar5;
      func_0x00010bf52a60(puVar5,param_2,&uStack_2b0,auStack_f0,0x10);
      if (puVar8 != (undefined *)0x0) {
        lVar1 = *plStack_2a0;
        do {
          puVar14 = (undefined *)0x0;
          do {
            if (*plStack_2a0 != lVar1) {
              _objc_enumerationMutation(puVar5);
            }
            uVar9 = *(undefined8 *)(lStack_2a8 + (long)puVar14 * 8);
            func_0x00010c122a80();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar9;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar6,param_2,uVar7);
            _objc_release(uVar7);
            _objc_release(uVar9);
            puVar14 = puVar14 + 1;
          } while (puVar8 != puVar14);
          puVar8 = puVar5;
          func_0x00010bf52a60(puVar5,param_2,&uStack_2b0,auStack_f0,0x10);
        } while (puVar8 != (undefined *)0x0);
      }
      _objc_release(puVar5);
      puVar8 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      lStack_2e8 = 0;
      uStack_2f0 = 0;
      uStack_2d8 = 0;
      plStack_2e0 = (long *)0x0;
      uStack_2c8 = 0;
      uStack_2d0 = 0;
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      _objc_retain(puVar3);
      puVar14 = puVar3;
      func_0x00010bf52a60(puVar3,param_2,&uStack_2f0,auStack_170,0x10);
      if (puVar14 != (undefined *)0x0) {
        lVar1 = *plStack_2e0;
        do {
          puVar13 = (undefined *)0x0;
          do {
            if (*plStack_2e0 != lVar1) {
              _objc_enumerationMutation(puVar3);
            }
            uVar9 = *(undefined8 *)(lStack_2e8 + (long)puVar13 * 8);
            func_0x00010c122a80();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar9;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar8,param_2,uVar7);
            _objc_release(uVar7);
            _objc_release(uVar9);
            puVar13 = puVar13 + 1;
          } while (puVar14 != puVar13);
          puVar14 = puVar3;
          func_0x00010bf52a60(puVar3,param_2,&uStack_2f0,auStack_170,0x10);
        } while (puVar14 != (undefined *)0x0);
      }
      _objc_release(puVar3);
      uStack_308 = 0;
      uStack_310 = 0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      lStack_328 = 0;
      uStack_330 = 0;
      uStack_318 = 0;
      plStack_320 = (long *)0x0;
      _objc_retain(puVar5);
      puVar14 = puVar5;
      func_0x00010bf52a60(puVar5,param_2,&uStack_330,auStack_1f0,0x10);
      if (puVar14 != (undefined *)0x0) {
        lVar1 = *plStack_320;
        do {
          puVar13 = (undefined *)0x0;
          do {
            if (*plStack_320 != lVar1) {
              _objc_enumerationMutation(puVar5);
            }
            uVar15 = *(undefined8 *)(lStack_328 + (long)puVar13 * 8);
            uVar7 = uVar15;
            func_0x00010c122a80();
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar7;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar8;
            func_0x00010bf4b900(puVar8,param_2,uVar9);
            _objc_release(uVar9);
            _objc_release(uVar7);
            if (((ulong)puVar10 & 1) == 0) {
              func_0x00010c1fb940(*(undefined8 *)(param_1 + 0x140),param_2,uVar15,0,
                                  &PTR____CFConstantStringClassReference_110f12cf8);
            }
            puVar13 = puVar13 + 1;
          } while (puVar14 != puVar13);
          puVar14 = puVar5;
          func_0x00010bf52a60(puVar5,param_2,&uStack_330,auStack_1f0,0x10);
        } while (puVar14 != (undefined *)0x0);
      }
      _objc_release(puVar5);
      uStack_348 = 0;
      uStack_350 = 0;
      uStack_338 = 0;
      uStack_340 = 0;
      lStack_368 = 0;
      uStack_370 = 0;
      uStack_358 = 0;
      plStack_360 = (long *)0x0;
      _objc_retain(puVar3);
      puVar14 = puVar3;
      func_0x00010bf52a60(puVar3,param_2,&uStack_370,auStack_270,0x10);
      if (puVar14 != (undefined *)0x0) {
        lVar1 = *plStack_360;
        do {
          puVar13 = (undefined *)0x0;
          do {
            if (*plStack_360 != lVar1) {
              _objc_enumerationMutation(puVar3);
            }
            uVar15 = *(undefined8 *)(lStack_368 + (long)puVar13 * 8);
            uVar7 = uVar15;
            func_0x00010c122a80(uVar15);
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar7;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar6;
            func_0x00010bf4b900(puVar6,param_2,uVar9);
            _objc_release(uVar9);
            _objc_release(uVar7);
            if (((ulong)puVar10 & 1) == 0) {
              func_0x00010c1fb940(*(undefined8 *)(param_1 + 0x140),param_2,uVar15,1,
                                  &PTR____CFConstantStringClassReference_110f12cf8);
            }
            puVar13 = puVar13 + 1;
          } while (puVar14 != puVar13);
          puVar14 = puVar3;
          func_0x00010bf52a60(puVar3,param_2,&uStack_370,auStack_270,0x10);
        } while (puVar14 != (undefined *)0x0);
      }
      _objc_release(puVar3);
      _objc_release(puVar8);
      _objc_release(puVar6);
      _objc_release(puVar3);
      _objc_release(uVar2);
      _objc_release(puVar4);
      _objc_release(puVar5);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR_PTR_1126b3558;
  _objc_alloc(PTR_PTR_1126b3558);
  func_0x00010c03d4e0();
  lVar11 = *(long *)(param_3 + 0x1b8);
  func_0x000108f48934();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar11;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar1;
  func_0x00010c08fa60();
  if (lVar12 == 0) {
    func_0x000108f5833c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar12 = lVar11;
    func_0x00010c2711a0(lVar11);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126b3560;
  _objc_alloc(PTR_PTR_1126b3560);
  uVar9 = *(undefined8 *)(param_3 + 0x10);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar9;
  func_0x00010c293a00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bce0(puVar3,param_2,puVar4,uVar7,lVar12,0);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(uVar9);
  puVar5 = PTR_PTR_1126b3568;
  _objc_alloc(PTR_PTR_1126b3568);
  func_0x00010c03d400();
  _objc_release(puVar3);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105e195ec; end: 105e1975b; -[SCSendToWorkflow _createSpotlightSelectionItem] */

void FUN_105e195ec(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126b3558;
  _objc_alloc(PTR_PTR_1126b3558);
  func_0x00010c03d4e0();
  lVar2 = *(long *)(param_1 + 0x1b8);
  func_0x000108f48934();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    func_0x000108f5833c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar4 = lVar2;
    func_0x00010c2711a0(lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar3);
  puVar5 = PTR_PTR_1126b3560;
  _objc_alloc(PTR_PTR_1126b3560);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c293a00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bce0(puVar5,param_2,puVar1,uVar8,lVar4,0);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  puVar9 = PTR_PTR_1126b3568;
  _objc_alloc(PTR_PTR_1126b3568);
  func_0x00010c03d400();
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 105e1975c; end: 105e19763; -[SCSendToWorkflow createdGroupIds] */

undefined8 FUN_105e1975c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x430);
}



/* Entry: 105e19764; end: 105e1976b; -[SCSendToWorkflow sendToDidSend] */

undefined1 FUN_105e19764(long param_1)

{
  return *(undefined1 *)(param_1 + 0x428);
}



/* Entry: 105e1976c; end: 105e19d53; -[SCSendToWorkflow .cxx_destruct] */

void FUN_105e1976c(long param_1)

{
  _objc_storeStrong(param_1 + 0x430,0);
  _objc_storeStrong(param_1 + 0x420,0);
  _objc_storeStrong(param_1 + 0x418,0);
  _objc_storeStrong(param_1 + 0x410,0);
  _objc_storeStrong(param_1 + 0x400,0);
  _objc_storeStrong(param_1 + 0x3f0,0);
  _objc_storeStrong(param_1 + 1000,0);
  _objc_storeStrong(param_1 + 0x3e0,0);
  _objc_storeStrong(param_1 + 0x3d8,0);
  _objc_storeStrong(param_1 + 0x3d0,0);
  _objc_storeStrong(param_1 + 0x3c0,0);
  _objc_storeStrong(param_1 + 0x3b0,0);
  _objc_storeStrong(param_1 + 0x3a8,0);
  _objc_storeStrong(param_1 + 0x3a0,0);
  _objc_storeStrong(param_1 + 0x398,0);
  _objc_storeStrong(param_1 + 0x390,0);
  _objc_storeStrong(param_1 + 0x388,0);
  _objc_storeStrong(param_1 + 0x380,0);
  _objc_storeStrong(param_1 + 0x378,0);
  _objc_storeStrong(param_1 + 0x370,0);
  _objc_storeStrong(param_1 + 0x368,0);
  _objc_storeStrong(param_1 + 0x360,0);
  _objc_storeStrong(param_1 + 0x358,0);
  _objc_storeStrong(param_1 + 0x350,0);
  _objc_storeStrong(param_1 + 0x348,0);
  _objc_storeStrong(param_1 + 0x340,0);
  _objc_storeStrong(param_1 + 0x338,0);
  _objc_storeStrong(param_1 + 0x330,0);
  _objc_storeStrong(param_1 + 0x328,0);
  _objc_destroyWeak(param_1 + 800);
  _objc_storeStrong(param_1 + 0x318,0);
  _objc_storeStrong(param_1 + 0x310,0);
  _objc_storeStrong(param_1 + 0x308,0);
  _objc_storeStrong(param_1 + 0x300,0);
  _objc_storeStrong(param_1 + 0x2f8,0);
  _objc_storeStrong(param_1 + 0x2f0,0);
  _objc_storeStrong(param_1 + 0x2e8,0);
  _objc_storeStrong(param_1 + 0x2e0,0);
  _objc_storeStrong(param_1 + 0x2d0,0);
  _objc_storeStrong(param_1 + 0x2c8,0);
  _objc_storeStrong(param_1 + 0x2c0,0);
  _objc_storeStrong(param_1 + 0x2b8,0);
  _objc_storeStrong(param_1 + 0x2b0,0);
  _objc_storeStrong(param_1 + 0x2a8,0);
  _objc_storeStrong(param_1 + 0x2a0,0);
  _objc_storeStrong(param_1 + 0x298,0);
  _objc_storeStrong(param_1 + 0x290,0);
  _objc_storeStrong(param_1 + 0x288,0);
  _objc_storeStrong(param_1 + 0x280,0);
  _objc_storeStrong(param_1 + 0x278,0);
  _objc_storeStrong(param_1 + 0x270,0);
  _objc_storeStrong(param_1 + 0x268,0);
  _objc_storeStrong(param_1 + 0x260,0);
  _objc_storeStrong(param_1 + 600,0);
  _objc_storeStrong(param_1 + 0x250,0);
  _objc_storeStrong(param_1 + 0x248,0);
  _objc_storeStrong(param_1 + 0x240,0);
  _objc_storeStrong(param_1 + 0x230,0);
  _objc_storeStrong(param_1 + 0x228,0);
  _objc_storeStrong(param_1 + 0x220,0);
  _objc_storeStrong(param_1 + 0x210,0);
  _objc_storeStrong(param_1 + 0x208,0);
  _objc_storeStrong(param_1 + 0x200,0);
  _objc_storeStrong(param_1 + 0x1f8,0);
  _objc_storeStrong(param_1 + 0x1f0,0);
  _objc_storeStrong(param_1 + 0x1e0,0);
  _objc_storeStrong(param_1 + 0x1d8,0);
  _objc_storeStrong(param_1 + 0x1d0,0);
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_destroyWeak(param_1 + 0x170);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_destroyWeak(param_1 + 0x160);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
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



/* Entry: 105e19d54; end: 105e19deb;  */

uint FUN_105e19d54(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_1 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010befe800();
    _objc_release(puVar1);
    if (0x11 < lVar2) {
      uVar3 = param_2;
      func_0x00010c231bc0(param_2);
      uVar4 = (uint)uVar3 ^ 1;
      goto LAB_105e19dc8;
    }
  }
  uVar4 = 0;
LAB_105e19dc8:
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 105e19dec; end: 105e19eb3;  */

void FUN_105e19dec(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010befe800();
    _objc_release(puVar1);
    if (0x11 < (long)uVar2) {
      uVar3 = param_3;
      func_0x00010c22dd20();
      uVar2 = param_1;
      FUN_105e19d54(param_1,param_2);
      if (((int)uVar3 == 0) || ((uVar2 & 1) != 0)) goto LAB_105e19e8c;
    }
    func_0x00010c200ae0(param_2);
  }
LAB_105e19e8c:
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e19eb4; end: 105e19ecb;  */

void FUN_105e19eb4(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2b9d8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e2b9d8,
                      &PTR____CFConstantStringClassReference_110e2b9b8,0);
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



/* Entry: 105e19ecc; end: 105e19f3f; -[SCGrapheneSendToEntryPointMetric2 init] */

undefined1 * FUN_105e19ecc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ed348;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105e19f40; end: 105e19fb7;  */

void FUN_105e19f40(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1108eb2c0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105e19fb8; end: 105e1a12b;  */

void FUN_105e19fb8(double param_1,long param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar3 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f341ce2;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_1108eb310;
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_1108eb310,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    FUN_105e19fb8(puVar2,puVar1,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105e1a12c; end: 105e1a197;  */

void FUN_105e1a12c(double param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if (param_2 != 0) {
    FUN_105e19fb8(param_2,param_3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e1a198; end: 105e1a263; -[SCSelectionActionHandler initWithSelectionTracker:ignoredIdentifiers:selectedItemPublishSubject:] */

undefined1 *
FUN_105e1a198(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ed350;
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e1a264; end: 105e1a537; -[SCSelectionActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined *
FUN_105e1a264(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7,ulong param_8,undefined8 param_9)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  ulong uStack_158;
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
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar13 = *(ulong *)(param_5 + 0x10);
  uVar1 = param_8;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(uVar1);
  if ((uVar13 & 1) == 0) {
    uVar13 = param_8;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126b5658;
    _objc_opt_class(PTR_PTR_1126b5658);
    uVar2 = uVar13;
    _objc_opt_isKindOfClass(uVar13,puVar10);
    uVar1 = uVar13;
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar13);
    if (uVar1 != 0) {
      uVar3 = *(undefined8 *)(param_5 + 0x18);
      _objc_retain();
      param_1 = 0;
      lStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      func_0x00010c15a7c0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar13;
      func_0x00010bf52a60();
      if (uVar2 != 0) {
        lVar14 = *plStack_130;
        do {
          uVar11 = 0;
          do {
            if (*plStack_130 != lVar14) {
              _objc_enumerationMutation(uVar13);
            }
            uVar15 = *(ulong *)(lStack_138 + uVar11 * 8);
            uVar4 = uVar15;
            func_0x00010c070a80();
            if ((uVar4 & 1) == 0) {
              iVar12 = (int)*(undefined8 *)(param_5 + 8);
              uVar4 = uVar15;
              func_0x00010c15a7a0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c07d660(uVar15);
              uVar5 = uVar15;
              func_0x00010c247520(uVar15);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1fb940();
              _objc_release(uVar5);
              _objc_release(uVar4);
              uVar4 = uVar15;
              func_0x00010c07d660();
              if ((int)uVar4 != 0 && iVar12 != 0) {
                puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_170 = 0xc2000000;
                pcStack_168 = FUN_105e1a538;
                puStack_160 = &UNK_110848ba8;
                uStack_158 = uVar15;
                _objc_retain(param_9);
                uStack_150 = param_9;
                uStack_148 = uVar3;
                func_0x0001000d76cc("APPSTORE",&puStack_178);
                _objc_release(uStack_150);
              }
            }
            uVar11 = uVar11 + 1;
          } while (uVar2 != uVar11);
          uVar2 = uVar13;
          func_0x00010bf52a60();
        } while (uVar2 != 0);
      }
      _objc_release(uVar13);
      _objc_release(uVar3);
    }
    puVar10 = (undefined *)(ulong)(uVar1 != 0);
    _objc_release(uVar1);
  }
  else {
    puVar10 = (undefined *)0x0;
  }
  _objc_release(param_9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar10;
  }
  ___stack_chk_fail();
  puVar10 = PTR_PTR_1126c24d8;
  uVar6 = *(undefined8 *)(param_8 + 0x20);
  func_0x00010c15a7a0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010c122a80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c122b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0(*(undefined8 *)(param_8 + 0x28));
  uVar9 = *(undefined8 *)(param_8 + 0x20);
  func_0x00010c247520(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23cd00(param_1,param_2,param_3,param_4,puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar6);
  func_0x00010c0d9840(*(undefined8 *)(param_8 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar10);
  return puVar10;
}



/* Entry: 105e1a538; end: 105e1a657;  */

void FUN_105e1a538(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  puVar6 = PTR_PTR_1126c24d8;
  uVar1 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c15a7a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c122a80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c122b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + 0x28));
  uVar5 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c247520(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23cd00(param_1,param_2,param_3,param_4,puVar6,param_6,uVar4,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c0d9840(*(undefined8 *)(param_5 + 0x30),param_6,puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 105e1a658; end: 105e1a693; -[SCSelectionActionHandler .cxx_destruct] */

void FUN_105e1a658(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e1a694; end: 105e1a83f; -[SCSendToExpansionModelProvider initWithSelectionStoryObservableRepository:expandedRowsObservable:] */

undefined8 * FUN_105e1a694(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_80 = PTR_PTR_1126ed358;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar5 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release();
    ppuStack_78 = &PTR____CFConstantStringClassReference_110f12a98;
    func_0x000106c9c808();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_70 = &PTR____CFConstantStringClassReference_110f12c58;
    uVar2 = uVar5;
    uStack_60 = uVar5;
    func_0x000106c9c808();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_68 = &PTR____CFConstantStringClassReference_110f12ad8;
    puVar3 = PTR_PTR_1126b16f8;
    uStack_58 = uVar2;
    _objc_alloc();
    func_0x00010c028e00();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_50 = puVar3;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[3];
    puVar1[3] = puVar4;
    _objc_release(uVar6);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_retain(param_4);
    uVar2 = puVar1[4];
    puVar1[4] = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  func_0x00010c0d3c80(uVar2);
  puVar1 = (undefined8 *)PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return puVar1;
}



/* Entry: 105e1a840; end: 105e1a88b; -[SCSendToExpansionModelProvider expansionModelsObservable] */

void FUN_105e1a840(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0d3c80(uVar1);
  puVar2 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105e1a88c; end: 105e1a8d3; -[SCSendToExpansionModelProvider .cxx_destruct] */

void FUN_105e1a88c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e1a8d4; end: 105e1c213; -[SCSendToInternalConfiguration initAlphabeticalIndexes:preSelectedItems:previewConfiguration:recipientConfiguration:storyConfiguration:shareSheetConfiguration:snapchattersDataFetcher:circumstanceEngine:sectionRanker:lastSnapDataCoordinator:firstSnapSectionProvider:offPlatformShareOnMainCameraPreviewStateFetcher:sendToAttribution:shouldShowFindFriends:shouldShowEducationPopup:shouldShowRecentlyActiveEducation:sendToExperimentConfiguration:sendToUIConfiguration:sendToMentionsConfiguration:sendToSpotlightEligibilityService:sendToSharingConfigurationService:fanPassCreatorInfoProvider:] */

undefined8 *
FUN_105e1a8d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,ulong param_7,long param_8,undefined8 param_9,
             ulong param_10,undefined *param_11,undefined8 param_12,undefined8 param_13,
             undefined8 param_14,long param_15,undefined4 param_16,undefined4 param_17,
             undefined8 param_18,undefined8 param_19,undefined8 param_20,undefined8 param_21,
             undefined8 param_22,undefined8 param_23)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  long lVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  uint uVar34;
  undefined *puVar35;
  ulong uStack_1b8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
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
  _objc_retain(param_22);
  _objc_retain(param_23);
  puStack_e8 = PTR_PTR_1126ed360;
  puVar33 = &uStack_f0;
  uStack_f0 = param_1;
  _objc_msgSendSuper2(puVar33,PTR_s_init_1125d9248);
  _objc_retain();
  _objc_release(puVar33);
  if (puVar33 == (undefined8 *)0x0) goto LAB_105e1c12c;
  _objc_retain(param_10);
  uVar3 = puVar33[10];
  puVar33[10] = param_10;
  _objc_release(uVar3);
  _objc_retain(param_20);
  uVar3 = puVar33[0xb];
  puVar33[0xb] = param_20;
  _objc_release(uVar3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_12);
  _objc_retain(param_15);
  _objc_retain(param_22);
  _objc_retain(param_18);
  _objc_retain(param_23);
  _objc_retain(param_13);
  uVar3 = param_9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf196e0();
  _objc_release(uVar3);
  if (param_8 != 0) {
    func_0x00010c2312e0();
  }
  if (param_7 != 0) {
    func_0x00010c07a240();
  }
  uVar3 = param_12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c233a60();
  _objc_release(uVar3);
  uVar3 = param_13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_13);
  func_0x00010c22f240();
  _objc_release(uVar3);
  if (param_8 == 0) {
    func_0x00010c2312a0();
  }
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c243400(param_15);
  func_0x00010c0df780(puVar4);
  _objc_retainAutoreleasedReturnValue();
  iVar2 = 0x1117f5e8;
  func_0x00010bf4b900();
  _objc_release(puVar4);
  if (iVar2 != 0) {
    func_0x00010bf5ba20();
  }
  lVar5 = param_15;
  func_0x00010c243400();
  if (lVar5 == 4) {
    uVar3 = param_18;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2312c0();
    _objc_release(uVar3);
  }
  puVar4 = PTR_PTR_1126c5098;
  _objc_alloc();
  func_0x00010c046100();
  _objc_release(param_23);
  _objc_release(param_18);
  _objc_release(param_22);
  _objc_release(param_15);
  _objc_release(param_12);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  uStack_1b8 = 1;
  *(undefined1 *)(puVar33 + 0xd) = 1;
  lVar5 = param_6;
  func_0x00010c2312a0();
  *(char *)((long)puVar33 + 0x69) = (char)lVar5;
  uVar6 = param_7;
  func_0x00010c081ae0();
  *(char *)((long)puVar33 + 0x6c) = (char)uVar6;
  puVar7 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
  _objc_opt_new();
  uVar6 = param_10;
  func_0x000108faa378();
  if ((uVar6 & 1) == 0) {
    uStack_1b8 = param_7;
    func_0x00010c07a240();
    uStack_1b8 = uStack_1b8 & 0xffffffff;
  }
  _objc_retain(puVar4);
  _objc_retain(puVar7);
  _objc_retain(param_7);
  _objc_retain(param_10);
  _objc_retain(param_18);
  _objc_retain(param_15);
  _objc_retain(param_21);
  puVar8 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  func_0x00010c0ecd20();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar4;
  func_0x00010c231280();
  if ((int)puVar9 != 0) {
    func_0x00010befa120(puVar8);
  }
  puVar9 = puVar4;
  func_0x00010c2310e0();
  if ((int)puVar9 != 0) {
    func_0x00010befa120(puVar8);
  }
  puVar9 = puVar4;
  func_0x00010c231240();
  if ((int)puVar9 != 0) {
    func_0x00010befa120(puVar8);
  }
  puVar9 = puVar4;
  func_0x00010c231260();
  if ((int)puVar9 != 0) {
    func_0x00010befa120(puVar8);
  }
  puVar9 = puVar4;
  func_0x00010c231180();
  if ((int)puVar9 != 0) {
    func_0x00010befa120(puVar8);
  }
  puVar9 = puVar4;
  func_0x00010c231160();
  if ((int)puVar9 != 0) {
    func_0x00010befa120(puVar8);
  }
  puVar9 = puVar4;
  func_0x00010c231120();
  if ((int)puVar9 != 0) {
    func_0x00010befa120(puVar8);
  }
  puVar9 = puVar4;
  func_0x00010c231300();
  if ((int)puVar9 != 0) {
    uVar3 = param_21;
    func_0x00010c234400();
    if ((int)uVar3 != 0) {
      func_0x00010befa120(puVar8);
    }
    func_0x00010befa120(puVar8);
    uVar3 = param_18;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar3;
    func_0x00010c074e20();
    _objc_release(uVar3);
    if ((int)uVar10 != 0) {
      func_0x00010befa120(puVar8);
    }
  }
  uVar6 = param_7;
  func_0x00010c07a240();
  uVar11 = param_10;
  func_0x000108f3dfb0();
  uVar34 = (uint)uVar6;
  if (((uVar11 & 1) == 0) && ((uVar6 & 1) == 0)) {
    func_0x00010befa120(puVar8);
  }
  puVar9 = puVar7;
  func_0x00010bf4b900();
  if (((ulong)puVar9 & 1) == 0) {
    func_0x00010befa120(puVar8);
  }
  puVar9 = puVar7;
  func_0x00010bf4b900();
  if ((((ulong)puVar9 & 1) == 0) &&
     (uVar6 = param_10, func_0x000108f3e230(), (((uint)uVar6 | uVar34) & 1) == 0)) {
    func_0x00010befa120(puVar8);
  }
  puVar9 = puVar7;
  func_0x00010bf4b900();
  if ((((uint)puVar9 | uVar34) & 1) == 0) {
    func_0x00010befa120(puVar8);
  }
  puVar9 = puVar7;
  func_0x00010bf4b900();
  if ((((ulong)puVar9 & 1) == 0) && (puVar9 = puVar4, func_0x00010c2310a0(), (int)puVar9 != 0)) {
    func_0x00010befa120(puVar8);
  }
  if (((uVar34 | (uint)uVar11 ^ 0xffffffff) & 1) == 0) {
    func_0x00010befa120(puVar8);
  }
  func_0x00010c2310c0();
  func_0x00010befa120(puVar8);
  if ((uStack_1b8 & 1) == 0) {
    func_0x00010befa120(puVar8);
  }
  _objc_release(param_21);
  _objc_release(param_15);
  _objc_release(param_18);
  _objc_release(param_10);
  _objc_release(param_7);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_retain(puVar4);
  puVar9 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  func_0x00010c0ecd20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  puVar12 = puVar4;
  func_0x00010c231140();
  if ((int)puVar12 != 0) {
    func_0x00010befa120(puVar9);
  }
  puVar12 = puVar4;
  func_0x00010c2310c0();
  if ((int)puVar12 != 0) {
    func_0x00010befa120(puVar9);
  }
  _objc_release(puVar4);
  uVar6 = param_10;
  func_0x000108f3e12c();
  puVar12 = puVar8;
  puVar13 = puVar9;
  if ((int)uVar6 != 0) {
    puVar12 = param_11;
    func_0x00010c11f620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar13 = param_11;
    func_0x00010c11f620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
  }
  puVar8 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  func_0x00010c0ecd20();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar12;
  func_0x00010bf09f00(puVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar8);
  _objc_release(puVar9);
  puVar9 = puVar13;
  func_0x00010bf09f00(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar8);
  _objc_release(puVar9);
  puVar9 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  func_0x00010c0ecd20();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar4;
  func_0x00010c231300();
  if ((int)puVar14 != 0) {
    func_0x00010befa120(puVar9);
  }
  func_0x00010c2310c0();
  func_0x00010befa120(puVar9);
  func_0x00010befa120(puVar9);
  puVar15 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110f12a18;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110f12ad8;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110f12a98;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110f12e58;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110f12c58;
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ecd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  _objc_retain(param_18);
  puVar14 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_retain(puVar4);
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar4;
  func_0x00010c231300();
  _objc_release(puVar4);
  if ((int)puVar16 != 0) {
    uVar3 = param_18;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar3;
    func_0x00010c074e20();
    _objc_release(uVar3);
    if ((int)uVar10 != 0) {
      func_0x00010befa120(puVar14);
    }
    func_0x00010befa120(puVar14);
  }
  _objc_release(param_18);
  puVar16 = puVar12;
  func_0x00010bf4b900();
  _objc_retain(puVar4);
  puVar17 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  func_0x00010c0ecd20();
  _objc_retainAutoreleasedReturnValue();
  if ((int)puVar16 != 0) {
    func_0x00010befa120(puVar17);
  }
  puVar16 = puVar4;
  func_0x00010c231300();
  if ((int)puVar16 != 0) {
    func_0x00010befa120(puVar17);
  }
  ppuStack_98 = &PTR____CFConstantStringClassReference_110f12bb8;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110f12bd8;
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar17);
  _objc_release(puVar16);
  puVar16 = puVar4;
  func_0x00010c231180();
  if ((int)puVar16 != 0) {
    func_0x00010befa120(puVar17);
  }
  _objc_release(puVar4);
  puVar16 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
  puVar18 = puVar4;
  func_0x00010c2310c0();
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110f12a78;
  if ((int)puVar18 == 0) {
    ppuStack_a0 = &PTR____CFConstantStringClassReference_110f12a58;
  }
  puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ecd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar18);
  puVar18 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_13);
  _objc_retain(puVar4);
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_13;
  func_0x00010c269d40(param_13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_13);
  uVar10 = uVar3;
  func_0x00010c155da0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar18);
  _objc_release(uVar10);
  _objc_release(uVar3);
  func_0x000105e34334();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar18);
  _objc_release(uVar3);
  func_0x000105e34334();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar18);
  _objc_release(uVar3);
  func_0x000105e34334();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar18);
  _objc_release(uVar3);
  ppuVar19 = &PTR____CFConstantStringClassReference_110e1e8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1e8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar18);
  _objc_release(ppuVar19);
  func_0x000105e3431c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2310c0();
  func_0x00010c1d0640(puVar18);
  ppuVar20 = &PTR____CFConstantStringClassReference_110e2ba38;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e2ba38,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar18);
  _objc_release(ppuVar20);
  func_0x000105e342ec();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar18);
  _objc_release(ppuVar20);
  puVar21 = puVar18;
  func_0x00010bef7f60(puVar18);
  func_0x000108f57e14();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar18);
  _objc_release(puVar21);
  ppuVar20 = &PTR____CFConstantStringClassReference_110e2ba58;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e2ba58,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2310c0();
  _objc_release(puVar4);
  func_0x00010c1d0640(puVar18);
  _objc_release(ppuVar20);
  ppuVar20 = &PTR____CFConstantStringClassReference_110e2ba78;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e2ba78,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar18);
  _objc_release(ppuVar20);
  ppuVar20 = &PTR____CFConstantStringClassReference_110e2ba98;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e2ba98,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar18);
  _objc_release(ppuVar20);
  ppuVar20 = &PTR____CFConstantStringClassReference_110e2bab8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e2bab8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar18);
  _objc_release(ppuVar20);
  ppuVar20 = &PTR____CFConstantStringClassReference_110e2bad8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e2bad8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar18);
  _objc_release(ppuVar20);
  ppuVar20 = &PTR____CFConstantStringClassReference_110e2baf8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e2baf8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar18);
  _objc_release(ppuVar20);
  ppuVar20 = &PTR____CFConstantStringClassReference_110e20898;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e20898,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar18);
  _objc_release(ppuVar20);
  func_0x00010b0aea8c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar18);
  _objc_release(ppuVar20);
  func_0x000108f57e14();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar18);
  _objc_release(ppuVar20);
  _objc_release(ppuVar19);
  iVar2 = (int)puVar33[10];
  func_0x00010bf1f440();
  _objc_retain(puVar4);
  _objc_retain(param_13);
  ppuVar19 = &PTR____CFConstantStringClassReference_110e2bb18;
  if (iVar2 == 0) {
    ppuVar19 = &PTR____CFConstantStringClassReference_110e2bb38;
  }
  func_0x00010bcbeaa8(ppuVar19,0);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  puVar22 = puVar4;
  func_0x00010c231160();
  if ((int)puVar22 != 0) {
    uVar3 = param_13;
    func_0x00010c269d40(param_13);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar3;
    func_0x00010c156580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar21);
    _objc_release(uVar10);
    _objc_release(uVar3);
  }
  _objc_release(ppuVar19);
  _objc_release(param_13);
  _objc_release(puVar4);
  _objc_retain(puVar4);
  _objc_retain(puVar7);
  puVar22 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar4;
  func_0x00010c231160();
  if ((int)puVar23 != 0) {
    func_0x00010befa120(puVar22);
  }
  puVar23 = puVar7;
  func_0x00010bf4b900();
  if (((ulong)puVar23 & 1) == 0) {
    func_0x00010befa120(puVar22);
  }
  puVar23 = puVar7;
  func_0x00010bf4b900();
  if ((((ulong)puVar23 & 1) == 0) && (puVar23 = puVar4, func_0x00010c2310a0(), (int)puVar23 != 0)) {
    func_0x00010befa120(puVar22);
  }
  func_0x00010befa120(puVar22);
  func_0x00010befa120(puVar22);
  func_0x00010befa120(puVar22);
  _objc_release(puVar7);
  _objc_release(puVar4);
  puVar23 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  if ((uStack_1b8 & 1) == 0) {
    func_0x00010befa120(puVar23);
  }
  func_0x00010befa120(puVar23);
  func_0x00010befa120(puVar23);
  puVar24 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_retain(puVar4);
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2310c0();
  func_0x00010befa120(puVar24);
  func_0x00010c2310c0();
  _objc_release(puVar4);
  func_0x00010befa120(puVar24);
  func_0x00010befa120(puVar24);
  puVar25 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_retain(puVar4);
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  puVar35 = puVar4;
  func_0x00010c231300();
  _objc_release(puVar4);
  if ((int)puVar35 != 0) {
    func_0x00010befa120(puVar25);
    func_0x00010befa120(puVar25);
    func_0x00010befa120(puVar25);
    func_0x00010befa120(puVar25);
  }
  puVar26 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_retain(puVar4);
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2310c0();
  _objc_release(puVar4);
  func_0x00010befa120(puVar26);
  func_0x000108f3e26c();
  func_0x00010c231300();
  puVar27 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
  func_0x00010c0ecda0();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
  func_0x00010c0ecd80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar19 = &PTR____CFConstantStringClassReference_110e2b9f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e2b9f8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar35 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110f12c98;
  uVar3 = puVar33[0xb];
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10ab60();
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_a8 = puVar35;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar35);
  _objc_release(uVar3);
  _objc_retain(puVar4);
  uVar3 = puVar33[1];
  puVar33[1] = puVar4;
  _objc_release(uVar3);
  _objc_retain(param_4);
  uVar3 = puVar33[0xe];
  puVar33[0xe] = param_4;
  _objc_release(uVar3);
  _objc_retain(param_12);
  _objc_retain(param_15);
  puVar35 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_10);
  _objc_opt_new();
  uVar6 = param_10;
  func_0x000108f3ddd0();
  uVar11 = param_10;
  func_0x000108f3dde4();
  _objc_release(param_10);
  if (((uVar6 & 1) == 0) && ((int)uVar11 == 0)) {
LAB_105e1bc90:
    uVar3 = param_12;
    func_0x00010c269d40(param_12);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar3;
    func_0x00010c08a000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar35);
    _objc_release(uVar10);
    _objc_release(uVar3);
  }
  else if ((int)uVar6 == 0) {
    if ((int)uVar11 != 0) {
      bVar1 = false;
      goto LAB_105e1bcfc;
    }
  }
  else {
    lVar5 = param_15;
    func_0x00010c243400();
    bVar1 = lVar5 == 7;
    if ((uVar11 & 1) == 0) {
      if (bVar1) goto LAB_105e1bc90;
    }
    else {
LAB_105e1bcfc:
      lVar5 = param_15;
      func_0x00010c243400();
      if ((bVar1) || (lVar5 == 6)) goto LAB_105e1bc90;
    }
  }
  puVar30 = puVar35;
  func_0x00010bf51e00();
  _objc_release(puVar35);
  _objc_release(param_15);
  _objc_release(param_12);
  uVar3 = puVar33[0xf];
  puVar33[0xf] = puVar30;
  _objc_release(uVar3);
  _objc_retain(puVar12);
  uVar3 = puVar33[0x11];
  puVar33[0x11] = puVar12;
  _objc_release(uVar3);
  _objc_retain(puVar13);
  uVar3 = puVar33[0x12];
  puVar33[0x12] = puVar13;
  _objc_release(uVar3);
  _objc_retain(puVar8);
  uVar3 = puVar33[0x13];
  puVar33[0x13] = puVar8;
  _objc_release(uVar3);
  _objc_retain(puVar9);
  uVar3 = puVar33[0x14];
  puVar33[0x14] = puVar9;
  _objc_release(uVar3);
  _objc_retain(puVar15);
  uVar3 = puVar33[0x15];
  puVar33[0x15] = puVar15;
  _objc_release(uVar3);
  _objc_retain(puVar14);
  uVar3 = puVar33[0x16];
  puVar33[0x16] = puVar14;
  _objc_release(uVar3);
  _objc_retain(puVar17);
  uVar3 = puVar33[2];
  puVar33[2] = puVar17;
  _objc_release(uVar3);
  _objc_retain(puVar16);
  uVar3 = puVar33[5];
  puVar33[5] = puVar16;
  _objc_release(uVar3);
  _objc_retain(puVar18);
  uVar3 = puVar33[6];
  puVar33[6] = puVar18;
  _objc_release(uVar3);
  _objc_retain(puVar21);
  uVar3 = puVar33[7];
  puVar33[7] = puVar21;
  _objc_release(uVar3);
  _objc_retain(ppuVar19);
  uVar3 = puVar33[0x1a];
  puVar33[0x1a] = ppuVar19;
  _objc_release(uVar3);
  _objc_retain(puVar22);
  uVar3 = puVar33[0x1b];
  puVar33[0x1b] = puVar22;
  _objc_release(uVar3);
  _objc_retain(param_11);
  uVar3 = puVar33[0x20];
  puVar33[0x20] = param_11;
  _objc_release(uVar3);
  _objc_retain(puVar23);
  uVar3 = puVar33[0x1c];
  puVar33[0x1c] = puVar23;
  _objc_release(uVar3);
  _objc_retain(puVar24);
  uVar3 = puVar33[0x1d];
  puVar33[0x1d] = puVar24;
  _objc_release(uVar3);
  _objc_retain(puVar25);
  uVar3 = puVar33[0x1e];
  puVar33[0x1e] = puVar25;
  _objc_release(uVar3);
  _objc_retain(puVar26);
  uVar3 = puVar33[0x1f];
  puVar33[0x1f] = puVar26;
  _objc_release(uVar3);
  _objc_retain(puVar27);
  uVar3 = puVar33[3];
  puVar33[3] = puVar27;
  _objc_release(uVar3);
  _objc_retain(puVar28);
  uVar3 = puVar33[4];
  puVar33[4] = puVar28;
  _objc_release(uVar3);
  lVar5 = param_6;
  func_0x00010bfba4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = lVar5;
  func_0x00010c2519e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar31 == 0) {
    puVar35 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uVar3 = puVar33[0x21];
    puVar33[0x21] = puVar35;
    _objc_release(uVar3);
  }
  else {
    _objc_retain(lVar31);
    puVar35 = (undefined *)puVar33[0x21];
    puVar33[0x21] = lVar31;
  }
  _objc_release(puVar35);
  _objc_release(lVar31);
  _objc_release(lVar5);
  _objc_retain(puVar29);
  uVar3 = puVar33[0x22];
  puVar33[0x22] = puVar29;
  _objc_release(uVar3);
  puStack_c0 = PTR_PTR_1132b1578;
  puVar35 = PTR_PTR_1126b5290;
  _objc_opt_class();
  puVar30 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_b8 = puVar35;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = puVar33[8];
  puVar33[8] = puVar30;
  _objc_release(uVar3);
  puStack_e0 = PTR_PTR_1132b1578;
  puVar35 = PTR_PTR_1126b5290;
  _objc_opt_class();
  puStack_d8 = PTR_PTR_1132b1580;
  puVar30 = PTR_PTR_1126b5288;
  puStack_d0 = puVar35;
  _objc_opt_class();
  puVar35 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_c8 = puVar30;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = puVar33[9];
  puVar33[9] = puVar35;
  _objc_release(uVar3);
  _objc_retain(param_18);
  uVar3 = puVar33[0xc];
  puVar33[0xc] = param_18;
  _objc_release(uVar3);
  _objc_release(puVar29);
  _objc_release(ppuVar19);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar18);
  _objc_release(puVar16);
  _objc_release(puVar17);
  _objc_release(puVar14);
  _objc_release(puVar15);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar7);
  _objc_release(puVar4);
LAB_105e1c12c:
  _objc_retain(puVar33);
  _objc_release(param_23);
  _objc_release(param_22);
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
  _objc_release(param_3);
  puVar32 = puVar33;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar33;
  }
  ___stack_chk_fail();
  puVar33 = (undefined8 *)puVar32[6];
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar33,PTR_s_objectForKeyedSubscript__112615a50);
  return puVar33;
}



/* Entry: 105e1c214; end: 105e1c21b; -[SCSendToInternalConfiguration titleForSectionIdentifier:] */

void FUN_105e1c214(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 105e1c21c; end: 105e1c437; -[SCSendToInternalConfiguration sectionHeaderViewModelForSectionIdentifier:] */

void FUN_105e1c21c(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x30);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c0e00e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  func_0x000108f3de98(uVar4);
  ppuVar5 = &PTR____CFConstantStringClassReference_110e2ba18;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e2ba18,0);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c0720c0();
  lVar8 = lVar2;
  if (((uVar6 & 1) == 0) && (uVar6 = param_3, func_0x00010c0720c0(), (int)uVar6 == 0)) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0xf0);
    func_0x00010bf4b900();
    lVar7 = lVar2;
    if (iVar1 != 0) goto joined_r0x000105e1c2cc;
    uVar6 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar6 != 0) {
      ppuVar10 = &PTR____CFConstantStringClassReference_110e2c9d8;
LAB_105e1c388:
      func_0x000106c9d408(lVar2,uVar3,ppuVar5,ppuVar10,1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105e1c3a4;
    }
    uVar6 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar6 != 0) {
      ppuVar10 = &PTR____CFConstantStringClassReference_110e2c9f8;
      goto LAB_105e1c388;
    }
    uVar6 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar6 != 0) {
      ppuVar10 = &PTR____CFConstantStringClassReference_110e2ca18;
      goto LAB_105e1c388;
    }
    uVar6 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar6 != 0) {
      uVar9 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar9;
      func_0x00010c1586e0();
      _objc_release(uVar9);
      if ((int)uVar4 != 0) {
        ppuVar10 = &PTR____CFConstantStringClassReference_110e2ca38;
        goto LAB_105e1c388;
      }
    }
  }
  else {
    lVar7 = *(long *)(param_1 + 0xf0);
    func_0x00010bf529e0();
joined_r0x000105e1c2cc:
    if (lVar7 != 0) {
      func_0x000106c9d14c(lVar2,uVar3,uVar4,&PTR____CFConstantStringClassReference_110f4ca78,1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105e1c3a4;
    }
    lVar8 = 0;
  }
  func_0x000106c9d38c();
  _objc_retainAutoreleasedReturnValue();
LAB_105e1c3a4:
  _objc_release(ppuVar5);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return;
}



/* Entry: 105e1c438; end: 105e1c43f; -[SCSendToInternalConfiguration indexSymbolForSectionIdentifier:] */

undefined8 FUN_105e1c438(void)

{
  return 0;
}



/* Entry: 105e1c440; end: 105e1c447; -[SCSendToInternalConfiguration sectionIdentifierForIndexSymbol:] */

undefined8 FUN_105e1c440(void)

{
  return 0;
}



/* Entry: 105e1c448; end: 105e1c68b; -[SCSendToInternalConfiguration sectionIdentifiersForQuery:querySource:queryParameters:] */

void FUN_105e1c448(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_4;
  func_0x00010c0720c0();
  if ((int)uVar2 == 0) {
    uVar2 = param_4;
    func_0x00010c0720c0();
    if ((int)uVar2 == 0) {
      uVar2 = param_4;
      func_0x00010c0720c0();
      if ((int)uVar2 == 0) {
        uVar2 = param_4;
        func_0x00010c0720c0();
        if ((int)uVar2 == 0) {
          uVar2 = param_4;
          func_0x00010c0720c0();
          if ((int)uVar2 == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(ulong *)(param_1 + 0x18);
            _objc_retain(uVar5);
            puVar3 = PTR_PTR_1126b53c8;
            _objc_retain(param_5);
            _objc_opt_class(puVar3);
            uVar6 = param_5;
            _objc_opt_isKindOfClass(param_5,puVar3);
            uVar1 = param_5;
            if ((uVar6 & 1) == 0) {
              uVar1 = 0;
            }
            _objc_retain(uVar1);
            _objc_release(param_5);
            if (uVar1 != 0) {
              puStack_68 = &uStack_70;
              uStack_70 = 0;
              uStack_60 = 0x2020000000;
              uStack_58 = 0;
              func_0x00010c0bea00(param_5);
              uVar6 = uVar5;
              if (*(char *)(puStack_68 + 3) == '\x01') {
                uVar6 = *(ulong *)(param_1 + 0x20);
                _objc_retain(uVar6);
                _objc_release(uVar5);
              }
              uVar4 = *(undefined8 *)(param_1 + 0x60);
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              uVar2 = uVar4;
              func_0x00010c077c20();
              _objc_release(uVar4);
              uVar5 = uVar6;
              if ((int)uVar2 != 0) {
                uVar5 = param_5;
                FUN_105e1c69c(param_5,uVar6);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar6);
              }
              __Block_object_dispose(&uStack_70,8);
            }
            _objc_release(uVar1);
          }
          goto LAB_105e1c4f8;
        }
        uVar5 = *(ulong *)(param_1 + 0x10);
      }
      else {
        uVar5 = *(ulong *)(param_1 + 0xa0);
      }
    }
    else {
      uVar5 = *(ulong *)(param_1 + 0x28);
    }
  }
  else {
    uVar5 = *(ulong *)(param_1 + 0x98);
  }
  _objc_retain(uVar5);
LAB_105e1c4f8:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 105e1c68c; end: 105e1c69b;  */

void FUN_105e1c68c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_3;
  return;
}



/* Entry: 105e1c69c; end: 105e1c7b3;  */

void FUN_105e1c69c(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  func_0x00010c0bea00(param_1);
  if (*(char *)(puStack_48 + 3) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x00010c0ecde0(PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
  }
  else {
    _objc_retain(param_2);
    puVar1 = param_2;
  }
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e1c7b4; end: 105e1c807; -[SCSendToInternalConfiguration reuseIdentifierToCellClassMapForSectionIdentifier:] */

void FUN_105e1c7b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f12a38);
  lVar1 = 0x48;
  if ((int)param_3 == 0) {
    lVar1 = 0x40;
  }
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105e1c808; end: 105e1c8e7; -[SCSendToInternalConfiguration reuseIdentifierForSectionIdentifier:itemsCount:] */

void FUN_105e1c808(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f12c98);
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f12a38);
    if ((uVar1 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 0x60);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010bf19720();
      ppuVar3 = &PTR_PTR_1132b1578;
      if (uVar1 <= param_4) {
        ppuVar3 = &PTR_PTR_1132b1580;
      }
      puVar4 = *ppuVar3;
      _objc_retain(puVar4);
      _objc_release(uVar2);
      goto LAB_105e1c8cc;
    }
    ppuVar3 = &PTR_PTR_1132b1578;
  }
  else {
    ppuVar3 = &PTR_PTR_1132b1580;
    if (param_4 < 2) {
      ppuVar3 = &PTR_PTR_1132b1578;
    }
  }
  puVar4 = *ppuVar3;
  _objc_retain(puVar4);
LAB_105e1c8cc:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105e1c8e8; end: 105e1c8ef; -[SCSendToInternalConfiguration includeSelfAndTeamSnapchatInRecents] */

undefined1 FUN_105e1c8e8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x68);
}



/* Entry: 105e1c8f0; end: 105e1c8f7; -[SCSendToInternalConfiguration preSelectedItems] */

undefined8 FUN_105e1c8f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 105e1c8f8; end: 105e1c8ff; -[SCSendToInternalConfiguration preSelectedLastSnapItems] */

undefined8 FUN_105e1c8f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 105e1c900; end: 105e1c907; -[SCSendToInternalConfiguration indexingSections] */

undefined8 FUN_105e1c900(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 105e1c908; end: 105e1c90f; -[SCSendToInternalConfiguration precedingSections] */

undefined8 FUN_105e1c908(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 105e1c910; end: 105e1c917; -[SCSendToInternalConfiguration subsequentSections] */

undefined8 FUN_105e1c910(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 105e1c918; end: 105e1c91f; -[SCSendToInternalConfiguration nonQuerySections] */

undefined8 FUN_105e1c918(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 105e1c920; end: 105e1c927; -[SCSendToInternalConfiguration querySections] */

undefined8 FUN_105e1c920(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 105e1c928; end: 105e1c92f; -[SCSendToInternalConfiguration viewMoreSections] */

undefined8 FUN_105e1c928(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 105e1c930; end: 105e1c937; -[SCSendToInternalConfiguration carouselSections] */

undefined8 FUN_105e1c930(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 105e1c938; end: 105e1c93f; -[SCSendToInternalConfiguration alphabeticalIndexes] */

undefined8 FUN_105e1c938(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 105e1c940; end: 105e1c947; -[SCSendToInternalConfiguration precedingIndexes] */

undefined8 FUN_105e1c940(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 105e1c948; end: 105e1c94f; -[SCSendToInternalConfiguration subsequentIndexes] */

undefined8 FUN_105e1c948(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 105e1c950; end: 105e1c957; -[SCSendToInternalConfiguration includeSelectableContacts] */

undefined1 FUN_105e1c950(long param_1)

{
  return *(undefined1 *)(param_1 + 0x69);
}



/* Entry: 105e1c958; end: 105e1c95f; -[SCSendToInternalConfiguration includeStories] */

undefined1 FUN_105e1c958(long param_1)

{
  return *(undefined1 *)(param_1 + 0x6a);
}



/* Entry: 105e1c960; end: 105e1c967; -[SCSendToInternalConfiguration includeSpotlight] */

undefined1 FUN_105e1c960(long param_1)

{
  return *(undefined1 *)(param_1 + 0x6b);
}



/* Entry: 105e1c968; end: 105e1c96f; -[SCSendToInternalConfiguration includeTwoDTryOnSnaps] */

undefined1 FUN_105e1c968(long param_1)

{
  return *(undefined1 *)(param_1 + 0x6c);
}



/* Entry: 105e1c970; end: 105e1c977; -[SCSendToInternalConfiguration searchFieldPlaceHolder] */

undefined8 FUN_105e1c970(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 105e1c978; end: 105e1c97f; -[SCSendToInternalConfiguration snapchatterSections] */

undefined8 FUN_105e1c978(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 105e1c980; end: 105e1c987; -[SCSendToInternalConfiguration selectionGroupSections] */

undefined8 FUN_105e1c980(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 105e1c988; end: 105e1c98f; -[SCSendToInternalConfiguration selectionRecipientSections] */

undefined8 FUN_105e1c988(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 105e1c990; end: 105e1c997; -[SCSendToInternalConfiguration selectionStorySections] */

undefined8 FUN_105e1c990(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 105e1c998; end: 105e1c99f; -[SCSendToInternalConfiguration recentSections] */

undefined8 FUN_105e1c998(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 105e1c9a0; end: 105e1c9a7; -[SCSendToInternalConfiguration sectionRanker] */

undefined8 FUN_105e1c9a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 105e1c9a8; end: 105e1c9af; -[SCSendToInternalConfiguration friendsInThisSnapUserIdsObservable] */

undefined8 FUN_105e1c9a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x108);
}



/* Entry: 105e1c9b0; end: 105e1c9b7; -[SCSendToInternalConfiguration snapchatterSectionPreselectionsMap] */

undefined8 FUN_105e1c9b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



/* Entry: 105e1c9b8; end: 105e1cb97; -[SCSendToInternalConfiguration .cxx_destruct] */

void FUN_105e1c9b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
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



/* Entry: 105e1cb98; end: 105e1cc0b; -[SCSendToActionSheetTooltipPresenter initWithTooltipsService:] */

undefined1 * FUN_105e1cb98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ed368;
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



/* Entry: 105e1cc0c; end: 105e1cdcf; -[SCSendToActionSheetTooltipPresenter presentTooltipIfRequiredWithAvailableActionSheetTypes:selectBar:] */

void FUN_105e1cc0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar5 = param_3;
  func_0x00010bf4b900(param_3,param_2,&PTR____CFConstantStringClassReference_110e2c478);
  uVar1 = param_3;
  func_0x00010bf4b900(param_3,param_2,&PTR____CFConstantStringClassReference_110e2c498);
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c22fc20();
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c22fac0();
  _objc_release(uVar4);
  if ((int)uVar5 == 0 || (uint)uVar1 == 0) {
    if ((int)uVar5 == 0) {
      if (((uint)uVar1 & (uint)uVar2) != 1) goto LAB_105e1cdb4;
      func_0x000105e3425c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be7f000(param_1,param_2,param_4,uVar4);
      goto LAB_105e1cd8c;
    }
    if ((uint)uVar3 == 0) goto LAB_105e1cdb4;
    FUN_105e34244();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be7f000(param_1,param_2,param_4,uVar4);
    _objc_release(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fa6a0();
  }
  else {
    if ((((uint)uVar3 | (uint)uVar2) & 1) == 0) goto LAB_105e1cdb4;
    func_0x000105e34274();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be7f000(param_1,param_2,param_4,uVar4);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fa6a0();
LAB_105e1cd8c:
    _objc_release(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fa480();
  }
  _objc_release(uVar5);
LAB_105e1cdb4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105e1cdd0; end: 105e1cef3; -[SCSendToActionSheetTooltipPresenter presentScheduleTooltipWithDate:selectBar:] */

void FUN_105e1cdd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c22d3a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  func_0x00010c22d4a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar3);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000105e3428c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010be7f000(param_1,param_2,param_4,puVar1);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105e1cef4; end: 105e1cf03; -[SCSendToActionSheetTooltipPresenter _presentTooltipOnSelectBar:tooltipText:] */

void FUN_105e1cef4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23a890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4014000000000000,param_3,PTR_s_showTooltipFromMoreButton_forDur_11266c448,param_4);
  return;
}



/* Entry: 105e1cf04; end: 105e1cf0f; -[SCSendToActionSheetTooltipPresenter .cxx_destruct] */

void FUN_105e1cf04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e1cf10; end: 105e1d08f; -[SCSendToErrorHandler newGroupAlertWithNonMutualFriends:uiContainer:] */

void FUN_105e1cf10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar2 = PTR_PTR_1126aed70;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc6c58;
  uVar6 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc6c58,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  FUN_105e59584(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(ppuVar1);
  func_0x00010bf0c980(param_4);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar6,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0)
  ;
  return;
}



/* Entry: 105e1d090; end: 105e1d09f;  */

void FUN_105e1d090(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105e1d0a0; end: 105e1d1fb; -[SCSendToErrorHandler newGroupAlertFilterOutNonMutualFriends:uiContainer:] */

void FUN_105e1d0a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar2 = PTR_PTR_1126aed70;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  uVar6 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  uVar4 = param_3;
  func_0x000105e59804(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(puVar5);
  _objc_release(uVar4);
  func_0x00010bf0c980(param_4);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar6,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0)
  ;
  return;
}



/* Entry: 105e1d1fc; end: 105e1d20b;  */

void FUN_105e1d1fc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105e1d20c; end: 105e1d383; -[SCSendToErrorHandler newGroupAlertWithNonUsers:uiContainer:] */

void FUN_105e1d20c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar2 = PTR_PTR_1126aed70;
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  uVar7 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  uVar4 = param_3;
  FUN_105e59a84(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x000105e59b98(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  func_0x00010bf0c980(param_4);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar7,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0)
  ;
  return;
}



/* Entry: 105e1d384; end: 105e1d393;  */

void FUN_105e1d384(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105e1d394; end: 105e1d40b; -[SCSendToErrorHandler newGroupAlreadyExistingMessage] */

void FUN_105e1d394(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126afca8;
  ppuVar2 = &PTR____CFConstantStringClassReference_110dc6c78;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc6c78,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c14c5a0(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238720(puVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 105e1d40c; end: 105e1d40f; -[SCSendToErrorHandler cannotEditGroupNameMessage] */

void FUN_105e1d40c(void)

{
  return;
}



/* Entry: 105e1d410; end: 105e1d7bf; -[SCSendToEventHandler initWithConfiguration:performer:sectionCoordinator:sectionCreator:sectionExtensionsProviderFuture:sendToTracker:delegate:headerExtensionFuture:sendToActionSheetTooltipPresenter:circumstanceEngine:tooltipsService:sendToUIConfiguration:] */

undefined8 *
FUN_105e1d410(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
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
  puStack_70 = PTR_PTR_1126ed370;
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
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 7,param_9);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_14;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    _objc_initWeak(auStack_80,puVar1);
    uVar4 = puVar1[6];
    func_0x00010bf9a080(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c0e0e80(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_80);
    uVar6 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(puVar5);
    _objc_release(uVar4);
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
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



/* Entry: 105e1d7c0; end: 105e1d807;  */

void FUN_105e1d7c0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be63b60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e1d808; end: 105e1d8d7; -[SCSendToEventHandler updateHeaderBottomAccessoryView:] */

void FUN_105e1d808(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105e1d8d8;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x00010bcbe2c4("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105e1d8d8; end: 105e1d983;  */

void FUN_105e1d8d8(undefined8 param_1,double param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c173460(*(undefined8 *)(lVar1 + 0xa0),param_4,*(undefined8 *)(param_3 + 0x20));
    lVar2 = lVar1 + 0x88;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bf4cdc0();
    lVar3 = lVar1 + 0x88;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bf4cdc0();
    lVar4 = lVar1 + 0x88;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c1822e0(param_1,param_2 + 0.001);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105e1d984; end: 105e1dce7; -[SCSendToEventHandler _nextSendToEvent:] */

void FUN_105e1d984(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined *puStack_390;
  long lStack_388;
  undefined *puStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined *puStack_368;
  long lStack_360;
  undefined *puStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined *puStack_340;
  long lStack_338;
  undefined *puStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined *puStack_318;
  long lStack_310;
  undefined *puStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined *puStack_2f0;
  long lStack_2e8;
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined *puStack_2c8;
  long lStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined *puStack_2a0;
  long lStack_298;
  undefined *puStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined *puStack_278;
  long lStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  long lStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  code *pcStack_230;
  undefined *puStack_228;
  long lStack_220;
  long lStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  long lStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  long lStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x78;
  _objc_loadWeakRetained();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105e1dce8;
  puStack_40 = &UNK_110841f20;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x105e1dcf8;
  puStack_68 = &UNK_110842e18;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  uStack_98 = 0x105e1dd00;
  puStack_90 = &UNK_110842e18;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x105e1dd08;
  puStack_b8 = &UNK_1108de078;
  puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f0 = 0xc2000000;
  uStack_e8 = 0x105e1dd18;
  puStack_e0 = &UNK_11087d8e8;
  puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_118 = 0xc2000000;
  uStack_110 = 0x105e1dd28;
  puStack_108 = &UNK_1108450c8;
  puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_140 = 0xc2000000;
  uStack_138 = 0x105e1dd34;
  puStack_130 = &UNK_110850cc8;
  puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_168 = 0xc2000000;
  uStack_160 = 0x105e1dd40;
  puStack_158 = &UNK_1108eb3d0;
  puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_190 = 0xc2000000;
  uStack_188 = 0x105e1dd58;
  puStack_180 = &UNK_110842e18;
  puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1b8 = 0xc2000000;
  uStack_1b0 = 0x105e1dd60;
  puStack_1a8 = &UNK_110842e18;
  puStack_1e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1e0 = 0xc2000000;
  uStack_1d8 = 0x105e1dd68;
  puStack_1d0 = &UNK_1108eb420;
  puStack_210 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_208 = 0xc2000000;
  uStack_200 = 0x105e1dd80;
  puStack_1f8 = &UNK_110842e18;
  puStack_240 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_238 = 0xc2000000;
  pcStack_230 = FUN_105e1dd88;
  puStack_228 = &UNK_110841f80;
  puStack_268 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_260 = 0xc2000000;
  uStack_258 = 0x105e1de0c;
  puStack_250 = &UNK_110842e18;
  puStack_290 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_288 = 0xc2000000;
  uStack_280 = 0x105e1de14;
  puStack_278 = &UNK_110842e18;
  puStack_2b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2b0 = 0xc2000000;
  uStack_2a8 = 0x105e1de20;
  puStack_2a0 = &UNK_1108eb490;
  puStack_2e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2d8 = 0xc2000000;
  uStack_2d0 = 0x105e1de34;
  puStack_2c8 = &UNK_110842e18;
  puStack_308 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_300 = 0xc2000000;
  uStack_2f8 = 0x105e1de3c;
  puStack_2f0 = &UNK_110842e18;
  puStack_330 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_328 = 0xc2000000;
  uStack_320 = 0x105e1de44;
  puStack_318 = &UNK_110842e18;
  puStack_358 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_350 = 0xc2000000;
  uStack_348 = 0x105e1de4c;
  puStack_340 = &UNK_110850cc8;
  puStack_380 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_378 = 0xc2000000;
  uStack_370 = 0x105e1de58;
  puStack_368 = &UNK_11084ac38;
  puStack_3a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_3a0 = 0xc2000000;
  uStack_398 = 0x105e1de64;
  puStack_390 = &UNK_110842e18;
  lStack_388 = param_1;
  lStack_360 = param_1;
  lStack_338 = param_1;
  lStack_310 = param_1;
  lStack_2e8 = param_1;
  lStack_2c0 = param_1;
  lStack_298 = param_1;
  lStack_270 = param_1;
  lStack_248 = param_1;
  lStack_220 = param_1;
  lStack_218 = lVar1;
  lStack_1f0 = param_1;
  lStack_1c8 = param_1;
  lStack_1a0 = param_1;
  lStack_178 = param_1;
  lStack_150 = param_1;
  lStack_128 = param_1;
  lStack_100 = param_1;
  lStack_d8 = param_1;
  lStack_b0 = param_1;
  lStack_88 = param_1;
  lStack_60 = param_1;
  lStack_38 = param_1;
  func_0x00010c0c1600(param_3,param_2,&puStack_58,&puStack_80,&puStack_a8,&puStack_d0,&puStack_f8,
                      &puStack_120,&puStack_148,&puStack_170,&PTR___NSConcreteGlobalBlock_1108eb400,
                      &puStack_198,&puStack_1c0,&puStack_1e8,&puStack_210,&puStack_240,
                      &PTR___NSConcreteGlobalBlock_1108eb450,&puStack_268,&puStack_290,
                      &PTR___NSConcreteGlobalBlock_1108eb470,&puStack_2b8,&puStack_2e0,&puStack_308,
                      &puStack_330,&puStack_358,&puStack_380,&puStack_3a8,
                      &PTR___NSConcreteGlobalBlock_1108eb4c0,0);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105e1dce8; end: 105e1dd87;  */

void FUN_105e1dce8(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be6c650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__onViewDidLoad_112578b30);
  return;
}



/* Entry: 105e1dd88; end: 105e1de07;  */

void FUN_105e1dd88(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010be0c360(*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c11d080();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c11da20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be7e550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__presentSearchPreType_11257d2f0);
  return;
}



/* Entry: 105e1de08; end: 105e1de6f;  */

void FUN_105e1de08(void)

{
  return;
}



/* Entry: 105e1de70; end: 105e1de9b; -[SCSendToEventHandler _expandSendToTray] */

void FUN_105e1de70(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf9be60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e1de9c; end: 105e1e0a3; -[SCSendToEventHandler _onViewDidLoad] */

void FUN_105e1de9c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c105f80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105e1e0a4;
  puStack_60 = &UNK_11086a868;
  uVar4 = uVar2;
  lStack_58 = param_1;
  func_0x0001006372a4();
  uVar3 = uVar4;
  func_0x00010c0d3c80();
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c105fa0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(uVar3);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c15ab20(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb980();
  _objc_release(uVar4);
  _objc_initWeak(auStack_80,param_1);
  lVar6 = *(long *)(param_1 + 0x28);
  if (lVar6 == 0) {
    func_0x00010bea69c0(param_1);
  }
  else {
    puStack_a8 = puVar1;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_105e1e1e4;
    puStack_90 = &UNK_1108eb4e0;
    _objc_copyWeak(auStack_88,auStack_80);
    func_0x00010c297260(lVar6);
    _objc_destroyWeak(auStack_88);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  puVar5 = auStack_b0;
  _objc_copyWeak(puVar5,auStack_80);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar4);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar3);
  return;
}



/* Entry: 105e1e0a4; end: 105e1e1e3;  */

undefined8 FUN_105e1e0a4(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x00010c122a80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar1;
  func_0x00010c122b80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  if ((uVar3 & 1) == 0) {
    _objc_release(uVar2);
  }
  else {
    uVar3 = uVar1;
    func_0x00010c15ab60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar4 & 1) != 0) {
      uVar6 = 0;
      goto LAB_105e1e1c4;
    }
  }
  uVar2 = uVar1;
  func_0x00010c15ab60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((int)uVar3 == 0) {
    uVar6 = 1;
  }
  else {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    func_0x00010c0daf20(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf4b900();
    _objc_release(uVar5);
  }
LAB_105e1e1c4:
  _objc_release(uVar1);
  return uVar6;
}



/* Entry: 105e1e1e4; end: 105e1e273;  */

void FUN_105e1e1e4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6c660();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e1e274; end: 105e1e30f; -[SCSendToEventHandler _onViewDidLoadWithSectionExtensionsProvider:] */

void FUN_105e1e274(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c1f92a0(uVar2,param_2,param_3);
  func_0x00010c1f92a0(*(undefined8 *)(param_1 + 0x20),param_2,param_3);
  _objc_release(param_3);
  func_0x00010bea69c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e2be78,0);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  puVar1 = PTR_PTR_1126b50d0;
  func_0x00010c29cb20(PTR_PTR_1126b50d0,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8de60(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105e1e310; end: 105e1e3c3; -[SCSendToEventHandler _onAllSectionsDidCompleteInitialRender] */

void FUN_105e1e310(ulong param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c105fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if ((lVar2 != 0) && (uVar3 = param_1, func_0x00010be47140(), (uVar3 & 1) == 0)) {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c15ab20(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c105fa0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fb980(uVar4,param_2,uVar5,0,&PTR____CFConstantStringClassReference_110e14e98);
    _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 105e1e3c4; end: 105e1e40f; -[SCSendToEventHandler _setUpHeaderBottomAccessoryViewUpdater:] */

void FUN_105e1e3c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bfdf0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c21c430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_setUpWithSendToTracker_uiContain_112664b30,
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0xa8),param_1);
  return;
}



/* Entry: 105e1e410; end: 105e1e417; -[SCSendToEventHandler _onViewWillDisappear] */

void FUN_105e1e410(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29e830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_viewWillDisappear_112685430);
  return;
}



/* Entry: 105e1e418; end: 105e1e46f; -[SCSendToEventHandler _onDismissWithSelectedItems:sendToDismissSource:] */

void FUN_105e1e418(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf75420();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


