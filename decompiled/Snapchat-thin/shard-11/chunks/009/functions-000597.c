/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108b986a0; end: 108b9870b; -[SCBillboardStringsDeltaSyncProcessor onPostSync:error:] */

void FUN_108b986a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0e6e40();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108b9870c; end: 108b98777; -[SCBillboardStringsDeltaSyncProcessor onSyncWithFuture:] */

void FUN_108b9870c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0e6e60();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108b98778; end: 108b9877f; -[SCBillboardStringsDeltaSyncProcessor submitOnRegister] */

undefined8 FUN_108b98778(void)

{
  return 1;
}



/* Entry: 108b98780; end: 108b987b7; -[SCBillboardStringsDeltaSyncProcessor .cxx_destruct] */

void FUN_108b98780(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108b987b8; end: 108b987cf;  */

void FUN_108b987b8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108b987d0; end: 108b98807;  */

void FUN_108b987d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108b98808; end: 108b9880b;  */

void FUN_108b98808(void)

{
  return;
}



/* Entry: 108b9880c; end: 108b98843;  */

void FUN_108b9880c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108b98844; end: 108b98847;  */

void FUN_108b98844(void)

{
  return;
}



/* Entry: 108b98848; end: 108b9887f;  */

void FUN_108b98848(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108b98880; end: 108b98973; -[SCBillboardString initWithLocale:key:message:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108b98880(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126fd550;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112777ddc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112777ddc) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112777de0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112777de0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112777de4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112777de4) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108b98974; end: 108b98997; -[SCBillboardString copyWithZone:] */

undefined8 FUN_108b98974(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108b98998; end: 108b98a2b; -[SCBillboardString hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_108b98998(long param_1,undefined8 param_2,undefined1 *param_3)

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
  uVar1 = *(undefined8 *)(param_1 + _DAT_112777ddc);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112777de0);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112777de4);
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
LAB_108b98adc:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108b98ae8;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_112777ddc);
      if ((lVar5 == *(long *)(param_3 + _DAT_112777ddc)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
         ) {
        lVar5 = *(long *)((long)puVar3 + (long)_DAT_112777de0);
        if ((lVar5 == *(long *)(param_3 + _DAT_112777de0)) ||
           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + (long)_DAT_112777de4);
          if (puVar6 != *(undefined1 **)(param_3 + _DAT_112777de4)) {
            func_0x00010c071ae0();
            goto LAB_108b98ae8;
          }
          goto LAB_108b98adc;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108b98ae8:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 108b98a2c; end: 108b98b03; -[SCBillboardString isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108b98a2c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108b98adc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108b98ae8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + (long)_DAT_112777ddc);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_112777ddc)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_112777de0);
        if ((lVar3 == *(long *)(param_3 + (long)_DAT_112777de0)) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + (long)_DAT_112777de4);
          if (lVar3 != *(long *)(param_3 + (long)_DAT_112777de4)) {
            func_0x00010c071ae0();
            goto LAB_108b98ae8;
          }
          goto LAB_108b98adc;
        }
      }
    }
    lVar3 = 0;
  }
LAB_108b98ae8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108b98b04; end: 108b98b13; -[SCBillboardString locale] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108b98b04(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112777ddc);
}



/* Entry: 108b98b14; end: 108b98b23; -[SCBillboardString key] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108b98b14(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112777de0);
}



/* Entry: 108b98b24; end: 108b98b33; -[SCBillboardString message] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108b98b24(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112777de4);
}



/* Entry: 108b98b34; end: 108b98b83; -[SCBillboardString .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b98b34(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112777de4,0);
  _objc_storeStrong(param_1 + _DAT_112777de0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112777ddc,0);
  return;
}



/* Entry: 108b98b84; end: 108b98be7;  */

undefined ** FUN_108b98b84(void)

{
  int iVar1;
  
  if ((bRam0000000113828b58 & 1) == 0) {
    iVar1 = 0x13828b58;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_11328b4f8,0x100000000);
      ___cxa_guard_release(0x113828b58);
    }
  }
  return &PTR_PTR_11328b4f8;
}



/* Entry: 108b98be8; end: 108b98c6f;  */

void FUN_108b98be8(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108b98c70; end: 108b98cfb;  */

void FUN_108b98c70(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c09e1e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c09e1e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108b98cfc; end: 108b98d5f;  */

undefined ** FUN_108b98cfc(void)

{
  int iVar1;
  
  if ((bRam0000000113828b60 & 1) == 0) {
    iVar1 = 0x13828b60;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_11328b568,0x100000000);
      ___cxa_guard_release(0x113828b60);
    }
  }
  return &PTR_PTR_11328b568;
}



/* Entry: 108b98d60; end: 108b98de7;  */

void FUN_108b98d60(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 7) || (puVar1[3] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108b98de8; end: 108b98e73;  */

void FUN_108b98de8(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c086560(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108b98e74; end: 108b98e7f; +[SCBillboardString table] */

undefined * FUN_108b98e74(void)

{
  return &UNK_10f50401d;
}



/* Entry: 108b98e80; end: 108b99033; +[SCBillboardString immutableObjectParse:bufferSize:] */

void FUN_108b98e80(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined *puVar3;
  ushort uVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar3 = PTR_PTR_1126daec0;
  _objc_alloc(PTR_PTR_1126daec0);
  lVar5 = (long)*piVar1;
  uVar4 = *(ushort *)((long)piVar1 - lVar5);
  if (uVar4 < 5) {
    puVar9 = (undefined *)0x0;
    puVar8 = (undefined *)0x0;
    puVar7 = (undefined *)0x0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)piVar1 - lVar5))[2];
    if (uVar6 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar6);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = (long)*piVar1;
      uVar4 = *(ushort *)((long)piVar1 - lVar5);
    }
    lVar5 = -lVar5;
    if (uVar4 < 7) {
      puVar9 = (undefined *)0x0;
      puVar8 = (undefined *)0x0;
    }
    else {
      uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 6);
      if (uVar6 == 0) {
        puVar8 = (undefined *)0x0;
      }
      else {
        puVar2 = (uint *)((long)piVar1 + uVar6);
        puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            (long)puVar2 + (ulong)*puVar2 + 4);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = -(long)*piVar1;
        uVar4 = *(ushort *)((long)piVar1 - (long)*piVar1);
      }
      if ((uVar4 < 9) || (uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 8), uVar6 == 0)) {
        puVar9 = (undefined *)0x0;
      }
      else {
        puVar2 = (uint *)((long)piVar1 + uVar6);
        puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            (long)puVar2 + (ulong)*puVar2 + 4);
        _objc_retainAutoreleasedReturnValue();
      }
    }
  }
  func_0x00010c026a40(puVar3,param_2,puVar7,puVar8,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108b99034; end: 108b99057; +[SCBillboardString objectClassFunctionPointer] */

undefined1  [16] FUN_108b99034(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x108b99050;
  auVar1._0_8_ = 0x108b99048;
  return auVar1;
}



/* Entry: 108b99058; end: 108b9915b;  */

undefined1 *
FUN_108b99058(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_48 = PTR_PTR_1126fd558;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_3;
      _objc_release(uVar2);
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = param_4;
      _objc_release(uVar2);
      _objc_retain(param_5);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = param_5;
      _objc_release(uVar2);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 108b9915c; end: 108b99573;  */

void FUN_108b9915c(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_1;
      func_0x00010c09e1e0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar1 != (undefined *)0x0) {
        puVar6 = param_1;
        func_0x00010c086560();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar1);
        if (puVar6 != (undefined *)0x0) {
          puVar1 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar1;
          func_0x00010bf636c0();
          _objc_release(puVar1);
          func_0x000107c310d8(puVar6,&UNK_10f50402f);
          if (puVar6 != (undefined *)0x0) {
            puVar1 = param_1;
            func_0x00010c09e1e0(param_1);
            _objc_retainAutoreleasedReturnValue();
            _objc_retain();
            puVar2 = puVar1;
            _objc_retainAutorelease(puVar1);
            func_0x00010bdc3520();
            _sqlite3_bind_text(puVar6,1,puVar2,0xffffffff,0xffffffffffffffff);
            _objc_release(puVar1);
            _objc_release(puVar1);
            puVar1 = param_1;
            func_0x00010c086560(param_1);
            _objc_retainAutoreleasedReturnValue();
            _objc_retain();
            puVar2 = puVar1;
            _objc_retainAutorelease(puVar1);
            func_0x00010bdc3520();
            _sqlite3_bind_text(puVar6,2,puVar2,0xffffffff,0xffffffffffffffff);
            _objc_release(puVar1);
            _objc_release(puVar1);
            puVar1 = puVar6;
            _sqlite3_step();
            if ((int)puVar1 == 100) {
              puVar1 = puVar6;
              _sqlite3_column_int64(puVar6,0);
              puVar2 = PTR_PTR_1126b04a8;
              func_0x00010bf877e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_opt_class(PTR_PTR_1126daec0);
              _sqlite3_column_blob(puVar6,1);
              _sqlite3_column_bytes(puVar6,1);
              puVar3 = puVar2;
              func_0x00010c0dfea0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(param_1);
              _objc_release(puVar2);
              _sqlite3_reset(puVar6);
              if (puVar3 == (undefined *)0x0) goto LAB_108b994a8;
              puVar6 = PTR_PTR_1126daec8;
              _objc_alloc(PTR_PTR_1126daec8);
              puVar2 = puVar3;
              func_0x00010c09e1e0(puVar3);
              _objc_retainAutoreleasedReturnValue();
              puVar4 = puVar3;
              func_0x00010c086560(puVar3);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar3;
              func_0x00010c0cb140(puVar3);
              _objc_retainAutoreleasedReturnValue();
              FUN_108b99058(puVar6,puVar1,puVar2,puVar4,puVar5);
              param_1 = puVar3;
              goto LAB_108b9925c;
            }
          }
        }
      }
    }
    else {
      puVar1 = param_1;
      func_0x00010c1422e0(param_1);
      puVar6 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126daec0);
      puVar3 = puVar6;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar6);
      if (puVar3 != (undefined *)0x0) {
        puVar6 = PTR_PTR_1126daec8;
        _objc_alloc(PTR_PTR_1126daec8);
        puVar2 = puVar3;
        func_0x00010c09e1e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c086560(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c0cb140(puVar3);
        _objc_retainAutoreleasedReturnValue();
        FUN_108b99058(puVar6,puVar1,puVar2,puVar4,puVar5);
        param_1 = puVar3;
LAB_108b9925c:
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar2);
        goto LAB_108b994b0;
      }
LAB_108b994a8:
      param_1 = (undefined *)0x0;
    }
  }
  puVar6 = (undefined *)0x0;
LAB_108b994b0:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108b99574; end: 108b995e7;  */

