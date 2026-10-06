/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1061f2868; end: 1061f292b;  */

void FUN_1061f2868(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c15c0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1061f292c; end: 1061f2933;  */

void FUN_1061f292c(void)

{
  return;
}



/* Entry: 1061f2934; end: 1061f295f;  */

void FUN_1061f2934(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee9400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061f2960; end: 1061f2967;  */

void FUN_1061f2960(void)

{
  return;
}



/* Entry: 1061f2968; end: 1061f29e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f2968(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 == 0)) {
    lVar2 = (long)_DAT_112742d44;
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_2;
    _objc_release(uVar1);
    func_0x00010bead920(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061f29e4; end: 1061f2a43; -[SCFeatureLensSideButtonImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f29e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112742d48;
  if (*(long *)(param_1 + lVar2) == 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    func_0x00010c238080(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061f2a44; end: 1061f2a9b; -[SCFeatureLensSideButtonImpl activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f2a44(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112742d4c;
  if (*(long *)(param_1 + lVar3) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bead930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupLensCarouselActiveObservab_112588ff0);
  return;
}



/* Entry: 1061f2a9c; end: 1061f2c0b; -[SCFeatureLensSideButtonImpl _setupLensCarouselActiveObservables] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f2a9c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  if (*(long *)(param_1 + _DAT_112742d4c) != 0) {
    lVar6 = (long)_DAT_112742d44;
    if (*(long *)(param_1 + lVar6) != 0) {
      _objc_initWeak(auStack_58,param_1);
      uVar1 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bef1060();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c0e0ec0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_60,auStack_58);
      uVar5 = uVar4;
      func_0x00010c25ff60(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
    }
  }
  return;
}



/* Entry: 1061f2c0c; end: 1061f2c77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f2c0c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010bf1f3c0();
    *(char *)(param_1 + _DAT_112742d50) = (char)uVar1;
    func_0x00010bf1f3c0(param_2);
    func_0x00010c1babc0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061f2c78; end: 1061f2cf3; -[SCFeatureLensSideButtonImpl shouldBlockTouchAtPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061f2c78(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112742d54;
  uVar1 = *(ulong *)(param_3 + lVar3);
  if ((uVar1 != 0) && (func_0x00010c074c20(), (uVar1 & 1) == 0)) {
    func_0x00010bf51200(param_1,param_2,*(undefined8 *)(param_3 + lVar3));
    uVar2 = *(undefined8 *)(param_3 + lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c102b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_pointInside_withEvent__11261e4e8,0);
    return uVar2;
  }
  return 0;
}



/* Entry: 1061f2cf4; end: 1061f2d03; -[SCFeatureLensSideButtonImpl showLensButtonIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f2cf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1babd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setLensButtonHidden__11264c518,*(undefined1 *)(param_1 + _DAT_112742d50))
  ;
  return;
}



/* Entry: 1061f2d04; end: 1061f2d07; -[SCFeatureLensSideButtonImpl resetButtonFrame] */

void FUN_1061f2d04(void)

{
  return;
}



/* Entry: 1061f2d08; end: 1061f2daf; -[SCFeatureLensSideButtonImpl setLensButtonHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f2d08(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112742d54;
  if (*(long *)(param_1 + lVar2) == 0) {
    if ((param_3 & 1) != 0) {
      return;
    }
    func_0x00010be78860(param_1);
  }
  else if ((param_3 & 1) != 0) {
    func_0x00010bec2d60(param_1);
    goto LAB_1061f2d98;
  }
  func_0x00010bed8640(param_1);
  func_0x00010be58a80(param_1);
  func_0x00010bebf640(param_1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c262ca0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf21300();
  _objc_release(uVar1);
LAB_1061f2d98:
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar2),PTR_s_setHidden__1126479f8,param_3);
  return;
}



/* Entry: 1061f2db0; end: 1061f2dcb; -[SCFeatureLensSideButtonImpl setCameraViewType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f2db0(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + _DAT_112742d18) != param_3) {
    *(long *)(param_1 + _DAT_112742d18) = param_3;
  }
  return;
}



/* Entry: 1061f2dcc; end: 1061f3193; -[SCFeatureLensSideButtonImpl _prepareLensButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f2dcc(long param_1)

{
  long lVar1;
  long lVar2;
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
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar21 = (long)_DAT_112742d48;
  lVar1 = *(long *)(param_1 + lVar21);
  if (lVar1 != 0) {
    func_0x00010bfe12e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar2 = *(long *)(param_1 + lVar21);
      func_0x00010bf2b240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release();
      if ((lVar2 != 0) && (lVar2 = (long)_DAT_112742d54, *(long *)(param_1 + lVar2) == 0)) {
        lVar3 = *(long *)(param_1 + _DAT_112742d38);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar3;
        func_0x00010c0944e0();
        _objc_release(lVar3);
        puVar4 = PTR_PTR_1126c8bc0;
        _objc_alloc();
        lVar3 = param_1;
        func_0x00010be4a4a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar22 = 0x4022000000000000;
        if (lVar1 == 0) {
          uVar22 = 0;
        }
        func_0x00010c01ce20();
        uVar20 = *(undefined8 *)(param_1 + lVar2);
        *(undefined **)(param_1 + lVar2) = puVar4;
        _objc_release(uVar20);
        _objc_release(lVar3);
        func_0x00010c16d4a0(*(undefined8 *)(param_1 + lVar2));
        uVar20 = *(undefined8 *)(param_1 + lVar21);
        func_0x00010bfe12e0(uVar20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60();
        _objc_release(uVar20);
        func_0x00010c219b60(*(undefined8 *)(param_1 + lVar2));
        func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2));
        puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        uVar5 = *(undefined8 *)(param_1 + lVar2);
        func_0x00010bfe0660();
        _objc_retainAutoreleasedReturnValue();
        uVar20 = uVar5;
        func_0x00010bf49420(0x4049000000000000);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(param_1 + lVar2);
        func_0x00010c2a5060();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010bf49420(0x4049000000000000);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = *(undefined8 *)(param_1 + lVar2);
        func_0x00010bf348e0();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)(param_1 + lVar21);
        func_0x00010bf2b240(uVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010bf348e0();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar8;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = *(undefined8 *)(param_1 + lVar2);
        func_0x00010c08e400();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = *(undefined8 *)(param_1 + lVar21);
        func_0x00010bf2b240();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar13;
        func_0x00010c1408a0();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar12;
        func_0x00010bf493c0(uVar22);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef8c0(puVar4);
        _objc_release(puVar16);
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
        _objc_release(uVar20);
        _objc_release(uVar5);
        puVar4 = PTR_PTR_1126b08d8;
        if (lVar1 != 0) {
          uVar22 = *(undefined8 *)(param_1 + lVar2);
          puVar16 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010c23ba80();
          _objc_retainAutoreleasedReturnValue();
          func_0x000100b74f58(0x4000000000000000,0x3fd0000000000000,0,0,puVar4,uVar22,puVar16);
          _objc_release(puVar16);
        }
        lVar1 = *(long *)(param_1 + lVar2);
        func_0x00010befbd40();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR_PTR_1126c8bc8;
  _objc_alloc(PTR_PTR_1126c8bc8);
  func_0x00010c03f880();
  puVar16 = PTR_PTR_1126c8bd0;
  _objc_alloc(PTR_PTR_1126c8bd0);
  uVar22 = *(undefined8 *)(lVar1 + _DAT_112742d24);
  func_0x00010c096bc0(uVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR_PTR_1126aeea8;
  _objc_opt_new(PTR_PTR_1126aeea8);
  func_0x00010c01a8e0(puVar16);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(uVar22);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 1061f3194; end: 1061f328f; -[SCFeatureLensSideButtonImpl _lensButtonImageProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f3194(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126c8bc8;
  _objc_alloc(PTR_PTR_1126c8bc8);
  func_0x00010c03f880();
  puVar2 = PTR_PTR_1126c8bd0;
  _objc_alloc(PTR_PTR_1126c8bd0);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112742d24);
  func_0x00010c096bc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112742d30);
  puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126aeea8;
  _objc_opt_new(PTR_PTR_1126aeea8);
  func_0x00010c01a8e0(puVar2,param_2,uVar3,puVar1,uVar6,puVar4,puVar5,
                      *(undefined8 *)(param_1 + _DAT_112742d2c));
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1061f3290; end: 1061f329f; -[SCFeatureLensSideButtonImpl _setNewLensesAvailable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f3290(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16ee30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112742d54),PTR_s_setBadged__1126395a8);
  return;
}



/* Entry: 1061f32a0; end: 1061f3377; -[SCFeatureLensSideButtonImpl _updateFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f32a0(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = (int)&uStack_60;
  lVar5 = (long)_DAT_112742d54;
  iVar2 = (int)*(undefined8 *)(param_1 + lVar5);
  func_0x00010bfb68e0();
  _CGRectEqualToRect();
  if (iVar2 != 0) {
    lVar3 = *(long *)(param_1 + _DAT_112742d48);
    func_0x00010bf2b240();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
    }
    else {
      func_0x00010c27a460(&uStack_60,lVar3);
    }
    _CGAffineTransformIsIdentity();
    _objc_release(lVar3);
    if (iVar1 != 0) {
      func_0x00010c138300(param_1);
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c262ca0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08cdc0();
      _objc_release(uVar4);
      func_0x00010c1cbe20(*(undefined8 *)(param_1 + lVar5));
    }
  }
  return;
}



/* Entry: 1061f3378; end: 1061f3393; -[SCFeatureLensSideButtonImpl _isMainCamera] */

bool FUN_1061f3378(long param_1)

{
  func_0x00010bf2bbc0();
  return param_1 == 0;
}



/* Entry: 1061f3394; end: 1061f3573; -[SCFeatureLensSideButtonImpl _lensButtonPressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f3394(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  lVar7 = (long)_DAT_112742d58;
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar1;
  _objc_release(uVar5);
  puVar1 = PTR_PTR_1126b00f8;
  func_0x00010c158a20(PTR_PTR_1126b00f8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0240;
  _objc_alloc(PTR_PTR_1126b0240);
  func_0x00010bff0c40();
  lVar6 = (long)_DAT_112742d44;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef0080();
  _objc_release(uVar5);
  func_0x00010c1babc0(param_1);
  _objc_initWeak(auStack_68,param_1);
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c159aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  uVar4 = uVar5;
  func_0x00010c25ff60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar3);
  if (*(long *)(param_1 + lVar7) != 0) {
    func_0x00010bf1a3e0(uVar4);
  }
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1061f3574; end: 1061f3603;  */

void FUN_1061f3574(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0bf0a0(param_2);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 1061f3604; end: 1061f3687;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f3604(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112742d20);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a9740();
  _objc_release(param_2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112742d58);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112742d58) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061f3688; end: 1061f36e7; -[SCFeatureLensSideButtonImpl _logShown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f3688(long param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + _DAT_112742d5c) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + _DAT_112742d5c) = 1;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112742d20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a9720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061f36e8; end: 1061f3723; -[SCFeatureLensSideButtonImpl _startAnimatingLensButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f36e8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010beb26e0();
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112742d54),PTR_s_startAnimating_112671118);
    return;
  }
  return;
}



