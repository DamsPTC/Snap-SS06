/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1051f91f0; end: 1051f950f; -[SCContextScrollableModalViewController _finishPan:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f91f0(undefined8 param_1,double param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_b8 [8];
  undefined4 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  double dStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_5);
  lVar8 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297a00(param_5);
  dVar11 = param_2;
  _objc_release(lVar8);
  dVar10 = *(double *)(param_3 + _DAT_11271f5f8);
  lVar8 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27adc0(param_5);
  dVar10 = dVar10 + dVar11;
  _objc_release(lVar8);
  if ((param_2 <= 0.0) || (dVar10 <= *(double *)(param_3 + _DAT_11271f5d0))) {
    if ((*(byte *)(param_3 + _DAT_11271f5dc) & 1) == 0) {
      uVar6 = 0;
      bVar4 = false;
      dVar11 = *(double *)(param_3 + _DAT_11271f5d0);
      goto LAB_1051f9384;
    }
    if (param_2 == 0.0) {
      dVar12 = *(double *)(param_3 + _DAT_11271f5d0);
      if (dVar12 <= dVar10) {
        dVar11 = dVar12;
        uVar7 = 0;
      }
      else {
        dVar9 = *(double *)(param_3 + _DAT_11271f5d4);
        uVar7 = 0;
        dVar11 = dVar9;
        if ((dVar9 < dVar10) && (dVar11 = dVar12, dVar10 <= *(double *)(param_3 + _DAT_11271f5d8)))
        {
          dVar11 = dVar9;
        }
      }
    }
    else {
      iVar1 = _DAT_11271f5d4;
      if (0.0 < param_2) {
        iVar1 = _DAT_11271f5d0;
      }
      dVar11 = *(double *)(param_3 + iVar1);
      uVar7 = 0;
    }
  }
  else {
    dVar11 = *(double *)(param_3 + _DAT_11271f5e0);
    uVar6 = 1;
    uVar7 = 1;
    if (*(char *)(param_3 + _DAT_11271f5dc) != '\x01') {
      bVar4 = false;
      goto LAB_1051f9384;
    }
  }
  uVar6 = uVar7;
  bVar4 = dVar11 == *(double *)(param_3 + _DAT_11271f5d4);
LAB_1051f9384:
  *(bool *)(param_3 + _DAT_11271f5e8) = bVar4;
  puVar2 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___UISpringTimingParameters_1126b6230;
  _objc_alloc(PTR__OBJC_CLASS___UISpringTimingParameters_1126b6230);
  func_0x00010c008200(0x3fedc28f5c28f5c3,0,param_2);
  func_0x00010c00eb20(0x3fd3333333333333);
  lVar8 = (long)_DAT_11271f5f4;
  uVar5 = *(undefined8 *)(param_3 + lVar8);
  *(undefined **)(param_3 + lVar8) = puVar2;
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_initWeak(auStack_78,param_3);
  uVar5 = *(undefined8 *)(param_3 + lVar8);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1051f9510;
  puStack_90 = &UNK_110846540;
  _objc_copyWeak(auStack_88,auStack_78);
  dStack_80 = dVar11;
  func_0x00010bef6cc0(uVar5);
  uVar5 = *(undefined8 *)(param_3 + lVar8);
  _objc_copyWeak(auStack_b8,auStack_78);
  uStack_b0 = uVar6;
  func_0x00010bef78c0(uVar5);
  func_0x00010c24dc40(*(undefined8 *)(param_3 + lVar8));
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_5);
  return;
}



/* Entry: 1051f9510; end: 1051f954b;  */

