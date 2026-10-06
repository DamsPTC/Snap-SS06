/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106fdc84c; end: 106fdc8e7; -[SCBaseInAppNotificationCard hideAnimatedAfterInterruption:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fdc84c(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined1 uStack_18;
  
  *(undefined1 *)(param_1 + _DAT_11276222c) = param_3;
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_106fdc8e8;
  puStack_28 = &UNK_110845ce0;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x106fdc930;
  puStack_50 = &UNK_110841f20;
  lStack_48 = param_1;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010bf03440(0x3fc53f7ced916873,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,0x20000,
                      &puStack_40,&puStack_68);
  return;
}



/* Entry: 106fdc8e8; end: 106fdc95b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fdc8e8(long param_1)

{
  undefined8 *puVar1;
  
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112762228);
    func_0x00010c19f0e0(*puVar1,puVar1[1],puVar1[2],puVar1[3]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 106fdc95c; end: 106fdcdbf; -[SCBaseInAppNotificationCard pressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fdc95c(undefined8 param_1,double param_2,ulong param_3,undefined8 param_4,long param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  ulong uStack_58;
  
  _objc_retain(param_5);
  uVar2 = param_3;
  func_0x00010c262ca0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_5);
  dVar9 = param_2;
  _objc_release(uVar2);
  lVar6 = param_5;
  func_0x00010c252440();
  _objc_release(param_5);
  if (lVar6 < 3) {
    if (lVar6 == 1) {
      *(undefined1 *)(param_3 + (long)_DAT_112762230) = 0;
      *(undefined1 *)(param_3 + (long)_DAT_112762234) = 0;
      *(undefined8 *)(param_3 + (long)_DAT_112762238) = 0;
      lVar6 = (long)_DAT_11276223c;
      *(undefined8 *)(param_3 + lVar6) = param_1;
      ((undefined8 *)(param_3 + lVar6))[1] = param_2;
      func_0x00010bfe4660(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf78300();
      _objc_release(uVar2);
      uVar2 = param_3;
LAB_106fdcb30:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
    if (lVar6 == 2) {
      lVar6 = (long)_DAT_112762238;
      puVar1 = (undefined8 *)(param_3 + (long)_DAT_11276223c);
      dVar7 = (double)puVar1[1];
      dVar8 = (param_2 - dVar7) + *(double *)(param_3 + lVar6);
      *(double *)(param_3 + lVar6) = dVar8;
      if (((*(byte *)(param_3 + (long)_DAT_112762234) & 1) != 0) ||
         (dVar9 = ABS(dVar8), 10.0 < dVar9)) {
        *(undefined1 *)(param_3 + (long)_DAT_112762234) = 1;
        func_0x00010bf345e0(param_3);
        NEON_fminnm(dVar9 + (param_2 - dVar7) * 0.2,0x4069000000000000);
        func_0x00010c17a6a0(param_3);
        dVar8 = *(double *)(param_3 + lVar6);
      }
      *(bool *)(param_3 + (long)_DAT_112762230) = dVar8 < 0.0;
      *puVar1 = param_1;
      puVar1[1] = param_2;
    }
  }
  else if (lVar6 == 3) {
    uVar2 = param_3;
    func_0x00010bfe4660(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7a240();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if (*(char *)(param_3 + (long)_DAT_112762234) == '\x01') {
      if (*(char *)(param_3 + (long)_DAT_112762230) == '\x01') {
        puVar4 = PTR_PTR_1126b6b08;
        func_0x00010c22b6a0(PTR_PTR_1126b6b08);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b2e20();
        _objc_release(puVar4);
        uVar2 = param_3;
        func_0x00010bfe4660(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12b660();
        _objc_release(uVar2);
        uVar2 = param_3;
        func_0x00010bfe4660(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf6b020();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0dbb80(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfd1400(uVar3);
        _objc_release(param_3);
        _objc_release(uVar3);
        goto LAB_106fdcb30;
      }
      goto LAB_106fdcc5c;
    }
    uVar2 = param_3;
    func_0x00010c074c20();
    if ((uVar2 & 1) == 0) {
      puVar4 = PTR_PTR_1126b6b08;
      func_0x00010c22b6a0(PTR_PTR_1126b6b08);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b2e20();
      _objc_release(puVar4);
      uVar2 = param_3;
      func_0x00010bfe4660();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c232240();
      _objc_release(uVar2);
      if ((int)uVar3 != 0) {
        uVar2 = param_3;
        func_0x00010bfe4660(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c200c40();
        _objc_release(uVar2);
        puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_70 = 0xc2000000;
        pcStack_68 = FUN_106fdcdc0;
        puStack_60 = &UNK_110841f20;
        ppuVar5 = &puStack_78;
        uStack_58 = param_3;
        _objc_retainBlock(ppuVar5);
        uVar2 = param_3;
        func_0x00010bfe4660(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf6b020();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0dbb80(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c230f60(uVar3);
        _objc_release(param_3);
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(ppuVar5);
      }
    }
  }
  else if ((lVar6 == 4) && ((*(byte *)(param_3 + (long)_DAT_11276222c) & 1) == 0)) {
    uVar2 = param_3;
    func_0x00010bfe4660(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7a240();
    _objc_release(uVar3);
    _objc_release(uVar2);
LAB_106fdcc5c:
                    /* WARNING: Could not recover jumptable at 0x00010c235d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_showAnimated_11266b170);
    return;
  }
  return;
}



/* Entry: 106fdcdc0; end: 106fdce87;  */

void FUN_106fdcdc0(long param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((param_2 & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfe4660(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12b660();
    _objc_release(uVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfe4660(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0dbb80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd1440(uVar1);
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe4660(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c200c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fdce88; end: 106fdd00b; -[SCBaseInAppNotificationCard gestureRecognizer:shouldReceiveTouch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_106fdce88(undefined8 param_1,undefined8 param_2,double param_3,double param_4,ulong param_5,
             undefined8 param_6,undefined8 param_7,ulong param_8)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_8);
  uVar1 = param_8;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIControl_1126c3e60;
  _objc_opt_class(PTR__OBJC_CLASS___UIControl_1126c3e60);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    lVar4 = *(long *)(param_5 + (long)_DAT_112762220);
    func_0x00010c11c420();
    if (lVar4 == 0x8b) {
      uVar1 = param_5;
      func_0x00010c272560();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar1 != 0) {
        func_0x00010c09ef00(param_8);
        uVar1 = param_5;
        func_0x00010c272560(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf512a0(param_1,param_2,param_5);
        _objc_release(uVar1);
        func_0x00010c272560();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_5;
        func_0x00010c102b20(param_1,param_2);
        _objc_release(param_5);
        if ((uVar1 & 1) != 0) goto LAB_106fdcee8;
      }
      uVar1 = param_8;
      func_0x00010c29bf00(param_8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      _objc_release(uVar1);
      if ((param_3 == 51.0) && (param_4 == 31.0)) goto LAB_106fdcee8;
    }
    uVar5 = 1;
  }
  else {
LAB_106fdcee8:
    uVar5 = 0;
  }
  _objc_release(param_8);
  return uVar5;
}



/* Entry: 106fdd00c; end: 106fdd01b; -[SCBaseInAppNotificationCard notification] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106fdd00c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762220);
}



/* Entry: 106fdd01c; end: 106fdd03b; -[SCBaseInAppNotificationCard hostView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fdd01c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276221c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fdd03c; end: 106fdd05b; -[SCBaseInAppNotificationCard toggle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fdd03c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112762240);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fdd05c; end: 106fdd06f; -[SCBaseInAppNotificationCard setToggle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fdd05c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112762240,param_3);
  return;
}



/* Entry: 106fdd070; end: 106fdd0b7; -[SCBaseInAppNotificationCard .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fdd070(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112762240);
  _objc_destroyWeak(param_1 + _DAT_11276221c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112762220,0);
  return;
}



/* Entry: 106fdd0b8; end: 106fdd2cb; -[SCInAppNotificationViewV2 initWithDelegate:withLazyNotificationEmitter:circEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106fdd0b8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar3 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  dVar6 = param_1;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  dVar7 = dVar6;
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  _objc_release(puVar2);
  puStack_68 = PTR_PTR_1126f82f0;
  uStack_70 = param_2;
  _objc_msgSendSuper2(0,0,dVar7,0,&uStack_70,PTR_s_initWithFrame__1125e2948);
  if (puVar3 != (undefined8 *)0x0) {
    func_0x00010c18b5e0(puVar3);
    lVar5 = (long)_DAT_112762244;
    _objc_retain(param_6);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar5);
    *(undefined8 *)((long)puVar3 + lVar5) = param_6;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_112762248;
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar5);
    *(undefined8 *)((long)puVar3 + lVar5) = param_5;
    _objc_release(uVar4);
    puVar1 = (undefined8 *)((long)puVar3 + (long)_DAT_11276224c);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = dVar7;
    puVar1[3] = 0;
    puVar1 = (undefined8 *)((long)puVar3 + (long)_DAT_112762250);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = dVar6;
    puVar1[3] = param_1 + 84.0;
    uVar4 = *(undefined8 *)((long)puVar3 + (long)_DAT_112762254);
    *(undefined8 *)((long)puVar3 + (long)_DAT_112762254) = 0;
    _objc_release(uVar4);
    func_0x00010c225b00(*(double *)PTR__UIWindowLevelStatusBar_110345e90 + 1.0,puVar3);
    func_0x00010c1d4c20(puVar3);
    func_0x00010bd86158(puVar3);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa280();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar3;
}



/* Entry: 106fdd2cc; end: 106fdd33b;  */

void FUN_106fdd2cc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b72c0();
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106fdd33c; end: 106fdd3ab; -[SCInAppNotificationViewV2 removeCard:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fdd33c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + _DAT_112762254) == param_3) {
    *(undefined8 *)(param_1 + _DAT_112762254) = 0;
    _objc_release();
    puVar1 = (undefined8 *)(param_1 + _DAT_11276224c);
    func_0x00010c19f0e0(*puVar1,puVar1[1],puVar1[2],puVar1[3],param_1);
  }
  func_0x00010bfe18a0(param_3,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106fdd3ac; end: 106fdd693; -[SCInAppNotificationViewV2 didActiveNotificationChange:withInterrupt:withUserSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fdd3ac(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_3);
  lVar7 = (long)_DAT_112762254;
  lVar2 = *(long *)(param_1 + lVar7);
  func_0x00010c0dbb80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == param_3) goto LAB_106fdd63c;
  uVar3 = 0;
  if (*(long *)(param_1 + lVar7) != 0) {
    func_0x00010bfe18a0();
    uVar3 = *(ulong *)(param_1 + lVar7);
    *(undefined8 *)(param_1 + lVar7) = 0;
    _objc_release();
  }
  if (param_3 == 0) {
    puVar1 = (undefined8 *)(param_1 + _DAT_11276224c);
    func_0x00010c19f0e0(*puVar1,puVar1[1],puVar1[2],puVar1[3],param_1);
    goto LAB_106fdd63c;
  }
  func_0x000108f218ac();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf38cc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c22f380();
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c11c420();
  if (((lVar2 == 0x73) && ((uVar4 & 1) != 0)) ||
     (lVar2 = param_3, func_0x00010c22f3c0(), (int)lVar2 != 0)) {
    lVar2 = param_3;
    func_0x00010bfce860();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010beb7fe0(param_1);
    }
    else {
      lVar2 = param_3;
      func_0x00010bfce860();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar2;
      func_0x00010c08fa60();
      _objc_release(lVar2);
      if (lVar7 == 0) goto LAB_106fdd610;
      puVar5 = auStack_58;
      _objc_initWeak(puVar5,param_1);
      func_0x0001085a33ac();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
      func_0x00010bfce860(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_60,auStack_58);
      _objc_retain(param_3);
      _objc_retain(param_5);
      _objc_retain(param_3);
      _objc_retain(PTR___dispatch_main_q_11034be20);
      func_0x00010bfc6120(puVar6);
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_release(lVar2);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(param_3);
      _objc_release(param_5);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
    }
  }
  else {
LAB_106fdd610:
    func_0x00010beba060(param_1);
  }
  _objc_release(uVar3);
LAB_106fdd63c:
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106fdd694; end: 106fdd6df;  */

void FUN_106fdd694(long param_1,long param_2)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  if (param_2 == 0) {
    func_0x00010beba060();
  }
  else {
    func_0x00010beb7fe0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106fdd6e0; end: 106fdd7bb; -[SCInAppNotificationViewV2 _showNonBitmojiNotificationCard:userSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fdd6e0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c11c420();
  if (lVar1 == 0x8b) {
    func_0x00010bf1f440(*(undefined8 *)(param_1 + _DAT_112762244),param_2,
                        &PTR____CFConstantStringClassReference_110e96538,0,0);
    puVar2 = PTR_PTR_1126d3f30;
    _objc_alloc(PTR_PTR_1126d3f30);
    func_0x00010c02fd00();
    func_0x00010c21f2c0();
  }
  else {
    puVar2 = PTR_PTR_1126d3f38;
    _objc_alloc(PTR_PTR_1126d3f38);
    func_0x00010c02fce0();
  }
  func_0x00010be046a0(param_1,param_2,puVar2,param_3);
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106fdd7bc; end: 106fdd843; -[SCInAppNotificationViewV2 _showBitmojiNotificationCard:userSession:] */

void FUN_106fdd7bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3f40;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02fce0();
  func_0x00010c21f2c0();
  _objc_release(param_4);
  func_0x00010be046a0(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106fdd844; end: 106fdd943; -[SCInAppNotificationViewV2 _displayInAppNotificationCard:forNotification:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fdd844(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112762254;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_release(uVar3);
  func_0x00010c235d20(*(undefined8 *)(param_1 + lVar4));
  uVar3 = *(undefined8 *)(param_1 + _DAT_112762248);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ce088;
  func_0x00010bf75500(PTR_PTR_1126ce088);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11ad40(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar3);
  func_0x00010c0aafe0(PTR_PTR_1126b7550);
  _objc_release(param_3);
  _objc_release(param_4);
  puVar1 = (undefined8 *)(param_1 + _DAT_112762250);
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*puVar1,puVar1[1],puVar1[2],puVar1[3],param_1,PTR_s_setFrame__112645658);
  return;
}



/* Entry: 106fdd944; end: 106fdd963; -[SCInAppNotificationViewV2 delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fdd944(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112762258);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fdd964; end: 106fdd977; -[SCInAppNotificationViewV2 setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fdd964(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112762258,param_3);
  return;
}



/* Entry: 106fdd978; end: 106fdd987; -[SCInAppNotificationViewV2 shouldPrompt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106fdd978(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112762218);
}



/* Entry: 106fdd988; end: 106fdd997; -[SCInAppNotificationViewV2 setShouldPrompt:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fdd988(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112762218) = param_3;
  return;
}



/* Entry: 106fdd998; end: 106fdd9f3; -[SCInAppNotificationViewV2 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fdd998(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112762258);
  _objc_storeStrong(param_1 + _DAT_112762254,0);
  _objc_storeStrong(param_1 + _DAT_112762244,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112762248,0);
  return;
}



/* Entry: 106fdd9f4; end: 106fdda1f; -[SCAppNotification inAppDisplayHeight] */

undefined8 FUN_106fdd9f4(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c11c420();
  uVar1 = 0x4054000000000000;
  if (param_1 != 0x95) {
    uVar1 = 0x4050000000000000;
  }
  return uVar1;
}



/* Entry: 106fdda20; end: 106fddcf7;  */

undefined ** FUN_106fdda20(undefined **param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  double dVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  ppuVar1 = (undefined **)PTR_PTR_1126d3f48;
  _objc_alloc_init();
  ppuVar2 = param_1;
  func_0x00010c0734a0();
  if ((int)ppuVar2 == 0) {
    ppuVar2 = param_1;
    func_0x00010bfeafc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18ede0(ppuVar1);
    _objc_release(ppuVar2);
  }
  else {
    func_0x00010c18ede0(ppuVar1);
  }
  ppuVar2 = param_1;
  func_0x00010bfeb320(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216540(ppuVar1);
  _objc_release(ppuVar2);
  puVar3 = PTR__OBJC_CLASS___NSParagraphStyle_1126af948;
  func_0x00010bf69e80();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar3;
  func_0x00010c0d3c80();
  _objc_release(puVar3);
  func_0x00010c1bdb00(puVar12);
  puVar3 = PTR_PTR_1126d3f50;
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x402e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0e940(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216580(ppuVar1);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  ppuVar2 = param_1;
  func_0x00010bfeb2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20f760(ppuVar1);
  _objc_release(ppuVar2);
  puVar3 = PTR_PTR_1126d3f50;
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0e940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20f780(ppuVar1);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  uVar18 = 0x401c000000000000;
  uVar21 = 0;
  uVar22 = 0x401c000000000000;
  func_0x00010c181fe0(0,0x401c000000000000,0,0x401c000000000000,ppuVar1);
  dVar14 = 7.0;
  func_0x00010c182000(ppuVar1);
  _objc_release(puVar12);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar15 = dVar14;
  _objc_retain();
  ppuVar1 = (undefined **)PTR_PTR_1126d3f48;
  _objc_alloc_init();
  ppuVar2 = param_1;
  func_0x00010c0734a0();
  if ((int)ppuVar2 == 0) {
    ppuVar2 = param_1;
    func_0x00010bfeafc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1611c0(ppuVar1);
    _objc_release(ppuVar2);
  }
  else {
    func_0x00010c1611c0(ppuVar1);
  }
  ppuVar2 = ppuVar1;
  func_0x00010beed180(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  dVar19 = 40.0;
  if (40.0 < dVar15) {
    _objc_release(ppuVar2);
LAB_106fdde10:
    ppuVar2 = ppuVar1;
    func_0x00010beed180(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = 0x4044000000000000;
    uVar20 = 0x4044000000000000;
    func_0x00010b6916d0(0x4044000000000000,0x4044000000000000);
    uVar17 = uVar16;
    _objc_release(ppuVar2);
    ppuVar2 = ppuVar1;
    func_0x00010beed180(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    ppuVar6 = ppuVar2;
    func_0x00010c14e6c0(uVar16,uVar20,uVar17,ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1611c0(ppuVar1);
    _objc_release(ppuVar6);
    _objc_release(puVar3);
    _objc_release(ppuVar2);
  }
  else {
    ppuVar6 = ppuVar1;
    func_0x00010beed180(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    _objc_release(ppuVar6);
    _objc_release(ppuVar2);
    if (40.0 < dVar19) goto LAB_106fdde10;
  }
  ppuVar2 = param_1;
  func_0x00010bfeb320();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = param_1;
  func_0x00010bfeb2a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = param_1;
  func_0x00010c11c420();
  if (ppuVar7 != (undefined **)0x95) goto LAB_106fde098;
  ppuVar7 = param_1;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar7;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar7);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  ppuVar13 = ppuVar8;
  _objc_opt_isKindOfClass(ppuVar8,puVar3);
  ppuVar7 = ppuVar8;
  if (((ulong)ppuVar13 & 1) == 0) {
    ppuVar7 = (undefined **)0x0;
  }
  _objc_retain(ppuVar7);
  _objc_release(ppuVar8);
  ppuVar8 = param_1;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar8;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar8);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  ppuVar9 = ppuVar13;
  _objc_opt_isKindOfClass(ppuVar13,puVar3);
  ppuVar8 = ppuVar13;
  if (((ulong)ppuVar9 & 1) == 0) {
    ppuVar8 = (undefined **)0x0;
  }
  _objc_retain(ppuVar8);
  _objc_release(ppuVar13);
  ppuVar13 = ppuVar8;
  func_0x00010c08fa60();
  if (ppuVar13 == (undefined **)0x0) {
    ppuVar13 = (undefined **)0x0;
  }
  else {
    ppuVar13 = &PTR____CFConstantStringClassReference_110ddea98;
    func_0x00010c0720c0();
  }
  ppuVar9 = ppuVar13;
  func_0x000108f587bc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((int)ppuVar13 == 0) {
    if (ppuVar7 != (undefined **)0x0) {
      func_0x000108f587d4();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106fde02c;
    }
    func_0x000108f587ec();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar2;
  }
  else if (ppuVar7 == (undefined **)0x0) {
    func_0x000108f5881c();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar2;
  }
  else {
    func_0x000108f58804();
    _objc_retainAutoreleasedReturnValue();
LAB_106fde02c:
    ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar6);
    ppuVar6 = ppuVar2;
  }
  _objc_release(ppuVar6);
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  ppuVar2 = ppuVar9;
  ppuVar6 = ppuVar13;
LAB_106fde098:
  func_0x00010c216540(ppuVar1);
  puVar3 = PTR__OBJC_CLASS___NSParagraphStyle_1126af948;
  func_0x00010bf69e80();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar3;
  func_0x00010c0d3c80();
  _objc_release(puVar3);
  func_0x00010c1bdb00(puVar12);
  puVar3 = PTR_PTR_1126d3f50;
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x402e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0e940(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216580(ppuVar1);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010c20f760(ppuVar1);
  puVar3 = PTR_PTR_1126d3f50;
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0e940(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar3;
  func_0x00010c20f780(ppuVar1);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010c181fe0(dVar14,uVar18,uVar21,uVar22,ppuVar1);
  func_0x00010c182000(0x401c000000000000,ppuVar1);
  _objc_release(puVar12);
  _objc_release(ppuVar6);
  _objc_release(ppuVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  puVar12 = param_1[1];
  _objc_retain(puVar10);
  puVar3 = puVar10;
  func_0x00010c0dc200(puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar12);
  _objc_release(puVar10);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c104a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_postNotifications_11261eca0);
  return param_1;
}



/* Entry: 106fddcf8; end: 106fde2c7;  */

undefined **
FUN_106fddcf8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined **param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  double dVar17;
  undefined8 uVar18;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar14 = param_1;
  _objc_retain();
  ppuVar1 = (undefined **)PTR_PTR_1126d3f48;
  _objc_alloc_init();
  ppuVar2 = param_5;
  func_0x00010c0734a0();
  if ((int)ppuVar2 == 0) {
    ppuVar2 = param_5;
    func_0x00010bfeafc0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1611c0(ppuVar1);
    _objc_release(ppuVar2);
  }
  else {
    func_0x00010c1611c0(ppuVar1);
  }
  ppuVar2 = ppuVar1;
  func_0x00010beed180(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  dVar17 = 40.0;
  if (40.0 < dVar14) {
    _objc_release(ppuVar2);
LAB_106fdde10:
    ppuVar2 = ppuVar1;
    func_0x00010beed180(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = 0x4044000000000000;
    uVar18 = 0x4044000000000000;
    func_0x00010b6916d0(0x4044000000000000,0x4044000000000000);
    uVar16 = uVar15;
    _objc_release(ppuVar2);
    ppuVar2 = ppuVar1;
    func_0x00010beed180(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    ppuVar3 = ppuVar2;
    func_0x00010c14e6c0(uVar15,uVar18,uVar16,ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1611c0(ppuVar1);
    _objc_release(ppuVar3);
    _objc_release(puVar4);
    _objc_release(ppuVar2);
  }
  else {
    ppuVar3 = ppuVar1;
    func_0x00010beed180(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    if (40.0 < dVar17) goto LAB_106fdde10;
  }
  ppuVar2 = param_5;
  func_0x00010bfeb320();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = param_5;
  func_0x00010bfeb2a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = param_5;
  func_0x00010c11c420();
  if (ppuVar5 != (undefined **)0x95) goto LAB_106fde098;
  ppuVar5 = param_5;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  ppuVar13 = ppuVar6;
  _objc_opt_isKindOfClass(ppuVar6,puVar4);
  ppuVar5 = ppuVar6;
  if (((ulong)ppuVar13 & 1) == 0) {
    ppuVar5 = (undefined **)0x0;
  }
  _objc_retain(ppuVar5);
  _objc_release(ppuVar6);
  ppuVar6 = param_5;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar6);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  ppuVar7 = ppuVar13;
  _objc_opt_isKindOfClass(ppuVar13,puVar4);
  ppuVar6 = ppuVar13;
  if (((ulong)ppuVar7 & 1) == 0) {
    ppuVar6 = (undefined **)0x0;
  }
  _objc_retain(ppuVar6);
  _objc_release(ppuVar13);
  ppuVar13 = ppuVar6;
  func_0x00010c08fa60();
  if (ppuVar13 == (undefined **)0x0) {
    ppuVar13 = (undefined **)0x0;
  }
  else {
    ppuVar13 = &PTR____CFConstantStringClassReference_110ddea98;
    func_0x00010c0720c0();
  }
  ppuVar7 = ppuVar13;
  func_0x000108f587bc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((int)ppuVar13 == 0) {
    if (ppuVar5 != (undefined **)0x0) {
      func_0x000108f587d4();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106fde02c;
    }
    func_0x000108f587ec();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar2;
  }
  else if (ppuVar5 == (undefined **)0x0) {
    func_0x000108f5881c();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar2;
  }
  else {
    func_0x000108f58804();
    _objc_retainAutoreleasedReturnValue();
LAB_106fde02c:
    ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    ppuVar3 = ppuVar2;
  }
  _objc_release(ppuVar3);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  ppuVar2 = ppuVar7;
  ppuVar3 = ppuVar13;
LAB_106fde098:
  func_0x00010c216540(ppuVar1);
  puVar4 = PTR__OBJC_CLASS___NSParagraphStyle_1126af948;
  func_0x00010bf69e80();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar4;
  func_0x00010c0d3c80();
  _objc_release(puVar4);
  func_0x00010c1bdb00(puVar12);
  puVar4 = PTR_PTR_1126d3f50;
  puVar8 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x402e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0e940(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216580(ppuVar1);
  _objc_release(puVar4);
  _objc_release(puVar9);
  _objc_release(puVar8);
  func_0x00010c20f760(ppuVar1);
  puVar4 = PTR_PTR_1126d3f50;
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0e940(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar4;
  func_0x00010c20f780(ppuVar1);
  _objc_release(puVar4);
  _objc_release(puVar9);
  _objc_release(puVar8);
  func_0x00010c181fe0(param_1,param_2,param_3,param_4,ppuVar1);
  func_0x00010c182000(0x401c000000000000,ppuVar1);
  _objc_release(puVar12);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  puVar12 = param_5[1];
  _objc_retain(puVar10);
  puVar4 = puVar10;
  func_0x00010c0dc200(puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar12);
  _objc_release(puVar10);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010c104a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s_postNotifications_11261eca0);
  return param_5;
}



/* Entry: 106fde2c8; end: 106fde333; -[SCAppNotificationBatcher addNotification:] */

void FUN_106fde2c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0dc200(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c104a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_postNotifications_11261eca0);
  return;
}



/* Entry: 106fde334; end: 106fde397; -[SCAppNotificationBatcher shouldDispatchNotifications] */

bool FUN_106fde334(double param_1,long param_2)

{
  undefined *puVar1;
  bool bVar2;
  
  if (*(long *)(param_2 + 0x18) == 0) {
    bVar2 = true;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    bVar2 = 1.0 < param_1;
    _objc_release(puVar1);
  }
  return bVar2;
}



/* Entry: 106fde398; end: 106fde493; -[SCAppNotificationBatcher postNotifications] */

void FUN_106fde398(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c22f220();
    if ((int)lVar1 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      *(undefined **)(param_1 + 0x18) = puVar2;
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_1 + 8);
      lVar1 = *(long *)(param_1 + 0x10);
      func_0x00010bf00d20(uVar3);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar1 + 0x10))(lVar1,uVar3);
      _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 8),PTR_s_removeAllObjects_112628590);
      return;
    }
    _dispatch_time(0,1000000000);
    func_0x00010058c530();
  }
  return;
}



/* Entry: 106fde494; end: 106fde49b;  */

void FUN_106fde494(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c104a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_postNotifications_11261eca0);
  return;
}



/* Entry: 106fde49c; end: 106fde4df; -[SCAppNotificationBatcher removeNotification:] */

void FUN_106fde49c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0dc200(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar1,param_2,0,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106fde4e0; end: 106fde673; -[SCAppNotificationBatcher clearPendingNotificationsWithSnapshot:] */

void FUN_106fde4e0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar8 = *(undefined8 *)(lVar9 * 8);
      uVar3 = uVar8;
      func_0x00010c0dc200(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0dc140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dc140(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0720c0();
      _objc_release(uVar8);
      _objc_release(uVar5);
      _objc_release(uVar4);
      if ((int)uVar6 != 0) {
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 8));
      }
      _objc_release(uVar3);
      lVar9 = lVar9 + 1;
    } while (lVar2 != lVar9);
    lVar2 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf00d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_3 + 8),PTR_s_allValues_11259dcf0);
  return;
}



/* Entry: 106fde674; end: 106fde67b; -[SCAppNotificationBatcher pendingNotifications] */

void FUN_106fde674(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf00d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_allValues_11259dcf0);
  return;
}



/* Entry: 106fde67c; end: 106fde6b7; -[SCAppNotificationBatcher .cxx_destruct] */

void FUN_106fde67c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106fde6b8; end: 106fde793; -[SCAppNotificationSequencer updateActiveNotificationProperty:withInterruption:interruptReason:] */

void FUN_106fde6b8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (*(long *)(param_1 + 0x60) != param_3) {
    if ((param_5 != 0) && (*(long *)(param_1 + 0x60) != 0)) {
      lVar1 = param_1;
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x60);
      lVar2 = param_5;
      func_0x00010c067fc0(param_5);
      func_0x00010bfd01c0(lVar1,param_2,uVar3,lVar2);
      _objc_release(lVar1);
    }
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    *(long *)(param_1 + 0x60) = param_3;
    _objc_release(uVar3);
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd09a0();
    _objc_release(param_1);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106fde794; end: 106fdead3; -[SCAppNotificationSequencer dequeueNextNotification] */

void FUN_106fde794(ulong param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  bool bVar15;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = param_1;
  func_0x00010bf86280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 == 0) {
    func_0x000100162d98("APPSTORE",&PTR___NSConcreteGlobalBlock_110987af8);
    lVar13 = 0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    lVar13 = 0;
    bVar15 = false;
    while (puVar6 != (undefined *)0x0) {
      puVar12 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar5);
        }
        if (lVar13 != 0) goto LAB_106fde9dc;
        lVar14 = *(long *)((long)puVar12 * 8);
        _objc_retain(lVar14);
        lVar7 = lVar14;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        while (lVar7 != 0) {
          lVar11 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(lVar14);
            }
            lVar13 = *(long *)(lVar11 * 8);
            uVar3 = param_1;
            func_0x00010bf86280();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar3;
            func_0x00010c102fc0();
            _objc_release(uVar3);
            if ((long)uVar8 < 3) {
              if (uVar8 < 2) {
                _objc_retain(lVar13);
                if (lVar13 != 0) goto LAB_106fde9a8;
              }
              else if (uVar8 == 2) {
                func_0x00010be5d1c0(param_1);
              }
            }
            else if (uVar8 == 4) {
              func_0x00010befa120(puVar4);
              func_0x00010be08040(param_1);
            }
            else if (uVar8 == 3) {
              func_0x00010be5d1c0(param_1);
              bVar15 = true;
            }
            lVar11 = lVar11 + 1;
          } while (lVar7 != lVar11);
          lVar7 = lVar14;
          func_0x00010bf52a60();
        }
        lVar13 = 0;
LAB_106fde9a8:
        _objc_release(lVar14);
        puVar12 = puVar12 + 1;
      } while (puVar12 != puVar6);
      puVar6 = puVar5;
      func_0x00010bf52a60();
    }
LAB_106fde9dc:
    _objc_release(puVar5);
    func_0x00010c12d500(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c12d500(*(undefined8 *)(param_1 + 0x28));
    if (lVar13 == 0) {
      if (bVar15) {
        puVar6 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
        func_0x00010c1503c0(0x3ff0000000000000);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = *(undefined8 *)(param_1 + 8);
        *(undefined **)(param_1 + 8) = puVar6;
        _objc_release(uVar10);
      }
    }
    else {
      func_0x00010c12d360(*(undefined8 *)(param_1 + 0x20));
      func_0x00010c12d360(*(undefined8 *)(param_1 + 0x28));
      _objc_retain(lVar13);
    }
    _objc_release(puVar4);
    _objc_release(lVar13);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar13);
    return;
  }
  ___stack_chk_fail();
  puVar6 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 106fdead4; end: 106fdeb17;  */

void FUN_106fdead4(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106fdeb18; end: 106fdebf3; -[SCAppNotificationSequencer _markAsDelayedIfNeeded:] */

void FUN_106fdeb18(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfb1e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19d720(param_3,param_2,puVar2);
    _objc_release(puVar2);
  }
  lVar1 = param_3;
  func_0x00010bfeafa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bf86280(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ab600(param_3,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106fdebf4; end: 106fdec37; -[SCAppNotificationSequencer requeryPolicy:] */

void FUN_106fdebf4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bef0d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf860d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_displayNextNotification_1125bf1d8);
  return;
}



/* Entry: 106fdec38; end: 106fdece3; -[SCAppNotificationSequencer displayNextNotification] */

void FUN_106fdec38(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c069d00(*(undefined8 *)(param_2 + 0x10));
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  _objc_release(uVar1);
  lVar2 = param_2;
  func_0x00010bf6df80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    func_0x00010c2833c0(param_2,param_3,0,0,0);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x58);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf856a0();
    _objc_release(uVar1);
    func_0x00010bf86120(param_1,param_2,param_3,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106fdece4; end: 106fdedff; -[SCAppNotificationSequencer displayNotification:forInterval:] */

void FUN_106fdece4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  func_0x00010c069d00(*(undefined8 *)(param_2 + 0x10));
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf64e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  *(undefined **)(param_2 + 0x18) = puVar2;
  _objc_release(uVar3);
  _objc_release(puVar1);
  func_0x00010c2833c0(param_2);
  _objc_initWeak(auStack_48,param_2);
  puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  _objc_retain();
  func_0x00010c1503c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  *(undefined **)(param_2 + 0x10) = puVar1;
  _objc_release(uVar3);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 106fdee00; end: 106fdee0f; -[SCAppNotificationSequencer expireActiveNotification:] */

void FUN_106fdee00(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf860d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_displayNextNotification_1125bf1d8);
    return;
  }
  return;
}



/* Entry: 106fdee10; end: 106fdeeeb; -[SCAppNotificationSequencer suppressActiveNotificationWithReason:] */

void FUN_106fdee10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = param_1;
  func_0x00010bef0d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x00010bef0d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2833c0(param_1,param_2,0,1,puVar3);
    _objc_release(puVar3);
    func_0x00010c069d00(*(undefined8 *)(param_1 + 0x10));
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar4);
    lVar5 = lVar2;
    func_0x00010c074cc0();
    lVar1 = 0x20;
    if ((int)lVar5 == 0) {
      lVar1 = 0x28;
    }
    func_0x00010c066b00(*(undefined8 *)(param_1 + lVar1),param_2,lVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 106fdeeec; end: 106fdf1c7; -[SCAppNotificationSequencer verifyWhetherAnyPendingNotificationsShouldBeRevoked] */

void FUN_106fdeeec(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar13;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar4 != (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar13);
      }
      lVar12 = *(long *)((long)puVar10 * 8);
      _objc_retain(lVar12);
      lVar5 = lVar12;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (lVar5 != 0) {
        lVar11 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar12);
          }
          lVar6 = param_1;
          func_0x00010bf86280();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar6;
          func_0x00010c102fc0();
          _objc_release(lVar6);
          if (lVar7 == 4) {
            func_0x00010befa120(puVar3);
          }
          lVar11 = lVar11 + 1;
        } while (lVar5 != lVar11);
        lVar5 = lVar12;
        func_0x00010bf52a60();
      }
      _objc_release(lVar12);
      puVar10 = puVar10 + 1;
    } while (puVar10 != puVar4);
    puVar4 = puVar13;
    func_0x00010bf52a60();
  }
  _objc_release(puVar13);
  _objc_retain(puVar3);
  puVar4 = puVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar4 != (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar3);
      }
      lVar5 = param_1 + 0x68;
      _objc_loadWeakRetained();
      func_0x00010bfd2300();
      _objc_release(lVar5);
      func_0x00010be08040(param_1);
      puVar13 = puVar13 + 1;
    } while (puVar4 != puVar13);
    puVar4 = puVar3;
    func_0x00010bf52a60();
  }
  _objc_release(puVar3);
  func_0x00010c12d500(*(undefined8 *)(param_1 + 0x28));
  puVar4 = puVar3;
  func_0x00010c12d500(*(undefined8 *)(param_1 + 0x20));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  puVar13 = puVar3 + 0x70;
  _objc_loadWeakRetained();
  _objc_release();
  if (puVar4 != (undefined *)0x0 || puVar13 != (undefined *)0x0) {
    _objc_storeWeak(puVar3 + 0x70,puVar4);
    puVar13 = puVar3;
    func_0x00010bf86280();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar3;
    func_0x00010bef0d40(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar13;
    func_0x00010c102fc0();
    _objc_release(puVar10);
    _objc_release(puVar13);
    if ((undefined *)0x1 < puVar8) {
      func_0x00010c263d60(puVar3);
    }
    func_0x00010c298ba0(puVar3);
    puVar13 = puVar3;
    func_0x00010bef0d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar13 == (undefined *)0x0) {
      func_0x00010bf860c0(puVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 106fdf1c8; end: 106fdf2ab; -[SCAppNotificationSequencer setDisplayProtocol:] */

void FUN_106fdf1c8(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x70;
  _objc_loadWeakRetained();
  _objc_release();
  if (param_3 != 0 || lVar1 != 0) {
    _objc_storeWeak(param_1 + 0x70,param_3);
    uVar2 = param_1;
    func_0x00010bf86280();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bef0d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c102fc0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if (1 < uVar4) {
      func_0x00010c263d60(param_1);
    }
    func_0x00010c298ba0(param_1);
    uVar2 = param_1;
    func_0x00010bef0d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar2 == 0) {
      func_0x00010bf860c0(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106fdf2ac; end: 106fdf2ef; -[SCAppNotificationSequencer pauseTimer] */

void FUN_106fdf2ac(double param_1,long param_2)

{
  undefined8 uVar1;
  double dVar2;
  
  func_0x00010c26f3a0(*(undefined8 *)(param_2 + 0x18));
  dVar2 = 1.0;
  if (0.0 <= param_1) {
    dVar2 = param_1;
  }
  *(double *)(param_2 + 0x30) = dVar2;
  func_0x00010c069d00(*(undefined8 *)(param_2 + 0x10));
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fdf2f0; end: 106fdf32f; -[SCAppNotificationSequencer resumeTimer] */

void FUN_106fdf2f0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bef0d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf86120(*(undefined8 *)(param_1 + 0x30),param_1,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106fdf330; end: 106fdf40b; -[SCAppNotificationSequencer hideNotification:] */

void FUN_106fdf330(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + 0x28);
    func_0x00010bf4b900(uVar1,param_2,param_3);
    if ((uVar1 & 1) == 0) {
      func_0x00010bef0d40(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
    }
  }
  lVar2 = param_3;
  func_0x00010c074cc0();
  lVar3 = 0x20;
  if ((int)lVar2 == 0) {
    lVar3 = 0x28;
  }
  func_0x00010c12d360(*(undefined8 *)(param_1 + lVar3),param_2,param_3);
  lVar3 = param_1;
  func_0x00010bef0d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == param_3) {
    func_0x00010c2833c0(param_1,param_2,0,1,0);
    func_0x00010c069d00(*(undefined8 *)(param_1 + 0x10));
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar4);
    func_0x00010bf860c0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106fdf40c; end: 106fdf507; -[SCAppNotificationSequencer canDisplayNotification:] */

bool FUN_106fdf40c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010bef0d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_1;
    func_0x00010bef0d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0dc200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar4 = param_3;
    func_0x00010c0dc200(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c0720c0(uVar3,param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    if ((uVar2 & 1) != 0) {
      bVar1 = false;
      goto LAB_106fdf4e8;
    }
  }
  func_0x00010bf86280(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c102fc0();
  _objc_release(param_1);
  bVar1 = uVar2 != 4;
LAB_106fdf4e8:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106fdf508; end: 106fdf50b; -[SCAppNotificationSequencer displayNotification:] */

void FUN_106fdf508(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf96330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_enqueueNotification__1125c3270);
  return;
}



/* Entry: 106fdf50c; end: 106fdf617; -[SCAppNotificationSequencer enqueueNotification:] */

void FUN_106fdf50c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c074cc0();
  if ((int)uVar1 == 0) {
    lVar6 = 0x28;
  }
  else {
    uVar2 = param_1;
    func_0x00010bf86280();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c102fc0();
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010bef0d40();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 != 0) {
      uVar4 = param_1;
      func_0x00010bef0d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c074cc0();
      _objc_release(uVar4);
      _objc_release(uVar2);
      lVar6 = 0x20;
      if (((uVar5 & 1) != 0) || (1 < uVar3)) goto LAB_106fdf5d0;
      func_0x00010c263d60(param_1,param_2,2);
    }
    lVar6 = 0x20;
  }
LAB_106fdf5d0:
  func_0x00010befa120(*(undefined8 *)(param_1 + lVar6),param_2,param_3);
  uVar2 = param_1;
  func_0x00010bef0d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 == 0) {
    func_0x00010bf860c0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106fdf618; end: 106fdf833; -[SCAppNotificationSequencer didApplicationStateChange:withCurrentNotifications:snapshot:] */

void FUN_106fdf618(long param_1,undefined8 param_2,int param_3,long param_4,undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
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
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_5 != (undefined *)0x0) {
    puVar1 = param_5;
  }
  _objc_retain(puVar1);
  lVar3 = param_1;
  func_0x00010bef0d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    lVar7 = param_1;
    func_0x00010bef0d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf4b900(puVar1,param_2,lVar7);
    _objc_release(lVar7);
    _objc_release(lVar3);
    if ((int)puVar2 != 0) {
      uVar4 = 0;
      if (param_3 == 0) {
        uVar4 = 3;
      }
      func_0x00010c263d60(param_1,param_2,uVar4);
    }
  }
  func_0x00010c12d500(*(undefined8 *)(param_1 + 0x20),param_2,puVar1);
  puVar2 = puVar1;
  func_0x00010c12d500(*(undefined8 *)(param_1 + 0x28));
  if (param_3 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_4);
    lVar3 = param_4;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar7 = *plStack_120;
      do {
        lVar8 = 0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(param_4);
          }
          uVar6 = *(undefined8 *)(lStack_128 + lVar8 * 8);
          uVar4 = uVar6;
          func_0x00010c232520();
          if ((int)uVar4 != 0) {
            func_0x00010bf86100(param_1,param_2,uVar6);
          }
          lVar8 = lVar8 + 1;
        } while (lVar3 != lVar8);
        lVar3 = param_4;
        puVar5 = &uStack_130;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(param_4);
    lVar3 = param_1;
    func_0x00010bef0d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar3 = *(long *)(param_1 + 0x20);
      func_0x00010bf529e0();
      puVar2 = (undefined *)puVar5;
      if (lVar3 == 0) {
        lVar3 = *(long *)(param_1 + 0x28);
        func_0x00010bf529e0();
        puVar2 = (undefined *)puVar5;
        if (lVar3 == 0) goto LAB_106fdf7e0;
      }
      func_0x00010bf860c0(param_1);
    }
    else {
      _objc_release();
      puVar2 = (undefined *)puVar5;
    }
  }
LAB_106fdf7e0:
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  uVar4 = *(undefined8 *)(param_4 + 0x40);
  *(undefined **)(param_4 + 0x40) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 106fdf834; end: 106fdf863; -[SCAppNotificationSequencer setIntentDonator:] */

void FUN_106fdf834(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fdf864; end: 106fdf867; -[SCAppNotificationSequencer setPlusFeatureGating:] */

void FUN_106fdf864(void)

{
  return;
}



/* Entry: 106fdf868; end: 106fdf86b; -[SCAppNotificationSequencer setAppGroupUserDefaults:] */

void FUN_106fdf868(void)

{
  return;
}



/* Entry: 106fdf86c; end: 106fdf86f; -[SCAppNotificationSequencer setImageFetchingService:] */

void FUN_106fdf86c(void)

{
  return;
}



/* Entry: 106fdf870; end: 106fdf88f; -[SCAppNotificationSequencer _isAppForegrounded] */

bool FUN_106fdf870(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010bf07b60(lVar1);
  return lVar1 == 0;
}



/* Entry: 106fdf890; end: 106fdf90b; -[SCAppNotificationSequencer _emitNotificationSuppressionEventWithNotification:suppressionReason:] */

void FUN_106fdf890(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b6b90;
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be3e240(param_1);
  func_0x00010c0dc1e0(puVar2,param_2,param_3,lVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x50),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106fdf90c; end: 106fdf923; -[SCAppNotificationSequencer delegate] */

void FUN_106fdf90c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fdf924; end: 106fdf93b; -[SCAppNotificationSequencer displayProtocol] */

void FUN_106fdf924(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fdf93c; end: 106fdf943; -[SCAppNotificationSequencer userSession] */

undefined8 FUN_106fdf93c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 106fdf944; end: 106fdf9fb; -[SCAppNotificationSequencer .cxx_destruct] */

void FUN_106fdf944(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106fdf9fc; end: 106fdfac7; -[SCBitmojiNotificationImageJob initWithNotification:imageLoader:snapchattersDataFetcher:] */

undefined1 *
FUN_106fdf9fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f8308;
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



/* Entry: 106fdfac8; end: 106fdfe2f; -[SCBitmojiNotificationImageJob fetchBitmojiImageWithCompletion:] */

void FUN_106fdfac8(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined1 *unaff_x22;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  ppuVar5 = &puStack_a0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c15df60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0720c0();
  if ((int)uVar4 == 0) {
    unaff_x22 = *(undefined1 **)(param_1 + 8);
    func_0x00010c15de20();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = unaff_x22;
    func_0x00010c0720c0();
    _objc_release(unaff_x22);
    _objc_release(uVar1);
    if ((int)puVar2 != 0) goto LAB_106fdfb74;
    lVar11 = *(long *)(param_1 + 8);
    func_0x00010bfce860();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar11 == 0) {
      _objc_initWeak(auStack_70,param_1);
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + 8);
      func_0x00010c15de20();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(PTR___dispatch_main_q_11034be20);
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_106fdfe30;
      puStack_88 = &UNK_1108677f8;
      _objc_retain(param_3);
      puVar9 = auStack_70;
      puStack_80 = param_3;
      _objc_copyWeak(auStack_78);
      param_4 = PTR___dispatch_main_q_11034be20;
      func_0x00010c2448c0(uVar4);
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_release(uVar1);
      _objc_release(uVar4);
      _objc_destroyWeak(auStack_78);
      _objc_release(puStack_80);
      _objc_destroyWeak(auStack_70);
    }
    else {
      lVar3 = *(long *)(param_1 + 8);
      func_0x00010c15de20();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar3;
      func_0x00010c08fa60();
      if (lVar11 == 0) {
        puVar10 = (undefined *)0x0;
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + 8);
        func_0x00010c15de20();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
        uStack_60 = uVar4;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
      }
      _objc_release(lVar3);
      ppuVar5 = *(undefined ***)(param_1 + 8);
      func_0x00010bfce860();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126b19f8;
      func_0x00010c0dbb80();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_68 = puVar6;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = (undefined1 *)ppuVar5;
      puVar9 = puVar10;
      func_0x0001085a31fc(ppuVar5,puVar10,0,puVar7,0x13,1,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(ppuVar5);
      param_4 = param_3;
      func_0x00010be10040(param_1);
      _objc_release(puVar2);
      _objc_release(puVar10);
    }
  }
  else {
    _objc_release(uVar1);
LAB_106fdfb74:
    ppuVar5 = (undefined **)unaff_x22;
    puVar10 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar10;
    (**(code **)(param_3 + 0x10))(param_3,puVar10,0);
    _objc_release(puVar10);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)ppuVar5 + 0x28));
  _objc_destroyWeak(auStack_70);
  __Unwind_Resume();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar9);
  if (puVar9 == (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
    (**(code **)(*(long *)(param_3 + 0x20) + 0x10))(*(long *)(param_3 + 0x20),0);
  }
  else {
    puVar6 = param_3 + 0x28;
    _objc_loadWeakRetained();
    if (puVar6 == (undefined *)0x0) {
LAB_106fdff44:
      puVar10 = (undefined *)0x0;
      (**(code **)(*(long *)(param_3 + 0x20) + 0x10))(*(long *)(param_3 + 0x20),0);
    }
    else {
      puVar10 = puVar9;
      func_0x00010bf1bae0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar10;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar10);
      if (puVar7 == (undefined *)0x0) goto LAB_106fdff44;
      puVar10 = PTR_PTR_1126b19f8;
      func_0x00010c0dbb80();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar9;
      func_0x0001085a30b8(puVar9,0,puVar7,0x13,1,0,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar10);
      param_4 = *(undefined **)(param_3 + 0x20);
      puVar10 = puVar8;
      func_0x00010be10040(puVar6);
      _objc_release(puVar8);
    }
    _objc_release(puVar6);
  }
  _objc_release(puVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar10);
  _objc_retain(param_4);
  puVar6 = puVar10;
  func_0x00010bf1ac80();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf1ae20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar6);
  puVar6 = puVar10;
  func_0x00010bf1ac80();
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 == (undefined *)0x0) {
    puVar7 = puVar6;
    func_0x00010bfce6a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar6);
    if (puVar7 == (undefined *)0x0) goto LAB_106fe0104;
    puVar6 = puVar10;
    func_0x00010bf1ac80(puVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bfce6a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be26640(puVar9);
    _objc_release(puVar7);
  }
  else {
    puVar7 = puVar6;
    func_0x00010bf1ae20();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    func_0x00010be0fec0(puVar9);
    _objc_release(puVar7);
    _objc_release(puVar6);
    puVar6 = param_4;
  }
  _objc_release(puVar6);
LAB_106fe0104:
  _objc_release(param_4);
  _objc_release(puVar10);
  return;
}



