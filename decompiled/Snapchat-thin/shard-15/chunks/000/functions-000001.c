/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b743994; end: 10b743a13; -[SCAudioRenderEffectDAG hash] */

undefined8 * FUN_10b743994(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b743aac:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b743ab8;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10b743ab8;
          }
          goto LAB_10b743aac;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b743ab8:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b743a14; end: 10b743ad3; -[SCAudioRenderEffectDAG isEqual:] */

long FUN_10b743a14(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b743aac:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b743ab8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10b743ab8;
          }
          goto LAB_10b743aac;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b743ab8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b743ad4; end: 10b743b0f; -[SCAudioRenderEffectDAG .cxx_destruct] */

void FUN_10b743ad4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b743b10; end: 10b743beb;  */

undefined1 * FUN_10b743b10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_38 = PTR_PTR_11270a648;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_3;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x10);
      *(undefined8 *)((long)plVar1 + 0x10) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_4;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = uVar2;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 10b743bec; end: 10b743c0f; -[SCNGSMESnap copyWithZone:] */

undefined8 FUN_10b743bec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b743c10; end: 10b743c8f; -[SCNGSMESnap hash] */

undefined8 * FUN_10b743c10(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b743d28:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b743d34;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10b743d34;
          }
          goto LAB_10b743d28;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b743d34:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b743c90; end: 10b743d4f; -[SCNGSMESnap isEqual:] */

long FUN_10b743c90(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b743d28:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b743d34;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10b743d34;
          }
          goto LAB_10b743d28;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b743d34:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b743d50; end: 10b743d67;  */

undefined8 FUN_10b743d50(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
  return uVar1;
}



/* Entry: 10b743d68; end: 10b743da3; -[SCNGSMESnap .cxx_destruct] */

void FUN_10b743d68(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b743da4; end: 10b743dff; +[SCNGSMETemporalEffect bounceWithRepeatCount:] */

void FUN_10b743da4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126e06e8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b743e00; end: 10b743e63; +[SCNGSMETemporalEffect jumpCutWithTimeRanges:] */

void FUN_10b743e00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e06e8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b743e64; end: 10b743edf; +[SCNGSMETemporalEffect zoomInWithZoomInFactor:timeRange:] */

void FUN_10b743e64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126e06e8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b743ee0; end: 10b7440d7; -[SCNGSMETemporalEffect initWithCoder:] */

undefined8 * FUN_10b743ee0(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 unaff_x21;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puStack_50 = PTR_PTR_11270a650;
  puVar1 = &uStack_58;
  uStack_58 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    unaff_x21 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = unaff_x21;
    func_0x00010c0720c0();
    if ((int)uVar4 == 0) {
      uVar4 = unaff_x21;
      func_0x00010c0720c0();
      if ((int)uVar4 == 0) {
        uVar4 = unaff_x21;
        func_0x00010c0720c0();
        if ((int)uVar4 == 0) goto LAB_10b744064;
        uVar4 = param_4;
        func_0x00010bf66f40();
        puVar1[5] = uVar4;
        uVar4 = 2;
      }
      else {
        func_0x00010bf66e40(param_4);
        puVar1[3] = (double)param_1;
        uVar4 = param_4;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = puVar1[4];
        puVar1[4] = uVar4;
        _objc_release(uVar3);
        uVar4 = 1;
      }
    }
    else {
      uVar4 = param_4;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = puVar1[2];
      puVar1[2] = uVar4;
      _objc_release(uVar3);
      uVar4 = 0;
    }
    puVar1[1] = uVar4;
    _objc_release(unaff_x21);
  }
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
LAB_10b744064:
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSException_1126af520;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110db7158;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_40 = unaff_x21;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar2);
  _objc_exception_throw(puVar1);
  _objc_retain();
  return puVar1;
}



/* Entry: 10b7440d8; end: 10b7440fb; -[SCNGSMETemporalEffect copyWithZone:] */

undefined8 FUN_10b7440d8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b7440fc; end: 10b7441c3; -[SCNGSMETemporalEffect encodeWithCoder:] */

