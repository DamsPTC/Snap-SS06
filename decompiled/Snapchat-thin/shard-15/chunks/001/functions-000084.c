/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b82f874; end: 10b82f92b; -[SIGButton _animateTouchCancelled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82f874(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  if (1 < *(ulong *)(param_1 + _DAT_112794598)) {
    lVar1 = *(long *)(param_1 + _DAT_1127945a4);
  }
  _objc_retain(lVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11279459c);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b82f92c;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_retain(lVar1);
  func_0x00010befa3a0(uVar2,param_2,&puStack_60);
  _objc_release(lStack_38);
  _objc_release(lVar1);
  return;
}



/* Entry: 10b82f92c; end: 10b82fa07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82f92c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010c2104a0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11279459c),param_2,1);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10b82fa08;
  puStack_58 = &UNK_110841f80;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  puStack_98 = puVar1;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x10b82fa60;
  puStack_80 = &UNK_110841f20;
  uStack_78 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar3;
  uStack_48 = uVar4;
  func_0x00010bf03420(0x3fb999999999999a,puVar2,param_2,&puStack_70,&puStack_98);
  _objc_release(uStack_48);
  return;
}



/* Entry: 10b82fa08; end: 10b82faa3;  */

void FUN_10b82fa08(long param_1,undefined8 param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010bed85c0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c08cdc0(*(undefined8 *)(param_1 + 0x20));
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_50 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x28),param_2,&uStack_50);
  return;
}



/* Entry: 10b82faa4; end: 10b82fb27; -[SIGButton setSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82faa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = param_1;
  func_0x00010c07d660();
  if ((int)param_3 != (int)lVar1) {
    puStack_28 = PTR_PTR_11270b3b8;
    lStack_30 = param_1;
    _objc_msgSendSuper2(&lStack_30,PTR_s_setSelected__11265c598,param_3);
    if ((*(char *)(param_1 + _DAT_1127945b8) != '\x01') ||
       (*(ulong *)(param_1 + _DAT_112794598) < 2)) {
      func_0x00010bed85c0(param_1);
    }
  }
  return;
}



/* Entry: 10b82fb28; end: 10b82fbab; -[SIGButton setHighlighted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82fb28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = param_1;
  func_0x00010c074da0();
  if ((int)param_3 != (int)lVar1) {
    puStack_28 = PTR_PTR_11270b3b8;
    lStack_30 = param_1;
    _objc_msgSendSuper2(&lStack_30,PTR_s_setHighlighted__112647c38,param_3);
    if ((*(char *)(param_1 + _DAT_1127945b8) != '\x01') ||
       (*(ulong *)(param_1 + _DAT_112794598) < 2)) {
      func_0x00010bed85c0(param_1);
    }
  }
  return;
}



/* Entry: 10b82fbac; end: 10b82fc2f; -[SIGButton setEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82fbac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = param_1;
  func_0x00010c071800();
  if ((int)param_3 != (int)lVar1) {
    puStack_28 = PTR_PTR_11270b3b8;
    lStack_30 = param_1;
    _objc_msgSendSuper2(&lStack_30,PTR_s_setEnabled__112642f38,param_3);
    if ((*(char *)(param_1 + _DAT_1127945b8) != '\x01') ||
       (*(ulong *)(param_1 + _DAT_112794598) < 2)) {
      func_0x00010bed85c0(param_1);
    }
  }
  return;
}



/* Entry: 10b82fc30; end: 10b82fc53; -[SIGButton _backgroundColorForStyle:] */

undefined8 FUN_10b82fc30(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 6) {
    return *(undefined8 *)(&UNK_10e5f3010 + (param_3 - 1U) * 8);
  }
  return 0x6a;
}



/* Entry: 10b82fc54; end: 10b82fc77; -[SIGButton _disabledBackgroundColorForStyle:] */

undefined8 FUN_10b82fc54(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 3U < 4) {
    return *(undefined8 *)(&UNK_10e5f3040 + (param_3 - 3U) * 8);
  }
  return 0x6f;
}



/* Entry: 10b82fc78; end: 10b82fc9b; -[SIGButton _titleColorForStyle:] */

undefined8 FUN_10b82fc78(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 6) {
    return *(undefined8 *)(&UNK_10e5f3060 + (param_3 - 1U) * 8);
  }
  return 0xc4;
}



/* Entry: 10b82fc9c; end: 10b82fcbf; -[SIGButton _disabledTitleColorForStyle:] */

undefined8 FUN_10b82fc9c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 2U < 5) {
    return *(undefined8 *)(&UNK_10e5f3090 + (param_3 - 2U) * 8);
  }
  return 0xbe;
}