/* Entry: 1061f3724; end: 1061f378b; -[SCFeatureLensSideButtonImpl _stopAnimatingLensButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f3724(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + _DAT_112742d50) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112742d1c);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f9f60();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2558d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112742d54),PTR_s_stopAnimating_112673058);
  return;
}



/* Entry: 1061f378c; end: 1061f3803; -[SCFeatureLensSideButtonImpl _shouldAnimateLensButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061f378c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(param_1 + _DAT_112742d1c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c157880();
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112742d28);
    func_0x00010bf1f440(uVar3,param_2,&PTR____CFConstantStringClassReference_110e44678,0,0);
  }
  else {
    uVar3 = 0;
  }
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 1061f3804; end: 1061f3807; -[SCFeatureLensSideButtonImpl _viewDidAppear] */

void FUN_1061f3804(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c238090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_showLensButtonIfNeeded_11266ba48);
  return;
}



/* Entry: 1061f3808; end: 1061f380b; -[SCFeatureLensSideButtonImpl setCameraUIVisible:animated:arbitrator:] */

void FUN_1061f3808(void)

{
  return;
}



/* Entry: 1061f380c; end: 1061f381b; -[SCFeatureLensSideButtonImpl cameraViewType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061f380c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112742d18);
}



/* Entry: 1061f381c; end: 1061f382b; -[SCFeatureLensSideButtonImpl lens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061f381c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112742d60);
}



/* Entry: 1061f382c; end: 1061f394b; -[SCFeatureLensSideButtonImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f382c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112742d60,0);
  _objc_storeStrong(param_1 + _DAT_112742d3c,0);
  _objc_storeStrong(param_1 + _DAT_112742d38,0);
  _objc_storeStrong(param_1 + _DAT_112742d34,0);
  _objc_storeStrong(param_1 + _DAT_112742d30,0);
  _objc_storeStrong(param_1 + _DAT_112742d28,0);
  _objc_storeStrong(param_1 + _DAT_112742d2c,0);
  _objc_storeStrong(param_1 + _DAT_112742d24,0);
  _objc_storeStrong(param_1 + _DAT_112742d40,0);
  _objc_storeStrong(param_1 + _DAT_112742d58,0);
  _objc_storeStrong(param_1 + _DAT_112742d4c,0);
  _objc_storeStrong(param_1 + _DAT_112742d1c,0);
  _objc_storeStrong(param_1 + _DAT_112742d44,0);
  _objc_storeStrong(param_1 + _DAT_112742d20,0);
  _objc_storeStrong(param_1 + _DAT_112742d54,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112742d48,0);
  return;
}



/* Entry: 1061f394c; end: 1061f39cf; -[SCFeatureLensOperaImpl initWithLazyLensLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1061f394c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f0550;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112742d64;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1061f39d0; end: 1061f3a7b; -[SCFeatureLensOperaImpl triggerURLAsRuntimeAttachment:isMultiURL:lens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f39d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112742d64);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b2a80();
  _objc_release(uVar1);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23aaa0();
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061f3a7c; end: 1061f3a9b; -[SCFeatureLensOperaImpl delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f3a7c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112742d68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061f3a9c; end: 1061f3aaf; -[SCFeatureLensOperaImpl setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f3a9c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112742d68,param_3);
  return;
}



/* Entry: 1061f3ab0; end: 1061f3aeb; -[SCFeatureLensOperaImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f3ab0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112742d68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112742d64,0);
  return;
}



/* Entry: 1061f3aec; end: 1061f3bd3; -[SCFeatureLensPreviewActionImpl initWithLensCarouselManager:snapchattersDataFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1061f3aec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f0558;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c24e420(puVar1);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112742d6c);
    *(undefined **)((long)puVar1 + (long)_DAT_112742d6c) = puVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112742d70;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112742d74;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1061f3bd4; end: 1061f3c87; -[SCFeatureLensPreviewActionImpl setFriendRecipientUserIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f3bd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112742d78);
  *(undefined8 *)(param_1 + _DAT_112742d78) = uVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112742d6c);
  uVar1 = param_3;
  func_0x00010bf51e00(param_3);
  func_0x00010c0d9840(uVar2,param_2,uVar1);
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061f3c88; end: 1061f3cd7; -[SCFeatureLensPreviewActionImpl friendRecipientUserIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f3c88(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112742d78);
  _objc_retain(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1061f3cd8; end: 1061f3e4b; -[SCFeatureLensPreviewActionImpl friendRecipientSelectionItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f3cd8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  func_0x00010bfb88e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  _objc_retain(lVar2);
  lVar4 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar7 = *(undefined8 *)(lVar8 * 8);
      lVar5 = param_1;
      func_0x00010be04920(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108ef83a4(uVar7,lVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3);
      _objc_release(uVar7);
      _objc_release(lVar5);
      lVar8 = lVar8 + 1;
    } while (lVar4 != lVar8);
    lVar4 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_sync_enter(lVar2);
  uVar7 = *(undefined8 *)(lVar2 + _DAT_112742d78);
  *(undefined8 *)(lVar2 + _DAT_112742d78) = 0;
  _objc_release(uVar7);
  puVar3 = PTR_PTR_1126ae820;
  _objc_opt_new();
  uVar7 = *(undefined8 *)(lVar2 + _DAT_112742d6c);
  *(undefined **)(lVar2 + _DAT_112742d6c) = puVar3;
  _objc_release(uVar7);
  _objc_sync_exit(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1061f3e4c; end: 1061f3ecb; -[SCFeatureLensPreviewActionImpl clear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f3e4c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112742d78);
  *(undefined8 *)(param_1 + _DAT_112742d78) = 0;
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126ae820;
  _objc_opt_new();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112742d6c);
  *(undefined **)(param_1 + _DAT_112742d6c) = puVar2;
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061f3ecc; end: 1061f3f1b; -[SCFeatureLensPreviewActionImpl friendRecipientUserIdsObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f3ecc(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112742d6c);
  _objc_retain(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1061f3f1c; end: 1061f405f; -[SCFeatureLensPreviewActionImpl startCarouselStateObservingWithLensCarouselManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f3f1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef0b80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf870c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112742d7c);
  *(undefined8 *)(param_1 + _DAT_112742d7c) = uVar4;
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1061f4060; end: 1061f411f;  */

