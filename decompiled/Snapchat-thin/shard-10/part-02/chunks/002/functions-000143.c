/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107cd1d5c; end: 107cd1da7;  */

undefined ** FUN_107cd1d5c(ulong param_1)

{
  if (param_1 < 5) {
    return (undefined **)(&PTR_PTR_110a074e0)[param_1];
  }
  return &PTR____CFConstantStringClassReference_110eb6d58;
}



/* Entry: 107cd1da8; end: 107cd1e2f; -[SCPlaybackMediaResolutionLegacyAggregatedResult initWithContentStatus:error:] */

undefined1 *
FUN_107cd1da8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fa728;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107cd1e30; end: 107cd1e53; -[SCPlaybackMediaResolutionLegacyAggregatedResult copyWithZone:] */

undefined8 FUN_107cd1e30(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107cd1e54; end: 107cd1ebb; -[SCPlaybackMediaResolutionLegacyAggregatedResult hash] */

long * FUN_107cd1e54(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lStack_28 = -lVar1;
  if (-1 < lVar1) {
    lStack_28 = lVar1;
  }
  func_0x00010bfde980();
  plVar3 = &lStack_28;
  uStack_20 = uVar2;
  func_0x000100505190(plVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 != param_3) {
    plVar5 = (long *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_107cd1f40;
    plVar5 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar5);
    if ((((ulong)plVar4 & 1) == 0) || (plVar3[1] != param_3[1])) {
      plVar5 = (long *)0x0;
      goto LAB_107cd1f40;
    }
    plVar5 = (long *)plVar3[2];
    if (plVar5 != (long *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_107cd1f40;
    }
  }
  plVar5 = (long *)0x1;
LAB_107cd1f40:
  _objc_release(param_3);
  return plVar5;
}



/* Entry: 107cd1ebc; end: 107cd1f5b; -[SCPlaybackMediaResolutionLegacyAggregatedResult isEqual:] */

long FUN_107cd1ebc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107cd1f40;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_107cd1f40;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_107cd1f40;
    }
  }
  lVar3 = 1;
LAB_107cd1f40:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107cd1f5c; end: 107cd1f63; -[SCPlaybackMediaResolutionLegacyAggregatedResult contentStatus] */

undefined8 FUN_107cd1f5c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107cd1f64; end: 107cd1f6b; -[SCPlaybackMediaResolutionLegacyAggregatedResult error] */

undefined8 FUN_107cd1f64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107cd1f6c; end: 107cd1f77; -[SCPlaybackMediaResolutionLegacyAggregatedResult .cxx_destruct] */

void FUN_107cd1f6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107cd1f78; end: 107cd207b;  */

void FUN_107cd1f78(void)