void FUN_10b7440fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 2) {
    func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                        &PTR____CFConstantStringClassReference_110f78eb8);
    ppuVar1 = &PTR____CFConstantStringClassReference_110f78e98;
  }
  else if (lVar2 == 1) {
    func_0x00010bf92ee0((float)*(double *)(param_1 + 0x18),param_3,param_2,
                        &PTR____CFConstantStringClassReference_110f78e58);
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                        &PTR____CFConstantStringClassReference_110f78e78);
    ppuVar1 = &PTR____CFConstantStringClassReference_110f78e38;
  }
  else {
    if (lVar2 != 0) goto LAB_10b7441b4;
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                        &PTR____CFConstantStringClassReference_110f78e18);
    ppuVar1 = &PTR____CFConstantStringClassReference_110f78df8;
  }
  func_0x00010c14cb00(param_3,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110db7018);
LAB_10b7441b4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7441c4; end: 10b74426b; -[SCNGSMETemporalEffect hash] */

void FUN_10b7441c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_40 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uStack_48 = uVar1;
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x28);
  lStack_30 = -lVar4;
  if (-1 < lVar4) {
    lStack_30 = lVar4;
  }
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_11270a650;
  puStack_80 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b74426c; end: 10b7442af; -[SCNGSMETemporalEffect internalInit] */

void FUN_10b74426c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_11270a650;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7442b0; end: 10b7443ab; -[SCNGSMETemporalEffect isEqual:] */

long FUN_10b7442b0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b744384:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b744390;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
      dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if ((bVar1) &&
         ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x20);
        if (lVar4 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10b744390;
        }
        goto LAB_10b744384;
      }
    }
    lVar4 = 0;
  }
LAB_10b744390:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b7443ac; end: 10b744463; -[SCNGSMETemporalEffect matchJumpCut:zoomIn:bounce:] */

void FUN_10b7443ac(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 2) {
    if (param_5 == 0) goto LAB_10b744440;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    pcVar3 = *(code **)(param_5 + 0x10);
    lVar2 = param_5;
  }
  else {
    if (lVar2 == 1) {
      if (param_4 != 0) {
        (**(code **)(param_4 + 0x10))
                  (*(undefined8 *)(param_1 + 0x18),param_4,*(undefined8 *)(param_1 + 0x20));
      }
      goto LAB_10b744440;
    }
    if ((lVar2 != 0) || (param_3 == 0)) goto LAB_10b744440;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    pcVar3 = *(code **)(param_3 + 0x10);
    lVar2 = param_3;
  }
  (*pcVar3)(lVar2,uVar1);
LAB_10b744440:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b744464; end: 10b744493; -[SCNGSMETemporalEffect .cxx_destruct] */