undefined8 FUN_1061f4060(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0ec5e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010c094540(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0720c0(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar4;
}



/* Entry: 1061f4120; end: 1061f4177;  */

void FUN_1061f4120(long param_1,long param_2)

{
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      func_0x00010bf3a660(param_1);
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061f4178; end: 1061f426f; -[SCFeatureLensPreviewActionImpl _displayNameForUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f4178(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112742d70;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0ee920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar3 = *(long *)(param_1 + lVar3);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010bfebfc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if (lVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar1;
      func_0x00010901d7c4(lVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar1);
  }
  else {
    lVar3 = lVar2;
    func_0x00010901d7c4(lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1061f4270; end: 1061f42ef; -[SCFeatureLensPreviewActionImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f4270(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112742d78,0);
  _objc_storeStrong(param_1 + _DAT_112742d74,0);
  _objc_storeStrong(param_1 + _DAT_112742d70,0);
  _objc_storeStrong(param_1 + _DAT_112742d6c,0);
  _objc_storeStrong(param_1 + _DAT_112742d80,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112742d7c,0);
  return;
}



/* Entry: 1061f42f0; end: 1061f441b; -[SCFeatureLensShoppingRouter initWithLensCarouselManager:lensOpera:shoppingNotifications:logger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1061f42f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126f0560;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_112742d84) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112742d88) = 0;
    lVar3 = (long)_DAT_112742d8c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112742d90;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112742d94;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112742d98;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1061f441c; end: 1061f453b; -[SCFeatureLensShoppingRouter activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f441c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if ((*(byte *)(param_1 + _DAT_112742d84) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_112742d84) = 1;
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112742d8c);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c297280(uVar1);
    lVar2 = (long)_DAT_112742d94;
    func_0x00010c1266e0(*(undefined8 *)(param_1 + lVar2));
    func_0x00010c126940(*(undefined8 *)(param_1 + lVar2));
    func_0x00010c126920(*(undefined8 *)(param_1 + lVar2));
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 1061f453c; end: 1061f47c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f453c(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (lVar1 != 0)) {
    lVar2 = param_2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bef0b80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c0e0ec0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_1061f47c4;
    puStack_80 = &UNK_11084eff0;
    _objc_copyWeak(auStack_78,param_1 + 0x20);
    lVar7 = lVar6;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(lVar1 + _DAT_112742d9c);
    *(long *)(lVar1 + _DAT_112742d9c) = lVar7;
    _objc_release(uVar8);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bef1060();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c0e0ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_a0,param_1 + 0x20);
    lVar6 = lVar5;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(lVar1 + _DAT_112742da0);
    *(long *)(lVar1 + _DAT_112742da0) = lVar6;
    _objc_release(uVar8);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1061f47c4; end: 1061f483b;  */

void FUN_1061f47c4(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_2;
    func_0x00010c0ec5e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      func_0x00010bdfc200(param_1);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061f483c; end: 1061f489b;  */

void FUN_1061f483c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c071ae0(param_2);
    func_0x00010bdfc840(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061f489c; end: 1061f491f; -[SCFeatureLensShoppingRouter _notificationRequestLensSessionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f489c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + _DAT_112742d88) == '\x01') {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112742d94);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112742d98);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c096b60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1048a0(uVar3,param_2,uVar2);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1061f4920; end: 1061f4987; -[SCFeatureLensShoppingRouter _notificationRequestLensId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f4920(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + _DAT_112742d88) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112742d94);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112742da4);
    func_0x00010c094540(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c104880(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1061f4988; end: 1061f4a6b; -[SCFeatureLensShoppingRouter _notificationTriggerURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f4988(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + _DAT_112742d88) == '\x01') {
    _objc_initWeak(auStack_28,param_1);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1061f4a6c;
    puStack_40 = &UNK_110841fb0;
    _objc_retain(param_3);
    uStack_38 = param_3;
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x0001000d76cc("APPSTORE",&puStack_58);
    _objc_destroyWeak(auStack_30);
    _objc_release(uStack_38);
    _objc_destroyWeak(auStack_28);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1061f4a6c; end: 1061f4b7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f4a6c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((int)uVar7 != 0) {
    lVar3 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (lVar3 != 0) {
      uVar4 = *(ulong *)(param_1 + 0x20);
      func_0x00010c0dfc60();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      uVar6 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar5);
      uVar1 = uVar4;
      if ((uVar6 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar4);
      if (uVar1 != 0) {
        uVar7 = *(undefined8 *)(lVar3 + _DAT_112742d90);
        func_0x00010bfa1820(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c27c380();
        _objc_release(uVar7);
      }
      _objc_release(uVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 1061f4b7c; end: 1061f4bb3; -[SCFeatureLensShoppingRouter _didActivateLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f4b7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112742da4);
  *(undefined8 *)(param_1 + _DAT_112742da4) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061f4bb4; end: 1061f4bdf; -[SCFeatureLensShoppingRouter _didChangeCarouselState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f4bb4(long param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  
  *(byte *)(param_1 + _DAT_112742d88) = param_3;
  if ((param_3 & 1) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_112742da4);
  *(undefined8 *)(param_1 + _DAT_112742da4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061f4be0; end: 1061f4c6f; -[SCFeatureLensShoppingRouter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f4be0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112742d98,0);
  _objc_storeStrong(param_1 + _DAT_112742da4,0);
  _objc_storeStrong(param_1 + _DAT_112742da0,0);
  _objc_storeStrong(param_1 + _DAT_112742d9c,0);
  _objc_storeStrong(param_1 + _DAT_112742d94,0);
  _objc_storeStrong(param_1 + _DAT_112742d90,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112742d8c,0);
  return;
}



/* Entry: 1061f4c70; end: 1061f4cbf; -[SCARShoppingBaseNotifications init] */

undefined8 FUN_1061f4c70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02fd40(param_1,param_2,puVar1);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1061f4cc0; end: 1061f4d33; -[SCARShoppingBaseNotifications initWithNotificationCenter:] */

undefined1 * FUN_1061f4cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f0568;
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



/* Entry: 1061f4d34; end: 1061f4d47; -[SCARShoppingBaseNotifications registerGenericURLObserver:selector:] */

void FUN_1061f4d34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be89a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__registerNotification_observer_s_112580038,
             &PTR____CFConstantStringClassReference_110e44f78,param_3,param_4);
  return;
}



/* Entry: 1061f4d48; end: 1061f4d57; -[SCARShoppingBaseNotifications postGenericURL:] */

void FUN_1061f4d48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be76630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__postNotification_object__11257b328,
             &PTR____CFConstantStringClassReference_110e44f78,param_3);
  return;
}



/* Entry: 1061f4d58; end: 1061f4d6b; -[SCARShoppingBaseNotifications registerLensSessionIdRequestObserver:selector:] */

void FUN_1061f4d58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be89a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__registerNotification_observer_s_112580038,
             &PTR____CFConstantStringClassReference_110e44f98,param_3,param_4);
  return;
}



/* Entry: 1061f4d6c; end: 1061f4d7b; -[SCARShoppingBaseNotifications postLensSessionIdRequest] */

void FUN_1061f4d6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be76630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__postNotification_object__11257b328,
             &PTR____CFConstantStringClassReference_110e44f98,0);
  return;
}



/* Entry: 1061f4d7c; end: 1061f4d8f; -[SCARShoppingBaseNotifications registerLensSessionIdResponseObserver:selector:] */

void FUN_1061f4d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be89a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__registerNotification_observer_s_112580038,
             &PTR____CFConstantStringClassReference_110e44fb8,param_3,param_4);
  return;
}



/* Entry: 1061f4d90; end: 1061f4d9f; -[SCARShoppingBaseNotifications postLensSessionIdResponse:] */

void FUN_1061f4d90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be76630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__postNotification_object__11257b328,
             &PTR____CFConstantStringClassReference_110e44fb8,param_3);
  return;
}



/* Entry: 1061f4da0; end: 1061f4db3; -[SCARShoppingBaseNotifications registerLensIdRequestObserver:selector:] */

void FUN_1061f4da0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be89a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__registerNotification_observer_s_112580038,
             &PTR____CFConstantStringClassReference_110e44fd8,param_3,param_4);
  return;
}



/* Entry: 1061f4db4; end: 1061f4dc3; -[SCARShoppingBaseNotifications postLensIdRequest] */

void FUN_1061f4db4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be76630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__postNotification_object__11257b328,
             &PTR____CFConstantStringClassReference_110e44fd8,0);
  return;
}