{
  _objc_alloc(PTR_PTR_1126d7638);
  func_0x00010c042780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107cd207c; end: 107cd24df;  */

void FUN_107cd207c(double param_1,ulong param_2,ulong param_3,undefined8 param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar7 = param_1;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_8);
  uVar1 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08fa60();
  _objc_release(uVar1);
  if (uVar2 == 0) {
    func_0x00010c0b0e00(param_8);
  }
  uVar1 = param_2;
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08fa60();
  _objc_release(uVar1);
  if (uVar2 == 0) {
    uVar1 = param_3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      func_0x00010c0b0e00(param_8);
    }
    puVar6 = (undefined *)0x0;
  }
  else {
    func_0x000107cd1fc8();
    func_0x000107cd2018();
    uVar1 = param_2;
    func_0x00010853a834();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    dVar8 = dVar7;
    _objc_release(puVar6);
    uVar2 = param_2;
    uVar5 = param_3;
    if (uVar1 == 0) {
      uVar3 = param_3;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0720c0();
      _objc_release(uVar3);
      if (((uVar4 & 1) == 0) && (uVar3 = param_2, func_0x00010853a244(), (uVar3 & 1) == 0)) {
        uVar3 = param_2;
        func_0x00010853a9c4();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar3 == 0) {
          func_0x000108539a68();
        }
      }
      uVar3 = param_2;
      func_0x00010c26f2a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf9c720();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      _objc_release(uVar4);
      _objc_release(uVar3);
      uVar3 = param_2;
      func_0x00010853a704();
      dVar9 = dVar7 + 2592000.0;
      if ((int)uVar3 == 0) {
        dVar9 = dVar8;
      }
      puVar6 = PTR_PTR_1126d5338;
      _objc_alloc(PTR_PTR_1126d5338);
      func_0x00010c15f2e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2923e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x000107cd1f78(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c047d80(dVar9 * 1000.0,dVar7 * 1000.0,param_1,puVar6);
    }
    else {
      puVar6 = PTR_PTR_1126d5338;
      _objc_alloc();
      func_0x00010c15f2e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2923e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_2;
      func_0x00010c26f2a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf9c720();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      func_0x000107cd1f78(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c047d80(dVar8 * 1000.0,dVar7 * 1000.0,param_1,puVar6);
      _objc_release(param_5);
      _objc_release(uVar4);
      param_5 = uVar3;
    }
    _objc_release(param_5);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107cd24e0; end: 107cd28bb;  */

void FUN_107cd24e0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  double dVar9;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010bf5bbc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08fa60();
  _objc_release(uVar1);
  if (uVar2 == 0) {
    func_0x00010c0b0e00(param_4);
    uVar4 = 0;
  }
  else {
    uVar3 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf5bbc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0ee920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar3);
  }
  uVar1 = param_1;
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08fa60();
  _objc_release(uVar1);
  if (uVar2 == 0) {
    uVar1 = param_1;
    func_0x00010bf5bbc0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      func_0x00010c0b0e00(param_4);
    }
    puVar7 = (undefined *)0x0;
  }
  else {
    func_0x000107cd1fc8();
    func_0x000107cd2018();
    puStack_90 = &uStack_98;
    uStack_98 = 0;
    uStack_88 = 0x2020000000;
    uStack_80 = 1;
    uVar1 = param_1;
    func_0x00010bf0e700(param_1);
    _objc_retainAutoreleasedReturnValue();
    dVar8 = 1.60807493534087e-314;
    func_0x00010c0c1340();
    _objc_release(uVar1);
    puVar7 = PTR_PTR_1126d5338;
    _objc_alloc(PTR_PTR_1126d5338);
    uVar1 = param_1;
    func_0x00010c15f2e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf5bbc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010c26f2a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9c720();
    puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
    dVar9 = dVar8;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x000107cd1f78(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c047d80(dVar8 * 1000.0,dVar9 * 1000.0,0,puVar7);
    _objc_release(param_2);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar1);
    __Block_object_dispose(&uStack_98,8);
  }
  _objc_release(uVar4);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107cd28bc; end: 107cd28ff;  */

void FUN_107cd28bc(long param_1,ulong param_2)

{
  func_0x00010c27dd80();
  if (param_2 < 4) {
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) =
         *(undefined8 *)(&UNK_10dee5620 + param_2 * 8);
  }
  return;
}



/* Entry: 107cd2900; end: 107cd293b;  */

void FUN_107cd2900(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 2;
  return;
}



/* Entry: 107cd293c; end: 107cd2a5f;  */