void FUN_10b744464(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b744494; end: 10b744567;  */

undefined1 *
FUN_10b744494(undefined4 param_1,long param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar3 = (undefined1 *)0x0;
  if (param_2 != 0) {
    puStack_48 = PTR_PTR_11270a658;
    lStack_50 = param_2;
    _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar4 = param_3;
      func_0x00010bf51e00();
      uVar2 = *(undefined8 *)((long)plVar1 + 0x10);
      *(undefined8 *)((long)plVar1 + 0x10) = uVar4;
      _objc_release(uVar2);
      uVar2 = param_4[1];
      uVar4 = *param_4;
      *(undefined8 *)((long)plVar1 + 0x30) = param_4[2];
      *(undefined8 *)((long)plVar1 + 0x28) = uVar2;
      *(undefined8 *)((long)plVar1 + 0x20) = uVar4;
      uVar4 = param_5;
      func_0x00010bf51e00();
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = uVar4;
      _objc_release(uVar2);
      *(undefined4 *)((long)plVar1 + 8) = param_1;
    }
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 10b744568; end: 10b74458b; -[SCNGSMEMixedAudioTrack copyWithZone:] */

undefined8 FUN_10b744568(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b74458c; end: 10b744643; -[SCNGSMEMixedAudioTrack hash] */

undefined8 * FUN_10b74458c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined1 *puVar9;
  float fVar10;
  float fVar11;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar4 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = (ulong)*(uint *)(param_1 + 0x2c);
  lStack_50 = (long)*(int *)(param_1 + 0x28);
  uStack_40 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar8 = (ulong)*(uint *)(param_1 + 8) * 0x200000 - 1;
  uVar8 = (uVar8 ^ uVar8 >> 0x18) * 0x109;
  uVar8 = (uVar8 ^ uVar8 >> 0xe) * 0x15;
  lStack_30 = (uVar8 ^ uVar8 >> 0x1c) * 0x80000001;
  uStack_38 = uVar3;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_10b744728:
    puVar9 = (undefined1 *)0x1;
  }
  else {
    puVar9 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b744734;
    puVar9 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if (((ulong)puVar5 & 1) != 0) {
      uStack_a8 = *(undefined8 *)((long)puVar4 + 0x28);
      uStack_b0 = *(undefined8 *)((long)puVar4 + 0x20);
      uStack_a0 = *(undefined8 *)((long)puVar4 + 0x30);
      uStack_c8 = *(undefined8 *)(param_3 + 0x28);
      uStack_d0 = *(undefined8 *)(param_3 + 0x20);
      uStack_c0 = *(undefined8 *)(param_3 + 0x30);
      puVar6 = &uStack_b0;
      _CMTimeCompare(puVar6,&uStack_d0);
      if ((int)puVar6 == 0) {
        fVar11 = ABS(*(float *)((long)puVar4 + 8) - *(float *)(param_3 + 8));
        fVar10 = ABS(*(float *)((long)puVar4 + 8) + *(float *)(param_3 + 8)) * 1.1920929e-07;
        bVar1 = true;
        if ((1.1754944e-38 <= fVar11) && (bVar1 = false, !NAN(fVar11) && !NAN(fVar10))) {
          bVar1 = fVar11 < fVar10;
        }
        if ((bVar1) &&
           ((lVar7 = *(long *)((long)puVar4 + 0x10), lVar7 == *(long *)(param_3 + 0x10) ||
            (func_0x00010c071ae0(), (int)lVar7 != 0)))) {
          puVar9 = *(undefined1 **)((long)puVar4 + 0x18);
          if (puVar9 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10b744734;
          }
          goto LAB_10b744728;
        }
      }
    }
    puVar9 = (undefined1 *)0x0;
  }
LAB_10b744734:
  _objc_release(param_3);
  return (undefined8 *)puVar9;
}



/* Entry: 10b744644; end: 10b744753; -[SCNGSMEMixedAudioTrack isEqual:] */

long FUN_10b744644(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b744728:
    lVar5 = 1;
  }
  else {
    lVar5 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b744734;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      uStack_48 = *(undefined8 *)(param_1 + 0x28);
      uStack_50 = *(undefined8 *)(param_1 + 0x20);
      uStack_40 = *(undefined8 *)(param_1 + 0x30);
      uStack_68 = *(undefined8 *)(param_3 + 0x28);
      uStack_70 = *(undefined8 *)(param_3 + 0x20);
      uStack_60 = *(undefined8 *)(param_3 + 0x30);
      puVar4 = &uStack_50;
      _CMTimeCompare(puVar4,&uStack_70);
      if ((int)puVar4 == 0) {
        fVar7 = ABS(*(float *)(param_1 + 8) - *(float *)(param_3 + 8));
        fVar6 = ABS(*(float *)(param_1 + 8) + *(float *)(param_3 + 8)) * 1.1920929e-07;
        bVar1 = true;
        if ((1.1754944e-38 <= fVar7) && (bVar1 = false, !NAN(fVar7) && !NAN(fVar6))) {
          bVar1 = fVar7 < fVar6;
        }
        if ((bVar1) &&
           ((lVar5 = *(long *)(param_1 + 0x10), lVar5 == *(long *)(param_3 + 0x10) ||
            (func_0x00010c071ae0(), (int)lVar5 != 0)))) {
          lVar5 = *(long *)(param_1 + 0x18);
          if (lVar5 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10b744734;
          }
          goto LAB_10b744728;
        }
      }
    }
    lVar5 = 0;
  }
LAB_10b744734:
  _objc_release(param_3);
  return lVar5;
}



/* Entry: 10b744754; end: 10b744783; -[SCNGSMEMixedAudioTrack .cxx_destruct] */