/* Entry: 1061f4dc4; end: 1061f4dd7; -[SCARShoppingBaseNotifications registerLensIdResponseObserver:selector:] */

void FUN_1061f4dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be89a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__registerNotification_observer_s_112580038,
             &PTR____CFConstantStringClassReference_110e44ff8,param_3,param_4);
  return;
}



/* Entry: 1061f4dd8; end: 1061f4de7; -[SCARShoppingBaseNotifications postLensIdResponse:] */

void FUN_1061f4dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be76630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__postNotification_object__11257b328,
             &PTR____CFConstantStringClassReference_110e44ff8,param_3);
  return;
}



/* Entry: 1061f4de8; end: 1061f4dfb; -[SCARShoppingBaseNotifications registerProductStateUpdateObserver:selector:] */

void FUN_1061f4de8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be89a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__registerNotification_observer_s_112580038,
             &PTR____CFConstantStringClassReference_110e45018,param_3,param_4);
  return;
}



/* Entry: 1061f4dfc; end: 1061f4e0b; -[SCARShoppingBaseNotifications sendProductStateUpdate:] */

void FUN_1061f4dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be76630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__postNotification_object__11257b328,
             &PTR____CFConstantStringClassReference_110e45018,param_3);
  return;
}



/* Entry: 1061f4e0c; end: 1061f4e27; -[SCARShoppingBaseNotifications _registerNotification:observer:selector:] */