/* Entry: 106fdfe30; end: 106fdffb3;  */

void FUN_106fdfe30(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_2 == 0) {
    lVar5 = 0;
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  }
  else {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (lVar1 == 0) {
LAB_106fdff44:
      lVar5 = 0;
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
    }
    else {
      lVar5 = param_2;
      func_0x00010bf1bae0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar5);
      if (lVar2 == 0) goto LAB_106fdff44;
      puVar3 = PTR_PTR_1126b19f8;
      func_0x00010c0dbb80();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_2;
      func_0x0001085a30b8(param_2,0,puVar4,0x13,1,0,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
      param_4 = *(long *)(param_1 + 0x20);
      lVar5 = lVar2;
      func_0x00010be10040(lVar1);
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar5);
  _objc_retain(param_4);
  lVar6 = lVar5;
  func_0x00010bf1ac80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x00010bf1ae20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar6);
  lVar6 = lVar5;
  func_0x00010bf1ac80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar1 = lVar6;
    func_0x00010bfce6a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar6);
    if (lVar1 == 0) goto LAB_106fe0104;
    lVar6 = lVar5;
    func_0x00010bf1ac80(lVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar6;
    func_0x00010bfce6a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be26640(param_2);
    _objc_release(lVar1);
  }
  else {
    lVar1 = lVar6;
    func_0x00010bf1ae20();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    func_0x00010be0fec0(param_2);
    _objc_release(lVar1);
    _objc_release(lVar6);
    lVar6 = param_4;
  }
  _objc_release(lVar6);
