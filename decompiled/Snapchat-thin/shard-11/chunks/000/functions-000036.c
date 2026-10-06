/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108094974; end: 1080949cf; -[SCValdiMaskLayer setMaskImageGradientLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108094974(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  
  func_0x000108098680();
  lVar2 = (long)_DAT_1127741bc;
  func_0x000108098790();
  uVar1 = *(undefined8 *)(unaff_x20 + lVar2);
  *(long *)(unaff_x20 + lVar2) = unaff_x19;
  _objc_release(uVar1);
  if (unaff_x19 != 0) {
    func_0x0001080988ac();
    func_0x00010c19f0e0();
  }
  func_0x00010c1c2c00();
  func_0x00010bedcc60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080949d0; end: 1080949df; -[SCValdiMaskLayer maskPath] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080949d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127741d0);
}



/* Entry: 1080949e0; end: 1080949ef; -[SCValdiMaskLayer maskOpacity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080949e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127741b4);
}



/* Entry: 1080949f0; end: 1080949ff; -[SCValdiMaskLayer maskImageGradientLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080949f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127741bc);
}



/* Entry: 108094a00; end: 108094a4f; -[SCValdiMaskLayer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108094a00(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127741bc,0);
  _objc_storeStrong(param_1 + _DAT_1127741d0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127741b8,0);
  return;
}



/* Entry: 108094a50; end: 108094a57;  */

undefined8 FUN_108094a50(void)

{
  return 0;
}



/* Entry: 108094a58; end: 108094a77;  */

bool FUN_108094a58(long *param_1)

{
  func_0x00010809892c();
  return *param_1 != 0;
}



/* Entry: 108094a78; end: 108094af7;  */

void FUN_108094a78(long *param_1)

{
  long unaff_x19;
  
  func_0x0001080986e8();
  func_0x00010809892c();
  *param_1 = *param_1 + 1;
  func_0x00010c2965e0();
  (**(code **)(unaff_x19 + 0x10))();
  *param_1 = *param_1 + -1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108094af8; end: 108094bbf;  */

void FUN_108094af8(ulong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  ulong uVar1;
  undefined8 uVar2;
  undefined8 extraout_x8;
  undefined8 unaff_x20;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  ulong uStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_48;
  
  func_0x000108098760();
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_48 = extraout_x8;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001080987d4();
  if (uVar1 != 0) {
    lVar3 = *plStack_100;
    do {
      uVar4 = 0;
      do {
        if (*plStack_100 != lVar3) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c2965e0(*(undefined8 *)(lStack_108 + uVar4 * 8));
        uVar4 = uVar4 + 1;
        in_ZR = uVar4 == uVar1;
      } while (uVar4 < uVar1);
      uVar1 = param_1;
      param_3 = &uStack_110;
      func_0x00010809887c();
      unaff_x20 = 0;
    } while (uVar1 != 0);
  }
  uVar2 = 0;
  func_0x000108098758();
  func_0x0001080986d4(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_108094bc0;
  uStack_130 = unaff_x20;
  uStack_128 = param_1;
  puStack_120 = &stack0xfffffffffffffff0;
  if ((param_3 < (undefined1 *)0x5) && ((1L << ((ulong)param_3 & 0x3f) & 0x19U) != 0)) {
    func_0x00010c2954e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080988dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  _objc_initWeak(auStack_138,uVar2);
  func_0x00010c2954e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108098974();
  _objc_copyWeak(auStack_140,auStack_138);
  func_0x00010c18d6c0(uVar2);
  func_0x000108098758();
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_138);
  return;
}



/* Entry: 108094bc0; end: 108094cd3;  */

void FUN_108094bc0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if ((param_3 < 5) && ((1L << (param_3 & 0x3f) & 0x19U) != 0)) {
    func_0x00010c2954e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080988dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  _objc_initWeak(auStack_28,param_1);
  func_0x00010c2954e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108098974();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c18d6c0(param_1);
  func_0x000108098758();
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 108094cd4; end: 108094cfb;  */

void FUN_108094cd4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2965a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108094cfc; end: 1080952b7;  */

undefined *
FUN_108094cfc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined *param_5)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 extraout_x8;
  double dVar4;
  double dVar5;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  puVar1 = param_5;
  func_0x000108098760();
  FUN_1080952b8();
  func_0x000108098790();
  puVar2 = param_5;
  _objc_getAssociatedObject(param_5,PTR_LOOP_113253520);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    func_0x00010c08c0e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1fc80();
    func_0x000108098750();
  }
  else {
    func_0x00010bf885a0(puVar2);
  }
  func_0x000108098778();
  func_0x000108098758();
  func_0x000108098790();
  puVar2 = param_5;
  _objc_getAssociatedObject(param_5,PTR_LOOP_113253528);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar3 = param_5;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1fb20();
    func_0x000108098778();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    if (puVar3 == (undefined *)0x0) {
      func_0x00010bf1c920();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c08c0e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1fb20();
      func_0x00010bf41520();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108098748();
    }
  }
  else {
    func_0x00010809883c();
  }
  func_0x000108098750();
  func_0x000108098758();
  if (puVar1 == (undefined *)0x0) {
    func_0x000108095308(param_5);
    func_0x00010c08c0e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(param_1);
    func_0x000108098770();
    if (puVar2 == (undefined *)0x0) {
      func_0x00010bf3ae40();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108098a24();
      func_0x00010bdc0fe0();
      func_0x000108098750();
    }
    else {
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
    }
    func_0x00010c08c0e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    func_0x000108098750();
  }
  else {
    in_ZR = puVar1 + -3 == (undefined *)0x1;
    if (puVar1 + -3 < (undefined *)0x2) {
      func_0x000108095308();
      func_0x00010c08c0e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108098a2c();
      func_0x000108098750();
      func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108098a24();
      func_0x00010bdc0fe0();
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108098a10();
      func_0x000108098780();
      func_0x000108098750();
    }
    else {
      func_0x00010c08c0e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108098a2c();
      func_0x000108098750();
      func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108098a24();
      func_0x00010bdc0fe0();
      func_0x00010c08c0e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108098a10();
      func_0x000108098780();
      func_0x000108098750();
      in_ZR = param_1 == 0.0;
      if ((0.0 < param_1) && (puVar2 != (undefined *)0x0)) {
        func_0x000108098790();
        puVar2 = param_5;
        func_0x000108098650();
        _objc_retainAutoreleasedReturnValue();
        if (puVar2 == (undefined *)0x0) {
          puVar2 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
          func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010809893c();
          func_0x00010bdc0fe0();
          func_0x000108098994();
          func_0x00010c19bc00();
          func_0x000108098748();
          func_0x0001080989b8();
          func_0x00010c22ba80();
          _objc_retainAutoreleasedReturnValue();
          func_0x000108098a84();
          func_0x00010c18b5e0();
          func_0x000108098748();
          func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14e120();
          func_0x00010c182d20(puVar2);
          func_0x000108098748();
          func_0x00010c1bdc80(puVar2);
          func_0x00010809865c(param_5,puVar2);
          func_0x00010c08c0e0(param_5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befbb20();
          func_0x000108098748();
        }
        func_0x000108098758();
        func_0x0001080988b4();
        func_0x00010c19f0e0(puVar2);
        func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010809893c();
        func_0x00010bdc0fe0();
        func_0x000108098994();
        func_0x00010c19bc00();
        func_0x000108098748();
        func_0x000108098a78();
        func_0x00010c1bdd00();
        _objc_retainAutorelease();
        func_0x00010bdc0fe0();
        func_0x000108098994();
        func_0x00010c20e8e0();
        if (puVar1 == (undefined *)0x2) {
          in_ZR = param_1 == 1.0;
          dVar5 = 1.0;
          if (1.0 <= param_1) {
            dVar5 = param_1;
          }
          func_0x0001080989a0(dVar5);
          func_0x00010c0df720();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0df720(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x000108098898();
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          func_0x000108098904();
          func_0x000108098868();
          func_0x000108098780();
          func_0x000108098748();
        }
        else {
          in_ZR = puVar1 == (undefined *)0x1;
          if ((bool)in_ZR) {
            dVar4 = param_1 * 3.0;
            in_ZR = dVar4 == 1.0;
            dVar5 = 1.0;
            if (1.0 <= dVar4) {
              dVar5 = dVar4;
            }
            func_0x0001080989a0(dVar5);
            func_0x00010c0df720();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0df720(param_1);
            _objc_retainAutoreleasedReturnValue();
            func_0x000108098898();
            func_0x00010bf0a140();
            _objc_retainAutoreleasedReturnValue();
            func_0x000108098904();
            func_0x000108098868();
            func_0x000108098780();
            func_0x000108098748();
          }
          else {
            func_0x000108098a6c();
            func_0x00010c1bdb80();
          }
        }
        func_0x00010c1bdb40(puVar2);
        _objc_getAssociatedObject(param_5,PTR_LOOP_113253530);
        _objc_retainAutoreleasedReturnValue();
        if (param_5 == (undefined *)0x0) {
          uStack_b0 = 0;
          uStack_a8 = 0;
          uStack_b8 = 0;
          uStack_c0 = 0;
        }
        else {
          func_0x00010bfcbfc0();
          func_0x000108098748();
        }
        func_0x0001080988b4();
        FUN_1080945fc(uStack_c0,uStack_b8,uStack_a8,uStack_b0,param_3,param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010809893c();
        func_0x00010bdc1040();
        func_0x000108098994();
        func_0x00010c1d9820();
        func_0x000108098820();
        func_0x00010c295940();
        func_0x000108098748();
        func_0x000108098750();
        goto LAB_108095154;
      }
      func_0x000108095308();
    }
    func_0x000108098820();
  }
  func_0x00010c295940();
LAB_108095154:
  func_0x000108098778();
  func_0x0001080986d4(extraout_x8);
  if ((bool)in_ZR) {
    return param_5;
  }
  ___stack_chk_fail();
  _objc_getAssociatedObject();
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == (undefined *)0x0) {
    param_5 = (undefined *)0x0;
  }
  else {
    func_0x00010c2827c0(param_5);
  }
  func_0x000108098758();
  return param_5;
}



/* Entry: 1080952b8; end: 108095357;  */

long FUN_1080952b8(long param_1)

{
  _objc_getAssociatedObject(param_1,PTR_LOOP_113253510);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010c2827c0(param_1);
  }
  func_0x000108098758();
  return param_1;
}