void FUN_10b744754(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b744784; end: 10b7447b7; -[SCStackedImageProcessCommandContainer initWithStackedCommands:leftSwipedCommands:rightSwipedCommands:dualCommandSwipingOffset:] */

void FUN_10b744784(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270a660;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10b7447b8; end: 10b7447eb; -[SCStackedImageProcessCommandContainer initWithStackedCommands:stackedCommandPosition:leftSwipedCommand:rightSwipedCommand:dualCommandSwipingOffset:] */

void FUN_10b7447b8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270a660;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10b7447ec; end: 10b74481f; -[SCStackedImageProcessCommandContainer initWithFullScreenCommands:] */

void FUN_10b7447ec(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270a660;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10b744820; end: 10b744827; -[SCStackedImageProcessCommandContainer stackedCommands] */

undefined8 FUN_10b744820(void)

{
  return 0;
}



/* Entry: 10b744828; end: 10b74482f; -[SCStackedImageProcessCommandContainer leftSwipedCommands] */

undefined8 FUN_10b744828(void)

{
  return 0;
}



/* Entry: 10b744830; end: 10b744837; -[SCStackedImageProcessCommandContainer rightSwipedCommands] */

undefined8 FUN_10b744830(void)

{
  return 0;
}



/* Entry: 10b744838; end: 10b74483f; -[SCStackedImageProcessCommandContainer dualCommandSwipingOffset] */

undefined8 FUN_10b744838(void)

{
  return 0;
}



/* Entry: 10b744840; end: 10b744847; -[SCStackedImageProcessCommandContainer commandContainerHasSameCommandsWithContainer:] */

undefined8 FUN_10b744840(void)

{
  return 0;
}



/* Entry: 10b744848; end: 10b7448e3; -[SCImageProcessCommandConfiguration initWithCoder:] */

undefined1 * FUN_10b744848(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270a668;
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
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7448e4; end: 10b74496f;  */

undefined1 * FUN_10b7448e4(long param_1,undefined8 param_2,undefined1 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  _objc_retain(param_2);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_38 = PTR_PTR_11270a668;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x10);
      *(undefined8 *)((long)plVar1 + 0x10) = uVar2;
      _objc_release(uVar3);
      *(undefined1 *)((long)plVar1 + 8) = param_3;
    }
  }
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 10b744970; end: 10b744993; -[SCImageProcessCommandConfiguration copyWithZone:] */

undefined8 FUN_10b744970(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b744994; end: 10b7449f3; -[SCImageProcessCommandConfiguration encodeWithCoder:] */

void FUN_10b744994(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f537f8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f79038);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7449f4; end: 10b744a5f; -[SCImageProcessCommandConfiguration hash] */

undefined8 * FUN_10b7449f4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b744ae4;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (*(char *)(puVar2 + 1) != *(char *)(param_3 + 1))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_10b744ae4;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10b744ae4;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_10b744ae4:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10b744a60; end: 10b744aff; -[SCImageProcessCommandConfiguration isEqual:] */

long FUN_10b744a60(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b744ae4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10b744ae4;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b744ae4;
    }
  }
  lVar3 = 1;
LAB_10b744ae4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b744b00; end: 10b744b0b; -[SCImageProcessCommandConfiguration .cxx_destruct] */

void FUN_10b744b00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b744b0c; end: 10b744b6b; -[SCStackedImageProcessCommandContainerConfiguration initWithUseOutputTexture:useContinuousRendering:isExportMode:] */

void FUN_10b744b0c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270a670;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    *(undefined1 *)((long)puVar1 + 10) = param_5;
  }
  return;
}



/* Entry: 10b744b6c; end: 10b744b8f; -[SCStackedImageProcessCommandContainerConfiguration copyWithZone:] */

undefined8 FUN_10b744b6c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b744b90; end: 10b744bf3; -[SCStackedImageProcessCommandContainerConfiguration hash] */

ulong * FUN_10b744b90(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_28 = (ulong)*(byte *)(param_1 + 9);
  uStack_20 = (ulong)*(byte *)(param_1 + 10);
  func_0x000107c3191c(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (ulong *)param_3) {
    puVar3 = (undefined1 *)0x1;
  }
  else {
    puVar3 = (undefined1 *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar3 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) ||
         ((*(char *)((long)puVar1 + 8) != param_3[8] || (*(char *)((long)puVar1 + 9) != param_3[9]))
         )) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = (undefined1 *)(ulong)(*(char *)((long)puVar1 + 10) == param_3[10]);
      }
    }
  }
  _objc_release(param_3);
  return (ulong *)puVar3;
}



/* Entry: 10b744bf4; end: 10b744c9b; -[SCStackedImageProcessCommandContainerConfiguration isEqual:] */