/* Entry: 10b82fcc0; end: 10b82fd33; -[SIGButton _loadingIndicatorColorForStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b82fcc0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 - 3U < 4) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127945a0);
    func_0x00010c0e00e0(uVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3f60);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c249ee0();
    _objc_release(uVar1);
    return uVar2;
  }
  uVar2 = 0xc4;
  if (param_3 - 1U < 2) {
    uVar2 = 0xbb;
  }
  return uVar2;
}



/* Entry: 10b82fd34; end: 10b82fdc3; -[SIGButton _disabledLoadingIndicatorColorForStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b82fd34(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0xbe;
  if (param_3 < 7) {
    if ((1L << (param_3 & 0x3f) & 0x58U) == 0) {
      uVar1 = 0xbb;
      if ((1L << (param_3 & 0x3f) & 0x24U) == 0) {
        uVar1 = 0xbe;
      }
      return uVar1;
    }
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127945a0);
    func_0x00010c0e00e0(uVar2,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3f90);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c249ee0();
    _objc_release(uVar2);
  }
  return uVar1;
}



/* Entry: 10b82fdc4; end: 10b82fe3f; -[SIGButton _borderColorForStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b82fdc4(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (2 < param_3) {
    uVar2 = 0x6b;
    if (param_3 != 4) {
      uVar2 = 0xc4;
    }
    uVar1 = 0xd6;
    if (1 < param_3 - 5) {
      uVar1 = uVar2;
    }
    return uVar1;
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127945a0);
  func_0x00010c0e00e0(uVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3f60);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1fb20();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10b82fe40; end: 10b82febb; -[SIGButton _borderWidthForStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b82fe40(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  
  if (2 < param_4) {
    if (param_4 == 6) {
      param_1 = 0;
    }
    else {
      param_1 = 0x4000000000000000;
      if (param_4 == 5) goto LAB_10b82fe5c;
    }
    return param_1;
  }
LAB_10b82fe5c:
  uVar1 = *(undefined8 *)(param_2 + _DAT_1127945a0);
  func_0x00010c0e00e0(param_1,uVar1,param_3,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3f60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1fc80();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b82febc; end: 10b82ff1b; -[SIGButton _hasShadowForStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b82febc(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 < 6) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127945a0);
    func_0x00010c0e00e0(uVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3f60);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfdbf60();
    _objc_release(uVar1);
    return uVar2;
  }
  return 0;
}



/* Entry: 10b82ff1c; end: 10b830023; -[SIGButton _setTitleColor:forStates:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82ff1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
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
  
  puVar3 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puVar4 = auStack_d8;
  lVar6 = param_4;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(param_4);
        }
        func_0x00010bea8780(param_1,param_2,param_3,*(undefined8 *)(lStack_118 + lVar7 * 8));
        lVar7 = lVar7 + 1;
      } while (lVar6 != lVar7);
      puVar4 = auStack_d8;
      lVar6 = param_4;
      puVar3 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  lVar6 = (long)_DAT_1127945a0;
  puVar1 = *(undefined **)(param_4 + lVar6);
  func_0x00010c0e00e0(puVar1,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c271240();
  if ((undefined8 *)puVar2 != puVar3) {
    if (puVar1 == (undefined *)0x0) {
      puVar1 = PTR_PTR_1126e16a0;
      _objc_alloc_init(PTR_PTR_1126e16a0);
      func_0x00010c1d0640(*(undefined8 *)(param_4 + lVar6),param_2,puVar1,puVar4);
    }
    func_0x00010c216360(puVar1,param_2,puVar3);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10b830024; end: 10b8300c7; -[SIGButton _setTitleColor:forState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b830024(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_4);
  lVar3 = (long)_DAT_1127945a0;
  puVar1 = *(undefined **)(param_1 + lVar3);
  func_0x00010c0e00e0(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c271240();
  if (puVar2 != param_3) {
    if (puVar1 == (undefined *)0x0) {
      puVar1 = PTR_PTR_1126e16a0;
      _objc_alloc_init(PTR_PTR_1126e16a0);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + lVar3),param_2,puVar1,param_4);
    }
    func_0x00010c216360(puVar1,param_2,param_3);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b8300c8; end: 10b8301cf; -[SIGButton _setBackgroundColor:forStates:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8300c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
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
  
  puVar3 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puVar4 = auStack_d8;
  lVar6 = param_4;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(param_4);
        }
        func_0x00010bea21a0(param_1,param_2,param_3,*(undefined8 *)(lStack_118 + lVar7 * 8));
        lVar7 = lVar7 + 1;
      } while (lVar6 != lVar7);
      puVar4 = auStack_d8;
      lVar6 = param_4;
      puVar3 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  lVar6 = (long)_DAT_1127945a0;
  puVar1 = *(undefined **)(param_4 + lVar6);
  func_0x00010c0e00e0(puVar1,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf13d40();
  if ((undefined8 *)puVar2 != puVar3) {
    if (puVar1 == (undefined *)0x0) {
      puVar1 = PTR_PTR_1126e16a0;
      _objc_alloc_init(PTR_PTR_1126e16a0);
      func_0x00010c1d0640(*(undefined8 *)(param_4 + lVar6),param_2,puVar1,puVar4);
    }
    func_0x00010c16e440(puVar1,param_2,puVar3);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10b8301d0; end: 10b830273; -[SIGButton _setBackgroundColor:forState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8301d0(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_4);
  lVar3 = (long)_DAT_1127945a0;
  puVar1 = *(undefined **)(param_1 + lVar3);
  func_0x00010c0e00e0(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf13d40();
  if (puVar2 != param_3) {
    if (puVar1 == (undefined *)0x0) {
      puVar1 = PTR_PTR_1126e16a0;
      _objc_alloc_init(PTR_PTR_1126e16a0);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + lVar3),param_2,puVar1,param_4);
    }
    func_0x00010c16e440(puVar1,param_2,param_3);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b830274; end: 10b83037b; -[SIGButton _setImageTintColor:forStates:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b830274(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
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
  
  puVar3 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puVar4 = auStack_d8;
  lVar6 = param_4;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(param_4);
        }
        func_0x00010bea48e0(param_1,param_2,param_3,*(undefined8 *)(lStack_118 + lVar7 * 8));
        lVar7 = lVar7 + 1;
      } while (lVar6 != lVar7);
      puVar4 = auStack_d8;
      lVar6 = param_4;
      puVar3 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  lVar6 = (long)_DAT_1127945a0;
  puVar1 = *(undefined **)(param_4 + lVar6);
  func_0x00010c0e00e0(puVar1,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfe8e00();
  if ((undefined8 *)puVar2 != puVar3) {
    if (puVar1 == (undefined *)0x0) {
      puVar1 = PTR_PTR_1126e16a0;
      _objc_alloc_init(PTR_PTR_1126e16a0);
      func_0x00010c1d0640(*(undefined8 *)(param_4 + lVar6),param_2,puVar1,puVar4);
    }
    func_0x00010c1aab20(puVar1,param_2,puVar3);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10b83037c; end: 10b83041f; -[SIGButton _setImageTintColor:forState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83037c(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_4);
  lVar3 = (long)_DAT_1127945a0;
  puVar1 = *(undefined **)(param_1 + lVar3);
  func_0x00010c0e00e0(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfe8e00();
  if (puVar2 != param_3) {
    if (puVar1 == (undefined *)0x0) {
      puVar1 = PTR_PTR_1126e16a0;
      _objc_alloc_init(PTR_PTR_1126e16a0);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + lVar3),param_2,puVar1,param_4);
    }
    func_0x00010c1aab20(puVar1,param_2,param_3);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b830420; end: 10b830527; -[SIGButton _setLoadingIndicatorColor:forStates:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b830420(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
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
  
  puVar3 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puVar4 = auStack_d8;
  lVar6 = param_4;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(param_4);
        }
        func_0x00010bea55a0(param_1,param_2,param_3,*(undefined8 *)(lStack_118 + lVar7 * 8));
        lVar7 = lVar7 + 1;
      } while (lVar6 != lVar7);
      puVar4 = auStack_d8;
      lVar6 = param_4;
      puVar3 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  lVar6 = (long)_DAT_1127945a0;
  puVar1 = *(undefined **)(param_4 + lVar6);
  func_0x00010c0e00e0(puVar1,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c249ee0();
  if ((undefined8 *)puVar2 != puVar3) {
    if (puVar1 == (undefined *)0x0) {
      puVar1 = PTR_PTR_1126e16a0;
      _objc_alloc_init(PTR_PTR_1126e16a0);
      func_0x00010c1d0640(*(undefined8 *)(param_4 + lVar6),param_2,puVar1,puVar4);
    }
    func_0x00010c207e40(puVar1,param_2,puVar3);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10b830528; end: 10b8305cb; -[SIGButton _setLoadingIndicatorColor:forState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b830528(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_4);
  lVar3 = (long)_DAT_1127945a0;
  puVar1 = *(undefined **)(param_1 + lVar3);
  func_0x00010c0e00e0(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c249ee0();
  if (puVar2 != param_3) {
    if (puVar1 == (undefined *)0x0) {
      puVar1 = PTR_PTR_1126e16a0;
      _objc_alloc_init(PTR_PTR_1126e16a0);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + lVar3),param_2,puVar1,param_4);
    }
    func_0x00010c207e40(puVar1,param_2,param_3);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b8305cc; end: 10b8306d3; -[SIGButton _setBorderColor:forStates:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8305cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
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
  
  puVar3 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puVar4 = auStack_d8;
  lVar6 = param_4;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(param_4);
        }
        func_0x00010bea2500(param_1,param_2,param_3,*(undefined8 *)(lStack_118 + lVar7 * 8));
        lVar7 = lVar7 + 1;
      } while (lVar6 != lVar7);
      puVar4 = auStack_d8;
      lVar6 = param_4;
      puVar3 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  lVar6 = (long)_DAT_1127945a0;
  puVar1 = *(undefined **)(param_4 + lVar6);
  func_0x00010c0e00e0(puVar1,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf1fb20();
  if ((undefined8 *)puVar2 != puVar3) {
    if (puVar1 == (undefined *)0x0) {
      puVar1 = PTR_PTR_1126e16a0;
      _objc_alloc_init(PTR_PTR_1126e16a0);
      func_0x00010c1d0640(*(undefined8 *)(param_4 + lVar6),param_2,puVar1,puVar4);
    }
    func_0x00010c173280(puVar1,param_2,puVar3);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10b8306d4; end: 10b830777; -[SIGButton _setBorderColor:forState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8306d4(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_4);
  lVar3 = (long)_DAT_1127945a0;
  puVar1 = *(undefined **)(param_1 + lVar3);
  func_0x00010c0e00e0(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf1fb20();
  if (puVar2 != param_3) {
    if (puVar1 == (undefined *)0x0) {
      puVar1 = PTR_PTR_1126e16a0;
      _objc_alloc_init(PTR_PTR_1126e16a0);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + lVar3),param_2,puVar1,param_4);
    }
    func_0x00010c173280(puVar1,param_2,param_3);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b830778; end: 10b83087f; -[SIGButton _setBorderWidth:forStates:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b830778(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  double dVar7;
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
  
  puVar2 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  dVar7 = 0.0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puVar3 = auStack_d8;
  lVar5 = param_4;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar4 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar4) {
          _objc_enumerationMutation(param_4);
        }
        func_0x00010bea2560(param_1,param_2,param_3,*(undefined8 *)(lStack_118 + lVar6 * 8));
        lVar6 = lVar6 + 1;
      } while (lVar5 != lVar6);
      puVar3 = auStack_d8;
      lVar5 = param_4;
      puVar2 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  lVar5 = (long)_DAT_1127945a0;
  puVar1 = *(undefined **)(param_4 + lVar5);
  func_0x00010c0e00e0(puVar1,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1fc80();
  if (dVar7 != (double)(long)puVar2) {
    if (puVar1 == (undefined *)0x0) {
      puVar1 = PTR_PTR_1126e16a0;
      _objc_alloc_init(PTR_PTR_1126e16a0);
      func_0x00010c1d0640(*(undefined8 *)(param_4 + lVar5),param_2,puVar1,puVar3);
    }
    func_0x00010c1733a0((double)(long)puVar2,puVar1);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10b830880; end: 10b83092f; -[SIGButton _setBorderWidth:forState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b830880(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_5);
  lVar2 = (long)_DAT_1127945a0;
  puVar1 = *(undefined **)(param_2 + lVar2);
  func_0x00010c0e00e0(puVar1,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1fc80();
  if (param_1 != (double)param_4) {
    if (puVar1 == (undefined *)0x0) {
      puVar1 = PTR_PTR_1126e16a0;
      _objc_alloc_init(PTR_PTR_1126e16a0);
      func_0x00010c1d0640(*(undefined8 *)(param_2 + lVar2),param_3,puVar1,param_5);
    }
    func_0x00010c1733a0((double)param_4,puVar1);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10b830930; end: 10b830a37; -[SIGButton _setHasShadow:forStates:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b830930(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
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
  
  puVar3 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puVar4 = auStack_d8;
  lVar6 = param_4;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(param_4);
        }
        func_0x00010bea4540(param_1,param_2,param_3,*(undefined8 *)(lStack_118 + lVar7 * 8));
        lVar7 = lVar7 + 1;
      } while (lVar6 != lVar7);
      puVar4 = auStack_d8;
      lVar6 = param_4;
      puVar3 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  lVar6 = (long)_DAT_1127945a0;
  puVar1 = *(undefined **)(param_4 + lVar6);
  func_0x00010c0e00e0(puVar1,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfdbf60();
  if ((int)puVar3 != (int)puVar2) {
    if (puVar1 == (undefined *)0x0) {
      puVar1 = PTR_PTR_1126e16a0;
      _objc_alloc_init(PTR_PTR_1126e16a0);
      func_0x00010c1d0640(*(undefined8 *)(param_4 + lVar6),param_2,puVar1,puVar4);
    }
    func_0x00010c1a6d20(puVar1,param_2,puVar3);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10b830a38; end: 10b830adb; -[SIGButton _setHasShadow:forState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b830a38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_4);
  lVar3 = (long)_DAT_1127945a0;
  puVar1 = *(undefined **)(param_1 + lVar3);
  func_0x00010c0e00e0(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfdbf60();
  if ((int)param_3 != (int)puVar2) {
    if (puVar1 == (undefined *)0x0) {
      puVar1 = PTR_PTR_1126e16a0;
      _objc_alloc_init(PTR_PTR_1126e16a0);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + lVar3),param_2,puVar1,param_4);
    }
    func_0x00010c1a6d20(puVar1,param_2,param_3);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b830adc; end: 10b830c73; -[SIGButton setAllowTwoLineButtonText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b830adc(ulong param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  long lVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126e16a8;
  _objc_opt_class();
  uVar3 = param_1;
  _objc_opt_isKindOfClass();
  if ((uVar3 & 1) != 0) {
    lVar7 = (long)_DAT_1127945c0;
    if (*(byte *)(param_1 + lVar7) != param_3) {
      ppuVar4 = &PTR__OBJC_CLASS___NSConstantArray_111183ff8;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      if (ppuVar4 != (undefined **)0x0) {
        do {
          ppuVar8 = (undefined **)0x0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_111183ff8);
            }
            lVar9 = (long)_DAT_1127945a0;
            puVar5 = *(undefined **)(param_1 + lVar9);
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            if (puVar5 == (undefined *)0x0) {
              puVar5 = PTR_PTR_1126e16a0;
              _objc_alloc_init(PTR_PTR_1126e16a0);
              func_0x00010c1d0640(*(undefined8 *)(param_1 + lVar9));
            }
            func_0x00010c1672e0(puVar5);
            _objc_release(puVar5);
            ppuVar8 = (undefined **)((long)ppuVar8 + 1);
          } while (ppuVar4 != ppuVar8);
          ppuVar4 = &PTR__OBJC_CLASS___NSConstantArray_111183ff8;
          func_0x00010bf52a60();
        } while (ppuVar4 != (undefined **)0x0);
      }
      *(char *)(param_1 + lVar7) = (char)param_3;
      func_0x00010bed85c0(param_1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11f020(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10b830c74; end: 10b830cdf; -[SIGButton _setupViewLayouts] */

