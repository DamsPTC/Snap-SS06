/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106863d6c; end: 106863dbb; -[SCSpotlightViewController injectSpotlightPreview:] */

void FUN_106863d6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bdf6ee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c065140();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106863dbc; end: 106863e97; -[SCSpotlightViewController preloadModerationStatus:] */

void FUN_106863dbc(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 != 0) {
    lStack_40 = param_3;
    _objc_retain(param_3);
    func_0x00010bf0a140(puVar1,param_2,&lStack_40,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010bdf6ee0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010c25a7c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195740();
    _objc_release(puVar2);
    _objc_release(param_1);
    _objc_release(puVar1);
    param_1 = puVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bdf6ee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befe3a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106863e98; end: 106863ec7; -[SCSpotlightViewController advanceToNextStory] */

void FUN_106863e98(undefined8 param_1)

{
  func_0x00010bdf6ee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befe3a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106863ec8; end: 106863f47; -[SCSpotlightViewController presentLocalPostingStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106863ec8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112752014;
  if (*(long *)(param_1 + lVar3) != 0) {
    lVar1 = param_1;
    func_0x00010bdf6ee0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c07ab40();
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c065110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s_injectSpotlightPreview__1125f6e50,*(undefined8 *)(param_1 + lVar3));
      return;
    }
    *(undefined1 *)(param_1 + _DAT_11275201c) = 1;
  }
  return;
}



/* Entry: 106863f48; end: 106864093; -[SCSpotlightViewController removeLocalPostingStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106863f48(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112752018);
  *(undefined8 *)(param_1 + _DAT_112752018) = 0;
  _objc_release(uVar1);
  lVar7 = (long)_DAT_112752014;
  if (*(long *)(param_1 + lVar7) != 0) {
    lVar2 = param_1;
    func_0x00010bdf6ee0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010bf454e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x000108f51f98();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    lVar4 = lVar2;
    func_0x00010bf60f80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x000108f51f98();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    lVar4 = lVar6;
    func_0x00010c08fa60();
    if ((lVar4 != 0) && (lVar4 = lVar6, func_0x00010c0720c0(lVar6,param_2,uVar1), (int)lVar4 != 0))
    {
      func_0x00010befe3a0(lVar2);
    }
    func_0x00010c12e4c0(lVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar7);
    *(undefined8 *)(param_1 + lVar7) = 0;
    _objc_release(uVar3);
    *(undefined1 *)(param_1 + _DAT_11275201c) = 0;
    _objc_release(lVar6);
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 106864094; end: 106864193; -[SCSpotlightViewController didTapHeaderItemTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106864094(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((*(byte *)(param_1 + _DAT_112751ea8) & 1) != 0) {
    return;
  }
  lVar4 = (long)_DAT_112751f00;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    lVar1 = (long)_DAT_11275206c;
    uVar3 = *(undefined8 *)(param_1 + lVar1);
    *(undefined **)(param_1 + lVar1) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112751f04);
    func_0x00010bf23540(uVar3,param_2,param_1,*(undefined8 *)(param_1 + lVar1),2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar4),param_2,uVar3);
    _objc_release(uVar3);
  }
  else {
    lVar1 = (long)_DAT_11275206c;
  }
  func_0x00010c0d9840(*(undefined8 *)(param_1 + lVar1),param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c72e8);
  puVar2 = PTR_PTR_1126affa8;
  func_0x00010c22bc20(PTR_PTR_1126affa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106864194; end: 1068641ff; -[SCSpotlightViewController subsFeedEmptyStateDidTapDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106864194(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112751ee8);
  func_0x00010bdf6a00();
  func_0x00010c0df780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a63c0(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be02a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissEmptyState_11255e428);
  return;
}



/* Entry: 106864200; end: 1068642df; -[SCSpotlightViewController _dismissEmptyState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106864200(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(char *)(param_1 + _DAT_112751eac) == '\x01') {
    lVar3 = (long)_DAT_112751fec;
    uVar1 = *(undefined8 *)(param_1 + _DAT_112751f74);
    func_0x00010bfb1920(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec1e20(param_1);
    _objc_release(uVar1);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010bf8edc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf83820();
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  func_0x00010be05340(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be72ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__performSubfeedSwitch_animated__11257a448,
             *(undefined8 *)(param_1 + _DAT_112751f6c),1);
  return;
}



/* Entry: 1068642e0; end: 1068644db; -[SCSpotlightViewController subsFeedEmptyStateDidLoadSubsContent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1068642e0(double param_1,double param_2,undefined8 param_3,double param_4,long param_5,
                   undefined8 param_6,ulong param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
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
  _objc_retain(param_7);
  if (*(char *)(param_5 + _DAT_112751eac) == '\x01') {
    lVar9 = (long)_DAT_112751fec;
    uVar1 = *(undefined8 *)(param_5 + lVar9);
    func_0x00010bf8edc0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf83820();
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar8 = *(undefined8 **)(param_5 + lVar9);
    func_0x00010be7d120(param_5,param_6,puVar8,0,0,0);
  }
  else {
    param_1 = 0.0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar11 = *(long *)(param_5 + _DAT_112751f68);
    _objc_retain(lVar11);
    puVar8 = &uStack_130;
    lVar9 = lVar11;
    func_0x00010bf52a60(lVar11,param_6,puVar8,auStack_f0,0x10);
    if (lVar9 != 0) {
      lVar13 = *plStack_120;
      do {
        lVar10 = 0;
        do {
          if (*plStack_120 != lVar13) {
            _objc_enumerationMutation(lVar11);
          }
          puVar8 = *(undefined8 **)(lStack_128 + lVar10 * 8);
          puVar3 = puVar8;
          func_0x00010c1561c0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010bfa4340();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010c282760();
          uVar6 = param_7;
          func_0x00010bfa4340();
          _objc_release(puVar4);
          _objc_release(puVar3);
          if (uVar6 == ((ulong)puVar5 & 0xffffffff)) {
            func_0x00010bec9580(param_5,param_6,puVar8,0,0,0);
            goto LAB_106864490;
          }
          lVar10 = lVar10 + 1;
        } while (lVar9 != lVar10);
        puVar8 = &uStack_130;
        lVar9 = lVar11;
        func_0x00010bf52a60(lVar11,param_6,puVar8,auStack_f0,0x10);
      } while (lVar9 != 0);
    }
LAB_106864490:
    _objc_release(lVar11);
  }
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_7;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  func_0x00010bdf6ee0(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_7;
  func_0x00010bf5f6a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  puVar7 = PTR_PTR_1126c9d30;
  func_0x00010c07d4a0(PTR_PTR_1126c9d30,param_6,uVar6);
  if ((int)puVar7 == 0) {
    uVar12 = 1;
  }
  else {
    func_0x00010c137f60(PTR_PTR_1126c93f8);
    puVar3 = puVar8;
    func_0x00010c0f3660(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(puVar3,param_6,puVar4);
    func_0x00010bfb68e0(puVar4);
    uVar12 = (ulong)(param_2 <= param_4 - param_1);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(uVar6);
  _objc_release(puVar8);
  return uVar12;
}



/* Entry: 1068644dc; end: 1068645df; -[SCSpotlightViewController containerPanGestureShouldStart:] */

bool FUN_1068644dc(double param_1,double param_2,undefined8 param_3,double param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  
  _objc_retain(param_7);
  func_0x00010bdf6ee0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010bf5f6a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar2 = PTR_PTR_1126c9d30;
  func_0x00010c07d4a0(PTR_PTR_1126c9d30,param_6,uVar1);
  if ((int)puVar2 == 0) {
    bVar5 = true;
  }
  else {
    func_0x00010c137f60(PTR_PTR_1126c93f8);
    uVar3 = param_7;
    func_0x00010c0f3660(param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(uVar3,param_6,uVar4);
    func_0x00010bfb68e0(uVar4);
    bVar5 = param_2 <= param_4 - param_1;
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_7);
  return bVar5;
}



/* Entry: 1068645e0; end: 106864747; -[SCSpotlightViewController containerPanGesture:didStartPanWithDirection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068645e0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + _DAT_112751fcc) = 1;
  lVar8 = (long)_DAT_112751f74;
  lVar1 = *(long *)(param_1 + lVar8);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar7 = 0;
    do {
      lVar2 = *(long *)(param_1 + lVar8);
      func_0x00010c0dfd40(lVar2,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar2;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010bfa3d80();
      lVar4 = param_3;
      func_0x00010bfa3d80();
      _objc_release(lVar1);
      if (lVar3 == lVar4) {
        if (param_4 == 1) {
          lVar1 = 1;
        }
        else {
          if (param_4 != 2) goto LAB_106864694;
          lVar1 = -1;
        }
        uVar7 = lVar1 + uVar7;
        _objc_release(lVar2);
        if (uVar7 < 0x7fffffffffffffff) {
          uVar5 = *(ulong *)(param_1 + lVar8);
          func_0x00010bf529e0();
          if (uVar7 < uVar5) {
            uVar6 = *(undefined8 *)(param_1 + lVar8);
            func_0x00010c0dfd40(uVar6,param_2,uVar7);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bec1e20(param_1,param_2,*(undefined8 *)(param_1 + _DAT_112751fec),uVar6,
                                param_4,0);
            _objc_release(uVar6);
          }
        }
        break;
      }
LAB_106864694:
      _objc_release(lVar2);
      uVar7 = uVar7 + 1;
      uVar5 = *(ulong *)(param_1 + lVar8);
      func_0x00010bf529e0();
    } while (uVar7 < uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106864748; end: 106864a03; -[SCSpotlightViewController _startTransitionFromBundle:toBundle:direction:completeImmediately:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106864748(undefined8 param_1,undefined8 param_2,double param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,int param_9)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  undefined1 auStack_120 [8];
  long lStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  double dStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  double dStack_98;
  undefined1 auStack_90 [16];
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar5 = (long)_DAT_112752070;
  if (*(long *)(param_4 + lVar5) == 0) {
    lVar1 = param_4;
    func_0x00010c29bf00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    dVar6 = param_3;
    _objc_release(lVar1);
    lVar1 = param_4;
    func_0x00010c29bf00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(lVar1);
    uVar4 = *(undefined8 *)(param_4 + _DAT_112751f78);
    _objc_retain(uVar4);
    _objc_initWeak(auStack_90,param_4);
    puVar2 = PTR_PTR_1126ce800;
    _objc_alloc();
    puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
    dStack_98 = dVar6;
    if (param_8 != 1) {
      dStack_98 = -dVar6;
    }
    dVar6 = -param_3;
    if (param_8 != 1) {
      dVar6 = param_3;
    }
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_106864a04;
    puStack_b8 = &UNK_1108502a8;
    _objc_copyWeak(auStack_a0,auStack_90);
    _objc_retain(param_7);
    uStack_b0 = param_7;
    _objc_retain(param_6);
    uStack_108 = 0xc2000000;
    uStack_100 = 0x106864b20;
    puStack_f8 = &UNK_11084d788;
    uStack_a8 = param_6;
    _objc_retain(param_7);
    uStack_f0 = param_7;
    _objc_retain(param_6);
    uStack_e8 = param_6;
    dStack_d8 = dVar6;
    _objc_retain(uVar4);
    uStack_e0 = uVar4;
    _objc_copyWeak(auStack_120,auStack_90);
    _objc_retain(param_6);
    _objc_retain(param_7);
    lStack_118 = param_8;
    func_0x00010c038720();
    uVar3 = *(undefined8 *)(param_4 + lVar5);
    *(undefined **)(param_4 + lVar5) = puVar2;
    _objc_release(uVar3);
    if (param_9 != 0) {
      func_0x00010bf436e0(*(undefined8 *)(param_4 + lVar5));
    }
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_destroyWeak(auStack_120);
    _objc_release(uStack_e0);
    _objc_release(uStack_e8);
    _objc_release(uStack_f0);
    _objc_release(uStack_a8);
    _objc_release(uStack_b0);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_90);
    _objc_release(uVar4);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  return;
}



/* Entry: 106864a04; end: 106864ce3;  */

void FUN_106864a04(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [48];
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b0c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd0320(lVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be70f40();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be70f40();
  _objc_release(lVar1);
  _CGAffineTransformMakeTranslation(auStack_60,*(undefined8 *)(param_1 + 0x38),0);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b0c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  return;
}



/* Entry: 106864ce4; end: 106864eab; -[SCSpotlightViewController _transitionDidEndFromBundle:toBundle:completed:direction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106864ce4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  ,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(char *)(param_1 + _DAT_112751fe8) == '\x01') {
    lVar4 = (long)_DAT_112751fcc;
  }
  else if (param_5 == 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112751f78);
    uVar1 = param_4;
    func_0x00010c0cc0c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2e7c0(uVar3,param_2,uVar1);
    _objc_release(uVar1);
    func_0x00010be7d120(param_1,param_2,param_3,0,0,0);
    lVar4 = (long)_DAT_112751fcc;
  }
  else {
    lVar4 = (long)_DAT_112751fcc;
    func_0x00010be533a0(param_1,param_2,param_6,param_4,*(undefined1 *)(param_1 + lVar4));
    lVar2 = (long)_DAT_112751fec;
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = param_4;
    _objc_release(uVar1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112751f78);
    uVar1 = param_4;
    func_0x00010c0cc0c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf439e0(uVar3,param_2,uVar1);
    _objc_release(uVar1);
    func_0x00010be7d120(param_1,param_2,param_4,0,0,0);
    uVar1 = param_3;
    func_0x00010c0ff740(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa4260();
    _objc_release(uVar3);
    _objc_release(uVar1);
    uVar1 = param_4;
    func_0x00010c0ff740(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa4240();
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  *(undefined1 *)(param_1 + lVar4) = 0;
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106864eac; end: 106864ebb; -[SCSpotlightViewController containerPanGesture:didUpdatePanProgress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106864eac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c288d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112752070),PTR_s_updateProgress__11267fd70);
  return;
}



/* Entry: 106864ebc; end: 106864ecb; -[SCSpotlightViewController containerPanGestureDidComplete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106864ebc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112752070),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 106864ecc; end: 106864edb; -[SCSpotlightViewController containerPanGestureDidCancel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106864ecc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112752070),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 106864edc; end: 106864ef3; -[SCSpotlightViewController _resetTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106864edc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112752070);
  *(undefined8 *)(param_1 + _DAT_112752070) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106864ef4; end: 10686509f; -[SCSpotlightViewController _setupLensesGamesSubfeedIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106864ef4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = param_1;
  func_0x00010be40c00();
  if ((int)lVar6 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112751e5c);
    func_0x00010c24afa0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c098520();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa4340();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112751eec);
    func_0x00010bf55580();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_112751ff0;
    uVar1 = *(undefined8 *)(param_1 + lVar6);
    *(undefined8 *)(param_1 + lVar6) = uVar2;
    _objc_release(uVar1);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar6));
    puVar5 = PTR_PTR_1126b1118;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c043160();
    lVar6 = (long)_DAT_112752058;
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar5;
    _objc_release(uVar2);
    _objc_release(puVar3);
    puVar5 = PTR_PTR_1126ce7a0;
    _objc_alloc(PTR_PTR_1126ce7a0);
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010bfa4340(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2827c0();
    ppuVar4 = &PTR____CFConstantStringClassReference_110e622b8;
    func_0x0001000f6108(&PTR____CFConstantStringClassReference_110e622b8,
                        &PTR____CFConstantStringClassReference_110e61f78,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c012600(puVar5);
    _objc_release(ppuVar4);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1068650a0; end: 10686510f; -[SCSpotlightViewController _isLensesFeedType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1068650a0(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112751e5c);
  func_0x00010c24afa0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c098520();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa4340();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return param_3 == (int)uVar3;
}



/* Entry: 106865110; end: 10686511f; -[SCSpotlightViewController _isGamesFeedEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106865110(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112751ea4);
}



/* Entry: 106865120; end: 1068651a7; -[SCSpotlightViewController didDismissExpandedStoryFeedViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106865120(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112751f94;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010bdf6ee0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13d5e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1068651a8; end: 1068651c3; -[SCSpotlightViewController didPressBackButtonOnExpandedStoryFeedViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068651a8(long param_1)

{
  if (*(long *)(param_1 + _DAT_112752074) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112752074),PTR_s_detachUI__1125b96b8,0);
    return;
  }
  return;
}



/* Entry: 1068651c4; end: 1068651fb; -[SCSpotlightViewController overridePresentingVC] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068651c4(long param_1)

{
  if (*(char *)(param_1 + _DAT_112751eac) == '\x01') {
    func_0x00010c0f3bc0();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1068651fc; end: 1068652ab; -[SCSpotlightViewController _isCurrentSubfeedDiscover] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1068651fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((*(byte *)(param_1 + _DAT_112751eac) & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112751f6c);
    func_0x00010bfa4220(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0720c0();
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112751fec);
    func_0x00010c0cc0c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfa4220();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 1068652ac; end: 106865377; -[SCSpotlightViewController _switchTitleToFirstItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068652ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + _DAT_112751eac) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112751f74);
    func_0x00010bfb1920(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be72aa0(param_1,param_2,uVar2,0);
    _objc_release(uVar2);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112751f68);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112751f6c);
    *(undefined8 *)(param_1 + _DAT_112751f6c) = uVar1;
    _objc_retain();
    _objc_release(uVar2);
    func_0x00010be72aa0(param_1,param_2,uVar1,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106865378; end: 1068653ef; -[SCSpotlightViewController _performSubfeedSwitch:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106865378(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112751e94);
  _objc_retain(param_3);
  func_0x00010c12adc0(uVar1);
  lVar2 = (long)_DAT_112751f78;
  func_0x00010c0f8ac0(*(undefined8 *)(param_1 + lVar2),param_2,param_3,param_4);
  func_0x00010bf439e0(*(undefined8 *)(param_1 + lVar2),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068653f0; end: 1068655d3; -[SCSpotlightViewController _resetSubfeedsOnExitingSpotlight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1068653f0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
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
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_1;
  func_0x00010bec9520();
  if (*(char *)((long)param_1 + (long)_DAT_112751eac) == '\x01') {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar8 = (long)_DAT_112751f74;
    lVar6 = *(long *)((long)param_1 + lVar8);
    _objc_retain(lVar6);
    param_3 = &uStack_130;
    lVar1 = lVar6;
    func_0x00010bf52a60(lVar6,param_2,param_3,auStack_f0,0x10);
    if (lVar1 != 0) {
      lVar9 = *plStack_120;
      do {
        lVar10 = 0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(lVar6);
          }
          lVar7 = *(long *)(lStack_128 + lVar10 * 8);
          lVar2 = *(long *)((long)param_1 + lVar8);
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          lVar3 = lVar7;
          func_0x00010bf4b0c0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar7 == lVar2) {
            lVar2 = lVar3;
            func_0x00010c269d40(lVar3);
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar2;
            func_0x00010c29bf00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c219960();
            _objc_release(lVar7);
            _objc_release(lVar2);
          }
          else {
            func_0x00010bdfb4e0(param_1,param_2,lVar3);
          }
          _objc_release(lVar3);
          lVar10 = lVar10 + 1;
        } while (lVar1 != lVar10);
        param_3 = &uStack_130;
        lVar1 = lVar6;
        func_0x00010bf52a60(lVar6,param_2,param_3,auStack_f0,0x10);
      } while (lVar1 != 0);
    }
    _objc_release(lVar6);
    puVar4 = *(undefined8 **)((long)param_1 + (long)_DAT_112751fec);
    *(undefined8 *)((long)param_1 + (long)_DAT_112751fec) = 0;
    _objc_release(puVar4);
    *(undefined1 *)((long)param_1 + (long)_DAT_112751fe8) = 1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x00010c0cc0c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_3;
  func_0x00010bfa4220();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0720c0();
  _objc_release(puVar4);
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 1068655d4; end: 10686563b; -[SCSpotlightViewController _isDiscoverBundle:] */

undefined8 FUN_1068655d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c0cc0c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfa4220();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10686563c; end: 106865777; -[SCSpotlightViewController _detachDiscoverContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686563c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar3 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar4 = *(long *)(param_1 + _DAT_112751f74);
  _objc_retain(lVar4);
  lVar6 = lVar4;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(lVar4);
        }
        puVar5 = *(undefined1 **)(lStack_118 + lVar8 * 8);
        lVar1 = param_1;
        func_0x00010be3fae0(param_1,param_2,puVar5);
        if ((int)lVar1 != 0) {
          func_0x00010bf4b0c0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = (undefined8 *)puVar5;
          func_0x00010bdfb4e0(param_1);
          _objc_release(puVar5);
          goto LAB_106865738;
        }
        lVar8 = lVar8 + 1;
      } while (lVar6 != lVar8);
      lVar6 = lVar4;
      puVar3 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
  }
LAB_106865738:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_retain(puVar3);
    lVar6 = (long)_DAT_112752008;
    _objc_retain(puVar3);
    uVar2 = *(undefined8 *)(lVar4 + lVar6);
    *(undefined8 **)(lVar4 + lVar6) = puVar3;
    _objc_release(uVar2);
    if ((*(byte *)(lVar4 + _DAT_112751eac) & 1) == 0) {
      lVar6 = lVar4;
      func_0x00010bdf6ee0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar8 = *(long *)(lVar4 + _DAT_112751f74);
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar8;
      func_0x00010c0ff740();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      _objc_release(lVar8);
    }
    func_0x00010bf7d560(lVar6,param_2,puVar3);
    lVar7 = lVar6;
    func_0x00010c07ab40();
    if ((int)lVar7 != 0) {
      func_0x00010bf2e880(lVar6,param_2,0,0,1);
      *(undefined1 *)(lVar4 + _DAT_112751f90) = 1;
    }
    _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 106865778; end: 106865887; -[SCSpotlightViewController presentOperaAgainIfAlreadyPresentingWithDeepLink:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106865778(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112752008;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = param_3;
  _objc_release(uVar1);
  if ((*(byte *)(param_1 + _DAT_112751eac) & 1) == 0) {
    lVar4 = param_1;
    func_0x00010bdf6ee0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = *(long *)(param_1 + _DAT_112751f74);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0ff740();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  func_0x00010bf7d560(lVar4,param_2,param_3);
  lVar3 = lVar4;
  func_0x00010c07ab40();
  if ((int)lVar3 != 0) {
    func_0x00010bf2e880(lVar4,param_2,0,0,1);
    *(undefined1 *)(param_1 + _DAT_112751f90) = 1;
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106865888; end: 106865897; -[SCSpotlightViewController viewControllerTransitionAnimatorShouldBeginDismissingWithDirection:gestureRecognizer:] */

bool FUN_106865888(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (param_3 & 0xfffffffffffffffd) == 1;
}



/* Entry: 106865898; end: 10686589b; -[SCSpotlightViewController viewControllerTransitionAnimatorDidBeginDismissing] */

void FUN_106865898(void)

{
  return;
}



/* Entry: 10686589c; end: 10686589f; -[SCSpotlightViewController viewControllerTransitionAnimatorDidBeginDismissingWithInteraction:] */

void FUN_10686589c(void)

{
  return;
}



/* Entry: 1068658a0; end: 1068658a3; -[SCSpotlightViewController viewControllerTransitionAnimatorDidCancelDismissing] */

void FUN_1068658a0(void)

{
  return;
}



/* Entry: 1068658a4; end: 1068658a7; -[SCSpotlightViewController viewControllerTransitionAnimatorWillBeginAnimatingToDismiss] */

void FUN_1068658a4(void)

{
  return;
}



/* Entry: 1068658a8; end: 1068658ab; -[SCSpotlightViewController viewControllerTransitionAnimatorDidFinishDismissing:] */

void FUN_1068658a8(void)

{
  return;
}



/* Entry: 1068658ac; end: 1068658b3; -[SCSpotlightViewController viewControllerTransitionAnimatorShouldBeginAuxViewActionWithDirection:gestureRecognizer:] */

undefined8 FUN_1068658ac(void)

{
  return 0;
}



/* Entry: 1068658b4; end: 1068658b7; -[SCSpotlightViewController viewControllerTransitionAnimatorWillBeginPresenting] */

void FUN_1068658b4(void)

{
  return;
}



/* Entry: 1068658b8; end: 1068658bb; -[SCSpotlightViewController viewControllerTransitionAnimatorDidFinishPresenting] */

void FUN_1068658b8(void)

{
  return;
}



/* Entry: 1068658bc; end: 1068658eb; -[SCSpotlightViewController pageSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068658bc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112751fb4);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1068658ec; end: 10686592f; -[SCSpotlightViewController sectionKey] */

void FUN_1068658ec(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bdf6ee0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf5ff00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106865930; end: 10686593f; -[SCSpotlightViewController headerItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106865930(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112752040);
}



/* Entry: 106865940; end: 10686595f; -[SCSpotlightViewController presentationDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106865940(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112752050);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106865960; end: 106865973; -[SCSpotlightViewController setPresentationDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106865960(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112752050,param_3);
  return;
}



/* Entry: 106865974; end: 106865993; -[SCSpotlightViewController playbackDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106865974(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112752078);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106865994; end: 1068659a7; -[SCSpotlightViewController setPlaybackDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106865994(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112752078,param_3);
  return;
}



/* Entry: 1068659a8; end: 1068659c7; -[SCSpotlightViewController parentController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068659a8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11275207c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1068659c8; end: 1068659db; -[SCSpotlightViewController setParentController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068659c8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11275207c,param_3);
  return;
}



/* Entry: 1068659dc; end: 1068659fb; -[SCSpotlightViewController sourceBaseView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068659dc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112752080);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1068659fc; end: 106865a0f; -[SCSpotlightViewController setSourceBaseView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068659fc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112752080,param_3);
  return;
}



/* Entry: 106865a10; end: 106865a1f; -[SCSpotlightViewController sourcePage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106865a10(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112751f24);
}



/* Entry: 106865a20; end: 106865a2f; -[SCSpotlightViewController setSourcePage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106865a20(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112751f24) = param_3;
  return;
}



/* Entry: 106865a30; end: 106865a3f; -[SCSpotlightViewController sourcePageSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106865a30(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112752084);
}



/* Entry: 106865a40; end: 106865a4b; -[SCSpotlightViewController setSourcePageSessionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106865a40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106865a4c; end: 106865a5b; -[SCSpotlightViewController widgetContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106865a4c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112752088);
}



/* Entry: 106865a5c; end: 106865a9b; -[SCSpotlightViewController setWidgetContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106865a5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112752088;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106865a9c; end: 106865aab; -[SCSpotlightViewController switchToSpotlightStartTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106865a9c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112751fd8);
}



/* Entry: 106865aac; end: 106865aeb; -[SCSpotlightViewController setSwitchToSpotlightStartTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106865aac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112751fd8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106865aec; end: 106865afb; -[SCSpotlightViewController switchToSpotlightLatencyReportedInSeconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106865aec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112751fd4);
}



/* Entry: 106865afc; end: 106865b3b; -[SCSpotlightViewController setSwitchToSpotlightLatencyReportedInSeconds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106865afc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112751fd4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106865b3c; end: 106865b4b; -[SCSpotlightViewController isNavigationHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106865b3c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11275203c);
}



/* Entry: 106865b4c; end: 10686622f; -[SCSpotlightViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106865b4c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112751fd4,0);
  _objc_storeStrong(param_1 + _DAT_112751fd8,0);
  _objc_storeStrong(param_1 + _DAT_112752088,0);
  _objc_storeStrong(param_1 + _DAT_112752084,0);
  _objc_destroyWeak(param_1 + _DAT_112752080);
  _objc_destroyWeak(param_1 + _DAT_11275207c);
  _objc_destroyWeak(param_1 + _DAT_112752078);
  _objc_destroyWeak(param_1 + _DAT_112752050);
  _objc_storeStrong(param_1 + _DAT_112752040,0);
  _objc_storeStrong(param_1 + _DAT_112752000,0);
  _objc_storeStrong(param_1 + _DAT_112751e54,0);
  _objc_storeStrong(param_1 + _DAT_112751eb8,0);
  _objc_storeStrong(param_1 + _DAT_112751eb4,0);
  _objc_storeStrong(param_1 + _DAT_112751ffc,0);
  _objc_storeStrong(param_1 + _DAT_112751ff8,0);
  _objc_storeStrong(param_1 + _DAT_112751fc4,0);
  _objc_destroyWeak(param_1 + _DAT_112751f50);
  _objc_storeStrong(param_1 + _DAT_112752074,0);
  _objc_storeStrong(param_1 + _DAT_112751f94,0);
  _objc_storeStrong(param_1 + _DAT_112751f8c,0);
  _objc_storeStrong(param_1 + _DAT_11275208c,0);
  _objc_storeStrong(param_1 + _DAT_112752048,0);
  _objc_storeStrong(param_1 + _DAT_112751f70,0);
  _objc_storeStrong(param_1 + _DAT_112752070,0);
  _objc_storeStrong(param_1 + _DAT_112751fec,0);
  _objc_storeStrong(param_1 + _DAT_112751f74,0);
  _objc_storeStrong(param_1 + _DAT_112751f9c,0);
  _objc_storeStrong(param_1 + _DAT_112751e94,0);
  _objc_storeStrong(param_1 + _DAT_112751eb0,0);
  _objc_storeStrong(param_1 + _DAT_112751f60,0);
  _objc_storeStrong(param_1 + _DAT_112751f68,0);
  _objc_storeStrong(param_1 + _DAT_112751f6c,0);
  _objc_storeStrong(param_1 + _DAT_112751ff4,0);
  _objc_storeStrong(param_1 + _DAT_112751eec,0);
  _objc_storeStrong(param_1 + _DAT_112751ff0,0);
  _objc_storeStrong(param_1 + _DAT_112751f64,0);
  _objc_storeStrong(param_1 + _DAT_112751f78,0);
  _objc_storeStrong(param_1 + _DAT_112752058,0);
  _objc_storeStrong(param_1 + _DAT_112751e88,0);
  _objc_storeStrong(param_1 + _DAT_112751ec0,0);
  _objc_storeStrong(param_1 + _DAT_11275202c,0);
  _objc_storeStrong(param_1 + _DAT_112752008,0);
  _objc_storeStrong(param_1 + _DAT_112752004,0);
  _objc_storeStrong(param_1 + _DAT_112752024,0);
  _objc_storeStrong(param_1 + _DAT_112752018,0);
  _objc_storeStrong(param_1 + _DAT_112752014,0);
  _objc_storeStrong(param_1 + _DAT_112752020,0);
  _objc_storeStrong(param_1 + _DAT_112752068,0);
  _objc_storeStrong(param_1 + _DAT_112751fc8,0);
  _objc_storeStrong(param_1 + _DAT_112752010,0);
  _objc_storeStrong(param_1 + _DAT_112751e7c,0);
  _objc_storeStrong(param_1 + _DAT_112751f58,0);
  _objc_storeStrong(param_1 + _DAT_112751f2c,0);
  _objc_storeStrong(param_1 + _DAT_112751f88,0);
  _objc_storeStrong(param_1 + _DAT_112751f84,0);
  _objc_storeStrong(param_1 + _DAT_112751e70,0);
  _objc_storeStrong(param_1 + _DAT_112751e6c,0);
  _objc_storeStrong(param_1 + _DAT_112751f4c,0);
  _objc_storeStrong(param_1 + _DAT_112751f48,0);
  _objc_storeStrong(param_1 + _DAT_112751f28,0);
  _objc_storeStrong(param_1 + _DAT_112751f20,0);
  _objc_storeStrong(param_1 + _DAT_112751e5c,0);
  _objc_storeStrong(param_1 + _DAT_112751f54,0);
  _objc_storeStrong(param_1 + _DAT_112751f1c,0);
  _objc_storeStrong(param_1 + _DAT_112751f18,0);
  _objc_storeStrong(param_1 + _DAT_112751f14,0);
  _objc_storeStrong(param_1 + _DAT_112751f10,0);
  _objc_storeStrong(param_1 + _DAT_112752054,0);
  _objc_storeStrong(param_1 + _DAT_11275206c,0);
  _objc_storeStrong(param_1 + _DAT_112751efc,0);
  _objc_storeStrong(param_1 + _DAT_112751ef8,0);
  _objc_storeStrong(param_1 + _DAT_112751f04,0);
  _objc_storeStrong(param_1 + _DAT_112751f00,0);
  _objc_storeStrong(param_1 + _DAT_112751ef4,0);
  _objc_storeStrong(param_1 + _DAT_112751ef0,0);
  _objc_storeStrong(param_1 + _DAT_112752064,0);
  _objc_storeStrong(param_1 + _DAT_112752060,0);
  _objc_storeStrong(param_1 + _DAT_112751ee8,0);
  _objc_storeStrong(param_1 + _DAT_112751e64,0);
  _objc_storeStrong(param_1 + _DAT_112751f38,0);
  _objc_storeStrong(param_1 + _DAT_112751f34,0);
  _objc_storeStrong(param_1 + _DAT_112751f40,0);
  _objc_storeStrong(param_1 + _DAT_112751f5c,0);
  _objc_storeStrong(param_1 + _DAT_112751fc0,0);
  _objc_storeStrong(param_1 + _DAT_112751ecc,0);
  _objc_storeStrong(param_1 + _DAT_112751ec8,0);
  _objc_storeStrong(param_1 + _DAT_112751fb8,0);
  _objc_storeStrong(param_1 + _DAT_112751ec4,0);
  _objc_storeStrong(param_1 + _DAT_112751fb4,0);
  _objc_storeStrong(param_1 + _DAT_112751f0c,0);
  _objc_storeStrong(param_1 + _DAT_112751e50,0);
  _objc_storeStrong(param_1 + _DAT_112751e80,0);
  _objc_storeStrong(param_1 + _DAT_112751edc,0);
  _objc_storeStrong(param_1 + _DAT_112751ed8,0);
  _objc_storeStrong(param_1 + _DAT_112751ed4,0);
  _objc_storeStrong(param_1 + _DAT_112751ed0,0);
  _objc_storeStrong(param_1 + _DAT_11275204c,0);
  _objc_destroyWeak(param_1 + _DAT_112751fb0);
  _objc_storeStrong(param_1 + _DAT_112751ebc,0);
  _objc_storeStrong(param_1 + _DAT_112751e60,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112751e90,0);
  return;
}



/* Entry: 106866230; end: 1068663bb; -[SCSubsFeedEmptyStateController initWithContainer:discoverFeedDataFetcher:feedType:forceEmptyStateShowing:emptyStateViewController:] */

undefined8 *
FUN_106866230(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f3840;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    puVar1[4] = param_5;
    *(undefined1 *)((long)puVar1 + 0x29) = 0;
    *(undefined1 *)(puVar1 + 5) = param_6;
    _objc_initWeak(auStack_58,puVar1);
    _objc_retain(param_7);
    uVar2 = puVar1[2];
    puVar1[2] = param_7;
    _objc_release(uVar2);
    uVar2 = puVar1[2];
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c0e33e0(uVar2);
    uVar2 = puVar1[3];
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1068663bc; end: 106866407;  */

void FUN_1068663bc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c18b5e0(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106866408; end: 10686646b; -[SCSubsFeedEmptyStateController dealloc] */

void FUN_106866408(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126f3840;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10686646c; end: 106866473; -[SCSubsFeedEmptyStateController feedType] */

undefined8 FUN_10686646c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106866474; end: 1068664f3; -[SCSubsFeedEmptyStateController shouldShowEmptyState] */

bool FUN_106866474(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010c269d40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf009e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010bf529e0(lVar3);
    bVar1 = lVar2 == 0;
    _objc_release(lVar3);
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 1068664f4; end: 10686655b; -[SCSubsFeedEmptyStateController showEmptyState] */

void FUN_1068664f4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0x29) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x29) = 1;
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980(lVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10686655c; end: 106866563; -[SCSubsFeedEmptyStateController isShowingEmptyState] */

undefined1 FUN_10686655c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x29);
}



/* Entry: 106866564; end: 1068665a7; -[SCSubsFeedEmptyStateController dismissEmptyState] */

void FUN_106866564(long param_1)

{
  if (*(char *)(param_1 + 0x29) == '\x01') {
    *(undefined1 *)(param_1 + 0x29) = 0;
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf6f440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1068665a8; end: 1068665df; -[SCSubsFeedEmptyStateController emptyStateViewControllerDidTapDismiss:] */

void FUN_1068665a8(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25fb20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068665e0; end: 106866727; -[SCSubsFeedEmptyStateController didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_1068665e0(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x29) == '\x01') {
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar2 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar1);
    uVar3 = param_5;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(param_5);
    uVar2 = uVar3;
    func_0x00010c2827c0();
    _objc_release(uVar3);
    if ((uVar2 == *(ulong *)(param_1 + 0x20)) &&
       ((uVar3 = param_3, func_0x00010c0720c0(), (uVar3 & 1) != 0 ||
        (uVar3 = param_3, func_0x00010c0720c0(), (int)uVar3 != 0)))) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf00a00();
      _objc_release(uVar4);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106866728; end: 10686677b;  */

void FUN_106866728(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf529e0();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf6b020(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25fb00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10686677c; end: 106866793; -[SCSubsFeedEmptyStateController delegate] */

void FUN_10686677c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106866794; end: 10686679f; -[SCSubsFeedEmptyStateController setDelegate:] */

void FUN_106866794(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 1068667a0; end: 1068667df; -[SCSubsFeedEmptyStateController .cxx_destruct] */

void FUN_1068667a0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1068667e0; end: 1068668ab; -[SCSubsFeedEmptyStateControllerFactory initWithStoriesConfigProvider:discoverFeedDataFetcher:circumstanceEngine:] */

undefined1 *
FUN_1068667e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f3848;
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



/* Entry: 1068668ac; end: 10686697f; -[SCSubsFeedEmptyStateControllerFactory createContentFeedEmptyStateControllerForFeedType:uiContainer:] */

void FUN_1068668ac(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  if (param_3 == 0x109) {
    func_0x00010bdedd80(param_1,param_2,0x109,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c24afa0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c098520();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfa4340();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (param_3 == lVar3) {
      func_0x00010bdee200(param_1,param_2,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      param_1 = 0;
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106866980; end: 106866a8b; -[SCSubsFeedEmptyStateControllerFactory _createFollowingFeedControllerForFeedType:uiContainer:] */

void FUN_106866980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae720;
  _objc_retain(param_4);
  func_0x00010bf11fe0(puVar1,param_2,&PTR___NSConcreteGlobalBlock_110944888);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ce818;
  _objc_alloc(PTR_PTR_1126ce818);
  func_0x00010c002660();
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106866a8c; end: 106866b97; -[SCSubsFeedEmptyStateControllerFactory _createGamesFeedControllerForFeedType:uiContainer:] */

void FUN_106866a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae720;
  _objc_retain(param_4);
  func_0x00010bf11fe0(puVar1,param_2,&PTR___NSConcreteGlobalBlock_1109448a8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ce818;
  _objc_alloc(PTR_PTR_1126ce818);
  func_0x00010c002660();
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106866b98; end: 106866bd3; -[SCSubsFeedEmptyStateControllerFactory .cxx_destruct] */

void FUN_106866b98(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106866bd4; end: 10686739b; -[SCSubsFeedEmptyStateViewController initWithDescriptionText:dismissButtonTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106866bd4(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
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
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_f0 = PTR_PTR_1126f3850;
  puVar1 = &uStack_f8;
  uStack_f8 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf414e0(0x3fc999999999999a);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c29bf00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_alloc();
    uVar30 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar31 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar32 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar33 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar30,uVar31,uVar32,uVar33);
    lVar27 = (long)_DAT_1127520b8;
    uVar25 = *(undefined8 *)((long)puVar1 + lVar27);
    *(undefined **)((long)puVar1 + lVar27) = puVar2;
    _objc_release(uVar25);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar27));
    func_0x00010c16e060(*(undefined8 *)((long)puVar1 + lVar27));
    func_0x00010c166c00(*(undefined8 *)((long)puVar1 + lVar27));
    func_0x00010c207380(0x4030000000000000,*(undefined8 *)((long)puVar1 + lVar27));
    func_0x00010c181f00(0x447a0000,*(undefined8 *)((long)puVar1 + lVar27));
    puVar4 = puVar1;
    func_0x00010c29bf00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar4);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar30,uVar31,uVar32,uVar33);
    lVar29 = (long)_DAT_1127520bc;
    uVar25 = *(undefined8 *)((long)puVar1 + lVar29);
    *(undefined **)((long)puVar1 + lVar29) = puVar2;
    _objc_release(uVar25);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar29));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf414e0(0x3fc999999999999a);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar29));
    _objc_release(puVar3);
    _objc_release(puVar2);
    uVar25 = *(undefined8 *)((long)puVar1 + lVar29);
    func_0x00010c08c0e0(uVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4040000000000000);
    _objc_release(uVar25);
    func_0x00010bef6d60(*(undefined8 *)((long)puVar1 + lVar27));
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc_init();
    lVar26 = (long)_DAT_1127520c0;
    uVar25 = *(undefined8 *)((long)puVar1 + lVar26);
    *(undefined **)((long)puVar1 + lVar26) = puVar2;
    _objc_release(uVar25);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar26));
    puVar2 = PTR_PTR_1126b0c40;
    func_0x00010bfe7b00(0x4040000000000000,0x4040000000000000,PTR_PTR_1126b0c40);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)((long)puVar1 + lVar26));
    _objc_release(puVar2);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar29));
    puVar2 = PTR_PTR_1126aea58;
    _objc_opt_new();
    lVar28 = (long)_DAT_1127520c4;
    uVar25 = *(undefined8 *)((long)puVar1 + lVar28);
    *(undefined **)((long)puVar1 + lVar28) = puVar2;
    _objc_release(uVar25);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar28));
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar28));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar28));
    _objc_release(puVar2);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar28));
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar28));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar28));
    func_0x00010bef6d60(*(undefined8 *)((long)puVar1 + lVar27));
    puVar2 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar28 = (long)_DAT_1127520c8;
    uVar25 = *(undefined8 *)((long)puVar1 + lVar28);
    *(undefined **)((long)puVar1 + lVar28) = puVar2;
    _objc_release(uVar25);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar28));
    func_0x00010c16e480(*(undefined8 *)((long)puVar1 + lVar28));
    func_0x00010c216380(*(undefined8 *)((long)puVar1 + lVar28));
    func_0x00010c216260(*(undefined8 *)((long)puVar1 + lVar28));
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar28));
    func_0x00010bef6d60(*(undefined8 *)((long)puVar1 + lVar27));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar27);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar32 = uVar5;
    func_0x00010bf493c0(0x4054000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_e8 = uVar32;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar27);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar31 = uVar8;
    func_0x00010bf493c0(0xc054000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_e0 = uVar31;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar27);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar4;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_d8 = uVar13;
    uVar14 = *(undefined8 *)((long)puVar1 + lVar29);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010bf49420(0x4050000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_d0 = uVar15;
    uVar16 = *(undefined8 *)((long)puVar1 + lVar29);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar16;
    func_0x00010bf49420(0x4050000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = uVar17;
    uVar18 = *(undefined8 *)((long)puVar1 + lVar26);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar18;
    func_0x00010bf49420(0x4040000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_c0 = uVar19;
    uVar20 = *(undefined8 *)((long)puVar1 + lVar26);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar33 = uVar20;
    func_0x00010bf49420(0x4040000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = uVar33;
    uVar21 = *(undefined8 *)((long)puVar1 + lVar26);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)((long)puVar1 + lVar29);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar30 = uVar21;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar30;
    uVar23 = *(undefined8 *)((long)puVar1 + lVar26);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = *(undefined8 *)((long)puVar1 + lVar29);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar23;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_a8 = uVar25;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar3);
    _objc_release(uVar25);
    _objc_release(uVar24);
    _objc_release(uVar23);
    _objc_release(uVar30);
    _objc_release(uVar22);
    _objc_release(uVar21);
    _objc_release(uVar33);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(puVar12);
    _objc_release(puVar4);
    _objc_release(uVar11);
    _objc_release(uVar31);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(uVar32);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar5);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8ee20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return param_3;
}