LAB_106fe0104:
  _objc_release(param_4);
  _objc_release(lVar5);
  return;
}



/* Entry: 106fdffb4; end: 106fe012b; -[SCBitmojiNotificationImageJob _fetchBitmojiImagesForAvatarViewModel:completion:] */

void FUN_106fdffb4(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf1ac80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf1ae20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf1ac80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar2 = lVar1;
    func_0x00010bfce6a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 == 0) goto LAB_106fe0104;
    lVar1 = param_3;
    func_0x00010bf1ac80(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfce6a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be26640(param_1,param_2,lVar2,param_4);
    _objc_release(lVar2);
  }
  else {
    lVar2 = lVar1;
    func_0x00010bf1ae20();
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106fe012c;
    puStack_50 = &UNK_11085b810;
    _objc_retain(param_4);
    lStack_48 = param_4;
    func_0x00010be0fec0(param_1,param_2,lVar2,&puStack_68);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = lStack_48;
  }
  _objc_release(lVar1);
LAB_106fe0104:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106fe012c; end: 106fe013b;  */

void FUN_106fe012c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000106fe0138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,0);
  return;
}



/* Entry: 106fe013c; end: 106fe032b; -[SCBitmojiNotificationImageJob _handleBitmojiAvatarViewModels:completion:] */