/* Entry: 108095358; end: 108095497;  */

void FUN_108095358(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x19;
  undefined *unaff_x21;
  
  func_0x0001080986e8();
  puVar1 = unaff_x21;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0bc120();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108098750();
  _objc_opt_class(PTR_PTR_1126d91e8);
  func_0x0001080987c0();
  func_0x0001080987b0();
  func_0x000108098770();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126d91e8;
    _objc_opt_new();
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    func_0x000108098750();
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c19f0e0(puVar2);
    func_0x000108098750();
  }
  (**(code **)(unaff_x19 + 0x10))();
  puVar1 = unaff_x21;
  func_0x00010c2954e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c071780();
  if ((int)puVar2 == 0) {
    func_0x0001080988cc();
    if (((ulong)puVar2 & 1) != 0) goto LAB_108095484;
  }
  else {
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    func_0x000108098778();
    func_0x0001080988cc();
    if (((ulong)unaff_x21 & 1) == 0) goto LAB_108095484;
  }
  func_0x00010c18d6c0(puVar1);
LAB_108095484:
  func_0x000108098750();
  func_0x000108098770();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108095498; end: 10809553b;  */

void FUN_108095498(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  
  func_0x0001080987a0();
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bc120();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108098770();
  puVar1 = PTR_PTR_1126d91e8;
  _objc_opt_class(PTR_PTR_1126d91e8);
  uVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  if ((uVar2 & 1) == 0) {
    param_2 = 0;
  }
  func_0x000108098798();
  func_0x000108098778();
  func_0x0001080988b4();
  func_0x000108098a58();
  func_0x000108098758();
  func_0x000108098704(param_2);
  func_0x00010c19f0e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10809553c; end: 1080956db;  */

void FUN_10809553c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x19;
  undefined *unaff_x20;
  
  func_0x000108098680();
  puVar1 = unaff_x20;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bc120();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108098778();
  puVar2 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  _objc_opt_class();
  func_0x000108098844();
  puVar3 = puVar1;
  if (((ulong)puVar2 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  func_0x000108098810();
  func_0x000108098750();
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  if (puVar3 == (undefined *)0x0) {
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x000108098a58();
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf525a0();
    func_0x000108098704(puVar2);
    func_0x00010bf19a00();
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    func_0x000108098868();
  }
  else {
    func_0x00010c0f5800();
    puVar3 = puVar1;
    func_0x00010b96bf1c();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c076f00();
    puVar2 = puVar1;
    if ((int)puVar4 == 0) goto LAB_108095674;
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110ed40d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eeea0(puVar3,param_2,puVar1,4);
  }
  func_0x000108098780();
LAB_108095674:
  func_0x000108098750();
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  if (unaff_x19 == 0) {
    func_0x00010c1fe820(unaff_x20,param_2,puVar2);
  }
  else {
    func_0x000108098820();
    func_0x000108098884();
  }
  func_0x000108098770();
  func_0x000108098778();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080956dc; end: 108095b2f;  */

/* WARNING: Possible PIC construction at 0x00010809585c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108095860) */

ulong FUN_1080956dc(undefined8 param_1,ulong param_2,ulong param_3,undefined *param_4,ulong param_5)

{
  undefined1 uVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 extraout_x8;
  double dStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  uVar3 = param_2;
  func_0x000108098760();
  func_0x000108098788();
  func_0x000108098790();
  if ((param_4 == (undefined *)0x0) || (func_0x00010809891c(), uVar3 < 3)) {
    param_4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c295120();
    func_0x000108098994();
    func_0x00010c0df7c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108098898();
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108098770();
    func_0x000108098750();
    func_0x000108098748();
    func_0x00010c2954e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080988dc();
    func_0x000108098770();
    func_0x00010c08c0e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe820();
    func_0x000108098770();
  }
  puVar4 = param_4;
  func_0x00010c0dfd20();
  iVar2 = (int)puVar4;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x000108098750();
  if (iVar2 != 0) {
    func_0x00010c2954e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080988dc();
    func_0x000108098750();
    func_0x00010c08c0e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe820();
    func_0x000108098750();
    func_0x00010c0dfd20(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108098a38();
    func_0x00010c0dfd20(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x000108098748();
    func_0x000108098750();
    uVar3 = param_2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    if (param_5 == 0) {
      func_0x000108098a78();
      func_0x00010c1fe7a0();
    }
    else {
      func_0x00010c297120(PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_5;
      func_0x000108098884();
      func_0x000108098748();
    }
    func_0x000108098750();
    func_0x00010809891c();
    if (3 < uVar3) {
      func_0x00010c0dfd20(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108098a38();
      func_0x000108098750();
      uVar3 = param_2;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      if (param_5 == 0) {
        func_0x000108098a78();
        func_0x00010c1fe840();
      }
      else {
        func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_5;
        func_0x000108098884();
        func_0x000108098748();
      }
      func_0x000108098750();
    }
    func_0x00010809891c();
    uVar1 = uVar3 == 5;
    if (4 < uVar3) {
      func_0x00010c0dfd20(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0();
      func_0x00010b988f18();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108098748();
      func_0x00010bfc9760(param_4);
      func_0x00010bf41620(uStack_a8,uStack_b0,uStack_b8,0x3ff0000000000000,
                          PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      func_0x000108098780();
      uVar3 = param_2;
      func_0x00010c08c0e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      if (param_5 == 0) {
        func_0x00010c1fe740(uVar3);
        func_0x000108098780();
        func_0x00010c08c0e0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1fe800((float)dStack_c0);
      }
      else {
        func_0x000108098884(param_5);
        func_0x000108098780();
        func_0x00010c08c0e0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0df720(dStack_c0,PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x000108098a4c();
        func_0x000108098884();
        func_0x000108098748();
      }
      func_0x000108098778();
      func_0x000108098750();
    }
    param_2 = param_3;
    func_0x000108098758();
    func_0x000108098770();
    func_0x0001080986d4(extraout_x8);
    if ((bool)uVar1) {
      return 1;
    }
    ___stack_chk_fail();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c295650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_valdi_applyShadowPathWithAnimato_112682fb8);
  return param_2;
}



/* Entry: 108095b30; end: 108095b37;  */

void FUN_108095b30(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c295650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_valdi_applyShadowPathWithAnimato_112682fb8);
  return;
}



/* Entry: 108095b38; end: 108095beb;  */

undefined8 FUN_108095b38(ulong param_1)

{
  int iVar1;
  long unaff_x19;
  undefined8 uVar2;
  
  func_0x000108098680();
  if (unaff_x19 == 0) {
    func_0x00010c182220();
    uVar2 = 1;
    goto LAB_108095bd0;
  }
  func_0x000108098790();
  func_0x000108098818();
  if (((param_1 & 1) == 0) && (func_0x000108098818(), (param_1 & 1) == 0)) {
    func_0x000108098818();
    iVar1 = (int)param_1;
    if (((param_1 & 1) != 0) || (func_0x000108098818(), iVar1 != 0)) goto LAB_108095bc0;
    uVar2 = 0;
  }
  else {
LAB_108095bc0:
    func_0x00010c182220();
    uVar2 = 1;
  }
  func_0x000108098758();
LAB_108095bd0:
  func_0x000108098758();
  return uVar2;
}



/* Entry: 108095bec; end: 108095d07;  */

undefined8 FUN_108095bec(void)

{
  long lVar1;
  long in_x3;
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001080986e8();
  func_0x000108098798();
  func_0x000108098810();
  func_0x000108098790();
  if (unaff_x19 == 0) {
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000108098790();
  }
  lVar1 = unaff_x21;
  func_0x00010809888c();
  func_0x000108098750();
  func_0x000108098758();
  func_0x000108098778();
  func_0x0001080989e4();
  if (lVar1 == 0) {
    if (unaff_x19 == 0) {
      func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010809893c();
      func_0x00010bdc0fe0();
      func_0x000108098748();
    }
    else {
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
    }
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    if (in_x3 == 0) {
      func_0x00010c173280(unaff_x21);
    }
    else {
      func_0x000108098a1c(in_x3);
    }
    func_0x000108098748();
    func_0x0001080989e4();
    func_0x00010c295940();
  }
  else {
    func_0x00010c2965a0();
  }
  func_0x000108098770();
  func_0x000108098758();
  return 1;
}



/* Entry: 108095d08; end: 108095ee7;  */

undefined8
FUN_108095d08(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined *param_4,
             long param_5)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined8 extraout_x8;
  undefined *puVar4;
  
  puVar3 = param_2;
  func_0x000108098760();
  func_0x000108098788();
  func_0x000108098790();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_4 == (undefined *)0x0) {
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c295120();
    func_0x00010c0df7c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108098898();
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x000108098748();
    func_0x000108098750();
    param_4 = puVar4;
  }
  func_0x00010809882c();
  if (puVar3 == (undefined *)0x0) {
    param_1 = 0;
  }
  else {
    func_0x000108098a40();
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108098a38();
    func_0x000108098750();
  }
  puVar4 = param_2;
  func_0x00010c295b00(param_1);
  func_0x00010809882c();
  if ((undefined *)0x1 < puVar4) {
    puVar4 = param_4;
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010809882c();
  if ((undefined *)0x2 < puVar4) {
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class();
  func_0x000108098844();
  if (((ulong)puVar4 & 1) != 0) {
    func_0x00010c067fc0();
    func_0x00010b988f18();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c295aa0(param_2);
    func_0x000108098780();
  }
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x000108098690();
  uVar2 = ((ulong)puVar4 & 1) == 0;
  func_0x00010c295ae0();
  func_0x000108098748();
  func_0x000108098750();
  func_0x000108098758();
  func_0x000108098778();
  func_0x0001080986d4(extraout_x8);
  if ((bool)uVar2) {
    return 1;
  }
  ___stack_chk_fail();
  func_0x0001080986e8();
  func_0x000108098798();
  func_0x000108098790();
  if (param_5 != 0) {
    func_0x000108098818();
    if (((ulong)param_2 & 1) != 0) {
      puVar4 = (undefined *)0x3;
      goto LAB_108095f54;
    }
    func_0x000108098818();
    if (((ulong)param_2 & 1) != 0) {
      puVar4 = (undefined *)0x4;
      goto LAB_108095f54;
    }
    func_0x000108098818();
    if (((ulong)param_2 & 1) == 0) {
      func_0x000108098818();
      if (((ulong)param_2 & 1) == 0) {
        func_0x000108098818();
        puVar4 = (undefined *)0x2;
        if ((int)param_2 == 0) {
          puVar4 = (undefined *)0x0;
        }
      }
      else {
        puVar4 = (undefined *)0x1;
      }
      goto LAB_108095f54;
    }
  }
  puVar4 = (undefined *)0x0;
LAB_108095f54:
  func_0x000108098758();
  func_0x0001080989e4();
  puVar1 = PTR_LOOP_113253510;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_2 != puVar4) {
    func_0x000108098810();
    func_0x00010c0df840(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010809888c(param_4,puVar1);
    func_0x000108098778();
    func_0x000108098750();
    func_0x00010c2965a0(param_4);
  }
  func_0x000108098770();
  func_0x000108098758();
  return 1;
}



/* Entry: 108095ee8; end: 108095ff3;  */

undefined8 FUN_108095ee8(ulong param_1)

{
  undefined *puVar1;
  long unaff_x19;
  ulong uVar2;
  
  func_0x0001080986e8();
  func_0x000108098798();
  func_0x000108098790();
  if (unaff_x19 != 0) {
    func_0x000108098818();
    if ((param_1 & 1) != 0) {
      uVar2 = 3;
      goto LAB_108095f54;
    }
    func_0x000108098818();
    if ((param_1 & 1) != 0) {
      uVar2 = 4;
      goto LAB_108095f54;
    }
    func_0x000108098818();
    if ((param_1 & 1) == 0) {
      func_0x000108098818();
      if ((param_1 & 1) == 0) {
        func_0x000108098818();
        uVar2 = 2;
        if ((int)param_1 == 0) {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 1;
      }
      goto LAB_108095f54;
    }
  }
  uVar2 = 0;
LAB_108095f54:
  func_0x000108098758();
  func_0x0001080989e4();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_1 != uVar2) {
    func_0x000108098810();
    func_0x00010c0df840(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010809888c();
    func_0x000108098778();
    func_0x000108098750();
    func_0x00010c2965a0();
  }
  func_0x000108098770();
  func_0x000108098758();
  return 1;
}



/* Entry: 108095ff4; end: 1080960c7;  */

void FUN_108095ff4(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  func_0x0001080988fc();
  func_0x000108098798();
  if (param_8 == 0) {
    func_0x00010c08c0e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c19f0e0(param_7);
  }
  else {
    func_0x00010bfb68e0();
    func_0x00010c297180(param_3 * 0.5,param_4 * 0.5,PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108098738();
    func_0x000108098778();
    func_0x00010c2971a0(0,0,param_3,param_4,PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108098738();
  }
  func_0x000108098770();
  func_0x000108098778();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_8);
  return;
}



/* Entry: 1080960c8; end: 108096123;  */

undefined8 FUN_1080960c8(void)

{
  func_0x000108098680();
  func_0x000108098800();
  func_0x000108098984(FUN_108096124);
  func_0x000108098790();
  func_0x000108098a00();
  func_0x0001080989ec();
  func_0x000108098758();
  return 1;
}



/* Entry: 108096124; end: 10809613b;  */

void FUN_108096124(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1c2c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setMaskPath__11264e548,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10809613c; end: 108096187;  */

undefined8 FUN_10809613c(void)

{
  func_0x000108098800();
  func_0x00010c2965c0();
  return 1;
}



/* Entry: 108096188; end: 10809619b;  */

void FUN_108096188(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1c2c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),param_2,PTR_s_setMaskOpacity__11264e540);
  return;
}



/* Entry: 10809619c; end: 10809623b;  */

undefined8 FUN_10809619c(void)

{
  ulong unaff_x19;
  
  func_0x0001080986e8();
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  if (unaff_x19 < 2) {
    func_0x00010c2965c0();
  }
  else {
    func_0x000108098800();
    func_0x000108098984(FUN_108096248);
    func_0x000108098790();
    func_0x00010c2965c0();
    func_0x0001080989ec();
  }
  func_0x000108098770();
  func_0x000108098758();
  return 1;
}



/* Entry: 10809623c; end: 108096247;  */

void FUN_10809623c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1c2c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setMaskImageGradientLayer__11264e530,0);
  return;
}



/* Entry: 108096248; end: 1080962db;  */

void FUN_108096248(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x0001080987a0();
  func_0x00010c0bc180();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    func_0x0001080989c4();
    func_0x0001080989b8();
    func_0x00010c22ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0(param_2);
    func_0x000108098750();
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_1080a7b84(uVar1,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108098778();
  func_0x000108098820();
  func_0x00010c1c2c20();
  func_0x000108098758();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1080962dc; end: 1080962eb;  */

void FUN_1080962dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2955b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_valdi_applyImageMask_animator__112682f90,
             PTR____NSArray0__struct_11034ab48,param_3);
  return;
}



/* Entry: 1080962ec; end: 108096567;  */

undefined8 FUN_1080962ec(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x000108098788();
  func_0x000108098798();
  func_0x00010bfb1920(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf14020();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010809882c();
  if ((uVar1 < 2) && (uVar2 != 0)) {
    func_0x00010c12c940(uVar2);
    func_0x000108098a6c();
    func_0x00010c16e680();
    func_0x000108098748();
    uVar1 = param_1;
    func_0x00010c2954e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080988dc();
    func_0x000108098748();
    uVar2 = 0;
  }
  func_0x00010809882c();
  if (uVar1 == 0) {
    func_0x000108098a6c();
    func_0x00010c2959e0();
  }
  else {
    func_0x00010809882c();
    if (uVar1 == 1) {
      func_0x000108098a40();
      func_0x00010c0dfd20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0();
      func_0x00010b988f18();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2959e0(param_1);
      func_0x000108098868();
      func_0x000108098780();
    }
    else {
      if (uVar2 == 0) {
        func_0x0001080989c4();
        func_0x0001080989b8();
        func_0x00010c22ba80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c18b5e0(uVar1);
        func_0x000108098780();
        func_0x00010c227960(0xbff0000000000000,uVar1);
        func_0x000108098a84();
        func_0x00010c16e680();
        uVar2 = uVar1;
      }
      FUN_1080a7b84(param_3,uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108098748();
      func_0x00010c08c0e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf525a0();
      func_0x00010c1842e0(param_3);
      func_0x000108098748();
      func_0x00010c08c0e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0bc2a0();
      func_0x00010c1c2ce0(param_3);
      func_0x000108098748();
      func_0x00010c295780(param_1);
      uVar2 = param_1;
      func_0x00010c2954e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108098800();
      func_0x0001080987a8();
      func_0x00010c18d6c0(uVar2);
      func_0x000108098748();
      func_0x00010c08c0e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066f40();
      func_0x000108098750();
      func_0x0001080989ec();
    }
  }
  func_0x000108098748();
  func_0x000108098778();
  func_0x000108098770();
  func_0x000108098758();
  return 1;
}



/* Entry: 108096568; end: 108096577;  */

void FUN_108096568(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c295790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_valdi_layoutBackgroundLayer_anim_112683008,
             *(undefined8 *)(param_1 + 0x20),param_3);
  return;
}



/* Entry: 108096578; end: 10809664f;  */

undefined8 FUN_108096578(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  func_0x000108098788();
  func_0x000108098790();
  puVar1 = param_3;
  if (param_3 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x000108098798();
  func_0x000108098750();
  if (param_3 == (undefined *)0x0) {
    func_0x000108098770();
  }
  if (param_4 != 0) {
    uVar2 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    _objc_retainAutorelease(puVar1);
    func_0x00010bdc0fe0();
    func_0x00010bef6ca0(param_4,param_2,uVar2,&PTR____CFConstantStringClassReference_110e20958,
                        puVar3);
    func_0x000108098750();
  }
  _objc_retainAutorelease(puVar1);
  func_0x00010bdc0fe0();
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  func_0x000108098778();
  func_0x000108098758();
  func_0x000108098770();
  return 1;
}



/* Entry: 108096650; end: 108096653;  */

void FUN_108096650(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c17d4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setClipsToBounds__11263cf50);
  return;
}



/* Entry: 108096654; end: 10809678b;  */

void FUN_108096654(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  func_0x0001080988fc();
  lVar1 = param_2;
  func_0x00010bf14020();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == 0) {
    func_0x00010c1842e0(param_1,lVar2);
    func_0x000108098748();
    func_0x00010c1842e0(param_1,lVar1);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6ca0(param_5,param_3,lVar2,&PTR____CFConstantStringClassReference_110e41f98,
                        puVar3);
    func_0x000108098780();
    func_0x000108098748();
    if (lVar1 != 0) {
      func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108098a4c();
      func_0x000108098884();
      func_0x000108098748();
    }
  }
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2ce0();
  func_0x000108098750();
  func_0x00010c1c2ce0(lVar1,param_3,param_4);
  func_0x000108098778();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10809678c; end: 108096857;  */

void FUN_10809678c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001080986c8();
  func_0x000108098974();
  func_0x000108098790();
  func_0x000108098a00();
  func_0x00010c295580(0);
  _objc_release(param_3);
  func_0x000108098758();
  return;
}



/* Entry: 108096858; end: 10809695f;  */

void FUN_108096858(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = param_2;
  func_0x0001080987a0();
  if (*(long *)(param_2 + 0x20) == 0) {
    func_0x0001080988e4();
  }
  else {
    func_0x000108098a08();
    if (lVar1 == 0) {
      uVar2 = *(ulong *)(param_2 + 0x28);
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0bc2a0();
      func_0x000108098778();
      func_0x00010c08c0e0(*(undefined8 *)(param_2 + 0x28));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf525a0();
      func_0x000108098778();
      uVar4 = 0;
      if ((uVar2 & 1) != 0) {
        uVar4 = param_1;
      }
      uVar5 = 0;
      if ((uVar2 & 2) != 0) {
        uVar5 = param_1;
      }
      uVar7 = 0;
      if ((uVar2 & 4) != 0) {
        uVar7 = param_1;
      }
      uVar6 = 0;
      if ((uVar2 & 8) != 0) {
        uVar6 = param_1;
      }
      lVar1 = param_3;
      func_0x00010c2174a0(uVar4,uVar5,uVar6,uVar7,param_3);
    }
    func_0x000108098a08();
    _CFRetain();
    lVar3 = param_3;
    func_0x00010c283e60(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x38),
                        *(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x48),param_3);
    func_0x0001080988e4();
    func_0x000108098a08();
    _CFRetain();
    func_0x000108098a4c();
    func_0x00010c1d9820();
    func_0x000108098a1c(*(undefined8 *)(param_2 + 0x20));
    _CFRelease(lVar3);
    _CFRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108096960; end: 108096bf7;  */

void FUN_108096960(double param_1,ulong param_2,undefined8 param_3,undefined8 *param_4,long param_5)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  func_0x0001080988fc();
  func_0x0001080988ac();
  func_0x0001080988f4(*param_4,param_4[1]);
  dVar5 = param_1;
  func_0x0001080988f4(param_4[2],param_4[3]);
  dVar6 = dVar5;
  func_0x0001080988f4(param_4[6],param_4[7]);
  dVar7 = dVar6;
  func_0x0001080988f4(param_4[4],param_4[5]);
  uVar3 = (ulong)(param_1 != 0.0);
  dVar8 = param_1;
  if (param_1 == 0.0) {
    dVar8 = 0.0;
  }
  if (dVar5 == 0.0) {
LAB_1080969fc:
    if (dVar6 != 0.0) {
      bVar1 = true;
      if ((dVar8 != 0.0) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar6))) {
        bVar1 = dVar8 == dVar6;
      }
      if (!bVar1) goto LAB_108096b20;
      uVar3 = uVar3 | 4;
      dVar8 = dVar6;
    }
    if (dVar7 == 0.0) {
      uVar4 = 0xf;
      if (uVar3 != 0) {
        uVar4 = uVar3;
      }
      dVar7 = dVar8;
      if (param_5 == 0) goto LAB_108096aa0;
LAB_108096a4c:
      uVar3 = param_2;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0bc2a0();
      if (uVar4 == uVar3) {
        uVar3 = param_2;
        func_0x00010c08c0e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0bc120();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        func_0x000108098748();
        func_0x000108098750();
        dVar7 = dVar8;
        if (uVar3 == 0) goto LAB_108096aa0;
      }
      else {
        func_0x000108098750();
      }
    }
    else {
      bVar1 = true;
      if ((dVar8 != 0.0) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
        bVar1 = dVar8 == dVar7;
      }
      if (bVar1) {
        uVar4 = uVar3 | 8;
        dVar8 = dVar7;
        if (param_5 != 0) goto LAB_108096a4c;
LAB_108096aa0:
        uVar3 = param_2;
        func_0x00010c137b00();
        if ((uVar3 & 1) == 0) {
          uVar3 = param_2;
          func_0x00010c08c0e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0bc120();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          func_0x000108098750();
          if (uVar3 != 0) {
            func_0x000108098800();
            func_0x000108098984(FUN_108096c44);
            func_0x000108098a00();
          }
          func_0x00010c295580(dVar7,param_2);
          goto LAB_108096b44;
        }
      }
    }
  }
  else {
    bVar1 = true;
    if ((param_1 != 0.0) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar5))) {
      bVar1 = dVar8 == dVar5;
    }
    if (bVar1) {
      uVar3 = uVar3 | 2;
      dVar8 = dVar5;
      goto LAB_1080969fc;
    }
  }
LAB_108096b20:
  func_0x0001080988ac();
  func_0x000108098704(param_2);
  func_0x00010c2955c0();
LAB_108096b44:
  uVar3 = param_2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22a0c0();
  func_0x000108098778();
  if (uVar3 != 0) {
    func_0x00010c295640(param_2);
  }
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x000108098798();
  func_0x00010c297120(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(param_2,PTR_LOOP_113253530,puVar2,1);
  func_0x000108098770();
  func_0x000108098778();
  func_0x00010c2965a0(param_2);
  func_0x000108098758();
  return;
}



/* Entry: 108096bf8; end: 108096c43;  */

double FUN_108096bf8(double param_1,double param_2,uint param_3)

{
  double dVar1;
  double dVar2;
  
  if ((param_3 & 1) != 0) {
    dVar1 = param_1 * (param_2 / 100.0);
    dVar2 = param_1 * 0.5;
    if (dVar1 <= param_1 * 0.5) {
      dVar2 = dVar1;
    }
    return dVar2;
  }
  dVar2 = param_2;
  if ((0.0 < param_1) && (dVar2 = param_1 * 0.5, param_2 <= param_1 * 0.5)) {
    dVar2 = param_2;
  }
  return dVar2;
}



/* Entry: 108096c44; end: 108096d2b;  */

void FUN_108096c44(undefined8 param_1,undefined8 param_2)

{
  func_0x0001080987a0();
  func_0x0001080988ac();
  func_0x00010c283e60(param_2);
  func_0x00010c2174a0(0,0,0,0,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108096d2c; end: 108096d63;  */

void FUN_108096d2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_48 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = *(undefined8 *)(param_1 + 0x30);
  uStack_28 = *(undefined8 *)(param_1 + 0x48);
  uStack_30 = *(undefined8 *)(param_1 + 0x40);
  uStack_18 = *(undefined8 *)(param_1 + 0x58);
  uStack_20 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c295560(param_2,param_2,&uStack_50,param_3);
  return;
}



/* Entry: 108096d64; end: 108096e73;  */

undefined8 FUN_108096d64(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long unaff_x20;
  
  func_0x0001080986c8();
  func_0x00010b9685f0(param_1);
  func_0x000108098798();
  func_0x000108098a78();
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010809888c();
  func_0x000108098770();
  func_0x000108098750();
  lVar1 = unaff_x20;
  FUN_1080952b8();
  if (lVar1 == 0) {
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    if (param_4 == 0) {
      func_0x00010c1733a0(param_1,unaff_x20);
    }
    else {
      func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108098a4c();
      func_0x000108098a1c();
      func_0x000108098750();
    }
    func_0x000108098778();
    FUN_1080952b8();
    func_0x00010c295940();
  }
  else {
    func_0x00010c2965a0();
  }
  func_0x000108098758();
  return 1;
}



/* Entry: 108096e74; end: 108096f63;  */

void FUN_108096e74(ulong param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4,
                  undefined8 param_5)

{
  undefined1 in_ZR;
  ulong uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  undefined8 uStack_58;
  
  puVar3 = (undefined8 *)param_3;
  func_0x000108098760();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_58 = extraout_x8;
  func_0x00010bfc1c00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001080987d4();
  if (uVar1 != 0) {
    lVar5 = *plStack_110;
    do {
      uVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(param_1);
        }
        puVar4 = *(undefined1 **)(lStack_118 + uVar6 * 8);
        puVar2 = puVar4;
        _objc_opt_class();
        in_ZR = puVar2 == param_3;
        if ((bool)in_ZR) {
          func_0x00010809883c();
          goto LAB_108096f30;
        }
        uVar6 = uVar6 + 1;
        in_ZR = uVar6 == uVar1;
      } while (uVar6 < uVar1);
      param_4 = auStack_d8;
      uVar1 = param_1;
      puVar3 = &uStack_120;
      func_0x00010809887c(param_1,param_2,&uStack_120,param_4);
    } while (uVar1 != 0);
  }
  puVar2 = (undefined1 *)0x0;
  puVar4 = (undefined1 *)0x0;
LAB_108096f30:
  func_0x000108098758();
  func_0x0001080986d4(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    puVar4 = puVar2;
    func_0x0001080988fc();
    func_0x000108098798();
    func_0x000108098a84();
    func_0x00010c295720();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined1 *)0x0) {
      _objc_alloc_init(puVar3);
      func_0x00010bef9040(puVar2,param_2,puVar3);
      puVar4 = (undefined1 *)puVar3;
    }
    func_0x00010c1a17c0(puVar4,param_2,param_4);
    func_0x00010c1dfc80(puVar4,param_2,param_5);
    func_0x000108098770();
    func_0x000108098758();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108096f64; end: 108096ff7;  */

void FUN_108096f64(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001080988fc();
  func_0x000108098798();
  func_0x000108098a84();
  func_0x00010c295720();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    _objc_alloc_init(param_3);
    func_0x00010bef9040(param_1,param_2,param_3);
    lVar1 = param_3;
  }
  func_0x00010c1a17c0(lVar1,param_2,param_4);
  func_0x00010c1dfc80(lVar1,param_2,param_5);
  func_0x000108098770();
  func_0x000108098758();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108096ff8; end: 10809702f;  */

void FUN_108096ff8(long param_1)

{
  func_0x00010c295720();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x000108098820();
    func_0x00010c12c9c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108097030; end: 108097243;  */

bool FUN_108097030(undefined *param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  
  puVar1 = param_1;
  func_0x000108098788();
  func_0x000108098870();
  func_0x000108098850();
  if (((ulong)puVar1 & 1) == 0) {
    param_3 = 0;
  }
  func_0x000108098798();
  func_0x00010809891c();
  if (puVar1 == (undefined *)0x4) {
    _objc_opt_class(PTR_PTR_1126d91f0);
    puVar2 = param_1;
    func_0x00010c295720();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126d91f0;
    _objc_opt_class();
    func_0x000108098844();
    puVar7 = puVar2;
    if (((ulong)puVar3 & 1) == 0) {
      puVar7 = (undefined *)0x0;
    }
    func_0x0001080987a8();
    func_0x000108098750();
    if (puVar7 == (undefined *)0x0) {
      puVar2 = PTR_PTR_1126d91f0;
      _objc_opt_new(PTR_PTR_1126d91f0);
      func_0x00010bef9040(param_1);
    }
    uVar4 = param_3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x0001080989d0();
    if ((int)uVar5 == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    func_0x000108098780();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080989d0();
    func_0x0001080987a8();
    func_0x000108098868();
    uVar5 = param_3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x0001080989d0();
    uVar4 = uVar5;
    if ((int)uVar6 == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar5);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    uVar4 = param_3;
    if ((uVar5 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(param_3);
    func_0x000108098a84();
    func_0x00010c1a17e0();
    func_0x000108098748();
    func_0x00010c1a17e0(puVar2);
    func_0x000108098780();
    func_0x00010c1a17e0(puVar2);
    func_0x000108098868();
    if (uVar4 != 0) {
      func_0x00010bf885a0(param_3);
    }
    func_0x00010c1d4100(puVar2);
    _objc_release(uVar4);
    func_0x000108098750();
  }
  func_0x000108098770();
  func_0x000108098758();
  return puVar1 == (undefined *)0x4;
}



/* Entry: 108097244; end: 1080972af;  */

void FUN_108097244(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d91f0;
  _objc_opt_class(PTR_PTR_1126d91f0);
  func_0x00010c295720(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d91f0;
  _objc_opt_class();
  func_0x0001080987c0();
  if (((ulong)puVar1 & 1) == 0) {
    param_1 = 0;
  }
  func_0x000108098810();
  func_0x000108098770();
  if (param_1 != 0) {
    func_0x000108098820();
    func_0x00010c12c9c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1080972b0; end: 108097357;  */

undefined8 FUN_1080972b0(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x0001080986c8();
  if (param_4 == 0) {
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4bc0((float)param_1);
  }
  else {
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108098738();
    func_0x000108098778();
  }
  func_0x000108098770();
  func_0x000108098758();
  return 1;
}



/* Entry: 108097358; end: 1080974c3;  */

undefined8
FUN_108097358(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  undefined1 auStack_360 [128];
  undefined1 auStack_2e0 [128];
  undefined1 auStack_260 [128];
  undefined1 auStack_1e0 [128];
  undefined1 auStack_160 [128];
  undefined1 auStack_e0 [128];
  
  func_0x0001080986c8();
  _CATransform3DMakeScale(auStack_e0,param_3,param_4,0x3ff0000000000000);
  _CATransform3DMakeRotation(auStack_160,param_5,0,0,0x3ff0000000000000);
  _CATransform3DMakeTranslation(auStack_1e0,param_1,param_2,0);
  func_0x0001080988a4(auStack_260,auStack_e0);
  func_0x0001080988a4(auStack_360,auStack_160);
  _CATransform3DConcat(auStack_2e0,auStack_260,auStack_360);
  func_0x0001080988a4(auStack_360,auStack_1e0);
  _CATransform3DConcat(auStack_260,auStack_2e0,auStack_360);
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  if (param_8 == 0) {
    func_0x0001080988a4(auStack_2e0,auStack_260);
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219960();
  }
  else {
    func_0x0001080988a4(auStack_2e0,auStack_260);
    func_0x00010c297140(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108098738();
    func_0x000108098770();
  }
  func_0x000108098778();
  func_0x000108098758();
  return 1;
}



/* Entry: 1080974c4; end: 108097887;  */

void FUN_1080974c4(void)

{
  undefined *puVar1;
  
  func_0x000108098680();
  func_0x0001080987f4();
  func_0x00010bf1a060();
  func_0x0001080987f4();
  func_0x00010bf1a0c0();
  func_0x0001080987f4();
  func_0x00010bf1a080();
  func_0x0001080987f4();
  func_0x00010bf1a080();
  func_0x0001080987f4();
  func_0x00010bf1a0a0();
  func_0x0001080987f4();
  func_0x00010bf1a120();
  func_0x0001080987f4();
  func_0x00010bf1a180();
  func_0x0001080987f4();
  func_0x00010bf1a140();
  func_0x0001080987f4();
  func_0x00010bf1a140();
  func_0x0001080987f4();
  func_0x00010bf1a060();
  func_0x0001080987f4();
  func_0x00010bf1a0e0();
  func_0x0001080987f4();
  func_0x00010bf1a0c0();
  func_0x0001080987f4();
  func_0x00010bf1a140();
  func_0x0001080987f4();
  func_0x00010bf1a080();
  func_0x0001080987f4();
  func_0x00010bf1a180();
  func_0x0001080987f4();
  func_0x00010bf1a060();
  func_0x0001080987f4();
  func_0x00010bf1a0e0();
  func_0x0001080988bc();
  func_0x0001080988bc();
  func_0x0001080988bc();
  func_0x0001080988bc();
  func_0x0001080988bc();
  puVar1 = PTR_PTR_1126b4b08;
  _objc_alloc();
  func_0x0001080986f8();
  func_0x00010bf1a040();
  func_0x00010bee7680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a200();
  func_0x000108098750();
  func_0x00010bf1a460();
  func_0x00010bee76e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a200();
  func_0x000108098770();
  func_0x00010bf1a1e0();
  func_0x000108098758();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108097888; end: 1080978c7;  */

void FUN_108097888(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2959d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_valdi_setBackground_animator__112683098);
  return;
}



/* Entry: 1080978c8; end: 1080978e3;  */

undefined8 FUN_1080978c8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c21e900(param_2);
  return 1;
}



/* Entry: 1080978e4; end: 1080978ef;  */

void FUN_1080978e4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c21e910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setUserInteractionEnabled__112665468,1);
  return;
}



/* Entry: 1080978f0; end: 108097923;  */

void FUN_1080978f0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_48 = param_3[1];
  uStack_50 = *param_3;
  uStack_38 = param_3[3];
  uStack_40 = param_3[2];
  uStack_28 = param_3[5];
  uStack_30 = param_3[4];
  uStack_18 = param_3[7];
  uStack_20 = param_3[6];
  func_0x00010c295ac0(param_2,param_2,&uStack_50);
  return;
}



/* Entry: 108097924; end: 108097977;  */

void FUN_108097924(undefined8 param_1,undefined8 param_2)

{
  func_0x000108098788();
  func_0x000108098798();
  func_0x00010c295ac0(param_2);
  func_0x000108098758();
  func_0x000108098770();
  return;
}



/* Entry: 108097978; end: 1080979df;  */

undefined8
FUN_108097978(undefined8 param_1,undefined8 param_2,double param_3,ulong param_4,undefined8 param_5)

{
  double dVar1;
  
  _objc_retain(param_5);
  func_0x00010809883c();
  dVar1 = param_3 / 100.0;
  if ((param_4 & 1) == 0) {
    dVar1 = param_3;
  }
  func_0x00010c295960(dVar1,param_2);
  func_0x000108098758();
  func_0x000108098750();
  return param_2;
}



/* Entry: 1080979e0; end: 1080979eb;  */

void FUN_1080979e0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c295970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,param_2,PTR_s_valdi_setAlpha_animator__112683080);
  return;
}



/* Entry: 1080979ec; end: 108097a5f;  */

undefined8 FUN_1080979ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x000108098788();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000108098790();
  func_0x000108098810();
  _objc_opt_class(puVar1);
  func_0x0001080987c0();
  func_0x0001080987b0();
  func_0x00010c295bc0(param_2);
  func_0x000108098750();
  func_0x000108098758();
  func_0x000108098778();
  func_0x000108098770();
  return param_2;
}



/* Entry: 108097a60; end: 108097a83;  */

void FUN_108097a60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c295bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_valdi_setBoxShadow_animator__112683118,0,param_3);
  return;
}



/* Entry: 108097a84; end: 108097a9f;  */

undefined8 FUN_108097a84(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c160fc0(param_2);
  return 1;
}



/* Entry: 108097aa0; end: 108097b07;  */

void FUN_108097aa0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c160fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setAccessibilityIdentifier__112635e10,0);
  return;
}



/* Entry: 108097b08; end: 108097b23;  */

undefined8 FUN_108097b08(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c295660(param_2);
  return 1;
}



/* Entry: 108097b24; end: 108097b67;  */

void FUN_108097b24(undefined8 param_1,undefined8 param_2)

{
  func_0x000108098788();
  func_0x000108098798();
  func_0x00010bf3d900(param_2);
  func_0x00010c295660(param_2);
  func_0x000108098758();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108097b68; end: 108097b97;  */

void FUN_108097b68(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c295610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_valdi_applyMaskPath_animator__112682fa8);
  return;
}



/* Entry: 108097b98; end: 108097be3;  */

void FUN_108097b98(void)

{
  func_0x00010809869c();
  func_0x000108098798();
  func_0x000108098790();
  _objc_opt_class(PTR_PTR_1126d91f8);
  func_0x000108098718();
  func_0x00010c296540();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000108098758();
  func_0x000108098770();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108097be4; end: 108097c13;  */

void FUN_108097be4(undefined8 param_1,undefined8 param_2)

{
  func_0x0001080987a0();
  func_0x000108098834();
  func_0x00010809872c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108097c14; end: 108097c5f;  */

void FUN_108097c14(void)

{
  func_0x00010809869c();
  func_0x000108098798();
  func_0x000108098790();
  _objc_opt_class(PTR_PTR_1126d9200);
  func_0x000108098718();
  func_0x00010c296540();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000108098758();
  func_0x000108098770();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108097c60; end: 108097c8f;  */

void FUN_108097c60(undefined8 param_1,undefined8 param_2)

{
  func_0x0001080987a0();
  func_0x000108098834();
  func_0x00010809872c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108097c90; end: 108097cdb;  */

void FUN_108097c90(void)

{
  func_0x00010809869c();
  func_0x000108098798();
  func_0x000108098790();
  _objc_opt_class(PTR_PTR_1126d9208);
  func_0x000108098718();
  func_0x00010c296540();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000108098758();
  func_0x000108098770();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108097cdc; end: 108097d0b;  */

void FUN_108097cdc(undefined8 param_1,undefined8 param_2)

{
  func_0x0001080987a0();
  func_0x000108098834();
  func_0x00010809872c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108097d0c; end: 108097d57;  */

void FUN_108097d0c(void)

{
  func_0x00010809869c();
  func_0x000108098798();
  func_0x000108098790();
  _objc_opt_class(PTR_PTR_1126d9210);
  func_0x000108098718();
  func_0x00010c296540();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000108098758();
  func_0x000108098770();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108097d58; end: 108097d87;  */

void FUN_108097d58(undefined8 param_1,undefined8 param_2)

{
  func_0x0001080987a0();
  func_0x000108098834();
  func_0x00010809872c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108097d88; end: 108097dd3;  */

void FUN_108097d88(void)

{
  func_0x00010809869c();
  func_0x000108098798();
  func_0x000108098790();
  _objc_opt_class(PTR_PTR_1126d9218);
  func_0x000108098718();
  func_0x00010c296540();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000108098758();
  func_0x000108098770();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108097dd4; end: 108097e03;  */

void FUN_108097dd4(undefined8 param_1,undefined8 param_2)

{
  func_0x0001080987a0();
  func_0x000108098834();
  func_0x00010809872c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108097e04; end: 108097ecf;  */

void FUN_108097e04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_5);
  func_0x000108098810();
  func_0x00010809883c();
  _objc_retain(param_2);
  func_0x000108098834();
  func_0x00010c296540(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108098778();
  func_0x000108098750();
  func_0x000108098748();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000108098790();
  _objc_opt_class();
  func_0x000108098850();
  lVar1 = param_5;
  if (((ulong)puVar2 & 1) == 0) {
    lVar1 = 0;
  }
  func_0x000108098810();
  func_0x000108098758();
  if (lVar1 != 0) {
    func_0x00010bf885a0(param_5);
  }
  func_0x00010c1c8340(param_2);
  func_0x000108098778();
  func_0x000108098770();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108097ed0; end: 108097eff;  */

void FUN_108097ed0(undefined8 param_1,undefined8 param_2)

{
  func_0x0001080987a0();
  func_0x000108098834();
  func_0x00010809872c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108097f00; end: 108097f0f;  */

void FUN_108097f00(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c296030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_valdi_setOnTouchGestures__112683230);
  return;
}



/* Entry: 108097f10; end: 1080980c3;  */

undefined8 FUN_108097f10(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  func_0x0001080987a0();
  func_0x000108098798();
  func_0x000108098810();
  func_0x000108098870();
  func_0x0001080987c0();
  func_0x0001080987b0();
  func_0x00010bf529e0();
  if (unaff_x22 == 5) {
    func_0x000108098a6c();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108098944();
    func_0x000108098690();
    func_0x000108098670();
    func_0x000108098748();
    func_0x00010809885c();
    func_0x000108098780();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080986b0();
    func_0x000108098690();
    func_0x000108098670();
    func_0x000108098748();
    func_0x00010809885c();
    func_0x000108098780();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080986b0();
    func_0x000108098690();
    func_0x000108098670();
    func_0x000108098748();
    func_0x0001080989d8();
    func_0x000108098780();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080986b0();
    func_0x000108098690();
    func_0x000108098670();
    func_0x000108098748();
    func_0x0001080989d8();
    func_0x000108098780();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080986b0();
    func_0x000108098690();
    func_0x000108098670();
    func_0x000108098748();
    func_0x00010809885c();
    func_0x000108098780();
    func_0x000108098704(param_2);
    func_0x00010c2964e0();
  }
  else {
    param_2 = 0;
  }
  func_0x000108098750();
  func_0x000108098778();
  func_0x000108098770();
  func_0x000108098758();
  return param_2;
}



/* Entry: 1080980c4; end: 1080980e7;  */

void FUN_1080980c4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2964f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0,0x3ff0000000000000,0x3ff0000000000000,0,param_2,
             PTR_s_valdi_setTranslationX_translatio_112683360);
  return;
}



/* Entry: 1080980e8; end: 108098133;  */

void FUN_1080980e8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  func_0x0001080987a0();
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_setHitTestSlop__112647d38);
  if ((uVar1 & 1) != 0) {
    func_0x00010c1a8c60(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108098134; end: 108098147;  */

void FUN_108098134(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c21fed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setValdiHitTest__1126659d8);
  return;
}



/* Entry: 108098148; end: 1080982b7;  */

undefined * FUN_108098148(void)

{
  long lVar1;
  undefined1 in_ZR;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined **ppuVar8;
  
  func_0x000108098760();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_alloc();
  func_0x0001080986f8();
  func_0x000108098820();
  func_0x00010befa120();
  func_0x000108098770();
  ppuVar3 = &PTR__OBJC_CLASS___NSConstantArray_111182de0;
  func_0x0001080987d4();
  lVar1 = lRam0000000000000000;
  if (ppuVar3 != (undefined **)0x0) {
    do {
      ppuVar8 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_111182de0);
        }
        _objc_alloc();
        func_0x00010c25ce40();
        _objc_retainAutoreleasedReturnValue();
        func_0x0001080986f8();
        func_0x00010befa120(puVar2);
        func_0x000108098780();
        func_0x000108098748();
        ppuVar8 = (undefined **)((long)ppuVar8 + 1);
        in_ZR = ppuVar8 == ppuVar3;
      } while (ppuVar8 < ppuVar3);
      ppuVar3 = &PTR__OBJC_CLASS___NSConstantArray_111182de0;
      func_0x00010809887c();
    } while (ppuVar3 != (undefined **)0x0);
  }
  puVar4 = (undefined *)0x0;
  func_0x0001080986d4(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000108098760();
    func_0x000108098914();
    func_0x0001080986f8();
    puVar5 = puVar4;
    func_0x000108098914();
    func_0x0001080986f8();
    puVar6 = puVar5;
    func_0x000108098914();
    func_0x0001080986f8();
    func_0x000108098914();
    func_0x0001080986f8();
    puVar2 = puVar6;
    func_0x000108098898();
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x000108098748();
    func_0x000108098750();
    func_0x000108098770();
    func_0x000108098758();
    func_0x0001080986d4(extraout_x8_00);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000108098680();
      func_0x000108098870();
      func_0x000108098850();
      if (((ulong)puVar7 & 1) == 0) {
        puVar4 = (undefined *)0x0;
      }
      func_0x000108098810();
      func_0x00010809882c();
      if (puVar7 == (undefined *)0x5) {
        puVar2 = puVar7;
        func_0x000108098a40();
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x000108098944();
        func_0x000108098690();
        func_0x000108098748();
        if ((((ulong)puVar2 & 1) != 0) && (puVar6 != (undefined *)0x0)) {
          func_0x000108098a40();
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          func_0x0001080986b0();
          func_0x000108098690();
          func_0x000108098670();
          func_0x000108098748();
          func_0x0001080988c4();
          func_0x000108098780();
        }
        puVar2 = puVar4;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x0001080986b0();
        func_0x000108098690();
        func_0x000108098748();
        if ((((ulong)puVar2 & 1) != 0) && (puVar6 != (undefined *)0x0)) {
          func_0x00010c0dfd40(puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x0001080986b0();
          func_0x000108098690();
          func_0x000108098670();
          func_0x000108098748();
          func_0x0001080988c4();
          func_0x000108098780();
        }
        puVar2 = puVar4;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x0001080986b0();
        func_0x000108098690();
        func_0x000108098748();
        if ((((ulong)puVar2 & 1) != 0) && (puVar6 != (undefined *)0x0)) {
          func_0x00010c0dfd40(puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x0001080986b0();
          func_0x000108098690();
          func_0x000108098670();
          func_0x000108098748();
          func_0x0001080988c4();
          func_0x000108098780();
        }
        puVar2 = puVar4;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x0001080986b0();
        func_0x000108098690();
        func_0x000108098748();
        if ((((ulong)puVar2 & 1) != 0) && (puVar6 != (undefined *)0x0)) {
          func_0x00010c0dfd40(puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x0001080986b0();
          func_0x000108098690();
          func_0x000108098670();
          func_0x000108098748();
          func_0x0001080988c4();
          func_0x000108098780();
        }
        puVar2 = puVar4;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x0001080986b0();
        func_0x000108098690();
        func_0x000108098748();
        if ((((ulong)puVar2 & 1) != 0) && (puVar6 != (undefined *)0x0)) {
          func_0x00010c0dfd40(puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x0001080986b0();
          func_0x000108098690();
          func_0x000108098670();
          func_0x000108098748();
          func_0x0001080988c4();
          func_0x000108098780();
        }
        puVar2 = puVar5;
        _objc_opt_respondsToSelector(puVar5,PTR_s_setHitTestSlop__112647d38);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x000108098704(puVar5);
          func_0x00010c1a8c60();
        }
      }
      func_0x000108098778();
      func_0x000108098758();
      return (undefined *)(ulong)(puVar7 == (undefined *)0x5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return puVar2;
}



/* Entry: 1080982b8; end: 1080983a3;  */

ulong FUN_1080982b8(ulong param_1)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 extraout_x8;
  
  func_0x000108098760();
  func_0x000108098914();
  func_0x0001080986f8();
  uVar1 = param_1;
  func_0x000108098914();
  func_0x0001080986f8();
  uVar2 = uVar1;
  func_0x000108098914();
  func_0x0001080986f8();
  func_0x000108098914();
  func_0x0001080986f8();
  uVar3 = uVar2;
  func_0x000108098898();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000108098748();
  func_0x000108098750();
  func_0x000108098770();
  func_0x000108098758();
  func_0x0001080986d4(extraout_x8);
  if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
    return uVar3;
  }
  ___stack_chk_fail();
  func_0x000108098680();
  func_0x000108098870();
  func_0x000108098850();
  if ((uVar4 & 1) == 0) {
    param_1 = 0;
  }
  func_0x000108098810();
  func_0x00010809882c();
  if (uVar4 == 5) {
    uVar3 = uVar4;
    func_0x000108098a40();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108098944();
    func_0x000108098690();
    func_0x000108098748();
    if (((uVar3 & 1) != 0) && (uVar2 != 0)) {
      func_0x000108098a40();
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080986b0();
      func_0x000108098690();
      func_0x000108098670();
      func_0x000108098748();
      func_0x0001080988c4();
      func_0x000108098780();
    }
    uVar3 = param_1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080986b0();
    func_0x000108098690();
    func_0x000108098748();
    if (((uVar3 & 1) != 0) && (uVar2 != 0)) {
      func_0x00010c0dfd40(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080986b0();
      func_0x000108098690();
      func_0x000108098670();
      func_0x000108098748();
      func_0x0001080988c4();
      func_0x000108098780();
    }
    uVar3 = param_1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080986b0();
    func_0x000108098690();
    func_0x000108098748();
    if (((uVar3 & 1) != 0) && (uVar2 != 0)) {
      func_0x00010c0dfd40(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080986b0();
      func_0x000108098690();
      func_0x000108098670();
      func_0x000108098748();
      func_0x0001080988c4();
      func_0x000108098780();
    }
    uVar3 = param_1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080986b0();
    func_0x000108098690();
    func_0x000108098748();
    if (((uVar3 & 1) != 0) && (uVar2 != 0)) {
      func_0x00010c0dfd40(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080986b0();
      func_0x000108098690();
      func_0x000108098670();
      func_0x000108098748();
      func_0x0001080988c4();
      func_0x000108098780();
    }
    uVar3 = param_1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080986b0();
    func_0x000108098690();
    func_0x000108098748();
    if (((uVar3 & 1) != 0) && (uVar2 != 0)) {
      func_0x00010c0dfd40(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080986b0();
      func_0x000108098690();
      func_0x000108098670();
      func_0x000108098748();
      func_0x0001080988c4();
      func_0x000108098780();
    }
    uVar2 = uVar1;
    _objc_opt_respondsToSelector(uVar1,PTR_s_setHitTestSlop__112647d38);
    if ((uVar2 & 1) != 0) {
      func_0x000108098704(uVar1);
      func_0x00010c1a8c60();
    }
  }
  func_0x000108098778();
  func_0x000108098758();
  return (ulong)(uVar4 == 5);
}



/* Entry: 1080983a4; end: 108098633;  */

bool FUN_1080983a4(ulong param_1)

{
  ulong uVar1;
  ulong unaff_x19;
  ulong unaff_x20;
  long unaff_x23;
  
  func_0x000108098680();
  func_0x000108098870();
  func_0x000108098850();
  if ((param_1 & 1) == 0) {
    unaff_x19 = 0;
  }
  func_0x000108098810();
  func_0x00010809882c();
  if (param_1 == 5) {
    uVar1 = param_1;
    func_0x000108098a40();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108098944();
    func_0x000108098690();
    func_0x000108098748();
    if (((uVar1 & 1) != 0) && (unaff_x23 != 0)) {
      func_0x000108098a40();
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080986b0();
      func_0x000108098690();
      func_0x000108098670();
      func_0x000108098748();
      func_0x0001080988c4();
      func_0x000108098780();
    }
    uVar1 = unaff_x19;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080986b0();
    func_0x000108098690();
    func_0x000108098748();
    if (((uVar1 & 1) != 0) && (unaff_x23 != 0)) {
      func_0x00010c0dfd40(unaff_x19);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080986b0();
      func_0x000108098690();
      func_0x000108098670();
      func_0x000108098748();
      func_0x0001080988c4();
      func_0x000108098780();
    }
    uVar1 = unaff_x19;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080986b0();
    func_0x000108098690();
    func_0x000108098748();
    if (((uVar1 & 1) != 0) && (unaff_x23 != 0)) {
      func_0x00010c0dfd40(unaff_x19);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080986b0();
      func_0x000108098690();
      func_0x000108098670();
      func_0x000108098748();
      func_0x0001080988c4();
      func_0x000108098780();
    }
    uVar1 = unaff_x19;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080986b0();
    func_0x000108098690();
    func_0x000108098748();
    if (((uVar1 & 1) != 0) && (unaff_x23 != 0)) {
      func_0x00010c0dfd40(unaff_x19);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080986b0();
      func_0x000108098690();
      func_0x000108098670();
      func_0x000108098748();
      func_0x0001080988c4();
      func_0x000108098780();
    }
    uVar1 = unaff_x19;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080986b0();
    func_0x000108098690();
    func_0x000108098748();
    if (((uVar1 & 1) != 0) && (unaff_x23 != 0)) {
      func_0x00010c0dfd40(unaff_x19);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080986b0();
      func_0x000108098690();
      func_0x000108098670();
      func_0x000108098748();
      func_0x0001080988c4();
      func_0x000108098780();
    }
    _objc_opt_respondsToSelector();
    if ((unaff_x20 & 1) != 0) {
      func_0x000108098704();
      func_0x00010c1a8c60();
    }
  }
  func_0x000108098778();
  func_0x000108098758();
  return param_1 == 5;
}



/* Entry: 108098634; end: 108098ab7;  */

void FUN_108098634(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setAssociatedObject_11034d300)
            (param_1,PTR_s_backgroundGradientLayer_1125a29b0,param_3,1);
  return;
}



/* Entry: 108098ab8; end: 108098bc7;  */

undefined8
FUN_108098ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
  _objc_retain(param_3);
  if (lRam00000001137290d8 != -1) {
    func_0x000107c27d9c(0x1137290d8,&PTR___NSConcreteGlobalBlock_110a1adb0);
  }
  lVar1 = lRam00000001137290d0;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c067fc0(lVar1);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  func_0x00010bf8cf60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193d20(param_2);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return 1;
}



/* Entry: 108098bc8; end: 108098beb;  */

void FUN_108098bc8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c193d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setEffect__112642968,0);
  return;
}



/* Entry: 108098bec; end: 108098c6f; -[SCValdiDrawingFontImpl initWithFont:lineHeight:] */

long FUN_108098bec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x0001080992c8();
  func_0x0001080992e0();
  func_0x0001080992d0();
  if (param_1 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    _objc_release(uVar1);
    func_0x0001080992e0();
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = param_4;
    _objc_release(uVar1);
  }
  func_0x0001080992c0();
  func_0x0001080992b0();
  return param_1;
}



/* Entry: 108098c70; end: 108098c77; -[SCValdiDrawingFontImpl shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_108098c70(void)

{
  return 1;
}



/* Entry: 108098c78; end: 108098c97; -[SCValdiDrawingFontImpl pushToValdiMarshaller:] */

long FUN_108098c78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b8995b4(param_3,param_1);
  return (long)(int)param_3;
}



/* Entry: 108098c98; end: 108098c9b; -[SCValdiDrawingFontImpl measureTextWithText:maxWidth:maxHeight:maxLines:] */

void FUN_108098c98(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be5e3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__measureText_maxWidth_maxHeight__112575290);
  return;
}



/* Entry: 108098c9c; end: 108098d4b; -[SCValdiDrawingFontImpl measureAttributedTextWithAttributedText:maxWidth:maxHeight:maxLines:] */

void FUN_108098c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d9220;
  _objc_retain(param_6);
  func_0x0001080992e0();
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c063580();
  func_0x0001080992b8();
  func_0x00010be5e3c0(param_1,param_2,puVar1,param_4,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080992b0();
  func_0x0001080992c0();
  func_0x0001080992fc();
  func_0x0001080992e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108098d4c; end: 108098ecf; -[SCValdiDrawingFontImpl _measureText:maxWidth:maxHeight:maxLines:] */

void FUN_108098d4c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  long param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  double dVar6;
  long lVar7;
  char cStack_61;
  
  func_0x0001080992c8();
  func_0x0001080992e0();
  _objc_retain(param_6);
  puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  func_0x00010bfb3b80(PTR__OBJC_CLASS___NSAttributedString_1126af068,param_3,
                      *(undefined8 *)(param_2 + 8),0,0,*(undefined8 *)(param_2 + 0x10),0,0,0,param_7
                      ,0);
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == 0) {
    dVar6 = 1.79769313486232e+308;
  }
  else {
    func_0x00010bf885a0(param_5);
    dVar6 = param_1;
  }
  if (param_6 == 0) {
    param_1 = 1.79769313486232e+308;
  }
  else {
    func_0x00010bf885a0(param_6);
  }
  cStack_61 = '\0';
  puVar3 = PTR_PTR_1126bce48;
  func_0x00010bf60740(PTR_PTR_1126bce48,param_3,&cStack_61);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d9230;
  if (cStack_61 == '\x01') {
    func_0x0001080992f0();
    lVar5 = 0;
    lVar7 = 0;
    puVar4 = puVar3;
  }
  else {
    puVar4 = *(undefined **)(param_2 + 8);
    func_0x00010bfb3f00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c3f00(dVar6,param_1,puVar1,param_3,puVar2,puVar4,param_4,puVar3);
    _objc_release(puVar4);
    func_0x0001080992f0();
    lVar5 = (long)dVar6;
    lVar7 = (long)param_1;
  }
  func_0x00010c0630e0(lVar5,lVar7);
  func_0x0001080992e8();
  func_0x0001080992b8();
  func_0x0001080992fc();
  func_0x0001080992c0();
  func_0x0001080992b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108098ed0; end: 108098eff; -[SCValdiDrawingFontImpl .cxx_destruct] */

void FUN_108098ed0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108098f00; end: 108098f5f; -[SCValdiDrawingModuleFactory initWithFontManager:] */

long FUN_108098f00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001080992c8();
  func_0x0001080992d0();
  if (param_1 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    _objc_release(uVar1);
  }
  func_0x0001080992b0();
  return param_1;
}



/* Entry: 108098f60; end: 108098f6b; -[SCValdiDrawingModuleFactory getModulePath] */

undefined ** FUN_108098f60(void)

{
  return &PTR____CFConstantStringClassReference_110ec6518;
}



/* Entry: 108098f6c; end: 108098fdb; -[SCValdiDrawingModuleFactory loadModule] */

undefined * FUN_108098f6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110ec6518;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_20 = param_1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar1;
  }
  ___stack_chk_fail();
  return (undefined *)0x1;
}



/* Entry: 108098fdc; end: 108098fe3; -[SCValdiDrawingModuleFactory shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_108098fdc(void)

{
  return 1;
}



/* Entry: 108098fe4; end: 108099003; -[SCValdiDrawingModuleFactory pushToValdiMarshaller:] */

long FUN_108098fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b899614(param_3,param_1);
  return (long)(int)param_3;
}


