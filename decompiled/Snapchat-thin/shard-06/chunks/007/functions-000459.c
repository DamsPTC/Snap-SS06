/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104cc8208; end: 104cc822b; -[SCChannelVerificationLandingAction copyWithZone:] */

undefined8 FUN_104cc8208(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104cc822c; end: 104cc828b; -[SCChannelVerificationLandingAction hash] */

void FUN_104cc822c(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_1126e3b40;
  puStack_60 = puVar2;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104cc828c; end: 104cc82cf; -[SCChannelVerificationLandingAction internalInit] */

void FUN_104cc828c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e3b40;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104cc82d0; end: 104cc836f; -[SCChannelVerificationLandingAction isEqual:] */

long FUN_104cc82d0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104cc8354;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_104cc8354;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_104cc8354;
    }
  }
  lVar3 = 1;
LAB_104cc8354:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104cc8370; end: 104cc8457; -[SCChannelVerificationLandingAction matchEmailDidChange:submit:acknowledgeAlert:exit:] */

void FUN_104cc8370(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  code *pcVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      if (param_3 != 0) {
        (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x10));
      }
      goto LAB_104cc8428;
    }
    if ((lVar1 != 1) || (param_4 == 0)) goto LAB_104cc8428;
    pcVar2 = *(code **)(param_4 + 0x10);
    lVar1 = param_4;
  }
  else if (lVar1 == 2) {
    if (param_5 == 0) goto LAB_104cc8428;
    pcVar2 = *(code **)(param_5 + 0x10);
    lVar1 = param_5;
  }
  else {
    if ((lVar1 != 3) || (param_6 == 0)) goto LAB_104cc8428;
    pcVar2 = *(code **)(param_6 + 0x10);
    lVar1 = param_6;
  }
  (*pcVar2)(lVar1);
LAB_104cc8428:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104cc8458; end: 104cc8463; -[SCChannelVerificationLandingAction .cxx_destruct] */

void FUN_104cc8458(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104cc8464; end: 104cc8553; -[SCChannelVerificationLandingViewModel initWithEmail:errorMessage:errorAlertMessage:canContinue:isLoading:] */

undefined1 *
FUN_104cc8464(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7)

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
  puStack_48 = PTR_PTR_1126e3b48;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    *(undefined1 *)((long)puVar1 + 9) = param_7;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104cc8554; end: 104cc8577; -[SCChannelVerificationLandingViewModel copyWithZone:] */

undefined8 FUN_104cc8554(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104cc8578; end: 104cc8603; -[SCChannelVerificationLandingViewModel hash] */

undefined8 * FUN_104cc8578(long param_1,undefined8 param_2,undefined1 *param_3)

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
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  uStack_40 = uVar1;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_104cc86bc:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_104cc86c8;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)((long)puVar3 + 8) == param_3[8] && (*(char *)((long)puVar3 + 9) == param_3[9]))))
    {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x20);
          if (puVar6 != *(undefined1 **)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_104cc86c8;
          }
          goto LAB_104cc86bc;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_104cc86c8:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 104cc8604; end: 104cc86e3; -[SCChannelVerificationLandingViewModel isEqual:] */

long FUN_104cc8604(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104cc86bc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104cc86c8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_104cc86c8;
          }
          goto LAB_104cc86bc;
        }
      }
    }
    lVar3 = 0;
  }
LAB_104cc86c8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104cc86e4; end: 104cc86eb; -[SCChannelVerificationLandingViewModel email] */

undefined8 FUN_104cc86e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104cc86ec; end: 104cc86f3; -[SCChannelVerificationLandingViewModel errorMessage] */

undefined8 FUN_104cc86ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104cc86f4; end: 104cc86fb; -[SCChannelVerificationLandingViewModel errorAlertMessage] */

undefined8 FUN_104cc86f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104cc86fc; end: 104cc8703; -[SCChannelVerificationLandingViewModel canContinue] */

undefined1 FUN_104cc86fc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104cc8704; end: 104cc870b; -[SCChannelVerificationLandingViewModel isLoading] */