void FUN_10b830c74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11f020(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b830ce0; end: 10b83109f; -[SIGButton _updateForState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b830ce0(double param_1,double param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  
  func_0x00010c0699c0();
  lVar1 = param_3;
  dVar10 = param_1;
  dVar11 = param_2;
  func_0x00010be071c0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_1127945b0;
  uVar7 = *(undefined8 *)(param_3 + lVar9);
  _objc_retain(uVar7);
  uVar8 = *(undefined8 *)(param_3 + _DAT_1127945ac);
  _objc_retain(uVar8);
  func_0x00010bf13d40();
  FUN_10b83340c();
  lVar5 = lVar1;
  func_0x00010bfe8e00(lVar1);
  lVar2 = lVar1;
  func_0x00010bf13d40(lVar1);
  lVar3 = lVar2;
  func_0x00010b88a460();
  FUN_10b833398(lVar5,lVar2,lVar3,2 < lRam00000001138466f0);
  lVar5 = lVar1;
  func_0x00010c271240(lVar1);
  lVar2 = lVar1;
  func_0x00010bf13d40(lVar1);
  lVar3 = lVar2;
  func_0x00010b88a460();
  FUN_10b833398(lVar5,lVar2,lVar3,2 < lRam00000001138466f0);
  lVar5 = lVar1;
  func_0x00010c249ee0(lVar1);
  lVar2 = lVar1;
  func_0x00010bf13d40(lVar1);
  lVar3 = lVar2;
  func_0x00010b88a460();
  FUN_10b833398(lVar5,lVar2,lVar3,2 < lRam00000001138466f0);
  lVar5 = lVar1;
  func_0x00010beed360(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161280(uVar7);
  _objc_release(lVar5);
  lVar5 = lVar1;
  func_0x00010bfe6ac0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(uVar7);
  _objc_release(lVar2);
  _objc_release(lVar5);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aab20(uVar7);
  _objc_release(puVar4);
  lVar5 = *(long *)(param_3 + lVar9);
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    uVar6 = *(undefined8 *)(param_3 + lVar9);
    func_0x00010beed360(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60(uVar7);
    _objc_release(uVar6);
  }
  else {
    func_0x00010c1a7f60(uVar7);
  }
  _objc_release(lVar5);
  lVar5 = lVar1;
  func_0x00010c2711a0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(uVar8);
  _objc_release(lVar5);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(uVar8);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_3);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1fb20(lVar1);
  func_0x00010c23ba80(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  lVar5 = param_3;
  func_0x00010c08c0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(lVar5);
  _objc_release(puVar4);
  func_0x00010bf1fc80(lVar1);
  lVar5 = param_3;
  func_0x00010c08c0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0();
  _objc_release(lVar5);
  func_0x00010c216160(*(undefined8 *)(param_3 + _DAT_1127945a8));
  func_0x00010bedfc40(param_3);
  func_0x00010c286a40(param_3);
  func_0x00010c0699c0(param_3);
  if ((param_1 != dVar10) || (param_2 != dVar11)) {
    func_0x00010c069fa0(param_3);
  }
  _objc_release(uVar8);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b8310a0; end: 10b8310a3; -[SIGButton updateInternalConstraints] */

void FUN_10b8310a0(void)

{
  return;
}



/* Entry: 10b8310a4; end: 10b831203; -[SIGButton _updateShadow] */

void FUN_10b8310a4(undefined *param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar2 = param_1;
  func_0x00010be071c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfdbf60();
  _objc_release(puVar2);
  iVar4 = (int)puVar3;
  bVar1 = iVar4 == 0;
  uVar6 = 0x4020000000000000;
  if (bVar1) {
    uVar6 = 0;
  }
  uVar7 = 0;
  if (bVar1) {
    uVar7 = *(undefined8 *)PTR__CGSizeZero_110347620;
  }
  uVar8 = 0x4008000000000000;
  if (bVar1) {
    uVar8 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  }
  puVar2 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe7a0(uVar7,uVar8);
  _objc_release(puVar2);
  puVar2 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe840(uVar6);
  _objc_release(puVar2);
  if (iVar4 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7b);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
  }
  puVar3 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe740();
  _objc_release(puVar3);
  uVar5 = 0;
  if (iVar4 != 0) {
    _objc_release(puVar2);
    uVar5 = 0x3d8f5c29;
  }
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b831204; end: 10b831383; -[SIGButton _effectiveModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10b831204(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined **ppuVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = (long)_DAT_1127945a0;
  uVar1 = *(ulong *)(param_1 + lVar8);
  func_0x00010c0e00e0(uVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3f60);
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  ppuVar2 = &PTR__OBJC_CLASS___NSConstantArray_111184010;
  func_0x00010bf52a60(&PTR__OBJC_CLASS___NSConstantArray_111184010,param_2,&uStack_130,auStack_e8,
                      0x10);
  if (ppuVar2 != (undefined **)0x0) {
    lVar9 = *plStack_120;
    do {
      ppuVar10 = (undefined **)0x0;
      uVar6 = uVar1;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_111184010);
        }
        uVar7 = *(ulong *)(lStack_128 + (long)ppuVar10 * 8);
        uVar3 = param_1;
        func_0x00010c252440();
        uVar4 = uVar7;
        func_0x00010c067fc0();
        uVar1 = uVar6;
        if ((uVar4 & uVar3) != 0) {
          uVar5 = *(undefined8 *)(param_1 + lVar8);
          func_0x00010c0e00e0(uVar5,param_2,uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0d0200(uVar6,param_2,uVar5);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar6);
          _objc_release(uVar5);
        }
        ppuVar10 = (undefined **)((long)ppuVar10 + 1);
        uVar6 = uVar1;
      } while (ppuVar2 != ppuVar10);
      ppuVar2 = &PTR__OBJC_CLASS___NSConstantArray_111184010;
      func_0x00010bf52a60(&PTR__OBJC_CLASS___NSConstantArray_111184010,param_2,&uStack_130,
                          auStack_e8,0x10);
    } while (ppuVar2 != (undefined **)0x0);
  }
  lVar8 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
    return uVar1;
  }
  ___stack_chk_fail();
  return (ulong)*(byte *)(lVar8 + _DAT_1127945b4);
}



/* Entry: 10b831384; end: 10b831393; -[SIGButton isLoading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b831384(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127945b4);
}



/* Entry: 10b831394; end: 10b8313a3; -[SIGButton style] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b831394(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794578);
}



/* Entry: 10b8313a4; end: 10b8313b3; -[SIGButton accessoryPosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b8313a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794574);
}



/* Entry: 10b8313b4; end: 10b8313c3; -[SIGButton expandedTouchAreaMargin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b8313b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11279457c);
}



/* Entry: 10b8313c4; end: 10b8313d3; -[SIGButton setExpandedTouchAreaMargin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8313c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11279457c) = param_3;
  return;
}



/* Entry: 10b8313d4; end: 10b8313e3; -[SIGButton allowTwoLineButtonText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b8313d4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127945c0);
}



/* Entry: 10b8313e4; end: 10b8313f3; -[SIGButton enableScalingAnimationsOnTouch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b8313e4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112794590);
}



/* Entry: 10b8313f4; end: 10b831403; -[SIGButton setEnableScalingAnimationsOnTouch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8313f4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112794590) = param_3;
  return;
}



/* Entry: 10b831404; end: 10b831493; -[SIGButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b831404(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127945a4,0);
  _objc_storeStrong(param_1 + _DAT_1127945a8,0);
  _objc_storeStrong(param_1 + _DAT_1127945b0,0);
  _objc_storeStrong(param_1 + _DAT_1127945ac,0);
  _objc_storeStrong(param_1 + _DAT_1127945bc,0);
  _objc_storeStrong(param_1 + _DAT_11279459c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127945a0,0);
  return;
}



/* Entry: 10b831494; end: 10b8322fb; -[SIGDynamicTypeButton _setupViewLayouts] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b831494(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  uint uVar25;
  uint uVar26;
  long lVar27;
  ulong uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  long lVar35;
  long lVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  double dVar39;
  
  lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar36 = *(long *)(param_1 + _DAT_1127945a4);
  _objc_retain(lVar36);
  uVar33 = *(undefined8 *)(param_1 + _DAT_1127945ac);
  _objc_retain(uVar33);
  uVar32 = *(undefined8 *)(param_1 + _DAT_1127945b0);
  _objc_retain(uVar32);
  uVar34 = *(undefined8 *)(param_1 + _DAT_1127945a8);
  _objc_retain(uVar34);
  lVar35 = (long)_DAT_112794598;
  uVar28 = *(long *)(param_1 + lVar35) - 2;
  if (uVar28 < 3) {
    uVar38 = *(undefined8 *)(&UNK_10e5f30d0 + uVar28 * 8);
  }
  else {
    uVar38 = 0x4049000000000000;
  }
  lVar1 = param_1;
  func_0x00010bf015c0();
  if ((int)lVar1 != 0) {
    func_0x00010c1cfce0(uVar33);
  }
  func_0x00010c181cc0(0x443c0000,uVar33);
  func_0x00010c181cc0(0x443c0000,uVar32);
  lVar1 = param_1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf49420(0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010c1e3380(0x443bc000,lVar2);
  func_0x00010c181cc0(0x443b8000,uVar33);
  lVar1 = param_1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf494e0(0x4046000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bf494e0(uVar38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar28 = *(long *)(param_1 + lVar35) - 2;
  dVar39 = 12.0;
  if (uVar28 < 3) {
    dVar39 = *(double *)(&UNK_10e5f30b8 + uVar28 * 8);
  }
  lVar1 = lVar36;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010bf49480(dVar39);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar1);
  lVar1 = lVar36;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  dVar39 = -dVar39;
  lVar7 = lVar1;
  func_0x00010bf49520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar1);
  lVar1 = lVar36;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar36;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010bf348e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar38 = uVar34;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar36;
  func_0x00010bf34860(lVar36);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar38;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar34;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar36;
  func_0x00010bf348e0(lVar36);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar16);
  _objc_release(lVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(lVar12);
  _objc_release(uVar38);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar5);
  _objc_release(lVar1);
  func_0x00010c1251c0(param_1);
  uVar38 = *(undefined8 *)(param_1 + lVar35);
  lVar35 = param_1;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar35;
  func_0x00010c1069c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c06da00(param_1);
  lVar15 = lVar1;
  FUN_10b8322fc(uVar38,lVar1,lVar5,0);
  _objc_release(lVar1);
  _objc_release(lVar35);
  lVar35 = lVar36;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c08de00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar35;
  func_0x00010bf49480(dVar39);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar35);
  lVar35 = lVar36;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar35;
  func_0x00010bf49520(-dVar39);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar35);
  puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar38 = *(undefined8 *)(param_1 + _DAT_1127945c4);
  *(undefined **)(param_1 + _DAT_1127945c4) = puVar18;
  _objc_release(uVar38);
  uVar38 = uVar32;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = lVar36;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar38;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar32;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar33;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar14;
  func_0x00010bf493c0(0xc010000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar32;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar36;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar33;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar36;
  func_0x00010c2793a0(lVar36);
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar21;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar33;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar36;
  func_0x00010bf348e0(lVar36);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar22;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar36;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar33;
  func_0x00010bfe0660(uVar33);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf49460();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(param_1 + _DAT_1127945c8);
  *(undefined **)(param_1 + _DAT_1127945c8) = puVar18;
  _objc_release(uVar29);
  _objc_release(lVar12);
  _objc_release(uVar24);
  _objc_release(lVar11);
  _objc_release(uVar23);
  _objc_release(lVar10);
  _objc_release(uVar22);
  _objc_release(uVar30);
  _objc_release(lVar9);
  _objc_release(uVar21);
  _objc_release(uVar31);
  _objc_release(lVar1);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar16);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(lVar35);
  _objc_release(uVar38);
  uVar38 = uVar32;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = lVar36;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar38;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar32;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar33;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar37 = 0x4010000000000000;
  uVar19 = uVar14;
  func_0x00010bf493c0(0x4010000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar32;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar36;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar33;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar36;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar21;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar33;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar36;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar22;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar36;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar33;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar12;
  func_0x00010bf49460();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(param_1 + _DAT_1127945cc);
  *(undefined **)(param_1 + _DAT_1127945cc) = puVar18;
  _objc_release(uVar29);
  _objc_release(lVar1);
  _objc_release(uVar24);
  _objc_release(lVar12);
  _objc_release(uVar23);
  _objc_release(lVar11);
  _objc_release(uVar22);
  _objc_release(uVar30);
  _objc_release(lVar10);
  _objc_release(uVar21);
  _objc_release(uVar31);
  _objc_release(lVar9);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar16);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(lVar35);
  _objc_release(uVar38);
  uVar13 = uVar33;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = lVar36;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar33;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar36;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar16;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar33;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar36;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar33;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar36;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar38 = uVar21;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = *(undefined8 *)(param_1 + _DAT_1127945d0);
  *(undefined **)(param_1 + _DAT_1127945d0) = puVar18;
  _objc_release(uVar30);
  _objc_release(uVar38);
  _objc_release(lVar10);
  _objc_release(uVar21);
  _objc_release(uVar31);
  _objc_release(lVar9);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(lVar1);
  _objc_release(uVar16);
  _objc_release(uVar14);
  _objc_release(lVar35);
  _objc_release(uVar13);
  uVar38 = uVar32;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = lVar36;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar38;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar32;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar36;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar32;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar36;
  func_0x00010bf348e0(lVar36);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar19;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = 3;
  puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = *(undefined8 *)(param_1 + _DAT_1127945d4);
  *(undefined **)(param_1 + _DAT_1127945d4) = puVar18;
  _objc_release(uVar31);
  _objc_release(uVar20);
  _objc_release(lVar1);
  _objc_release(uVar19);
  _objc_release(uVar16);
  _objc_release(lVar9);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(lVar35);
  _objc_release(uVar38);
  uVar38 = *(undefined8 *)(param_1 + _DAT_1127945d8);
  *(undefined **)(param_1 + _DAT_1127945d8) = PTR____NSArray0__struct_11034ab48;
  _objc_release(uVar38);
  puVar18 = puVar17;
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  uVar25 = (uint)puVar18;
  func_0x00010c286a40(param_1);
  _objc_release(lVar8);
  _objc_release(lVar5);
  _objc_release(puVar17);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(uVar34);
  _objc_release(uVar32);
  _objc_release(uVar33);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar27) {
    ___stack_chk_fail();
    _objc_retain(lVar15);
    if (lVar36 - 2U < 2) {
      uVar32 = 0x4030000000000000;
    }
    else if (lVar36 == 4) {
      uVar32 = 0x4028000000000000;
    }
    else {
      uVar32 = 0x4038000000000000;
      if (lVar36 == 0) {
        lVar36 = lVar15;
        _UIContentSizeCategoryCompareToCategory
                  (lVar15,*(undefined8 *)PTR__UIContentSizeCategoryExtraExtraLarge_110345b48);
        if (lVar36 == -1) {
          uVar25 = 1;
        }
        uVar32 = 0x4053000000000000;
        if ((uVar26 & uVar25) == 0) {
          uVar32 = 0x4038000000000000;
        }
      }
    }
    _objc_release(lVar15);
    return uVar32;
  }
  return uVar37;
}



/* Entry: 10b8322fc; end: 10b8323a3;  */

undefined8 FUN_10b8322fc(long param_1,long param_2,uint param_3,uint param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  if (param_1 - 2U < 2) {
    uVar2 = 0x4030000000000000;
  }
  else if (param_1 == 4) {
    uVar2 = 0x4028000000000000;
  }
  else {
    uVar2 = 0x4038000000000000;
    if (param_1 == 0) {
      lVar1 = param_2;
      _UIContentSizeCategoryCompareToCategory
                (param_2,*(undefined8 *)PTR__UIContentSizeCategoryExtraExtraLarge_110345b48);
      if (lVar1 == -1) {
        param_3 = 1;
      }
      uVar2 = 0x4053000000000000;
      if ((param_4 & param_3) == 0) {
        uVar2 = 0x4038000000000000;
      }
    }
  }
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 10b8323a4; end: 10b83258f; -[SIGDynamicTypeButton refreshContentSizeDependentConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8323a4(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = (long)_DAT_1127945dc;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_3,
                      *(undefined8 *)(param_2 + lVar9));
  uVar7 = *(undefined8 *)(param_2 + _DAT_1127945a4);
  uVar8 = *(undefined8 *)(param_2 + _DAT_112794598);
  _objc_retain(uVar7);
  lVar1 = param_2;
  func_0x00010c279540(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c1069c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010c06da00(param_2);
  FUN_10b8322fc(uVar8,lVar2,lVar3,*(undefined1 *)(param_2 + _DAT_112794594));
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar8 = uVar7;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c08de00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar8;
  func_0x00010bf49480(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(uVar8);
  uVar8 = uVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c2793a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar8;
  func_0x00010bf49520(-param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(uVar8);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar4;
  uStack_70 = uVar5;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_2 + lVar9);
  *(undefined **)(param_2 + lVar9) = puVar6;
  _objc_release(uVar8);
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar8 = uVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_10b832590;
  uStack_a0 = uVar7;
  lStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x00010c286a40();
  puStack_a8 = PTR_PTR_11270b3c0;
  uStack_b0 = uVar8;
  _objc_msgSendSuper2(&uStack_b0,PTR_s_updateConstraints_11267ec30);
  return;
}



/* Entry: 10b832590; end: 10b8325d3; -[SIGDynamicTypeButton updateConstraints] */

void FUN_10b832590(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c286a40();
  puStack_28 = PTR_PTR_11270b3c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_updateConstraints_11267ec30);
  return;
}



/* Entry: 10b8325d4; end: 10b83272b; -[SIGDynamicTypeButton _updateForState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8325d4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lStack_60;
  undefined *puStack_58;
  
  lVar2 = param_1;
  func_0x00010be071c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(param_1 + _DAT_1127945ac);
  _objc_retain(lVar7);
  lVar3 = lVar7;
  func_0x00010c0def20();
  lVar4 = lVar2;
  func_0x00010bf015c0();
  lVar1 = 1;
  if ((int)lVar4 != 0) {
    lVar1 = 2;
  }
  lVar4 = lVar7;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    lVar4 = lVar2;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != 0) goto LAB_10b832670;
    if (lVar3 == lVar1) goto LAB_10b8326cc;
  }
  else {
    _objc_release();
LAB_10b832670:
    lVar4 = lVar7;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c2711a0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010c0720c0();
    _objc_release(lVar5);
    _objc_release(lVar4);
    if ((int)lVar6 != 0 && lVar3 == lVar1) goto LAB_10b8326cc;
  }
  func_0x00010c06a1e0(param_1);
LAB_10b8326cc:
  *(undefined1 *)(param_1 + _DAT_1127945e0) = 0;
  puStack_58 = PTR_PTR_11270b3c0;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s__updateForState_112593b18);
  _objc_release(lVar7);
  _objc_release(lVar2);
  return;
}



/* Entry: 10b83272c; end: 10b832903; -[SIGDynamicTypeButton layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83272c(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  long lStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  puVar2 = PTR_s_layoutSubviews_112600e60;
  puStack_68 = PTR_PTR_11270b3c0;
  lStack_70 = param_5;
  _objc_msgSendSuper2(&lStack_70,PTR_s_layoutSubviews_112600e60);
  func_0x00010bfb68e0(param_5);
  dVar5 = *(double *)PTR__CGSizeZero_110347620;
  dVar7 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  bVar1 = false;
  if ((dVar5 == param_3) && (bVar1 = false, !NAN(dVar7) && !NAN(param_4))) {
    bVar1 = dVar7 == param_4;
  }
  if (!bVar1) {
    lVar3 = (long)_DAT_1127945e4;
    lVar4 = (long)_DAT_1127945ac;
    if (*(char *)(param_5 + lVar3) == '\x01') {
      dVar6 = 0.0;
      func_0x00010c1e0180();
      *(undefined1 *)(param_5 + lVar3) = 0;
    }
    else {
      dVar6 = param_3;
      func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar4));
      param_3 = dVar6;
      func_0x00010c1e0180(*(undefined8 *)(param_5 + lVar4));
    }
    func_0x00010c0699c0(param_5);
    lVar3 = (long)_DAT_1127945e0;
    dVar5 = dVar6;
    if ((*(byte *)(param_5 + lVar3) & 1) == 0) {
      func_0x00010bfb68e0(param_5);
      dVar5 = (double)(long)param_3;
      dVar7 = (double)(long)dVar6;
      *(bool *)(param_5 + lVar3) = dVar5 < dVar7;
    }
    func_0x00010c286a40(param_5);
    puStack_78 = PTR_PTR_11270b3c0;
    lStack_80 = param_5;
    _objc_msgSendSuper2(&lStack_80,puVar2);
  }
  func_0x00010bed6260(param_5);
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  if (*(ulong *)(param_5 + _DAT_112794598) < 2) {
    func_0x00010bf20c00(param_5);
    lVar3 = param_5;
    dVar6 = dVar5;
    func_0x00010c08c0e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf525a0();
    func_0x00010bf19a00(dVar5,dVar7,param_3,param_4,dVar6,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_retainAutorelease(puVar2);
    func_0x00010bdc1040();
    func_0x00010c08c0e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe820();
    _objc_release(param_5);
    _objc_release(puVar2);
  }
  return;
}



/* Entry: 10b832904; end: 10b83290b; -[SIGDynamicTypeButton updateInternalConstraints] */

void FUN_10b832904(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed9d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateInternalConstraintsForceU_112594100,0)
  ;
  return;
}



/* Entry: 10b83290c; end: 10b832a2f; -[SIGDynamicTypeButton _updateInternalConstraintsForceUpdate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83290c(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  
  bVar2 = *(byte *)(param_1 + _DAT_1127945e0);
  lVar5 = *(long *)(param_1 + _DAT_1127945ac);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar4 = (uint)*(undefined8 *)(param_1 + _DAT_1127945b0);
  func_0x00010c074c20();
  iVar3 = _DAT_1127945f0;
  uVar4 = uVar4 ^ 1;
  lVar1 = (long)_DAT_1127945ec;
  if ((((*(ulong *)(param_1 + _DAT_1127945e8) == (ulong)bVar2) &&
       ((bool)*(char *)(param_1 + lVar1) == (lVar5 != 0))) && ((param_3 & 1) == 0)) &&
     (*(byte *)(param_1 + _DAT_1127945f0) == uVar4)) {
    return;
  }
  *(ulong *)(param_1 + _DAT_1127945e8) = (ulong)bVar2;
  *(bool *)(param_1 + lVar1) = lVar5 != 0;
  *(char *)(param_1 + iVar3) = (char)uVar4;
  func_0x00010bedff20(param_1);
  if ((lVar5 == 0) || ((uVar4 & 1) == 0)) {
    if (lVar5 == 0 || uVar4 != 0) {
      uVar6 = 2;
      if ((lVar5 == 0 & uVar4) == 0) {
        uVar6 = 3;
      }
    }
    else {
      uVar6 = 1;
    }
  }
  else {
    uVar6 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bed5cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateConstraintsForPattern__1125930e0,uVar6);
  return;
}



/* Entry: 10b832a30; end: 10b832ab7; -[SIGDynamicTypeButton _updateSizeConstraintsWithWidthConstraintRule:] */

void FUN_10b832a30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = param_1;
  func_0x00010bdf8520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf65be0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x00010bdc50c0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b832ab8; end: 10b832b03; -[SIGDynamicTypeButton _activationConstraintsForWidthConstraintRule:] */

void FUN_10b832ab8(long param_1,undefined8 param_2,long param_3)

{
  int *piVar1;
  undefined8 unaff_x19;
  
  if (param_3 == 0) {
    piVar1 = (int *)&DAT_1127945dc;
  }
  else {
    if (param_3 != 1) goto LAB_10b832af4;
    piVar1 = (int *)&DAT_1127945c4;
  }
  unaff_x19 = *(undefined8 *)(param_1 + *piVar1);
  _objc_retain(unaff_x19);
LAB_10b832af4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 10b832b04; end: 10b832b6f; -[SIGDynamicTypeButton _deactivationConstraintsForWidthConstraintRule:] */

void FUN_10b832b04(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  int *piVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  if (param_3 == 0) {
    piVar2 = (int *)&DAT_1127945c4;
  }
  else {
    if (param_3 != 1) goto LAB_10b832b5c;
    piVar2 = (int *)&DAT_1127945dc;
  }
  func_0x00010befa160(puVar1,param_2,*(undefined8 *)(param_1 + *piVar2));
LAB_10b832b5c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b832b70; end: 10b832bf7; -[SIGDynamicTypeButton _updateConstraintsForPattern:] */

void FUN_10b832b70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = param_1;
  func_0x00010bdf8500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf65be0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x00010bdc50a0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b832bf8; end: 10b832c8b; -[SIGDynamicTypeButton _activationConstraintsForPattern:] */

void FUN_10b832bf8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int *piVar2;
  undefined8 unaff_x20;
  
  if (param_3 < 2) {
    if (param_3 == 0) {
      lVar1 = param_1;
      func_0x00010beed240();
      piVar2 = (int *)&DAT_1127945c8;
      if (lVar1 != 0) {
        piVar2 = (int *)&DAT_1127945cc;
      }
    }
    else {
      if (param_3 != 1) goto LAB_10b832c7c;
      piVar2 = (int *)&DAT_1127945d0;
    }
  }
  else if (param_3 == 2) {
    piVar2 = (int *)&DAT_1127945d4;
  }
  else {
    if (param_3 != 3) goto LAB_10b832c7c;
    piVar2 = (int *)&DAT_1127945d8;
  }
  unaff_x20 = *(undefined8 *)(param_1 + *piVar2);
  _objc_retain(unaff_x20);
LAB_10b832c7c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x20);
  return;
}



/* Entry: 10b832c8c; end: 10b832d73; -[SIGDynamicTypeButton _deactivationConstraintsForPattern:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b832c8c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  piVar4 = (int *)&DAT_1127945d0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  if (param_3 < 2) {
    piVar3 = (int *)&DAT_1127945d8;
    piVar5 = (int *)&DAT_1127945d4;
    if (param_3 != 0) {
      if (param_3 != 1) goto LAB_10b832d48;
      goto LAB_10b832d00;
    }
  }
  else {
    piVar5 = piVar4;
    if (param_3 == 3) {
      piVar3 = (int *)&DAT_1127945d4;
    }
    else {
      if (param_3 != 2) goto LAB_10b832d48;
      piVar3 = (int *)&DAT_1127945d8;
    }
LAB_10b832d00:
    piVar4 = (int *)&DAT_1127945cc;
    func_0x00010befa160(puVar1,param_2,*(undefined8 *)(param_1 + _DAT_1127945c8));
  }
  func_0x00010befa160(puVar1,param_2,*(undefined8 *)(param_1 + *piVar4));
  func_0x00010befa160(puVar1,param_2,*(undefined8 *)(param_1 + *piVar5));
  func_0x00010befa160(puVar1,param_2,*(undefined8 *)(param_1 + *piVar3));
LAB_10b832d48:
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b832d74; end: 10b832e53; -[SIGDynamicTypeButton _contentViewWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10b832d74(double param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  lVar3 = (long)_DAT_1127945b0;
  func_0x00010c0699c0(*(undefined8 *)(param_2 + lVar3));
  lVar4 = (long)_DAT_1127945ac;
  lVar2 = *(long *)(param_2 + lVar4);
  dVar5 = param_1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x00010c0699c0(*(undefined8 *)(param_2 + lVar3));
  uVar1 = (uint)*(undefined8 *)(param_2 + lVar3);
  dVar6 = dVar5;
  func_0x00010c074c20();
  func_0x00010c0699c0(*(undefined8 *)(param_2 + lVar4));
  if (dVar6 <= 0.0) {
    dVar6 = 0.0;
  }
  if (dVar6 <= 60000.0) {
    *(double *)(param_2 + _DAT_1127945f4) = dVar6;
  }
  else {
    dVar6 = *(double *)(param_2 + _DAT_1127945f4);
  }
  dVar7 = param_1 + 4.0;
  if (((uint)(lVar2 != 0) & (uVar1 ^ 0xffffffff) & (uint)(0.0 < dVar5)) == 0) {
    dVar7 = param_1;
  }
  return dVar7 + dVar6;
}



/* Entry: 10b832e54; end: 10b832f87; -[SIGDynamicTypeButton intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10b832e54(undefined8 param_1,double param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  
  lVar5 = (long)_DAT_112794598;
  uVar2 = *(long *)(param_3 + lVar5) - 2;
  if (uVar2 < 3) {
    dVar7 = *(double *)(&UNK_10e5f30b8 + uVar2 * 8);
    dVar8 = *(double *)(&UNK_10e5f30d0 + uVar2 * 8);
  }
  else {
    dVar7 = 12.0;
    dVar8 = 50.0;
  }
  lVar3 = (long)_DAT_1127945ac;
  func_0x00010c0699c0(*(undefined8 *)(param_3 + lVar3));
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  lVar3 = *(long *)(param_3 + lVar3);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  dVar7 = param_2 + dVar7 * 2.0;
  if (lVar3 != 0) {
    param_2 = dVar7;
  }
  uVar4 = *(undefined8 *)(param_3 + lVar5);
  lVar5 = param_3;
  func_0x00010c279540(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010c1069c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c06da00(param_3);
  FUN_10b8322fc(uVar4,lVar3,lVar1,*(undefined1 *)(param_3 + _DAT_112794594));
  dVar6 = dVar7;
  _objc_release(lVar3);
  _objc_release(lVar5);
  func_0x00010bde8200(param_3);
  auVar9._0_8_ = dVar7 + dVar7 + dVar6;
  if (dVar8 <= param_2) {
    dVar8 = param_2;
  }
  auVar9._8_8_ = dVar8;
  return auVar9;
}



/* Entry: 10b832f88; end: 10b83314b; -[SIGDynamicTypeButton _updateCornerRadius] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b832f88(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  lVar6 = (long)_DAT_112794598;
  uVar5 = *(undefined8 *)(param_5 + lVar6);
  lVar1 = param_5;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c1069c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_5;
  func_0x00010c06da00(param_5);
  FUN_10b8322fc(uVar5,lVar2,lVar3,*(undefined1 *)(param_5 + _DAT_112794594));
  dVar7 = param_1;
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar4 = *(long *)(param_5 + lVar6) - 2;
  dVar12 = 12.0;
  if (uVar4 < 3) {
    dVar12 = *(double *)(&UNK_10e5f30b8 + uVar4 * 8);
  }
  func_0x00010bf20c00(param_5);
  uVar5 = *(undefined8 *)(param_5 + _DAT_1127945ac);
  dVar10 = dVar7;
  dVar9 = param_3;
  dVar11 = param_4;
  func_0x00010bfb3a80(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099280();
  FUN_10b86e880();
  _objc_release(uVar5);
  uVar4 = *(long *)(param_5 + lVar6) - 2;
  if (uVar4 < 3) {
    dVar8 = *(double *)(&UNK_10e5f30d0 + uVar4 * 8);
  }
  else {
    dVar8 = 50.0;
  }
  dVar10 = dVar10 + dVar12 * 2.0;
  if (dVar10 <= dVar8) {
    dVar10 = dVar8;
  }
  func_0x00010bf20c00(param_5);
  FUN_10b86e7b8(dVar9,dVar11,param_1 + dVar7,dVar12 + param_2,param_3 - (param_1 + param_1),
                param_4 - (dVar12 + dVar12));
  if (dVar10 * 0.5 <= dVar9) {
    dVar9 = dVar10 * 0.5;
  }
  func_0x00010b86e8e0();
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10b83314c; end: 10b83323f; -[SIGDynamicTypeButton traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83314c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_traitCollectionDidChange__11267bf88;
  puStack_38 = PTR_PTR_11270b3c0;
  lStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1,param_3);
  uVar2 = param_3;
  func_0x00010c1069c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = param_1;
  func_0x00010c279540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c1069c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  uVar5 = uVar2;
  func_0x00010c0720c0();
  if ((uVar5 & 1) == 0) {
    func_0x00010c069fa0(param_1);
    func_0x00010c06a1e0(param_1);
    *(undefined1 *)(param_1 + _DAT_1127945e0) = 0;
    func_0x00010c1251c0(param_1);
    func_0x00010bed9d60(param_1);
  }
  _objc_release(lVar4);
  _objc_release(uVar2);
  return;
}



/* Entry: 10b833240; end: 10b8332a7; -[SIGDynamicTypeButton invalidateTextContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b833240(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010bf015c0();
  lVar3 = (long)_DAT_1127945ac;
  uVar1 = 1;
  if ((int)lVar2 != 0) {
    uVar1 = 2;
  }
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar3),param_2,uVar1);
  func_0x00010c1e0180(0,*(undefined8 *)(param_1 + lVar3));
  *(undefined8 *)(param_1 + _DAT_1127945f4) = 0;
  *(undefined1 *)(param_1 + _DAT_1127945e4) = 1;
  return;
}



/* Entry: 10b8332a8; end: 10b833307; -[SIGDynamicTypeButton isButtonAccessoryViewOnly] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10b8332a8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_1127945ac);
  func_0x00010c26b700(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127945b0);
  func_0x00010c074c20(uVar2);
  return (uint)(lVar1 == 0) & ((uint)uVar2 ^ 1);
}



/* Entry: 10b833308; end: 10b833397; -[SIGDynamicTypeButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b833308(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127945c4,0);
  _objc_storeStrong(param_1 + _DAT_1127945dc,0);
  _objc_storeStrong(param_1 + _DAT_1127945d8,0);
  _objc_storeStrong(param_1 + _DAT_1127945d4,0);
  _objc_storeStrong(param_1 + _DAT_1127945d0,0);
  _objc_storeStrong(param_1 + _DAT_1127945cc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127945c8,0);
  return;
}



/* Entry: 10b833398; end: 10b83340b;  */

ulong FUN_10b833398(ulong param_1,ulong param_2,int param_3,uint param_4)

{
  ulong *puVar1;
  ulong uVar2;
  
  if (((param_4 & 1) == 0) && (param_3 != 0)) {
    puVar1 = (ulong *)&UNK_10e5f30e8;
    do {
      uVar2 = *puVar1;
      puVar1 = puVar1 + 1;
    } while (uVar2 != (param_2 & 0x3fffffff) && uVar2 != 0);
    if (uVar2 != 0 && (param_2 & 0xffffffffc0000000 | 0xa1) != param_2) {
      puVar1 = (ulong *)&UNK_10e5f3128;
      do {
        uVar2 = *puVar1;
        puVar1 = puVar1 + 1;
      } while (uVar2 != (param_1 & 0x3fffffff) && uVar2 != 0);
      if (uVar2 != 0) {
        param_1 = param_1 & 0xffffffffc0000000 | 0x3d;
      }
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 10b83340c; end: 10b8334b3;  */

ulong FUN_10b83340c(ulong param_1)

{
  ulong *puVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x00010b88a460();
  if (((int)uVar2 != 0) && (lRam00000001138466f0 < 3)) {
    puVar1 = (ulong *)&UNK_10e5f30e8;
    do {
      uVar2 = *puVar1;
      puVar1 = puVar1 + 1;
    } while (uVar2 != (param_1 & 0x3fffffff) && uVar2 != 0);
    if (uVar2 != 0) {
      param_1 = param_1 & 0xffffffffc0000000 | 0xa1;
    }
  }
  return param_1;
}



/* Entry: 10b8334b4; end: 10b833507; -[SIGScaleAnimationButton initWithFrame:] */

undefined1 * FUN_10b8334b4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270b3c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1af000(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b833508; end: 10b83355b; -[SIGScaleAnimationButton touchesBegan:withEvent:] */

void FUN_10b833508(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b3c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_touchesBegan_withEvent__11267b780);
  uVar1 = param_1;
  func_0x00010c071800();
  if ((int)uVar1 != 0) {
    func_0x00010bdca820(param_1);
  }
  return;
}



/* Entry: 10b83355c; end: 10b8335af; -[SIGScaleAnimationButton touchesEnded:withEvent:] */

void FUN_10b83355c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b3c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_touchesEnded_withEvent__11267b788);
  uVar1 = param_1;
  func_0x00010c071800();
  if ((int)uVar1 != 0) {
    func_0x00010bdcab20(param_1);
  }
  return;
}



/* Entry: 10b8335b0; end: 10b83365b; -[SIGScaleAnimationButton touchesMoved:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8335b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270b3c8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_touchesMoved_withEvent__11252ca58,param_3,param_4);
  lVar1 = param_1;
  func_0x00010c071800();
  if ((int)lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010be44b60();
    if ((int)lVar1 == 0) {
      if (*(byte *)(param_1 + _DAT_1127945f8) != 0) {
        func_0x00010bdcab20(param_1);
      }
    }
    else if ((*(byte *)(param_1 + _DAT_1127945f8) & 1) == 0) {
      func_0x00010bdca820(param_1);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10b83365c; end: 10b8336c3; -[SIGScaleAnimationButton touchesCancelled:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83365c(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b3c8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_touchesCancelled_withEvent__112526c90);
  lVar1 = param_1;
  func_0x00010c071800();
  if (((int)lVar1 != 0) && (*(char *)(param_1 + _DAT_1127945f8) == '\x01')) {
    func_0x00010bdcab20(param_1);
  }
  return;
}



/* Entry: 10b8336c4; end: 10b833737; -[SIGScaleAnimationButton _animateActivation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8336c4(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  *(undefined1 *)(param_1 + _DAT_1127945f8) = 1;
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b833738;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010bf03400(0x3fc3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_38);
  return;
}



/* Entry: 10b833738; end: 10b83378b;  */

void FUN_10b833738(long param_1,undefined8 param_2)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _CGAffineTransformMakeScale(&uStack_50,0x3ff0cccccccccccd,0x3ff0cccccccccccd);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_80);
  return;
}



/* Entry: 10b83378c; end: 10b833837; -[SIGScaleAnimationButton _animateDeactivation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83378c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  *(undefined1 *)(param_1 + _DAT_1127945f8) = 0;
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x10b8337fc;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010bf03400(0x3fc3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_38);
  return;
}



/* Entry: 10b833838; end: 10b8338a3; -[SIGScaleAnimationButton _isTouchInsideButton:] */

undefined8 FUN_10b833838(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf04a20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00();
  func_0x00010bf20c00(param_1);
  _CGRectContainsPoint();
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10b8338a4; end: 10b8339a7; +[SIGSendToButton sendToButtonWithTarget:action:] */

void FUN_10b8338a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  uVar5 = param_3;
  _objc_retain();
  func_0x00010b88a460();
  lVar1 = lRam00000001138466f0;
  uVar2 = uVar5;
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  if (((int)uVar5 == 0) || (2 < lVar1)) {
    func_0x00010c15d2e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c15cf60(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126e1648;
  _objc_alloc(PTR_PTR_1126e1648);
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  uVar5 = 0x88;
  FUN_10b83340c(0x88);
  func_0x00010c23ba80(puVar6,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01c3a0(puVar4,param_2,uVar3,param_3,param_4,puVar6);
  _objc_release(param_3);
  _objc_release(puVar6);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b8339a8; end: 10b833aab; +[SIGSendToButton whiteSendToButtonWithTarget:action:] */

void FUN_10b8339a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  uVar5 = param_3;
  _objc_retain();
  func_0x00010b88a460();
  lVar1 = lRam00000001138466f0;
  uVar2 = uVar5;
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  if (((int)uVar5 == 0) || (2 < lVar1)) {
    func_0x00010c15d760(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c15cf60(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126e1648;
  _objc_alloc(PTR_PTR_1126e1648);
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  uVar5 = 0x88;
  FUN_10b83340c(0x88);
  func_0x00010c23ba80(puVar6,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01c3a0(puVar4,param_2,uVar3,param_3,param_4,puVar6);
  _objc_release(param_3);
  _objc_release(puVar6);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b833aac; end: 10b833b7f; +[SIGSendToButton blackSendToButtonWithTarget:action:] */

void FUN_10b833aac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126e1648;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = puVar1;
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c15cf60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  uVar4 = 0x34;
  FUN_10b83340c(0x34);
  func_0x00010c23ba80(puVar5,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01c3a0(puVar1,param_2,puVar3,param_3,param_4,puVar5);
  _objc_release(param_3);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b833b80; end: 10b833eff; -[SIGSendToButton initWithImage:target:action:backgroundColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10b833b80(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_a0 = PTR_PTR_11270b3d0;
  puVar1 = &uStack_a8;
  uStack_a8 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar1,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = param_3;
    func_0x00010bfe77e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127945fc);
    *(undefined **)((long)puVar1 + (long)_DAT_1127945fc) = puVar3;
    _objc_release(uVar4);
    _objc_retain(puVar3);
    func_0x00010c16e440(puVar3);
    func_0x00010c182220(puVar3);
    puVar5 = puVar3;
    func_0x00010c08c0e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4038000000000000);
    _objc_release(puVar5);
    func_0x00010c219b60(puVar3);
    func_0x00010befbb60(puVar1);
    puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar6 = puVar3;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar3;
    puStack_98 = puVar8;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010bf348e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar3;
    puStack_90 = puVar11;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010bf49420(0x4045000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar3;
    puStack_88 = puVar13;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    func_0x00010bf49420(0x4045000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar15;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    func_0x00010befbd60(puVar1);
    puVar7 = puVar1;
    func_0x00010c160fc0(puVar1);
    func_0x00010b885128();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(puVar1);
    _objc_release(puVar7);
    _objc_release(puVar2);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar1;
  }
  ___stack_chk_fail();
  return param_3;
}



/* Entry: 10b833f00; end: 10b833f0f; -[SIGSendToButton intrinsicContentSize] */

void FUN_10b833f00(void)

{
  return;
}



/* Entry: 10b833f10; end: 10b833f23; -[SIGSendToButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b833f10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127945fc,0);
  return;
}



/* Entry: 10b833f24; end: 10b833fe7; +[SIGColorModel dynamicColorWithLightColor:darkColor:] */

void FUN_10b833f24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b833fe8;
  puStack_48 = &UNK_1108d59f0;
  _objc_retain(param_4);
  uStack_40 = param_4;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bf41560(puVar1,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b833fe8; end: 10b83402b;  */

void FUN_10b833fe8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010c292b20();
  lVar1 = 0x20;
  if (param_2 != 2) {
    lVar1 = 0x28;
  }
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b83402c; end: 10b834033; -[SIGColorModel primaryColor] */

undefined8 FUN_10b83402c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b834034; end: 10b834063; -[SIGColorModel setPrimaryColor:] */

void FUN_10b834034(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b834064; end: 10b83406b; -[SIGColorModel secondaryColor] */

undefined8 FUN_10b834064(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b83406c; end: 10b83409b; -[SIGColorModel setSecondaryColor:] */

void FUN_10b83406c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b83409c; end: 10b8340cb; -[SIGColorModel .cxx_destruct] */

void FUN_10b83409c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b8340cc; end: 10b834143; -[SIGToggleColorModel init] */

undefined1 * FUN_10b8340cc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270b3d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  puVar2 = PTR_PTR_1126e16b8;
  _objc_opt_new();
  uVar3 = *(undefined8 *)((long)puVar1 + 8);
  *(undefined **)((long)puVar1 + 8) = puVar2;
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126e16b8;
  _objc_opt_new();
  uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
  *(undefined **)((long)puVar1 + 0x10) = puVar2;
  _objc_release(uVar3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b834144; end: 10b8341a3; -[SIGToggleColorModel onColorIsHighlighted:] */

void FUN_10b834144(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c0e2f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf410a0(param_1,param_2,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b8341a4; end: 10b834203; -[SIGToggleColorModel offColorIsHighlighted:] */

void FUN_10b8341a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c0e1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf410a0(param_1,param_2,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b834204; end: 10b83426b; -[SIGToggleColorModel setOnColor:isHighlighted:] */

void FUN_10b834204(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0e2f60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17e820(param_1,param_2,param_3,param_4,uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b83426c; end: 10b8342d3; -[SIGToggleColorModel setOffColor:isHighlighted:] */

void FUN_10b83426c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0e1820(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17e820(param_1,param_2,param_3,param_4,uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b8342d4; end: 10b8342e3; -[SIGToggleColorModel setColor:isHighlighted:toModel:] */

void FUN_10b8342d4(void)

{
  int in_w3;
  undefined8 in_x4;
  
  if (in_w3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1f8f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(in_x4,PTR_s_setSecondaryColor__11265bdf8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1e29f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(in_x4,PTR_s_setPrimaryColor__1126564a0);
  return;
}



/* Entry: 10b8342e4; end: 10b834317; -[SIGToggleColorModel colorIsHighlighted:fromModel:] */

void FUN_10b8342e4(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  if ((param_3 & 1) == 0) {
    func_0x00010c112dc0(param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c154ea0();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b834318; end: 10b83431f; -[SIGToggleColorModel onColorModel] */

undefined8 FUN_10b834318(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b834320; end: 10b83434f; -[SIGToggleColorModel setOnColorModel:] */

void FUN_10b834320(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b834350; end: 10b834357; -[SIGToggleColorModel offColorModel] */

undefined8 FUN_10b834350(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b834358; end: 10b834387; -[SIGToggleColorModel setOffColorModel:] */

void FUN_10b834358(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