bool FUN_10b744bf4(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((uVar3 & 1) == 0) ||
         ((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
          (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 10) == *(char *)(param_3 + 10);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b744c9c; end: 10b744ca3; -[SCStackedImageProcessCommandContainerConfiguration useOutputTexture] */

undefined1 FUN_10b744c9c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b744ca4; end: 10b744cab; -[SCStackedImageProcessCommandContainerConfiguration useContinuousRendering] */

undefined1 FUN_10b744ca4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b744cac; end: 10b744cb3; -[SCStackedImageProcessCommandContainerConfiguration isExportMode] */

undefined1 FUN_10b744cac(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b744cb4; end: 10b744d1b; +[SDMTransforms descriptor] */

void FUN_10b744cb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9020 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb5ec0,
                        &PTR____CFConstantStringClassReference_110e411b8,&PTR_DAT_1133c9568,
                        &PTR_DAT_1133c9580,5,0x30,0x1c);
    puRam00000001137f9020 = puVar1;
  }
  return;
}



/* Entry: 10b744d1c; end: 10b744db3; +[CTPMediaContent boltObjectWithThumbnail:content:] */

void FUN_10b744d1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d25c0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b744db4; end: 10b744e43; +[CTPMediaContent urlWithThumbnail:content:] */

void FUN_10b744db4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d25c0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b744e44; end: 10b745027; -[CTPMediaContent initWithCoder:] */

undefined8 * FUN_10b744e44(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong unaff_x21;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  ulong uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_70 = PTR_PTR_11270a678;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    unaff_x21 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = unaff_x21;
    func_0x00010c0720c0();
    if ((uVar2 & 1) == 0) {
      uVar2 = unaff_x21;
      func_0x00010c0720c0();
      if ((uVar2 & 1) == 0) goto LAB_10b744fb4;
      uVar5 = 1;
      lVar6 = 0x28;
      lVar7 = 0x20;
    }
    else {
      uVar5 = 0;
      lVar6 = 0x18;
      lVar7 = 0x10;
    }
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + lVar7);
    *(ulong *)((long)puVar1 + lVar7) = uVar2;
    _objc_release(uVar4);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(ulong *)((long)puVar1 + lVar6) = uVar2;
    _objc_release(uVar4);
    puVar1[1] = uVar5;
    _objc_release(unaff_x21);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar1;
  }
  ___stack_chk_fail();
LAB_10b744fb4:
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSException_1126af520;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110db7158;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_60 = unaff_x21;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar3);
  _objc_exception_throw(puVar1);
  _objc_retain();
  return puVar1;
}



/* Entry: 10b745028; end: 10b74504b; -[CTPMediaContent copyWithZone:] */

undefined8 FUN_10b745028(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b74504c; end: 10b74510b; -[CTPMediaContent encodeWithCoder:] */

void FUN_10b74504c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 8) == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110dc70d8;
    ppuVar4 = &PTR____CFConstantStringClassReference_110f79078;
    lVar5 = 0x18;
    lVar2 = 0x10;
    ppuVar1 = &PTR____CFConstantStringClassReference_110f79058;
  }
  else {
    if (*(long *)(param_1 + 8) != 1) goto LAB_10b7450f4;
    ppuVar3 = &PTR____CFConstantStringClassReference_110f79098;
    ppuVar4 = &PTR____CFConstantStringClassReference_110f790d8;
    lVar5 = 0x28;
    lVar2 = 0x20;
    ppuVar1 = &PTR____CFConstantStringClassReference_110f790b8;
  }
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + lVar2),ppuVar1);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + lVar5),ppuVar4);
  func_0x00010c14cb00(param_3,param_2,ppuVar3,&PTR____CFConstantStringClassReference_110db7018);
LAB_10b7450f4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b74510c; end: 10b74519b; -[CTPMediaContent hash] */

void FUN_10b74510c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_11270a678;
  puStack_80 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b74519c; end: 10b7451df; -[CTPMediaContent internalInit] */

void FUN_10b74519c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_11270a678;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7451e0; end: 10b7452c7; -[CTPMediaContent isEqual:] */

long FUN_10b7451e0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b7452a0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b7452ac;
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
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10b7452ac;
            }
            goto LAB_10b7452a0;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b7452ac:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b7452c8; end: 10b745357; -[CTPMediaContent matchUrl:boltObject:] */

void FUN_10b7452c8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_10b74533c;
    lVar2 = 0x28;
    lVar3 = 0x20;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_10b74533c;
    lVar2 = 0x18;
    lVar3 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))
            (lVar1,*(undefined8 *)(param_1 + lVar3),*(undefined8 *)(param_1 + lVar2));
LAB_10b74533c:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b745358; end: 10b74539f; -[CTPMediaContent .cxx_destruct] */