void FUN_106fe013c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_110987bc8);
  uVar3 = uVar2;
  func_0x00010c0d3c80();
  _objc_release();
  _dispatch_group_create();
  uVar5 = param_3;
  func_0x00010bf529e0();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (uVar5 != 0) {
    uVar5 = 0;
    do {
      _dispatch_group_enter(uVar2);
      uVar4 = param_3;
      func_0x00010c0dfd40(param_3);
      _objc_retainAutoreleasedReturnValue();
      puStack_a8 = puVar1;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_106fe032c;
      puStack_90 = &UNK_110987b18;
      _objc_retain(uVar3);
      uStack_88 = uVar3;
      uStack_78 = uVar5;
      _objc_retain(uVar2);
      uStack_80 = uVar2;
      func_0x00010be0fec0(param_1);
      _objc_release(uStack_80);
      _objc_release(uStack_88);
      _objc_release(uVar4);
      uVar5 = uVar5 + 1;
      uVar4 = param_3;
      func_0x00010bf529e0();
    } while (uVar5 < uVar4);
  }
  _objc_initWeak(auStack_b0,param_1);
  puStack_e8 = puVar1;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x106fe03a4;
  puStack_d0 = &UNK_110848378;
  uStack_c8 = uVar3;
  _objc_retain(uVar3);
  _objc_copyWeak(auStack_b8,auStack_b0);
  uStack_c0 = param_4;
  _objc_retain(param_4);
  func_0x000100bc0718(uVar2,PTR___dispatch_main_q_11034be20,&puStack_e8);
  _objc_release(uStack_c0);
  _objc_destroyWeak(auStack_b8);
  _objc_release(uStack_c8);
  _objc_release(param_4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_b0);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 106fe032c; end: 106fe0427;  */