void FUN_1051f9510(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bea8ae0(*(undefined8 *)(param_1 + 0x28),lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1051f954c; end: 1051f95b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f954c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_11271f5f4);
    *(undefined8 *)(lVar1 + _DAT_11271f5f4) = 0;
    _objc_release(uVar2);
    if ((param_2 == 0) && (*(int *)(param_1 + 0x28) != 0)) {
      func_0x00010be16e00(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1051f95b4; end: 1051f9657; -[SCContextScrollableModalViewController gestureRecognizer:shouldReceiveTouch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1051f95b4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  if ((param_3 == *(long *)(param_1 + _DAT_11271f5c8)) ||
     (*(char *)(param_1 + _DAT_11271f5e8) == '\x01')) {
    lVar1 = param_1;
    func_0x00010c152980(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(param_4,param_2,lVar1);
    func_0x00010c23e980(param_1);
    _objc_release(lVar1);
  }
  else {
    param_1 = 1;
  }
  _objc_release(param_4);
  return param_1;
}



/* Entry: 1051f9658; end: 1051f9797; -[SCContextScrollableModalViewController gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1051f9658(double param_1,double param_2,long param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  
  _objc_retain(param_5);
  puVar3 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
  uVar4 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar3);
  uVar1 = param_5;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    bVar6 = false;
  }
  else {
    uVar4 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297a00(param_5);
    dVar8 = param_1;
    dVar9 = param_2;
    _objc_release(uVar5);
    _objc_release(uVar4);
    bVar6 = ABS(param_1) < ABS(param_2);
    if (*(char *)(param_3 + _DAT_11271f5e8) == '\x01') {
      lVar7 = (long)_DAT_11271f5cc;
      iVar2 = (int)*(undefined8 *)(param_3 + lVar7);
      func_0x00010c07d3e0();
      if (iVar2 != 0) {
        func_0x00010bf4cdc0(*(undefined8 *)(param_3 + lVar7));
        func_0x00010bf4c7c0(*(undefined8 *)(param_3 + lVar7));
        bVar6 = dVar9 == -dVar8 && (0.0 < param_2 && ABS(param_1) < ABS(param_2));
      }
    }
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  return bVar6;
}



/* Entry: 1051f9798; end: 1051f9853; -[SCContextScrollableModalViewController _installPanGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f9798(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c050900();
  func_0x00010c18b5e0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271f5cc);
  func_0x00010c0f36c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1374a0();
  _objc_release(uVar2);
  func_0x00010bef9040(param_3,param_2,puVar1);
  _objc_release(param_3);
  func_0x00010befa120(*(undefined8 *)(param_1 + _DAT_11271f5bc),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1051f9854; end: 1051f99a7; -[SCContextScrollableModalViewController _uninstallAllPanGestures] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f9854(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar5 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar8 = *(long *)(param_1 + _DAT_11271f5bc);
  _objc_retain(lVar8);
  uVar6 = 0;
  lVar7 = 0x10;
  lVar1 = lVar8;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    unaff_x24 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != unaff_x24) {
          _objc_enumerationMutation(lVar8);
        }
        unaff_x22 = *(undefined8 *)(lStack_118 + lVar7 * 8);
        func_0x00010c12e920(unaff_x22);
        func_0x00010c18b5e0(unaff_x22);
        unaff_x23 = unaff_x22;
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12c9c0();
        _objc_release(unaff_x23);
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      uVar6 = 0;
      lVar7 = 0x10;
      lVar1 = lVar8;
      puVar5 = &uStack_120;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (lVar1 != 0);
  }
  _objc_release(lVar8);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271f5c8);
  *(undefined8 *)(param_1 + _DAT_11271f5c8) = 0;
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_1051f99a8;
  lStack_160 = unaff_x24;
  uStack_158 = unaff_x23;
  uStack_150 = unaff_x22;
  uStack_148 = unaff_x21;
  lStack_140 = lVar8;
  lStack_138 = param_1;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  _objc_retain(lVar7);
  func_0x00010bef7700(puVar5);
  if ((uVar6 & 1) == 0) {
    uVar3 = uVar2;
    func_0x00010c29bf00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16d4a0();
    _objc_release(uVar3);
    puVar4 = (undefined1 *)puVar5;
    func_0x00010c29bf00(puVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c29bf00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar4);
    _objc_release(uVar3);
    _objc_release(puVar4);
    func_0x00010bf77e80(uVar2);
    if (lVar7 != 0) {
      (**(code **)(lVar7 + 0x10))(lVar7);
    }
  }
  else {
    _objc_initWeak(auStack_168,uVar2);
    _objc_initWeak(auStack_170,puVar5);
    uVar3 = uVar2;
    func_0x00010c29bf00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined1 *)puVar5;
    func_0x00010c29bf00(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_180,auStack_168);
    _objc_copyWeak(auStack_178,auStack_170);
    _objc_retain(lVar7);
    func_0x00010becf3e0(uVar2);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(lVar7);
    _objc_destroyWeak(auStack_178);
    _objc_destroyWeak(auStack_180);
    _objc_destroyWeak(auStack_170);
    _objc_destroyWeak(auStack_168);
  }
  _objc_release(lVar7);
  _objc_release(puVar5);
  return;
}



/* Entry: 1051f99a8; end: 1051f9bbb; -[SCContextScrollableModalViewController presentInViewController:animated:completion:] */

void FUN_1051f99a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010bef7700(param_3);
  if ((param_4 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16d4a0();
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x00010bf77e80(param_1);
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5);
    }
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    _objc_initWeak(auStack_50,param_3);
    uVar1 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_48);
    _objc_copyWeak(auStack_58,auStack_50);
    _objc_retain(param_5);
    func_0x00010becf3e0(param_1);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1051f9bbc; end: 1051f9c2f;  */

void FUN_1051f9bbc(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != 0) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (lVar1 != 0) {
      lVar2 = param_1 + 0x30;
      _objc_loadWeakRetained();
      if (lVar2 != 0) {
        func_0x00010bf77e80(lVar1);
        if (*(long *)(param_1 + 0x20) != 0) {
          (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
        }
      }
      _objc_release(lVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1051f9c30; end: 1051f9da3; -[SCContextScrollableModalViewController dismissAnimated:exitEvent:completion:] */

void FUN_1051f9c30(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_5);
  if ((param_3 & 1) == 0) {
    func_0x00010be16e00(param_1);
  }
  else {
    func_0x00010bed1280(param_1);
    _objc_initWeak(auStack_58,param_1);
    uVar1 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_68,auStack_58);
    uStack_60 = param_4;
    _objc_retain(param_5);
    func_0x00010becf3e0(param_1);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  return;
}



/* Entry: 1051f9da4; end: 1051f9df3;  */

void FUN_1051f9da4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be16e00();
  _objc_release(lVar1);
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001051f9de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1051f9df4; end: 1051fa08f; -[SCContextScrollableModalViewController _transitionWithViewController:presenting:view:containerView:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f9df4(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  ,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined1 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_4 == 0) {
    *(undefined1 *)(param_1 + _DAT_11271f5e4) = 1;
  }
  else {
    func_0x00010bf20c00(param_6);
    func_0x00010c19f0e0(param_5);
    func_0x00010c16d4a0(param_5);
    func_0x00010befbb60(param_6);
    func_0x00010bedba80(param_1);
    func_0x00010bea8ae0(*(undefined8 *)(param_1 + _DAT_11271f5e0),param_1);
  }
  puVar1 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UISpringTimingParameters_1126b6230;
  _objc_alloc(PTR__OBJC_CLASS___UISpringTimingParameters_1126b6230);
  func_0x00010c008200(0x3fee666666666666,0,0);
  func_0x00010c00eb20(0x3fd851eb851eb852);
  lVar4 = (long)_DAT_11271f5ec;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_initWeak(auStack_78,param_1);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1051fa090;
  puStack_90 = &UNK_11084ceb8;
  _objc_copyWeak(auStack_88,auStack_78);
  uStack_80 = (char)param_4;
  func_0x00010bef6cc0(uVar3);
  _objc_initWeak(auStack_b0,param_5);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  _objc_retain(param_7);
  _objc_copyWeak(auStack_c8,auStack_78);
  uStack_b8 = (char)param_4;
  _objc_copyWeak(auStack_c0,auStack_b0);
  func_0x00010bef78c0(uVar3);
  func_0x00010c24dc40(*(undefined8 *)(param_1 + lVar4));
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_c8);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1051fa090; end: 1051fa16f;  */

void FUN_1051fa090(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    lVar1 = 0x1c;
    if (*(char *)(param_1 + 0x28) == '\0') {
      lVar1 = 0x2c;
    }
    func_0x00010bea8ae0(*(undefined8 *)(lVar2 + *(int *)(&DAT_11271f5b4 + lVar1)),lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1051fa170; end: 1051fa1f3; -[SCContextScrollableModalViewController _finishDismissing:] */

void FUN_1051fa170(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bed1280();
  func_0x00010c2a6740(param_1,param_2,0);
  uVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(uVar1);
  func_0x00010c12c8e0(param_1);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cfce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051fa1f4; end: 1051fa25f; -[SCContextScrollableModalViewController sloppedPointInside:] */

/* WARNING: Possible PIC construction at 0x0001051fa220: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001051fa224) */
/* WARNING: Removing unreachable block (ram,0x0001051fa23c) */
/* WARNING: Removing unreachable block (ram,0x0001051fa228) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051fa1f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c102b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271f5cc),PTR_s_pointInside_withEvent__11261e4e8,0);
  return;
}



/* Entry: 1051fa260; end: 1051fa263; -[SCContextScrollableModalViewController updateProgress:isDismissing:] */

void FUN_1051fa260(void)

{
  return;
}



/* Entry: 1051fa264; end: 1051fa2a7; -[SCContextScrollableModalViewController dealloc] */

void FUN_1051fa264(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bed1280();
  puStack_28 = PTR_PTR_1126e6e48;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1051fa2a8; end: 1051fa2b7; -[SCContextScrollableModalViewController peekAmount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1051fa2a8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271f5b4);
}



/* Entry: 1051fa2b8; end: 1051fa2d7; -[SCContextScrollableModalViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051fa2b8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271f5fc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051fa2d8; end: 1051fa2eb; -[SCContextScrollableModalViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051fa2d8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271f5fc,param_3);
  return;
}



/* Entry: 1051fa2ec; end: 1051fa2fb; -[SCContextScrollableModalViewController isExpanded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1051fa2ec(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11271f5e8);
}



/* Entry: 1051fa2fc; end: 1051fa397; -[SCContextScrollableModalViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051fa2fc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271f5fc);
  _objc_storeStrong(param_1 + _DAT_11271f5f4,0);
  _objc_storeStrong(param_1 + _DAT_11271f5ec,0);
  _objc_storeStrong(param_1 + _DAT_11271f5c4,0);
  _objc_storeStrong(param_1 + _DAT_11271f5c8,0);
  _objc_storeStrong(param_1 + _DAT_11271f5bc,0);
  _objc_storeStrong(param_1 + _DAT_11271f5c0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271f5cc,0);
  return;
}



/* Entry: 1051fa398; end: 1051fa573; -[SCContextTappableElementsCardsViewController initWithAction:targetViewController:embeddedContextCardsProvider:interopProvider:actionHandler:circumstanceEngine:sessionParams:logger:appStartExperimentReader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1051fa398(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126e6e50;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11271f600;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11271f604;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11271f608,param_4);
    lVar3 = (long)_DAT_11271f60c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11271f610;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11271f614;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11271f618;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_10;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11271f61c;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_11;
    _objc_release(uVar2);
    func_0x00010c189400(puVar1);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1051fa574; end: 1051faef7; -[SCContextTappableElementsCardsViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051fa574(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  undefined *puVar22;
  long lVar23;
  long lVar24;
  undefined *puVar25;
  undefined *puVar26;
  long lVar27;
  long lVar28;
  undefined *puVar29;
  undefined *puVar30;
  int iVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  double dVar39;
  double dVar40;
  undefined1 auStack_220 [48];
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  long lStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_f0 = PTR_PTR_1126e6e50;
  lStack_f8 = param_1;
  _objc_msgSendSuper2(&lStack_f8,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  func_0x00010c219b60();
  lVar37 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar37);
  puVar2 = PTR_PTR_1126b6238;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar38 = (long)_DAT_11271f620;
  uVar32 = *(undefined8 *)(param_1 + lVar38);
  *(undefined **)(param_1 + lVar38) = puVar2;
  _objc_release(uVar32);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar38));
  func_0x00010befbb60(puVar1);
  uVar32 = *(undefined8 *)(param_1 + lVar38);
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(uVar32);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11271f614);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11271f60c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = param_1 + _DAT_11271f608;
  _objc_loadWeakRetained(lVar37);
  uVar32 = uVar4;
  func_0x00010bf55f60();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = (long)_DAT_11271f624;
  uVar33 = *(undefined8 *)(param_1 + lVar36);
  *(undefined8 *)(param_1 + lVar36) = uVar32;
  _objc_release(uVar33);
  _objc_release(lVar37);
  _objc_release(uVar4);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar36));
  func_0x00010befbb60(puVar1);
  uVar4 = *(undefined8 *)(param_1 + lVar36);
  lVar36 = (long)_DAT_11271f628;
  _objc_retain(uVar4);
  uVar32 = *(undefined8 *)(param_1 + lVar36);
  *(undefined8 *)(param_1 + lVar36) = uVar4;
  _objc_release(uVar32);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar36));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar36));
  puVar2 = PTR_PTR_1126b6240;
  _objc_alloc();
  func_0x00010c04ea80();
  lVar37 = (long)_DAT_11271f62c;
  uVar32 = *(undefined8 *)(param_1 + lVar37);
  *(undefined **)(param_1 + lVar37) = puVar2;
  _objc_release(uVar32);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar37));
  func_0x00010befbb60(puVar1);
  uVar5 = *(undefined8 *)(param_1 + lVar36);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar38);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar5;
  func_0x00010bf493c0(0xc014000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar36);
  uStack_90 = uVar32;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar36);
  uStack_88 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  func_0x00010bf1ff80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar33 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar36);
  uStack_80 = uVar33;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar1;
  func_0x00010c2793a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar13;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = *(undefined8 *)(param_1 + _DAT_11271f630);
  *(undefined **)(param_1 + _DAT_11271f630) = puVar25;
  _objc_release(uVar34);
  _objc_release(uVar13);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(uVar33);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(uVar7);
  _objc_release(uVar32);
  _objc_release(uVar6);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + lVar37);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar38);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  dVar39 = 15.0;
  uVar4 = uVar5;
  func_0x00010bf493c0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar37);
  uStack_b0 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar37);
  uStack_a8 = uVar32;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  func_0x00010bf1ff80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar33 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar37);
  uStack_a0 = uVar33;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar1;
  func_0x00010c2793a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_98 = uVar13;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = (long)_DAT_11271f634;
  uVar34 = *(undefined8 *)(param_1 + lVar35);
  *(undefined **)(param_1 + lVar35) = puVar25;
  _objc_release(uVar34);
  _objc_release(uVar13);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(uVar33);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(uVar32);
  _objc_release(puVar2);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(uVar5);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar33 = *(undefined8 *)(param_1 + lVar38);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar33;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar38);
  uStack_e8 = uVar32;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar1;
  uStack_e0 = uVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = lVar16;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar1;
  puStack_d8 = puVar17;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar19;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar18;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar1;
  puStack_d0 = puVar21;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar23;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar22;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar1;
  puStack_c8 = puVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar36 = lVar37;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar1;
  puStack_c0 = puVar25;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar27;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar26;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_b8 = puVar29;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar30);
  _objc_release(puVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(lVar36);
  _objc_release(lVar37);
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(lVar38);
  _objc_release(lVar16);
  _objc_release(puVar15);
  _objc_release(uVar4);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(uVar32);
  _objc_release(puVar12);
  _objc_release(uVar33);
  iVar31 = (int)*(undefined8 *)(param_1 + lVar35);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puStack_1e8 = PTR_PTR_1126e6e50;
  puStack_1f0 = puVar1;
  _objc_msgSendSuper2(&puStack_1f0,PTR_s_updateProgress_isDismissing__11267fd78);
  if (dVar39 <= 0.0) {
    dVar39 = 0.0;
  }
  dVar40 = 1.0;
  if (dVar39 <= 1.0) {
    dVar40 = dVar39;
  }
  dVar39 = 0.0;
  if (iVar31 == 0) {
    dVar39 = 1.0 - dVar40;
  }
  lVar37 = (long)_DAT_11271f620;
  func_0x00010c1677c0(dVar39,*(undefined8 *)(puVar1 + lVar37));
  _CGAffineTransformMakeTranslation(auStack_220,0,dVar40 * 60.0);
  func_0x00010c219960(*(undefined8 *)(puVar1 + lVar37));
  return;
}



/* Entry: 1051faef8; end: 1051fafab; -[SCContextTappableElementsCardsViewController updateProgress:isDismissing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051faef8(double param_1,long param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_70 [48];
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e6e50;
  lStack_40 = param_2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_updateProgress_isDismissing__11267fd78);
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  dVar3 = 1.0;
  if (param_1 <= 1.0) {
    dVar3 = param_1;
  }
  dVar2 = 0.0;
  if (param_4 == 0) {
    dVar2 = 1.0 - dVar3;
  }
  lVar1 = (long)_DAT_11271f620;
  func_0x00010c1677c0(dVar2,*(undefined8 *)(param_2 + lVar1));
  _CGAffineTransformMakeTranslation(auStack_70,0,dVar3 * 60.0);
  func_0x00010c219960(*(undefined8 *)(param_2 + lVar1));
  return;
}



/* Entry: 1051fafac; end: 1051fb073; -[SCContextTappableElementsCardsViewController setHasLoaded:animated:] */

/* WARNING: Possible PIC construction at 0x0001051fb04c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001051fb050) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051fafac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11271f638;
  if ((uint)*(byte *)(param_1 + lVar1) == (uint)param_3) {
    return;
  }
  if ((uint)param_3 == 0) {
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                        *(undefined8 *)(param_1 + _DAT_11271f634));
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  }
  else {
    func_0x00010bf65be0();
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  }
  *(char *)(param_1 + lVar1) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271f62c),PTR_s_setHidden__1126479f8,param_3);
  return;
}



/* Entry: 1051fb074; end: 1051fb083; -[SCContextTappableElementsCardsViewController _dismiss] */

void FUN_1051fb074(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf831d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissAnimated_exitEvent_comple_1125be618,1,0x11,0);
  return;
}



/* Entry: 1051fb084; end: 1051fb08b; -[SCContextTappableElementsCardsViewController pageViewName] */

undefined8 FUN_1051fb084(void)

{
  return 0x3e;
}



/* Entry: 1051fb08c; end: 1051fb0f3; -[SCContextTappableElementsCardsViewController embeddedContextCards:didFinishLoadingWithResult:onRetry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051fb08c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  if (param_4 != 2) {
    func_0x00010c20eaa0(*(undefined8 *)(param_1 + _DAT_11271f62c),param_2,1);
  }
  func_0x00010c1a6340(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be55ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logMenuPresentWithResult_onRetr_112573150,param_4,param_5);
  return;
}



/* Entry: 1051fb0f4; end: 1051fb1af; -[SCContextTappableElementsCardsViewController embeddedContextCards:willLoadViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051fb0f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar4 = (long)_DAT_11271f600;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  _objc_retain(param_4);
  func_0x00010bf31ca0(uVar3);
  func_0x00010c0df760(puVar1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c086560(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010bfad9e0(param_4,param_2,puVar1,uVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1051fb1b0; end: 1051fb1b7; -[SCContextTappableElementsCardsViewController pageabilityForRelativePosition:navigationStyle:swipeDirection:gestureRecognizer:] */

undefined8 FUN_1051fb1b0(void)

{
  return 1;
}



/* Entry: 1051fb1b8; end: 1051fb273; -[SCContextTappableElementsCardsViewController _logMenuPresentWithResult:onRetry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051fb1b8(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((param_3 == 0) && ((param_4 & 1) != 0)) {
    return;
  }
  lVar5 = (long)_DAT_11271f618;
  func_0x00010c0a2a00(*(undefined8 *)(param_1 + lVar5));
  uVar6 = *(undefined8 *)(param_1 + lVar5);
  lVar5 = (long)_DAT_11271f610;
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010beeed40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4eae0();
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010beeed40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf4eb00();
  func_0x00010c0a3ec0(uVar6,param_2,5,5,uVar2,uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051fb274; end: 1051fb283; -[SCContextTappableElementsCardsViewController action] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1051fb274(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271f600);
}



/* Entry: 1051fb284; end: 1051fb37f; -[SCContextTappableElementsCardsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051fb284(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271f634,0);
  _objc_storeStrong(param_1 + _DAT_11271f630,0);
  _objc_storeStrong(param_1 + _DAT_11271f61c,0);
  _objc_storeStrong(param_1 + _DAT_11271f618,0);
  _objc_destroyWeak(param_1 + _DAT_11271f608);
  _objc_storeStrong(param_1 + _DAT_11271f620,0);
  _objc_storeStrong(param_1 + _DAT_11271f62c,0);
  _objc_storeStrong(param_1 + _DAT_11271f628,0);
  _objc_storeStrong(param_1 + _DAT_11271f624,0);
  _objc_storeStrong(param_1 + _DAT_11271f60c,0);
  _objc_storeStrong(param_1 + _DAT_11271f614,0);
  _objc_storeStrong(param_1 + _DAT_11271f610,0);
  _objc_storeStrong(param_1 + _DAT_11271f604,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271f600,0);
  return;
}



/* Entry: 1051fb380; end: 1051fb40b;  */

void FUN_1051fb380(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b6248;
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161fe0();
  _objc_release(param_1);
  func_0x00010c179660(puVar1);
  func_0x00010c1619e0(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1051fb40c; end: 1051fb6f7; -[SCContextTappableElementsViewController initWithSessionParams:userSession:circumstanceEngine:featureSettingsService:logger:embeddedContextCardsProvider:interopProvider:actionHandlerDelegate:actionHandler:musicContentRestrictionServices:appStartExperimentReader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1051fb40c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
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
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126e6e58;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11271f63c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271f640;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271f644;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271f648;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271f64c;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271f650;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271f654;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11271f658,param_10);
    lVar4 = (long)_DAT_11271f65c;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_11;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271f660;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_12;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271f664;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_13;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b6250;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar4 = (long)_DAT_11271f668;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar3;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar4));
  }
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



/* Entry: 1051fb6f8; end: 1051fb707; -[SCContextTappableElementsViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051fb6f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + _DAT_11271f668));
  return;
}



/* Entry: 1051fb708; end: 1051fc1ef; -[SCContextTappableElementsViewController tappableElementsView:didSelectAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051fb708(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  _objc_retain(param_4);
  func_0x00010c0aa280(*(undefined8 *)(param_1 + _DAT_11271f64c));
  lVar1 = param_1;
  func_0x00010be16b80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) goto LAB_1051fbb04;
  lVar2 = lVar1;
  func_0x00010c27f040();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0f1880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    puVar4 = *(undefined **)(param_1 + _DAT_11271f63c);
    func_0x0001084365e0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_4;
    func_0x00010bf31ca0();
    if ((int)uVar11 == 0x23) {
      puVar6 = PTR_PTR_1126b5b00;
      func_0x00010c0cb140(PTR_PTR_1126b5b00);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126b6258;
      func_0x00010c0cb140(PTR_PTR_1126b6258);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar4;
      func_0x00010c1032e0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar10;
      func_0x00010c1032c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      _objc_release(puVar9);
      uVar11 = param_4;
      func_0x00010c086560(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1deac0(puVar7);
      _objc_release(uVar11);
      func_0x00010c1deae0(puVar7);
      func_0x00010c1dea20(puVar6);
      puVar9 = PTR_PTR_1126b5c68;
      func_0x00010c1031c0(PTR_PTR_1126b5c68);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = param_4;
      func_0x00010c086560(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      FUN_1051fb380(puVar9,0x23,uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c76a0(puVar6);
      _objc_release(puVar10);
      _objc_release(uVar11);
      _objc_release(puVar9);
      func_0x00010be31ac0(param_1);
LAB_1051fb910:
      _objc_release(puVar8);
LAB_1051fbae4:
      _objc_release(puVar7);
    }
    else {
      uVar11 = param_4;
      func_0x00010bf31ca0();
      uVar5 = param_4;
      if ((int)uVar11 != 0x28) {
        uVar11 = param_4;
        func_0x00010bf31ca0();
        if ((int)uVar11 == 0x4f) {
          puVar6 = PTR_PTR_1126b5b00;
          func_0x00010c0cb140(PTR_PTR_1126b5b00);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR_PTR_1126b6268;
          func_0x00010c0cb140(PTR_PTR_1126b6268);
          _objc_retainAutoreleasedReturnValue();
          uVar11 = param_4;
          func_0x00010c086560(param_4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1fef20(puVar7);
          _objc_release(uVar11);
          func_0x00010c1fef40(puVar6);
          puVar8 = PTR_PTR_1126b5c68;
          func_0x00010c22b400(PTR_PTR_1126b5c68);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c086560(param_4);
          _objc_retainAutoreleasedReturnValue();
          uVar11 = 0x4f;
          goto LAB_1051fba98;
        }
        uVar11 = param_4;
        func_0x00010bf31ca0();
        if ((int)uVar11 == 0x4c) {
          puVar6 = PTR_PTR_1126b5b00;
          func_0x00010c0cb140(PTR_PTR_1126b5b00);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR_PTR_1126b6270;
          func_0x00010c0cb140(PTR_PTR_1126b6270);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c204dc0(puVar6);
          _objc_release(puVar8);
          puVar8 = PTR_PTR_1126b5c68;
          func_0x00010c241e60(PTR_PTR_1126b5c68);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c086560(param_4);
          _objc_retainAutoreleasedReturnValue();
          uVar11 = 0x4c;
          goto LAB_1051fb9a0;
        }
        uVar11 = param_4;
        func_0x00010bf31ca0();
        if ((int)uVar11 == 0x43) {
          puVar6 = PTR_PTR_1126b5b00;
          func_0x00010c0cb140(PTR_PTR_1126b5b00);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR_PTR_1126b5c68;
          func_0x00010c118660(PTR_PTR_1126b5c68);
          _objc_retainAutoreleasedReturnValue();
          uVar11 = param_4;
          func_0x00010c086560(param_4);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar8;
          FUN_1051fb380(puVar8,0x43,uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1c76a0(puVar6);
          _objc_release(puVar7);
          _objc_release(uVar11);
          _objc_release(puVar8);
          puVar8 = PTR_PTR_1126b5c18;
          func_0x00010c0cb140(PTR_PTR_1126b5c18);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1e4dc0(puVar6);
          goto LAB_1051fb9d0;
        }
        uVar11 = param_4;
        func_0x00010bf31ca0();
        if ((int)uVar11 == 0x48) {
          puVar6 = PTR_PTR_1126b5b00;
          func_0x00010c0cb140(PTR_PTR_1126b5b00);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR_PTR_1126b5c20;
          func_0x00010c0cb140(PTR_PTR_1126b5c20);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          uVar11 = param_4;
          func_0x00010c086560(param_4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf0a100(puVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c21d520(puVar7);
          _objc_release(puVar8);
          _objc_release(uVar11);
          func_0x00010c21b000(puVar6);
          puVar8 = PTR_PTR_1126b5c68;
          func_0x00010bf5b960(PTR_PTR_1126b5c68);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c086560(param_4);
          _objc_retainAutoreleasedReturnValue();
          uVar11 = 0x48;
LAB_1051fba98:
          puVar9 = puVar8;
          FUN_1051fb380(puVar8,uVar11,uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1c76a0(puVar6);
          _objc_release(puVar9);
          _objc_release(uVar5);
          _objc_release(puVar8);
        }
        else {
          uVar11 = param_4;
          func_0x00010bf31ca0();
          if ((int)uVar11 == 0x50) {
            puVar6 = PTR_PTR_1126b5b00;
            func_0x00010c0cb140(PTR_PTR_1126b5b00);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR_PTR_1126b5c20;
            func_0x00010c0cb140(PTR_PTR_1126b5c20);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            uVar11 = param_4;
            func_0x00010c086560(param_4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf0a100(puVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c21d520(puVar7);
            _objc_release(puVar8);
            _objc_release(uVar11);
            func_0x00010c21b000(puVar6);
            puVar8 = PTR_PTR_1126b5c68;
            func_0x00010bfc0ee0(PTR_PTR_1126b5c68);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c086560(param_4);
            _objc_retainAutoreleasedReturnValue();
            uVar11 = 0x50;
            goto LAB_1051fba98;
          }
          uVar11 = param_4;
          func_0x00010bf31ca0();
          if ((int)uVar11 != 1) {
            uVar11 = param_4;
            func_0x00010bf31ca0();
            if ((int)uVar11 == 0x4d) {
              puVar6 = PTR_PTR_1126b5b00;
              func_0x00010c0cb140(PTR_PTR_1126b5b00);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = PTR_PTR_1126b5c20;
              func_0x00010c0cb140(PTR_PTR_1126b5c20);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              uVar11 = param_4;
              func_0x00010c086560();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c14de00();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar11);
              puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
              func_0x00010bf0a100(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c21d520(puVar7);
              _objc_release(puVar9);
              func_0x00010c21b000(puVar6);
              puVar9 = PTR_PTR_1126b5c68;
              func_0x00010bf0cb60(PTR_PTR_1126b5c68);
              _objc_retainAutoreleasedReturnValue();
              uVar11 = param_4;
              func_0x00010c086560(param_4);
              _objc_retainAutoreleasedReturnValue();
              puVar10 = puVar9;
              FUN_1051fb380(puVar9,0x4d,uVar11);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1c76a0(puVar6);
              _objc_release(puVar10);
              _objc_release(uVar11);
              _objc_release(puVar9);
              func_0x00010be31ac0(param_1);
              goto LAB_1051fb910;
            }
LAB_1051fc140:
            puVar6 = PTR_PTR_1126b6280;
            _objc_alloc(PTR_PTR_1126b6280);
            func_0x00010bff0000();
            func_0x00010c18b5e0();
            _objc_storeWeak(param_1 + _DAT_11271f66c,puVar6);
            func_0x00010bf6b020(param_1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c269a20();
            _objc_release(param_1);
            func_0x00010c10c7e0(puVar6);
            goto LAB_1051fbaec;
          }
          puVar8 = puVar4;
          func_0x00010c091b80();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar8;
          func_0x00010c2698c0();
          if (puVar6 == (undefined *)0x0) {
            _objc_release(puVar8);
            goto LAB_1051fc140;
          }
          uVar11 = param_4;
          func_0x00010c086560();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar4;
          func_0x00010c091b80();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010c2698a0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar7;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar9;
          func_0x00010c086560();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar11;
          func_0x00010c0720c0();
          _objc_release(puVar10);
          _objc_release(puVar9);
          _objc_release(puVar7);
          _objc_release(puVar6);
          _objc_release(uVar11);
          _objc_release(puVar8);
          if ((int)uVar5 == 0) goto LAB_1051fc140;
          puVar6 = PTR_PTR_1126b5b00;
          func_0x00010c0cb140(PTR_PTR_1126b5b00);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR_PTR_1126b6278;
          func_0x00010c0cb140(PTR_PTR_1126b6278);
          _objc_retainAutoreleasedReturnValue();
          uVar11 = param_4;
          func_0x00010c086560(param_4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c21afe0(puVar7);
          _objc_release(uVar11);
          puVar8 = PTR_PTR_1126b5c68;
          func_0x00010bf0cb60(PTR_PTR_1126b5c68);
          _objc_retainAutoreleasedReturnValue();
          uVar11 = param_4;
          func_0x00010c086560(param_4);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          FUN_1051fb380(puVar8,1,uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1c76a0(puVar6);
          _objc_release(puVar9);
          _objc_release(uVar11);
          _objc_release(puVar8);
          func_0x00010c1bd040(puVar6);
        }
        func_0x00010be31ac0(param_1);
        goto LAB_1051fbae4;
      }
      puVar6 = PTR_PTR_1126b5b00;
      func_0x00010c0cb140(PTR_PTR_1126b5b00);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126b6260;
      func_0x00010c0cb140(PTR_PTR_1126b6260);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e6600(puVar6);
      _objc_release(puVar8);
      puVar8 = PTR_PTR_1126b5c68;
      func_0x00010c11dc00(PTR_PTR_1126b5c68);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c086560(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = 0x28;
LAB_1051fb9a0:
      puVar7 = puVar8;
      FUN_1051fb380(puVar8,uVar11,uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c76a0(puVar6);
      _objc_release(puVar7);
      _objc_release(uVar5);
LAB_1051fb9d0:
      _objc_release(puVar8);
      func_0x00010be31ac0(param_1);
    }
LAB_1051fbaec:
    _objc_release(puVar6);
    _objc_release(puVar4);
  }
  _objc_release(lVar3);
LAB_1051fbb04:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1051fc1f0; end: 1051fc42b; -[SCContextTappableElementsViewController _handleTapActionWithAction:actionOverride:operaViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051fc1f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b6038;
  _objc_alloc(PTR_PTR_1126b6038);
  lVar6 = (long)_DAT_11271f654;
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010beeed40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4eae0();
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010beeed40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4eb00();
  func_0x00010bff0a60(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar4 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c269a20();
  _objc_release(lVar4);
  _objc_initWeak(auStack_68,param_1);
  lVar5 = (long)_DAT_11271f670;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010bf544e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = uVar2;
    _objc_release(uVar3);
    lVar4 = param_1 + _DAT_11271f658;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar5));
    _objc_release(lVar4);
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  func_0x00010bfd0040(lVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1051fc42c; end: 1051fc49b;  */

void FUN_1051fc42c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c269a00(lVar2,param_2,lVar3,*(undefined8 *)(param_1 + 0x20));
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1051fc49c; end: 1051fc5cb; -[SCContextTappableElementsViewController _dismissCards:exitEvent:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051fc49c(long param_1)

{
  long lVar1;
  long in_x4;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(in_x4);
  lVar2 = (long)_DAT_11271f66c;
  lVar1 = param_1 + lVar2;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    if (in_x4 != 0) {
      (**(code **)(in_x4 + 0x10))(in_x4);
    }
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    param_1 = param_1 + lVar2;
    _objc_loadWeakRetained(param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(in_x4);
    func_0x00010bf831c0(param_1);
    _objc_release(param_1);
    _objc_release(in_x4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(in_x4);
  return;
}



/* Entry: 1051fc5cc; end: 1051fc61f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051fc5cc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _objc_storeWeak(lVar1 + _DAT_11271f66c,0);
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1051fc620; end: 1051fc6bb; -[SCContextTappableElementsViewController _findOperaControllingViewController] */

void FUN_1051fc620(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010c0f3ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_DAT_1126a4f48;
  do {
    PTR_DAT_1126a4f48 = puVar1;
    if (param_1 == 0) {
LAB_1051fc6a8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
      return;
    }
    _objc_retain(param_1);
    lVar2 = param_1;
    func_0x00010010fab4(param_1,puVar1);
    lVar3 = param_1;
    if ((int)lVar2 == 0) {
      lVar3 = 0;
    }
    _objc_retain(lVar3);
    _objc_release(param_1);
    if ((int)lVar2 != 0) {
      _objc_release();
      goto LAB_1051fc6a8;
    }
    lVar3 = param_1;
    func_0x00010c0f3ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    param_1 = lVar3;
    puVar1 = PTR_DAT_1126a4f48;
  } while( true );
}



/* Entry: 1051fc6bc; end: 1051fc7a7; -[SCContextTappableElementsViewController modalViewControllerDidDismiss:exitEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051fc6bc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11271f66c;
  _objc_retain(param_3);
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  _objc_release(param_3);
  _objc_release(lVar1);
  if (lVar1 != param_3) {
    return;
  }
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010beedca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_storeWeak(param_1 + lVar3,0);
  func_0x00010c0a3ea0(*(undefined8 *)(param_1 + _DAT_11271f64c));
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c269a00();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1051fc7a8; end: 1051fcaa3; -[SCContextTappableElementsViewController setTappableElements:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051fc7a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271f674);
  *(undefined8 *)(param_1 + _DAT_11271f674) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11271f668);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x1051fc8bc;
  puStack_50 = &UNK_110870088;
  uVar2 = param_3;
  lStack_48 = param_1;
  func_0x00010bfaea20(param_3,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bdf48c0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf48a0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf47be0(uVar3,param_2,uVar2,lVar1,param_1);
  _objc_release(param_1);
  _objc_release(lVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1051fcaa4; end: 1051fcb07; -[SCContextTappableElementsViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051fcaa4(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e6e58;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__112685438);
  func_0x00010bf2f1a0(param_1);
  lVar1 = (long)_DAT_11271f668;
  func_0x00010bf84820(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1051fcb08; end: 1051fcc73; -[SCContextTappableElementsViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051fcb08(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126e6e58;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewDidAppear__112684bd0);
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + _DAT_11271f668));
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1051fcc74;
  puStack_68 = &UNK_1108434b0;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x000100162d98("APPSTORE",&puStack_80);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(lVar2);
  lVar2 = *(long *)(param_1 + _DAT_11271f678) + 1;
  *(long *)(param_1 + _DAT_11271f678) = lVar2;
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x1051fccbc;
  puStack_98 = &UNK_110846540;
  _objc_copyWeak(auStack_90,auStack_58);
  lStack_88 = lVar2;
  func_0x000100c749e0(0x3e800000,"APPSTORE",&puStack_b0);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 1051fcc74; end: 1051fcd27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051fcc74(long param_1,undefined8 param_2)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = (long)_DAT_11271f668;
    func_0x00010c14fe20(*(undefined8 *)(param_1 + lVar1),param_2,0);
    func_0x00010c10e9a0(*(undefined8 *)(param_1 + lVar1));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051fcd28; end: 1051fcd37; -[SCContextTappableElementsViewController cancelTappableElementsActionIfNeccessary] */

void FUN_1051fcd28(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be02730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__dismissCards_exitEvent_completi_11255e368,1,0xffffffffffffffff,0);
  return;
}



/* Entry: 1051fcd38; end: 1051fcf9b; -[SCContextTappableElementsViewController tappableElementsView:tooltipForTappableElement:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051fcd38(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  _objc_retain(param_5);
  puVar1 = param_5;
  func_0x00010c27dd80();
  if ((int)puVar1 == 2) {
    puVar1 = param_5;
    func_0x00010beedca0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010bf31ca0();
    _objc_release(puVar1);
    if ((int)puVar10 == 5) {
      uVar2 = *(ulong *)(param_2 + _DAT_11271f648);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf4f540();
      _objc_release(uVar2);
      if ((uVar3 & 1) == 0) {
        puVar1 = param_5;
        func_0x00010bf06840(param_5);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar1;
        func_0x00010bf345e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2be880();
        if (param_1 < 0.1) {
LAB_1051fcecc:
          _objc_release(puVar10);
          puVar10 = (undefined *)0x0;
        }
        else {
          puVar4 = param_5;
          func_0x00010bf06840(param_5);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010bf345e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2be880();
          if (0.9 < param_1) {
LAB_1051fcebc:
            _objc_release(puVar5);
            _objc_release(puVar4);
            goto LAB_1051fcecc;
          }
          puVar6 = param_5;
          func_0x00010bf06840(param_5);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010bf345e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2beba0();
          if (param_1 < 0.15) {
            _objc_release(puVar7);
            _objc_release(puVar6);
            goto LAB_1051fcebc;
          }
          puVar8 = param_5;
          func_0x00010bf06840(param_5);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          func_0x00010bf345e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2beba0();
          _objc_release(puVar9);
          _objc_release(puVar8);
          _objc_release(puVar7);
          _objc_release(puVar6);
          _objc_release(puVar5);
          _objc_release(puVar4);
          _objc_release(puVar10);
          _objc_release(puVar1);
          if (0.85 < param_1) goto LAB_1051fcdd4;
          puVar10 = PTR_PTR_1126b09c0;
          _objc_alloc(PTR_PTR_1126b09c0);
          puVar1 = puVar10;
          func_0x00010723c958();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c051640(puVar10,param_3,puVar1,0,2);
        }
        _objc_release(puVar1);
        goto LAB_1051fcdd8;
      }
    }
  }
LAB_1051fcdd4:
  puVar10 = (undefined *)0x0;
LAB_1051fcdd8:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1051fcf9c; end: 1051fcfa3; -[SCContextTappableElementsViewController tappableElementsView:delayForTooltip:] */

undefined8 FUN_1051fcf9c(void)

{
  return 0x3ff0000000000000;
}



/* Entry: 1051fcfa4; end: 1051fcfe3; -[SCContextTappableElementsViewController tappableElementsView:didShowTooltip:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051fcfa4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271f648);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c183560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051fcfe4; end: 1051fd273; -[SCContextTappableElementsViewController _createTappableElementBlockListWithTappableElements:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051fcfe4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 unaff_x19;
  undefined *unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  undefined8 uVar10;
  undefined *unaff_x23;
  long lVar11;
  undefined8 unaff_x24;
  undefined8 *puVar12;
  long unaff_x28;
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_238 [128];
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  ulong uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined *puStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
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
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puStack_158 = puVar1;
  _objc_retain(param_3);
  puVar9 = &uStack_130;
  lVar11 = param_3;
  func_0x00010bf52a60();
  if (lVar11 != 0) {
    unaff_x28 = *plStack_120;
    lStack_150 = unaff_x28;
    lStack_148 = param_1;
    lStack_140 = param_3;
    do {
      unaff_x22 = 0;
      lStack_138 = lVar11;
      do {
        if (*plStack_120 != unaff_x28) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x24 = *(undefined8 *)(lStack_128 + unaff_x22 * 8);
        uVar2 = unaff_x24;
        func_0x00010c27dd80();
        if ((int)uVar2 == 7) {
          unaff_x23 = *(undefined **)(param_1 + _DAT_11271f63c);
          func_0x0001084365e0();
          _objc_retainAutoreleasedReturnValue();
          puVar1 = unaff_x23;
          func_0x00010c0d3a00();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar1;
          func_0x00010bfd5ba0();
          if ((int)puVar3 == 0) {
LAB_1051fd1ec:
            _objc_release(puVar1);
          }
          else {
            uVar4 = *(ulong *)(param_1 + _DAT_11271f660);
            func_0x00010bf4d340();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar4;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = unaff_x23;
            func_0x00010c0d3a00();
            _objc_retainAutoreleasedReturnValue();
            unaff_x20 = puVar3;
            func_0x00010bf4d360();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = unaff_x23;
            func_0x00010c0d3a00(unaff_x23);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar6;
            func_0x00010c277e80();
            unaff_x21 = uVar5;
            func_0x00010c06f3a0(uVar5,param_2,unaff_x20,puVar7);
            lVar11 = lStack_138;
            _objc_release(puVar6);
            _objc_release(unaff_x20);
            unaff_x28 = lStack_150;
            _objc_release(puVar3);
            param_1 = lStack_148;
            _objc_release(uVar5);
            param_3 = lStack_140;
            _objc_release(uVar4);
            _objc_release(puVar1);
            if ((unaff_x21 & 1) == 0) {
              puVar1 = PTR_PTR_1126b6288;
              _objc_alloc();
              unaff_x20 = puVar1;
              func_0x000107e48418();
              _objc_retainAutoreleasedReturnValue();
              lVar11 = lStack_138;
              func_0x00010c050820(puVar1,param_2,unaff_x24,unaff_x20);
              _objc_release(unaff_x20);
              func_0x00010befa120(puStack_158,param_2,puVar1);
              goto LAB_1051fd1ec;
            }
          }
          _objc_release(unaff_x23);
        }
        unaff_x22 = unaff_x22 + 1;
      } while (lVar11 != unaff_x22);
      puVar9 = &uStack_130;
      lVar11 = param_3;
      func_0x00010bf52a60();
      unaff_x19 = 0;
    } while (lVar11 != 0);
  }
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_168 = FUN_1051fd274;
    lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_1b0 = unaff_x28;
    lStack_1a8 = param_1;
    uStack_1a0 = unaff_x24;
    puStack_198 = unaff_x23;
    lStack_190 = unaff_x22;
    uStack_188 = unaff_x21;
    puStack_180 = unaff_x20;
    uStack_178 = unaff_x19;
    puStack_170 = &stack0xfffffffffffffff0;
    _objc_retain(puVar9);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    plStack_270 = (long *)0x0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    _objc_retain(puVar9);
    puVar8 = puVar9;
    func_0x00010bf52a60(puVar9,param_2,&uStack_280,auStack_238,0x10);
    if (puVar8 != (undefined8 *)0x0) {
      lVar11 = *plStack_270;
      do {
        puVar12 = (undefined8 *)0x0;
        do {
          if (*plStack_270 != lVar11) {
            _objc_enumerationMutation(puVar9);
          }
          uVar10 = *(undefined8 *)(lStack_278 + (long)puVar12 * 8);
          uVar2 = uVar10;
          func_0x00010c27dd80();
          if ((int)uVar2 == 7) {
            func_0x00010befa120(puVar1,param_2,uVar10);
          }
          puVar12 = (undefined8 *)((long)puVar12 + 1);
        } while (puVar8 != puVar12);
        puVar8 = puVar9;
        func_0x00010bf52a60(puVar9,param_2,&uStack_280,auStack_238,0x10);
      } while (puVar8 != (undefined8 *)0x0);
    }
    _objc_release(puVar9);
    _objc_release(puVar9);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b8) {
      ___stack_chk_fail();
      _objc_loadWeakRetained((long)puVar9 + (long)_DAT_11271f67c);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051fd274; end: 1051fd3a7; -[SCContextTappableElementsViewController _createTappaableElementNoTapListWithTappableElements:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051fd274(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar2 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        uVar4 = *(undefined8 *)(lStack_118 + lVar6 * 8);
        uVar3 = uVar4;
        func_0x00010c27dd80();
        if ((int)uVar3 == 7) {
          func_0x00010befa120(puVar1,param_2,uVar4);
        }
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_loadWeakRetained(param_3 + _DAT_11271f67c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051fd3a8; end: 1051fd3c7; -[SCContextTappableElementsViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051fd3a8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271f67c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051fd3c8; end: 1051fd3db; -[SCContextTappableElementsViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051fd3c8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271f67c,param_3);
  return;
}



/* Entry: 1051fd3dc; end: 1051fd3eb; -[SCContextTappableElementsViewController tappableElements] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1051fd3dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271f674);
}



/* Entry: 1051fd3ec; end: 1051fd4ff; -[SCContextTappableElementsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051fd3ec(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271f674,0);
  _objc_destroyWeak(param_1 + _DAT_11271f67c);
  _objc_storeStrong(param_1 + _DAT_11271f664,0);
  _objc_storeStrong(param_1 + _DAT_11271f660,0);
  _objc_destroyWeak(param_1 + _DAT_11271f66c);
  _objc_storeStrong(param_1 + _DAT_11271f668,0);
  _objc_storeStrong(param_1 + _DAT_11271f650,0);
  _objc_storeStrong(param_1 + _DAT_11271f65c,0);
  _objc_storeStrong(param_1 + _DAT_11271f670,0);
  _objc_destroyWeak(param_1 + _DAT_11271f658);
  _objc_storeStrong(param_1 + _DAT_11271f654,0);
  _objc_storeStrong(param_1 + _DAT_11271f64c,0);
  _objc_storeStrong(param_1 + _DAT_11271f648,0);
  _objc_storeStrong(param_1 + _DAT_11271f644,0);
  _objc_storeStrong(param_1 + _DAT_11271f640,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271f63c,0);
  return;
}



/* Entry: 1051fd500; end: 1051fd50b; -[SCFeatureSettingsService getContextV3TappableCaptionsTooltipShown] */

void FUN_1051fd500(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dcb578);
  return;
}



/* Entry: 1051fd50c; end: 1051fd517; -[SCFeatureSettingsService contextV3TappableCaptionsTooltipShownServerParam] */

undefined ** FUN_1051fd50c(void)

{
  return &PTR____CFConstantStringClassReference_110dcb578;
}



/* Entry: 1051fd518; end: 1051fd527; -[SCFeatureSettingsService setContextV3TappableCaptionsTooltipShown:] */

void FUN_1051fd518(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110dcb578,param_3);
  return;
}



/* Entry: 1051fd528; end: 1051fd52f; -[SCFeatureSettingsService contextv3_tappable_captions_tooltip_shown_client_value:] */

undefined * FUN_1051fd528(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 1051fd530; end: 1051fd537; -[SCFeatureSettingsService contextv3_tappable_captions_tooltip_shown_server_value:] */

void FUN_1051fd530(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1051fd538; end: 1051fd547; -[SCFeatureSettingsService contextV3TappableCaptionsTooltipShown] */

void FUN_1051fd538(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110dcb578,0);
  return;
}



/* Entry: 1051fd548; end: 1051fd90b; -[SCContextTappableElementsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051fd548(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
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
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  lVar1 = param_1;
  FUN_1051fd90c();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0f3900();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_initWeak(auStack_70,param_1);
  puVar3 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b6290;
  _objc_alloc(PTR_PTR_1126b6290);
  lVar1 = lVar2;
  func_0x00010c160280();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  FUN_1051fd980();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x0001051fd9a4();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_11271f688;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar18;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar2;
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  FUN_1051fd90c();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c069720();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  FUN_1051fd90c();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010beee580();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  FUN_1051fd90c();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010beee460();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar19 = 0;
    lVar20 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_11271f6c0;
    _objc_loadWeakRetained();
    lVar20 = param_1 + _DAT_11271f6c4;
    _objc_loadWeakRetained();
  }
  lVar17 = lVar20;
  func_0x00010bf05fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c045500(puVar4);
  _objc_release(lVar17);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar18);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar1);
  FUN_1051fd90c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar1);
  _objc_release(param_1);
  func_0x00010c18b5e0(puVar4);
  lVar1 = lVar2;
  func_0x00010c269920(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010bf8d2c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212080(puVar4);
  _objc_release(lVar5);
  _objc_release(lVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(lVar2);
  return;
}



/* Entry: 1051fd90c; end: 1051fd92f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051fd90c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11271f68c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051fd930; end: 1051fd97f;  */

void FUN_1051fd930(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf8dbc0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1051fd980; end: 1051fd9c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051fd980(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11271f680);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051fd9c8; end: 1051fdf2b; -[SCContextTappableElementsEntryPoint embeddedCardsProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051fd9c8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
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
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long lVar27;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1051fdf2c;
  puStack_90 = &UNK_11086ff68;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b6298;
  _objc_alloc(PTR_PTR_1126b6298);
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_11271f698;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar16;
  func_0x00010bf1a840();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_11271f69c;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar17;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_11271f6a0;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar18;
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uVar26 = 0;
    lVar19 = 0;
  }
  else {
    uVar26 = *(undefined8 *)(param_1 + _DAT_11271f6cc);
    _objc_retain(uVar26);
    lVar19 = param_1 + _DAT_11271f690;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar19;
  func_0x00010bf322c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_11271f6ac;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar20;
  func_0x00010beff660();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lStack_108 = 0;
    lStack_100 = 0;
    lStack_110 = 0;
  }
  else {
    lStack_100 = param_1 + _DAT_11271f6b4;
    _objc_loadWeakRetained();
    lStack_108 = param_1 + _DAT_11271f6b0;
    _objc_loadWeakRetained();
    lStack_110 = param_1 + _DAT_11271f6a4;
    _objc_loadWeakRetained();
  }
  lVar9 = param_1;
  FUN_1051fd980();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x0001051fd9a4();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = param_1 + _DAT_11271f6b8;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar21;
  func_0x00010c0fdcc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar22 = 0;
  }
  else {
    lVar22 = param_1 + _DAT_11271f6bc;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar22;
  func_0x00010c084e20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar27 = 0;
  }
  else {
    lVar27 = param_1 + _DAT_11271f6c8;
    _objc_loadWeakRetained();
  }
  lVar15 = lVar27;
  func_0x00010bf4e6e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    _objc_retain(0);
    uVar25 = 0;
    uVar23 = 0;
    lVar24 = 0;
    param_1 = 0;
  }
  else {
    uVar23 = *(undefined8 *)(param_1 + _DAT_11271f6d0);
    _objc_retain(uVar23);
    lVar24 = param_1 + _DAT_11271f6d4;
    _objc_loadWeakRetained();
    uVar25 = *(undefined8 *)(param_1 + _DAT_11271f6d8);
    _objc_retain(uVar25);
    param_1 = param_1 + _DAT_11271f6dc;
    _objc_loadWeakRetained();
  }
  func_0x00010bff7960(puVar3);
  _objc_release(param_1);
  _objc_release(uVar25);
  _objc_release(lVar24);
  _objc_release(uVar23);
  _objc_release(lVar15);
  _objc_release(lVar27);
  _objc_release(lVar14);
  _objc_release(lVar22);
  _objc_release(lVar13);
  _objc_release(lVar21);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lStack_110);
  _objc_release(lStack_108);
  _objc_release(lStack_100);
  _objc_release(lVar8);
  _objc_release(lVar20);
  _objc_release(lVar7);
  _objc_release(lVar19);
  _objc_release(uVar26);
  _objc_release(lVar6);
  _objc_release(lVar18);
  _objc_release(lVar5);
  _objc_release(lVar17);
  _objc_release(lVar4);
  _objc_release(lVar16);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1051fdf2c; end: 1051fe0ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051fdf2c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126b6218;
    _objc_alloc(PTR_PTR_1126b6218);
    lVar1 = param_1 + _DAT_11271f6a4;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c244ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_11271f6a8;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c12a480();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0492c0(puVar5,param_2,lVar2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1051fe0ac; end: 1051fe13f; -[SCContextTappableElementsEntryPoint tappableElementsViewController:willStartAction:] */

void FUN_1051fe0ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  FUN_1051fd90c(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  FUN_1051fd90c(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c269960(uVar2,param_2,param_1,param_4);
  _objc_release(param_4);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051fe140; end: 1051fe1d3; -[SCContextTappableElementsEntryPoint tappableElementsViewController:didEndAction:] */

void FUN_1051fe140(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  FUN_1051fd90c(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  FUN_1051fd90c(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c269940(uVar2,param_2,param_1,param_4);
  _objc_release(param_4);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051fe1d4; end: 1051fe31f; -[SCContextTappableElementsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051fe1d4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271f6dc);
  _objc_storeStrong(param_1 + _DAT_11271f6d8,0);
  _objc_destroyWeak(param_1 + _DAT_11271f6d4);
  _objc_storeStrong(param_1 + _DAT_11271f6d0,0);
  _objc_storeStrong(param_1 + _DAT_11271f6cc,0);
  _objc_destroyWeak(param_1 + _DAT_11271f6c8);
  _objc_destroyWeak(param_1 + _DAT_11271f6c4);
  _objc_destroyWeak(param_1 + _DAT_11271f6c0);
  _objc_destroyWeak(param_1 + _DAT_11271f6bc);
  _objc_destroyWeak(param_1 + _DAT_11271f6b8);
  _objc_destroyWeak(param_1 + _DAT_11271f6b4);
  _objc_destroyWeak(param_1 + _DAT_11271f6b0);
  _objc_destroyWeak(param_1 + _DAT_11271f6ac);
  _objc_destroyWeak(param_1 + _DAT_11271f6a8);
  _objc_destroyWeak(param_1 + _DAT_11271f6a4);
  _objc_destroyWeak(param_1 + _DAT_11271f6a0);
  _objc_destroyWeak(param_1 + _DAT_11271f69c);
  _objc_destroyWeak(param_1 + _DAT_11271f698);
  _objc_destroyWeak(param_1 + _DAT_11271f694);
  _objc_destroyWeak(param_1 + _DAT_11271f690);
  _objc_destroyWeak(param_1 + _DAT_11271f68c);
  _objc_destroyWeak(param_1 + _DAT_11271f688);
  _objc_destroyWeak(param_1 + _DAT_11271f684);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271f680);
  return;
}



/* Entry: 1051fe320; end: 1051fe403; -[SCContextTappableElementBlackoutView initWithFrame:blockMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1051fe320(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126e6e60;
  uStack_60 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_60,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11271f6e0;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    func_0x00010c16d4a0(puVar1);
    func_0x00010c219b60(puVar1);
    func_0x00010c160fc0(puVar1);
    func_0x00010beb1160(puVar1);
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 1051fe404; end: 1051fe88f; -[SCContextTappableElementBlackoutView _setupView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051fe404(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined *puVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  
  lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  _objc_release(puVar1);
  puVar2 = PTR_PTR_1126b0c40;
  func_0x00010bfe7b00(0x4038000000000000,0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c01bf60();
  lVar25 = (long)_DAT_11271f6e4;
  uVar24 = *(undefined8 *)(param_1 + lVar25);
  *(undefined **)(param_1 + lVar25) = puVar1;
  _objc_release(uVar24);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar25));
  func_0x00010befbb60(param_1);
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar26 = (long)_DAT_11271f6e8;
  uVar24 = *(undefined8 *)(param_1 + lVar26);
  *(undefined **)(param_1 + lVar26) = puVar1;
  _objc_release(uVar24);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar26));
  _objc_release(puVar1);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar26));
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar26));
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar26));
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar26));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar26));
  func_0x00010befbb60(param_1);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar26);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar3;
  func_0x00010bf49460();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar26);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar26);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar26);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar26);
  func_0x00010bf34860(uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + lVar26);
  func_0x00010bf1ff80(uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar17;
  func_0x00010bf493c0(0x4014000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar20;
  func_0x00010bf49500();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar22);
  _objc_release(uVar21);
  _objc_release(param_1);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(lVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar24);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar23) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar2 + _DAT_11271f6e0,0);
  _objc_storeStrong(puVar2 + _DAT_11271f6e4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar2 + _DAT_11271f6e8,0);
  return;
}



/* Entry: 1051fe890; end: 1051fe8df; -[SCContextTappableElementBlackoutView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051fe890(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271f6e0,0);
  _objc_storeStrong(param_1 + _DAT_11271f6e4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271f6e8,0);
  return;
}



/* Entry: 1051fe8e0; end: 1051febff; -[SCContextTappableElementOverlayButton initWithTappableElement:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1051fe8e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_b0 [48];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  puStack_78 = PTR_PTR_1126e6e68;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar9 = (long)_DAT_11271f6ec;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c27dd80();
    lVar8 = (long)_DAT_11271f6f0;
    *(bool *)((long)puVar1 + lVar8) = (int)uVar2 == 2;
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    lVar7 = (long)_DAT_11271f6f4;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(uVar2);
    _objc_release(puVar3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0x3f800000);
    _objc_release(uVar2);
    func_0x00010c1677c0(0,*(undefined8 *)((long)puVar1 + lVar7));
    _CGAffineTransformMakeRotation(auStack_b0,0x3fd65718eb895076);
    func_0x00010c219960(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010befbb60(puVar1);
    func_0x00010c160fc0(puVar1);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    func_0x00010beedca0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf31ca0();
    puVar4 = puVar1;
    func_0x00010bea1840(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(puVar1);
    _objc_release(puVar4);
    _objc_release(uVar2);
    func_0x00010c17d4c0(puVar1);
    if ((*(long *)((long)puVar1 + lVar7) == 0) || (*(char *)((long)puVar1 + lVar8) != '\x01')) {
      *(undefined1 *)((long)puVar1 + lVar8) = 0;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc_init();
      lVar7 = (long)_DAT_11271f6f8;
      uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
      *(undefined **)((long)puVar1 + lVar7) = puVar3;
      _objc_release(uVar2);
      func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar7));
      func_0x00010befbb60(puVar1);
      puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc_init(PTR__OBJC_CLASS___UIView_1126aec20);
      puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      puVar6 = puVar3;
      func_0x00010c08c0e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe740();
      _objc_release(puVar6);
      _objc_release(puVar5);
      puVar5 = puVar3;
      func_0x00010c08c0e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe800(0x3f800000);
      _objc_release(puVar5);
      uVar2 = *(undefined8 *)PTR__CGSizeZero_110347620;
      uVar10 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
      puVar5 = puVar3;
      func_0x00010c08c0e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe7a0(uVar2,uVar10);
      _objc_release(puVar5);
      func_0x00010c1c2ca0(*(undefined8 *)((long)puVar1 + lVar7));
      _objc_release(puVar3);
    }
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1051fec00; end: 1051fef4b; -[SCContextTappableElementOverlayButton layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051fec00(double param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  long lStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_1126e6e68;
  lStack_90 = param_5;
  _objc_msgSendSuper2(&lStack_90,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  uVar1 = *(undefined8 *)(param_5 + _DAT_11271f6ec);
  dVar6 = param_4;
  func_0x00010bf06840(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf525a0();
  _objc_release(uVar1);
  param_4 = param_4 * param_1;
  uVar1 = 0;
  if (param_1 <= 0.0) {
    param_4 = 0.0;
  }
  lVar5 = param_5;
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(param_4);
  _objc_release(lVar5);
  lVar5 = (long)_DAT_11271f6f8;
  dVar8 = dVar6;
  if (*(long *)(param_5 + lVar5) != 0) {
    func_0x00010c2771a0(param_5);
    uVar2 = *(undefined8 *)(param_5 + lVar5);
    func_0x00010c0bc260(uVar2);
    _objc_retainAutoreleasedReturnValue();
    dVar8 = dVar6;
    func_0x00010c19f0e0(param_4,uVar1,*(undefined8 *)(param_5 + lVar5));
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar5));
    func_0x00010c19f0e0(uVar2);
    dVar6 = dVar6 / 17.5;
    uVar1 = 0x4020000000000000;
    dVar7 = dVar6;
    if (dVar6 <= 8.0) {
      dVar7 = 8.0;
    }
    func_0x00010bf20c00(uVar2);
    _CGRectInset();
    dVar9 = param_3;
    if (dVar8 <= param_3) {
      dVar9 = dVar8;
    }
    dVar9 = dVar9 * 0.5;
    uVar3 = uVar2;
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(dVar9);
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    uVar3 = uVar2;
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf525a0();
    func_0x00010bf19a00(dVar6,uVar1,param_3,dVar8,dVar9,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    uVar1 = uVar2;
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe820();
    _objc_release(uVar1);
    _objc_release(puVar4);
    _objc_release(uVar3);
    uVar1 = uVar2;
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(dVar7);
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
  lVar5 = (long)_DAT_11271f6f4;
  uVar1 = *(undefined8 *)(param_5 + lVar5);
  func_0x00010c262ca0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar8 = dVar8 + dVar8;
  _objc_release(uVar1);
  func_0x00010c1739e0(0,0,(long)(dVar8 * 0.7142857142857143),dVar8,*(undefined8 *)(param_5 + lVar5))
  ;
  puVar4 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf199c0(0,0,(long)(dVar8 * 0.7142857142857143),dVar8,
                      PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  uVar1 = *(undefined8 *)(param_5 + lVar5);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe820();
  _objc_release(uVar1);
  _objc_release(puVar4);
  dVar8 = dVar8 / 17.5;
  if (dVar8 <= 4.0) {
    dVar8 = 4.0;
  }
  uVar1 = *(undefined8 *)(param_5 + lVar5);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe840(dVar8);
  _objc_release(uVar1);
  return;
}



/* Entry: 1051fef4c; end: 1051ff17f; -[SCContextTappableElementOverlayButton positionInBounds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051fef4c(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  
  uVar1 = *(ulong *)(param_5 + _DAT_11271f6ec);
  func_0x00010bf06840();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  dVar7 = param_1;
  _CGRectIsEmpty(param_1,param_2,param_3,param_4);
  if ((uVar2 & 1) == 0) {
    uVar2 = uVar1;
    func_0x00010c23d0a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a5040();
    if (0.0 < dVar7) {
      uVar3 = uVar1;
      func_0x00010c23d0a0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe0640();
      if (0.0 < dVar7) {
        uVar4 = uVar1;
        func_0x00010bf345e0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2be880();
        if (!NAN(dVar7)) {
          uVar5 = uVar1;
          func_0x00010bf345e0(uVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2beba0();
          dVar6 = dVar7;
          _objc_release(uVar5);
          _objc_release(uVar4);
          _objc_release(uVar3);
          _objc_release(uVar2);
          if (!NAN(dVar7)) {
            uVar2 = uVar1;
            func_0x00010c23d0a0(uVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2a5040();
            dVar8 = param_3 * dVar6;
            uVar3 = uVar1;
            func_0x00010c23d0a0(uVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfe0640();
            dVar7 = 0.0;
            func_0x00010c1739e0(0,0,dVar8,param_4 * dVar6,param_5);
            _objc_release(uVar3);
            _objc_release(uVar2);
            uVar2 = uVar1;
            func_0x00010bf345e0(uVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2be880();
            param_3 = dVar7 * param_3;
            uVar3 = uVar1;
            func_0x00010bf345e0(uVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2beba0();
            func_0x00010c17a6a0(param_1 + param_3,param_2 + dVar7 * param_4,param_5);
            _objc_release(uVar3);
            _objc_release(uVar2);
            func_0x00010c141a80(uVar1);
            _CGAffineTransformMakeRotation(&uStack_a0);
            uStack_c8 = uStack_98;
            uStack_d0 = uStack_a0;
            uStack_b8 = uStack_88;
            uStack_c0 = uStack_90;
            uStack_a8 = uStack_78;
            uStack_b0 = uStack_80;
            func_0x00010c219960(param_5,param_6,&uStack_d0);
          }
          goto LAB_1051ff154;
        }
        _objc_release(uVar4);
      }
      _objc_release(uVar3);
    }
    _objc_release(uVar2);
  }
LAB_1051ff154:
  _objc_release(uVar1);
  return;
}



/* Entry: 1051ff180; end: 1051ff273; -[SCContextTappableElementOverlayButton scheduleInitialShimmer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051ff180(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if ((*(long *)(param_1 + _DAT_11271f6f4) != 0) && ((*(byte *)(param_1 + _DAT_11271f6fc) & 1) == 0)
     ) {
    *(undefined1 *)(param_1 + _DAT_11271f6fc) = 1;
    lVar1 = 0;
    if (param_3 != 0) {
      lVar1 = param_3 + -1;
    }
    *(long *)(param_1 + _DAT_11271f700) = lVar1;
    _objc_initWeak(auStack_28);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    uStack_40 = 0x1051ff248;
    puStack_38 = &UNK_1108434b0;
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x000100c749e0(0x3f400000,"APPSTORE",&puStack_50);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 1051ff274; end: 1051ff343; -[SCContextTappableElementOverlayButton scheduleNextShimmerIfNeccessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051ff274(long param_1)

{
  long lVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  lVar1 = *(long *)(param_1 + _DAT_11271f700);
  if (lVar1 != 0) {
    *(long *)(param_1 + _DAT_11271f700) = lVar1 + -1;
    _objc_initWeak(auStack_28,param_1);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    uStack_40 = 0x1051ff318;
    puStack_38 = &UNK_1108434b0;
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x000100c749e0(0x3f000000,"APPSTORE",&puStack_50);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 1051ff344; end: 1051ff54b; -[SCContextTappableElementOverlayButton startShimmer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051ff344(double param_1,undefined8 param_2,double param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  double dStack_a0;
  undefined8 uStack_98;
  double dStack_90;
  undefined8 uStack_88;
  double dStack_80;
  undefined8 uStack_78;
  
  lVar4 = (long)_DAT_11271f6f4;
  if (*(long *)(param_5 + lVar4) != 0) {
    lVar1 = param_5;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_5 + lVar4);
      func_0x00010c262ca0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      dVar7 = param_3;
      uVar8 = param_4;
      _objc_release(uVar2);
      func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar4));
      dVar5 = param_1;
      _CGRectGetMinX(param_1,param_2,param_3,param_4);
      dVar6 = param_1;
      _CGRectGetMidY(param_1,param_2,param_3,param_4);
      func_0x00010c17a6a0(dVar5 + (dVar7 + 4.0) * -0.5,dVar6,*(undefined8 *)(param_5 + lVar4));
      func_0x00010c1677c0(0x3fc3333333333333,*(undefined8 *)(param_5 + lVar4));
      puVar3 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
      _objc_alloc(PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0);
      puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c0 = 0xc2000000;
      pcStack_b8 = FUN_1051ff54c;
      puStack_b0 = &UNK_1108700e8;
      lStack_a8 = param_5;
      dStack_a0 = param_1;
      uStack_98 = param_2;
      dStack_90 = param_3;
      uStack_88 = param_4;
      dStack_80 = dVar7;
      uStack_78 = uVar8;
      func_0x00010c00e9e0(0x3fe6666666666666,0x3fe4cccccccccccd,0,0x3fe3333333333333,
                          0x3ff0000000000000);
      _objc_initWeak(auStack_d0,param_5);
      _objc_copyWeak(auStack_d8,auStack_d0);
      func_0x00010bef78c0(puVar3);
      func_0x00010c24dc40(puVar3);
      _objc_destroyWeak(auStack_d8);
      _objc_destroyWeak(auStack_d0);
      _objc_release(puVar3);
    }
  }
  return;
}



/* Entry: 1051ff54c; end: 1051ff5b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051ff54c(long param_1)

{
  double dVar1;
  undefined8 uVar2;
  double dVar3;
  
  dVar1 = *(double *)(param_1 + 0x28);
  _CGRectGetMaxX(dVar1,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                 *(undefined8 *)(param_1 + 0x40));
  dVar3 = *(double *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _CGRectGetMidY(uVar2,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                 *(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010c17a6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar1 + (dVar3 + 4.0) * 0.5,uVar2,
             *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271f6f4),
             PTR_s_setCenter__11263c3c8);
  return;
}



/* Entry: 1051ff5b8; end: 1051ff5ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051ff5b8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c1677c0(0,*(undefined8 *)(param_1 + _DAT_11271f6f4));
    func_0x00010c1500e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051ff600; end: 1051ff65f; -[SCContextTappableElementOverlayButton action] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051ff600(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11271f6ec;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
  func_0x00010bfd3a00();
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010beedca0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf51e00();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1051ff660; end: 1051ff67f; -[SCContextTappableElementOverlayButton tappableElement] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051ff660(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + _DAT_11271f6ec));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051ff680; end: 1051ff6bf; -[SCContextTappableElementOverlayButton touchAreaRect] */

void FUN_1051ff680(void)

{
  func_0x00010bf20c00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectInset_1103475b0)();
  return;
}



/* Entry: 1051ff6c0; end: 1051ff7f7; -[SCContextTappableElementOverlayButton pointInside:withEvent:] */

bool FUN_1051ff6c0(double param_1,undefined8 param_2,double param_3,undefined8 param_4,long param_5)

{
  bool bVar1;
  int iVar2;
  long lVar4;
  double dVar5;
  double dVar6;
  long lVar3;
  
  lVar3 = param_5;
  func_0x00010c2771a0();
  iVar2 = (int)lVar3;
  _CGRectContainsPoint();
  if (iVar2 == 0) {
    return false;
  }
  lVar3 = param_5;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    lVar4 = param_5;
    func_0x00010c2a71e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf51200(param_1,param_2);
    dVar5 = param_1;
    _objc_release(lVar4);
    func_0x00010c2a71e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(param_5);
    dVar6 = dVar5;
    _CGRectGetMinX(dVar5,param_2,param_3,param_4);
    if (dVar6 + param_3 * 0.15 < param_1) {
      _CGRectGetMaxX(dVar5,param_2,param_3,param_4);
      bVar1 = param_1 < dVar5 - param_3 * 0.15;
      goto LAB_1051ff7d0;
    }
  }
  bVar1 = false;
LAB_1051ff7d0:
  _objc_release(lVar3);
  return bVar1;
}



/* Entry: 1051ff7f8; end: 1051ff8c7; -[SCContextTappableElementOverlayButton _setAccessibiilityLabel:] */

undefined ** FUN_1051ff7f8(undefined8 param_1,undefined8 param_2,int param_3)

{
  switch(param_3) {
  case 0:
    return &PTR____CFConstantStringClassReference_110db54d8;
  case 1:
    return &PTR____CFConstantStringClassReference_110dcb6d8;
  case 2:
    return &PTR____CFConstantStringClassReference_110dcb618;
  case 3:
  case 6:
  case 7:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x14:
  case 0x15:
  case 0x17:
  case 0x18:
  case 0x19:
    goto LAB_1051ff844;
  case 4:
    return &PTR____CFConstantStringClassReference_110dcb6b8;
  case 5:
    return &PTR____CFConstantStringClassReference_110dcb698;
  case 8:
    return &PTR____CFConstantStringClassReference_110dcb678;
  case 9:
    return &PTR____CFConstantStringClassReference_110dcb5d8;
  case 0xe:
    return &PTR____CFConstantStringClassReference_110dcb6f8;
  case 0xf:
    return &PTR____CFConstantStringClassReference_110dcb658;
  case 0x13:
    return &PTR____CFConstantStringClassReference_110dcb718;
  case 0x16:
    return &PTR____CFConstantStringClassReference_110dcb638;
  case 0x1a:
    return &PTR____CFConstantStringClassReference_110dcb5f8;
  default:
    if (param_3 == 0x48) {
      return &PTR____CFConstantStringClassReference_110dcb738;
    }
LAB_1051ff844:
    return &PTR____CFConstantStringClassReference_110dcb758;
  }
}



/* Entry: 1051ff8c8; end: 1051ff917; -[SCContextTappableElementOverlayButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051ff8c8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271f6f8,0);
  _objc_storeStrong(param_1 + _DAT_11271f6ec,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271f6f4,0);
  return;
}



/* Entry: 1051ff918; end: 1051ffd43; -[SCContextTappableElementsCardsDismissButton initWithFrame:] */

undefined8 * FUN_1051ff918(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126e6e70;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0x3fd3333333333333,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010c219b60(puVar1);
    puVar3 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4032000000000000);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c2a5060(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf49420(0x4042000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010bfe0660(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf49420(0x4042000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf19a00(0x4018000000000000,0,0x4008000000000000,0x402e000000000000,
                        0x3ff8000000000000,PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf19a00(0,0x4018000000000000,0x402e000000000000,0x4008000000000000,
                        0x3ff8000000000000,PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf06f40(puVar2);
    _objc_release(puVar5);
    _CGAffineTransformMakeTranslation(&uStack_90,0x401e000000000000,0x401e000000000000);
    uStack_e8 = uStack_88;
    uStack_f0 = uStack_90;
    uStack_d8 = uStack_78;
    uStack_e0 = uStack_80;
    uStack_c8 = uStack_68;
    uStack_d0 = uStack_70;
    _CGAffineTransformRotate(&uStack_c0,0x3fe921fb54442d18,&uStack_f0);
    uStack_78 = uStack_a8;
    uStack_80 = uStack_b0;
    uStack_68 = uStack_98;
    uStack_70 = uStack_a0;
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    uStack_e8 = uStack_b8;
    uStack_f0 = uStack_c0;
    uStack_d8 = uStack_a8;
    uStack_e0 = uStack_b0;
    uStack_c8 = uStack_98;
    uStack_d0 = uStack_a0;
    _CGAffineTransformTranslate(&uStack_c0,0xc01e000000000000,0xc01e000000000000,&uStack_f0);
    uStack_78 = uStack_a8;
    uStack_80 = uStack_b0;
    uStack_68 = uStack_98;
    uStack_70 = uStack_a0;
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    func_0x00010bf08a40(puVar2);
    puVar5 = PTR_PTR_1126b52f0;
    _objc_alloc_init(PTR_PTR_1126b52f0);
    func_0x00010c219b60();
    _objc_retainAutorelease(puVar2);
    func_0x00010bdc1040();
    puVar6 = puVar5;
    func_0x00010c22a660(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9820();
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar7 = puVar5;
    func_0x00010c22a660(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(puVar7);
    _objc_release(puVar6);
    func_0x00010befbb60(puVar1);
    puVar6 = puVar5;
    func_0x00010bf34860(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf34860(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf493a0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(puVar7);
    _objc_release(puVar3);
    _objc_release(puVar6);
    puVar6 = puVar5;
    func_0x00010bf348e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf348e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf493a0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(puVar7);
    _objc_release(puVar3);
    _objc_release(puVar6);
    puVar6 = puVar5;
    func_0x00010c2a5060(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf49420(0x402e000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(puVar7);
    _objc_release(puVar6);
    puVar6 = puVar5;
    func_0x00010bfe0660(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf49420(0x402e000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar2);
  }
  return puVar1;
}



/* Entry: 1051ffd44; end: 1051ffd7b; -[SCContextTappableElementsCardsDismissButton pointInside:withEvent:] */

void FUN_1051ffd44(void)

{
  func_0x00010bf20c00();
  _CGRectInset();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)();
  return;
}



/* Entry: 1051ffd7c; end: 1051ffddb; -[SCContextTappableElementsView initWithFrame:] */

undefined1 * FUN_1051ffd7c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e6e78;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c16d4a0(puVar1);
    func_0x00010c219b60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1051ffddc; end: 10520016f; -[SCContextTappableElementsView configureWithTappableElements:blockList:noTapList:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1051ffddc(long param_1,long param_2,long param_3,undefined *param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c08d180(param_1);
  lVar8 = (long)_DAT_11271f704;
  lVar11 = *(long *)(param_1 + lVar8);
  if (lVar11 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    func_0x00010bf529e0(param_3);
    func_0x00010bffc4a0();
    uVar7 = *(undefined8 *)(param_1 + lVar8);
    *(undefined **)(param_1 + lVar8) = puVar2;
    _objc_release(uVar7);
  }
  else {
    _objc_retain(lVar11);
    lVar1 = lVar11;
    func_0x00010bf52a60();
    lVar10 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar10) {
          _objc_enumerationMutation(lVar11);
        }
        func_0x00010c12c960(*(undefined8 *)(lVar9 * 8));
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      lVar1 = lVar11;
      func_0x00010bf52a60();
    }
    _objc_release(lVar11);
    func_0x00010c12adc0(*(undefined8 *)(param_1 + lVar8));
  }
  _objc_retain(param_3);
  lVar11 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar11 == 0) {
      _objc_release(param_3);
      func_0x00010c1cbe20(param_1);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
        return param_3;
      }
      ___stack_chk_fail();
      func_0x00010c269840(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_2;
      func_0x00010c071ae0();
      _objc_release(param_2);
      return lVar6;
    }
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      puVar2 = PTR_PTR_1126b62a0;
      _objc_alloc(PTR_PTR_1126b62a0);
      func_0x00010c050800();
      puVar3 = param_4;
      func_0x00010bfaea20();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = param_5;
      func_0x00010bfaea20();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf529e0();
      if (puVar4 == (undefined *)0x0) {
        lVar5 = lVar9;
        func_0x00010bf529e0();
        if (lVar5 == 0) {
          puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
          _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
          func_0x00010c050900();
          func_0x00010bef9040(puVar2);
          goto LAB_105200064;
        }
      }
      else {
        puVar4 = puVar3;
        func_0x00010bfb1920(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc6120(param_1);
LAB_105200064:
        _objc_release(puVar4);
      }
      func_0x00010befbb60(param_1);
      func_0x00010befa120(*(undefined8 *)(param_1 + lVar8));
      _objc_release(lVar9);
      _objc_release(puVar3);
      _objc_release(puVar2);
      lVar10 = lVar10 + 1;
    } while (lVar11 != lVar10);
    lVar11 = param_3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 105200170; end: 1052001b7;  */

undefined8 FUN_105200170(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c269840(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c071ae0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 1052001b8; end: 1052001c3;  */

void FUN_1052001b8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c071af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_isEqual__1125fa0c8,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1052001c4; end: 105200303; -[SCContextTappableElementsView scheduleInitialShimmers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052001c4(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
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
  lVar8 = *(long *)(param_1 + _DAT_11271f704);
  _objc_retain(lVar8);
  lVar2 = lVar8;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(lVar8);
        }
        uVar9 = *(undefined8 *)(lStack_128 + lVar11 * 8);
        uVar3 = uVar9;
        func_0x00010c269840();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c27dd80();
        _objc_release(uVar3);
        if ((int)uVar4 != 7) {
          func_0x00010c14fe00(uVar9);
        }
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = lVar8;
      puVar5 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b62a0;
  _objc_opt_class(PTR_PTR_1126b62a0);
  puVar7 = (undefined1 *)puVar5;
  _objc_opt_isKindOfClass(puVar5,puVar6);
  puVar1 = (undefined1 *)puVar5;
  if (((ulong)puVar7 & 1) == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar5);
  puVar7 = puVar1;
  func_0x00010beedca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar7 != (undefined1 *)0x0) {
    func_0x00010bf6b020(lVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010beedca0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2699a0(lVar8);
    _objc_release(puVar7);
    _objc_release(lVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105200304; end: 1052003d3; -[SCContextTappableElementsView didTapElement:] */

void FUN_105200304(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b62a0;
  _objc_opt_class(PTR_PTR_1126b62a0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar3 = uVar1;
  func_0x00010beedca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010beedca0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2699a0(param_1);
    _objc_release(uVar3);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052003d4; end: 105200523; -[SCContextTappableElementsView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052003d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_348;
  undefined8 uStack_340;
  code *pcStack_338;
  undefined *puStack_330;
  undefined **ppuStack_328;
  undefined1 auStack_320 [8];
  undefined *puStack_318;
  undefined8 uStack_310;
  code *pcStack_308;
  undefined *puStack_300;
  undefined **ppuStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  long lStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_1c8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_f8;
  undefined *puStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_f0 = PTR_PTR_1126e6e78;
  lStack_f8 = param_5;
  _objc_msgSendSuper2(&lStack_f8,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  ppuVar3 = *(undefined ***)(param_5 + _DAT_11271f704);
  _objc_retain(ppuVar3);
  ppuVar2 = ppuVar3;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (ppuVar2 != (undefined **)0x0) {
    ppuVar5 = (undefined **)0x0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(ppuVar3);
      }
      func_0x00010c104320(param_1,param_2,param_3,param_4,*(undefined8 *)((long)ppuVar5 * 8));
      ppuVar5 = (undefined **)((long)ppuVar5 + 1);
    } while (ppuVar2 != ppuVar5);
    ppuVar2 = ppuVar3;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1b0 = param_2;
  uStack_1a8 = param_1;
  func_0x00010bf84820();
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  lStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  plStack_280 = (long *)0x0;
  lVar4 = *(long *)((long)ppuVar3 + (long)_DAT_11271f704);
  _objc_retain(lVar4);
  lVar7 = lVar4;
  func_0x00010bf52a60();
  if (lVar7 != 0) {
    lVar8 = *plStack_280;
    do {
      lVar9 = 0;
      do {
        if (*plStack_280 != lVar8) {
          _objc_enumerationMutation(lVar4);
        }
        uVar6 = *(undefined8 *)(lStack_288 + lVar9 * 8);
        ppuVar2 = ppuVar3;
        func_0x00010bf6b020();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c269840(uVar6);
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = ppuVar2;
        func_0x00010c2699e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        _objc_release(ppuVar2);
        if (ppuVar5 != (undefined **)0x0) {
          func_0x00010c219b60(ppuVar5);
          func_0x00010c1677c0(0,ppuVar5);
          _CGAffineTransformMakeScale(&uStack_2c0,0x3fe0000000000000,0x3fe0000000000000);
          uStack_2e8 = uStack_2b8;
          uStack_2f0 = uStack_2c0;
          uStack_2d8 = uStack_2a8;
          uStack_2e0 = uStack_2b0;
          uStack_2c8 = uStack_298;
          uStack_2d0 = uStack_2a0;
          func_0x00010c219960(ppuVar5);
          lVar7 = (long)_DAT_11271f708;
          _objc_retain(ppuVar5);
          uVar6 = *(undefined8 *)((long)ppuVar3 + lVar7);
          *(undefined ***)((long)ppuVar3 + lVar7) = ppuVar5;
          _objc_release(uVar6);
          func_0x00010befbb60(ppuVar3);
          func_0x00010c08d180(ppuVar3);
          _objc_initWeak(&uStack_2f0,ppuVar3);
          puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
          func_0x00010bf6b020(ppuVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uStack_2a0;
          func_0x00010c269980();
          puStack_318 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_310 = 0xc2000000;
          pcStack_308 = FUN_105200814;
          puStack_300 = &UNK_110842e18;
          puStack_348 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_340 = 0xc2000000;
          pcStack_338 = FUN_105200868;
          puStack_330 = &UNK_11084b7a0;
          ppuStack_2f8 = ppuVar5;
          _objc_copyWeak(auStack_320,&uStack_2f0);
          ppuStack_328 = ppuVar5;
          func_0x00010bf03440(0x3fb999999999999a,uVar6,puVar1);
          _objc_release(ppuVar3);
          _objc_destroyWeak(auStack_320);
          _objc_destroyWeak(&uStack_2f0);
          _objc_release(ppuVar5);
          ppuVar3 = &puStack_348;
          goto LAB_1052007a0;
        }
        lVar9 = lVar9 + 1;
      } while (lVar7 != lVar9);
      lVar7 = lVar4;
      func_0x00010bf52a60();
    } while (lVar7 != 0);
  }
LAB_1052007a0:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar3 + 5);
  _objc_destroyWeak(&uStack_2f0);
  __Unwind_Resume();
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(lVar4 + 0x20));
  func_0x00010c219960(*(undefined8 *)(lVar4 + 0x20));
  return;
}



/* Entry: 105200524; end: 105200813; -[SCContextTappableElementsView presentTooltipsIfNeccessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105200524(undefined **param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  undefined **ppuStack_1e8;
  undefined1 auStack_1e0 [8];
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined **ppuStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
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
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf84820();
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  lVar4 = *(long *)((long)param_1 + (long)_DAT_11271f704);
  _objc_retain(lVar4);
  lVar6 = lVar4;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar7 = *plStack_140;
    do {
      lVar8 = 0;
      do {
        if (*plStack_140 != lVar7) {
          _objc_enumerationMutation(lVar4);
        }
        uVar5 = *(undefined8 *)(lStack_148 + lVar8 * 8);
        ppuVar2 = param_1;
        func_0x00010bf6b020();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c269840(uVar5);
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar2;
        func_0x00010c2699e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        _objc_release(ppuVar2);
        if (ppuVar3 != (undefined **)0x0) {
          func_0x00010c219b60(ppuVar3);
          func_0x00010c1677c0(0,ppuVar3);
          _CGAffineTransformMakeScale(&uStack_180,0x3fe0000000000000,0x3fe0000000000000);
          uStack_1a8 = uStack_178;
          uStack_1b0 = uStack_180;
          uStack_198 = uStack_168;
          uStack_1a0 = uStack_170;
          uStack_188 = uStack_158;
          uStack_190 = uStack_160;
          func_0x00010c219960(ppuVar3);
          lVar6 = (long)_DAT_11271f708;
          _objc_retain(ppuVar3);
          uVar5 = *(undefined8 *)((long)param_1 + lVar6);
          *(undefined ***)((long)param_1 + lVar6) = ppuVar3;
          _objc_release(uVar5);
          func_0x00010befbb60(param_1);
          func_0x00010c08d180(param_1);
          _objc_initWeak(&uStack_1b0,param_1);
          puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
          func_0x00010bf6b020(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uStack_160;
          func_0x00010c269980();
          puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_1d0 = 0xc2000000;
          pcStack_1c8 = FUN_105200814;
          puStack_1c0 = &UNK_110842e18;
          puStack_208 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_200 = 0xc2000000;
          pcStack_1f8 = FUN_105200868;
          puStack_1f0 = &UNK_11084b7a0;
          ppuStack_1b8 = ppuVar3;
          _objc_copyWeak(auStack_1e0,&uStack_1b0);
          ppuStack_1e8 = ppuVar3;
          func_0x00010bf03440(0x3fb999999999999a,uVar5,puVar1);
          _objc_release(param_1);
          _objc_destroyWeak(auStack_1e0);
          _objc_destroyWeak(&uStack_1b0);
          _objc_release(ppuVar3);
          param_1 = &puStack_208;
          goto LAB_1052007a0;
        }
        lVar8 = lVar8 + 1;
      } while (lVar6 != lVar8);
      lVar6 = lVar4;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
  }
LAB_1052007a0:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    _objc_destroyWeak(param_1 + 5);
    _objc_destroyWeak(&uStack_1b0);
    __Unwind_Resume();
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(lVar4 + 0x20));
    func_0x00010c219960(*(undefined8 *)(lVar4 + 0x20));
    return;
  }
  return;
}