void FUN_108b99574(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_108b9915c();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 3;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108b995e8; end: 108b9985b;  */

void FUN_108b995e8(undefined *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126daec8;
  _objc_retain(param_1);
  _objc_opt_self(puVar1);
  puVar1 = param_1;
  FUN_108b9915c();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    puVar5 = PTR_PTR_1126daec8;
    _objc_retain(param_1);
    _objc_opt_self(puVar5);
    puVar5 = PTR_PTR_1126daec8;
    if (param_1 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_1;
      func_0x00010c09e1e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010c086560(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_1;
      func_0x00010c0cb140(param_1);
      _objc_retainAutoreleasedReturnValue();
      FUN_108b99058(puVar5,0xffffffffffffffff,puVar2,puVar3,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    *(undefined4 *)(puVar5 + 0x10) = 1;
    _objc_release(param_1);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    puVar5 = param_1;
    func_0x00010c09e1e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar5);
    puVar5 = param_1;
    func_0x00010c086560(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar5);
    puVar5 = param_1;
    func_0x00010c0cb140(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar5);
    _objc_retain(puVar1);
    puVar5 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108b9985c; end: 108b998bf;  */

void FUN_108b9985c(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126daec0;
    _objc_alloc(PTR_PTR_1126daec0);
    func_0x00010c026a40();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108b998c0; end: 108b998fb; -[SCBillboardStringChangeRequest .cxx_destruct] */

void FUN_108b998c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 108b998fc; end: 108b99907; -[SCBillboardStringChangeRequest table] */

undefined * FUN_108b998fc(void)

{
  return &UNK_10f50401d;
}



/* Entry: 108b99908; end: 108b9994f; -[SCBillboardStringChangeRequest createTableWithSQLite:] */

void FUN_108b99908(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10df94900,0x90,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 108b99950; end: 108b99d2f; -[SCBillboardStringChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_108b99950(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar5 = param_1;
  if (iVar3 == 1) {
    FUN_108b9985c(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_108b99d30(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x000107c310d8(param_3,&UNK_10f5040a6);
    if (lVar6 == 0) goto LAB_108b99ccc;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,3,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_108b99ccc;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126daec0);
    func_0x00010c21c9a0(puVar7);
LAB_108b99cb4:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x000107c310d8(param_3,&UNK_10f504079);
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar5 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126daec0);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_108b99cd8;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_108b99cd8;
    }
    FUN_108b9985c(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_108b99d30(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x000107c310d8(param_3,&UNK_10f5040e9);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar8);
      piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
      puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
      _sqlite3_bind_text(param_3,3,puVar2 + 1,*puVar2,0);
      puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
      _sqlite3_bind_text(param_3,4,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar7 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126daec0);
        func_0x00010c21c9a0(puVar7);
        goto LAB_108b99cb4;
      }
    }
LAB_108b99ccc:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_108b99cd8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108b99d30; end: 108b99e9f;  */

ulong FUN_108b99d30(ulong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c09e1e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  FUN_108b99ea0(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010c086560(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  FUN_108b99ea0(param_1,uVar6);
  uVar8 = param_2;
  func_0x00010c0cb140(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  FUN_108b99ea0(param_1,uVar8);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27ddc(param_1,8,uVar9 & 0xffffffff);
  func_0x000107c27ddc(param_1,6,uVar7 & 0xffffffff);
  func_0x000107c27ddc(param_1,4,uVar5 & 0xffffffff);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108b99ea0; end: 108b99fcf;  */

undefined8 FUN_108b99ea0(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_108b99f80;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x000107c27df0(param_1,pcVar1,pcVar2);
    goto LAB_108b99f80;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_108b99f40;
    param_1 = 0;
  }
  else {
LAB_108b99f40:
    pcVar3 = pcVar1;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar4 = pcVar1;
    func_0x00010c08fa60(pcVar1);
    pcVar2 = "";
    if (pcVar3 != (char *)0x0) {
      pcVar2 = pcVar3;
    }
    func_0x000107c27df0(param_1,pcVar2,pcVar4);
  }
  _objc_release(pcVar1);
LAB_108b99f80:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108b99fd0; end: 108b99ffb; +[SCGrapheneBillboardStringsMetric syncNotRequested] */

void FUN_108b99fd0(void)

{
  _objc_alloc(PTR_PTR_1126daeb8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108b99ffc; end: 108b9a027; +[SCGrapheneBillboardStringsMetric syncNotEmpty] */

void FUN_108b99ffc(void)

{
  _objc_alloc(PTR_PTR_1126daeb8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108b9a028; end: 108b9a053; +[SCGrapheneBillboardStringsMetric syncUpdates] */

void FUN_108b9a028(void)

{
  _objc_alloc(PTR_PTR_1126daeb8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108b9a054; end: 108b9a07f; +[SCGrapheneBillboardStringsMetric syncDeletions] */

void FUN_108b9a054(void)

{
  _objc_alloc(PTR_PTR_1126daeb8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108b9a080; end: 108b9a0ab; +[SCGrapheneBillboardStringsMetric syncRequest] */

void FUN_108b9a080(void)

{
  _objc_alloc(PTR_PTR_1126daeb8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108b9a0ac; end: 108b9a0d7; +[SCGrapheneBillboardStringsMetric syncFailure] */

void FUN_108b9a0ac(void)

{
  _objc_alloc(PTR_PTR_1126daeb8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108b9a0d8; end: 108b9a103; +[SCGrapheneBillboardStringsMetric missingMessage] */

void FUN_108b9a0d8(void)

{
  _objc_alloc(PTR_PTR_1126daeb8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108b9a104; end: 108b9a1a3; -[SCGrapheneBillboardStringsMetric description] */

void FUN_108b9a104(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110ee9238;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110ee9238,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126fd560;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 108b9a1a4; end: 108b9a323; -[SCGrapheneRegistry billboardStringsGraphene] */

void FUN_108b9a1a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x108b9a22c;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam000000011372d968 != -1) {
    func_0x000107c27d9c(0x11372d968,&puStack_48);
  }
  uVar1 = uRam000000011372d960;
  _objc_retain(uRam000000011372d960);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108b9a324; end: 108b9a397; -[SCGrapheneBillboardLocaleMetric2 init] */

undefined1 * FUN_108b9a324(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fd568;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108b9a398; end: 108b9a50b;  */

char * FUN_108b9a398(long param_1,char *param_2,undefined1 *param_3)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
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
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,pcVar3);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    pcVar3 = "";
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110ab53b8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  pcVar4 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar4;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(pcVar3);
  if (pcVar4 != (char *)0x0) {
    plVar7 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = pcVar3;
      _objc_retainAutorelease(pcVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar3);
    func_0x000107c278b8(auStack_e0,pcVar4);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110ab5408,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  pcVar4 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
    ___stack_chk_fail();
    _objc_release(pcVar3);
    _objc_release(pcVar3);
    __Unwind_Resume(pcVar4);
    if (pcRam000000011372d970 == (char *)0x0) {
      pcVar3 = PTR_PTR_1126ae980;
      func_0x00010bf00e00();
      do {
        if (pcRam000000011372d970 != (char *)0x0) {
          ClearExclusiveLocal();
          _objc_release();
          return pcRam000000011372d970;
        }
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(0x11372d970,0x10);
        if (bVar2) {
          cVar1 = ExclusiveMonitorsStatus();
          pcRam000000011372d970 = pcVar3;
        }
      } while (cVar1 != '\0');
    }
    return pcRam000000011372d970;
  }
  return pcVar4;
}



/* Entry: 108b9a50c; end: 108b9a67f;  */

char * FUN_108b9a50c(long param_1,char *param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,pcVar3);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110ab5408,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_2);
    _objc_release(param_2);
    __Unwind_Resume(pcVar3);
    if (pcRam000000011372d970 == (char *)0x0) {
      pcVar3 = PTR_PTR_1126ae980;
      func_0x00010bf00e00();
      do {
        if (pcRam000000011372d970 != (char *)0x0) {
          ClearExclusiveLocal();
          _objc_release();
          return pcRam000000011372d970;
        }
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(0x11372d970,0x10);
        if (bVar2) {
          cVar1 = ExclusiveMonitorsStatus();
          pcRam000000011372d970 = pcVar3;
        }
      } while (cVar1 != '\0');
    }
    return pcRam000000011372d970;
  }
  return pcVar3;
}



/* Entry: 108b9a680; end: 108b9a6fb;  */

undefined * FUN_108b9a680(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372d970 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ee9318,
                        &UNK_10df94990,&UNK_10df949a8,3,FUN_108b9a6fc,0);
    do {
      if (puRam000000011372d970 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372d970;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372d970,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372d970 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372d970;
}



/* Entry: 108b9a6fc; end: 108b9a707;  */

bool FUN_108b9a6fc(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 108b9a708; end: 108b9a783; +[SCContentCreatorsDataConfigProtoPbContentCreatorsDataConfig descriptor] */

undefined * FUN_108b9a708(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372d978 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bae2c0,
                        &PTR____CFConstantStringClassReference_110ee9338,
                        &PTR_s_com_snapchat_activation_11328b5d8,&PTR_DAT_11328b5f0,3,0x18,0x1c);
    func_0x00010c2289e0();
    puRam000000011372d978 = puVar1;
  }
  return puRam000000011372d978;
}



/* Entry: 108b9a784; end: 108b9a7eb; +[SCContentCreatorsUIConfigProtoPbContentCreatorsUIConfig descriptor] */

void FUN_108b9a784(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372d980 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bae360,
                        &PTR____CFConstantStringClassReference_110ee9358,
                        &PTR_s_com_snapchat_activation_11328b650,&PTR_DAT_11328b668,1,8,0x1c);
    puRam000000011372d980 = puVar1;
  }
  return;
}



/* Entry: 108b9a7ec; end: 108b9ac9b;  */

void FUN_108b9a7ec(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110daccd8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110daccd8,
                      &PTR____CFConstantStringClassReference_110ee9378,0);
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



/* Entry: 108b9ac9c; end: 108b9aca7; -[SCComposerActiveUserSessionImageLoadersRegistryScope .cxx_destruct] */

void FUN_108b9ac9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108b9aca8; end: 108b9ad1b; -[SCComposerPostRegisterationScopeImageLoadersRegistryScope initWithPlugInRegistry:] */

undefined1 * FUN_108b9aca8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fd578;
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



/* Entry: 108b9ad1c; end: 108b9ad23; -[SCComposerPostRegisterationScopeImageLoadersRegistryScope plugInRegistry] */

undefined8 FUN_108b9ad1c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108b9ad24; end: 108b9ad2f; -[SCComposerPostRegisterationScopeImageLoadersRegistryScope .cxx_destruct] */

void FUN_108b9ad24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108b9ad30; end: 108b9ad37; -[SCComposerUserSessionImageLoadersRegistryScope plugInRegistry] */

undefined8 FUN_108b9ad30(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108b9ad38; end: 108b9ad43; -[SCComposerUserSessionImageLoadersRegistryScope .cxx_destruct] */

void FUN_108b9ad38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108b9ad44; end: 108b9ad4f; -[SCComposerSystemSessionImageLoadersRegistryScope .cxx_destruct] */

void FUN_108b9ad44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108b9ad50; end: 108b9ae77; -[SCPostRegAddFriendsImpressionDefaultLogger initWithNetworkServices:] */

undefined1 * FUN_108b9ad50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fd590;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108b9ae78; end: 108b9aee7;  */

void FUN_108b9ae78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f504606);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar1,param_2,puVar2,0x15,0,0x17);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108b9aee8; end: 108b9b00f; -[SCPostRegAddFriendsImpressionDefaultLogger trackLoggingEventWithSeenContactSnapchattersUserIds:addedContactSnapchattersUserIds:seenQuickAddSnapchattersUserIds:addedQuickAddSnapchattersUserIds:tokenMap:] */

void FUN_108b9aee8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010befa160(*(undefined8 *)(param_1 + 0x20),param_2,param_3);
  }
  lVar1 = param_4;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010befa160(*(undefined8 *)(param_1 + 0x28),param_2,param_4);
  }
  lVar1 = param_5;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010befa160(*(undefined8 *)(param_1 + 0x30),param_2,param_5);
  }
  lVar1 = param_6;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010befa160(*(undefined8 *)(param_1 + 0x38),param_2,param_6);
  }
  lVar1 = param_7;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x40),param_2,param_7);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108b9b010; end: 108b9b317; -[SCPostRegAddFriendsImpressionDefaultLogger sendLoggingEventToLoqContactLogging] */

void FUN_108b9b010(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  long lVar13;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf00560(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf64b60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008340();
  _objc_release(puVar3);
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf00560(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf64b60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008340();
  _objc_release(puVar3);
  _objc_release(uVar2);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf00560(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf64b60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008340();
  _objc_release(puVar3);
  _objc_release(uVar2);
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf00560(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf64b60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008340();
  _objc_release(puVar3);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc();
  puVar7 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008340();
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = &PTR____CFConstantStringClassReference_110ee9838;
  puVar12 = puVar7;
  func_0x00010bec6560(param_1);
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar11);
  _objc_retain(puVar12);
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc34c0(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(puVar1 + 8);
  func_0x00010bfe4d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar12);
  uVar9 = uVar2;
  func_0x00010bf225e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar8);
  puVar5 = PTR_PTR_1126b7220;
  func_0x00010c135080(PTR_PTR_1126b7220);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c2bcaa0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  uVar8 = *(undefined8 *)(puVar1 + 8);
  func_0x00010bfe4c00(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = 0x15;
  func_0x000107c312b8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(ppuVar11);
  func_0x00010c25f600(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar2);
  _objc_release(uVar8);
  _objc_release(ppuVar11);
  _objc_release(puVar7);
  _objc_release(uVar9);
  _objc_release(puVar12);
  _objc_release(ppuVar11);
  _objc_release(puVar12);
  _objc_release(puVar4);
  _objc_release(puVar3);
  return;
}



/* Entry: 108b9b318; end: 108b9b577; -[SCPostRegAddFriendsImpressionDefaultLogger _submitRequestToEndpoint:parameters:] */

void FUN_108b9b318(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc34c0(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfe4d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  uVar5 = uVar4;
  func_0x00010bf225e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar6 = PTR_PTR_1126b7220;
  func_0x00010c135080(PTR_PTR_1126b7220);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c2bcaa0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfe4c00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 0x15;
  func_0x000107c312b8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010c25f600(uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_3);
  _objc_release(puVar8);
  _objc_release(uVar5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 108b9b578; end: 108b9b5bb;  */

void FUN_108b9b578(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c290d20(param_2);
  func_0x00010c290a40(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108b9b5bc; end: 108b9b5bf;  */

void FUN_108b9b5bc(void)

{
  return;
}



/* Entry: 108b9b5c0; end: 108b9b637; -[SCPostRegAddFriendsImpressionDefaultLogger .cxx_destruct] */

void FUN_108b9b5c0(long param_1)

{
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



/* Entry: 108b9b638; end: 108b9b6af; -[SCPostRegAddFriendsImpressionLoggerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b9b638(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126daed8;
  _objc_alloc(PTR_PTR_1126daed8);
  lVar2 = param_1;
  func_0x00010bdef080(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c037ce0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_112777e30),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108b9b6b0; end: 108b9b76b; -[SCPostRegAddFriendsImpressionLoggerEntryPoint _createLazyAddFriendsImpressionLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b9b6b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_1 = param_1 + _DAT_112777e34;
  _objc_loadWeakRetained();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x108b9b73c;
  puStack_30 = &UNK_110ab5498;
  puVar1 = PTR_PTR_1126ae720;
  lStack_28 = param_1;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108b9b76c; end: 108b9b7cb; -[SCPostRegAddFriendsImpressionLoggerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b9b76c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112777e30,0);
  _objc_destroyWeak(param_1 + _DAT_112777e34);
  _objc_destroyWeak(param_1 + _DAT_112777e40);
  _objc_destroyWeak(param_1 + _DAT_112777e3c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112777e38);
  return;
}



/* Entry: 108b9b7cc; end: 108b9b83f; -[SCPostRegAddFriendsImpressionLoggerService initWithPostRegAddFriendsImpressionLogger:] */

undefined1 * FUN_108b9b7cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fd598;
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



/* Entry: 108b9b840; end: 108b9b847; -[SCPostRegAddFriendsImpressionLoggerService postRegAddFriendsImpressionLogger] */

undefined8 FUN_108b9b840(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108b9b848; end: 108b9b853; -[SCPostRegAddFriendsImpressionLoggerService .cxx_destruct] */

void FUN_108b9b848(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108b9b854; end: 108b9b8c7; -[SCGrapheneSaberMetric2 init] */

undefined1 * FUN_108b9b854(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fd5a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108b9b8c8; end: 108b9bb97;  */

/* WARNING: Removing unreachable block (ram,0x000108b9bb50) */
/* WARNING: Removing unreachable block (ram,0x000108b9be20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b9b8c8(double param_1,long param_2,char *param_3,char *param_4,char *param_5)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  undefined *puVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  undefined *puVar19;
  undefined *puVar20;
  char *pcVar21;
  char *pcVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 *unaff_x22;
  undefined8 *puVar26;
  undefined8 *unaff_x24;
  double dVar27;
  double dVar28;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 *puStack_330;
  undefined8 auStack_328 [2];
  char cStack_311;
  undefined8 auStack_310 [2];
  char cStack_2f9;
  long lStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 *puStack_2e0;
  char *pcStack_2d8;
  char *pcStack_2d0;
  char *pcStack_2c8;
  undefined8 ***pppuStack_2c0;
  code *pcStack_2b8;
  char acStack_2b0 [24];
  undefined1 *puStack_298;
  undefined8 auStack_290 [2];
  char cStack_279;
  long lStack_278;
  undefined1 ***pppuStack_240;
  code *pcStack_238;
  char acStack_228 [24];
  char *pcStack_210;
  undefined8 auStack_208 [2];
  char cStack_1f1;
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  char acStack_180 [24];
  undefined1 *puStack_168;
  undefined8 auStack_160 [3];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar3 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_3;
  pcVar4 = param_4;
  pcVar21 = param_5;
  dVar27 = param_1;
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_2 != 0) {
    _objc_retain(param_3);
    _objc_retain(param_5);
    plVar1 = *(long **)(param_2 + 8);
    pcVar2 = "\x01";
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_2 + 8);
      _objc_retain(param_3);
      if (param_3 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      unaff_x24 = auStack_a0;
      func_0x000107c278b8(auStack_a0,pcVar2);
      pcVar2 = "true";
      if ((int)param_4 == 0) {
        pcVar2 = "false";
      }
      func_0x000107c278b8(auStack_88,pcVar2);
      _objc_retain(param_5);
      if (param_5 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(param_5);
        pcVar2 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x000107c278b8(auStack_70,pcVar2);
      acStack_c0[0] = '\0';
      acStack_c0[1] = '\0';
      acStack_c0[2] = '\0';
      acStack_c0[3] = '\0';
      acStack_c0[4] = '\0';
      acStack_c0[5] = '\0';
      acStack_c0[6] = '\0';
      acStack_c0[7] = '\0';
      acStack_c0[8] = '\0';
      acStack_c0[9] = '\0';
      acStack_c0[10] = '\0';
      acStack_c0[0xb] = '\0';
      acStack_c0[0xc] = '\0';
      acStack_c0[0xd] = '\0';
      acStack_c0[0xe] = '\0';
      acStack_c0[0xf] = '\0';
      acStack_c0[0x10] = '\0';
      acStack_c0[0x11] = '\0';
      acStack_c0[0x12] = '\0';
      acStack_c0[0x13] = '\0';
      acStack_c0[0x14] = '\0';
      acStack_c0[0x15] = '\0';
      acStack_c0[0x16] = '\0';
      acStack_c0[0x17] = '\0';
      func_0x000107c27984(acStack_c0,auStack_a0,&lStack_58,3);
      dVar27 = param_1 * 1000.0;
      pcVar21 = (char *)(long)dVar27;
      pcVar2 = "\x01";
      (**(code **)(*plVar1 + 0x18))(plVar1);
      puStack_a8 = acStack_c0;
      func_0x000107c278ac(&puStack_a8);
      lVar25 = 0;
      unaff_x22 = auStack_a0;
      pcVar4 = pcVar3;
      do {
        if ((&cStack_59)[lVar25] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar25));
        }
        lVar25 = lVar25 + -0x18;
      } while (lVar25 != -0x48);
    }
    _objc_release(param_5);
    _objc_release(param_3);
  }
  pcVar3 = param_5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_5);
    do {
      unaff_x22 = unaff_x22 + -3;
    } while (unaff_x22 != auStack_a0);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_release(param_5);
    _objc_release(param_3);
    param_3 = pcVar2;
    __Unwind_Resume();
    pcVar13 = acStack_180;
    pcStack_c8 = FUN_108b9bb98;
    lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar2 = param_3;
    pcVar5 = pcVar4;
    pcVar22 = pcVar21;
    dVar28 = dVar27;
    puStack_d0 = &stack0xfffffffffffffff0;
    _objc_retain(param_3);
    _objc_retain(pcVar21);
    if (pcVar3 != (char *)0x0) {
      _objc_retain(param_3);
      _objc_retain(pcVar21);
      plVar1 = *(long **)(pcVar3 + 8);
      pcVar2 = "\x01";
      (**(code **)(*plVar1 + 0x28))();
      if ((int)plVar1 != 0) {
        plVar1 = *(long **)(pcVar3 + 8);
        _objc_retain(param_3);
        if (param_3 == (char *)0x0) {
          pcVar2 = "";
        }
        else {
          pcVar2 = param_3;
          _objc_retainAutorelease(param_3);
          func_0x00010bdc3520();
        }
        _objc_release(param_3);
        unaff_x24 = auStack_160;
        func_0x000107c278b8(auStack_160,pcVar2);
        pcVar2 = "true";
        if ((int)pcVar4 == 0) {
          pcVar2 = "false";
        }
        func_0x000107c278b8(auStack_148,pcVar2);
        _objc_retain(pcVar21);
        if (pcVar21 == (char *)0x0) {
          pcVar2 = "";
        }
        else {
          _objc_retainAutorelease(pcVar21);
          pcVar2 = pcVar21;
          func_0x00010bdc3520(pcVar21);
        }
        _objc_release(pcVar21);
        func_0x000107c278b8(auStack_130,pcVar2);
        acStack_180[0] = '\0';
        acStack_180[1] = '\0';
        acStack_180[2] = '\0';
        acStack_180[3] = '\0';
        acStack_180[4] = '\0';
        acStack_180[5] = '\0';
        acStack_180[6] = '\0';
        acStack_180[7] = '\0';
        acStack_180[8] = '\0';
        acStack_180[9] = '\0';
        acStack_180[10] = '\0';
        acStack_180[0xb] = '\0';
        acStack_180[0xc] = '\0';
        acStack_180[0xd] = '\0';
        acStack_180[0xe] = '\0';
        acStack_180[0xf] = '\0';
        acStack_180[0x10] = '\0';
        acStack_180[0x11] = '\0';
        acStack_180[0x12] = '\0';
        acStack_180[0x13] = '\0';
        acStack_180[0x14] = '\0';
        acStack_180[0x15] = '\0';
        acStack_180[0x16] = '\0';
        acStack_180[0x17] = '\0';
        func_0x000107c27984(acStack_180,auStack_160,&lStack_118,3);
        dVar28 = dVar27 * 1000.0;
        pcVar22 = (char *)(long)dVar28;
        pcVar2 = "\x01";
        (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110ab5518,acStack_180,pcVar22);
        puStack_168 = acStack_180;
        func_0x000107c278ac(&puStack_168);
        lVar25 = 0;
        unaff_x22 = auStack_160;
        pcVar5 = pcVar13;
        do {
          if ((&cStack_119)[lVar25] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar25));
          }
          lVar25 = lVar25 + -0x18;
        } while (lVar25 != -0x48);
      }
      _objc_release(pcVar21);
      _objc_release(param_3);
    }
    pcVar4 = pcVar21;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
      ___stack_chk_fail();
      _objc_release(pcVar21);
      puVar26 = auStack_160;
      do {
        unaff_x22 = unaff_x22 + -3;
      } while (unaff_x22 != puVar26);
      _objc_release(pcVar21);
      _objc_release(param_3);
      _objc_release(pcVar21);
      _objc_release(param_3);
      param_3 = pcVar2;
      __Unwind_Resume();
      pcStack_188 = FUN_108b9be68;
      lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar2 = param_3;
      pcVar21 = pcVar5;
      dVar27 = dVar28;
      ppuStack_190 = &puStack_d0;
      _objc_retain(param_3);
      _objc_retain(pcVar5);
      if (pcVar4 != (char *)0x0) {
        _objc_retain(param_3);
        _objc_retain(pcVar5);
        plVar1 = *(long **)(pcVar4 + 8);
        pcVar2 = "\x01";
        (**(code **)(*plVar1 + 0x28))();
        if ((int)plVar1 != 0) {
          plVar1 = *(long **)(pcVar4 + 8);
          _objc_retain(param_3);
          if (param_3 == (char *)0x0) {
            pcVar2 = "";
          }
          else {
            pcVar2 = param_3;
            _objc_retainAutorelease(param_3);
            func_0x00010bdc3520();
          }
          _objc_release(param_3);
          puVar26 = auStack_208;
          func_0x000107c278b8(auStack_208,pcVar2);
          _objc_retain(pcVar5);
          if (pcVar5 == (char *)0x0) {
            pcVar2 = "";
          }
          else {
            _objc_retainAutorelease(pcVar5);
            pcVar2 = pcVar5;
            func_0x00010bdc3520(pcVar5);
          }
          _objc_release(pcVar5);
          func_0x000107c278b8(auStack_1f0,pcVar2);
          acStack_228[0] = '\0';
          acStack_228[1] = '\0';
          acStack_228[2] = '\0';
          acStack_228[3] = '\0';
          acStack_228[4] = '\0';
          acStack_228[5] = '\0';
          acStack_228[6] = '\0';
          acStack_228[7] = '\0';
          acStack_228[8] = '\0';
          acStack_228[9] = '\0';
          acStack_228[10] = '\0';
          acStack_228[0xb] = '\0';
          acStack_228[0xc] = '\0';
          acStack_228[0xd] = '\0';
          acStack_228[0xe] = '\0';
          acStack_228[0xf] = '\0';
          acStack_228[0x10] = '\0';
          acStack_228[0x11] = '\0';
          acStack_228[0x12] = '\0';
          acStack_228[0x13] = '\0';
          acStack_228[0x14] = '\0';
          acStack_228[0x15] = '\0';
          acStack_228[0x16] = '\0';
          acStack_228[0x17] = '\0';
          func_0x000107c27984(acStack_228,auStack_208,&lStack_1d8,2);
          dVar27 = dVar28 * 1000.0;
          pcVar22 = (char *)(long)dVar27;
          pcVar2 = "\x01";
          pcVar21 = acStack_228;
          (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110ab5568,pcVar21,pcVar22);
          pcStack_210 = acStack_228;
          func_0x000107c278ac(&pcStack_210);
          lVar25 = 0;
          unaff_x22 = auStack_208;
          do {
            if ((&cStack_1d9)[lVar25] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar25));
            }
            lVar25 = lVar25 + -0x18;
          } while (lVar25 != -0x30);
        }
        _objc_release(pcVar5);
        _objc_release(param_3);
      }
      pcVar4 = pcVar5;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1d8) {
        ___stack_chk_fail();
        _objc_release(pcVar5);
        if (cStack_1f1 < '\0') {
          __ZdlPv(auStack_208[0]);
        }
        _objc_release(pcVar5);
        _objc_release(param_3);
        _objc_release(pcVar5);
        _objc_release(param_3);
        pcVar3 = pcVar4;
        param_3 = pcVar2;
        __Unwind_Resume();
        pcVar13 = acStack_2b0;
        pcStack_238 = FUN_108b9c0f8;
        lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar5 = param_3;
        pcVar2 = param_3;
        pppuStack_240 = &ppuStack_190;
        _objc_retain();
        if (pcVar3 != (char *)0x0) {
          _objc_retain(param_3);
          plVar1 = *(long **)(pcVar3 + 8);
          pcVar2 = "\x01";
          (**(code **)(*plVar1 + 0x28))();
          if ((int)plVar1 != 0) {
            plVar1 = *(long **)(pcVar3 + 8);
            _objc_retain(param_3);
            if (param_3 == (char *)0x0) {
              pcVar2 = "";
            }
            else {
              pcVar2 = param_3;
              _objc_retainAutorelease(param_3);
              func_0x00010bdc3520();
            }
            _objc_release(param_3);
            unaff_x22 = auStack_290;
            func_0x000107c278b8(auStack_290,pcVar2);
            acStack_2b0[0] = '\0';
            acStack_2b0[1] = '\0';
            acStack_2b0[2] = '\0';
            acStack_2b0[3] = '\0';
            acStack_2b0[4] = '\0';
            acStack_2b0[5] = '\0';
            acStack_2b0[6] = '\0';
            acStack_2b0[7] = '\0';
            acStack_2b0[8] = '\0';
            acStack_2b0[9] = '\0';
            acStack_2b0[10] = '\0';
            acStack_2b0[0xb] = '\0';
            acStack_2b0[0xc] = '\0';
            acStack_2b0[0xd] = '\0';
            acStack_2b0[0xe] = '\0';
            acStack_2b0[0xf] = '\0';
            acStack_2b0[0x10] = '\0';
            acStack_2b0[0x11] = '\0';
            acStack_2b0[0x12] = '\0';
            acStack_2b0[0x13] = '\0';
            acStack_2b0[0x14] = '\0';
            acStack_2b0[0x15] = '\0';
            acStack_2b0[0x16] = '\0';
            acStack_2b0[0x17] = '\0';
            func_0x000107c27984(acStack_2b0,auStack_290,&lStack_278,1);
            pcVar22 = (char *)(long)(dVar27 * 1000.0);
            pcVar2 = "\x01";
            (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110ab55b8,acStack_2b0,pcVar22);
            puStack_298 = acStack_2b0;
            func_0x000107c278ac(&puStack_298);
            pcVar21 = pcVar13;
            pcVar4 = acStack_2b0;
            if (cStack_279 < '\0') {
              __ZdlPv(auStack_290[0]);
              pcVar21 = pcVar13;
              pcVar4 = acStack_2b0;
            }
          }
          pcVar5 = param_3;
          _objc_release();
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_278) {
          ___stack_chk_fail();
          _objc_release(param_3);
          _objc_release(param_3);
          _objc_release(param_3);
          pcVar3 = pcVar5;
          __Unwind_Resume();
          pcStack_2b8 = FUN_108b9c2ac;
          lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
          puStack_2f0 = unaff_x24;
          puStack_2e8 = puVar26;
          puStack_2e0 = unaff_x22;
          pcStack_2d8 = pcVar4;
          pcStack_2d0 = pcVar5;
          pcStack_2c8 = param_3;
          pppuStack_2c0 = &pppuStack_240;
          _objc_retain(pcVar2);
          _objc_retain(pcVar21);
          if (pcVar3 != (char *)0x0) {
            plVar1 = *(long **)(pcVar3 + 8);
            (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110ab5608);
            if ((int)plVar1 != 0) {
              plVar1 = *(long **)(pcVar3 + 8);
              _objc_retain(pcVar2);
              if (pcVar2 == (char *)0x0) {
                pcVar4 = "";
              }
              else {
                pcVar4 = pcVar2;
                _objc_retainAutorelease(pcVar2);
                func_0x00010bdc3520();
              }
              _objc_release(pcVar2);
              func_0x000107c278b8(auStack_328,pcVar4);
              _objc_retain(pcVar21);
              if (pcVar21 == (char *)0x0) {
                pcVar4 = "";
              }
              else {
                _objc_retainAutorelease(pcVar21);
                pcVar4 = pcVar21;
                func_0x00010bdc3520(pcVar21);
              }
              _objc_release(pcVar21);
              func_0x000107c278b8(auStack_310,pcVar4);
              uStack_348 = 0;
              uStack_340 = 0;
              uStack_338 = 0;
              func_0x000107c27984(&uStack_348,auStack_328,&lStack_2f8,2);
              (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110ab5608,&uStack_348,pcVar22);
              puStack_330 = &uStack_348;
              func_0x000107c278ac(&puStack_330);
              lVar25 = 0;
              do {
                if ((&cStack_2f9)[lVar25] < '\0') {
                  __ZdlPv(*(undefined8 *)((long)auStack_310 + lVar25));
                }
                lVar25 = lVar25 + -0x18;
              } while (lVar25 != -0x30);
            }
          }
          _objc_release(pcVar21);
          pcVar4 = pcVar2;
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2f8) {
            return;
          }
          ___stack_chk_fail();
          _objc_release(pcVar21);
          if (cStack_311 < '\0') {
            __ZdlPv(auStack_328[0]);
          }
          _objc_release(pcVar21);
          _objc_release(pcVar2);
          __Unwind_Resume();
          lVar25 = (long)_DAT_112777e4c;
          pcVar2 = pcVar4 + lVar25;
          _objc_loadWeakRetained();
          pcVar21 = pcVar2;
          func_0x00010c0f9c40();
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = pcVar21;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          pcVar5 = pcVar3;
          func_0x00010c0831a0();
          _objc_release(pcVar3);
          _objc_release(pcVar21);
          _objc_release(pcVar2);
          if ((int)pcVar5 == 0) {
            param_3 = PTR_PTR_1126daee8;
            _objc_alloc();
            pcVar2 = pcVar4 + _DAT_112777e54;
            _objc_loadWeakRetained(pcVar2);
            pcVar3 = pcVar2;
            func_0x00010c15ada0();
            _objc_retainAutoreleasedReturnValue();
            pcVar21 = pcVar4 + _DAT_112777e58;
            _objc_loadWeakRetained(pcVar21);
            pcVar5 = pcVar21;
            func_0x00010bf89340();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c044160();
            _objc_release(pcVar5);
            _objc_release(pcVar21);
            _objc_release(pcVar3);
            _objc_release(pcVar2);
            pcVar6 = PTR_PTR_1126daef0;
            _objc_alloc();
            pcVar2 = pcVar4 + _DAT_112777e5c;
            _objc_loadWeakRetained();
            pcVar7 = pcVar2;
            func_0x00010c293fc0();
            _objc_retainAutoreleasedReturnValue();
            pcVar8 = pcVar7;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            pcVar21 = pcVar4 + _DAT_112777e60;
            _objc_loadWeakRetained();
            pcVar9 = pcVar21;
            func_0x00010bf70800();
            _objc_retainAutoreleasedReturnValue();
            pcVar3 = pcVar4 + _DAT_112777e64;
            _objc_loadWeakRetained();
            pcVar10 = pcVar3;
            func_0x00010bfcdfa0();
            _objc_retainAutoreleasedReturnValue();
            pcVar5 = pcVar4 + _DAT_112777e68;
            _objc_loadWeakRetained(pcVar5);
            pcVar11 = pcVar5;
            func_0x00010c127ba0();
            _objc_retainAutoreleasedReturnValue();
            pcVar22 = pcVar4 + _DAT_112777e6c;
            _objc_loadWeakRetained(pcVar22);
            pcVar12 = pcVar22;
            func_0x00010c089460();
            _objc_retainAutoreleasedReturnValue();
            pcVar13 = pcVar4 + _DAT_112777e70;
            _objc_loadWeakRetained(pcVar13);
            pcVar14 = pcVar13;
            func_0x00010bf10d00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0272a0();
            _objc_release(pcVar14);
            _objc_release(pcVar13);
            _objc_release(pcVar12);
            _objc_release(pcVar22);
            _objc_release(pcVar11);
            _objc_release(pcVar5);
            _objc_release(pcVar10);
            _objc_release(pcVar3);
            _objc_release(pcVar9);
            _objc_release(pcVar21);
            _objc_release(pcVar8);
            _objc_release(pcVar7);
            _objc_release(pcVar2);
            puVar15 = PTR_PTR_1126daef8;
            _objc_alloc();
            lVar23 = (long)_DAT_112777e50;
            pcVar2 = pcVar4 + lVar23;
            _objc_loadWeakRetained();
            pcVar9 = pcVar2;
            func_0x00010c27ece0();
            _objc_retainAutoreleasedReturnValue();
            pcVar21 = pcVar4 + lVar25;
            _objc_loadWeakRetained();
            pcVar10 = pcVar21;
            func_0x00010c0f9c40();
            _objc_retainAutoreleasedReturnValue();
            pcVar3 = pcVar4 + _DAT_112777e78;
            _objc_loadWeakRetained();
            pcVar5 = pcVar4 + _DAT_112777e7c;
            _objc_loadWeakRetained();
            pcVar11 = pcVar5;
            func_0x00010bf45e20();
            _objc_retainAutoreleasedReturnValue();
            pcVar12 = pcVar11;
            func_0x00010bf28fa0();
            _objc_retainAutoreleasedReturnValue();
            pcVar22 = pcVar4 + _DAT_112777e80;
            _objc_loadWeakRetained();
            pcVar14 = pcVar22;
            func_0x00010c295440();
            _objc_retainAutoreleasedReturnValue();
            pcVar13 = pcVar4 + _DAT_112777e84;
            _objc_loadWeakRetained();
            pcVar16 = pcVar13;
            func_0x00010bf398e0();
            _objc_retainAutoreleasedReturnValue();
            lVar25 = (long)_DAT_112777e88;
            pcVar7 = pcVar4 + lVar25;
            _objc_loadWeakRetained();
            pcVar17 = pcVar7;
            func_0x00010bf05440();
            _objc_retainAutoreleasedReturnValue();
            pcVar8 = pcVar4 + lVar25;
            _objc_loadWeakRetained();
            pcVar18 = pcVar8;
            func_0x00010bf1b8e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0570a0();
            _objc_release(pcVar18);
            _objc_release(pcVar8);
            _objc_release(pcVar17);
            _objc_release(pcVar7);
            _objc_release(pcVar16);
            _objc_release(pcVar13);
            _objc_release(pcVar14);
            _objc_release(pcVar22);
            _objc_release(pcVar12);
            _objc_release(pcVar11);
            _objc_release(pcVar5);
            _objc_release(pcVar3);
            _objc_release(pcVar10);
            _objc_release(pcVar21);
            _objc_release(pcVar9);
            _objc_release(pcVar2);
            puVar19 = PTR_PTR_1126aeb48;
            _objc_alloc();
            func_0x00010c0404c0();
            puVar20 = PTR_PTR_1126daf00;
            _objc_alloc();
            pcVar2 = pcVar4 + lVar23;
            _objc_loadWeakRetained(pcVar2);
            pcVar21 = pcVar2;
            func_0x00010bf6b020();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c040660();
            lVar25 = (long)_DAT_112777e8c;
            uVar24 = *(undefined8 *)(pcVar4 + lVar25);
            *(undefined **)(pcVar4 + lVar25) = puVar20;
            _objc_release(uVar24);
            _objc_release(pcVar21);
            _objc_release(pcVar2);
            func_0x00010bf192c0(*(undefined8 *)(pcVar4 + lVar25));
            _objc_release(puVar19);
            _objc_release(puVar15);
          }
          else {
            param_3 = pcVar4 + _DAT_112777e50;
            _objc_loadWeakRetained(param_3);
            pcVar6 = param_3;
            func_0x00010bf6b020();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf1afe0();
          }
          _objc_release(pcVar6);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108b9bb98; end: 108b9be67;  */

/* WARNING: Removing unreachable block (ram,0x000108b9be20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b9bb98(double param_1,long param_2,char *param_3,char *param_4,char *param_5)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  undefined *puVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  undefined *puVar20;
  undefined *puVar21;
  char *pcVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 *unaff_x22;
  undefined8 *puVar26;
  undefined8 *unaff_x24;
  double dVar27;
  double dVar28;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 *puStack_270;
  undefined8 auStack_268 [2];
  char cStack_251;
  undefined8 auStack_250 [2];
  char cStack_239;
  long lStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  char *pcStack_218;
  char *pcStack_210;
  char *pcStack_208;
  undefined1 ***pppuStack_200;
  code *pcStack_1f8;
  char acStack_1f0 [24];
  undefined1 *puStack_1d8;
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined1 **ppuStack_180;
  code *pcStack_178;
  char acStack_168 [24];
  char *pcStack_150;
  undefined8 auStack_148 [2];
  char cStack_131;
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar3 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_3;
  pcVar4 = param_4;
  pcVar22 = param_5;
  dVar27 = param_1;
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_2 != 0) {
    _objc_retain(param_3);
    _objc_retain(param_5);
    plVar1 = *(long **)(param_2 + 8);
    pcVar2 = "\x01";
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_2 + 8);
      _objc_retain(param_3);
      if (param_3 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      unaff_x24 = auStack_a0;
      func_0x000107c278b8(auStack_a0,pcVar2);
      pcVar2 = "true";
      if ((int)param_4 == 0) {
        pcVar2 = "false";
      }
      func_0x000107c278b8(auStack_88,pcVar2);
      _objc_retain(param_5);
      if (param_5 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(param_5);
        pcVar2 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x000107c278b8(auStack_70,pcVar2);
      acStack_c0[0] = '\0';
      acStack_c0[1] = '\0';
      acStack_c0[2] = '\0';
      acStack_c0[3] = '\0';
      acStack_c0[4] = '\0';
      acStack_c0[5] = '\0';
      acStack_c0[6] = '\0';
      acStack_c0[7] = '\0';
      acStack_c0[8] = '\0';
      acStack_c0[9] = '\0';
      acStack_c0[10] = '\0';
      acStack_c0[0xb] = '\0';
      acStack_c0[0xc] = '\0';
      acStack_c0[0xd] = '\0';
      acStack_c0[0xe] = '\0';
      acStack_c0[0xf] = '\0';
      acStack_c0[0x10] = '\0';
      acStack_c0[0x11] = '\0';
      acStack_c0[0x12] = '\0';
      acStack_c0[0x13] = '\0';
      acStack_c0[0x14] = '\0';
      acStack_c0[0x15] = '\0';
      acStack_c0[0x16] = '\0';
      acStack_c0[0x17] = '\0';
      func_0x000107c27984(acStack_c0,auStack_a0,&lStack_58,3);
      dVar27 = param_1 * 1000.0;
      pcVar22 = (char *)(long)dVar27;
      pcVar2 = "\x01";
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110ab5518,acStack_c0,pcVar22);
      puStack_a8 = acStack_c0;
      func_0x000107c278ac(&puStack_a8);
      lVar25 = 0;
      unaff_x22 = auStack_a0;
      pcVar4 = pcVar3;
      do {
        if ((&cStack_59)[lVar25] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar25));
        }
        lVar25 = lVar25 + -0x18;
      } while (lVar25 != -0x48);
    }
    _objc_release(param_5);
    _objc_release(param_3);
  }
  pcVar3 = param_5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_5);
    puVar26 = auStack_a0;
    do {
      unaff_x22 = unaff_x22 + -3;
    } while (unaff_x22 != puVar26);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_release(param_5);
    _objc_release(param_3);
    param_3 = pcVar2;
    __Unwind_Resume();
    pcStack_c8 = FUN_108b9be68;
    lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar2 = param_3;
    pcVar6 = pcVar4;
    dVar28 = dVar27;
    puStack_d0 = &stack0xfffffffffffffff0;
    _objc_retain(param_3);
    _objc_retain(pcVar4);
    if (pcVar3 != (char *)0x0) {
      _objc_retain(param_3);
      _objc_retain(pcVar4);
      plVar1 = *(long **)(pcVar3 + 8);
      pcVar2 = "\x01";
      (**(code **)(*plVar1 + 0x28))();
      if ((int)plVar1 != 0) {
        plVar1 = *(long **)(pcVar3 + 8);
        _objc_retain(param_3);
        if (param_3 == (char *)0x0) {
          pcVar2 = "";
        }
        else {
          pcVar2 = param_3;
          _objc_retainAutorelease(param_3);
          func_0x00010bdc3520();
        }
        _objc_release(param_3);
        puVar26 = auStack_148;
        func_0x000107c278b8(auStack_148,pcVar2);
        _objc_retain(pcVar4);
        if (pcVar4 == (char *)0x0) {
          pcVar2 = "";
        }
        else {
          _objc_retainAutorelease(pcVar4);
          pcVar2 = pcVar4;
          func_0x00010bdc3520(pcVar4);
        }
        _objc_release(pcVar4);
        func_0x000107c278b8(auStack_130,pcVar2);
        acStack_168[0] = '\0';
        acStack_168[1] = '\0';
        acStack_168[2] = '\0';
        acStack_168[3] = '\0';
        acStack_168[4] = '\0';
        acStack_168[5] = '\0';
        acStack_168[6] = '\0';
        acStack_168[7] = '\0';
        acStack_168[8] = '\0';
        acStack_168[9] = '\0';
        acStack_168[10] = '\0';
        acStack_168[0xb] = '\0';
        acStack_168[0xc] = '\0';
        acStack_168[0xd] = '\0';
        acStack_168[0xe] = '\0';
        acStack_168[0xf] = '\0';
        acStack_168[0x10] = '\0';
        acStack_168[0x11] = '\0';
        acStack_168[0x12] = '\0';
        acStack_168[0x13] = '\0';
        acStack_168[0x14] = '\0';
        acStack_168[0x15] = '\0';
        acStack_168[0x16] = '\0';
        acStack_168[0x17] = '\0';
        func_0x000107c27984(acStack_168,auStack_148,&lStack_118,2);
        dVar28 = dVar27 * 1000.0;
        pcVar22 = (char *)(long)dVar28;
        pcVar2 = "\x01";
        pcVar6 = acStack_168;
        (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110ab5568,pcVar6,pcVar22);
        pcStack_150 = acStack_168;
        func_0x000107c278ac(&pcStack_150);
        lVar25 = 0;
        unaff_x22 = auStack_148;
        do {
          if ((&cStack_119)[lVar25] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar25));
          }
          lVar25 = lVar25 + -0x18;
        } while (lVar25 != -0x30);
      }
      _objc_release(pcVar4);
      _objc_release(param_3);
    }
    pcVar3 = pcVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
      ___stack_chk_fail();
      _objc_release(pcVar4);
      if (cStack_131 < '\0') {
        __ZdlPv(auStack_148[0]);
      }
      _objc_release(pcVar4);
      _objc_release(param_3);
      _objc_release(pcVar4);
      _objc_release(param_3);
      pcVar4 = pcVar3;
      param_3 = pcVar2;
      __Unwind_Resume();
      pcVar14 = acStack_1f0;
      pcStack_178 = FUN_108b9c0f8;
      lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar5 = param_3;
      pcVar2 = param_3;
      ppuStack_180 = &puStack_d0;
      _objc_retain();
      if (pcVar4 != (char *)0x0) {
        _objc_retain(param_3);
        plVar1 = *(long **)(pcVar4 + 8);
        pcVar2 = "\x01";
        (**(code **)(*plVar1 + 0x28))();
        if ((int)plVar1 != 0) {
          plVar1 = *(long **)(pcVar4 + 8);
          _objc_retain(param_3);
          if (param_3 == (char *)0x0) {
            pcVar2 = "";
          }
          else {
            pcVar2 = param_3;
            _objc_retainAutorelease(param_3);
            func_0x00010bdc3520();
          }
          _objc_release(param_3);
          unaff_x22 = auStack_1d0;
          func_0x000107c278b8(auStack_1d0,pcVar2);
          acStack_1f0[0] = '\0';
          acStack_1f0[1] = '\0';
          acStack_1f0[2] = '\0';
          acStack_1f0[3] = '\0';
          acStack_1f0[4] = '\0';
          acStack_1f0[5] = '\0';
          acStack_1f0[6] = '\0';
          acStack_1f0[7] = '\0';
          acStack_1f0[8] = '\0';
          acStack_1f0[9] = '\0';
          acStack_1f0[10] = '\0';
          acStack_1f0[0xb] = '\0';
          acStack_1f0[0xc] = '\0';
          acStack_1f0[0xd] = '\0';
          acStack_1f0[0xe] = '\0';
          acStack_1f0[0xf] = '\0';
          acStack_1f0[0x10] = '\0';
          acStack_1f0[0x11] = '\0';
          acStack_1f0[0x12] = '\0';
          acStack_1f0[0x13] = '\0';
          acStack_1f0[0x14] = '\0';
          acStack_1f0[0x15] = '\0';
          acStack_1f0[0x16] = '\0';
          acStack_1f0[0x17] = '\0';
          func_0x000107c27984(acStack_1f0,auStack_1d0,&lStack_1b8,1);
          pcVar22 = (char *)(long)(dVar28 * 1000.0);
          pcVar2 = "\x01";
          (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110ab55b8,acStack_1f0,pcVar22);
          puStack_1d8 = acStack_1f0;
          func_0x000107c278ac(&puStack_1d8);
          pcVar6 = pcVar14;
          pcVar3 = acStack_1f0;
          if (cStack_1b9 < '\0') {
            __ZdlPv(auStack_1d0[0]);
            pcVar6 = pcVar14;
            pcVar3 = acStack_1f0;
          }
        }
        pcVar5 = param_3;
        _objc_release();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b8) {
        ___stack_chk_fail();
        _objc_release(param_3);
        _objc_release(param_3);
        _objc_release(param_3);
        pcVar4 = pcVar5;
        __Unwind_Resume();
        pcStack_1f8 = FUN_108b9c2ac;
        lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puStack_230 = unaff_x24;
        puStack_228 = puVar26;
        puStack_220 = unaff_x22;
        pcStack_218 = pcVar3;
        pcStack_210 = pcVar5;
        pcStack_208 = param_3;
        pppuStack_200 = &ppuStack_180;
        _objc_retain(pcVar2);
        _objc_retain(pcVar6);
        if (pcVar4 != (char *)0x0) {
          plVar1 = *(long **)(pcVar4 + 8);
          (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110ab5608);
          if ((int)plVar1 != 0) {
            plVar1 = *(long **)(pcVar4 + 8);
            _objc_retain(pcVar2);
            if (pcVar2 == (char *)0x0) {
              pcVar4 = "";
            }
            else {
              pcVar4 = pcVar2;
              _objc_retainAutorelease(pcVar2);
              func_0x00010bdc3520();
            }
            _objc_release(pcVar2);
            func_0x000107c278b8(auStack_268,pcVar4);
            _objc_retain(pcVar6);
            if (pcVar6 == (char *)0x0) {
              pcVar4 = "";
            }
            else {
              _objc_retainAutorelease(pcVar6);
              pcVar4 = pcVar6;
              func_0x00010bdc3520(pcVar6);
            }
            _objc_release(pcVar6);
            func_0x000107c278b8(auStack_250,pcVar4);
            uStack_288 = 0;
            uStack_280 = 0;
            uStack_278 = 0;
            func_0x000107c27984(&uStack_288,auStack_268,&lStack_238,2);
            (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110ab5608,&uStack_288,pcVar22);
            puStack_270 = &uStack_288;
            func_0x000107c278ac(&puStack_270);
            lVar25 = 0;
            do {
              if ((&cStack_239)[lVar25] < '\0') {
                __ZdlPv(*(undefined8 *)((long)auStack_250 + lVar25));
              }
              lVar25 = lVar25 + -0x18;
            } while (lVar25 != -0x30);
          }
        }
        _objc_release(pcVar6);
        pcVar4 = pcVar2;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) {
          return;
        }
        ___stack_chk_fail();
        _objc_release(pcVar6);
        if (cStack_251 < '\0') {
          __ZdlPv(auStack_268[0]);
        }
        _objc_release(pcVar6);
        _objc_release(pcVar2);
        __Unwind_Resume();
        lVar25 = (long)_DAT_112777e4c;
        pcVar2 = pcVar4 + lVar25;
        _objc_loadWeakRetained();
        pcVar22 = pcVar2;
        func_0x00010c0f9c40();
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar22;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = pcVar3;
        func_0x00010c0831a0();
        _objc_release(pcVar3);
        _objc_release(pcVar22);
        _objc_release(pcVar2);
        if ((int)pcVar6 == 0) {
          param_3 = PTR_PTR_1126daee8;
          _objc_alloc();
          pcVar2 = pcVar4 + _DAT_112777e54;
          _objc_loadWeakRetained(pcVar2);
          pcVar3 = pcVar2;
          func_0x00010c15ada0();
          _objc_retainAutoreleasedReturnValue();
          pcVar22 = pcVar4 + _DAT_112777e58;
          _objc_loadWeakRetained(pcVar22);
          pcVar6 = pcVar22;
          func_0x00010bf89340();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c044160();
          _objc_release(pcVar6);
          _objc_release(pcVar22);
          _objc_release(pcVar3);
          _objc_release(pcVar2);
          pcVar7 = PTR_PTR_1126daef0;
          _objc_alloc();
          pcVar2 = pcVar4 + _DAT_112777e5c;
          _objc_loadWeakRetained();
          pcVar8 = pcVar2;
          func_0x00010c293fc0();
          _objc_retainAutoreleasedReturnValue();
          pcVar9 = pcVar8;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          pcVar22 = pcVar4 + _DAT_112777e60;
          _objc_loadWeakRetained();
          pcVar10 = pcVar22;
          func_0x00010bf70800();
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = pcVar4 + _DAT_112777e64;
          _objc_loadWeakRetained();
          pcVar11 = pcVar3;
          func_0x00010bfcdfa0();
          _objc_retainAutoreleasedReturnValue();
          pcVar6 = pcVar4 + _DAT_112777e68;
          _objc_loadWeakRetained(pcVar6);
          pcVar12 = pcVar6;
          func_0x00010c127ba0();
          _objc_retainAutoreleasedReturnValue();
          pcVar5 = pcVar4 + _DAT_112777e6c;
          _objc_loadWeakRetained(pcVar5);
          pcVar13 = pcVar5;
          func_0x00010c089460();
          _objc_retainAutoreleasedReturnValue();
          pcVar14 = pcVar4 + _DAT_112777e70;
          _objc_loadWeakRetained(pcVar14);
          pcVar15 = pcVar14;
          func_0x00010bf10d00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0272a0();
          _objc_release(pcVar15);
          _objc_release(pcVar14);
          _objc_release(pcVar13);
          _objc_release(pcVar5);
          _objc_release(pcVar12);
          _objc_release(pcVar6);
          _objc_release(pcVar11);
          _objc_release(pcVar3);
          _objc_release(pcVar10);
          _objc_release(pcVar22);
          _objc_release(pcVar9);
          _objc_release(pcVar8);
          _objc_release(pcVar2);
          puVar16 = PTR_PTR_1126daef8;
          _objc_alloc();
          lVar23 = (long)_DAT_112777e50;
          pcVar2 = pcVar4 + lVar23;
          _objc_loadWeakRetained();
          pcVar10 = pcVar2;
          func_0x00010c27ece0();
          _objc_retainAutoreleasedReturnValue();
          pcVar22 = pcVar4 + lVar25;
          _objc_loadWeakRetained();
          pcVar11 = pcVar22;
          func_0x00010c0f9c40();
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = pcVar4 + _DAT_112777e78;
          _objc_loadWeakRetained();
          pcVar6 = pcVar4 + _DAT_112777e7c;
          _objc_loadWeakRetained();
          pcVar12 = pcVar6;
          func_0x00010bf45e20();
          _objc_retainAutoreleasedReturnValue();
          pcVar13 = pcVar12;
          func_0x00010bf28fa0();
          _objc_retainAutoreleasedReturnValue();
          pcVar5 = pcVar4 + _DAT_112777e80;
          _objc_loadWeakRetained();
          pcVar15 = pcVar5;
          func_0x00010c295440();
          _objc_retainAutoreleasedReturnValue();
          pcVar14 = pcVar4 + _DAT_112777e84;
          _objc_loadWeakRetained();
          pcVar17 = pcVar14;
          func_0x00010bf398e0();
          _objc_retainAutoreleasedReturnValue();
          lVar25 = (long)_DAT_112777e88;
          pcVar8 = pcVar4 + lVar25;
          _objc_loadWeakRetained();
          pcVar18 = pcVar8;
          func_0x00010bf05440();
          _objc_retainAutoreleasedReturnValue();
          pcVar9 = pcVar4 + lVar25;
          _objc_loadWeakRetained();
          pcVar19 = pcVar9;
          func_0x00010bf1b8e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0570a0();
          _objc_release(pcVar19);
          _objc_release(pcVar9);
          _objc_release(pcVar18);
          _objc_release(pcVar8);
          _objc_release(pcVar17);
          _objc_release(pcVar14);
          _objc_release(pcVar15);
          _objc_release(pcVar5);
          _objc_release(pcVar13);
          _objc_release(pcVar12);
          _objc_release(pcVar6);
          _objc_release(pcVar3);
          _objc_release(pcVar11);
          _objc_release(pcVar22);
          _objc_release(pcVar10);
          _objc_release(pcVar2);
          puVar20 = PTR_PTR_1126aeb48;
          _objc_alloc();
          func_0x00010c0404c0();
          puVar21 = PTR_PTR_1126daf00;
          _objc_alloc();
          pcVar2 = pcVar4 + lVar23;
          _objc_loadWeakRetained(pcVar2);
          pcVar22 = pcVar2;
          func_0x00010bf6b020();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c040660();
          lVar25 = (long)_DAT_112777e8c;
          uVar24 = *(undefined8 *)(pcVar4 + lVar25);
          *(undefined **)(pcVar4 + lVar25) = puVar21;
          _objc_release(uVar24);
          _objc_release(pcVar22);
          _objc_release(pcVar2);
          func_0x00010bf192c0(*(undefined8 *)(pcVar4 + lVar25));
          _objc_release(puVar20);
          _objc_release(puVar16);
        }
        else {
          param_3 = pcVar4 + _DAT_112777e50;
          _objc_loadWeakRetained(param_3);
          pcVar7 = param_3;
          func_0x00010bf6b020();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf1afe0();
        }
        _objc_release(pcVar7);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108b9be68; end: 108b9c0f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b9be68(double param_1,long param_2,char *param_3,char *param_4,long param_5)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  undefined *puVar17;
  char *pcVar18;
  char *pcVar19;
  char *pcVar20;
  undefined *puVar21;
  undefined *puVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  double dVar26;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 auStack_1a8 [2];
  char cStack_191;
  undefined8 auStack_190 [2];
  char cStack_179;
  long lStack_178;
  char acStack_130 [24];
  undefined1 *puStack_118;
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  char acStack_a8 [24];
  char *pcStack_90;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_3;
  pcVar5 = param_4;
  dVar26 = param_1;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    _objc_retain(param_3);
    _objc_retain(param_4);
    plVar1 = *(long **)(param_2 + 8);
    pcVar2 = "\x01";
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_2 + 8);
      _objc_retain(param_3);
      if (param_3 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x000107c278b8(auStack_88,pcVar2);
      _objc_retain(param_4);
      if (param_4 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(param_4);
        pcVar2 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x000107c278b8(auStack_70,pcVar2);
      acStack_a8[0] = '\0';
      acStack_a8[1] = '\0';
      acStack_a8[2] = '\0';
      acStack_a8[3] = '\0';
      acStack_a8[4] = '\0';
      acStack_a8[5] = '\0';
      acStack_a8[6] = '\0';
      acStack_a8[7] = '\0';
      acStack_a8[8] = '\0';
      acStack_a8[9] = '\0';
      acStack_a8[10] = '\0';
      acStack_a8[0xb] = '\0';
      acStack_a8[0xc] = '\0';
      acStack_a8[0xd] = '\0';
      acStack_a8[0xe] = '\0';
      acStack_a8[0xf] = '\0';
      acStack_a8[0x10] = '\0';
      acStack_a8[0x11] = '\0';
      acStack_a8[0x12] = '\0';
      acStack_a8[0x13] = '\0';
      acStack_a8[0x14] = '\0';
      acStack_a8[0x15] = '\0';
      acStack_a8[0x16] = '\0';
      acStack_a8[0x17] = '\0';
      func_0x000107c27984(acStack_a8,auStack_88,&lStack_58,2);
      dVar26 = param_1 * 1000.0;
      param_5 = (long)dVar26;
      pcVar2 = "\x01";
      pcVar5 = acStack_a8;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110ab5568,pcVar5,param_5);
      pcStack_90 = acStack_a8;
      func_0x000107c278ac(&pcStack_90);
      lVar25 = 0;
      do {
        if ((&cStack_59)[lVar25] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar25));
        }
        lVar25 = lVar25 + -0x18;
      } while (lVar25 != -0x30);
    }
    _objc_release(param_4);
    _objc_release(param_3);
  }
  pcVar3 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_4);
    if (cStack_71 < '\0') {
      __ZdlPv(auStack_88[0]);
    }
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_4);
    _objc_release(param_3);
    param_3 = pcVar2;
    __Unwind_Resume();
    pcVar6 = acStack_130;
    lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar4 = param_3;
    pcVar2 = param_3;
    _objc_retain();
    if (pcVar3 != (char *)0x0) {
      _objc_retain(param_3);
      plVar1 = *(long **)(pcVar3 + 8);
      pcVar2 = "\x01";
      (**(code **)(*plVar1 + 0x28))();
      if ((int)plVar1 != 0) {
        plVar1 = *(long **)(pcVar3 + 8);
        _objc_retain(param_3);
        if (param_3 == (char *)0x0) {
          pcVar2 = "";
        }
        else {
          pcVar2 = param_3;
          _objc_retainAutorelease(param_3);
          func_0x00010bdc3520();
        }
        _objc_release(param_3);
        func_0x000107c278b8(auStack_110,pcVar2);
        acStack_130[0] = '\0';
        acStack_130[1] = '\0';
        acStack_130[2] = '\0';
        acStack_130[3] = '\0';
        acStack_130[4] = '\0';
        acStack_130[5] = '\0';
        acStack_130[6] = '\0';
        acStack_130[7] = '\0';
        acStack_130[8] = '\0';
        acStack_130[9] = '\0';
        acStack_130[10] = '\0';
        acStack_130[0xb] = '\0';
        acStack_130[0xc] = '\0';
        acStack_130[0xd] = '\0';
        acStack_130[0xe] = '\0';
        acStack_130[0xf] = '\0';
        acStack_130[0x10] = '\0';
        acStack_130[0x11] = '\0';
        acStack_130[0x12] = '\0';
        acStack_130[0x13] = '\0';
        acStack_130[0x14] = '\0';
        acStack_130[0x15] = '\0';
        acStack_130[0x16] = '\0';
        acStack_130[0x17] = '\0';
        func_0x000107c27984(acStack_130,auStack_110,&lStack_f8,1);
        param_5 = (long)(dVar26 * 1000.0);
        pcVar2 = "\x01";
        (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110ab55b8,acStack_130,param_5);
        puStack_118 = acStack_130;
        func_0x000107c278ac(&puStack_118);
        pcVar5 = pcVar6;
        if (cStack_f9 < '\0') {
          __ZdlPv(auStack_110[0]);
          pcVar5 = pcVar6;
        }
      }
      pcVar4 = param_3;
      _objc_release();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
      ___stack_chk_fail();
      _objc_release(param_3);
      _objc_release(param_3);
      _objc_release(param_3);
      __Unwind_Resume();
      lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(pcVar2);
      _objc_retain(pcVar5);
      if (pcVar4 != (char *)0x0) {
        plVar1 = *(long **)(pcVar4 + 8);
        (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110ab5608);
        if ((int)plVar1 != 0) {
          plVar1 = *(long **)(pcVar4 + 8);
          _objc_retain(pcVar2);
          if (pcVar2 == (char *)0x0) {
            pcVar3 = "";
          }
          else {
            pcVar3 = pcVar2;
            _objc_retainAutorelease(pcVar2);
            func_0x00010bdc3520();
          }
          _objc_release(pcVar2);
          func_0x000107c278b8(auStack_1a8,pcVar3);
          _objc_retain(pcVar5);
          if (pcVar5 == (char *)0x0) {
            pcVar3 = "";
          }
          else {
            _objc_retainAutorelease(pcVar5);
            pcVar3 = pcVar5;
            func_0x00010bdc3520(pcVar5);
          }
          _objc_release(pcVar5);
          func_0x000107c278b8(auStack_190,pcVar3);
          uStack_1c8 = 0;
          uStack_1c0 = 0;
          uStack_1b8 = 0;
          func_0x000107c27984(&uStack_1c8,auStack_1a8,&lStack_178,2);
          (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110ab5608,&uStack_1c8,param_5);
          puStack_1b0 = &uStack_1c8;
          func_0x000107c278ac(&puStack_1b0);
          lVar25 = 0;
          do {
            if ((&cStack_179)[lVar25] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_190 + lVar25));
            }
            lVar25 = lVar25 + -0x18;
          } while (lVar25 != -0x30);
        }
      }
      _objc_release(pcVar5);
      pcVar3 = pcVar2;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar5);
      if (cStack_191 < '\0') {
        __ZdlPv(auStack_1a8[0]);
      }
      _objc_release(pcVar5);
      _objc_release(pcVar2);
      __Unwind_Resume();
      lVar25 = (long)_DAT_112777e4c;
      pcVar2 = pcVar3 + lVar25;
      _objc_loadWeakRetained();
      pcVar5 = pcVar2;
      func_0x00010c0f9c40();
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = pcVar4;
      func_0x00010c0831a0();
      _objc_release(pcVar4);
      _objc_release(pcVar5);
      _objc_release(pcVar2);
      if ((int)pcVar6 == 0) {
        param_3 = PTR_PTR_1126daee8;
        _objc_alloc();
        pcVar2 = pcVar3 + _DAT_112777e54;
        _objc_loadWeakRetained(pcVar2);
        pcVar4 = pcVar2;
        func_0x00010c15ada0();
        _objc_retainAutoreleasedReturnValue();
        pcVar5 = pcVar3 + _DAT_112777e58;
        _objc_loadWeakRetained(pcVar5);
        pcVar6 = pcVar5;
        func_0x00010bf89340();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c044160();
        _objc_release(pcVar6);
        _objc_release(pcVar5);
        _objc_release(pcVar4);
        _objc_release(pcVar2);
        pcVar7 = PTR_PTR_1126daef0;
        _objc_alloc();
        pcVar2 = pcVar3 + _DAT_112777e5c;
        _objc_loadWeakRetained();
        pcVar8 = pcVar2;
        func_0x00010c293fc0();
        _objc_retainAutoreleasedReturnValue();
        pcVar9 = pcVar8;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        pcVar5 = pcVar3 + _DAT_112777e60;
        _objc_loadWeakRetained();
        pcVar10 = pcVar5;
        func_0x00010bf70800();
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = pcVar3 + _DAT_112777e64;
        _objc_loadWeakRetained();
        pcVar11 = pcVar4;
        func_0x00010bfcdfa0();
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = pcVar3 + _DAT_112777e68;
        _objc_loadWeakRetained(pcVar6);
        pcVar12 = pcVar6;
        func_0x00010c127ba0();
        _objc_retainAutoreleasedReturnValue();
        pcVar13 = pcVar3 + _DAT_112777e6c;
        _objc_loadWeakRetained(pcVar13);
        pcVar14 = pcVar13;
        func_0x00010c089460();
        _objc_retainAutoreleasedReturnValue();
        pcVar15 = pcVar3 + _DAT_112777e70;
        _objc_loadWeakRetained(pcVar15);
        pcVar16 = pcVar15;
        func_0x00010bf10d00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0272a0();
        _objc_release(pcVar16);
        _objc_release(pcVar15);
        _objc_release(pcVar14);
        _objc_release(pcVar13);
        _objc_release(pcVar12);
        _objc_release(pcVar6);
        _objc_release(pcVar11);
        _objc_release(pcVar4);
        _objc_release(pcVar10);
        _objc_release(pcVar5);
        _objc_release(pcVar9);
        _objc_release(pcVar8);
        _objc_release(pcVar2);
        puVar17 = PTR_PTR_1126daef8;
        _objc_alloc();
        lVar23 = (long)_DAT_112777e50;
        pcVar2 = pcVar3 + lVar23;
        _objc_loadWeakRetained();
        pcVar10 = pcVar2;
        func_0x00010c27ece0();
        _objc_retainAutoreleasedReturnValue();
        pcVar5 = pcVar3 + lVar25;
        _objc_loadWeakRetained();
        pcVar11 = pcVar5;
        func_0x00010c0f9c40();
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = pcVar3 + _DAT_112777e78;
        _objc_loadWeakRetained();
        pcVar6 = pcVar3 + _DAT_112777e7c;
        _objc_loadWeakRetained();
        pcVar12 = pcVar6;
        func_0x00010bf45e20();
        _objc_retainAutoreleasedReturnValue();
        pcVar14 = pcVar12;
        func_0x00010bf28fa0();
        _objc_retainAutoreleasedReturnValue();
        pcVar13 = pcVar3 + _DAT_112777e80;
        _objc_loadWeakRetained();
        pcVar16 = pcVar13;
        func_0x00010c295440();
        _objc_retainAutoreleasedReturnValue();
        pcVar15 = pcVar3 + _DAT_112777e84;
        _objc_loadWeakRetained();
        pcVar18 = pcVar15;
        func_0x00010bf398e0();
        _objc_retainAutoreleasedReturnValue();
        lVar25 = (long)_DAT_112777e88;
        pcVar8 = pcVar3 + lVar25;
        _objc_loadWeakRetained();
        pcVar19 = pcVar8;
        func_0x00010bf05440();
        _objc_retainAutoreleasedReturnValue();
        pcVar9 = pcVar3 + lVar25;
        _objc_loadWeakRetained();
        pcVar20 = pcVar9;
        func_0x00010bf1b8e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0570a0();
        _objc_release(pcVar20);
        _objc_release(pcVar9);
        _objc_release(pcVar19);
        _objc_release(pcVar8);
        _objc_release(pcVar18);
        _objc_release(pcVar15);
        _objc_release(pcVar16);
        _objc_release(pcVar13);
        _objc_release(pcVar14);
        _objc_release(pcVar12);
        _objc_release(pcVar6);
        _objc_release(pcVar4);
        _objc_release(pcVar11);
        _objc_release(pcVar5);
        _objc_release(pcVar10);
        _objc_release(pcVar2);
        puVar21 = PTR_PTR_1126aeb48;
        _objc_alloc();
        func_0x00010c0404c0();
        puVar22 = PTR_PTR_1126daf00;
        _objc_alloc();
        pcVar2 = pcVar3 + lVar23;
        _objc_loadWeakRetained(pcVar2);
        pcVar5 = pcVar2;
        func_0x00010bf6b020();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c040660();
        lVar25 = (long)_DAT_112777e8c;
        uVar24 = *(undefined8 *)(pcVar3 + lVar25);
        *(undefined **)(pcVar3 + lVar25) = puVar22;
        _objc_release(uVar24);
        _objc_release(pcVar5);
        _objc_release(pcVar2);
        func_0x00010bf192c0(*(undefined8 *)(pcVar3 + lVar25));
        _objc_release(puVar21);
        _objc_release(puVar17);
      }
      else {
        param_3 = pcVar3 + _DAT_112777e50;
        _objc_loadWeakRetained(param_3);
        pcVar7 = param_3;
        func_0x00010bf6b020();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1afe0();
      }
      _objc_release(pcVar7);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108b9c0f8; end: 108b9c2ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b9c0f8(double param_1,long param_2,char *param_3,char *param_4,long param_5)

{
  char *pcVar1;
  long *plVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  undefined *puVar17;
  char *pcVar18;
  char *pcVar19;
  char *pcVar20;
  undefined *puVar21;
  undefined *puVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar4 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar3 = param_3;
  _objc_retain();
  if (param_2 != 0) {
    _objc_retain(param_3);
    plVar2 = *(long **)(param_2 + 8);
    pcVar3 = "\x01";
    (**(code **)(*plVar2 + 0x28))();
    if ((int)plVar2 != 0) {
      plVar2 = *(long **)(param_2 + 8);
      _objc_retain(param_3);
      if (param_3 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x000107c278b8(auStack_60,pcVar3);
      acStack_80[0] = '\0';
      acStack_80[1] = '\0';
      acStack_80[2] = '\0';
      acStack_80[3] = '\0';
      acStack_80[4] = '\0';
      acStack_80[5] = '\0';
      acStack_80[6] = '\0';
      acStack_80[7] = '\0';
      acStack_80[8] = '\0';
      acStack_80[9] = '\0';
      acStack_80[10] = '\0';
      acStack_80[0xb] = '\0';
      acStack_80[0xc] = '\0';
      acStack_80[0xd] = '\0';
      acStack_80[0xe] = '\0';
      acStack_80[0xf] = '\0';
      acStack_80[0x10] = '\0';
      acStack_80[0x11] = '\0';
      acStack_80[0x12] = '\0';
      acStack_80[0x13] = '\0';
      acStack_80[0x14] = '\0';
      acStack_80[0x15] = '\0';
      acStack_80[0x16] = '\0';
      acStack_80[0x17] = '\0';
      func_0x000107c27984(acStack_80,auStack_60,&lStack_48,1);
      param_5 = (long)(param_1 * 1000.0);
      pcVar3 = "\x01";
      (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110ab55b8,acStack_80,param_5);
      puStack_68 = acStack_80;
      func_0x000107c278ac(&puStack_68);
      param_4 = pcVar4;
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
        param_4 = pcVar4;
      }
    }
    pcVar1 = param_3;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_3);
    _objc_release(param_3);
    _objc_release(param_3);
    __Unwind_Resume();
    lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(pcVar3);
    _objc_retain(param_4);
    if (pcVar1 != (char *)0x0) {
      plVar2 = *(long **)(pcVar1 + 8);
      (**(code **)(*plVar2 + 0x28))(plVar2,&UNK_110ab5608);
      if ((int)plVar2 != 0) {
        plVar2 = *(long **)(pcVar1 + 8);
        _objc_retain(pcVar3);
        if (pcVar3 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar3;
          _objc_retainAutorelease(pcVar3);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar3);
        func_0x000107c278b8(auStack_f8,pcVar1);
        _objc_retain(param_4);
        if (param_4 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(param_4);
          pcVar1 = param_4;
          func_0x00010bdc3520(param_4);
        }
        _objc_release(param_4);
        func_0x000107c278b8(auStack_e0,pcVar1);
        uStack_118 = 0;
        uStack_110 = 0;
        uStack_108 = 0;
        func_0x000107c27984(&uStack_118,auStack_f8,&lStack_c8,2);
        (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110ab5608,&uStack_118,param_5);
        puStack_100 = &uStack_118;
        func_0x000107c278ac(&puStack_100);
        lVar25 = 0;
        do {
          if ((&cStack_c9)[lVar25] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar25));
          }
          lVar25 = lVar25 + -0x18;
        } while (lVar25 != -0x30);
      }
    }
    _objc_release(param_4);
    pcVar1 = pcVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(param_4);
    if (cStack_e1 < '\0') {
      __ZdlPv(auStack_f8[0]);
    }
    _objc_release(param_4);
    _objc_release(pcVar3);
    __Unwind_Resume();
    lVar25 = (long)_DAT_112777e4c;
    pcVar3 = pcVar1 + lVar25;
    _objc_loadWeakRetained();
    pcVar4 = pcVar3;
    func_0x00010c0f9c40();
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    pcVar6 = pcVar5;
    func_0x00010c0831a0();
    _objc_release(pcVar5);
    _objc_release(pcVar4);
    _objc_release(pcVar3);
    if ((int)pcVar6 == 0) {
      param_3 = PTR_PTR_1126daee8;
      _objc_alloc();
      pcVar3 = pcVar1 + _DAT_112777e54;
      _objc_loadWeakRetained(pcVar3);
      pcVar5 = pcVar3;
      func_0x00010c15ada0();
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar1 + _DAT_112777e58;
      _objc_loadWeakRetained(pcVar4);
      pcVar6 = pcVar4;
      func_0x00010bf89340();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c044160();
      _objc_release(pcVar6);
      _objc_release(pcVar4);
      _objc_release(pcVar5);
      _objc_release(pcVar3);
      pcVar7 = PTR_PTR_1126daef0;
      _objc_alloc();
      pcVar3 = pcVar1 + _DAT_112777e5c;
      _objc_loadWeakRetained();
      pcVar8 = pcVar3;
      func_0x00010c293fc0();
      _objc_retainAutoreleasedReturnValue();
      pcVar9 = pcVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar1 + _DAT_112777e60;
      _objc_loadWeakRetained();
      pcVar10 = pcVar4;
      func_0x00010bf70800();
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = pcVar1 + _DAT_112777e64;
      _objc_loadWeakRetained();
      pcVar11 = pcVar5;
      func_0x00010bfcdfa0();
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = pcVar1 + _DAT_112777e68;
      _objc_loadWeakRetained(pcVar6);
      pcVar12 = pcVar6;
      func_0x00010c127ba0();
      _objc_retainAutoreleasedReturnValue();
      pcVar13 = pcVar1 + _DAT_112777e6c;
      _objc_loadWeakRetained(pcVar13);
      pcVar14 = pcVar13;
      func_0x00010c089460();
      _objc_retainAutoreleasedReturnValue();
      pcVar15 = pcVar1 + _DAT_112777e70;
      _objc_loadWeakRetained(pcVar15);
      pcVar16 = pcVar15;
      func_0x00010bf10d00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0272a0();
      _objc_release(pcVar16);
      _objc_release(pcVar15);
      _objc_release(pcVar14);
      _objc_release(pcVar13);
      _objc_release(pcVar12);
      _objc_release(pcVar6);
      _objc_release(pcVar11);
      _objc_release(pcVar5);
      _objc_release(pcVar10);
      _objc_release(pcVar4);
      _objc_release(pcVar9);
      _objc_release(pcVar8);
      _objc_release(pcVar3);
      puVar17 = PTR_PTR_1126daef8;
      _objc_alloc();
      lVar23 = (long)_DAT_112777e50;
      pcVar3 = pcVar1 + lVar23;
      _objc_loadWeakRetained();
      pcVar10 = pcVar3;
      func_0x00010c27ece0();
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar1 + lVar25;
      _objc_loadWeakRetained();
      pcVar11 = pcVar4;
      func_0x00010c0f9c40();
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = pcVar1 + _DAT_112777e78;
      _objc_loadWeakRetained();
      pcVar6 = pcVar1 + _DAT_112777e7c;
      _objc_loadWeakRetained();
      pcVar12 = pcVar6;
      func_0x00010bf45e20();
      _objc_retainAutoreleasedReturnValue();
      pcVar14 = pcVar12;
      func_0x00010bf28fa0();
      _objc_retainAutoreleasedReturnValue();
      pcVar13 = pcVar1 + _DAT_112777e80;
      _objc_loadWeakRetained();
      pcVar16 = pcVar13;
      func_0x00010c295440();
      _objc_retainAutoreleasedReturnValue();
      pcVar15 = pcVar1 + _DAT_112777e84;
      _objc_loadWeakRetained();
      pcVar18 = pcVar15;
      func_0x00010bf398e0();
      _objc_retainAutoreleasedReturnValue();
      lVar25 = (long)_DAT_112777e88;
      pcVar8 = pcVar1 + lVar25;
      _objc_loadWeakRetained();
      pcVar19 = pcVar8;
      func_0x00010bf05440();
      _objc_retainAutoreleasedReturnValue();
      pcVar9 = pcVar1 + lVar25;
      _objc_loadWeakRetained();
      pcVar20 = pcVar9;
      func_0x00010bf1b8e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0570a0();
      _objc_release(pcVar20);
      _objc_release(pcVar9);
      _objc_release(pcVar19);
      _objc_release(pcVar8);
      _objc_release(pcVar18);
      _objc_release(pcVar15);
      _objc_release(pcVar16);
      _objc_release(pcVar13);
      _objc_release(pcVar14);
      _objc_release(pcVar12);
      _objc_release(pcVar6);
      _objc_release(pcVar5);
      _objc_release(pcVar11);
      _objc_release(pcVar4);
      _objc_release(pcVar10);
      _objc_release(pcVar3);
      puVar21 = PTR_PTR_1126aeb48;
      _objc_alloc();
      func_0x00010c0404c0();
      puVar22 = PTR_PTR_1126daf00;
      _objc_alloc();
      pcVar3 = pcVar1 + lVar23;
      _objc_loadWeakRetained(pcVar3);
      pcVar4 = pcVar3;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c040660();
      lVar25 = (long)_DAT_112777e8c;
      uVar24 = *(undefined8 *)(pcVar1 + lVar25);
      *(undefined **)(pcVar1 + lVar25) = puVar22;
      _objc_release(uVar24);
      _objc_release(pcVar4);
      _objc_release(pcVar3);
      func_0x00010bf192c0(*(undefined8 *)(pcVar1 + lVar25));
      _objc_release(puVar21);
      _objc_release(puVar17);
    }
    else {
      param_3 = pcVar1 + _DAT_112777e50;
      _objc_loadWeakRetained(param_3);
      pcVar7 = param_3;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1afe0();
    }
    _objc_release(pcVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108b9c2ac; end: 108b9c4fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b9c2ac(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  undefined *puVar18;
  char *pcVar19;
  char *pcVar20;
  char *pcVar21;
  undefined *puVar22;
  undefined *puVar23;
  long lVar24;
  undefined8 uVar25;
  long lVar26;
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
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110ab5608);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      _objc_retain(param_2);
      if (param_2 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = param_2;
        _objc_retainAutorelease(param_2);
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      func_0x000107c278b8(auStack_78,pcVar2);
      _objc_retain(param_3);
      if (param_3 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(param_3);
        pcVar2 = param_3;
        func_0x00010bdc3520(param_3);
      }
      _objc_release(param_3);
      func_0x000107c278b8(auStack_60,pcVar2);
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110ab5608,&uStack_98,param_4);
      puStack_80 = &uStack_98;
      func_0x000107c278ac(&puStack_80);
      lVar26 = 0;
      do {
        if ((&cStack_49)[lVar26] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar26));
        }
        lVar26 = lVar26 + -0x18;
      } while (lVar26 != -0x30);
    }
  }
  _objc_release(param_3);
  pcVar2 = param_2;
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
  __Unwind_Resume();
  lVar26 = (long)_DAT_112777e4c;
  pcVar3 = pcVar2 + lVar26;
  _objc_loadWeakRetained();
  pcVar4 = pcVar3;
  func_0x00010c0f9c40();
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  pcVar6 = pcVar5;
  func_0x00010c0831a0();
  _objc_release(pcVar5);
  _objc_release(pcVar4);
  _objc_release(pcVar3);
  if ((int)pcVar6 == 0) {
    pcVar3 = PTR_PTR_1126daee8;
    _objc_alloc();
    pcVar4 = pcVar2 + _DAT_112777e54;
    _objc_loadWeakRetained(pcVar4);
    pcVar6 = pcVar4;
    func_0x00010c15ada0();
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar2 + _DAT_112777e58;
    _objc_loadWeakRetained(pcVar5);
    pcVar7 = pcVar5;
    func_0x00010bf89340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c044160();
    _objc_release(pcVar7);
    _objc_release(pcVar5);
    _objc_release(pcVar6);
    _objc_release(pcVar4);
    pcVar8 = PTR_PTR_1126daef0;
    _objc_alloc();
    pcVar4 = pcVar2 + _DAT_112777e5c;
    _objc_loadWeakRetained();
    pcVar9 = pcVar4;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    pcVar10 = pcVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar2 + _DAT_112777e60;
    _objc_loadWeakRetained();
    pcVar11 = pcVar5;
    func_0x00010bf70800();
    _objc_retainAutoreleasedReturnValue();
    pcVar6 = pcVar2 + _DAT_112777e64;
    _objc_loadWeakRetained();
    pcVar12 = pcVar6;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    pcVar7 = pcVar2 + _DAT_112777e68;
    _objc_loadWeakRetained(pcVar7);
    pcVar13 = pcVar7;
    func_0x00010c127ba0();
    _objc_retainAutoreleasedReturnValue();
    pcVar14 = pcVar2 + _DAT_112777e6c;
    _objc_loadWeakRetained(pcVar14);
    pcVar15 = pcVar14;
    func_0x00010c089460();
    _objc_retainAutoreleasedReturnValue();
    pcVar16 = pcVar2 + _DAT_112777e70;
    _objc_loadWeakRetained(pcVar16);
    pcVar17 = pcVar16;
    func_0x00010bf10d00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0272a0();
    _objc_release(pcVar17);
    _objc_release(pcVar16);
    _objc_release(pcVar15);
    _objc_release(pcVar14);
    _objc_release(pcVar13);
    _objc_release(pcVar7);
    _objc_release(pcVar12);
    _objc_release(pcVar6);
    _objc_release(pcVar11);
    _objc_release(pcVar5);
    _objc_release(pcVar10);
    _objc_release(pcVar9);
    _objc_release(pcVar4);
    puVar18 = PTR_PTR_1126daef8;
    _objc_alloc();
    lVar24 = (long)_DAT_112777e50;
    pcVar4 = pcVar2 + lVar24;
    _objc_loadWeakRetained();
    pcVar11 = pcVar4;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar2 + lVar26;
    _objc_loadWeakRetained();
    pcVar12 = pcVar5;
    func_0x00010c0f9c40();
    _objc_retainAutoreleasedReturnValue();
    pcVar6 = pcVar2 + _DAT_112777e78;
    _objc_loadWeakRetained();
    pcVar7 = pcVar2 + _DAT_112777e7c;
    _objc_loadWeakRetained();
    pcVar13 = pcVar7;
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    pcVar15 = pcVar13;
    func_0x00010bf28fa0();
    _objc_retainAutoreleasedReturnValue();
    pcVar14 = pcVar2 + _DAT_112777e80;
    _objc_loadWeakRetained();
    pcVar17 = pcVar14;
    func_0x00010c295440();
    _objc_retainAutoreleasedReturnValue();
    pcVar16 = pcVar2 + _DAT_112777e84;
    _objc_loadWeakRetained();
    pcVar19 = pcVar16;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = (long)_DAT_112777e88;
    pcVar9 = pcVar2 + lVar26;
    _objc_loadWeakRetained();
    pcVar20 = pcVar9;
    func_0x00010bf05440();
    _objc_retainAutoreleasedReturnValue();
    pcVar10 = pcVar2 + lVar26;
    _objc_loadWeakRetained();
    pcVar21 = pcVar10;
    func_0x00010bf1b8e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0570a0();
    _objc_release(pcVar21);
    _objc_release(pcVar10);
    _objc_release(pcVar20);
    _objc_release(pcVar9);
    _objc_release(pcVar19);
    _objc_release(pcVar16);
    _objc_release(pcVar17);
    _objc_release(pcVar14);
    _objc_release(pcVar15);
    _objc_release(pcVar13);
    _objc_release(pcVar7);
    _objc_release(pcVar6);
    _objc_release(pcVar12);
    _objc_release(pcVar5);
    _objc_release(pcVar11);
    _objc_release(pcVar4);
    puVar22 = PTR_PTR_1126aeb48;
    _objc_alloc();
    func_0x00010c0404c0();
    puVar23 = PTR_PTR_1126daf00;
    _objc_alloc();
    pcVar4 = pcVar2 + lVar24;
    _objc_loadWeakRetained(pcVar4);
    pcVar5 = pcVar4;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c040660();
    lVar26 = (long)_DAT_112777e8c;
    uVar25 = *(undefined8 *)(pcVar2 + lVar26);
    *(undefined **)(pcVar2 + lVar26) = puVar23;
    _objc_release(uVar25);
    _objc_release(pcVar5);
    _objc_release(pcVar4);
    func_0x00010bf192c0(*(undefined8 *)(pcVar2 + lVar26));
    _objc_release(puVar22);
    _objc_release(puVar18);
  }
  else {
    pcVar3 = pcVar2 + _DAT_112777e50;
    _objc_loadWeakRetained(pcVar3);
    pcVar8 = pcVar3;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1afe0();
  }
  _objc_release(pcVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar3);
  return;
}



/* Entry: 108b9c4fc; end: 108b9ca4f; -[SCBitmojiCameraPermissionRequestEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b9c4fc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  
  lVar23 = (long)_DAT_112777e4c;
  lVar1 = param_1 + lVar23;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0f9c40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0831a0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar4 == 0) {
    puVar5 = PTR_PTR_1126daee8;
    _objc_alloc();
    lVar1 = param_1 + _DAT_112777e54;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar1;
    func_0x00010c15ada0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + _DAT_112777e58;
    _objc_loadWeakRetained(lVar2);
    lVar4 = lVar2;
    func_0x00010bf89340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c044160(puVar5,param_2,lVar3,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar3);
    _objc_release(lVar1);
    puVar6 = PTR_PTR_1126daef0;
    _objc_alloc();
    lVar1 = param_1 + _DAT_112777e5c;
    _objc_loadWeakRetained();
    lVar22 = lVar1;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar22;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + _DAT_112777e60;
    _objc_loadWeakRetained();
    lVar7 = lVar2;
    func_0x00010bf70800();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_112777e64;
    _objc_loadWeakRetained();
    lVar8 = lVar3;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + _DAT_112777e68;
    _objc_loadWeakRetained(lVar4);
    lVar9 = lVar4;
    func_0x00010c127ba0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1 + _DAT_112777e6c;
    _objc_loadWeakRetained(lVar10);
    lVar11 = lVar10;
    func_0x00010c089460();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1 + _DAT_112777e70;
    _objc_loadWeakRetained(lVar12);
    lVar13 = lVar12;
    func_0x00010bf10d00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0272a0(puVar6,param_2,lVar20,lVar7,lVar8,lVar9,lVar11,lVar13);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar4);
    _objc_release(lVar8);
    _objc_release(lVar3);
    _objc_release(lVar7);
    _objc_release(lVar2);
    _objc_release(lVar20);
    _objc_release(lVar22);
    _objc_release(lVar1);
    puVar14 = PTR_PTR_1126daef8;
    _objc_alloc();
    lVar20 = (long)_DAT_112777e50;
    lVar1 = param_1 + lVar20;
    _objc_loadWeakRetained();
    lVar7 = lVar1;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = param_1 + lVar23;
    _objc_loadWeakRetained();
    lVar8 = lVar23;
    func_0x00010c0f9c40();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(param_1 + _DAT_112777e74);
    lVar2 = param_1 + _DAT_112777e78;
    _objc_loadWeakRetained();
    lVar3 = param_1 + _DAT_112777e7c;
    _objc_loadWeakRetained();
    lVar9 = lVar3;
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar9;
    func_0x00010bf28fa0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + _DAT_112777e80;
    _objc_loadWeakRetained();
    lVar13 = lVar4;
    func_0x00010c295440();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1 + _DAT_112777e84;
    _objc_loadWeakRetained();
    lVar15 = lVar10;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = (long)_DAT_112777e88;
    lVar12 = param_1 + lVar22;
    _objc_loadWeakRetained();
    lVar16 = lVar12;
    func_0x00010bf05440();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = param_1 + lVar22;
    _objc_loadWeakRetained();
    lVar17 = lVar22;
    func_0x00010bf1b8e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0570a0(puVar14,param_2,lVar7,lVar8,puVar5,puVar6,uVar21,lVar2,lVar11,lVar13,lVar15,
                        lVar16,lVar17);
    _objc_release(lVar17);
    _objc_release(lVar22);
    _objc_release(lVar16);
    _objc_release(lVar12);
    _objc_release(lVar15);
    _objc_release(lVar10);
    _objc_release(lVar13);
    _objc_release(lVar4);
    _objc_release(lVar11);
    _objc_release(lVar9);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar8);
    _objc_release(lVar23);
    _objc_release(lVar7);
    _objc_release(lVar1);
    puVar18 = PTR_PTR_1126aeb48;
    _objc_alloc();
    func_0x00010c0404c0();
    puVar19 = PTR_PTR_1126daf00;
    _objc_alloc();
    lVar20 = param_1 + lVar20;
    _objc_loadWeakRetained(lVar20);
    lVar1 = lVar20;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c040660(puVar19,param_2,puVar18,lVar1);
    lVar23 = (long)_DAT_112777e8c;
    uVar21 = *(undefined8 *)(param_1 + lVar23);
    *(undefined **)(param_1 + lVar23) = puVar19;
    _objc_release(uVar21);
    _objc_release(lVar1);
    _objc_release(lVar20);
    func_0x00010bf192c0(*(undefined8 *)(param_1 + lVar23));
    _objc_release(puVar18);
    _objc_release(puVar14);
  }
  else {
    puVar5 = (undefined *)(param_1 + _DAT_112777e50);
    _objc_loadWeakRetained(puVar5);
    puVar6 = puVar5;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1afe0();
  }
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 108b9ca50; end: 108b9cb43; -[SCBitmojiCameraPermissionRequestEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b9ca50(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112777e74,0);
  _objc_destroyWeak(param_1 + _DAT_112777e78);
  _objc_destroyWeak(param_1 + _DAT_112777e88);
  _objc_destroyWeak(param_1 + _DAT_112777e70);
  _objc_destroyWeak(param_1 + _DAT_112777e84);
  _objc_destroyWeak(param_1 + _DAT_112777e80);
  _objc_destroyWeak(param_1 + _DAT_112777e7c);
  _objc_destroyWeak(param_1 + _DAT_112777e60);
  _objc_destroyWeak(param_1 + _DAT_112777e68);
  _objc_destroyWeak(param_1 + _DAT_112777e6c);
  _objc_destroyWeak(param_1 + _DAT_112777e64);
  _objc_destroyWeak(param_1 + _DAT_112777e5c);
  _objc_destroyWeak(param_1 + _DAT_112777e58);
  _objc_destroyWeak(param_1 + _DAT_112777e54);
  _objc_destroyWeak(param_1 + _DAT_112777e4c);
  _objc_destroyWeak(param_1 + _DAT_112777e50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112777e8c,0);
  return;
}



/* Entry: 108b9cb44; end: 108b9cc97; -[SCDefaultBitmojiCameraPermissionRequestLogger initWithLogger:deviceInfoProvider:grapheneRegistry:registrationFlowUUIDService:loginInfoRepository:authenticationSessionInfoProvider:] */

undefined1 *
FUN_108b9cb44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126fd5a8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108b9cc98; end: 108b9ce0f; -[SCDefaultBitmojiCameraPermissionRequestLogger logBitmojiCameraPermissionRequestPageView] */

void FUN_108b9cc98(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  func_0x00010be50920();
  puVar1 = PTR_PTR_1126b79b8;
  _objc_opt_new(PTR_PTR_1126b79b8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bdc1fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0c20(puVar1,param_2,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar2);
  func_0x00010c1d7e80(puVar1,param_2,0x59);
  func_0x00010be57940(param_1,param_2,puVar1);
  puVar3 = PTR_PTR_1126daf08;
  func_0x00010c0b4320(PTR_PTR_1126daf08);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010be62ec0(param_1);
  puVar5 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110daedb8,lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar4);
  uVar6 = 0x59;
  func_0x00010bc9107c(0x59);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar5;
  func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110daedd8,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar6);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf1b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108b9ce10; end: 108b9ce5f; -[SCDefaultBitmojiCameraPermissionRequestLogger logUserContinueBitmojiCameraPermissionRequest] */

void FUN_108b9ce10(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126daf10;
  _objc_opt_new(PTR_PTR_1126daf10);
  func_0x00010c1d7e80();
  func_0x00010c161620(puVar1,param_2,8);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108b9ce60; end: 108b9ceaf; -[SCDefaultBitmojiCameraPermissionRequestLogger logUserSkipBitmojiCameraPermissionRequest] */

void FUN_108b9ce60(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126daf10;
  _objc_opt_new(PTR_PTR_1126daf10);
  func_0x00010c1d7e80();
  func_0x00010c161620(puVar1,param_2,3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108b9ceb0; end: 108b9ceff; -[SCDefaultBitmojiCameraPermissionRequestLogger logUserLinkExistingBitmojiCameraPermissionRequest] */

void FUN_108b9ceb0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126daf10;
  _objc_opt_new(PTR_PTR_1126daf10);
  func_0x00010c1d7e80();
  func_0x00010c161620(puVar1,param_2,7);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108b9cf00; end: 108b9cf73; -[SCDefaultBitmojiCameraPermissionRequestLogger logCameraPrePromptAction:] */

void FUN_108b9cf00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af6e0;
  _objc_opt_new(PTR_PTR_1126af6e0);
  func_0x00010c1dab80();
  func_0x00010c1dab60(puVar1,param_2,(uint)param_3 ^ 1);
  func_0x00010c160cc0(puVar1,param_2,param_3);
  func_0x00010c1d7e80(puVar1,param_2,0x59);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108b9cf74; end: 108b9cfe7; -[SCDefaultBitmojiCameraPermissionRequestLogger logSystemLevelCameraPermissionAction:] */

void FUN_108b9cf74(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b6df0;
  _objc_opt_new(PTR_PTR_1126b6df0);
  func_0x00010c1dab80();
  func_0x00010c1dab00(puVar1,param_2,param_3 & 0xffffffff);
  func_0x00010c160cc0(puVar1,param_2,param_3);
  func_0x00010c1d7e80(puVar1,param_2,0x59);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108b9cfe8; end: 108b9d117; -[SCDefaultBitmojiCameraPermissionRequestLogger _logRegistrationEvent:] */

void FUN_108b9cfe8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_setRegistrationSessionId__112658078);
  if ((uVar1 & 1) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfcb960();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8f20(param_3);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  uVar1 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_setClientAuthenticationId__11263ccc0);
  if ((uVar1 & 1) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8f20(param_3);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd8b00();
  func_0x00010bea44e0(param_1);
  _objc_release(uVar3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108b9d118; end: 108b9d28b; -[SCDefaultBitmojiCameraPermissionRequestLogger _logBitmojiCameraPermissionRequestPageReach] */

void FUN_108b9d118(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126daf18;
  _objc_opt_new(PTR_PTR_1126daf18);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bdc1fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0c20(puVar1,param_2,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar2);
  func_0x00010c1d7e80(puVar1,param_2,0x59);
  func_0x00010be57940(param_1,param_2,puVar1);
  puVar3 = PTR_PTR_1126daf08;
  func_0x00010c23c500(PTR_PTR_1126daf08);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010be62ec0(param_1);
  puVar5 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110daedb8,lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar4);
  uVar6 = 0x59;
  func_0x00010bc9107c(0x59);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar5;
  func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110daedd8,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar6);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf1b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108b9d28c; end: 108b9d2e7; -[SCDefaultBitmojiCameraPermissionRequestLogger _newDeviceDimensionValue] */

undefined ** FUN_108b9d28c(long param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfd8b00();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  if ((int)uVar3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  }
  _objc_retain(ppuVar1);
  _objc_release(uVar2);
  return ppuVar1;
}



/* Entry: 108b9d2e8; end: 108b9d3b3; -[SCDefaultBitmojiCameraPermissionRequestLogger _setHasLoggedInBeforeOnEvent:withValue:] */

void FUN_108b9d2e8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_setHasLoggedInBefore__112647308);
  if ((uVar1 & 1) != 0) {
    uVar1 = param_3;
    func_0x00010c0cca80(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSInvocation_1126b71d0;
    func_0x00010c06abc0(PTR__OBJC_CLASS___NSInvocation_1126b71d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fbb60();
    func_0x00010c2121a0(puVar2);
    func_0x00010c16a2c0(puVar2);
    func_0x00010c06abe0(puVar2);
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108b9d3b4; end: 108b9d413; -[SCDefaultBitmojiCameraPermissionRequestLogger .cxx_destruct] */

void FUN_108b9d3b4(long param_1)

{
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



/* Entry: 108b9d414; end: 108b9d503; -[SCBitmojiAvatarImagesProvider initWithSelfieFetcher:resourceDownloader:] */

undefined1 *
FUN_108b9d414(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fd5b0;
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
    puVar3 = PTR_PTR_1126ae560;
    _objc_alloc();
    func_0x00010c01bf20();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    func_0x00010be0fd80(puVar1);
    func_0x00010be13ec0(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108b9d504; end: 108b9d50b; -[SCBitmojiAvatarImagesProvider avatarImages] */

void FUN_108b9d504(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbc3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_future_1125ccaa0);
  return;
}



/* Entry: 108b9d50c; end: 108b9d513; -[SCBitmojiAvatarImagesProvider silhouetteImage] */

void FUN_108b9d50c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbc3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_future_1125ccaa0);
  return;
}



/* Entry: 108b9d514; end: 108b9d767; -[SCBitmojiAvatarImagesProvider _fetchAvatarImages] */

void FUN_108b9d514(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110dd70b8;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110ee9878;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110ee98b8;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110ee98f8;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110ee9938;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_70,5);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_98 = &PTR____CFConstantStringClassReference_110ee9858;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110ee9898;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110ee98d8;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110ee9918;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110ee9958;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x3032000000;
  pcStack_b0 = FUN_108b9d768;
  uStack_a8 = 0x108b9d778;
  func_0x00010bf529e0(puVar1);
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0;
  puStack_a0 = puVar3;
  _dispatch_queue_attr_make_with_qos_class(0,0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = &UNK_10f5047a6;
  _dispatch_queue_create(&UNK_10f5047a6,uVar4);
  _objc_retain(puVar2);
  _objc_retain(puVar1);
  _objc_retain(puVar3);
  func_0x00010bf97e80(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(uVar4);
  __Block_object_dispose(&uStack_c8,8);
  _objc_release(puStack_a0);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = 8;
  __Block_object_dispose(&uStack_c8);
  __Unwind_Resume();
  *(undefined8 *)(puVar1 + 0x28) = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = 0;
  return;
}