void FUN_106fe032c(long param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3f58;
  if (param_2 != 0) {
    _objc_retain(param_2);
    _objc_alloc(puVar1);
    func_0x00010c01c060();
    _objc_release(param_2);
    func_0x00010c1d04c0(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106fe0428; end: 106fe0517; -[SCBitmojiNotificationImageJob _fetchBitmojiForBitmojiAvatarViewModel:fetchCompletion:] */

void FUN_106fe0428(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  _objc_retain(param_4);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0be480(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106fe0518; end: 106fe0613;  */

void FUN_106fe0518(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x0001090072d8();
  if ((int)uVar1 == 0) {
    uVar1 = 2;
    func_0x0001000819a8(2,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106fe0614;
    puStack_50 = &UNK_110848378;
    _objc_copyWeak(auStack_38,param_1 + 0x28);
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uStack_48 = param_2;
    _objc_retain(uVar2);
    uStack_40 = uVar2;
    func_0x00010007380c(uVar1,&puStack_68);
    _objc_release(uVar1);
    _objc_release(uStack_40);
    _objc_release(uStack_48);
    _objc_destroyWeak(auStack_38);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 106fe0614; end: 106fe0647;  */

void FUN_106fe0614(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4e140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106fe0648; end: 106fe0717; -[SCBitmojiNotificationImageJob _loadNetworkImage:fetchCompletion:] */

void FUN_106fe0648(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  uVar1 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010bf88d40(uVar2);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_4);
  return;
}



/* Entry: 106fe0718; end: 106fe0777;  */

void FUN_106fe0718(long param_1,long param_2)

{
  undefined *puVar1;
  
  if (param_2 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d0c0(0x3ff0000000000000,PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_2,1);
    _objc_retainAutoreleasedReturnValue();
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106fe0778; end: 106fe0877; -[SCBitmojiNotificationImageJob _composeViewWithGroupBitmojiNotificationViewModels:completion:] */

void FUN_106fe0778(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d3f60;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c19f0e0(0,0,0x4066800000000000,0x4066800000000000);
  func_0x00010c222980(puVar1);
  _objc_release(param_3);
  func_0x00010c08cdc0(puVar1);
  _UIGraphicsBeginImageContext(0x4066800000000000,0x4066800000000000);
  _UIGraphicsGetCurrentContext();
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12fc60();
  _objc_release(puVar2);
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
  (**(code **)(param_4 + 0x10))(param_4,puVar2,0);
  _objc_release(param_4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106fe0878; end: 106fe08b3; -[SCBitmojiNotificationImageJob .cxx_destruct] */

void FUN_106fe0878(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106fe08b4; end: 106fe09a7;  */

void FUN_106fe08b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106fe09a8;
  uStack_30 = 0x106fe09b8;
  uStack_28 = 0;
  func_0x00010c0be480(param_2);
  puVar1 = PTR_PTR_1126d3f58;
  _objc_alloc(PTR_PTR_1126d3f58);
  func_0x00010c01c060();
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fe09a8; end: 106fe09bf;  */

void FUN_106fe09a8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106fe09c0; end: 106fe0a1b;  */

void FUN_106fe09c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x000108feaf80(param_4,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x000109007198();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106fe0a1c; end: 106fe0ac7; -[SCNotificationAttachmentFileAccessor fileURLForIdentifier:source:] */

void FUN_106fe0a1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  func_0x00010bf1b620(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c25ce00(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfad300(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106fe0ac8; end: 106fe0b07; -[SCNotificationAttachmentFileAccessor bitmojiFolderPathForSource:] */

void FUN_106fe0ac8(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 1) {
    func_0x00010be1cf00();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 0) {
    func_0x00010be1cee0();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fe0b08; end: 106fe0b9b; -[SCNotificationAttachmentFileAccessor _contentPath] */

void FUN_106fe0b08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf4b0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010bdc2c60(puVar2,param_2,*(undefined8 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106fe0b9c; end: 106fe0c3b; -[SCNotificationAttachmentFileAccessor _getAndEnsureContentFolderPath] */

void FUN_106fe0b9c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uStack_38;
  
  if (uRam00000001136c9f48 == 0) {
    uVar3 = param_1;
    func_0x00010bde7f40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uRam00000001136c9f48;
    uRam00000001136c9f48 = uVar3;
    _objc_release(uVar1);
    uStack_38 = 0;
    func_0x00010be0a480(param_1,param_2,uRam00000001136c9f48,&uStack_38);
    uVar2 = uStack_38;
    _objc_retain(uStack_38);
    uVar1 = uRam00000001136c9f48;
    if ((param_1 & 1) == 0) {
      uRam00000001136c9f48 = 0;
      _objc_release(uVar1);
    }
    _objc_release(uVar2);
  }
  uVar1 = uRam00000001136c9f48;
  _objc_retain(uRam00000001136c9f48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106fe0c3c; end: 106fe0d03; -[SCNotificationAttachmentFileAccessor _attachmentFolderPath] */

void FUN_106fe0c3c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x00010bdc34e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010bf529e0();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = puVar1;
    func_0x00010bfb1920(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010bdc2c60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c0f5800(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106fe0d04; end: 106fe0daf; -[SCNotificationAttachmentFileAccessor _getAndEnsureAttachmentFolderPath] */

void FUN_106fe0d04(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = uRam00000001136c9f50;
  if (uRam00000001136c9f50 == 0) {
    uVar1 = param_1;
    func_0x00010bdd0a20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uRam00000001136c9f50;
    uRam00000001136c9f50 = uVar1;
    _objc_release(uVar2);
    if (uRam00000001136c9f50 == 0) {
      uVar2 = 0;
    }
    else {
      func_0x00010be0a480();
      _objc_retain(0);
      uVar2 = uRam00000001136c9f50;
      if ((param_1 & 1) == 0) {
        uRam00000001136c9f50 = 0;
        _objc_release(uVar2);
      }
      _objc_release(0);
      uVar2 = uRam00000001136c9f50;
    }
  }
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106fe0db0; end: 106fe0fbb; -[SCNotificationAttachmentFileAccessor saveSharedData:identifier:error:] */

undefined *
FUN_106fe0db0(long param_1,undefined8 param_2,long param_3,undefined8 *param_4,undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010bfad200(param_1,param_2,param_4,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = (undefined1 *)0x1;
  puVar4 = param_4;
  func_0x00010bfad200(param_1,param_2,param_4,1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = (undefined *)0x0;
  if ((lVar1 != 0) && (param_1 != 0)) {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_80 = lVar1;
    lStack_78 = param_1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_80,2);
    _objc_retainAutoreleasedReturnValue();
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    _objc_retain();
    puVar4 = &uStack_140;
    puVar5 = auStack_100;
    puVar7 = puVar2;
    func_0x00010bf52a60(puVar2,param_2,puVar4,puVar5,0x10);
    if (puVar7 == (undefined *)0x0) {
      puVar7 = (undefined *)0x1;
    }
    else {
      lVar9 = *plStack_130;
      do {
        puVar6 = (undefined *)0x0;
        uVar8 = param_5;
        do {
          if (*plStack_130 != lVar9) {
            _objc_enumerationMutation(puVar2);
          }
          puVar4 = *(undefined8 **)(lStack_138 + (long)puVar6 * 8);
          puVar5 = (undefined1 *)0x1;
          lVar3 = param_3;
          uStack_148 = uVar8;
          func_0x00010c14e080(param_3,param_2,puVar4,1,&uStack_148);
          param_5 = uStack_148;
          _objc_retain(uStack_148);
          _objc_release(uVar8);
          if ((int)lVar3 == 0) {
            puVar7 = (undefined *)0x0;
            goto LAB_106fe0f44;
          }
          puVar6 = puVar6 + 1;
          uVar8 = param_5;
        } while (puVar7 != puVar6);
        puVar4 = &uStack_140;
        puVar5 = auStack_100;
        puVar7 = puVar2;
        func_0x00010bf52a60(puVar2,param_2,puVar4,puVar5,0x10);
      } while (puVar7 != (undefined *)0x0);
      puVar7 = (undefined *)0x1;
    }
LAB_106fe0f44:
    _objc_release(puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_1);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(puVar4);
    lVar1 = param_3;
    func_0x00010bfad200(param_3,param_2,puVar4,puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
    if (lVar1 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      func_0x00010bfad200(param_3,param_2,puVar4,puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf64ac0(puVar7,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
    }
    _objc_release(lVar1);
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return puVar7;
  }
  return puVar7;
}



/* Entry: 106fe0fbc; end: 106fe1077; -[SCNotificationAttachmentFileAccessor dataForIdentifier:source:] */

void FUN_106fe0fbc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bfad200(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x00010bfad200(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf64ac0(puVar2,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106fe1078; end: 106fe11a7; -[SCNotificationAttachmentFileAccessor clearFiles] */

void FUN_106fe1078(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bdd0a20(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bfacbe0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(puVar1);
  if ((int)puVar3 != 0) {
    uVar2 = param_1;
    func_0x00010bf1b620(param_1,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3b4a0(param_1,param_2,uVar2);
    _objc_release(uVar2);
  }
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bde7f40(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bfacbe0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(puVar1);
  if ((int)puVar3 != 0) {
    uVar2 = param_1;
    func_0x00010bf1b620(param_1,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3b4a0(param_1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 106fe11a8; end: 106fe1377; -[SCNotificationAttachmentFileAccessor clearFilesForPath:] */

undefined8 * FUN_106fe11a8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_3;
  _objc_retain(param_3);
  if (param_3 != (undefined8 *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    puVar6 = param_3;
    func_0x00010bfacc00();
    if ((int)puVar2 != 0) {
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uStack_138 = 0;
      puVar2 = puVar1;
      func_0x00010bf4dfc0(puVar1,param_2,param_3,&uStack_138);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uStack_138;
      _objc_retain(uStack_138);
      puVar6 = &uStack_130;
      puVar3 = puVar2;
      func_0x00010bf52a60(puVar2,param_2,puVar6,auStack_f0,0x10);
      if (puVar3 != (undefined *)0x0) {
        lVar11 = *plStack_120;
        do {
          puVar8 = (undefined *)0x0;
          uVar10 = uVar9;
          do {
            if (*plStack_120 != lVar11) {
              _objc_enumerationMutation(puVar2);
            }
            puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                &PTR____CFConstantStringClassReference_110db2d78);
            _objc_retainAutoreleasedReturnValue();
            uStack_140 = uVar10;
            func_0x00010c12cc40(puVar1,param_2,puVar4,&uStack_140);
            uVar9 = uStack_140;
            _objc_retain(uStack_140);
            _objc_release(uVar10);
            _objc_release(puVar4);
            puVar8 = puVar8 + 1;
            uVar10 = uVar9;
          } while (puVar3 != puVar8);
          puVar6 = &uStack_130;
          puVar3 = puVar2;
          func_0x00010bf52a60(puVar2,param_2,puVar6,auStack_f0,0x10);
        } while (puVar3 != (undefined *)0x0);
      }
      _objc_release(puVar2);
      _objc_release(uVar9);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfacbe0();
  _objc_release(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    puVar5 = (undefined8 *)PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf55d80();
    _objc_release(puVar5);
  }
  else {
    puVar7 = (undefined8 *)0x1;
  }
  _objc_release(puVar6);
  return puVar7;
}



/* Entry: 106fe1378; end: 106fe1427; -[SCNotificationAttachmentFileAccessor _ensureFolderExists:error:] */

undefined * FUN_106fe1378(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfacbe0();
  _objc_release(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf55d80();
    _objc_release(puVar1);
  }
  else {
    puVar2 = (undefined *)0x1;
  }
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 106fe1428; end: 106fe14db; -[SCNotificationAttachmentFileAccessor fileExistsForIdentifier:source:] */

undefined * FUN_106fe1428(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x00010bfad200();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c0f5800(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfacbe0(puVar3,param_2,lVar1);
    _objc_release(lVar1);
    _objc_release(puVar3);
  }
  _objc_release(param_1);
  return puVar4;
}



/* Entry: 106fe14dc; end: 106fe150b; -[SCNotificationAttachmentFileAccessor .cxx_destruct] */

void FUN_106fe14dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106fe150c; end: 106fe15af; -[SCUserNotificationAttachmentGenerator initWithFileAccessor:imageFetchingService:] */

undefined1 *
FUN_106fe150c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f8318;
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



/* Entry: 106fe15b0; end: 106fe177f; -[SCUserNotificationAttachmentGenerator generateNotificationAttachment:attachmentGenerationBlock:] */

void FUN_106fe15b0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_106fe1780;
  uStack_60 = 0x106fe1790;
  uStack_58 = 0;
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  if (param_4 == 0) {
LAB_106fe165c:
    if ((param_3 != 0) && (*(long *)(param_1 + 8) != 0)) {
      _objc_retain(puVar1);
      _objc_retain(puVar1);
      func_0x00010c0c0e20(param_3);
      _objc_release(puVar1);
      _objc_release(puVar1);
      goto LAB_106fe1708;
    }
  }
  else {
    lVar2 = param_4;
    (**(code **)(param_4 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puStack_78[5];
    puStack_78[5] = lVar2;
    _objc_release(uVar4);
    if (puStack_78[5] == 0) goto LAB_106fe165c;
  }
  func_0x00010bf43d60(puVar1);
LAB_106fe1708:
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106fe1780; end: 106fe1797;  */

void FUN_106fe1780(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106fe1798; end: 106fe1837;  */

void FUN_106fe1798(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c25ce20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdeaea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_completeWithValue__1125ae900,
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
  return;
}



/* Entry: 106fe1838; end: 106fe1947;  */

void FUN_106fe1838(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bdc2600();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25ce20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  _objc_retain(puVar4);
  _objc_retain(param_2);
  func_0x00010be0fc00(uVar1);
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(param_2);
  _objc_release(puVar4);
  _objc_release(param_2);
  return;
}



/* Entry: 106fe1948; end: 106fe19ab;  */

void FUN_106fe1948(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bdeaea0(uVar1,param_2,param_2,*(undefined8 *)(param_1 + 0x38));
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = uVar1;
    _objc_release(uVar2);
    uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_completeWithValue__1125ae900,uVar1);
  return;
}



/* Entry: 106fe19ac; end: 106fe1bc7; -[SCUserNotificationAttachmentGenerator _fetchAttachmentForUrl:completion:] */

void FUN_106fe19ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b08b0;
  func_0x00010bf33760(PTR_PTR_1126b08b0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b17d8;
  _objc_alloc(PTR_PTR_1126b17d8);
  func_0x00010c003a80();
  puVar4 = PTR_PTR_1126b85a0;
  puVar3 = puVar2;
  func_0x00010bf220e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23c900(puVar4,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126aebf0;
  _objc_alloc(PTR_PTR_1126aebf0);
  lVar5 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011b80(puVar3,param_2,lVar5,0x22);
  _objc_release(lVar5);
  puVar6 = PTR_PTR_1126bd460;
  func_0x00010c27f9a0(PTR_PTR_1126bd460);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b85a8;
  _objc_alloc(PTR_PTR_1126b85a8);
  puVar8 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010c01cf20(puVar7,param_2,puVar4,puVar3,puVar6);
  _objc_release(puVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106fe1bc8;
  puStack_70 = &UNK_11084d628;
  uStack_68 = param_4;
  _objc_retain(param_4);
  func_0x00010bfa7900(uVar9,param_2,puVar7,&puStack_88);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uStack_68);
  _objc_release(param_4);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 106fe1bc8; end: 106fe1c83;  */

void FUN_106fe1bc8(long param_1,undefined8 param_2)

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