undefined1 FUN_104cc8704(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 104cc870c; end: 104cc8747; -[SCChannelVerificationLandingViewModel .cxx_destruct] */

void FUN_104cc870c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104cc8748; end: 104cc896b; -[SCOdlvEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc8748(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  
  puVar1 = PTR_PTR_1126af140;
  _objc_alloc(PTR_PTR_1126af140);
  lVar12 = (long)_DAT_1127106b4;
  lVar2 = param_1 + lVar12;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_1127106b8;
  _objc_loadWeakRetained(lVar4);
  lVar5 = param_1 + _DAT_1127106bc;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c0b43e0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_1127106c0;
  _objc_loadWeakRetained(lVar14);
  lVar7 = lVar14;
  func_0x00010c0e1580();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_1127106c4;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c056e00(puVar1,param_2,lVar3,lVar4,lVar6,lVar7,lVar9);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar14);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar10 = PTR_PTR_1126aeb48;
  _objc_alloc(PTR_PTR_1126aeb48);
  func_0x00010c0404c0();
  puVar11 = PTR_PTR_1126af148;
  _objc_alloc();
  lVar2 = param_1 + lVar12;
  _objc_loadWeakRetained(lVar2);
  lVar4 = lVar2;
  func_0x00010bf34c20();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + lVar12;
  _objc_loadWeakRetained(lVar12);
  lVar5 = lVar12;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffd600(puVar11,param_2,lVar4,puVar10,lVar5);
  lVar14 = (long)_DAT_1127106c8;
  uVar13 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar11;
  _objc_release(uVar13);
  _objc_release(lVar5);
  _objc_release(lVar12);
  _objc_release(lVar4);
  _objc_release(lVar2);
  func_0x00010bf192c0(*(undefined8 *)(param_1 + lVar14));
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cc896c; end: 104cc89d7; -[SCOdlvEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc896c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127106c4);
  _objc_destroyWeak(param_1 + _DAT_1127106c0);
  _objc_destroyWeak(param_1 + _DAT_1127106b8);
  _objc_destroyWeak(param_1 + _DAT_1127106bc);
  _objc_destroyWeak(param_1 + _DAT_1127106b4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127106c8,0);
  return;
}



/* Entry: 104cc89d8; end: 104cc8caf; -[SCLoginCOSOdlvLandingBusinessLogic initWithCosDelegate:odlvChallenge:odlvLandingLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104cc89d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_68 = PTR_PTR_1126e3b50;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_1127106cc),param_3);
    lVar7 = (long)_DAT_1127106d0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar2 = param_4;
    func_0x00010c0dfb80(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00();
    _objc_release(uVar2);
    if (((ulong)puVar4 & 1) == 0) {
      puVar4 = PTR_PTR_1126af150;
      _objc_alloc(PTR_PTR_1126af150);
      puVar5 = puVar4;
      func_0x000104cd1500();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_4;
      func_0x00010c0dfb80(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar2;
      func_0x00010bf51e00();
      func_0x00010c0214c0(puVar4);
      _objc_release(uVar6);
      _objc_release(uVar2);
      _objc_release(puVar5);
      func_0x00010befa120(puVar3);
      _objc_release(puVar4);
    }
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar2 = param_4;
    func_0x00010c0dfb60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00();
    _objc_release(uVar2);
    if (((ulong)puVar4 & 1) == 0) {
      puVar4 = PTR_PTR_1126af150;
      _objc_alloc(PTR_PTR_1126af150);
      puVar5 = puVar4;
      func_0x000108b9a90c();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_4;
      func_0x00010c0dfb60(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar2;
      func_0x00010bf51e00();
      func_0x00010c0214c0(puVar4);
      _objc_release(uVar6);
      _objc_release(uVar2);
      _objc_release(puVar5);
      func_0x00010befa120(puVar3);
      _objc_release(puVar4);
    }
    puVar4 = puVar3;
    func_0x00010bf529e0();
    if (puVar4 != (undefined *)0x0) {
      puVar4 = puVar3;
      func_0x00010bf51e00();
      lVar7 = (long)_DAT_1127106d4;
      uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
      *(undefined **)((long)puVar1 + lVar7) = puVar4;
      _objc_release(uVar2);
      uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar6;
      func_0x00010c0ee1e0();
      *(undefined8 *)((long)puVar1 + (long)_DAT_1127106d8) = uVar2;
      _objc_release(uVar6);
      lVar7 = (long)_DAT_1127106dc;
      _objc_retain(param_5);
      uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
      *(undefined8 *)((long)puVar1 + lVar7) = param_5;
      _objc_release(uVar2);
    }
    _objc_release(puVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104cc8cb0; end: 104cc8d17; -[SCLoginCOSOdlvLandingBusinessLogic begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc8cb0(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e3b50;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_begin_1125a3840);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127106dc);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab380();
  _objc_release(uVar1);
  return;
}



/* Entry: 104cc8d18; end: 104cc8dc3; -[SCLoginCOSOdlvLandingBusinessLogic handleAction:] */

void FUN_104cc8d18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104cc8dc4;
  puStack_20 = &UNK_110842e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104cc8dcc;
  puStack_48 = &UNK_110842e18;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104cc8e04;
  puStack_70 = &UNK_110842e18;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_104cc8e84;
  puStack_98 = &UNK_1108484c8;
  uStack_90 = param_1;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0c05c0(param_3,param_2,&puStack_38,&puStack_60,&puStack_88,&puStack_b0);
  return;
}



/* Entry: 104cc8dc4; end: 104cc8dcb;  */

void FUN_104cc8dc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be31310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleSubmit_112569e60);
  return;
}