void FUN_10b745358(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b7453a0; end: 10b7454db; -[CTPFeed initWithCoder:] */

undefined1 * FUN_10b7453a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270a680;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
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
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7454dc; end: 10b745623; -[CTPFeed initWithFeedId:name:mediaContent:childFeeds:source:spanCount:] */

undefined1 *
FUN_10b7454dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_11270a680;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
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
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b745624; end: 10b745647; -[CTPFeed copyWithZone:] */

undefined8 FUN_10b745624(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b745648; end: 10b7456f7; -[CTPFeed encodeWithCoder:] */

void FUN_10b745648(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f790f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e6c918);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f79118);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f79138);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110dd8398);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f2b078);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7456f8; end: 10b74579b; -[CTPFeed hash] */

undefined8 * FUN_10b7456f8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x30);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  puVar3 = &uStack_58;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b745874:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b745880;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[6] == param_3[6])) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[4];
            if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = (undefined8 *)puVar3[5];
              if (puVar6 != (undefined8 *)param_3[5]) {
                func_0x00010c071ae0();
                goto LAB_10b745880;
              }
              goto LAB_10b745874;
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b745880:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b74579c; end: 10b74589b; -[CTPFeed isEqual:] */

long FUN_10b74579c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b745874:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b745880;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if (lVar3 != *(long *)(param_3 + 0x28)) {
                func_0x00010c071ae0();
                goto LAB_10b745880;
              }
              goto LAB_10b745874;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b745880:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b74589c; end: 10b7458a3; -[CTPFeed feedId] */

undefined8 FUN_10b74589c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7458a4; end: 10b7458ab; -[CTPFeed name] */

undefined8 FUN_10b7458a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7458ac; end: 10b7458b3; -[CTPFeed mediaContent] */

undefined8 FUN_10b7458ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b7458b4; end: 10b7458bb; -[CTPFeed childFeeds] */

undefined8 FUN_10b7458b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b7458bc; end: 10b7458c3; -[CTPFeed source] */

undefined8 FUN_10b7458bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b7458c4; end: 10b7458cb; -[CTPFeed spanCount] */

undefined8 FUN_10b7458c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b7458cc; end: 10b74591f; -[CTPFeed .cxx_destruct] */

void FUN_10b7458cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b745920; end: 10b7459a7; -[CTPFeedIdentifiers initWithCoder:] */

undefined1 * FUN_10b745920(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270a688;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7459a8; end: 10b7459f3; -[CTPFeedIdentifiers initWithType:context:] */

void FUN_10b7459a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270a688;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 10b7459f4; end: 10b745a17; -[CTPFeedIdentifiers copyWithZone:] */

undefined8 FUN_10b7459f4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b745a18; end: 10b745a77; -[CTPFeedIdentifiers encodeWithCoder:] */

void FUN_10b745a18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e2dc78);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110dbee78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b745a78; end: 10b745acf; -[CTPFeedIdentifiers hash] */

undefined8 * FUN_10b745a78(long param_1,undefined8 param_2,undefined1 *param_3)

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
  func_0x000107c3191c(&uStack_30,2);
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



/* Entry: 10b745ad0; end: 10b745b67; -[CTPFeedIdentifiers isEqual:] */