void FUN_107cd293c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_4);
  _objc_retain(param_2);
  func_0x00010bf64de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126d5338;
  _objc_alloc(PTR_PTR_1126d5338);
  FUN_107cd1f78(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c047d80((param_1 + 86400.0) * 1000.0,param_1 * 1000.0,0,puVar1);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107cd2a60; end: 107cd2c5b;  */

void FUN_107cd2a60(long param_1,long param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_3;
  func_0x00010c08fa60();
  if (param_2 == 0) {
    if (puVar1 == (undefined *)0x0) goto LAB_107cd2bf8;
    uVar2 = 0x11;
    uVar3 = 0;
    _dispatch_get_global_queue(0x11,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    puVar4 = param_3;
    func_0x00010c2448c0(param_1);
    _objc_release(uVar2);
    puVar1 = param_4;
  }
  else {
    if (puVar1 == (undefined *)0x0) {
LAB_107cd2bf8:
      uVar3 = 0;
      (**(code **)(param_4 + 0x10))(param_4,0);
      goto LAB_107cd2c08;
    }
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = 0x11;
    uVar3 = 0;
    _dispatch_get_global_queue(0x11,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_4);
    puVar4 = puVar1;
    func_0x00010c09d7c0(param_2);
    _objc_release(uVar2);
    _objc_release(puVar1);
    _objc_release(param_4);
    puVar1 = param_3;
  }
  _objc_release(puVar1);
LAB_107cd2c08:
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)(param_1 + 0x28);
  if (puVar4 != (undefined *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000107cd2c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar5 + 0x10))(lVar5,0);
    return;
  }
  func_0x00010bfb1920(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(lVar5,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107cd2c5c; end: 107cd2cbb;  */

void FUN_107cd2c5c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107cd2c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107cd2cbc; end: 107cd2cc7;  */

void FUN_107cd2cbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107cd2cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 107cd2cc8; end: 107cd2d73; -[SCArroyoCallback initWithSuccessCallback:failureCallback:] */

undefined1 *
FUN_107cd2cc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fa730;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107cd2d74; end: 107cd2d83; -[SCArroyoCallback onError:] */

void FUN_107cd2d74(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000107cd2d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))(*(long *)(param_1 + 0x10),param_3);
  return;
}



/* Entry: 107cd2d84; end: 107cd2d8f; -[SCArroyoCallback onSuccess] */

void FUN_107cd2d84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107cd2d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 107cd2d90; end: 107cd2dbf; -[SCArroyoCallback .cxx_destruct] */

void FUN_107cd2d90(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107cd2dc0; end: 107cd2e6b; -[SCArroyoFetchConversationsCallback initWithSuccessHandler:failureHandler:] */

undefined1 *
FUN_107cd2dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fa738;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107cd2e6c; end: 107cd2e83; -[SCArroyoFetchConversationsCallback onFetchConversationsComplete:] */

void FUN_107cd2e6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107cd2e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 107cd2e84; end: 107cd2e9b; -[SCArroyoFetchConversationsCallback onError:] */

void FUN_107cd2e84(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107cd2e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 107cd2e9c; end: 107cd2ecb; -[SCArroyoFetchConversationsCallback .cxx_destruct] */

void FUN_107cd2e9c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107cd2ecc; end: 107cd2f77; -[SCArroyoFetchMessageCallback initWithSuccessCallback:failureCallback:] */

undefined1 *
FUN_107cd2ecc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fa740;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107cd2f78; end: 107cd2f87; -[SCArroyoFetchMessageCallback onFetchMessageComplete:] */

void FUN_107cd2f78(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000107cd2f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),param_3);
  return;
}



/* Entry: 107cd2f88; end: 107cd2f97; -[SCArroyoFetchMessageCallback onError:] */

void FUN_107cd2f88(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000107cd2f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))(*(long *)(param_1 + 0x10),param_3);
  return;
}



/* Entry: 107cd2f98; end: 107cd2fc7; -[SCArroyoFetchMessageCallback .cxx_destruct] */

void FUN_107cd2f98(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107cd2fc8; end: 107cd3073; -[SCArroyoFetchServerMessageIdentifierCallback initWithSuccessCallback:failureCallback:] */

undefined1 *
FUN_107cd2fc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fa748;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107cd3074; end: 107cd3083; -[SCArroyoFetchServerMessageIdentifierCallback onFetchServerIdentifierComplete:] */

void FUN_107cd3074(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000107cd3080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),param_3);
  return;
}



/* Entry: 107cd3084; end: 107cd3093; -[SCArroyoFetchServerMessageIdentifierCallback onError:] */

void FUN_107cd3084(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000107cd3090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))(*(long *)(param_1 + 0x10),param_3);
  return;
}