void FUN_1061f4e0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_addObserver_selector_name_object_11259c238,param_4,
             param_5,param_3,0);
  return;
}



/* Entry: 1061f4e28; end: 1061f4e2f; -[SCARShoppingBaseNotifications _postNotification:object:] */

void FUN_1061f4e28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c104990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_postNotificationName_object__11261ec80);
  return;
}



/* Entry: 1061f4e30; end: 1061f4e3b; -[SCARShoppingBaseNotifications .cxx_destruct] */

void FUN_1061f4e30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1061f4e3c; end: 1061f4e87; -[SCLensThumbnailEventRestoreOptions initWithCarouselType:entranceType:] */

void FUN_1061f4e3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f0570;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 1061f4e88; end: 1061f4eab; -[SCLensThumbnailEventRestoreOptions copyWithZone:] */

undefined8 FUN_1061f4e88(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1061f4eac; end: 1061f4f03; -[SCLensThumbnailEventRestoreOptions hash] */

undefined8 * FUN_1061f4eac(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  uStack_30 = *(undefined8 *)(param_1 + 8);
  func_0x000100505190(&uStack_30,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (undefined8 *)param_3) {
    puVar3 = (undefined1 *)0x1;
  }
  else {
    puVar3 = (undefined1 *)0x0;
    if ((puVar1 != (undefined8 *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar3 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) || (*(long *)((long)puVar1 + 8) != *(long *)(param_3 + 8))) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = (undefined1 *)(ulong)(*(long *)((long)puVar1 + 0x10) == *(long *)(param_3 + 0x10));
      }
    }
  }
  _objc_release(param_3);
  return (undefined8 *)puVar3;
}