bool FUN_10b745ad0(ulong param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 10b745b68; end: 10b745b6f; -[CTPFeedIdentifiers type] */

undefined8 FUN_10b745b68(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b745b70; end: 10b745b77; -[CTPFeedIdentifiers context] */

undefined8 FUN_10b745b70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b745b78; end: 10b745bc3; +[CTPFeedSource client] */

void FUN_10b745b78(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126be980;
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



/* Entry: 10b745bc4; end: 10b745c5b; +[CTPFeedSource computeWithEndpoint:backendPrivateDataArray:] */

void FUN_10b745bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126be980;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b745c5c; end: 10b745cbf; +[CTPFeedSource deltaForceWithDeltaForceGroupKey:] */

void FUN_10b745c5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126be980;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b745cc0; end: 10b745ea3; -[CTPFeedSource initWithCoder:] */

undefined8 * FUN_10b745cc0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong unaff_x21;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined **ppuStack_58;
  ulong uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_60 = PTR_PTR_11270a690;
  puVar1 = &uStack_68;
  uStack_68 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    unaff_x21 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = unaff_x21;
    func_0x00010c0720c0();
    if ((uVar2 & 1) == 0) {
      uVar2 = unaff_x21;
      func_0x00010c0720c0();
      if ((int)uVar2 != 0) {
        uVar2 = param_3;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = puVar1[3];
        puVar1[3] = uVar2;
        _objc_release(uVar5);
        uVar5 = 1;
        lVar6 = 0x20;
        goto LAB_10b745da8;
      }
      uVar2 = unaff_x21;
      func_0x00010c0720c0();
      if ((uVar2 & 1) == 0) goto LAB_10b745e30;
      uVar5 = 2;
    }
    else {
      uVar5 = 0;
      lVar6 = 0x10;
LAB_10b745da8:
      uVar2 = param_3;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
      *(ulong *)((long)puVar1 + lVar6) = uVar2;
      _objc_release(uVar4);
    }
    puVar1[1] = uVar5;
    _objc_release(unaff_x21);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
LAB_10b745e30:
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSException_1126af520;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110db7158;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_50 = unaff_x21;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar3);
  _objc_exception_throw(puVar1);
  _objc_retain();
  return puVar1;
}



/* Entry: 10b745ea4; end: 10b745ec7; -[CTPFeedSource copyWithZone:] */

undefined8 FUN_10b745ea4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b745ec8; end: 10b745f7f; -[CTPFeedSource encodeWithCoder:] */

void FUN_10b745ec8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110f79158;
    lVar2 = 0x10;
    ppuVar1 = &PTR____CFConstantStringClassReference_110f79178;
LAB_10b745f4c:
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + lVar2),ppuVar1);
  }
  else {
    if (lVar2 != 2) {
      if (lVar2 != 1) goto LAB_10b745f6c;
      func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                          &PTR____CFConstantStringClassReference_110f791b8);
      ppuVar3 = &PTR____CFConstantStringClassReference_110f79198;
      lVar2 = 0x20;
      ppuVar1 = &PTR____CFConstantStringClassReference_110f791d8;
      goto LAB_10b745f4c;
    }
    ppuVar3 = &PTR____CFConstantStringClassReference_110f791f8;
  }
  func_0x00010c14cb00(param_3,param_2,ppuVar3,&PTR____CFConstantStringClassReference_110db7018);
LAB_10b745f6c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b745f80; end: 10b746003; -[CTPFeedSource hash] */

void FUN_10b745f80(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_11270a690;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b746004; end: 10b746047; -[CTPFeedSource internalInit] */

void FUN_10b746004(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_11270a690;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b746048; end: 10b746117; -[CTPFeedSource isEqual:] */

long FUN_10b746048(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b7460f0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b7460fc;
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
            goto LAB_10b7460fc;
          }
          goto LAB_10b7460f0;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b7460fc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b746118; end: 10b7461cb; -[CTPFeedSource matchDeltaForce:compute:client:] */

void FUN_10b746118(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5);
    }
  }
  else if (lVar1 == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
    }
  }
  else if ((lVar1 == 0) && (param_3 != 0)) {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x10));
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7461cc; end: 10b746207; -[CTPFeedSource .cxx_destruct] */

void FUN_10b7461cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b746208; end: 10b74631b; -[CTPItem initWithCoder:] */

undefined1 * FUN_10b746208(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270a698;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b74631c; end: 10b74642f; -[CTPItem initWithItemId:entityType:entity:externalId:requestId:] */

undefined1 *
FUN_10b74631c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_11270a698;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
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
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b746430; end: 10b746453; -[CTPItem copyWithZone:] */

undefined8 FUN_10b746430(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b746454; end: 10b7464ef; -[CTPItem encodeWithCoder:] */

void FUN_10b746454(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e9e038);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f79218);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f54b18);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110efd938);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110ead5b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7464f0; end: 10b74657f; -[CTPItem hash] */

undefined8 * FUN_10b7464f0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_48 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b746640:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b74664c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10)))
    {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
            if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10b74664c;
            }
            goto LAB_10b746640;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b74664c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b746580; end: 10b746667; -[CTPItem isEqual:] */

long FUN_10b746580(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b746640:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b74664c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10b74664c;
            }
            goto LAB_10b746640;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b74664c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b746668; end: 10b74666f; -[CTPItem itemId] */

undefined8 FUN_10b746668(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b746670; end: 10b746677; -[CTPItem entityType] */

undefined8 FUN_10b746670(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b746678; end: 10b74667f; -[CTPItem entity] */

undefined8 FUN_10b746678(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b746680; end: 10b746687; -[CTPItem externalId] */

undefined8 FUN_10b746680(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