/* Entry: 10686739c; end: 1068673d3; -[SCSubsFeedEmptyStateViewController _didTap] */

void FUN_10686739c(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8ee20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068673d4; end: 1068673f3; -[SCSubsFeedEmptyStateViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068673d4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127520cc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1068673f4; end: 106867407; -[SCSubsFeedEmptyStateViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068673f4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127520cc,param_3);
  return;
}



/* Entry: 106867408; end: 106867483; -[SCSubsFeedEmptyStateViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106867408(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127520cc);
  _objc_storeStrong(param_1 + _DAT_1127520b8,0);
  _objc_storeStrong(param_1 + _DAT_1127520c8,0);
  _objc_storeStrong(param_1 + _DAT_1127520c4,0);
  _objc_storeStrong(param_1 + _DAT_1127520c0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127520bc,0);
  return;
}



/* Entry: 106867484; end: 10686756b; -[SCSpotlightSubfeedMetadata initWithFeedIdentifier:sectionKey:displayName:feedStringIdentifier:] */

undefined1 *
FUN_106867484(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f3858;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
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
  return (undefined1 *)puVar1;
}



/* Entry: 10686756c; end: 10686758f; -[SCSpotlightSubfeedMetadata copyWithZone:] */

undefined8 FUN_10686756c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106867590; end: 10686761b; -[SCSpotlightSubfeedMetadata hash] */

long * FUN_106867590(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lStack_48 = -lVar5;
  if (-1 < lVar5) {
    lStack_48 = lVar5;
  }
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  plVar3 = &lStack_48;
  uStack_30 = uVar2;
  func_0x000100505190(plVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 == param_3) {
LAB_1068676c4:
    plVar6 = (long *)0x1;
  }
  else {
    plVar6 = (long *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_1068676d0;
    plVar6 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar6);
    if ((((ulong)plVar4 & 1) != 0) && (plVar3[1] == param_3[1])) {
      lVar5 = plVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = plVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          plVar6 = (long *)plVar3[4];
          if (plVar6 != (long *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_1068676d0;
          }
          goto LAB_1068676c4;
        }
      }
    }
    plVar6 = (long *)0x0;
  }
LAB_1068676d0:
  _objc_release(param_3);
  return plVar6;
}