/* Entry: 1061f4f04; end: 1061f4f9b; -[SCLensThumbnailEventRestoreOptions isEqual:] */

bool FUN_1061f4f04(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
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
      if (((uVar3 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1061f4f9c; end: 1061f4fa3; -[SCLensThumbnailEventRestoreOptions carouselType] */

undefined8 FUN_1061f4f9c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1061f4fa4; end: 1061f4fab; -[SCLensThumbnailEventRestoreOptions entranceType] */

undefined8 FUN_1061f4fa4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1061f4fac; end: 1061f506f; -[SCLensTabSessionInfo initWithCoder:] */

undefined1 * FUN_1061f4fac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f0578;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1061f5070; end: 1061f5123; -[SCLensTabSessionInfo initWithTabSessionId:tabCategoryId:isARBarMiniCameraActive:] */

undefined1 *
FUN_1061f5070(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f0578;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1061f5124; end: 1061f5147; -[SCLensTabSessionInfo copyWithZone:] */

undefined8 FUN_1061f5124(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1061f5148; end: 1061f51bb; -[SCLensTabSessionInfo encodeWithCoder:] */

void FUN_1061f5148(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e45038);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110e45058);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110e45078);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061f51bc; end: 1061f5233; -[SCLensTabSessionInfo hash] */

undefined8 * FUN_1061f51bc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1061f52c4:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1061f52d0;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_1061f52d0;
        }
        goto LAB_1061f52c4;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1061f52d0:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1061f5234; end: 1061f52eb; -[SCLensTabSessionInfo isEqual:] */

long FUN_1061f5234(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1061f52c4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1061f52d0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_1061f52d0;
        }
        goto LAB_1061f52c4;
      }
    }
    lVar3 = 0;
  }