/* Entry: 107cd3094; end: 107cd30c3; -[SCArroyoFetchServerMessageIdentifierCallback .cxx_destruct] */

void FUN_107cd3094(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107cd30c4; end: 107cd319b; -[SCArroyoSendMessageCallback initWithSuccessCallback:queuedCallback:failureCallback:] */

undefined1 *
FUN_107cd30c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126fa750;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107cd319c; end: 107cd31ab; -[SCArroyoSendMessageCallback onError:] */

void FUN_107cd319c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000107cd31a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))(*(long *)(param_1 + 0x18),param_3);
  return;
}



/* Entry: 107cd31ac; end: 107cd31b7; -[SCArroyoSendMessageCallback onQueued] */

void FUN_107cd31ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107cd31b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))();
  return;
}



/* Entry: 107cd31b8; end: 107cd31c3; -[SCArroyoSendMessageCallback onSuccess] */

void FUN_107cd31b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107cd31c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 107cd31c4; end: 107cd31ff; -[SCArroyoSendMessageCallback .cxx_destruct] */

void FUN_107cd31c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107cd3200; end: 107cd32ab; -[SCArroyoStoryPostStatusCallback initWithSuccessCallback:failureCallback:] */

undefined1 *
FUN_107cd3200(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fa758;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107cd32ac; end: 107cd32bb; -[SCArroyoStoryPostStatusCallback onSuccess:] */

void FUN_107cd32ac(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000107cd32b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),param_3);
  return;
}



/* Entry: 107cd32bc; end: 107cd32cb; -[SCArroyoStoryPostStatusCallback onError:] */

void FUN_107cd32bc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000107cd32c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))(*(long *)(param_1 + 0x10),param_3);
  return;
}



/* Entry: 107cd32cc; end: 107cd3343; -[SCArroyoStoryPostStatusCallback .cxx_destruct] */

void FUN_107cd32cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107cd3344; end: 107cd3353;  */

void FUN_107cd3344(void)

{
  uRam00000001138246c8 = 1;
  return;
}



/* Entry: 107cd3354; end: 107cd3397; -[SCOperaProductContextPerformanceData init] */

void FUN_107cd3354(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1126fa760;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar1 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar1 + 8) = 0xffffffffffffffff;
  }
  return;
}



/* Entry: 107cd3398; end: 107cd339f; -[SCOperaProductContextPerformanceData adProductSourceType] */

undefined8 FUN_107cd3398(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107cd33a0; end: 107cd33a7; -[SCOperaProductContextPerformanceData setAdProductSourceType:] */

void FUN_107cd33a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 107cd33a8; end: 107cd33af; -[SCOperaProductContextPerformanceData productMediaType] */

undefined8 FUN_107cd33a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107cd33b0; end: 107cd33b7; -[SCOperaProductContextPerformanceData setProductMediaType:] */

void FUN_107cd33b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 107cd33b8; end: 107cd33bf; -[SCOperaProductContextPerformanceData adType] */

undefined8 FUN_107cd33b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107cd33c0; end: 107cd33c7; -[SCOperaProductContextPerformanceData setAdType:] */

void FUN_107cd33c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 107cd33c8; end: 107cd342b; -[SCOperaSnapPlaybackPerformanceData init] */

void FUN_107cd33c8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1126fa768;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x70) = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar1 + 0xc0) = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar1 + 0x100) = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar1 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar1 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar1 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar1 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar1 + 0x98) = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar1 + 0xa0) = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar1 + 0xa8) = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar1 + 0x178) = 3;
  }
  return;
}



/* Entry: 107cd342c; end: 107cd3487; -[SCOperaSnapPlaybackPerformanceData addMediaVariants:] */