/* Entry: 104cc8dcc; end: 104cc8e03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc8dcc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_1127106cc;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0e1600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104cc8e04; end: 104cc8e83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc8e04(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127106e0);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127106e0) = 0;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_release(lVar2);
  lVar2 = *(long *)(param_1 + 0x20) + (long)_DAT_1127106cc;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c0e15e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104cc8e84; end: 104cc8ecb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc8e84(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127106d8) = param_2;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104cc8ecc; end: 104cc8f37; -[SCLoginCOSOdlvLandingBusinessLogic viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc8ecc(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_PTR_1126af158;
  _objc_alloc(PTR_PTR_1126af158);
  uVar1 = *(undefined1 *)(param_1 + _DAT_1127106e4);
  lVar3 = param_1;
  func_0x00010be35a00(param_1);
  func_0x00010c01f580(puVar2,param_2,uVar1,lVar3,*(undefined8 *)(param_1 + _DAT_1127106e0),
                      *(undefined8 *)(param_1 + _DAT_1127106d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104cc8f38; end: 104cc9143; -[SCLoginCOSOdlvLandingBusinessLogic _handleSubmit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc8f38(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  *(undefined1 *)(param_1 + _DAT_1127106e4) = 1;
  lVar1 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127106d8);
  lVar1 = param_1;
  func_0x00010be9dfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c0e2ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127106dc);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab400();
  _objc_release(uVar3);
  param_1 = param_1 + _DAT_1127106cc;
  _objc_loadWeakRetained(param_1);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_104cc9144;
  puStack_80 = &UNK_1108484f8;
  _objc_retain(lVar2);
  lStack_70 = lVar2;
  _objc_copyWeak(auStack_68,auStack_58);
  uStack_60 = uVar4;
  _objc_retain(lVar1);
  lStack_78 = lVar1;
  _objc_retain(lVar2);
  _objc_copyWeak(auStack_a8,auStack_58);
  uStack_a0 = uVar4;
  func_0x00010c0e1620(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_a8);
  _objc_release(lVar2);
  _objc_release(lStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(lStack_70);
  _objc_destroyWeak(auStack_58);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 104cc9144; end: 104cc91fb;  */