/* Entry: 10686761c; end: 1068676eb; -[SCSpotlightSubfeedMetadata isEqual:] */

long FUN_10686761c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1068676c4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1068676d0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_1068676d0;
          }
          goto LAB_1068676c4;
        }
      }
    }
    lVar3 = 0;
  }
LAB_1068676d0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1068676ec; end: 1068676f3; -[SCSpotlightSubfeedMetadata feedIdentifier] */

undefined8 FUN_1068676ec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1068676f4; end: 1068676fb; -[SCSpotlightSubfeedMetadata sectionKey] */

undefined8 FUN_1068676f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1068676fc; end: 106867703; -[SCSpotlightSubfeedMetadata displayName] */

undefined8 FUN_1068676fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106867704; end: 10686770b; -[SCSpotlightSubfeedMetadata feedStringIdentifier] */

undefined8 FUN_106867704(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10686770c; end: 1068677c3; -[SCSpotlightSubfeedMetadata .cxx_destruct] */

void FUN_10686770c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1068677c4; end: 1068677cf;  */

bool FUN_1068677c4(uint param_1)

{
  return param_1 < 9;
}



/* Entry: 1068677d0; end: 106867837; +[SCResponsiveFetchMoreRelatedContentConfig descriptor] */

void FUN_1068677d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c46a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b02420,
                        &PTR____CFConstantStringClassReference_110e62398,&PTR_DAT_113167f78,
                        &PTR_DAT_113167f90,4,0x28,0x1c);
    puRam00000001136c46a8 = puVar1;
  }
  return;
}



/* Entry: 106867838; end: 10686790f;  */

void FUN_106867838(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e623d8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e623d8,
                      &PTR____CFConstantStringClassReference_110e623b8,0);
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



/* Entry: 106867910; end: 1068679d3; -[SCAllContactsScope initWithUiContainer:allContactsWorkflowDelegate:configuration:] */

undefined1 *
FUN_106867910(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f3860;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
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