void FUN_107cd342c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x168);
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)(param_1 + 0x168);
    *(undefined **)(param_1 + 0x168) = puVar2;
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + 0x168);
  }
  func_0x00010befa160(lVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107cd3488; end: 107cd348f; -[SCOperaSnapPlaybackPerformanceData entryEvent] */

undefined8 FUN_107cd3488(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107cd3490; end: 107cd3497; -[SCOperaSnapPlaybackPerformanceData setEntryEvent:] */

void FUN_107cd3490(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 107cd3498; end: 107cd349f; -[SCOperaSnapPlaybackPerformanceData exitEvent] */

undefined8 FUN_107cd3498(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107cd34a0; end: 107cd34a7; -[SCOperaSnapPlaybackPerformanceData setExitEvent:] */

void FUN_107cd34a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 107cd34a8; end: 107cd34af; -[SCOperaSnapPlaybackPerformanceData entryIntent] */

undefined8 FUN_107cd34a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107cd34b0; end: 107cd34b7; -[SCOperaSnapPlaybackPerformanceData setEntryIntent:] */

void FUN_107cd34b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 107cd34b8; end: 107cd34bf; -[SCOperaSnapPlaybackPerformanceData exitIntent] */

undefined8 FUN_107cd34b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107cd34c0; end: 107cd34c7; -[SCOperaSnapPlaybackPerformanceData setExitIntent:] */

void FUN_107cd34c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 107cd34c8; end: 107cd34cf; -[SCOperaSnapPlaybackPerformanceData isLongformVideo] */

undefined1 FUN_107cd34c8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107cd34d0; end: 107cd34d7; -[SCOperaSnapPlaybackPerformanceData setIsLongformVideo:] */

void FUN_107cd34d0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 107cd34d8; end: 107cd34df; -[SCOperaSnapPlaybackPerformanceData mediaDurationMs] */

undefined8 FUN_107cd34d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107cd34e0; end: 107cd34e7; -[SCOperaSnapPlaybackPerformanceData setMediaDurationMs:] */

void FUN_107cd34e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 107cd34e8; end: 107cd34ef; -[SCOperaSnapPlaybackPerformanceData mediaEncoding] */

undefined8 FUN_107cd34e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107cd34f0; end: 107cd34f7; -[SCOperaSnapPlaybackPerformanceData setMediaEncoding:] */

void FUN_107cd34f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107cd34f8; end: 107cd34ff; -[SCOperaSnapPlaybackPerformanceData mediaId] */

undefined8 FUN_107cd34f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107cd3500; end: 107cd3507; -[SCOperaSnapPlaybackPerformanceData setMediaId:] */

void FUN_107cd3500(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107cd3508; end: 107cd350f; -[SCOperaSnapPlaybackPerformanceData contentId] */

undefined8 FUN_107cd3508(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107cd3510; end: 107cd3517; -[SCOperaSnapPlaybackPerformanceData setContentId:] */

void FUN_107cd3510(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107cd3518; end: 107cd351f; -[SCOperaSnapPlaybackPerformanceData pageId] */

undefined8 FUN_107cd3518(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107cd3520; end: 107cd3527; -[SCOperaSnapPlaybackPerformanceData setPageId:] */

void FUN_107cd3520(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107cd3528; end: 107cd352f; -[SCOperaSnapPlaybackPerformanceData mediaPlaybackSessionId] */

undefined8 FUN_107cd3528(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107cd3530; end: 107cd3537; -[SCOperaSnapPlaybackPerformanceData setMediaPlaybackSessionId:] */

void FUN_107cd3530(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107cd3538; end: 107cd353f; -[SCOperaSnapPlaybackPerformanceData mediaGroupId] */

undefined8 FUN_107cd3538(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 107cd3540; end: 107cd3547; -[SCOperaSnapPlaybackPerformanceData setMediaGroupId:] */

void FUN_107cd3540(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107cd3548; end: 107cd354f; -[SCOperaSnapPlaybackPerformanceData mediaType] */

undefined8 FUN_107cd3548(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 107cd3550; end: 107cd3557; -[SCOperaSnapPlaybackPerformanceData setMediaType:] */

void FUN_107cd3550(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x70) = param_3;
  return;
}



/* Entry: 107cd3558; end: 107cd355f; -[SCOperaSnapPlaybackPerformanceData midPlaybackStallDurationTotalMs] */

undefined8 FUN_107cd3558(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 107cd3560; end: 107cd3567; -[SCOperaSnapPlaybackPerformanceData setMidPlaybackStallDurationTotalMs:] */

void FUN_107cd3560(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x78) = param_3;
  return;
}



/* Entry: 107cd3568; end: 107cd356f; -[SCOperaSnapPlaybackPerformanceData midPlaybackStallCount] */

undefined8 FUN_107cd3568(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 107cd3570; end: 107cd3577; -[SCOperaSnapPlaybackPerformanceData setMidPlaybackStallCount:] */

void FUN_107cd3570(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x80) = param_3;
  return;
}



/* Entry: 107cd3578; end: 107cd357f; -[SCOperaSnapPlaybackPerformanceData operaPageDisplayTimeMs] */

undefined8 FUN_107cd3578(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 107cd3580; end: 107cd3587; -[SCOperaSnapPlaybackPerformanceData setOperaPageDisplayTimeMs:] */

void FUN_107cd3580(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x88) = param_3;
  return;
}



/* Entry: 107cd3588; end: 107cd358f; -[SCOperaSnapPlaybackPerformanceData operaSessionId] */

undefined8 FUN_107cd3588(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 107cd3590; end: 107cd3597; -[SCOperaSnapPlaybackPerformanceData setOperaSessionId:] */

void FUN_107cd3590(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107cd3598; end: 107cd359f; -[SCOperaSnapPlaybackPerformanceData operaVersion] */

undefined8 FUN_107cd3598(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 107cd35a0; end: 107cd35a7; -[SCOperaSnapPlaybackPerformanceData setOperaVersion:] */

void FUN_107cd35a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x98) = param_3;
  return;
}



/* Entry: 107cd35a8; end: 107cd35af; -[SCOperaSnapPlaybackPerformanceData playbackItemType] */

undefined8 FUN_107cd35a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 107cd35b0; end: 107cd35b7; -[SCOperaSnapPlaybackPerformanceData setPlaybackItemType:] */

void FUN_107cd35b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xa0) = param_3;
  return;
}



/* Entry: 107cd35b8; end: 107cd35bf; -[SCOperaSnapPlaybackPerformanceData playbackMode] */

undefined8 FUN_107cd35b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 107cd35c0; end: 107cd35c7; -[SCOperaSnapPlaybackPerformanceData setPlaybackMode:] */

void FUN_107cd35c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xa8) = param_3;
  return;
}



/* Entry: 107cd35c8; end: 107cd35cf; -[SCOperaSnapPlaybackPerformanceData snapViewIndex] */

undefined8 FUN_107cd35c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 107cd35d0; end: 107cd35d7; -[SCOperaSnapPlaybackPerformanceData setSnapViewIndex:] */

void FUN_107cd35d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  return;
}



/* Entry: 107cd35d8; end: 107cd35df; -[SCOperaSnapPlaybackPerformanceData stallDurationOnStartMs] */

undefined8 FUN_107cd35d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 107cd35e0; end: 107cd35e7; -[SCOperaSnapPlaybackPerformanceData setStallDurationOnStartMs:] */

void FUN_107cd35e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb8) = param_3;
  return;
}



/* Entry: 107cd35e8; end: 107cd35ef; -[SCOperaSnapPlaybackPerformanceData stalledOnExit] */

undefined1 FUN_107cd35e8(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107cd35f0; end: 107cd35f7; -[SCOperaSnapPlaybackPerformanceData setStalledOnExit:] */

void FUN_107cd35f0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 107cd35f8; end: 107cd35ff; -[SCOperaSnapPlaybackPerformanceData stalledOnStart] */

undefined1 FUN_107cd35f8(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 107cd3600; end: 107cd3607; -[SCOperaSnapPlaybackPerformanceData setStalledOnStart:] */

void FUN_107cd3600(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}