void FUN_104cc9144(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  lVar2 = *(long *)(param_1 + 0x28);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104cc91fc;
  puStack_50 = &UNK_110842a68;
  _objc_copyWeak(auStack_40,param_1 + 0x30);
  uStack_38 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_48 = uVar1;
  (**(code **)(lVar2 + 0x10))(lVar2,&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  return;
}



/* Entry: 104cc91fc; end: 104cc923b;  */

void FUN_104cc91fc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be31360(lVar1,param_2,*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104cc923c; end: 104cc9303;  */

void FUN_104cc923c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104cc9304;
  puStack_50 = &UNK_110842a68;
  _objc_copyWeak(auStack_40,param_1 + 0x28);
  uStack_38 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_2);
  uStack_48 = param_2;
  (**(code **)(lVar1 + 0x10))(lVar1,&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 104cc9304; end: 104cc9343;  */

void FUN_104cc9304(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be31340(lVar1,param_2,*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104cc9344; end: 104cc9393; -[SCLoginCOSOdlvLandingBusinessLogic _handleSubmitSuccess:obfuscatedContact:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc9344(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + _DAT_1127106e4) = 0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127106dc);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104cc9394; end: 104cc946f; -[SCLoginCOSOdlvLandingBusinessLogic _handleSubmitFailure:errorMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc9394(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + _DAT_1127106dc);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab420();
  _objc_release();
  *(undefined1 *)(param_1 + _DAT_1127106e4) = 0;
  lVar3 = param_4;
  if (param_4 == 0) {
    FUN_104cd14d0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
  }
  lVar1 = (long)_DAT_1127106e0;
  _objc_retain(lVar3);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(long *)(param_1 + lVar1) = lVar3;
  _objc_release(uVar2);
  if (param_4 == 0) {
    _objc_release(lVar3);
  }
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104cc9470; end: 104cc94cb; -[SCLoginCOSOdlvLandingBusinessLogic _selectedObfuscatedContactFromType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc9470(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 1) {
    func_0x00010c0dfb60(*(undefined8 *)(param_1 + _DAT_1127106d0));
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 0) {
    func_0x00010c0dfb80(*(undefined8 *)(param_1 + _DAT_1127106d0));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104cc94cc; end: 104cc94e3; -[SCLoginCOSOdlvLandingBusinessLogic _hideMessageRateLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104cc94cc(long param_1)

{
  return *(long *)(param_1 + _DAT_1127106d8) != 0;
}



/* Entry: 104cc94e4; end: 104cc94f3; -[SCLoginCOSOdlvLandingBusinessLogic eligibleOtpOptions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104cc94e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127106d4);
}



/* Entry: 104cc94f4; end: 104cc955f; -[SCLoginCOSOdlvLandingBusinessLogic .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc94f4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127106d4,0);
  _objc_storeStrong(param_1 + _DAT_1127106dc,0);
  _objc_storeStrong(param_1 + _DAT_1127106e0,0);
  _objc_storeStrong(param_1 + _DAT_1127106d0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127106cc);
  return;
}



/* Entry: 104cc9560; end: 104cc9853; -[SCLoginOdlvLandingBusinessLogic initWithDelegate:unauthenticatedOdlvService:odlvChallenge:odlvLandingLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104cc9560(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_68 = PTR_PTR_1126e3b58;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_1127106e8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_1127106ec),param_4);
    lVar7 = (long)_DAT_1127106f0;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar2 = param_5;
    func_0x00010c0dfb80(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00();
    _objc_release(uVar2);
    if (((ulong)puVar4 & 1) == 0) {
      puVar4 = PTR_PTR_1126af150;
      _objc_alloc(PTR_PTR_1126af150);
      puVar5 = puVar4;
      func_0x000104cd1500();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_5;
      func_0x00010c0dfb80(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar2;
      func_0x00010bf51e00();
      func_0x00010c0214c0(puVar4);
      _objc_release(uVar6);
      _objc_release(uVar2);
      _objc_release(puVar5);
      func_0x00010befa120(puVar3);
      _objc_release(puVar4);
    }
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar2 = param_5;
    func_0x00010c0dfb60(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00();
    _objc_release(uVar2);
    if (((ulong)puVar4 & 1) == 0) {
      puVar4 = PTR_PTR_1126af150;
      _objc_alloc(PTR_PTR_1126af150);
      puVar5 = puVar4;
      func_0x000108b9a90c();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_5;
      func_0x00010c0dfb60(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar2;
      func_0x00010bf51e00();
      func_0x00010c0214c0(puVar4);
      _objc_release(uVar6);
      _objc_release(uVar2);
      _objc_release(puVar5);
      func_0x00010befa120(puVar3);
      _objc_release(puVar4);
    }
    puVar4 = puVar3;
    func_0x00010bf51e00();
    lVar7 = (long)_DAT_1127106f4;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar4;
    _objc_release(uVar2);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010c0ee1e0();
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127106f8) = uVar2;
    _objc_release(uVar6);
    lVar7 = (long)_DAT_1127106fc;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_6;
    _objc_release(uVar2);
    _objc_release(puVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104cc9854; end: 104cc98bb; -[SCLoginOdlvLandingBusinessLogic begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc9854(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e3b58;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_begin_1125a3840);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127106fc);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab380();
  _objc_release(uVar1);
  return;
}



/* Entry: 104cc98bc; end: 104cc9967; -[SCLoginOdlvLandingBusinessLogic handleAction:] */

void FUN_104cc98bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104cc9968;
  puStack_20 = &UNK_110842e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104cc9970;
  puStack_48 = &UNK_110842e18;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104cc99a8;
  puStack_70 = &UNK_110842e18;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_104cc9a28;
  puStack_98 = &UNK_1108484c8;
  uStack_90 = param_1;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0c05c0(param_3,param_2,&puStack_38,&puStack_60,&puStack_88,&puStack_b0);
  return;
}



/* Entry: 104cc9968; end: 104cc996f;  */

void FUN_104cc9968(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be31310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleSubmit_112569e60);
  return;
}



/* Entry: 104cc9970; end: 104cc99a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc9970(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_1127106e8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0e1660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104cc99a8; end: 104cc9a27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc99a8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710700);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710700) = 0;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_release(lVar2);
  lVar2 = *(long *)(param_1 + 0x20) + (long)_DAT_1127106e8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c0e1640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104cc9a28; end: 104cc9a6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc9a28(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127106f8) = param_2;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104cc9a70; end: 104cc9adb; -[SCLoginOdlvLandingBusinessLogic viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc9a70(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_PTR_1126af158;
  _objc_alloc(PTR_PTR_1126af158);
  uVar1 = *(undefined1 *)(param_1 + _DAT_112710704);
  lVar3 = param_1;
  func_0x00010be35a00(param_1);
  func_0x00010c01f580(puVar2,param_2,uVar1,lVar3,*(undefined8 *)(param_1 + _DAT_112710700),
                      *(undefined8 *)(param_1 + _DAT_1127106f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104cc9adc; end: 104cc9ce7; -[SCLoginOdlvLandingBusinessLogic _handleSubmit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc9adc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  *(undefined1 *)(param_1 + _DAT_112710704) = 1;
  lVar2 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_release(lVar2);
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127106f8);
  lVar2 = param_1;
  func_0x00010c0e2ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_78,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_104cc9ce8;
  puStack_98 = &UNK_110848558;
  _objc_retain(lVar2);
  lStack_90 = lVar2;
  _objc_copyWeak(auStack_88,auStack_78);
  ppuVar3 = &puStack_b0;
  uStack_80 = uVar5;
  _objc_retainBlock(ppuVar3);
  puStack_e8 = puVar1;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_104cc9e3c;
  puStack_d0 = &UNK_110848588;
  _objc_retain(lVar2);
  lStack_c8 = lVar2;
  _objc_copyWeak(auStack_c0,auStack_78);
  ppuVar4 = &puStack_e8;
  uStack_b8 = uVar5;
  _objc_retainBlock(ppuVar4);
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127106fc);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab400();
  _objc_release(uVar5);
  param_1 = param_1 + _DAT_1127106ec;
  _objc_loadWeakRetained(param_1);
  func_0x00010c15c300();
  _objc_release(param_1);
  _objc_release(ppuVar4);
  _objc_destroyWeak(auStack_c0);
  _objc_release(lStack_c8);
  _objc_release(ppuVar3);
  _objc_destroyWeak(auStack_88);
  _objc_release(lStack_90);
  _objc_destroyWeak(auStack_78);
  _objc_release(lVar2);
  return;
}



/* Entry: 104cc9ce8; end: 104cc9d87;  */

void FUN_104cc9ce8(long param_1)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104cc9d88;
  puStack_48 = &UNK_110846540;
  _objc_copyWeak(auStack_40,param_1 + 0x28);
  uStack_38 = *(undefined8 *)(param_1 + 0x30);
  (**(code **)(lVar1 + 0x10))(lVar1,&puStack_60);
  _objc_destroyWeak(auStack_40);
  return;
}



/* Entry: 104cc9d88; end: 104cc9e3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc9d88(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + _DAT_112710704) = 0;
    uVar2 = *(undefined8 *)(lVar1 + _DAT_1127106fc);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ab440();
    _objc_release(uVar2);
    lVar3 = lVar1;
    func_0x00010be9dfa0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1 + _DAT_1127106e8;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c0e1680();
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104cc9e3c; end: 104cc9f03;  */

void FUN_104cc9e3c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104cc9f04;
  puStack_50 = &UNK_110842a68;
  _objc_copyWeak(auStack_40,param_1 + 0x28);
  uStack_38 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_2);
  uStack_48 = param_2;
  (**(code **)(lVar1 + 0x10))(lVar1,&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 104cc9f04; end: 104cc9ff3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc9f04(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_1127106fc);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ab420();
    _objc_release(uVar2);
    *(undefined1 *)(lVar1 + _DAT_112710704) = 0;
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    if (lVar3 == 0) {
      FUN_104cd14d0();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar5 = (long)_DAT_112710700;
    _objc_retain(lVar4);
    uVar2 = *(undefined8 *)(lVar1 + lVar5);
    *(long *)(lVar1 + lVar5) = lVar4;
    _objc_release(uVar2);
    if (lVar3 == 0) {
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
    lVar4 = lVar1;
    func_0x00010bf8e1a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))();
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104cc9ff4; end: 104cca04f; -[SCLoginOdlvLandingBusinessLogic _selectedObfuscatedContactFromType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc9ff4(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 1) {
    func_0x00010c0dfb60(*(undefined8 *)(param_1 + _DAT_1127106f0));
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 0) {
    func_0x00010c0dfb80(*(undefined8 *)(param_1 + _DAT_1127106f0));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104cca050; end: 104cca067; -[SCLoginOdlvLandingBusinessLogic _hideMessageRateLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104cca050(long param_1)

{
  return *(long *)(param_1 + _DAT_1127106f8) != 0;
}



/* Entry: 104cca068; end: 104cca077; -[SCLoginOdlvLandingBusinessLogic eligibleOtpOptions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104cca068(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127106f4);
}



/* Entry: 104cca078; end: 104cca0ef; -[SCLoginOdlvLandingBusinessLogic .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cca078(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127106f4,0);
  _objc_storeStrong(param_1 + _DAT_1127106fc,0);
  _objc_storeStrong(param_1 + _DAT_112710700,0);
  _objc_storeStrong(param_1 + _DAT_1127106f0,0);
  _objc_destroyWeak(param_1 + _DAT_1127106ec);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127106e8);
  return;
}



/* Entry: 104cca0f0; end: 104cca1ff; -[SCOdlvLandingViewController initWithEligibleOtpOptions:screen:currentPageTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104cca0f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e3b60;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112710708;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271070c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112710710;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126af160;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112710714);
    *(undefined **)((long)puVar1 + (long)_DAT_112710714) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104cca200; end: 104cca207; -[SCOdlvLandingViewController pageViewName] */

undefined8 FUN_104cca200(void)

{
  return 0xa8;
}



/* Entry: 104cca208; end: 104cca29f; -[SCOdlvLandingViewController viewDidLoad] */

void FUN_104cca208(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e3b60;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x00010beb0d80(param_1);
  return;
}



/* Entry: 104cca2a0; end: 104cca2ff; -[SCOdlvLandingViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cca2a0(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e3b60;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710710);
  func_0x00010c0f2220(param_1);
  func_0x00010c24fc40(uVar1);
  return;
}



/* Entry: 104cca300; end: 104cca343; -[SCOdlvLandingViewController _setupUI] */

void FUN_104cca300(undefined8 param_1)

{
  func_0x00010beaadc0();
  func_0x00010beb09a0(param_1);
  func_0x00010beac020(param_1);
  func_0x00010beae860(param_1);
  func_0x00010beae1c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bec1590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startRenderingViewModels_11258df08);
  return;
}



/* Entry: 104cca344; end: 104cca45f; -[SCOdlvLandingViewController _setupBaseView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cca344(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126af168;
  _objc_alloc();
  func_0x00010c04ed60();
  lVar5 = (long)_DAT_112710718;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf4fa60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x000108b9a804();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar2,param_2,uVar4,0);
  _objc_release(uVar4);
  _objc_release(uVar2);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf4fa60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf13860(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 104cca460; end: 104cca5df; -[SCOdlvLandingViewController _setupTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cca460(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_11271071c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar3),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c213040(uVar2,param_2,1);
  func_0x000104cd14e8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3),param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar3),param_2,3);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7b);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710718);
  func_0x00010bf4b2a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104cca5e0;
  puStack_50 = &UNK_1108471b0;
  lStack_48 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar3),param_2,&puStack_68);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104cca5e0; end: 104cca853;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cca5e0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  (**(code **)(lVar4 + 0x10))(lVar4,uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c067640();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_112710714;
  func_0x00010bf69880(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar9));
  (**(code **)(lVar8 + 0x10))(lVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c14df00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  (**(code **)(lVar4 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6a800(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar9));
  (**(code **)(lVar8 + 0x10))(lVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104cca854; end: 104cca9d3; -[SCOdlvLandingViewController _setupDescription] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cca854(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_112710720;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar3),param_2,0);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar3),param_2,1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  func_0x000104cd1518();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar3),param_2,6);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x80);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710718);
  func_0x00010bf4b2a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104cca9d4;
  puStack_50 = &UNK_1108471b0;
  lStack_48 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar3),param_2,&puStack_68);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104cca9d4; end: 104ccabeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cca9d4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  (**(code **)(lVar4 + 0x10))(lVar4,uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c067640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69880(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710714));
  (**(code **)(lVar8 + 0x10))(lVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271071c);
  func_0x00010c0bbea0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0x4028000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104ccabec; end: 104ccae2f; -[SCOdlvLandingViewController _setupOdlvOtpOptions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccabec(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar4 = (long)_DAT_112710724;
  if (*(long *)(param_1 + lVar4) == 0) {
    lVar1 = *(long *)(param_1 + _DAT_112710708);
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      puVar2 = PTR__OBJC_CLASS___UITableView_1126aed40;
      _objc_alloc();
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      *(undefined **)(param_1 + lVar4) = puVar2;
      _objc_release(uVar3);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,0);
      func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4),param_2,param_1);
      func_0x00010c189840(*(undefined8 *)(param_1 + lVar4),param_2,param_1);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4),param_2,puVar2);
      _objc_release(puVar2);
      func_0x00010c1fce40(*(undefined8 *)(param_1 + lVar4),param_2,1);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x80);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fcde0(*(undefined8 *)(param_1 + lVar4),param_2,puVar2);
      _objc_release(puVar2);
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c08c0e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(0x4024000000000000);
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c08c0e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1733a0(0x3ff0000000000000);
      _objc_release(uVar3);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x80);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c08c0e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c173280();
      _objc_release(uVar3);
      _objc_release(puVar2);
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      puVar2 = PTR_PTR_1126af170;
      _objc_opt_class(PTR_PTR_1126af170);
      func_0x00010c125fe0(uVar3,param_2,puVar2,&PTR____CFConstantStringClassReference_110e75bd8);
      uVar3 = *(undefined8 *)(param_1 + _DAT_112710718);
      func_0x00010bf4b2a0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(uVar3);
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_104ccae30;
      puStack_50 = &UNK_1108471b0;
      lStack_48 = param_1;
      func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4),param_2,&puStack_68);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
  return;
}



/* Entry: 104ccae30; end: 104ccb0e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccae30(long param_1,long param_2)

{
  double dVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  (**(code **)(lVar5 + 0x10))(lVar5,uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c067640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69880(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710714));
  (**(code **)(lVar9 + 0x10))(lVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  dVar1 = dRam0000000113173998;
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar10 = *(ulong *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710708);
  func_0x00010bf529e0(uVar10);
  func_0x00010c0df720(dVar1 * (double)uVar10,puVar11);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,puVar11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar3 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710720);
  func_0x00010c0bbea0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  (**(code **)(lVar3 + 0x10))(lVar3,uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))(0x4040000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar6);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104ccb0e8; end: 104ccb267; -[SCOdlvLandingViewController _setupMessageRateLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccb0e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_112710728;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar3),param_2,0);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar3),param_2,1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  func_0x000104cd1530();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar3),param_2,6);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x80);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710718);
  func_0x00010bf4b2a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104ccb268;
  puStack_50 = &UNK_1108471b0;
  lStack_48 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar3),param_2,&puStack_68);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104ccb268; end: 104ccb47f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccb268(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  (**(code **)(lVar4 + 0x10))(lVar4,uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c067640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69880(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710714));
  (**(code **)(lVar8 + 0x10))(lVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710724);
  func_0x00010c0bbea0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0x4028000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104ccb480; end: 104ccb52f; -[SCOdlvLandingViewController _startRenderingViewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccb480(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271070c);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c250380(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104ccb530; end: 104ccb577;  */

void FUN_104ccb530(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed23c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ccb578; end: 104ccb6bb; -[SCOdlvLandingViewController _update:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccb578(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11271072c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(long *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
  func_0x00010c07c640(param_3);
  lVar2 = (long)_DAT_112710718;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010bf13860(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010bf4fa60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010bf4fa60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162d80();
  _objc_release(uVar1);
  lVar2 = param_3;
  func_0x00010bfe2380(param_3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112710728),param_2,lVar2);
  func_0x00010c128b60(*(undefined8 *)(param_1 + _DAT_112710724));
  lVar2 = param_3;
  func_0x00010bf98840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010bf98840(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be04520(param_1,param_2,lVar2);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ccb6bc; end: 104ccb883; -[SCOdlvLandingViewController _displayErrorAlertDialogWithMessage:] */

void FUN_104ccb6bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126af178;
  func_0x00010c22b900();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000108b9a8f4();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126af180;
  puVar3 = puVar2;
  func_0x000108b9a8c4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c235c40(puVar1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained();
  if (param_3 != 0) {
    func_0x00010be0ade0(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ccb884; end: 104ccb8b7;  */

void FUN_104ccb884(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be0ade0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ccb8b8; end: 104ccb903; -[SCOdlvLandingViewController _continueButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccb8b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271070c);
  puVar1 = PTR_PTR_1126af188;
  func_0x00010c25ed20(PTR_PTR_1126af188);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ccb904; end: 104ccb94f; -[SCOdlvLandingViewController _backButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccb904(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271070c);
  puVar1 = PTR_PTR_1126af188;
  func_0x00010bf9b400(PTR_PTR_1126af188);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ccb950; end: 104ccb99b; -[SCOdlvLandingViewController _errorAlertDismissed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccb950(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271070c);
  puVar1 = PTR_PTR_1126af188;
  func_0x00010bf83840(PTR_PTR_1126af188);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ccb99c; end: 104ccb9e7; -[SCOdlvLandingViewController _otpTypeSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccb99c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271070c);
  puVar1 = PTR_PTR_1126af188;
  func_0x00010c158f00(PTR_PTR_1126af188);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ccb9e8; end: 104ccb9f7; -[SCOdlvLandingViewController tableView:heightForRowAtIndexPath:] */

undefined8 FUN_104ccb9e8(void)

{
  return uRam0000000113173998;
}



/* Entry: 104ccb9f8; end: 104ccba5f; -[SCOdlvLandingViewController tableView:didSelectRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccb9f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710708);
  func_0x00010c142240(param_4);
  func_0x00010c0dfd40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0ee1e0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be6e770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__otpTypeSelected__112579378,uVar1);
  return;
}



/* Entry: 104ccba60; end: 104ccba6f; -[SCOdlvLandingViewController tableView:numberOfRowsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccba60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112710708),PTR_s_count_1125b2420);
  return;
}



/* Entry: 104ccba70; end: 104ccbb9f; -[SCOdlvLandingViewController tableView:cellForRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccba70(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_4);
  func_0x00010bf6e060(param_3,param_2,&PTR____CFConstantStringClassReference_110e75bd8);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == (undefined *)0x0) {
    param_3 = PTR_PTR_1126af170;
    _objc_alloc(PTR_PTR_1126af170);
    func_0x00010c04ec80();
  }
  lVar4 = *(long *)(param_1 + _DAT_112710708);
  uVar1 = param_4;
  func_0x00010c142240(param_4);
  func_0x00010c0dfd40(lVar4,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010c0ee1e0();
  lVar3 = *(long *)(param_1 + _DAT_11271072c);
  func_0x00010c0ee200(lVar3);
  func_0x00010c1aff00(param_3,param_2,lVar2 == lVar3);
  lVar2 = lVar4;
  func_0x00010c087500(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010c296d80(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182c40(param_3,param_2,lVar2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104ccbba0; end: 104ccbc5f; -[SCOdlvLandingViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccbba0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271072c,0);
  _objc_storeStrong(param_1 + _DAT_112710708,0);
  _objc_storeStrong(param_1 + _DAT_112710710,0);
  _objc_storeStrong(param_1 + _DAT_112710724,0);
  _objc_storeStrong(param_1 + _DAT_112710728,0);
  _objc_storeStrong(param_1 + _DAT_112710720,0);
  _objc_storeStrong(param_1 + _DAT_11271071c,0);
  _objc_storeStrong(param_1 + _DAT_112710714,0);
  _objc_storeStrong(param_1 + _DAT_112710718,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271070c,0);
  return;
}



/* Entry: 104ccbc60; end: 104ccbde3; -[SCLoginOdlvVerifyingBusinessLogic initWithDelegate:loginService:unauthenticatedOdlvService:odlvChallenge:otpTypeSelected:obfuscatedContact:odlvVerifyingLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104ccbc60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126e3b68;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112710730),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112710734),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112710738),param_5);
    lVar3 = (long)_DAT_11271073c;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112710740) = param_7;
    lVar3 = (long)_DAT_112710744;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112710748) = 1;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11271074c) = 0;
    lVar3 = (long)_DAT_112710750;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104ccbde4; end: 104ccbe4b; -[SCLoginOdlvVerifyingBusinessLogic begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccbde4(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e3b68;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_begin_1125a3840);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710750);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab480();
  _objc_release(uVar1);
  return;
}



/* Entry: 104ccbe4c; end: 104ccbf4b; -[SCLoginOdlvVerifyingBusinessLogic handleAction:] */

void FUN_104ccbe4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104ccbf4c;
  puStack_30 = &UNK_110842e18;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x104ccbfcc;
  puStack_58 = &UNK_110842e18;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_104ccc04c;
  puStack_80 = &UNK_110842e18;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_104ccc094;
  puStack_a8 = &UNK_110842e18;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_104ccc124;
  puStack_d0 = &UNK_110842e18;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_104ccc170;
  puStack_f8 = &UNK_1108450c8;
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  pcStack_128 = FUN_104ccc208;
  puStack_120 = &UNK_110842e18;
  uStack_118 = param_1;
  uStack_f0 = param_1;
  uStack_c8 = param_1;
  uStack_a0 = param_1;
  uStack_78 = param_1;
  uStack_50 = param_1;
  uStack_28 = param_1;
  func_0x00010c0bd8a0(param_3,param_2,&puStack_48,&puStack_70,&puStack_98,&puStack_c0,&puStack_e8,
                      &puStack_110,&puStack_138);
  return;
}



/* Entry: 104ccbf4c; end: 104ccc04b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccbf4c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710754);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710754) = 0;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_release(lVar2);
  lVar2 = *(long *)(param_1 + 0x20) + (long)_DAT_112710730;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c0e1720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104ccc04c; end: 104ccc093;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccc04c(long param_1)

{
  long lVar1;
  
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271075c) = 0;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104ccc094; end: 104ccc123;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccc094(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710750);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab460();
  _objc_release(uVar1);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271075c) = 1;
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104ccc124; end: 104ccc16f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccc124(long param_1)

{
  long lVar1;
  
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271074c) = 1;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104ccc170; end: 104ccc207;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccc170(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710760);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710760) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710764);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710764) = 0;
  _objc_release(uVar2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  (**(code **)(lVar1 + 0x10))(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104ccc208; end: 104ccc2db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccc208(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710764);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710764) = 0;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00();
  if ((int)puVar2 != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710768) = 1;
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x00010bf8e1a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))();
    _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010be9f910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__sendNewOdlvAuthRequest_1125857e8);
    return;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271076c) = 1;
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))();
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010be31330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleSubmitAction_112569e68);
  return;
}



/* Entry: 104ccc2dc; end: 104ccc3f3; -[SCLoginOdlvVerifyingBusinessLogic viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccc2dc(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  puVar2 = PTR_PTR_1126af190;
  _objc_alloc(PTR_PTR_1126af190);
  lVar3 = param_1;
  func_0x00010be45620(param_1);
  lVar4 = param_1;
  func_0x00010c139540(param_1);
  lVar5 = param_1;
  func_0x00010c22a560(param_1);
  uVar1 = *(undefined1 *)(param_1 + _DAT_11271075c);
  lVar6 = param_1;
  func_0x00010bde87a0(param_1);
  lVar7 = param_1;
  func_0x00010bdcd5c0(param_1);
  lVar8 = param_1;
  func_0x00010bde87e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01f5a0(puVar2,param_2,lVar3,lVar4,lVar5,uVar1,lVar6,lVar7,lVar8,
                      *(undefined8 *)(param_1 + _DAT_112710758),
                      *(undefined8 *)(param_1 + _DAT_112710754),
                      *(undefined8 *)(param_1 + _DAT_112710764));
  _objc_release(lVar8);
  func_0x00010c1ec840(param_1,param_2,0);
  func_0x00010c1fea20(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ccc3f4; end: 104ccc41f; -[SCLoginOdlvVerifyingBusinessLogic _isVerifyingOrRequesting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_104ccc3f4(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + _DAT_11271076c) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + _DAT_112710768);
  }
  else {
    bVar1 = 1;
  }
  return bVar1 & 1;
}



/* Entry: 104ccc420; end: 104ccc447; -[SCLoginOdlvVerifyingBusinessLogic _canVerifyConfirmationCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104ccc420(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + _DAT_112710760);
  func_0x00010c08fa60(uVar1);
  return 5 < uVar1;
}



/* Entry: 104ccc448; end: 104ccc483; -[SCLoginOdlvVerifyingBusinessLogic _continueButtonEnabled] */

void FUN_104ccc448(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010bdda2a0();
  if (((uVar1 & 1) != 0) || (uVar1 = param_1, func_0x00010bdd9e80(), (int)uVar1 != 0)) {
    func_0x00010be45620(param_1);
  }
  return;
}



/* Entry: 104ccc484; end: 104ccc4bb; -[SCLoginOdlvVerifyingBusinessLogic _canRequestNewCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_104ccc484(long param_1)

{
  undefined *puVar1;
  
  if (*(char *)(param_1 + _DAT_11271074c) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                    /* WARNING: Could not recover jumptable at 0x00010c078c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR__OBJC_CLASS___NSString_1126ae4d0,PTR_s_isNilOrEmpty__1125fbd10,
               *(undefined8 *)(param_1 + _DAT_112710760));
    return puVar1;
  }
  return (undefined *)0x0;
}



/* Entry: 104ccc4bc; end: 104ccc4fb; -[SCLoginOdlvVerifyingBusinessLogic _appendTimeToButtonTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_104ccc4bc(ulong param_1)

{
  ulong uVar1;
  byte bVar2;
  
  uVar1 = param_1;
  func_0x00010bdda2a0();
  if ((uVar1 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + (long)_DAT_11271074c) ^ 1;
  }
  else {
    bVar2 = 0;
  }
  return bVar2 & 1;
}



/* Entry: 104ccc4fc; end: 104ccc52f; -[SCLoginOdlvVerifyingBusinessLogic _continueButtonTitle] */

void FUN_104ccc4fc(int param_1)

{
  func_0x00010bdda2a0();
  if (param_1 == 0) {
    func_0x000104ce4b10();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000108b9a804();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ccc530; end: 104ccc54f; -[SCLoginOdlvVerifyingBusinessLogic setResetResendTimer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccc530(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
    *(undefined1 *)(param_1 + _DAT_11271074c) = 0;
  }
  *(char *)(param_1 + _DAT_112710748) = (char)param_3;
  return;
}



/* Entry: 104ccc550; end: 104ccc593; -[SCLoginOdlvVerifyingBusinessLogic setShallClearConfirmationCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccc550(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112710760);
    *(undefined8 *)(param_1 + _DAT_112710760) = 0;
    _objc_release(uVar1);
  }
  *(char *)(param_1 + _DAT_112710770) = (char)param_3;
  return;
}