LAB_1061f52d0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1061f52ec; end: 1061f52f3; -[SCLensTabSessionInfo tabSessionId] */

undefined8 FUN_1061f52ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1061f52f4; end: 1061f52fb; -[SCLensTabSessionInfo tabCategoryId] */

undefined8 FUN_1061f52f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1061f52fc; end: 1061f5303; -[SCLensTabSessionInfo isARBarMiniCameraActive] */

undefined1 FUN_1061f52fc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1061f5304; end: 1061f5333; -[SCLensTabSessionInfo .cxx_destruct] */

void FUN_1061f5304(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1061f5334; end: 1061f537f; +[SCLensLoggerLensSelection autoSelection] */

void FUN_1061f5334(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c8bd8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1061f5380; end: 1061f53cb; +[SCLensLoggerLensSelection background] */

void FUN_1061f5380(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c8bd8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1061f53cc; end: 1061f5417; +[SCLensLoggerLensSelection drag] */

void FUN_1061f53cc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c8bd8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1061f5418; end: 1061f547f; +[SCLensLoggerLensSelection featureWithFeatureName:] */

void FUN_1061f5418(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c8bd8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 4;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1061f5480; end: 1061f54eb; +[SCLensLoggerLensSelection pageWithPageName:] */

void FUN_1061f5480(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c8bd8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1061f54ec; end: 1061f5547; +[SCLensLoggerLensSelection snapCaptureWithSnapSent:] */

void FUN_1061f54ec(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c8bd8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 7;
  puVar2[0x20] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1061f5548; end: 1061f5593; +[SCLensLoggerLensSelection swipe] */

void FUN_1061f5548(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c8bd8;
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



/* Entry: 1061f5594; end: 1061f55db; +[SCLensLoggerLensSelection tap] */

void FUN_1061f5594(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c8bd8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


