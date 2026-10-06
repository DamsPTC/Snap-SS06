/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1059addbc; end: 1059adde3; -[SCProcessedNotificationDb getConn] */

void FUN_1059addbc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059adde4; end: 1059ade6b; -[SCProcessedNotificationDb initWithSqliteConnection:] */

undefined1 * FUN_1059adde4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eb260;
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



/* Entry: 1059ade6c; end: 1059aded7; -[SCProcessedNotificationDb .cxx_destruct] */

void FUN_1059ade6c(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059aded8; end: 1059adee3; -[SCProcessedNotificationDb .cxx_construct] */

void FUN_1059aded8(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 1059adee4; end: 1059ae01f;  */

void FUN_1059adee4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      lVar1 = param_1 + 0x10;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10ddc80a8,0x7c);
      func_0x0001005edcd4();
      func_0x0001005edcd4(lVar1,2,param_3);
      func_0x0001005fcb64(lVar1,FUN_1059ae020);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1059ae020; end: 1059ae093;  */

void FUN_1059ae020(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c0958;
  _objc_alloc(PTR_PTR_1126c0958);
  func_0x0001005fdab8(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001059ae4ec(puVar1,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059ae094; end: 1059ae22b;  */

void FUN_1059ae094(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  long lVar2;
  int iStack_54;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = param_1 + 0x18;
      func_0x0001005fc990(lVar2,*(undefined8 *)(param_1 + 8),&UNK_10ddc8125,0x78);
      iStack_54 = 1;
      func_0x0001005fcac0();
      func_0x0001005fcac0(lVar2,&iStack_54,param_3);
      iVar1 = iStack_54;
      func_0x0001005edcd4(lVar2,iStack_54,param_4);
      func_0x0001005edcd4(lVar2,iVar1 + 1,param_5);
      func_0x00010b5ef0d0(lVar2);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1059ae22c; end: 1059ae333;  */

void FUN_1059ae22c(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x20;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10ddc819e,0x4c);
      func_0x0001005edcd4();
      func_0x00010b5ef0d0(lVar1);
    }
  }
  return;
}



/* Entry: 1059ae334; end: 1059ae357; -[SCProcessedNotifications copyWithZone:] */

undefined8 FUN_1059ae334(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1059ae358; end: 1059ae3e3; -[SCProcessedNotifications hash] */

long * FUN_1059ae358(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  plVar3 = &lStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  lStack_50 = -lVar5;
  if (-1 < lVar5) {
    lStack_50 = lVar5;
  }
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  uStack_40 = uVar2;
  func_0x000100505190(&lStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 == (long *)param_3) {
LAB_1059ae494:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1059ae4a0;
    puVar6 = (undefined1 *)plVar3;
    _objc_opt_class(plVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(long *)((long)plVar3 + 8) == *(long *)(param_3 + 8) &&
         (*(long *)((long)plVar3 + 0x20) == *(long *)(param_3 + 0x20))) &&
        (*(long *)((long)plVar3 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar5 = *(long *)((long)plVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)plVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_1059ae4a0;
        }
        goto LAB_1059ae494;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1059ae4a0:
  _objc_release(param_3);
  return (long *)puVar6;
}



/* Entry: 1059ae3e4; end: 1059ae4bb; -[SCProcessedNotifications isEqual:] */

long FUN_1059ae3e4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1059ae494:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1059ae4a0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
         (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
        (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_1059ae4a0;
        }
        goto LAB_1059ae494;
      }
    }
    lVar3 = 0;
  }
LAB_1059ae4a0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1059ae4bc; end: 1059ae567; -[SCProcessedNotifications .cxx_destruct] */

void FUN_1059ae4bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1059ae568; end: 1059ae58b; -[SCGetNotificationIdsByCategory copyWithZone:] */

undefined8 FUN_1059ae568(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1059ae58c; end: 1059ae593; -[SCGetNotificationIdsByCategory hash] */

void FUN_1059ae58c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 1059ae594; end: 1059ae623; -[SCGetNotificationIdsByCategory isEqual:] */

long FUN_1059ae594(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1059ae608;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_1059ae608;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_1059ae608;
    }
  }
  lVar3 = 1;
LAB_1059ae608:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1059ae624; end: 1059ae62f;  */

undefined8 FUN_1059ae624(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
  return uVar1;
}



/* Entry: 1059ae630; end: 1059ae63b; -[SCGetNotificationIdsByCategory .cxx_destruct] */

void FUN_1059ae630(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059ae63c; end: 1059ae757;  */

undefined8 FUN_1059ae63c(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  if (param_1 < 0x2c) {
    if ((1L << (param_1 & 0x3f) & 0x88000000104U) != 0) {
      uVar2 = 1;
      goto LAB_1059ae734;
    }
    if ((1L << (param_1 & 0x3f) & 0x10000000008U) != 0) goto LAB_1059ae6e0;
    if (param_1 != 4) goto LAB_1059ae6c0;
    func_0x00010c269d40(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf90e00();
LAB_1059ae728:
    _objc_release(uVar1);
  }
  else {
LAB_1059ae6c0:
    param_1 = param_1 - 0xd5;
    if (param_1 < 10) {
      if ((1L << (param_1 & 0x3f) & 0x294U) != 0) {
LAB_1059ae6e0:
        func_0x00010c269d40(param_2);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf90de0();
        goto LAB_1059ae728;
      }
      if ((1L << (param_1 & 0x3f) & 9U) != 0) {
        func_0x00010c269d40(param_2);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf90e20();
        goto LAB_1059ae728;
      }
    }
    uVar2 = 0;
  }
LAB_1059ae734:
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 1059ae758; end: 1059ae807;  */

void FUN_1059ae758(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c1560(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1059ae808; end: 1059ae863;  */

void FUN_1059ae808(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c0960;
  func_0x00010bf96ca0(PTR_PTR_1126c0960,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c123800();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1059ae864; end: 1059ae957;  */

void FUN_1059ae864(long param_1,undefined8 param_2)

{
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1059ae958;
  puStack_60 = &UNK_110843540;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  func_0x00010c0bd100(param_2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 1059ae958; end: 1059aea0f;  */

void FUN_1059ae958(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c0960;
  func_0x00010bf96ca0(PTR_PTR_1126c0960,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c123800();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1059aea10; end: 1059aeb07; -[SCNotificationToMessageReadyLogger _subscribeToCurrentPageEvents:] */

void FUN_1059aea10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_3;
  func_0x00010c0e0ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1059aeb08; end: 1059aec03;  */

void FUN_1059aeb08(long param_1,undefined8 param_2)

{
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1059aec04;
  puStack_50 = &UNK_1108c9cf0;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  _objc_copyWeak(auStack_70,param_1 + 0x20);
  func_0x00010c0c02c0(param_2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 1059aec04; end: 1059aecbb;  */

void FUN_1059aec04(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  puVar1 = PTR_PTR_1126afdd8;
  func_0x00010bfc8740(PTR_PTR_1126afdd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be87660(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059aecbc; end: 1059aecc3;  */

void FUN_1059aecbc(void)

{
  return;
}



/* Entry: 1059aecc4; end: 1059aed7f; -[SCNotificationToMessageReadyLogger startNotificationToMessageReadyLoggingFlow:] */

void FUN_1059aecc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _CACurrentMediaTime();
  uVar2 = param_3;
  func_0x00010c11c420();
  iVar1 = (int)uVar2;
  FUN_1059ae63c();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1059aed80; end: 1059aed8f;  */

void FUN_1059aed80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec08d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             PTR_s__startNotificationToMessageReady_11258dbd8,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1059aed90; end: 1059aee2f; -[SCNotificationToMessageReadyLogger recordNotificationToMessageReadyStep:source:] */

void FUN_1059aed90(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_2 + 8);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1059aee30;
  puStack_58 = &UNK_110844fe0;
  lStack_50 = param_2;
  uStack_48 = param_4;
  uStack_40 = param_1;
  uStack_38 = param_5;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_3,&puStack_70);
  _objc_release(uStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 1059aee30; end: 1059aee43;  */

void FUN_1059aee30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be87890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             PTR_s__recordNotificationToMessageRead_11257f7c0,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 1059aee44; end: 1059aeed3; -[SCNotificationToMessageReadyLogger recordNotificationToMessageReadySyncSubstepStepMetadata:] */

void FUN_1059aee44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1059aeed4;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1059aeed4; end: 1059aeedf;  */

void FUN_1059aeed4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be878b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__recordNotificationToMessageRead_11257f7c8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1059aeee0; end: 1059aef07; -[SCNotificationToMessageReadyLogger notificationToMessageReadyLifecycleEvents] */

void FUN_1059aeee0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059aef08; end: 1059af18b; -[SCNotificationToMessageReadyLogger _startNotificationToMessageReadyLoggingFlow:startTime:] */

void FUN_1059aef08(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  if ((*(byte *)(param_2 + 0x18) & 1) == 0) {
    lVar1 = param_2;
    func_0x00010bec75c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + 0x88);
    *(long *)(param_2 + 0x88) = lVar1;
    _objc_release(uVar3);
    *(undefined1 *)(param_2 + 0x18) = 1;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x20) = param_4;
    _objc_release(uVar3);
    lVar1 = param_2;
    func_0x00010be40840();
    *(ulong *)(param_2 + 0x38) = (ulong)((uint)lVar1 ^ 1);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)(param_2 + 0x50);
    *(undefined **)(param_2 + 0x50) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    dVar6 = param_1;
    func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x50));
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(param_2 + 0x70);
    puVar2 = PTR_PTR_1126c0968;
    func_0x00010bf7c020(PTR_PTR_1126c0968);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3);
    _objc_release(puVar2);
    uVar4 = *(undefined8 *)(param_2 + 0x60);
    uVar3 = param_4;
    func_0x00010c11c420(param_4);
    func_0x0001059b1980();
    _objc_retainAutoreleasedReturnValue();
    FUN_1059b1ebc(uVar4,uVar3,1);
    _objc_release(uVar3);
    func_0x00010bf8be40(param_2);
    if ((0.0 < dVar6) && (0.0 < param_1 - dVar6)) {
      uVar5 = *(undefined8 *)(param_2 + 0x68);
      uVar4 = *(undefined8 *)(param_2 + 0x30);
      func_0x0001059b193c(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_4;
      func_0x00010c11c420(param_4);
      func_0x0001059b1980();
      _objc_retainAutoreleasedReturnValue();
      FUN_1059b64a8(uVar5,uVar4,uVar3,(long)((param_1 - dVar6) * 1000.0));
      _objc_release(uVar3);
      _objc_release(uVar4);
    }
    _objc_initWeak(auStack_58,param_2);
    uVar3 = *(undefined8 *)(param_2 + 8);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_4);
    func_0x00010c0f7fe0(0x4024000000000000,uVar3);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 1059af18c; end: 1059af1df;  */

void FUN_1059af18c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0dc140(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010becc1a0(lVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1059af1e0; end: 1059af263; -[SCNotificationToMessageReadyLogger _timeoutNotificationToMessageReadyFlow:] */

void FUN_1059af1e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be40860();
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0dc140();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      lVar1 = param_1;
      func_0x00010bdf7ec0(param_1);
      func_0x00010bde2ce0(param_1,param_2,1,lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059af264; end: 1059af36f; -[SCNotificationToMessageReadyLogger _recordNotificationToMessageReadyStep:stepTime:source:] */

void FUN_1059af264(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  if ((*(char *)(param_2 + 0x18) == '\x01') && (param_5 == *(long *)(param_2 + 0x38))) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1059af370;
    puStack_58 = &UNK_11087ebf0;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    uStack_90 = 0x1059af384;
    puStack_88 = &UNK_1108c9d60;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    uStack_c0 = 0x1059af39c;
    puStack_b8 = &UNK_1108c9d60;
    puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f8 = 0xc2000000;
    uStack_f0 = 0x1059af3b4;
    puStack_e8 = &UNK_1108c9d60;
    lStack_e0 = param_2;
    uStack_d8 = param_1;
    lStack_b0 = param_2;
    uStack_a8 = param_1;
    lStack_80 = param_2;
    uStack_78 = param_1;
    lStack_50 = param_2;
    uStack_48 = param_1;
    func_0x00010c0bdae0(param_4,param_3,&puStack_70,&puStack_a0,&puStack_d0,&puStack_100);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1059af370; end: 1059af3cb;  */

void FUN_1059af370(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be80e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
             PTR_s__processEnterTargetScreenStepAtT_11257dd38,param_2);
  return;
}



/* Entry: 1059af3cc; end: 1059af46f; -[SCNotificationToMessageReadyLogger _recordNotificationToMessageReadySyncSubstepStepMetadata:] */

void FUN_1059af3cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  _objc_retain(param_3);
  if ((*(char *)(param_1 + 0x18) == '\x01') && (*(long *)(param_1 + 0x38) == 0)) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_1059af470;
    puStack_30 = &UNK_110842e18;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    uStack_60 = 0x1059af478;
    puStack_58 = &UNK_1108450c8;
    lStack_50 = param_1;
    lStack_28 = param_1;
    func_0x00010c0bf8e0(param_3,param_2,&puStack_48,&puStack_70);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059af470; end: 1059af483;  */

void FUN_1059af470(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be81ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__processRenderedViewModels_11257e198);
  return;
}



/* Entry: 1059af484; end: 1059af4cf; -[SCNotificationToMessageReadyLogger _recordCurrentLandedPage:] */

void FUN_1059af484(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = param_3;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059af4d0; end: 1059af5c7; -[SCNotificationToMessageReadyLogger _processEnterTargetScreenStepAtTime:conversationId:] */

void FUN_1059af4d0(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  uVar1 = param_2;
  func_0x00010be40840();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((int)uVar5 == 0) goto LAB_1059af5b0;
  }
  lVar3 = *(long *)(param_2 + 0x50);
  func_0x00010c0e00e0(lVar3,param_3,&PTR____CFConstantStringClassReference_110e12eb8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x50),param_3,puVar4,
                        &PTR____CFConstantStringClassReference_110e12eb8);
    _objc_release(puVar4);
    uVar5 = *(undefined8 *)(param_2 + 0x38);
    func_0x0001059b1ad0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = uVar5;
    _objc_release(uVar2);
  }
LAB_1059af5b0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1059af5c8; end: 1059af6cb; -[SCNotificationToMessageReadyLogger _processSyncStepAtTime:conversationId:messageId:] */

void FUN_1059af5c8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_2;
  func_0x00010beb5120(param_2,param_3,param_4,param_5);
  if ((int)lVar1 != 0) {
    lVar1 = *(long *)(param_2 + 0x50);
    func_0x00010c0e00e0(lVar1,param_3,&PTR____CFConstantStringClassReference_110e12ed8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x50),param_3,puVar2,
                          &PTR____CFConstantStringClassReference_110e12ed8);
      _objc_release(puVar2);
      lVar1 = param_2;
      func_0x00010bdf7ec0();
      if ((int)lVar1 == 0) {
        func_0x00010be12900(param_1,param_2,param_3,param_4,param_5);
      }
      else {
        func_0x00010bde2ce0(param_2,param_3,0,1);
      }
    }
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1059af6cc; end: 1059af773; -[SCNotificationToMessageReadyLogger _processPrefetchStepAtTime:conversationId:messageId:] */

void FUN_1059af6cc(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_2;
  func_0x00010beb5120();
  if ((int)lVar1 != 0) {
    lVar1 = *(long *)(param_2 + 0x50);
    func_0x00010c0e00e0(lVar1,param_3,&PTR____CFConstantStringClassReference_110e12ef8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x50),param_3,puVar2,
                          &PTR____CFConstantStringClassReference_110e12ef8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar2);
      return;
    }
  }
  return;
}



/* Entry: 1059af774; end: 1059af947; -[SCNotificationToMessageReadyLogger _fetchMessageForSyncCompletionWithStepTime:conversationId:messageId:] */

void FUN_1059af774(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_2;
  func_0x00010be40840();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x98);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf90ce0();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      uVar3 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010c0dc140();
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_68,param_2);
      uVar2 = *(undefined8 *)(param_2 + 0x78);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15f400(*(undefined8 *)(param_2 + 0x20));
      uVar4 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010bf50280(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_78,auStack_68);
      _objc_retain(uVar3);
      uStack_70 = param_1;
      _objc_retain(param_4);
      _objc_retain(param_5);
      func_0x00010bfa8a20(uVar2);
      _objc_release(uVar4);
      _objc_release(uVar2);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_release(uVar3);
      _objc_destroyWeak(auStack_78);
      _objc_destroyWeak(auStack_68);
      _objc_release(uVar3);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1059af948; end: 1059af9a3;  */

void FUN_1059af948(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be31900(*(undefined8 *)(param_1 + 0x40));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1059af9a4; end: 1059afb2b; -[SCNotificationToMessageReadyLogger _handleSyncFetchedMessage:notificationId:stepTime:conversationId:messageId:] */

void FUN_1059af9a4(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_4 != 0) {
    _objc_retain(param_4);
    lVar1 = param_4;
    func_0x00010bf4df40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x000107d60b58();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_4;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(lVar1);
    uVar3 = *(undefined8 *)(param_2 + 8);
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1059afb2c;
    puStack_a0 = &UNK_1108c9dc0;
    lStack_98 = param_2;
    _objc_retain(param_5);
    uStack_90 = param_5;
    lStack_88 = lVar2;
    uStack_70 = param_1;
    uStack_68 = lVar1 == 0;
    _objc_retain(param_6);
    uStack_80 = param_6;
    _objc_retain(param_7);
    uStack_78 = param_7;
    _objc_retain(lVar2);
    func_0x00010c0f7fc0(uVar3,param_3,&puStack_b8);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
    _objc_release(lStack_88);
    _objc_release(uStack_90);
    _objc_release(lVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 1059afb2c; end: 1059afbfb;  */

void FUN_1059afb2c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010be40860();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
    func_0x00010c0dc140();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      lVar4 = *(long *)(param_1 + 0x20);
      _objc_retain(uVar2);
      uVar3 = *(undefined8 *)(lVar4 + 0x28);
      *(undefined8 *)(lVar4 + 0x28) = uVar2;
      _objc_release(uVar3);
      if (*(char *)(param_1 + 0x50) == '\x01') {
        lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x50);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be817d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)
                    (*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x20),
                     PTR_s__processMessageReadyStepAtTime_c_11257df90,
                     *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 1059afbfc; end: 1059afcbb; -[SCNotificationToMessageReadyLogger _processMessageReadyStepAtTime:conversationId:messageId:] */

void FUN_1059afbfc(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_2;
  func_0x00010beb5120();
  if ((int)lVar1 != 0) {
    lVar1 = *(long *)(param_2 + 0x50);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x50));
      _objc_release(puVar2);
      lVar1 = param_2;
      func_0x00010bdf7ec0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bde2cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_2,PTR_s__completeFlowWithTimedOut_dataSa_1125564d8,0,lVar1);
      return;
    }
  }
  return;
}



/* Entry: 1059afcbc; end: 1059afcc7; -[SCNotificationToMessageReadyLogger _processRenderedViewModels] */

void FUN_1059afcbc(long param_1)

{
  *(undefined1 *)(param_1 + 0x48) = 1;
  return;
}



/* Entry: 1059afcc8; end: 1059afcf7; -[SCNotificationToMessageReadyLogger _processCellAppeared:] */

void FUN_1059afcc8(long param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  func_0x00010beb5120();
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x49) = 1;
  }
  return;
}



/* Entry: 1059afcf8; end: 1059afddb; -[SCNotificationToMessageReadyLogger _shouldProcessStepLatencyForConversationId:messageId:] */

undefined8 FUN_1059afcf8(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010be40860();
  if ((int)uVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0720c0();
    if (((int)uVar4 == 0) || (uVar1 = param_1, func_0x00010be33e00(), (int)uVar1 == 0)) {
      uVar4 = 0;
    }
    else {
      uVar1 = param_1;
      func_0x00010be40840();
      if ((uVar1 & 1) == 0) {
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c0cb9c0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c0720c0();
        _objc_release(uVar3);
      }
      else {
        uVar4 = 1;
      }
    }
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 1059afddc; end: 1059afdff; -[SCNotificationToMessageReadyLogger _isFlowInProgress] */

byte FUN_1059afddc(long param_1)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    bVar1 = *(byte *)(param_1 + 0x19) ^ 1;
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 1059afe00; end: 1059afe43; -[SCNotificationToMessageReadyLogger _isFlowForSnap] */

bool FUN_1059afe00(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c11c420();
  if (lVar2 == 8) {
    bVar1 = true;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c11c420(lVar2);
    bVar1 = lVar2 == 0x2b;
  }
  return bVar1;
}



/* Entry: 1059afe44; end: 1059afe87; -[SCNotificationToMessageReadyLogger _hasEnteredTargetScreen] */

bool FUN_1059afe44(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010c0e00e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110e12eb8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



/* Entry: 1059afe88; end: 1059afea3; -[SCNotificationToMessageReadyLogger _dataSaverMode] */

uint FUN_1059afe88(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c231e40(uVar1);
  return (uint)uVar1 ^ 1;
}



/* Entry: 1059afea4; end: 1059aff33; -[SCNotificationToMessageReadyLogger _entireFlowStartTime] */

double FUN_1059afea4(double param_1,long param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  func_0x00010c0e00e0(uVar2,param_3,&PTR____CFConstantStringClassReference_110e12e98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e03958;
  if (0.0 < param_1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e12e98;
  }
  func_0x00010c0e00e0(uVar3,param_3,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  return param_1;
}



/* Entry: 1059aff34; end: 1059affd7; -[SCNotificationToMessageReadyLogger _completionTimeWithDataSaverMode:] */

double FUN_1059aff34(double param_1,long param_2,undefined8 param_3,byte param_4)

{
  bool bVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  func_0x00010c0e00e0(uVar3,param_3,&PTR____CFConstantStringClassReference_110e12f18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  bVar1 = param_1 <= 0.0;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e12ed8;
  if ((param_4 & bVar1) == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e12f18;
  }
  func_0x00010c0e00e0(uVar3,param_3,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar3);
  return param_1;
}



/* Entry: 1059affd8; end: 1059b0197; -[SCNotificationToMessageReadyLogger _completeFlowWithTimedOut:dataSaverMode:] */

void FUN_1059affd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 auStack_48 [8];
  
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010c0e00e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110e03958);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x19) = 1;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x98);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf90cc0();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      ppuVar6 = *(undefined ***)(param_1 + 0x28);
      if (ppuVar6 == (undefined **)0x0) {
        _objc_initWeak(auStack_48,param_1);
        uVar4 = *(undefined8 *)(param_1 + 0x78);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c15f400(*(undefined8 *)(param_1 + 0x20));
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010bf50280(uVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_58,auStack_48);
        uStack_50 = (undefined1)param_3;
        uStack_4f = (undefined1)param_4;
        func_0x00010bfa8a20(uVar4);
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_destroyWeak(auStack_58);
        _objc_destroyWeak(auStack_48);
        return;
      }
      goto LAB_1059b0150;
    }
  }
  ppuVar6 = &PTR____CFConstantStringClassReference_110dd9778;
LAB_1059b0150:
                    /* WARNING: Could not recover jumptable at 0x00010bde2d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__completeFlowWithTimedOut_dataSa_1125564e0,param_3,param_4,ppuVar6);
  return;
}



/* Entry: 1059b0198; end: 1059b0283;  */

void FUN_1059b0198(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar2 = param_2;
    func_0x00010bf4df40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x000107d60b58();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_retain(uVar1);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 1059b0284; end: 1059b0297;  */

void FUN_1059b0284(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde2d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__completeFlowWithTimedOut_dataSa_1125564e0,
             *(undefined1 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x31),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1059b0298; end: 1059b04e3; -[SCNotificationToMessageReadyLogger _completeFlowWithTimedOut:dataSaverMode:messageType:] */

void FUN_1059b0298(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010bde44e0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x0001059b193c(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11c420(uVar3);
  func_0x0001059b1980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8be40(param_1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x50),param_2,puVar4,
                      &PTR____CFConstantStringClassReference_110e12e98);
  _objc_release(puVar4);
  lVar5 = param_1;
  func_0x00010be3b1e0(param_1,param_2,lVar1,uVar2,uVar3,param_5,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be56660(param_1,param_2,lVar1,uVar2,uVar3,param_5,param_4);
  func_0x00010be56820(param_1,param_2,lVar1,uVar2,uVar3,param_5,param_4);
  func_0x00010be58f80(param_1,param_2,lVar1,uVar2,uVar3,param_5,param_4);
  func_0x00010be59060(param_1,param_2,lVar1,uVar2,uVar3,param_5,lVar5);
  func_0x00010be59920(param_1,param_2,lVar1,uVar2,uVar3,param_5);
  _objc_release(param_5);
  uVar6 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar6);
  *(undefined2 *)(param_1 + 0x18) = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar6);
  *(undefined8 *)(param_1 + 0x38) = 2;
  *(undefined8 *)(param_1 + 0x30) = 3;
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  _objc_release(uVar6);
  *(undefined1 *)(param_1 + 0x49) = 0;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x88));
  uVar6 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x70);
  puVar4 = PTR_PTR_1126c0968;
  func_0x00010bf75760(PTR_PTR_1126c0968);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar6,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(lVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1059b04e4; end: 1059b05a7; -[SCNotificationToMessageReadyLogger _computeResultForFlowWithTimedOut:] */

void FUN_1059b04e4(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  ppuVar3 = &PTR_PTR_1108cad38;
  if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + 0x50);
    func_0x00010c0e00e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110e12ef8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = *(long *)(param_1 + 0x50);
      func_0x00010c0e00e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110e12ed8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 == 0) {
        lVar1 = *(long *)(param_1 + 0x50);
        func_0x00010c0e00e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110e12eb8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        ppuVar3 = &PTR_PTR_1108cad48;
        if (lVar1 != 0) {
          ppuVar3 = &PTR_PTR_1108cad40;
        }
      }
      else {
        ppuVar3 = &PTR_PTR_1108cad50;
      }
    }
    else {
      ppuVar3 = &PTR_PTR_1108cad58;
    }
  }
  puVar2 = *ppuVar3;
  _objc_retain(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1059b05a8; end: 1059b07b7; -[SCNotificationToMessageReadyLogger _initializeBlizzardMetricWithResult:appStartupType:notifType:messageType:dataSaverMode:] */

void FUN_1059b05a8(double param_1,long param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c0970;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_opt_new(puVar1);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c0dc140(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ce180(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  uVar2 = param_6;
  func_0x00010c28ed80(param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010c1ce740(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  uVar2 = param_7;
  func_0x00010c28ed80(param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  func_0x00010c1c7160(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  uVar2 = param_5;
  func_0x00010c28ed80(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c169160(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  func_0x0001059b1a7c(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2124e0(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  func_0x00010c1b7400(puVar1,param_3,*(undefined8 *)(param_2 + 0x40));
  func_0x00010be0a920(param_2);
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  param_1 = param_1 * 1000.0;
  func_0x00010c209b40(puVar1,param_3,(long)param_1);
  func_0x00010bde39c0(param_2,param_3,param_8);
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  func_0x00010c1962e0(puVar1,param_3,(long)(param_1 * 1000.0));
  uVar3 = param_4;
  func_0x00010c0720c0(param_4,param_3,&PTR____CFConstantStringClassReference_110dab0d8);
  if ((uVar3 & 1) == 0) {
    uVar3 = param_4;
    func_0x00010c28ed80(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c199f20(puVar1,param_3,uVar3);
    _objc_release(uVar3);
  }
  func_0x00010c189780(puVar1,param_3,param_8);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059b07b8; end: 1059b08b3; -[SCNotificationToMessageReadyLogger _logNotificationCompleteWithResult:appStartupType:notifType:messageType:dataSaverMode:] */

void FUN_1059b07b8(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  double dVar2;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010be0a920(param_2);
  dVar2 = param_1;
  func_0x00010bde39c0(param_2);
  if (dVar2 <= 0.0) {
    lVar1 = 0;
  }
  else {
    dVar2 = dVar2 - param_1;
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    lVar1 = (long)(dVar2 * 1000.0);
  }
  FUN_1059b4514(*(undefined8 *)(param_2 + 0x68),param_5,param_7,param_6,param_4,lVar1);
  FUN_1059b2030(*(undefined8 *)(param_2 + 0x60),param_5,param_7,param_6,param_4,1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1059b08b4; end: 1059b09e3; -[SCNotificationToMessageReadyLogger _logNotificationTapToCompleteWithResult:appStartupType:notifType:messageType:dataSaverMode:] */

void FUN_1059b08b4(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  double dVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  dVar2 = param_1;
  _objc_release(uVar1);
  func_0x00010bde39c0(param_2);
  dVar2 = dVar2 - param_1;
  if (dVar2 <= 0.0) {
    FUN_1059b2698(*(undefined8 *)(param_2 + 0x60),1);
  }
  else {
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    FUN_1059b4848(*(undefined8 *)(param_2 + 0x68),param_5,param_7,param_6,param_4,
                  (long)(dVar2 * 1000.0));
    FUN_1059b2364(*(undefined8 *)(param_2 + 0x60),param_5,param_7,param_6,param_4,1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1059b09e4; end: 1059b0bef; -[SCNotificationToMessageReadyLogger _logStartupLatenciesWithResult:appStartupType:notifType:messageType:dataSaverMode:] */

void FUN_1059b09e4(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010bf061a0(param_2);
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  param_1 = param_1 * 1000.0;
  if ((long)param_1 < 1) {
    FUN_1059b29d0(*(undefined8 *)(param_2 + 0x60),param_7,param_6,1);
  }
  else {
    FUN_1059b4b7c(*(undefined8 *)(param_2 + 0x68),param_5,param_7,param_6);
    FUN_1059b2710(*(undefined8 *)(param_2 + 0x60),param_5,param_7,param_6,1);
  }
  func_0x00010c08bf00(param_2);
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  param_1 = param_1 * 1000.0;
  if (0 < (long)param_1) {
    dVar3 = (double)(ulong)(long)param_1;
    uVar1 = *(undefined8 *)(param_2 + 0x50);
    func_0x00010c0e00e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    dVar2 = param_1;
    _objc_release(uVar1);
    func_0x00010bde39c0(param_2);
    param_1 = param_1 - dVar3;
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    FUN_1059b5170(*(undefined8 *)(param_2 + 0x68),param_5,param_7,param_6,param_4,
                  (long)(param_1 * 1000.0));
    FUN_1059b2fac(*(undefined8 *)(param_2 + 0x60),param_5,param_7,param_6,param_4,1);
    dVar2 = dVar2 - dVar3;
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    if ((long)(dVar2 * 1000.0) < 1) {
      FUN_1059b2f34(*(undefined8 *)(param_2 + 0x60),1);
    }
    else {
      FUN_1059b4e3c(*(undefined8 *)(param_2 + 0x68),param_5,param_7,param_6,param_4);
      FUN_1059b2c00(*(undefined8 *)(param_2 + 0x60),param_5,param_7,param_6,param_4,1);
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1059b0bf0; end: 1059b1297; -[SCNotificationToMessageReadyLogger _logStepLatenciesWithResult:appStartupType:notifType:messageType:blizzardMetric:] */

void FUN_1059b0bf0(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar15 = *(undefined8 *)(param_2 + 0x50);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0e00e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  dVar16 = param_1;
  _objc_release(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x50);
  func_0x00010c0e00e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar15);
  param_1 = dVar16 - param_1;
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  param_1 = param_1 * 1000.0;
  FUN_1059b54a4(*(undefined8 *)(param_2 + 0x68),param_5,param_7,param_6,param_4);
  FUN_1059b32e0(*(undefined8 *)(param_2 + 0x60),param_5,param_7,param_6,param_4,1);
  uVar15 = *(undefined8 *)(param_2 + 0x50);
  func_0x00010c0e00e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar15);
  dVar17 = param_1 - dVar16;
  if (dVar17 <= 0.0) {
    dVar17 = 0.0;
  }
  dVar17 = dVar17 * 1000.0;
  FUN_1059b57d8(*(undefined8 *)(param_2 + 0x68),param_5,param_7,param_6,param_4);
  FUN_1059b3614(*(undefined8 *)(param_2 + 0x60),param_5,param_7,param_6,param_4,1);
  uVar15 = *(undefined8 *)(param_2 + 0x50);
  func_0x00010c0e00e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar15);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(dVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  dVar18 = param_1;
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c296f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010bf885a0(puVar5);
  dVar18 = dVar17 - dVar18;
  if (dVar18 <= 0.0) {
    dVar18 = 0.0;
  }
  dVar18 = dVar18 * 1000.0;
  FUN_1059b5b0c(*(undefined8 *)(param_2 + 0x68),param_5,param_7,param_6,param_4);
  FUN_1059b3948(*(undefined8 *)(param_2 + 0x60),param_5,param_7,param_6,param_4,1);
  uVar15 = *(undefined8 *)(param_2 + 0x50);
  func_0x00010c0e00e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar15);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(dVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  dVar19 = dVar17;
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c296f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010bf885a0(puVar7);
  dVar19 = dVar18 - dVar19;
  if (dVar19 <= 0.0) {
    dVar19 = 0.0;
  }
  dVar19 = dVar19 * 1000.0;
  FUN_1059b5e40(*(undefined8 *)(param_2 + 0x68),param_5,param_7,param_6,param_4);
  FUN_1059b3c7c(*(undefined8 *)(param_2 + 0x60),param_5,param_7,param_6,param_4,1);
  uVar15 = *(undefined8 *)(param_2 + 0x50);
  func_0x00010c0e00e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar15);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(dVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(dVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c296f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010bf885a0(puVar9);
  dVar19 = dVar19 - dVar18;
  if (dVar19 <= 0.0) {
    dVar19 = 0.0;
  }
  FUN_1059b6174(*(undefined8 *)(param_2 + 0x68),param_5,param_7,param_6,param_4,
                (long)(dVar19 * 1000.0));
  uVar15 = param_6;
  uVar13 = param_4;
  FUN_1059b3fb0(*(undefined8 *)(param_2 + 0x60),param_5,param_7,param_6,param_4,1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c20a700(param_8);
  iVar1 = (int)puVar3;
  _objc_release(param_8);
  _objc_release(puVar2);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar15);
  _objc_retain(uVar13);
  func_0x00010c0720c0();
  if ((iVar1 != 0) && (uVar11 = uVar13, func_0x00010c0720c0(), (int)uVar11 != 0)) {
    if ((puVar5[0x48] & 1) == 0) {
      uVar11 = *(undefined8 *)(puVar5 + 0x60);
      ppuVar12 = &PTR____CFConstantStringClassReference_110e13018;
    }
    else {
      uVar11 = *(undefined8 *)(puVar5 + 0x60);
      if ((puVar5[0x49] & 1) == 0) {
        ppuVar12 = &PTR____CFConstantStringClassReference_110e13038;
      }
      else {
        ppuVar12 = &PTR____CFConstantStringClassReference_110e13058;
      }
    }
    FUN_1059b42e4(uVar11,uVar15,ppuVar12,1);
  }
  _objc_release(uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar15);
  return;
}



/* Entry: 1059b1298; end: 1059b1363; -[SCNotificationToMessageReadyLogger _logSyncFeedFailureIfNecessary:appStartupType:notifType:messageType:] */

void FUN_1059b1298(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
                  )

{
  undefined8 uVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0720c0();
  if ((param_3 != 0) && (uVar1 = param_5, func_0x00010c0720c0(), (int)uVar1 != 0)) {
    if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x60);
      ppuVar2 = &PTR____CFConstantStringClassReference_110e13018;
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 0x60);
      if ((*(byte *)(param_1 + 0x49) & 1) == 0) {
        ppuVar2 = &PTR____CFConstantStringClassReference_110e13038;
      }
      else {
        ppuVar2 = &PTR____CFConstantStringClassReference_110e13058;
      }
    }
    FUN_1059b42e4(uVar1,param_4,ppuVar2,1);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1059b1364; end: 1059b1387; -[SCNotificationToMessageReadyLogger launchTimeInSecs] */

double FUN_1059b1364(long param_1)

{
  func_0x00010aee6fe0();
  return (double)param_1 / 1000000.0;
}



/* Entry: 1059b1388; end: 1059b13ab; -[SCNotificationToMessageReadyLogger appStartupTimeInSecs] */

double FUN_1059b1388(long param_1)

{
  func_0x0001008cc2dc();
  return (double)param_1 / 1000000.0;
}



/* Entry: 1059b13ac; end: 1059b142f; -[SCNotificationToMessageReadyLogger earliestStartupTimeInSecs] */

double FUN_1059b13ac(long param_1)

{
  ulong uVar1;
  long lVar2;
  uint uStack_28;
  uint uStack_24;
  
  lVar2 = lRam0000000113839480;
  if ((*(long *)(param_1 + 0x30) - 1U < 2) ||
     (lVar2 = lRam0000000113839458, *(long *)(param_1 + 0x30) == 0)) {
    _mach_timebase_info(&uStack_28);
    uVar1 = 0;
    if ((ulong)uStack_24 * 1000 != 0) {
      uVar1 = (lVar2 * (ulong)uStack_28) / ((ulong)uStack_24 * 1000);
    }
  }
  else {
    uVar1 = 0;
  }
  return (double)(long)uVar1 / 1000000.0;
}



/* Entry: 1059b1430; end: 1059b153f; -[SCNotificationToMessageReadyLogger logMessageInitializedWithConversationId:analyticsMessageId:timestamp:] */

void FUN_1059b1430(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1059b1540; end: 1059b1597;  */

void FUN_1059b1540(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (((lVar1 != 0) && (*(char *)(lVar1 + 0x18) == '\x01')) && (*(long *)(lVar1 + 0x38) == 1)) {
    func_0x00010be82660(*(undefined8 *)(param_1 + 0x38),lVar1,param_2,
                        *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1059b1598; end: 1059b16a7; -[SCNotificationToMessageReadyLogger logMessageLoadStartedWithConversationId:analyticsMessageId:timestamp:] */

void FUN_1059b1598(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1059b16a8; end: 1059b16ff;  */

void FUN_1059b16a8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (((lVar1 != 0) && (*(char *)(lVar1 + 0x18) == '\x01')) && (*(long *)(lVar1 + 0x38) == 1)) {
    func_0x00010be81dc0(*(undefined8 *)(param_1 + 0x38),lVar1,param_2,
                        *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1059b1700; end: 1059b180f; -[SCNotificationToMessageReadyLogger logMessageLoadEndedWithConversationId:analyticsMessageId:timestamp:] */

void FUN_1059b1700(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1059b1810; end: 1059b1867;  */

void FUN_1059b1810(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (((lVar1 != 0) && (*(char *)(lVar1 + 0x18) == '\x01')) && (*(long *)(lVar1 + 0x38) == 1)) {
    func_0x00010be817c0(*(undefined8 *)(param_1 + 0x38),lVar1,param_2,
                        *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1059b1868; end: 1059b186b; -[SCNotificationToMessageReadyLogger logMessageLoadFailedWithConversationId:analyticsMessageId:timestamp:] */

void FUN_1059b1868(void)

{
  return;
}



/* Entry: 1059b186c; end: 1059b186f; -[SCNotificationToMessageReadyLogger logMessageMediaDisplayedWithConversationId:analyticsMessageId:mediaIds:] */

void FUN_1059b186c(void)

{
  return;
}



/* Entry: 1059b1870; end: 1059b1b1f; -[SCNotificationToMessageReadyLogger .cxx_destruct] */

void FUN_1059b1870(long param_1)

{
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
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059b1b20; end: 1059b1b23; -[SCNotificationAppUserLifecycleObserver onUserLoggedIn] */

void FUN_1059b1b20(void)

{
  return;
}



/* Entry: 1059b1b24; end: 1059b1b27; -[SCNotificationAppUserLifecycleObserver onUserRegistered] */

void FUN_1059b1b24(void)

{
  return;
}



/* Entry: 1059b1b28; end: 1059b1b97; -[SCNotificationAppUserLifecycleObserver onAppWillEnterForeground] */

void FUN_1059b1b28(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  if (cVar1 == '\x01') {
    func_0x00010c1237e0();
    _objc_release(uVar2);
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  else {
    func_0x00010c1237e0();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1237d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_recordNotificationPermissionSett_112626810);
  return;
}



/* Entry: 1059b1b98; end: 1059b1b9b; -[SCNotificationAppUserLifecycleObserver onAppDidEnterBackground] */

void FUN_1059b1b98(void)

{
  return;
}



/* Entry: 1059b1b9c; end: 1059b1b9f; -[SCNotificationAppUserLifecycleObserver onAppWillResignActive] */

void FUN_1059b1b9c(void)

{
  return;
}



/* Entry: 1059b1ba0; end: 1059b1ba3; -[SCNotificationAppUserLifecycleObserver onAppWillTerminate] */

void FUN_1059b1ba0(void)

{
  return;
}



/* Entry: 1059b1ba4; end: 1059b1ccb; -[SCNotificationAppUserLifecycleObserver .cxx_destruct] */

void FUN_1059b1ba4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059b1ccc; end: 1059b1cd7;  */

void FUN_1059b1ccc(void)

{
  return;
}



/* Entry: 1059b1cd8; end: 1059b1de7;  */

void FUN_1059b1cd8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c09a8;
  _objc_alloc(PTR_PTR_1126c09a8);
  uVar2 = param_2;
  func_0x00010c0dc140(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf0a2c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bf026e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a360(param_2);
  func_0x00010c11c420(param_2);
  _objc_release(param_2);
  func_0x00010c02fe20(puVar1);
  func_0x00010c24f700(uVar5);
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 1059b1de8; end: 1059b1ebb; -[SCNotificationStartupLoggingServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059b1de8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272cd64,0);
  _objc_destroyWeak(param_1 + _DAT_11272cd80);
  _objc_destroyWeak(param_1 + _DAT_11272cd84);
  _objc_destroyWeak(param_1 + _DAT_11272cd70);
  _objc_destroyWeak(param_1 + _DAT_11272cd78);
  _objc_destroyWeak(param_1 + _DAT_11272cd74);
  _objc_destroyWeak(param_1 + _DAT_11272cd6c);
  _objc_destroyWeak(param_1 + _DAT_11272cd68);
  _objc_destroyWeak(param_1 + _DAT_11272cd5c);
  _objc_destroyWeak(param_1 + _DAT_11272cd7c);
  _objc_destroyWeak(param_1 + _DAT_11272cd8c);
  _objc_destroyWeak(param_1 + _DAT_11272cd90);
  _objc_storeStrong(param_1 + _DAT_11272cd60,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272cd88,0);
  return;
}



/* Entry: 1059b1ebc; end: 1059b202f;  */

/* WARNING: Removing unreachable block (ram,0x0001059b2324) */
/* WARNING: Removing unreachable block (ram,0x0001059b2658) */

void FUN_1059b1ebc(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined *param_5,undefined8 *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 *unaff_x25;
  undefined *unaff_x26;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 *puStack_260;
  undefined *puStack_258;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  undefined8 auStack_218 [3];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined *puStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 auStack_138 [3];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined8 auStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f319248;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_1108c9f48;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = puVar3;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = puVar3;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_1059b2030;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar3 = puVar5;
  puVar8 = param_4;
  puVar9 = param_5;
  puVar10 = param_6;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar5);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (puVar2 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f319248;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_138,puVar2);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f319248;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_120,puVar3);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f319248;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar3 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_108,puVar3);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      unaff_x26 = &UNK_10f319248;
    }
    else {
      _objc_retainAutorelease(param_5);
      unaff_x26 = param_5;
      func_0x00010bdc3520();
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_f0,unaff_x26);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    func_0x00010007e1e8(&uStack_158,auStack_138,&lStack_d8,4);
    puVar6 = &UNK_1108c9f98;
    unaff_x25 = &uStack_158;
    puVar3 = &uStack_158;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_140 = unaff_x25;
    func_0x00010007e5dc(&puStack_140);
    lVar12 = 0;
    puVar8 = param_6;
    do {
      if ((&cStack_d9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_f0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x60);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar5);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
    ___stack_chk_fail();
    _objc_release(param_5);
    puStack_1a0 = auStack_138;
    do {
      unaff_x25 = unaff_x25 + -3;
    } while (unaff_x25 != puStack_1a0);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(puVar5);
    _objc_release(puVar1);
    puVar4 = puVar2;
    __Unwind_Resume();
    pcStack_168 = FUN_1059b2364;
    lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar7 = puVar6;
    puStack_1b0 = unaff_x26;
    puStack_1a8 = unaff_x25;
    puStack_198 = puVar2;
    puStack_190 = param_5;
    puStack_188 = param_4;
    puStack_180 = puVar5;
    puStack_178 = puVar1;
    ppuStack_170 = &puStack_90;
    _objc_retain(puVar6);
    _objc_retain(puVar3);
    _objc_retain(puVar8);
    _objc_retain(puVar9);
    if (puVar4 != (undefined *)0x0) {
      plVar11 = *(long **)(puVar4 + 8);
      _objc_retain(puVar6);
      if (puVar6 == (undefined *)0x0) {
        puVar1 = &UNK_10f319248;
      }
      else {
        puVar1 = puVar6;
        _objc_retainAutorelease(puVar6);
        func_0x00010bdc3520();
      }
      _objc_release(puVar6);
      func_0x00010002b838(auStack_218,puVar1);
      _objc_retain(puVar3);
      if (puVar3 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)&UNK_10f319248;
      }
      else {
        _objc_retainAutorelease(puVar3);
        puVar5 = puVar3;
        func_0x00010bdc3520(puVar3);
      }
      _objc_release(puVar3);
      func_0x00010002b838(auStack_200,puVar5);
      _objc_retain(puVar8);
      if (puVar8 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)&UNK_10f319248;
      }
      else {
        _objc_retainAutorelease(puVar8);
        puVar5 = puVar8;
        func_0x00010bdc3520(puVar8);
      }
      _objc_release(puVar8);
      func_0x00010002b838(auStack_1e8,puVar5);
      _objc_retain(puVar9);
      if (puVar9 == (undefined *)0x0) {
        puVar1 = &UNK_10f319248;
      }
      else {
        _objc_retainAutorelease(puVar9);
        puVar1 = puVar9;
        func_0x00010bdc3520(puVar9);
      }
      _objc_release(puVar9);
      func_0x00010002b838(auStack_1d0,puVar1);
      uStack_238 = 0;
      uStack_230 = 0;
      uStack_228 = 0;
      func_0x00010007e1e8(&uStack_238,auStack_218,&lStack_1b8,4);
      puVar7 = &UNK_1108c9fe8;
      unaff_x25 = &uStack_238;
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1108c9fe8,&uStack_238,puVar10);
      puStack_220 = unaff_x25;
      func_0x00010007e5dc(&puStack_220);
      lVar12 = 0;
      do {
        if ((&cStack_1b9)[lVar12] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1d0 + lVar12));
        }
        lVar12 = lVar12 + -0x18;
      } while (lVar12 != -0x60);
    }
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar3);
    puVar1 = puVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b8) {
      ___stack_chk_fail();
      _objc_release(puVar9);
      do {
        unaff_x25 = unaff_x25 + -3;
      } while (unaff_x25 != auStack_218);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar3);
      _objc_release(puVar6);
      __Unwind_Resume();
      puStack_268 = (undefined1 *)&uStack_280;
      pcStack_248 = FUN_1059b2698;
      if (puVar1 != (undefined *)0x0) {
        uStack_280 = 0;
        uStack_278 = 0;
        uStack_270 = 0;
        puStack_260 = puVar3;
        puStack_258 = puVar6;
        pppuStack_250 = &ppuStack_170;
        (**(code **)(**(long **)(puVar1 + 8) + 0x18))
                  (*(long **)(puVar1 + 8),&UNK_1108ca038,&uStack_280,puVar7);
        func_0x00010007e5dc(&puStack_268);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1059b2030; end: 1059b2363;  */

/* WARNING: Removing unreachable block (ram,0x0001059b2324) */
/* WARNING: Removing unreachable block (ram,0x0001059b2658) */

void FUN_1059b2030(long param_1,undefined *param_2,undefined8 *param_3,undefined *param_4,
                  undefined *param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 *unaff_x25;
  undefined *unaff_x26;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 auStack_198 [3];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined8 auStack_150 [2];
  char cStack_139;
  long lStack_138;
  undefined *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 *puStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 auStack_b8 [3];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  puVar8 = param_4;
  puVar9 = param_5;
  puVar6 = param_6;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f319248;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_b8,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f319248;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,puVar2);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar1 = &UNK_10f319248;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_88,puVar1);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      unaff_x26 = &UNK_10f319248;
    }
    else {
      _objc_retainAutorelease(param_5);
      unaff_x26 = param_5;
      func_0x00010bdc3520();
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_70,unaff_x26);
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    func_0x00010007e1e8(&uStack_d8,auStack_b8,&lStack_58,4);
    puVar1 = &UNK_1108c9f98;
    unaff_x25 = &uStack_d8;
    puVar2 = &uStack_d8;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_c0 = unaff_x25;
    func_0x00010007e5dc(&puStack_c0);
    lVar10 = 0;
    puVar8 = param_6;
    do {
      if ((&cStack_59)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x60);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  puStack_120 = auStack_b8;
  do {
    unaff_x25 = unaff_x25 + -3;
  } while (unaff_x25 != puStack_120);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_e8 = FUN_1059b2364;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puStack_130 = unaff_x26;
  puStack_128 = unaff_x25;
  puStack_118 = puVar3;
  puStack_110 = param_5;
  puStack_108 = param_4;
  puStack_100 = param_3;
  puStack_f8 = param_2;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  _objc_retain(puVar8);
  _objc_retain(puVar9);
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f319248;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_198,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f319248;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_180,puVar5);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar3 = &UNK_10f319248;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar3 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_168,puVar3);
    _objc_retain(puVar9);
    if (puVar9 == (undefined *)0x0) {
      puVar3 = &UNK_10f319248;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar3 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_150,puVar3);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x00010007e1e8(&uStack_1b8,auStack_198,&lStack_138,4);
    puVar7 = &UNK_1108c9fe8;
    unaff_x25 = &uStack_1b8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1108c9fe8,&uStack_1b8,puVar6);
    puStack_1a0 = unaff_x25;
    func_0x00010007e5dc(&puStack_1a0);
    lVar10 = 0;
    do {
      if ((&cStack_139)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_150 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x60);
  }
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar2);
  puVar6 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_138) {
    ___stack_chk_fail();
    _objc_release(puVar9);
    do {
      unaff_x25 = unaff_x25 + -3;
    } while (unaff_x25 != auStack_198);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar2);
    _objc_release(puVar1);
    __Unwind_Resume();
    puStack_1e8 = (undefined1 *)&uStack_200;
    pcStack_1c8 = FUN_1059b2698;
    if (puVar6 != (undefined *)0x0) {
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      puStack_1e0 = puVar2;
      puStack_1d8 = puVar1;
      ppuStack_1d0 = &puStack_f0;
      (**(code **)(**(long **)(puVar6 + 8) + 0x18))
                (*(long **)(puVar6 + 8),&UNK_1108ca038,&uStack_200,puVar7);
      func_0x00010007e5dc(&puStack_1e8);
    }
    return;
  }
  return;
}



/* Entry: 1059b2364; end: 1059b2697;  */

/* WARNING: Removing unreachable block (ram,0x0001059b2658) */

void FUN_1059b2364(long param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *unaff_x25;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 auStack_b8 [3];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f319248;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_b8,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f319248;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar1 = &UNK_10f319248;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_88,puVar1);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      puVar1 = &UNK_10f319248;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_70,puVar1);
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    func_0x00010007e1e8(&uStack_d8,auStack_b8,&lStack_58,4);
    puVar1 = &UNK_1108c9fe8;
    unaff_x25 = &uStack_d8;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1108c9fe8,&uStack_d8,param_6);
    puStack_c0 = unaff_x25;
    func_0x00010007e5dc(&puStack_c0);
    lVar3 = 0;
    do {
      if ((&cStack_59)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x60);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_5);
    do {
      unaff_x25 = unaff_x25 + -3;
    } while (unaff_x25 != auStack_b8);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_2);
    __Unwind_Resume();
    puStack_108 = (undefined1 *)&uStack_120;
    pcStack_e8 = FUN_1059b2698;
    if (puVar2 != (undefined *)0x0) {
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_110 = 0;
      puStack_100 = param_3;
      puStack_f8 = param_2;
      puStack_f0 = &stack0xfffffffffffffff0;
      (**(code **)(**(long **)(puVar2 + 8) + 0x18))
                (*(long **)(puVar2 + 8),&UNK_1108ca038,&uStack_120,puVar1);
      func_0x00010007e5dc(&puStack_108);
    }
    return;
  }
  return;
}



/* Entry: 1059b2698; end: 1059b270f;  */

void FUN_1059b2698(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1108ca038,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1059b2710; end: 1059b29cf;  */

/* WARNING: Removing unreachable block (ram,0x0001059b2998) */
/* WARNING: Removing unreachable block (ram,0x0001059b2ef4) */

void FUN_1059b2710(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 *puStack_260;
  undefined *puStack_258;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  undefined8 auStack_218 [3];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  undefined *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar5 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  puVar7 = param_4;
  puVar9 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f319248;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f319248;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,puVar2);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      unaff_x25 = (undefined8 *)&UNK_10f319248;
    }
    else {
      _objc_retainAutorelease(param_4);
      unaff_x25 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,unaff_x25);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar1 = &UNK_1108ca088;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar10 = 0;
    puVar2 = puVar5;
    puVar7 = param_5;
    do {
      if ((&cStack_59)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar10 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puStack_f8 = auStack_a0;
  do {
    unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (undefined8 *)puStack_f8);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_c8 = FUN_1059b29d0;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar5 = puVar2;
  puVar8 = puVar7;
  puStack_100 = (undefined1 *)unaff_x24;
  puStack_f0 = puVar3;
  puStack_e8 = param_4;
  puStack_e0 = param_3;
  puStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f319248;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_138,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f319248;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_120,puVar5);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    func_0x00010007e1e8(&uStack_158,auStack_138,&lStack_108,2);
    puVar6 = &UNK_1108ca0d8;
    puVar5 = &uStack_158;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_140 = &uStack_158;
    func_0x00010007e5dc(&puStack_140);
    lVar10 = 0;
    puVar8 = puVar7;
    do {
      if ((&cStack_109)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
    ___stack_chk_fail();
    _objc_release(puVar2);
    if (cStack_121 < '\0') {
      __ZdlPv(auStack_138[0]);
    }
    _objc_release(puVar2);
    _objc_release(puVar1);
    __Unwind_Resume();
    pcStack_168 = FUN_1059b2c00;
    lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = puVar6;
    ppuStack_170 = &puStack_d0;
    _objc_retain(puVar6);
    _objc_retain(puVar5);
    _objc_retain(puVar8);
    _objc_retain(puVar9);
    if (puVar3 != (undefined *)0x0) {
      plVar11 = *(long **)(puVar3 + 8);
      _objc_retain(puVar6);
      if (puVar6 == (undefined *)0x0) {
        puVar1 = &UNK_10f319248;
      }
      else {
        puVar1 = puVar6;
        _objc_retainAutorelease(puVar6);
        func_0x00010bdc3520();
      }
      _objc_release(puVar6);
      func_0x00010002b838(auStack_218,puVar1);
      _objc_retain(puVar5);
      if (puVar5 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f319248;
      }
      else {
        _objc_retainAutorelease(puVar5);
        puVar2 = puVar5;
        func_0x00010bdc3520(puVar5);
      }
      _objc_release(puVar5);
      func_0x00010002b838(auStack_200,puVar2);
      _objc_retain(puVar8);
      if (puVar8 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f319248;
      }
      else {
        _objc_retainAutorelease(puVar8);
        puVar2 = puVar8;
        func_0x00010bdc3520(puVar8);
      }
      _objc_release(puVar8);
      func_0x00010002b838(auStack_1e8,puVar2);
      _objc_retain(puVar9);
      if (puVar9 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f319248;
      }
      else {
        _objc_retainAutorelease(puVar9);
        puVar2 = puVar9;
        func_0x00010bdc3520(puVar9);
      }
      _objc_release(puVar9);
      func_0x00010002b838(auStack_1d0,puVar2);
      uStack_238 = 0;
      uStack_230 = 0;
      uStack_228 = 0;
      func_0x00010007e1e8(&uStack_238,auStack_218,&lStack_1b8,4);
      puVar1 = &UNK_1108ca128;
      unaff_x25 = &uStack_238;
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1108ca128,&uStack_238,param_6);
      puStack_220 = unaff_x25;
      func_0x00010007e5dc(&puStack_220);
      lVar10 = 0;
      do {
        if ((&cStack_1b9)[lVar10] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1d0 + lVar10));
        }
        lVar10 = lVar10 + -0x18;
      } while (lVar10 != -0x60);
    }
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar5);
    puVar3 = puVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b8) {
      ___stack_chk_fail();
      _objc_release(puVar9);
      do {
        unaff_x25 = unaff_x25 + -3;
      } while (unaff_x25 != auStack_218);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar5);
      _objc_release(puVar6);
      __Unwind_Resume();
      puStack_268 = (undefined1 *)&uStack_280;
      pcStack_248 = FUN_1059b2f34;
      if (puVar3 != (undefined *)0x0) {
        uStack_280 = 0;
        uStack_278 = 0;
        uStack_270 = 0;
        puStack_260 = puVar5;
        puStack_258 = puVar6;
        pppuStack_250 = &ppuStack_170;
        (**(code **)(**(long **)(puVar3 + 8) + 0x18))
                  (*(long **)(puVar3 + 8),&UNK_1108ca178,&uStack_280,puVar1);
        func_0x00010007e5dc(&puStack_268);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1059b29d0; end: 1059b2bff;  */

/* WARNING: Removing unreachable block (ram,0x0001059b2ef4) */

void FUN_1059b29d0(long param_1,undefined *param_2,undefined8 *param_3,undefined *param_4,
                  undefined *param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 *unaff_x25;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined *puStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined8 auStack_158 [3];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
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
  puVar1 = param_2;
  puVar2 = param_3;
  puVar6 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f319248;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f319248;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_1108ca0d8;
    puVar2 = &uStack_98;
    (**(code **)(*plVar8 + 0x18))(plVar8);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar7 = 0;
    puVar6 = param_4;
    do {
      if ((&cStack_49)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_3);
    if (cStack_61 < '\0') {
      __ZdlPv(auStack_78[0]);
    }
    _objc_release(param_3);
    _objc_release(param_2);
    __Unwind_Resume();
    pcStack_a8 = FUN_1059b2c00;
    lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = puVar1;
    puStack_b0 = &stack0xfffffffffffffff0;
    _objc_retain(puVar1);
    _objc_retain(puVar2);
    _objc_retain(puVar6);
    _objc_retain(param_5);
    if (puVar3 != (undefined *)0x0) {
      plVar8 = *(long **)(puVar3 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar3 = &UNK_10f319248;
      }
      else {
        puVar3 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_158,puVar3);
      _objc_retain(puVar2);
      if (puVar2 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)&UNK_10f319248;
      }
      else {
        _objc_retainAutorelease(puVar2);
        puVar4 = puVar2;
        func_0x00010bdc3520(puVar2);
      }
      _objc_release(puVar2);
      func_0x00010002b838(auStack_140,puVar4);
      _objc_retain(puVar6);
      if (puVar6 == (undefined *)0x0) {
        puVar3 = &UNK_10f319248;
      }
      else {
        _objc_retainAutorelease(puVar6);
        puVar3 = puVar6;
        func_0x00010bdc3520(puVar6);
      }
      _objc_release(puVar6);
      func_0x00010002b838(auStack_128,puVar3);
      _objc_retain(param_5);
      if (param_5 == (undefined *)0x0) {
        puVar3 = &UNK_10f319248;
      }
      else {
        _objc_retainAutorelease(param_5);
        puVar3 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x00010002b838(auStack_110,puVar3);
      uStack_178 = 0;
      uStack_170 = 0;
      uStack_168 = 0;
      func_0x00010007e1e8(&uStack_178,auStack_158,&lStack_f8,4);
      puVar5 = &UNK_1108ca128;
      unaff_x25 = &uStack_178;
      (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108ca128,&uStack_178,param_6);
      puStack_160 = unaff_x25;
      func_0x00010007e5dc(&puStack_160);
      lVar7 = 0;
      do {
        if ((&cStack_f9)[lVar7] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar7));
        }
        lVar7 = lVar7 + -0x18;
      } while (lVar7 != -0x60);
    }
    _objc_release(param_5);
    _objc_release(puVar6);
    _objc_release(puVar2);
    puVar3 = puVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
      ___stack_chk_fail();
      _objc_release(param_5);
      do {
        unaff_x25 = unaff_x25 + -3;
      } while (unaff_x25 != auStack_158);
      _objc_release(param_5);
      _objc_release(puVar6);
      _objc_release(puVar2);
      _objc_release(puVar1);
      __Unwind_Resume();
      puStack_1a8 = (undefined1 *)&uStack_1c0;
      pcStack_188 = FUN_1059b2f34;
      if (puVar3 != (undefined *)0x0) {
        uStack_1c0 = 0;
        uStack_1b8 = 0;
        uStack_1b0 = 0;
        puStack_1a0 = puVar2;
        puStack_198 = puVar1;
        ppuStack_190 = &puStack_b0;
        (**(code **)(**(long **)(puVar3 + 8) + 0x18))
                  (*(long **)(puVar3 + 8),&UNK_1108ca178,&uStack_1c0,puVar5);
        func_0x00010007e5dc(&puStack_1a8);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1059b2c00; end: 1059b2f33;  */

/* WARNING: Removing unreachable block (ram,0x0001059b2ef4) */

void FUN_1059b2c00(long param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *unaff_x25;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 auStack_b8 [3];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f319248;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_b8,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f319248;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar1 = &UNK_10f319248;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_88,puVar1);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      puVar1 = &UNK_10f319248;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_70,puVar1);
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    func_0x00010007e1e8(&uStack_d8,auStack_b8,&lStack_58,4);
    puVar1 = &UNK_1108ca128;
    unaff_x25 = &uStack_d8;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1108ca128,&uStack_d8,param_6);
    puStack_c0 = unaff_x25;
    func_0x00010007e5dc(&puStack_c0);
    lVar3 = 0;
    do {
      if ((&cStack_59)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x60);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_5);
    do {
      unaff_x25 = unaff_x25 + -3;
    } while (unaff_x25 != auStack_b8);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_2);
    __Unwind_Resume();
    puStack_108 = (undefined1 *)&uStack_120;
    pcStack_e8 = FUN_1059b2f34;
    if (puVar2 != (undefined *)0x0) {
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_110 = 0;
      puStack_100 = param_3;
      puStack_f8 = param_2;
      puStack_f0 = &stack0xfffffffffffffff0;
      (**(code **)(**(long **)(puVar2 + 8) + 0x18))
                (*(long **)(puVar2 + 8),&UNK_1108ca178,&uStack_120,puVar1);
      func_0x00010007e5dc(&puStack_108);
    }
    return;
  }
  return;
}



/* Entry: 1059b2f34; end: 1059b2fab;  */

void FUN_1059b2f34(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1108ca178,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1059b2fac; end: 1059b32df;  */

/* WARNING: Removing unreachable block (ram,0x0001059b6134) */
/* WARNING: Removing unreachable block (ram,0x0001059b5acc) */
/* WARNING: Removing unreachable block (ram,0x0001059b5464) */
/* WARNING: Removing unreachable block (ram,0x0001059b4e04) */
/* WARNING: Removing unreachable block (ram,0x0001059b4808) */
/* WARNING: Removing unreachable block (ram,0x0001059b3f70) */
/* WARNING: Removing unreachable block (ram,0x0001059b3908) */
/* WARNING: Removing unreachable block (ram,0x0001059b32a0) */
/* WARNING: Removing unreachable block (ram,0x0001059b35d4) */
/* WARNING: Removing unreachable block (ram,0x0001059b3c3c) */
/* WARNING: Removing unreachable block (ram,0x0001059b42a4) */
/* WARNING: Removing unreachable block (ram,0x0001059b4b3c) */
/* WARNING: Removing unreachable block (ram,0x0001059b5130) */
/* WARNING: Removing unreachable block (ram,0x0001059b5798) */
/* WARNING: Removing unreachable block (ram,0x0001059b5e00) */
/* WARNING: Removing unreachable block (ram,0x0001059b6468) */

char * FUN_1059b2fac(long param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                    char *param_6)

{
  char *pcVar1;
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
  undefined8 *puVar17;
  long lVar18;
  long *plVar19;
  char *unaff_x25;
  char *unaff_x26;
  undefined8 uStack_f18;
  undefined8 uStack_f10;
  undefined8 uStack_f08;
  undefined8 *puStack_f00;
  undefined8 auStack_ef8 [2];
  char cStack_ee1;
  undefined8 auStack_ee0 [2];
  char cStack_ec9;
  long lStack_ec8;
  char *pcStack_ec0;
  char *pcStack_eb8;
  char *pcStack_eb0;
  char *pcStack_ea8;
  char *pcStack_ea0;
  char *pcStack_e98;
  undefined8 ***pppuStack_e90;
  code *pcStack_e88;
  char acStack_e78 [24];
  char *pcStack_e60;
  char acStack_e58 [24];
  undefined1 auStack_e40 [24];
  undefined1 auStack_e28 [24];
  undefined8 auStack_e10 [2];
  char cStack_df9;
  long lStack_df8;
  char *pcStack_df0;
  char *pcStack_de8;
  char *pcStack_de0;
  char *pcStack_dd8;
  char *pcStack_dd0;
  char *pcStack_dc8;
  char *pcStack_dc0;
  char *pcStack_db8;
  undefined8 ***pppuStack_db0;
  code *pcStack_da8;
  char acStack_d98 [24];
  char *pcStack_d80;
  char acStack_d78 [24];
  undefined1 auStack_d60 [24];
  undefined1 auStack_d48 [24];
  undefined8 auStack_d30 [2];
  char cStack_d19;
  long lStack_d18;
  char *pcStack_d10;
  char *pcStack_d08;
  char *pcStack_d00;
  char *pcStack_cf8;
  char *pcStack_cf0;
  char *pcStack_ce8;
  char *pcStack_ce0;
  char *pcStack_cd8;
  undefined8 ***pppuStack_cd0;
  code *pcStack_cc8;
  char acStack_cb8 [24];
  char *pcStack_ca0;
  char acStack_c98 [24];
  undefined1 auStack_c80 [24];
  undefined1 auStack_c68 [24];
  undefined8 auStack_c50 [2];
  char cStack_c39;
  long lStack_c38;
  char *pcStack_c30;
  char *pcStack_c28;
  char *pcStack_c20;
  char *pcStack_c18;
  char *pcStack_c10;
  char *pcStack_c08;
  char *pcStack_c00;
  char *pcStack_bf8;
  undefined8 ***pppuStack_bf0;
  code *pcStack_be8;
  char acStack_bd8 [24];
  char *pcStack_bc0;
  char acStack_bb8 [24];
  undefined1 auStack_ba0 [24];
  undefined1 auStack_b88 [24];
  undefined8 auStack_b70 [2];
  char cStack_b59;
  long lStack_b58;
  char *pcStack_b50;
  char *pcStack_b48;
  char *pcStack_b40;
  char *pcStack_b38;
  char *pcStack_b30;
  char *pcStack_b28;
  char *pcStack_b20;
  char *pcStack_b18;
  undefined8 ***pppuStack_b10;
  code *pcStack_b08;
  char acStack_af8 [24];
  char *pcStack_ae0;
  char acStack_ad8 [24];
  undefined1 auStack_ac0 [24];
  undefined1 auStack_aa8 [24];
  undefined8 auStack_a90 [2];
  char cStack_a79;
  long lStack_a78;
  char *pcStack_a70;
  char *pcStack_a68;
  char *pcStack_a60;
  char *pcStack_a58;
  char *pcStack_a50;
  char *pcStack_a48;
  char *pcStack_a40;
  char *pcStack_a38;
  undefined8 ***pppuStack_a30;
  code *pcStack_a28;
  char acStack_a18 [24];
  char *pcStack_a00;
  char acStack_9f8 [24];
  undefined1 auStack_9e0 [24];
  undefined1 auStack_9c8 [24];
  undefined8 auStack_9b0 [2];
  char cStack_999;
  long lStack_998;
  char *pcStack_990;
  char *pcStack_988;
  char *pcStack_980;
  char *pcStack_978;
  char *pcStack_970;
  char *pcStack_968;
  char *pcStack_960;
  char *pcStack_958;
  undefined8 ***pppuStack_950;
  code *pcStack_948;
  char acStack_938 [24];
  char *pcStack_920;
  char acStack_918 [24];
  undefined1 auStack_900 [24];
  undefined1 auStack_8e8 [24];
  undefined8 auStack_8d0 [2];
  char cStack_8b9;
  long lStack_8b8;
  char *pcStack_8b0;
  char *pcStack_8a8;
  char *pcStack_8a0;
  char *pcStack_898;
  char *pcStack_890;
  char *pcStack_888;
  char *pcStack_880;
  char *pcStack_878;
  undefined8 ***pppuStack_870;
  code *pcStack_868;
  char acStack_860 [24];
  undefined1 *puStack_848;
  char acStack_840 [24];
  undefined1 auStack_828 [24];
  undefined8 auStack_810 [2];
  char cStack_7f9;
  long lStack_7f8;
  char *pcStack_7f0;
  char *pcStack_7e8;
  char *pcStack_7e0;
  char *pcStack_7d8;
  char *pcStack_7d0;
  char *pcStack_7c8;
  char *pcStack_7c0;
  char *pcStack_7b8;
  undefined8 ***pppuStack_7b0;
  code *pcStack_7a8;
  char acStack_798 [24];
  char *pcStack_780;
  char acStack_778 [24];
  undefined1 auStack_760 [24];
  undefined1 auStack_748 [24];
  undefined8 auStack_730 [2];
  char cStack_719;
  long lStack_718;
  char *pcStack_710;
  char *pcStack_708;
  char *pcStack_700;
  char *pcStack_6f8;
  char *pcStack_6f0;
  char *pcStack_6e8;
  char *pcStack_6e0;
  char *pcStack_6d8;
  undefined8 ***pppuStack_6d0;
  code *pcStack_6c8;
  char acStack_6b8 [24];
  char *pcStack_6a0;
  char acStack_698 [24];
  undefined1 auStack_680 [24];
  undefined1 auStack_668 [24];
  undefined8 auStack_650 [2];
  char cStack_639;
  long lStack_638;
  char *pcStack_630;
  char *pcStack_628;
  char *pcStack_620;
  char *pcStack_618;
  undefined8 *puStack_610;
  char *pcStack_608;
  char *pcStack_600;
  char *pcStack_5f8;
  undefined8 ***pppuStack_5f0;
  code *pcStack_5e8;
  char acStack_5d8 [24];
  char *pcStack_5c0;
  undefined8 auStack_5b8 [2];
  char cStack_5a1;
  undefined8 auStack_5a0 [2];
  char cStack_589;
  long lStack_588;
  char *pcStack_580;
  char *pcStack_578;
  char *pcStack_570;
  char *pcStack_568;
  char *pcStack_560;
  char *pcStack_558;
  undefined8 ***pppuStack_550;
  code *pcStack_548;
  char acStack_538 [24];
  char *pcStack_520;
  char acStack_518 [24];
  undefined1 auStack_500 [24];
  undefined1 auStack_4e8 [24];
  undefined8 auStack_4d0 [2];
  char cStack_4b9;
  long lStack_4b8;
  char *pcStack_4b0;
  char *pcStack_4a8;
  char *pcStack_4a0;
  char *pcStack_498;
  char *pcStack_490;
  char *pcStack_488;
  char *pcStack_480;
  char *pcStack_478;
  undefined8 ***pppuStack_470;
  code *pcStack_468;
  char acStack_458 [24];
  char *pcStack_440;
  char acStack_438 [24];
  undefined1 auStack_420 [24];
  undefined1 auStack_408 [24];
  undefined8 auStack_3f0 [2];
  char cStack_3d9;
  long lStack_3d8;
  char *pcStack_3d0;
  char *pcStack_3c8;
  char *pcStack_3c0;
  char *pcStack_3b8;
  char *pcStack_3b0;
  char *pcStack_3a8;
  char *pcStack_3a0;
  char *pcStack_398;
  undefined8 ***pppuStack_390;
  code *pcStack_388;
  char acStack_378 [24];
  char *pcStack_360;
  char acStack_358 [24];
  undefined1 auStack_340 [24];
  undefined1 auStack_328 [24];
  undefined8 auStack_310 [2];
  char cStack_2f9;
  long lStack_2f8;
  char *pcStack_2f0;
  char *pcStack_2e8;
  char *pcStack_2e0;
  char *pcStack_2d8;
  char *pcStack_2d0;
  char *pcStack_2c8;
  char *pcStack_2c0;
  char *pcStack_2b8;
  undefined1 ***pppuStack_2b0;
  code *pcStack_2a8;
  char acStack_298 [24];
  char *pcStack_280;
  char acStack_278 [24];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined8 auStack_230 [2];
  char cStack_219;
  long lStack_218;
  char *pcStack_210;
  char *pcStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  char *pcStack_1f0;
  char *pcStack_1e8;
  char *pcStack_1e0;
  char *pcStack_1d8;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  char acStack_1b8 [24];
  char *pcStack_1a0;
  char acStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined8 auStack_150 [2];
  char cStack_139;
  long lStack_138;
  char *pcStack_130;
  char *pcStack_128;
  char *pcStack_120;
  char *pcStack_118;
  char *pcStack_110;
  char *pcStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  char acStack_d8 [24];
  char *pcStack_c0;
  char acStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar9 = param_3;
  pcVar11 = param_4;
  pcVar6 = param_5;
  pcVar4 = param_6;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_1 != 0) {
    plVar19 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(acStack_b8,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,pcVar1);
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
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      unaff_x26 = param_5;
      func_0x00010bdc3520();
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_70,unaff_x26);
    acStack_d8[0] = '\0';
    acStack_d8[1] = '\0';
    acStack_d8[2] = '\0';
    acStack_d8[3] = '\0';
    acStack_d8[4] = '\0';
    acStack_d8[5] = '\0';
    acStack_d8[6] = '\0';
    acStack_d8[7] = '\0';
    acStack_d8[8] = '\0';
    acStack_d8[9] = '\0';
    acStack_d8[10] = '\0';
    acStack_d8[0xb] = '\0';
    acStack_d8[0xc] = '\0';
    acStack_d8[0xd] = '\0';
    acStack_d8[0xe] = '\0';
    acStack_d8[0xf] = '\0';
    acStack_d8[0x10] = '\0';
    acStack_d8[0x11] = '\0';
    acStack_d8[0x12] = '\0';
    acStack_d8[0x13] = '\0';
    acStack_d8[0x14] = '\0';
    acStack_d8[0x15] = '\0';
    acStack_d8[0x16] = '\0';
    acStack_d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_d8,acStack_b8,&lStack_58,4);
    pcVar1 = "";
    unaff_x25 = acStack_d8;
    pcVar9 = acStack_d8;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    pcStack_c0 = unaff_x25;
    func_0x00010007e5dc(&pcStack_c0);
    lVar18 = 0;
    pcVar11 = param_6;
    do {
      if ((&cStack_59)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x60);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  pcStack_120 = acStack_b8;
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != pcStack_120);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_e8 = FUN_1059b32e0;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar10 = pcVar1;
  pcVar7 = pcVar9;
  pcVar8 = pcVar11;
  pcVar15 = pcVar6;
  pcVar14 = pcVar4;
  pcStack_130 = unaff_x26;
  pcStack_128 = unaff_x25;
  pcStack_118 = pcVar2;
  pcStack_110 = param_5;
  pcStack_108 = param_4;
  pcStack_100 = param_3;
  pcStack_f8 = param_2;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar9);
  _objc_retain(pcVar11);
  _objc_retain(pcVar6);
  if (pcVar3 != (char *)0x0) {
    plVar19 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(acStack_198,pcVar2);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar2 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_180,pcVar2);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar2 = pcVar11;
      func_0x00010bdc3520(pcVar11);
    }
    _objc_release(pcVar11);
    func_0x00010002b838(auStack_168,pcVar2);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      unaff_x26 = pcVar6;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_150,unaff_x26);
    acStack_1b8[0] = '\0';
    acStack_1b8[1] = '\0';
    acStack_1b8[2] = '\0';
    acStack_1b8[3] = '\0';
    acStack_1b8[4] = '\0';
    acStack_1b8[5] = '\0';
    acStack_1b8[6] = '\0';
    acStack_1b8[7] = '\0';
    acStack_1b8[8] = '\0';
    acStack_1b8[9] = '\0';
    acStack_1b8[10] = '\0';
    acStack_1b8[0xb] = '\0';
    acStack_1b8[0xc] = '\0';
    acStack_1b8[0xd] = '\0';
    acStack_1b8[0xe] = '\0';
    acStack_1b8[0xf] = '\0';
    acStack_1b8[0x10] = '\0';
    acStack_1b8[0x11] = '\0';
    acStack_1b8[0x12] = '\0';
    acStack_1b8[0x13] = '\0';
    acStack_1b8[0x14] = '\0';
    acStack_1b8[0x15] = '\0';
    acStack_1b8[0x16] = '\0';
    acStack_1b8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1b8,acStack_198,&lStack_138,4);
    pcVar10 = "";
    unaff_x25 = acStack_1b8;
    pcVar7 = acStack_1b8;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    pcStack_1a0 = unaff_x25;
    func_0x00010007e5dc(&pcStack_1a0);
    lVar18 = 0;
    pcVar8 = pcVar4;
    do {
      if ((&cStack_139)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_150 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x60);
  }
  _objc_release(pcVar6);
  _objc_release(pcVar11);
  _objc_release(pcVar9);
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return pcVar4;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  pcStack_200 = acStack_198;
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != pcStack_200);
  _objc_release(pcVar6);
  _objc_release(pcVar11);
  _objc_release(pcVar9);
  _objc_release(pcVar1);
  pcVar5 = pcVar4;
  __Unwind_Resume();
  pcStack_1c8 = FUN_1059b3614;
  lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar10;
  pcVar3 = pcVar7;
  pcVar13 = pcVar8;
  pcVar16 = pcVar15;
  pcVar12 = pcVar14;
  pcStack_210 = unaff_x26;
  pcStack_208 = unaff_x25;
  pcStack_1f8 = pcVar4;
  pcStack_1f0 = pcVar6;
  pcStack_1e8 = pcVar11;
  pcStack_1e0 = pcVar9;
  pcStack_1d8 = pcVar1;
  ppuStack_1d0 = &puStack_f0;
  _objc_retain(pcVar10);
  _objc_retain(pcVar7);
  _objc_retain(pcVar8);
  _objc_retain(pcVar15);
  if (pcVar5 != (char *)0x0) {
    plVar19 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar10;
      _objc_retainAutorelease(pcVar10);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar10);
    func_0x00010002b838(acStack_278,pcVar1);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar1 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_260,pcVar1);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar1 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_248,pcVar1);
    _objc_retain(pcVar15);
    if (pcVar15 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(pcVar15);
      unaff_x26 = pcVar15;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar15);
    func_0x00010002b838(auStack_230,unaff_x26);
    acStack_298[0] = '\0';
    acStack_298[1] = '\0';
    acStack_298[2] = '\0';
    acStack_298[3] = '\0';
    acStack_298[4] = '\0';
    acStack_298[5] = '\0';
    acStack_298[6] = '\0';
    acStack_298[7] = '\0';
    acStack_298[8] = '\0';
    acStack_298[9] = '\0';
    acStack_298[10] = '\0';
    acStack_298[0xb] = '\0';
    acStack_298[0xc] = '\0';
    acStack_298[0xd] = '\0';
    acStack_298[0xe] = '\0';
    acStack_298[0xf] = '\0';
    acStack_298[0x10] = '\0';
    acStack_298[0x11] = '\0';
    acStack_298[0x12] = '\0';
    acStack_298[0x13] = '\0';
    acStack_298[0x14] = '\0';
    acStack_298[0x15] = '\0';
    acStack_298[0x16] = '\0';
    acStack_298[0x17] = '\0';
    func_0x00010007e1e8(acStack_298,acStack_278,&lStack_218,4);
    pcVar2 = "";
    unaff_x25 = acStack_298;
    pcVar3 = acStack_298;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    pcStack_280 = unaff_x25;
    func_0x00010007e5dc(&pcStack_280);
    lVar18 = 0;
    pcVar13 = pcVar14;
    do {
      if ((&cStack_219)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_230 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x60);
  }
  _objc_release(pcVar15);
  _objc_release(pcVar8);
  _objc_release(pcVar7);
  pcVar1 = pcVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_218) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar15);
  pcStack_2e0 = acStack_278;
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != pcStack_2e0);
  _objc_release(pcVar15);
  _objc_release(pcVar8);
  _objc_release(pcVar7);
  _objc_release(pcVar10);
  pcVar6 = pcVar1;
  __Unwind_Resume();
  pcStack_2a8 = FUN_1059b3948;
  lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar2;
  pcVar11 = pcVar3;
  pcVar4 = pcVar13;
  pcVar14 = pcVar16;
  pcVar5 = pcVar12;
  pcStack_2f0 = unaff_x26;
  pcStack_2e8 = unaff_x25;
  pcStack_2d8 = pcVar1;
  pcStack_2d0 = pcVar15;
  pcStack_2c8 = pcVar8;
  pcStack_2c0 = pcVar7;
  pcStack_2b8 = pcVar10;
  pppuStack_2b0 = &ppuStack_1d0;
  _objc_retain(pcVar2);
  _objc_retain(pcVar3);
  _objc_retain(pcVar13);
  _objc_retain(pcVar16);
  if (pcVar6 != (char *)0x0) {
    plVar19 = *(long **)(pcVar6 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    func_0x00010002b838(acStack_358,pcVar1);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar3);
      pcVar1 = pcVar3;
      func_0x00010bdc3520(pcVar3);
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_340,pcVar1);
    _objc_retain(pcVar13);
    if (pcVar13 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar13);
      pcVar1 = pcVar13;
      func_0x00010bdc3520(pcVar13);
    }
    _objc_release(pcVar13);
    func_0x00010002b838(auStack_328,pcVar1);
    _objc_retain(pcVar16);
    if (pcVar16 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(pcVar16);
      unaff_x26 = pcVar16;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar16);
    func_0x00010002b838(auStack_310,unaff_x26);
    acStack_378[0] = '\0';
    acStack_378[1] = '\0';
    acStack_378[2] = '\0';
    acStack_378[3] = '\0';
    acStack_378[4] = '\0';
    acStack_378[5] = '\0';
    acStack_378[6] = '\0';
    acStack_378[7] = '\0';
    acStack_378[8] = '\0';
    acStack_378[9] = '\0';
    acStack_378[10] = '\0';
    acStack_378[0xb] = '\0';
    acStack_378[0xc] = '\0';
    acStack_378[0xd] = '\0';
    acStack_378[0xe] = '\0';
    acStack_378[0xf] = '\0';
    acStack_378[0x10] = '\0';
    acStack_378[0x11] = '\0';
    acStack_378[0x12] = '\0';
    acStack_378[0x13] = '\0';
    acStack_378[0x14] = '\0';
    acStack_378[0x15] = '\0';
    acStack_378[0x16] = '\0';
    acStack_378[0x17] = '\0';
    func_0x00010007e1e8(acStack_378,acStack_358,&lStack_2f8,4);
    pcVar9 = "";
    unaff_x25 = acStack_378;
    pcVar11 = acStack_378;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    pcStack_360 = unaff_x25;
    func_0x00010007e5dc(&pcStack_360);
    lVar18 = 0;
    pcVar4 = pcVar12;
    do {
      if ((&cStack_2f9)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_310 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x60);
  }
  _objc_release(pcVar16);
  _objc_release(pcVar13);
  _objc_release(pcVar3);
  pcVar1 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2f8) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar16);
  pcStack_3c0 = acStack_358;
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != pcStack_3c0);
  _objc_release(pcVar16);
  _objc_release(pcVar13);
  _objc_release(pcVar3);
  _objc_release(pcVar2);
  pcVar7 = pcVar1;
  __Unwind_Resume();
  pcStack_388 = FUN_1059b3c7c;
  lStack_3d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar9;
  pcVar10 = pcVar11;
  pcVar8 = pcVar4;
  pcVar15 = pcVar14;
  pcVar12 = pcVar5;
  pcStack_3d0 = unaff_x26;
  pcStack_3c8 = unaff_x25;
  pcStack_3b8 = pcVar1;
  pcStack_3b0 = pcVar16;
  pcStack_3a8 = pcVar13;
  pcStack_3a0 = pcVar3;
  pcStack_398 = pcVar2;
  pppuStack_390 = &pppuStack_2b0;
  _objc_retain(pcVar9);
  _objc_retain(pcVar11);
  _objc_retain(pcVar4);
  _objc_retain(pcVar14);
  if (pcVar7 != (char *)0x0) {
    plVar19 = *(long **)(pcVar7 + 8);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar9;
      _objc_retainAutorelease(pcVar9);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar9);
    func_0x00010002b838(acStack_438,pcVar1);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar1 = pcVar11;
      func_0x00010bdc3520(pcVar11);
    }
    _objc_release(pcVar11);
    func_0x00010002b838(auStack_420,pcVar1);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar1 = pcVar4;
      func_0x00010bdc3520(pcVar4);
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_408,pcVar1);
    _objc_retain(pcVar14);
    if (pcVar14 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(pcVar14);
      unaff_x26 = pcVar14;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar14);
    func_0x00010002b838(auStack_3f0,unaff_x26);
    acStack_458[0] = '\0';
    acStack_458[1] = '\0';
    acStack_458[2] = '\0';
    acStack_458[3] = '\0';
    acStack_458[4] = '\0';
    acStack_458[5] = '\0';
    acStack_458[6] = '\0';
    acStack_458[7] = '\0';
    acStack_458[8] = '\0';
    acStack_458[9] = '\0';
    acStack_458[10] = '\0';
    acStack_458[0xb] = '\0';
    acStack_458[0xc] = '\0';
    acStack_458[0xd] = '\0';
    acStack_458[0xe] = '\0';
    acStack_458[0xf] = '\0';
    acStack_458[0x10] = '\0';
    acStack_458[0x11] = '\0';
    acStack_458[0x12] = '\0';
    acStack_458[0x13] = '\0';
    acStack_458[0x14] = '\0';
    acStack_458[0x15] = '\0';
    acStack_458[0x16] = '\0';
    acStack_458[0x17] = '\0';
    func_0x00010007e1e8(acStack_458,acStack_438,&lStack_3d8,4);
    pcVar6 = "";
    unaff_x25 = acStack_458;
    pcVar10 = acStack_458;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    pcStack_440 = unaff_x25;
    func_0x00010007e5dc(&pcStack_440);
    lVar18 = 0;
    pcVar8 = pcVar5;
    do {
      if ((&cStack_3d9)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3f0 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x60);
  }
  _objc_release(pcVar14);
  _objc_release(pcVar4);
  _objc_release(pcVar11);
  pcVar1 = pcVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3d8) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar14);
  pcStack_4a0 = acStack_438;
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != pcStack_4a0);
  _objc_release(pcVar14);
  _objc_release(pcVar4);
  _objc_release(pcVar11);
  _objc_release(pcVar9);
  pcVar3 = pcVar1;
  __Unwind_Resume();
  pcStack_468 = FUN_1059b3fb0;
  lStack_4b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar6;
  pcVar7 = pcVar10;
  pcVar5 = pcVar8;
  pcVar13 = pcVar15;
  pcVar16 = pcVar12;
  pcStack_4b0 = unaff_x26;
  pcStack_4a8 = unaff_x25;
  pcStack_498 = pcVar1;
  pcStack_490 = pcVar14;
  pcStack_488 = pcVar4;
  pcStack_480 = pcVar11;
  pcStack_478 = pcVar9;
  pppuStack_470 = &pppuStack_390;
  _objc_retain(pcVar6);
  _objc_retain(pcVar10);
  _objc_retain(pcVar8);
  _objc_retain(pcVar15);
  if (pcVar3 != (char *)0x0) {
    plVar19 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    func_0x00010002b838(acStack_518,pcVar1);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar1 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_500,pcVar1);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar1 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_4e8,pcVar1);
    _objc_retain(pcVar15);
    if (pcVar15 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(pcVar15);
      unaff_x26 = pcVar15;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar15);
    func_0x00010002b838(auStack_4d0,unaff_x26);
    acStack_538[0] = '\0';
    acStack_538[1] = '\0';
    acStack_538[2] = '\0';
    acStack_538[3] = '\0';
    acStack_538[4] = '\0';
    acStack_538[5] = '\0';
    acStack_538[6] = '\0';
    acStack_538[7] = '\0';
    acStack_538[8] = '\0';
    acStack_538[9] = '\0';
    acStack_538[10] = '\0';
    acStack_538[0xb] = '\0';
    acStack_538[0xc] = '\0';
    acStack_538[0xd] = '\0';
    acStack_538[0xe] = '\0';
    acStack_538[0xf] = '\0';
    acStack_538[0x10] = '\0';
    acStack_538[0x11] = '\0';
    acStack_538[0x12] = '\0';
    acStack_538[0x13] = '\0';
    acStack_538[0x14] = '\0';
    acStack_538[0x15] = '\0';
    acStack_538[0x16] = '\0';
    acStack_538[0x17] = '\0';
    func_0x00010007e1e8(acStack_538,acStack_518,&lStack_4b8,4);
    pcVar2 = "";
    unaff_x25 = acStack_538;
    pcVar7 = acStack_538;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    pcStack_520 = unaff_x25;
    func_0x00010007e5dc(&pcStack_520);
    lVar18 = 0;
    pcVar5 = pcVar12;
    do {
      if ((&cStack_4b9)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_4d0 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x60);
  }
  _objc_release(pcVar15);
  _objc_release(pcVar8);
  _objc_release(pcVar10);
  pcVar1 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4b8) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar15);
  pcVar9 = acStack_518;
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != pcVar9);
  _objc_release(pcVar15);
  _objc_release(pcVar8);
  _objc_release(pcVar10);
  _objc_release(pcVar6);
  pcVar3 = pcVar1;
  __Unwind_Resume();
  pcStack_548 = FUN_1059b42e4;
  lStack_588 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar11 = pcVar2;
  pcVar4 = pcVar7;
  pcVar14 = pcVar5;
  pcStack_580 = pcVar9;
  pcStack_578 = pcVar1;
  pcStack_570 = pcVar15;
  pcStack_568 = pcVar8;
  pcStack_560 = pcVar10;
  pcStack_558 = pcVar6;
  pppuStack_550 = &pppuStack_470;
  _objc_retain(pcVar2);
  _objc_retain(pcVar7);
  puVar17 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar19 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    pcVar9 = (char *)auStack_5b8;
    func_0x00010002b838(auStack_5b8,pcVar1);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar1 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_5a0,pcVar1);
    acStack_5d8[0] = '\0';
    acStack_5d8[1] = '\0';
    acStack_5d8[2] = '\0';
    acStack_5d8[3] = '\0';
    acStack_5d8[4] = '\0';
    acStack_5d8[5] = '\0';
    acStack_5d8[6] = '\0';
    acStack_5d8[7] = '\0';
    acStack_5d8[8] = '\0';
    acStack_5d8[9] = '\0';
    acStack_5d8[10] = '\0';
    acStack_5d8[0xb] = '\0';
    acStack_5d8[0xc] = '\0';
    acStack_5d8[0xd] = '\0';
    acStack_5d8[0xe] = '\0';
    acStack_5d8[0xf] = '\0';
    acStack_5d8[0x10] = '\0';
    acStack_5d8[0x11] = '\0';
    acStack_5d8[0x12] = '\0';
    acStack_5d8[0x13] = '\0';
    acStack_5d8[0x14] = '\0';
    acStack_5d8[0x15] = '\0';
    acStack_5d8[0x16] = '\0';
    acStack_5d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_5d8,auStack_5b8,&lStack_588,2);
    pcVar11 = "";
    pcVar1 = acStack_5d8;
    pcVar4 = acStack_5d8;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    pcStack_5c0 = pcVar1;
    func_0x00010007e5dc(&pcStack_5c0);
    lVar18 = 0;
    puVar17 = auStack_5b8;
    pcVar14 = pcVar5;
    do {
      if ((&cStack_589)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_5a0 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x30);
  }
  _objc_release(pcVar7);
  pcVar6 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_588) {
    return pcVar6;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  if (cStack_5a1 < '\0') {
    __ZdlPv(auStack_5b8[0]);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar2);
  pcVar8 = pcVar6;
  __Unwind_Resume();
  pcStack_5e8 = FUN_1059b4514;
  lStack_638 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar10 = pcVar11;
  pcVar3 = pcVar4;
  pcVar15 = pcVar14;
  pcVar5 = pcVar13;
  pcVar12 = pcVar16;
  pcStack_630 = unaff_x26;
  pcStack_628 = unaff_x25;
  pcStack_620 = pcVar9;
  pcStack_618 = pcVar1;
  puStack_610 = puVar17;
  pcStack_608 = pcVar6;
  pcStack_600 = pcVar7;
  pcStack_5f8 = pcVar2;
  pppuStack_5f0 = &pppuStack_550;
  _objc_retain(pcVar11);
  _objc_retain(pcVar4);
  _objc_retain(pcVar14);
  _objc_retain(pcVar13);
  if (pcVar8 != (char *)0x0) {
    plVar19 = *(long **)(pcVar8 + 8);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar11;
      _objc_retainAutorelease(pcVar11);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar11);
    func_0x00010002b838(acStack_698,pcVar1);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar1 = pcVar4;
      func_0x00010bdc3520(pcVar4);
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_680,pcVar1);
    _objc_retain(pcVar14);
    if (pcVar14 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar14);
      pcVar1 = pcVar14;
      func_0x00010bdc3520(pcVar14);
    }
    _objc_release(pcVar14);
    func_0x00010002b838(auStack_668,pcVar1);
    _objc_retain(pcVar13);
    if (pcVar13 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(pcVar13);
      unaff_x26 = pcVar13;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar13);
    func_0x00010002b838(auStack_650,unaff_x26);
    acStack_6b8[0] = '\0';
    acStack_6b8[1] = '\0';
    acStack_6b8[2] = '\0';
    acStack_6b8[3] = '\0';
    acStack_6b8[4] = '\0';
    acStack_6b8[5] = '\0';
    acStack_6b8[6] = '\0';
    acStack_6b8[7] = '\0';
    acStack_6b8[8] = '\0';
    acStack_6b8[9] = '\0';
    acStack_6b8[10] = '\0';
    acStack_6b8[0xb] = '\0';
    acStack_6b8[0xc] = '\0';
    acStack_6b8[0xd] = '\0';
    acStack_6b8[0xe] = '\0';
    acStack_6b8[0xf] = '\0';
    acStack_6b8[0x10] = '\0';
    acStack_6b8[0x11] = '\0';
    acStack_6b8[0x12] = '\0';
    acStack_6b8[0x13] = '\0';
    acStack_6b8[0x14] = '\0';
    acStack_6b8[0x15] = '\0';
    acStack_6b8[0x16] = '\0';
    acStack_6b8[0x17] = '\0';
    func_0x00010007e1e8(acStack_6b8,acStack_698,&lStack_638,4);
    pcVar10 = "\x01";
    unaff_x25 = acStack_6b8;
    pcVar3 = acStack_6b8;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    pcStack_6a0 = unaff_x25;
    func_0x00010007e5dc(&pcStack_6a0);
    lVar18 = 0;
    pcVar15 = pcVar16;
    do {
      if ((&cStack_639)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_650 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x60);
  }
  _objc_release(pcVar13);
  _objc_release(pcVar14);
  _objc_release(pcVar4);
  pcVar1 = pcVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_638) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar13);
  pcStack_700 = acStack_698;
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != pcStack_700);
  _objc_release(pcVar13);
  _objc_release(pcVar14);
  _objc_release(pcVar4);
  _objc_release(pcVar11);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  pcStack_6c8 = FUN_1059b4848;
  lStack_718 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar10;
  pcVar6 = pcVar3;
  pcVar7 = pcVar15;
  pcVar8 = pcVar5;
  pcVar16 = pcVar12;
  pcStack_710 = unaff_x26;
  pcStack_708 = unaff_x25;
  pcStack_6f8 = pcVar1;
  pcStack_6f0 = pcVar13;
  pcStack_6e8 = pcVar14;
  pcStack_6e0 = pcVar4;
  pcStack_6d8 = pcVar11;
  pppuStack_6d0 = &pppuStack_5f0;
  _objc_retain(pcVar10);
  _objc_retain(pcVar3);
  _objc_retain(pcVar15);
  _objc_retain(pcVar5);
  if (pcVar2 != (char *)0x0) {
    plVar19 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar10;
      _objc_retainAutorelease(pcVar10);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar10);
    func_0x00010002b838(acStack_778,pcVar1);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar3);
      pcVar1 = pcVar3;
      func_0x00010bdc3520(pcVar3);
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_760,pcVar1);
    _objc_retain(pcVar15);
    if (pcVar15 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar15);
      pcVar1 = pcVar15;
      func_0x00010bdc3520(pcVar15);
    }
    _objc_release(pcVar15);
    func_0x00010002b838(auStack_748,pcVar1);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      unaff_x26 = pcVar5;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_730,unaff_x26);
    acStack_798[0] = '\0';
    acStack_798[1] = '\0';
    acStack_798[2] = '\0';
    acStack_798[3] = '\0';
    acStack_798[4] = '\0';
    acStack_798[5] = '\0';
    acStack_798[6] = '\0';
    acStack_798[7] = '\0';
    acStack_798[8] = '\0';
    acStack_798[9] = '\0';
    acStack_798[10] = '\0';
    acStack_798[0xb] = '\0';
    acStack_798[0xc] = '\0';
    acStack_798[0xd] = '\0';
    acStack_798[0xe] = '\0';
    acStack_798[0xf] = '\0';
    acStack_798[0x10] = '\0';
    acStack_798[0x11] = '\0';
    acStack_798[0x12] = '\0';
    acStack_798[0x13] = '\0';
    acStack_798[0x14] = '\0';
    acStack_798[0x15] = '\0';
    acStack_798[0x16] = '\0';
    acStack_798[0x17] = '\0';
    func_0x00010007e1e8(acStack_798,acStack_778,&lStack_718,4);
    pcVar9 = "\x01";
    unaff_x25 = acStack_798;
    pcVar6 = acStack_798;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    pcStack_780 = unaff_x25;
    func_0x00010007e5dc(&pcStack_780);
    lVar18 = 0;
    pcVar7 = pcVar12;
    do {
      if ((&cStack_719)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_730 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x60);
  }
  _objc_release(pcVar5);
  _objc_release(pcVar15);
  _objc_release(pcVar3);
  pcVar1 = pcVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_718) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != acStack_778);
  _objc_release(pcVar5);
  _objc_release(pcVar15);
  _objc_release(pcVar3);
  _objc_release(pcVar10);
  pcVar4 = pcVar1;
  __Unwind_Resume();
  pcVar12 = acStack_860;
  pcStack_7a8 = FUN_1059b4b7c;
  lStack_7f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar11 = pcVar9;
  pcVar2 = pcVar6;
  pcVar14 = pcVar7;
  pcVar13 = pcVar8;
  pcStack_7f0 = unaff_x26;
  pcStack_7e8 = unaff_x25;
  pcStack_7e0 = acStack_778;
  pcStack_7d8 = pcVar1;
  pcStack_7d0 = pcVar5;
  pcStack_7c8 = pcVar15;
  pcStack_7c0 = pcVar3;
  pcStack_7b8 = pcVar10;
  pppuStack_7b0 = &pppuStack_6d0;
  _objc_retain(pcVar9);
  _objc_retain(pcVar6);
  _objc_retain(pcVar7);
  pcVar1 = acStack_778;
  if (pcVar4 != (char *)0x0) {
    plVar19 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar9;
      _objc_retainAutorelease(pcVar9);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar9);
    func_0x00010002b838(acStack_840,pcVar1);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar1 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_828,pcVar1);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      unaff_x25 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      unaff_x25 = pcVar7;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_810,unaff_x25);
    acStack_860[0] = '\0';
    acStack_860[1] = '\0';
    acStack_860[2] = '\0';
    acStack_860[3] = '\0';
    acStack_860[4] = '\0';
    acStack_860[5] = '\0';
    acStack_860[6] = '\0';
    acStack_860[7] = '\0';
    acStack_860[8] = '\0';
    acStack_860[9] = '\0';
    acStack_860[10] = '\0';
    acStack_860[0xb] = '\0';
    acStack_860[0xc] = '\0';
    acStack_860[0xd] = '\0';
    acStack_860[0xe] = '\0';
    acStack_860[0xf] = '\0';
    acStack_860[0x10] = '\0';
    acStack_860[0x11] = '\0';
    acStack_860[0x12] = '\0';
    acStack_860[0x13] = '\0';
    acStack_860[0x14] = '\0';
    acStack_860[0x15] = '\0';
    acStack_860[0x16] = '\0';
    acStack_860[0x17] = '\0';
    func_0x00010007e1e8(acStack_860,acStack_840,&lStack_7f8,3);
    pcVar11 = "\x01";
    (**(code **)(*plVar19 + 0x18))(plVar19);
    puStack_848 = acStack_860;
    func_0x00010007e5dc(&puStack_848);
    lVar18 = 0;
    pcVar2 = pcVar12;
    pcVar14 = pcVar8;
    do {
      if ((&cStack_7f9)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_810 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
      pcVar1 = acStack_860;
    } while (lVar18 != -0x48);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar6);
  pcVar4 = pcVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7f8) {
    return pcVar4;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  pcStack_898 = acStack_840;
  do {
    pcVar1 = pcVar1 + -0x18;
  } while (pcVar1 != pcStack_898);
  _objc_release(pcVar7);
  _objc_release(pcVar6);
  _objc_release(pcVar9);
  pcVar8 = pcVar4;
  __Unwind_Resume();
  pcStack_868 = FUN_1059b4e3c;
  lStack_8b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar10 = pcVar11;
  pcVar3 = pcVar2;
  pcVar15 = pcVar14;
  pcVar5 = pcVar13;
  pcVar12 = pcVar16;
  pcStack_8b0 = unaff_x26;
  pcStack_8a8 = unaff_x25;
  pcStack_8a0 = pcVar1;
  pcStack_890 = pcVar4;
  pcStack_888 = pcVar7;
  pcStack_880 = pcVar6;
  pcStack_878 = pcVar9;
  pppuStack_870 = &pppuStack_7b0;
  _objc_retain(pcVar11);
  _objc_retain(pcVar2);
  _objc_retain(pcVar14);
  _objc_retain(pcVar13);
  if (pcVar8 != (char *)0x0) {
    plVar19 = *(long **)(pcVar8 + 8);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar11;
      _objc_retainAutorelease(pcVar11);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar11);
    func_0x00010002b838(acStack_918,pcVar1);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar2);
      pcVar1 = pcVar2;
      func_0x00010bdc3520(pcVar2);
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_900,pcVar1);
    _objc_retain(pcVar14);
    if (pcVar14 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar14);
      pcVar1 = pcVar14;
      func_0x00010bdc3520(pcVar14);
    }
    _objc_release(pcVar14);
    func_0x00010002b838(auStack_8e8,pcVar1);
    _objc_retain(pcVar13);
    if (pcVar13 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(pcVar13);
      unaff_x26 = pcVar13;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar13);
    func_0x00010002b838(auStack_8d0,unaff_x26);
    acStack_938[0] = '\0';
    acStack_938[1] = '\0';
    acStack_938[2] = '\0';
    acStack_938[3] = '\0';
    acStack_938[4] = '\0';
    acStack_938[5] = '\0';
    acStack_938[6] = '\0';
    acStack_938[7] = '\0';
    acStack_938[8] = '\0';
    acStack_938[9] = '\0';
    acStack_938[10] = '\0';
    acStack_938[0xb] = '\0';
    acStack_938[0xc] = '\0';
    acStack_938[0xd] = '\0';
    acStack_938[0xe] = '\0';
    acStack_938[0xf] = '\0';
    acStack_938[0x10] = '\0';
    acStack_938[0x11] = '\0';
    acStack_938[0x12] = '\0';
    acStack_938[0x13] = '\0';
    acStack_938[0x14] = '\0';
    acStack_938[0x15] = '\0';
    acStack_938[0x16] = '\0';
    acStack_938[0x17] = '\0';
    func_0x00010007e1e8(acStack_938,acStack_918,&lStack_8b8,4);
    pcVar10 = "\x01";
    unaff_x25 = acStack_938;
    pcVar3 = acStack_938;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    pcStack_920 = unaff_x25;
    func_0x00010007e5dc(&pcStack_920);
    lVar18 = 0;
    pcVar15 = pcVar16;
    do {
      if ((&cStack_8b9)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_8d0 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x60);
  }
  _objc_release(pcVar13);
  _objc_release(pcVar14);
  _objc_release(pcVar2);
  pcVar1 = pcVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8b8) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar13);
  pcStack_980 = acStack_918;
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != pcStack_980);
  _objc_release(pcVar13);
  _objc_release(pcVar14);
  _objc_release(pcVar2);
  _objc_release(pcVar11);
  pcVar4 = pcVar1;
  __Unwind_Resume();
  pcStack_948 = FUN_1059b5170;
  lStack_998 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar10;
  pcVar6 = pcVar3;
  pcVar7 = pcVar15;
  pcVar8 = pcVar5;
  pcVar16 = pcVar12;
  pcStack_990 = unaff_x26;
  pcStack_988 = unaff_x25;
  pcStack_978 = pcVar1;
  pcStack_970 = pcVar13;
  pcStack_968 = pcVar14;
  pcStack_960 = pcVar2;
  pcStack_958 = pcVar11;
  pppuStack_950 = &pppuStack_870;
  _objc_retain(pcVar10);
  _objc_retain(pcVar3);
  _objc_retain(pcVar15);
  _objc_retain(pcVar5);
  if (pcVar4 != (char *)0x0) {
    plVar19 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar10;
      _objc_retainAutorelease(pcVar10);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar10);
    func_0x00010002b838(acStack_9f8,pcVar1);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar3);
      pcVar1 = pcVar3;
      func_0x00010bdc3520(pcVar3);
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_9e0,pcVar1);
    _objc_retain(pcVar15);
    if (pcVar15 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar15);
      pcVar1 = pcVar15;
      func_0x00010bdc3520(pcVar15);
    }
    _objc_release(pcVar15);
    func_0x00010002b838(auStack_9c8,pcVar1);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      unaff_x26 = pcVar5;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_9b0,unaff_x26);
    acStack_a18[0] = '\0';
    acStack_a18[1] = '\0';
    acStack_a18[2] = '\0';
    acStack_a18[3] = '\0';
    acStack_a18[4] = '\0';
    acStack_a18[5] = '\0';
    acStack_a18[6] = '\0';
    acStack_a18[7] = '\0';
    acStack_a18[8] = '\0';
    acStack_a18[9] = '\0';
    acStack_a18[10] = '\0';
    acStack_a18[0xb] = '\0';
    acStack_a18[0xc] = '\0';
    acStack_a18[0xd] = '\0';
    acStack_a18[0xe] = '\0';
    acStack_a18[0xf] = '\0';
    acStack_a18[0x10] = '\0';
    acStack_a18[0x11] = '\0';
    acStack_a18[0x12] = '\0';
    acStack_a18[0x13] = '\0';
    acStack_a18[0x14] = '\0';
    acStack_a18[0x15] = '\0';
    acStack_a18[0x16] = '\0';
    acStack_a18[0x17] = '\0';
    func_0x00010007e1e8(acStack_a18,acStack_9f8,&lStack_998,4);
    pcVar9 = "\x01";
    unaff_x25 = acStack_a18;
    pcVar6 = acStack_a18;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    pcStack_a00 = unaff_x25;
    func_0x00010007e5dc(&pcStack_a00);
    lVar18 = 0;
    pcVar7 = pcVar12;
    do {
      if ((&cStack_999)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_9b0 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x60);
  }
  _objc_release(pcVar5);
  _objc_release(pcVar15);
  _objc_release(pcVar3);
  pcVar1 = pcVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_998) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  pcStack_a60 = acStack_9f8;
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != pcStack_a60);
  _objc_release(pcVar5);
  _objc_release(pcVar15);
  _objc_release(pcVar3);
  _objc_release(pcVar10);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  pcStack_a28 = FUN_1059b54a4;
  lStack_a78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar11 = pcVar9;
  pcVar4 = pcVar6;
  pcVar14 = pcVar7;
  pcVar13 = pcVar8;
  pcVar12 = pcVar16;
  pcStack_a70 = unaff_x26;
  pcStack_a68 = unaff_x25;
  pcStack_a58 = pcVar1;
  pcStack_a50 = pcVar5;
  pcStack_a48 = pcVar15;
  pcStack_a40 = pcVar3;
  pcStack_a38 = pcVar10;
  pppuStack_a30 = &pppuStack_950;
  _objc_retain(pcVar9);
  _objc_retain(pcVar6);
  _objc_retain(pcVar7);
  _objc_retain(pcVar8);
  if (pcVar2 != (char *)0x0) {
    plVar19 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar9;
      _objc_retainAutorelease(pcVar9);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar9);
    func_0x00010002b838(acStack_ad8,pcVar1);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar1 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_ac0,pcVar1);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar1 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_aa8,pcVar1);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      unaff_x26 = pcVar8;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_a90,unaff_x26);
    acStack_af8[0] = '\0';
    acStack_af8[1] = '\0';
    acStack_af8[2] = '\0';
    acStack_af8[3] = '\0';
    acStack_af8[4] = '\0';
    acStack_af8[5] = '\0';
    acStack_af8[6] = '\0';
    acStack_af8[7] = '\0';
    acStack_af8[8] = '\0';
    acStack_af8[9] = '\0';
    acStack_af8[10] = '\0';
    acStack_af8[0xb] = '\0';
    acStack_af8[0xc] = '\0';
    acStack_af8[0xd] = '\0';
    acStack_af8[0xe] = '\0';
    acStack_af8[0xf] = '\0';
    acStack_af8[0x10] = '\0';
    acStack_af8[0x11] = '\0';
    acStack_af8[0x12] = '\0';
    acStack_af8[0x13] = '\0';
    acStack_af8[0x14] = '\0';
    acStack_af8[0x15] = '\0';
    acStack_af8[0x16] = '\0';
    acStack_af8[0x17] = '\0';
    func_0x00010007e1e8(acStack_af8,acStack_ad8,&lStack_a78,4);
    pcVar11 = "\x01";
    unaff_x25 = acStack_af8;
    pcVar4 = acStack_af8;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    pcStack_ae0 = unaff_x25;
    func_0x00010007e5dc(&pcStack_ae0);
    lVar18 = 0;
    pcVar14 = pcVar16;
    do {
      if ((&cStack_a79)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_a90 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x60);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar7);
  _objc_release(pcVar6);
  pcVar1 = pcVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a78) {
    ___stack_chk_fail();
    _objc_release(pcVar8);
    pcStack_b40 = acStack_ad8;
    do {
      unaff_x25 = unaff_x25 + -0x18;
    } while (unaff_x25 != pcStack_b40);
    _objc_release(pcVar8);
    _objc_release(pcVar7);
    _objc_release(pcVar6);
    _objc_release(pcVar9);
    pcVar3 = pcVar1;
    __Unwind_Resume();
    pcStack_b08 = FUN_1059b57d8;
    lStack_b58 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar2 = pcVar11;
    pcVar10 = pcVar4;
    pcVar15 = pcVar14;
    pcVar5 = pcVar13;
    pcVar16 = pcVar12;
    pcStack_b50 = unaff_x26;
    pcStack_b48 = unaff_x25;
    pcStack_b38 = pcVar1;
    pcStack_b30 = pcVar8;
    pcStack_b28 = pcVar7;
    pcStack_b20 = pcVar6;
    pcStack_b18 = pcVar9;
    pppuStack_b10 = &pppuStack_a30;
    _objc_retain(pcVar11);
    _objc_retain(pcVar4);
    _objc_retain(pcVar14);
    _objc_retain(pcVar13);
    if (pcVar3 != (char *)0x0) {
      plVar19 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar11);
      if (pcVar11 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar11;
        _objc_retainAutorelease(pcVar11);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar11);
      func_0x00010002b838(acStack_bb8,pcVar1);
      _objc_retain(pcVar4);
      if (pcVar4 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar4);
        pcVar1 = pcVar4;
        func_0x00010bdc3520(pcVar4);
      }
      _objc_release(pcVar4);
      func_0x00010002b838(auStack_ba0,pcVar1);
      _objc_retain(pcVar14);
      if (pcVar14 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar14);
        pcVar1 = pcVar14;
        func_0x00010bdc3520(pcVar14);
      }
      _objc_release(pcVar14);
      func_0x00010002b838(auStack_b88,pcVar1);
      _objc_retain(pcVar13);
      if (pcVar13 == (char *)0x0) {
        unaff_x26 = "";
      }
      else {
        _objc_retainAutorelease(pcVar13);
        unaff_x26 = pcVar13;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar13);
      func_0x00010002b838(auStack_b70,unaff_x26);
      acStack_bd8[0] = '\0';
      acStack_bd8[1] = '\0';
      acStack_bd8[2] = '\0';
      acStack_bd8[3] = '\0';
      acStack_bd8[4] = '\0';
      acStack_bd8[5] = '\0';
      acStack_bd8[6] = '\0';
      acStack_bd8[7] = '\0';
      acStack_bd8[8] = '\0';
      acStack_bd8[9] = '\0';
      acStack_bd8[10] = '\0';
      acStack_bd8[0xb] = '\0';
      acStack_bd8[0xc] = '\0';
      acStack_bd8[0xd] = '\0';
      acStack_bd8[0xe] = '\0';
      acStack_bd8[0xf] = '\0';
      acStack_bd8[0x10] = '\0';
      acStack_bd8[0x11] = '\0';
      acStack_bd8[0x12] = '\0';
      acStack_bd8[0x13] = '\0';
      acStack_bd8[0x14] = '\0';
      acStack_bd8[0x15] = '\0';
      acStack_bd8[0x16] = '\0';
      acStack_bd8[0x17] = '\0';
      func_0x00010007e1e8(acStack_bd8,acStack_bb8,&lStack_b58,4);
      pcVar2 = "\x01";
      unaff_x25 = acStack_bd8;
      pcVar10 = acStack_bd8;
      (**(code **)(*plVar19 + 0x18))(plVar19);
      pcStack_bc0 = unaff_x25;
      func_0x00010007e5dc(&pcStack_bc0);
      lVar18 = 0;
      pcVar15 = pcVar12;
      do {
        if ((&cStack_b59)[lVar18] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_b70 + lVar18));
        }
        lVar18 = lVar18 + -0x18;
      } while (lVar18 != -0x60);
    }
    _objc_release(pcVar13);
    _objc_release(pcVar14);
    _objc_release(pcVar4);
    pcVar1 = pcVar11;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b58) {
      return pcVar1;
    }
    ___stack_chk_fail();
    _objc_release(pcVar13);
    pcStack_c20 = acStack_bb8;
    do {
      unaff_x25 = unaff_x25 + -0x18;
    } while (unaff_x25 != pcStack_c20);
    _objc_release(pcVar13);
    _objc_release(pcVar14);
    _objc_release(pcVar4);
    _objc_release(pcVar11);
    pcVar7 = pcVar1;
    __Unwind_Resume();
    pcStack_be8 = FUN_1059b5b0c;
    lStack_c38 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar9 = pcVar2;
    pcVar6 = pcVar10;
    pcVar3 = pcVar15;
    pcVar8 = pcVar5;
    pcVar12 = pcVar16;
    pcStack_c30 = unaff_x26;
    pcStack_c28 = unaff_x25;
    pcStack_c18 = pcVar1;
    pcStack_c10 = pcVar13;
    pcStack_c08 = pcVar14;
    pcStack_c00 = pcVar4;
    pcStack_bf8 = pcVar11;
    pppuStack_bf0 = &pppuStack_b10;
    _objc_retain(pcVar2);
    _objc_retain(pcVar10);
    _objc_retain(pcVar15);
    _objc_retain(pcVar5);
    if (pcVar7 != (char *)0x0) {
      plVar19 = *(long **)(pcVar7 + 8);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar2;
        _objc_retainAutorelease(pcVar2);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar2);
      func_0x00010002b838(acStack_c98,pcVar1);
      _objc_retain(pcVar10);
      if (pcVar10 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar10);
        pcVar1 = pcVar10;
        func_0x00010bdc3520(pcVar10);
      }
      _objc_release(pcVar10);
      func_0x00010002b838(auStack_c80,pcVar1);
      _objc_retain(pcVar15);
      if (pcVar15 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar15);
        pcVar1 = pcVar15;
        func_0x00010bdc3520(pcVar15);
      }
      _objc_release(pcVar15);
      func_0x00010002b838(auStack_c68,pcVar1);
      _objc_retain(pcVar5);
      if (pcVar5 == (char *)0x0) {
        unaff_x26 = "";
      }
      else {
        _objc_retainAutorelease(pcVar5);
        unaff_x26 = pcVar5;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar5);
      func_0x00010002b838(auStack_c50,unaff_x26);
      acStack_cb8[0] = '\0';
      acStack_cb8[1] = '\0';
      acStack_cb8[2] = '\0';
      acStack_cb8[3] = '\0';
      acStack_cb8[4] = '\0';
      acStack_cb8[5] = '\0';
      acStack_cb8[6] = '\0';
      acStack_cb8[7] = '\0';
      acStack_cb8[8] = '\0';
      acStack_cb8[9] = '\0';
      acStack_cb8[10] = '\0';
      acStack_cb8[0xb] = '\0';
      acStack_cb8[0xc] = '\0';
      acStack_cb8[0xd] = '\0';
      acStack_cb8[0xe] = '\0';
      acStack_cb8[0xf] = '\0';
      acStack_cb8[0x10] = '\0';
      acStack_cb8[0x11] = '\0';
      acStack_cb8[0x12] = '\0';
      acStack_cb8[0x13] = '\0';
      acStack_cb8[0x14] = '\0';
      acStack_cb8[0x15] = '\0';
      acStack_cb8[0x16] = '\0';
      acStack_cb8[0x17] = '\0';
      func_0x00010007e1e8(acStack_cb8,acStack_c98,&lStack_c38,4);
      pcVar9 = "\x01";
      unaff_x25 = acStack_cb8;
      pcVar6 = acStack_cb8;
      (**(code **)(*plVar19 + 0x18))(plVar19);
      pcStack_ca0 = unaff_x25;
      func_0x00010007e5dc(&pcStack_ca0);
      lVar18 = 0;
      pcVar3 = pcVar16;
      do {
        if ((&cStack_c39)[lVar18] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_c50 + lVar18));
        }
        lVar18 = lVar18 + -0x18;
      } while (lVar18 != -0x60);
    }
    _objc_release(pcVar5);
    _objc_release(pcVar15);
    _objc_release(pcVar10);
    pcVar1 = pcVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c38) {
      return pcVar1;
    }
    ___stack_chk_fail();
    _objc_release(pcVar5);
    pcStack_d00 = acStack_c98;
    do {
      unaff_x25 = unaff_x25 + -0x18;
    } while (unaff_x25 != pcStack_d00);
    _objc_release(pcVar5);
    _objc_release(pcVar15);
    _objc_release(pcVar10);
    _objc_release(pcVar2);
    pcVar7 = pcVar1;
    __Unwind_Resume();
    pcStack_cc8 = FUN_1059b5e40;
    lStack_d18 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar11 = pcVar9;
    pcVar4 = pcVar6;
    pcVar14 = pcVar3;
    pcVar13 = pcVar8;
    pcVar16 = pcVar12;
    pcStack_d10 = unaff_x26;
    pcStack_d08 = unaff_x25;
    pcStack_cf8 = pcVar1;
    pcStack_cf0 = pcVar5;
    pcStack_ce8 = pcVar15;
    pcStack_ce0 = pcVar10;
    pcStack_cd8 = pcVar2;
    pppuStack_cd0 = &pppuStack_bf0;
    _objc_retain(pcVar9);
    _objc_retain(pcVar6);
    _objc_retain(pcVar3);
    _objc_retain(pcVar8);
    if (pcVar7 != (char *)0x0) {
      plVar19 = *(long **)(pcVar7 + 8);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar9;
        _objc_retainAutorelease(pcVar9);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar9);
      func_0x00010002b838(acStack_d78,pcVar1);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar6);
        pcVar1 = pcVar6;
        func_0x00010bdc3520(pcVar6);
      }
      _objc_release(pcVar6);
      func_0x00010002b838(auStack_d60,pcVar1);
      _objc_retain(pcVar3);
      if (pcVar3 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar3);
        pcVar1 = pcVar3;
        func_0x00010bdc3520(pcVar3);
      }
      _objc_release(pcVar3);
      func_0x00010002b838(auStack_d48,pcVar1);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        unaff_x26 = "";
      }
      else {
        _objc_retainAutorelease(pcVar8);
        unaff_x26 = pcVar8;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar8);
      func_0x00010002b838(auStack_d30,unaff_x26);
      acStack_d98[0] = '\0';
      acStack_d98[1] = '\0';
      acStack_d98[2] = '\0';
      acStack_d98[3] = '\0';
      acStack_d98[4] = '\0';
      acStack_d98[5] = '\0';
      acStack_d98[6] = '\0';
      acStack_d98[7] = '\0';
      acStack_d98[8] = '\0';
      acStack_d98[9] = '\0';
      acStack_d98[10] = '\0';
      acStack_d98[0xb] = '\0';
      acStack_d98[0xc] = '\0';
      acStack_d98[0xd] = '\0';
      acStack_d98[0xe] = '\0';
      acStack_d98[0xf] = '\0';
      acStack_d98[0x10] = '\0';
      acStack_d98[0x11] = '\0';
      acStack_d98[0x12] = '\0';
      acStack_d98[0x13] = '\0';
      acStack_d98[0x14] = '\0';
      acStack_d98[0x15] = '\0';
      acStack_d98[0x16] = '\0';
      acStack_d98[0x17] = '\0';
      func_0x00010007e1e8(acStack_d98,acStack_d78,&lStack_d18,4);
      pcVar11 = "\x01";
      unaff_x25 = acStack_d98;
      pcVar4 = acStack_d98;
      (**(code **)(*plVar19 + 0x18))(plVar19);
      pcStack_d80 = unaff_x25;
      func_0x00010007e5dc(&pcStack_d80);
      lVar18 = 0;
      pcVar14 = pcVar12;
      do {
        if ((&cStack_d19)[lVar18] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_d30 + lVar18));
        }
        lVar18 = lVar18 + -0x18;
      } while (lVar18 != -0x60);
    }
    _objc_release(pcVar8);
    _objc_release(pcVar3);
    _objc_release(pcVar6);
    pcVar1 = pcVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d18) {
      ___stack_chk_fail();
      _objc_release(pcVar8);
      pcStack_de0 = acStack_d78;
      do {
        unaff_x25 = unaff_x25 + -0x18;
      } while (unaff_x25 != pcStack_de0);
      _objc_release(pcVar8);
      _objc_release(pcVar3);
      _objc_release(pcVar6);
      _objc_release(pcVar9);
      pcVar7 = pcVar1;
      __Unwind_Resume();
      pcStack_da8 = FUN_1059b6174;
      lStack_df8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar2 = pcVar11;
      pcVar10 = pcVar4;
      pcVar15 = pcVar14;
      pcStack_df0 = unaff_x26;
      pcStack_de8 = unaff_x25;
      pcStack_dd8 = pcVar1;
      pcStack_dd0 = pcVar8;
      pcStack_dc8 = pcVar3;
      pcStack_dc0 = pcVar6;
      pcStack_db8 = pcVar9;
      pppuStack_db0 = &pppuStack_cd0;
      _objc_retain(pcVar11);
      _objc_retain(pcVar4);
      _objc_retain(pcVar14);
      _objc_retain(pcVar13);
      if (pcVar7 != (char *)0x0) {
        plVar19 = *(long **)(pcVar7 + 8);
        _objc_retain(pcVar11);
        if (pcVar11 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar11;
          _objc_retainAutorelease(pcVar11);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar11);
        func_0x00010002b838(acStack_e58,pcVar1);
        _objc_retain(pcVar4);
        if (pcVar4 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar4);
          pcVar1 = pcVar4;
          func_0x00010bdc3520(pcVar4);
        }
        _objc_release(pcVar4);
        func_0x00010002b838(auStack_e40,pcVar1);
        _objc_retain(pcVar14);
        if (pcVar14 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar14);
          pcVar1 = pcVar14;
          func_0x00010bdc3520(pcVar14);
        }
        _objc_release(pcVar14);
        func_0x00010002b838(auStack_e28,pcVar1);
        _objc_retain(pcVar13);
        if (pcVar13 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar13);
          pcVar1 = pcVar13;
          func_0x00010bdc3520(pcVar13);
        }
        _objc_release(pcVar13);
        func_0x00010002b838(auStack_e10,pcVar1);
        acStack_e78[0] = '\0';
        acStack_e78[1] = '\0';
        acStack_e78[2] = '\0';
        acStack_e78[3] = '\0';
        acStack_e78[4] = '\0';
        acStack_e78[5] = '\0';
        acStack_e78[6] = '\0';
        acStack_e78[7] = '\0';
        acStack_e78[8] = '\0';
        acStack_e78[9] = '\0';
        acStack_e78[10] = '\0';
        acStack_e78[0xb] = '\0';
        acStack_e78[0xc] = '\0';
        acStack_e78[0xd] = '\0';
        acStack_e78[0xe] = '\0';
        acStack_e78[0xf] = '\0';
        acStack_e78[0x10] = '\0';
        acStack_e78[0x11] = '\0';
        acStack_e78[0x12] = '\0';
        acStack_e78[0x13] = '\0';
        acStack_e78[0x14] = '\0';
        acStack_e78[0x15] = '\0';
        acStack_e78[0x16] = '\0';
        acStack_e78[0x17] = '\0';
        func_0x00010007e1e8(acStack_e78,acStack_e58,&lStack_df8,4);
        pcVar2 = "\x01";
        unaff_x25 = acStack_e78;
        pcVar10 = acStack_e78;
        (**(code **)(*plVar19 + 0x18))(plVar19,&UNK_1108ca988,pcVar10,pcVar16);
        pcStack_e60 = unaff_x25;
        func_0x00010007e5dc(&pcStack_e60);
        lVar18 = 0;
        pcVar15 = pcVar16;
        do {
          if ((&cStack_df9)[lVar18] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_e10 + lVar18));
          }
          lVar18 = lVar18 + -0x18;
        } while (lVar18 != -0x60);
      }
      _objc_release(pcVar13);
      _objc_release(pcVar14);
      _objc_release(pcVar4);
      pcVar1 = pcVar11;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_df8) {
        return pcVar1;
      }
      ___stack_chk_fail();
      _objc_release(pcVar13);
      pcStack_ec0 = acStack_e58;
      do {
        unaff_x25 = unaff_x25 + -0x18;
      } while (unaff_x25 != pcStack_ec0);
      _objc_release(pcVar13);
      _objc_release(pcVar14);
      _objc_release(pcVar4);
      _objc_release(pcVar11);
      pcVar9 = pcVar1;
      __Unwind_Resume();
      pcStack_e88 = FUN_1059b64a8;
      lStack_ec8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcStack_eb8 = pcVar1;
      pcStack_eb0 = pcVar13;
      pcStack_ea8 = pcVar14;
      pcStack_ea0 = pcVar4;
      pcStack_e98 = pcVar11;
      pppuStack_e90 = &pppuStack_db0;
      _objc_retain(pcVar2);
      _objc_retain(pcVar10);
      if (pcVar9 != (char *)0x0) {
        plVar19 = *(long **)(pcVar9 + 8);
        _objc_retain(pcVar2);
        if (pcVar2 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar2;
          _objc_retainAutorelease(pcVar2);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar2);
        func_0x00010002b838(auStack_ef8,pcVar1);
        _objc_retain(pcVar10);
        if (pcVar10 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar10);
          pcVar1 = pcVar10;
          func_0x00010bdc3520(pcVar10);
        }
        _objc_release(pcVar10);
        func_0x00010002b838(auStack_ee0,pcVar1);
        uStack_f18 = 0;
        uStack_f10 = 0;
        uStack_f08 = 0;
        func_0x00010007e1e8(&uStack_f18,auStack_ef8,&lStack_ec8,2);
        (**(code **)(*plVar19 + 0x18))(plVar19,&UNK_1108ca9d8,&uStack_f18,pcVar15);
        puStack_f00 = &uStack_f18;
        func_0x00010007e5dc(&puStack_f00);
        lVar18 = 0;
        do {
          if ((&cStack_ec9)[lVar18] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_ee0 + lVar18));
          }
          lVar18 = lVar18 + -0x18;
        } while (lVar18 != -0x30);
      }
      _objc_release(pcVar10);
      pcVar1 = pcVar2;
      _objc_release(pcVar2);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_ec8) {
        ___stack_chk_fail();
        _objc_release(pcVar10);
        if (cStack_ee1 < '\0') {
          __ZdlPv(auStack_ef8[0]);
        }
        _objc_release(pcVar10);
        _objc_release(pcVar2);
        __Unwind_Resume(pcVar1);
        return (char *)0x0;
      }
      return pcVar1;
    }
    return pcVar1;
  }
  return pcVar1;
}


