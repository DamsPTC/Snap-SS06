/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104cd1d74; end: 104cd1d7b; -[SCLoginOdlvLandingViewModel hideMesssageRatelabel] */

undefined1 FUN_104cd1d74(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 104cd1d7c; end: 104cd1d83; -[SCLoginOdlvLandingViewModel errorAlertMessage] */

undefined8 FUN_104cd1d7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104cd1d84; end: 104cd1d8b; -[SCLoginOdlvLandingViewModel otpTypeSelected] */

undefined8 FUN_104cd1d84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104cd1d8c; end: 104cd1d97; -[SCLoginOdlvLandingViewModel .cxx_destruct] */

void FUN_104cd1d8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104cd1d98; end: 104cd1ddf; +[SCLoginOdlvVerifyingAction dismissErrorAlertForLogin] */

void FUN_104cd1d98(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af1a8;
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



/* Entry: 104cd1de0; end: 104cd1e2b; +[SCLoginOdlvVerifyingAction dismissErrorAlertForRequestingOtp] */

void FUN_104cd1de0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af1a8;
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



/* Entry: 104cd1e2c; end: 104cd1e77; +[SCLoginOdlvVerifyingAction dismissErrorAlertForVerifyingTrouble] */

void FUN_104cd1e2c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af1a8;
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



/* Entry: 104cd1e78; end: 104cd1ec3; +[SCLoginOdlvVerifyingAction hadTroubleVerifying] */

void FUN_104cd1e78(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af1a8;
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



/* Entry: 104cd1ec4; end: 104cd1f0f; +[SCLoginOdlvVerifyingAction submit] */

void FUN_104cd1ec4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af1a8;
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



/* Entry: 104cd1f10; end: 104cd1f5b; +[SCLoginOdlvVerifyingAction timerExpired] */

void FUN_104cd1f10(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af1a8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104cd1f5c; end: 104cd1fc3; +[SCLoginOdlvVerifyingAction updatedConfirmationCodeWithConfirmationCode:] */

void FUN_104cd1f5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af1a8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 5;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104cd1fc4; end: 104cd1fe7; -[SCLoginOdlvVerifyingAction copyWithZone:] */

undefined8 FUN_104cd1fc4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104cd1fe8; end: 104cd2047; -[SCLoginOdlvVerifyingAction hash] */

void FUN_104cd1fe8(long param_1)

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
  puStack_58 = PTR_PTR_1126e3ba0;
  puStack_60 = puVar2;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104cd2048; end: 104cd208b; -[SCLoginOdlvVerifyingAction internalInit] */

void FUN_104cd2048(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e3ba0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104cd208c; end: 104cd212b; -[SCLoginOdlvVerifyingAction isEqual:] */

long FUN_104cd208c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104cd2110;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_104cd2110;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_104cd2110;
    }
  }
  lVar3 = 1;
LAB_104cd2110:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104cd212c; end: 104cd22a7; -[SCLoginOdlvVerifyingAction matchDismissErrorAlertForLogin:dismissErrorAlertForRequestingOtp:dismissErrorAlertForVerifyingTrouble:hadTroubleVerifying:timerExpired:updatedConfirmationCode:submit:] */

void FUN_104cd212c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9)

{
  long lVar1;
  code *pcVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 3) {
    if (lVar1 == 0) {
      if (param_3 == 0) goto LAB_104cd225c;
      pcVar2 = *(code **)(param_3 + 0x10);
      lVar1 = param_3;
    }
    else if (lVar1 == 1) {
      if (param_4 == 0) goto LAB_104cd225c;
      pcVar2 = *(code **)(param_4 + 0x10);
      lVar1 = param_4;
    }
    else {
      if ((lVar1 != 2) || (param_5 == 0)) goto LAB_104cd225c;
      pcVar2 = *(code **)(param_5 + 0x10);
      lVar1 = param_5;
    }
  }
  else if (lVar1 < 5) {
    if (lVar1 == 3) {
      if (param_6 == 0) goto LAB_104cd225c;
      pcVar2 = *(code **)(param_6 + 0x10);
      lVar1 = param_6;
    }
    else {
      if ((lVar1 != 4) || (param_7 == 0)) goto LAB_104cd225c;
      pcVar2 = *(code **)(param_7 + 0x10);
      lVar1 = param_7;
    }
  }
  else {
    if (lVar1 == 5) {
      if (param_8 != 0) {
        (**(code **)(param_8 + 0x10))(param_8,*(undefined8 *)(param_1 + 0x10));
      }
      goto LAB_104cd225c;
    }
    if ((lVar1 != 6) || (param_9 == 0)) goto LAB_104cd225c;
    pcVar2 = *(code **)(param_9 + 0x10);
    lVar1 = param_9;
  }
  (*pcVar2)(lVar1);
LAB_104cd225c:
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104cd22a8; end: 104cd22b3; -[SCLoginOdlvVerifyingAction .cxx_destruct] */

void FUN_104cd22a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104cd22b4; end: 104cd23fb; -[SCLoginOdlvVerifyingViewModel initWithIsRequestingOrVerifying:shallRestartResendTimer:shallClearConfirmationCode:hasTroubleVerifying:continueButtonEnabled:appendTimeToContinueButtonTitle:continueButtonTitle:requestErrorMessage:invalidPreAuthTokenErrorMessage:generalErrorMessage:] */

undefined8 *
FUN_104cd22b4(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126e3ba8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar1 + 1) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    *(undefined1 *)((long)puVar1 + 10) = param_5;
    *(undefined1 *)((long)puVar1 + 0xb) = param_6;
    *(undefined1 *)((long)puVar1 + 0xc) = param_7;
    *(undefined1 *)((long)puVar1 + 0xd) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  return puVar1;
}



/* Entry: 104cd23fc; end: 104cd241f; -[SCLoginOdlvVerifyingViewModel copyWithZone:] */

undefined8 FUN_104cd23fc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104cd2420; end: 104cd24e3; -[SCLoginOdlvVerifyingViewModel hash] */

ulong * FUN_104cd2420(long param_1,undefined8 param_2,ulong *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ushort uVar8;
  undefined4 uVar9;
  ulong uVar10;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = *(undefined4 *)(param_1 + 8);
  uVar6 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar9 >> 0x18),
                                          (uint6)(byte)((uint)uVar9 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar9) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar9 >> 8),(short)uVar6);
  uVar10 = CONCAT44((int)(uVar6 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar6 = CONCAT26((short)(uVar10 >> 0x30),CONCAT24((short)(uVar6 >> 0x20),(int)uVar10)) &
          0xff01ff01ffffffff;
  uVar8 = (ushort)(uVar6 >> 0x30);
  uStack_78 = (ulong)uVar1 & 0xff;
  uStack_70 = uVar6 >> 0x10 & 0xff;
  uStack_68 = (ulong)CONCAT24(uVar8,(uint)(ushort)(uVar6 >> 0x20)) & 0xffffffff;
  uStack_60 = (ulong)uVar8;
  uStack_58 = (ulong)*(byte *)(param_1 + 0xc);
  uStack_50 = (ulong)*(byte *)(param_1 + 0xd);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar4 = &uStack_78;
  uStack_30 = uVar3;
  func_0x000100505190(puVar4,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_104cd25f4:
    puVar7 = (ulong *)0x1;
  }
  else {
    puVar7 = (ulong *)0x0;
    if ((puVar4 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_104cd2600;
    puVar7 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if (((((ulong)puVar5 & 1) != 0) &&
        (((((char)puVar4[1] == (char)param_3[1] &&
           (*(char *)((long)puVar4 + 9) == *(char *)((long)param_3 + 9))) &&
          (*(char *)((long)puVar4 + 10) == *(char *)((long)param_3 + 10))) &&
         ((*(char *)((long)puVar4 + 0xb) == *(char *)((long)param_3 + 0xb) &&
          (*(char *)((long)puVar4 + 0xc) == *(char *)((long)param_3 + 0xc))))))) &&
       (*(char *)((long)puVar4 + 0xd) == *(char *)((long)param_3 + 0xd))) {
      uVar6 = puVar4[2];
      if ((uVar6 == param_3[2]) || (func_0x00010c071ae0(), (int)uVar6 != 0)) {
        uVar6 = puVar4[3];
        if ((uVar6 == param_3[3]) || (func_0x00010c071ae0(), (int)uVar6 != 0)) {
          uVar6 = puVar4[4];
          if ((uVar6 == param_3[4]) || (func_0x00010c071ae0(), (int)uVar6 != 0)) {
            puVar7 = (ulong *)puVar4[5];
            if (puVar7 != (ulong *)param_3[5]) {
              func_0x00010c071ae0();
              goto LAB_104cd2600;
            }
            goto LAB_104cd25f4;
          }
        }
      }
    }
    puVar7 = (ulong *)0x0;
  }
LAB_104cd2600:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 104cd24e4; end: 104cd261b; -[SCLoginOdlvVerifyingViewModel isEqual:] */

long FUN_104cd24e4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104cd25f4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104cd2600;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
           (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
          (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
         ((*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb) &&
          (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))))))) &&
       (*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_104cd2600;
            }
            goto LAB_104cd25f4;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_104cd2600:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104cd261c; end: 104cd2623; -[SCLoginOdlvVerifyingViewModel isRequestingOrVerifying] */

undefined1 FUN_104cd261c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104cd2624; end: 104cd262b; -[SCLoginOdlvVerifyingViewModel shallRestartResendTimer] */

undefined1 FUN_104cd2624(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 104cd262c; end: 104cd2633; -[SCLoginOdlvVerifyingViewModel shallClearConfirmationCode] */

undefined1 FUN_104cd262c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 104cd2634; end: 104cd263b; -[SCLoginOdlvVerifyingViewModel hasTroubleVerifying] */

undefined1 FUN_104cd2634(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 104cd263c; end: 104cd2643; -[SCLoginOdlvVerifyingViewModel continueButtonEnabled] */

undefined1 FUN_104cd263c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 104cd2644; end: 104cd264b; -[SCLoginOdlvVerifyingViewModel appendTimeToContinueButtonTitle] */

undefined1 FUN_104cd2644(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 104cd264c; end: 104cd2653; -[SCLoginOdlvVerifyingViewModel continueButtonTitle] */

undefined8 FUN_104cd264c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104cd2654; end: 104cd265b; -[SCLoginOdlvVerifyingViewModel requestErrorMessage] */

undefined8 FUN_104cd2654(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104cd265c; end: 104cd2663; -[SCLoginOdlvVerifyingViewModel invalidPreAuthTokenErrorMessage] */

undefined8 FUN_104cd265c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104cd2664; end: 104cd266b; -[SCLoginOdlvVerifyingViewModel generalErrorMessage] */

undefined8 FUN_104cd2664(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104cd266c; end: 104cd26b3; -[SCLoginOdlvVerifyingViewModel .cxx_destruct] */

void FUN_104cd266c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104cd26b4; end: 104cd2f07; -[SCLogInEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd26b4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
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
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined *puVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  undefined *puVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  undefined8 uVar37;
  long lVar38;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  long lStack_80;
  
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af1e0;
  func_0x00010c069000();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar2 = PTR_PTR_1126af1e8;
  _objc_alloc();
  func_0x00010c0270c0();
  _objc_initWeak(auStack_90,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_98,auStack_90);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11271083c;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  puVar7 = PTR_PTR_1126af000;
  _objc_alloc();
  lVar5 = param_1 + _DAT_112710840;
  _objc_loadWeakRetained(lVar5);
  lVar8 = lVar5;
  func_0x00010c2970e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_112710844;
  _objc_loadWeakRetained(lVar9);
  lVar10 = lVar9;
  func_0x00010bf9c540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffef00();
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar5);
  puVar11 = PTR_PTR_1126af1f8;
  _objc_alloc();
  lVar34 = (long)_DAT_112710848;
  lVar5 = param_1 + lVar34;
  _objc_loadWeakRetained();
  lVar12 = lVar5;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_11271084c;
  _objc_loadWeakRetained();
  lVar8 = param_1 + _DAT_112710850;
  _objc_loadWeakRetained();
  lVar13 = lVar8;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_112710858;
  _objc_loadWeakRetained();
  lVar14 = lVar10;
  func_0x00010c113f20();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_11271086c;
  _objc_loadWeakRetained();
  lVar29 = (long)_DAT_11271087c;
  lVar16 = param_1 + lVar29;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010c0b43e0();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = (long)_DAT_112710880;
  lVar32 = param_1 + lVar35;
  _objc_loadWeakRetained();
  lVar18 = lVar32;
  func_0x00010c0b4020();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_1 + _DAT_112710884;
  _objc_loadWeakRetained();
  lVar19 = lVar31;
  func_0x00010c0d2660();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = PTR_PTR_1126af200;
  _objc_alloc();
  lVar30 = param_1 + _DAT_112710888;
  _objc_loadWeakRetained();
  lVar20 = lVar30;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038020();
  lVar36 = (long)_DAT_11271088c;
  lVar28 = param_1 + lVar36;
  _objc_loadWeakRetained();
  lVar22 = lVar28;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = param_1 + lVar34;
  _objc_loadWeakRetained();
  func_0x00010c073ca0();
  lVar23 = param_1 + _DAT_112710890;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + _DAT_112710894;
  _objc_loadWeakRetained();
  lVar26 = lVar25;
  func_0x00010c0b3f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c056de0();
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar38);
  _objc_release(lVar22);
  _objc_release(lVar28);
  _objc_release(puVar27);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar30);
  _objc_release(lVar19);
  _objc_release(lVar31);
  _objc_release(lVar18);
  _objc_release(lVar32);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar10);
  _objc_release(lVar13);
  _objc_release(lVar8);
  _objc_release(lVar9);
  _objc_release(lVar12);
  _objc_release(lVar5);
  puVar27 = PTR_PTR_1126aeb48;
  _objc_alloc();
  func_0x00010c0404c0();
  puVar33 = PTR_PTR_1126af208;
  _objc_alloc();
  lVar5 = param_1 + lVar34;
  _objc_loadWeakRetained();
  lVar28 = lVar5;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1 + lVar29;
  _objc_loadWeakRetained();
  lVar30 = lVar29;
  func_0x00010c0b43e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + lVar34;
  _objc_loadWeakRetained();
  lVar31 = lVar9;
  func_0x00010c0894e0();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_1 + lVar34;
  _objc_loadWeakRetained();
  lVar10 = lVar34;
  func_0x00010c0894a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_112710898;
  _objc_loadWeakRetained();
  lVar15 = lVar8;
  func_0x00010c0ec980();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1 + lVar35;
  _objc_loadWeakRetained();
  lVar16 = lVar35;
  func_0x00010c0b4020();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = param_1 + lVar36;
  _objc_loadWeakRetained();
  lVar32 = lVar36;
  func_0x00010c08ec00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040780();
  lVar38 = (long)_DAT_11271089c;
  uVar37 = *(undefined8 *)(param_1 + lVar38);
  *(undefined **)(param_1 + lVar38) = puVar33;
  _objc_release(uVar37);
  _objc_release(lVar32);
  _objc_release(lVar36);
  _objc_release(lVar16);
  _objc_release(lVar35);
  _objc_release(lVar15);
  _objc_release(lVar8);
  _objc_release(lVar10);
  _objc_release(lVar34);
  _objc_release(lVar31);
  _objc_release(lVar9);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar5);
  func_0x00010bf192c0(*(undefined8 *)(param_1 + lVar38));
  _objc_release(puVar27);
  _objc_release(puVar11);
  _objc_release(puVar7);
  _objc_release(lVar6);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume(puVar3);
  puVar3 = puVar3 + 0x20;
  _objc_loadWeakRetained(puVar3);
  puVar1 = puVar3;
  func_0x00010bdefc40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104cd2f08; end: 104cd2f47;  */

void FUN_104cd2f08(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdefc40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104cd2f48; end: 104cd2f63;  */

void FUN_104cd2f48(void)

{
  _objc_opt_new(PTR_PTR_1126af1f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104cd2f64; end: 104cd2f6b;  */

undefined1 FUN_104cd2f64(long param_1)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain();
  lVar1 = lRam000000011381e578;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  puStack_38 = &UNK_106b244e4;
  puStack_30 = &UNK_110842e18;
  uStack_28 = uVar3;
  _objc_retain(uVar3);
  uVar4 = uVar3;
  if (lVar1 != -1) {
    func_0x00010002a2fc(0x11381e578,&puStack_48);
    uVar4 = uStack_28;
  }
  uVar2 = uRam000000011381e580;
  _objc_release(uVar4);
  _objc_release(uVar3);
  return uVar2;
}



/* Entry: 104cd2f6c; end: 104cd310f; -[SCLogInEntryPoint _createMagicCodeLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd2f6c(long param_1,undefined8 param_2)

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
  long lVar10;
  long lVar11;
  long lVar12;
  
  puVar1 = PTR_PTR_1126af210;
  _objc_alloc();
  lVar2 = param_1 + _DAT_1127108a0;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c292f40();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = (long)_DAT_1127108a4;
  lVar4 = param_1 + lVar12;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c0b42c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_1127108a8;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010bf70800();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_112710884;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010c0d2660();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + lVar12;
  _objc_loadWeakRetained(lVar12);
  lVar10 = lVar12;
  func_0x00010c089460();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_1127108ac;
  _objc_loadWeakRetained(param_1);
  lVar11 = param_1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05c920(puVar1,param_2,lVar3,lVar5,lVar7,lVar9,lVar10,lVar11);
  _objc_release(lVar11);
  _objc_release(param_1);
  _objc_release(lVar10);
  _objc_release(lVar12);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104cd3110; end: 104cd32af; -[SCLogInEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd3110(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112710878,0);
  _objc_storeStrong(param_1 + _DAT_112710874,0);
  _objc_storeStrong(param_1 + _DAT_112710870,0);
  _objc_storeStrong(param_1 + _DAT_112710868,0);
  _objc_storeStrong(param_1 + _DAT_112710854,0);
  _objc_storeStrong(param_1 + _DAT_112710864,0);
  _objc_storeStrong(param_1 + _DAT_112710860,0);
  _objc_storeStrong(param_1 + _DAT_11271085c,0);
  _objc_destroyWeak(param_1 + _DAT_112710894);
  _objc_destroyWeak(param_1 + _DAT_112710898);
  _objc_destroyWeak(param_1 + _DAT_112710844);
  _objc_destroyWeak(param_1 + _DAT_112710840);
  _objc_destroyWeak(param_1 + _DAT_112710890);
  _objc_destroyWeak(param_1 + _DAT_11271083c);
  _objc_destroyWeak(param_1 + _DAT_112710880);
  _objc_destroyWeak(param_1 + _DAT_1127108a8);
  _objc_destroyWeak(param_1 + _DAT_1127108a4);
  _objc_destroyWeak(param_1 + _DAT_1127108a0);
  _objc_destroyWeak(param_1 + _DAT_11271086c);
  _objc_destroyWeak(param_1 + _DAT_112710884);
  _objc_destroyWeak(param_1 + _DAT_1127108ac);
  _objc_destroyWeak(param_1 + _DAT_112710858);
  _objc_destroyWeak(param_1 + _DAT_112710888);
  _objc_destroyWeak(param_1 + _DAT_11271084c);
  _objc_destroyWeak(param_1 + _DAT_112710850);
  _objc_destroyWeak(param_1 + _DAT_11271087c);
  _objc_destroyWeak(param_1 + _DAT_112710848);
  _objc_destroyWeak(param_1 + _DAT_11271088c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271089c,0);
  return;
}



/* Entry: 104cd32b0; end: 104cd346b; -[SCMagicCodeLoggerImpl initWithUserNotTrackedLogger:loginSessionService:deviceInfoProvider:multiSourceCountryProvider:lastLoginInfoRepository:grapheneRegistry:] */

undefined1 *
FUN_104cd32b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e3bb0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bdc1fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfc74a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c083f00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bfd8b00();
    *(char *)((long)puVar1 + 0x40) = (char)uVar2;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104cd346c; end: 104cd347b; -[SCMagicCodeLoggerImpl logMagicLoginPadShownWithSource:usernameOrEmail:] */

void FUN_104cd346c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be55970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logMagicCodePadWithUsernameOrEm_112572ff8,param_4,2,param_3);
  return;
}



/* Entry: 104cd347c; end: 104cd348b; -[SCMagicCodeLoggerImpl logMagicLoginPadOptInShownWithSource:usernameOrEmail:] */

void FUN_104cd347c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be55970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logMagicCodePadWithUsernameOrEm_112572ff8,param_4,4,param_3);
  return;
}



/* Entry: 104cd348c; end: 104cd349b; -[SCMagicCodeLoggerImpl logMagicLoginPadDismissWithSource:usernameOrEmail:] */

void FUN_104cd348c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be55970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logMagicCodePadWithUsernameOrEm_112572ff8,param_4,1,param_3);
  return;
}



/* Entry: 104cd349c; end: 104cd34ab; -[SCMagicCodeLoggerImpl logMagicLoginPadResendWithSource:usernameOrEmail:] */

void FUN_104cd349c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be55970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logMagicCodePadWithUsernameOrEm_112572ff8,param_4,3,param_3);
  return;
}



/* Entry: 104cd34ac; end: 104cd3553; -[SCMagicCodeLoggerImpl _logBlizzardWithContext:source:identifier:] */

void FUN_104cd34ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126af218;
  _objc_opt_new(PTR_PTR_1126af218);
  func_0x00010c182d40();
  func_0x00010c1c0c20(puVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x00010c1c08c0(puVar1,param_2,*(undefined8 *)(param_1 + 0x30));
  func_0x00010c1c0a20(puVar1,param_2,param_4);
  func_0x00010c1c0920(puVar1,param_2,param_5);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b29e0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cd3554; end: 104cd3723; -[SCMagicCodeLoggerImpl _logGrapheneWithContext:source:identifier:] */

void FUN_104cd3554(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126af220;
  func_0x00010c0b6440(PTR_PTR_1126af220);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9efd9c(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dae878,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dae898,
                      *(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,*(undefined1 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dae8b8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  func_0x00010bb00cf0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dae8d8,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_4);
  func_0x00010bb00cd0(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dae8f8,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0b3fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104cd3724; end: 104cd377b; -[SCMagicCodeLoggerImpl _logMagicCodePadWithUsernameOrEmail:context:source:] */

void FUN_104cd3724(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be5ac60();
  func_0x00010be50c80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be54770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logGrapheneWithContext_source_i_112572b78,param_4,param_5,uVar1);
  return;
}



/* Entry: 104cd377c; end: 104cd379f; -[SCMagicCodeLoggerImpl _loginIdentifier:] */

ulong FUN_104cd377c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  func_0x00010bf4bb00(param_3,param_2,&PTR____CFConstantStringClassReference_110dae4f8);
  return param_3 & 0xffffffff;
}



/* Entry: 104cd37a0; end: 104cd380b; -[SCMagicCodeLoggerImpl .cxx_destruct] */

void FUN_104cd37a0(long param_1)

{
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



/* Entry: 104cd380c; end: 104cd3e4f; -[SCLogInCredentialsEntryBusinessLogic initWithUsernameOrEmail:phoneNumber:password:reactivationStatus:reactivationAccountIdentifier:delegate:loginService:networkConnectivityMonitor:phoneNumberFormatter:loginStateTransitionLogger:loginLogger:magicCodeLogger:logInInterceptorsCheck:logInRepository:applicationLifecycleEvents:enteredPageBefore:circumstanceEngine:passkeyLoginEnabled:isFromPhoneEmailFirstPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104cd380c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5,long param_6,undefined8 *param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined1 param_21)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_70,param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_19);
  _objc_retain(param_20);
  puStack_78 = PTR_PTR_1126e3bb8;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 == (undefined8 *)0x0) goto LAB_104cd3d74;
  puVar2 = auStack_70;
  _objc_loadWeakRetained(puVar2);
  _objc_storeWeak((long)puVar1 + (long)_DAT_1127108d0,puVar2);
  _objc_release(puVar2);
  lVar6 = (long)_DAT_1127108d4;
  _objc_retain(param_9);
  uVar3 = *(undefined8 *)((long)puVar1 + lVar6);
  *(undefined8 *)((long)puVar1 + lVar6) = param_9;
  _objc_release(uVar3);
  lVar6 = (long)_DAT_1127108d8;
  _objc_retain(param_12);
  uVar3 = *(undefined8 *)((long)puVar1 + lVar6);
  *(undefined8 *)((long)puVar1 + lVar6) = param_12;
  _objc_release(uVar3);
  lVar6 = (long)_DAT_1127108dc;
  _objc_retain(param_15);
  uVar3 = *(undefined8 *)((long)puVar1 + lVar6);
  *(undefined8 *)((long)puVar1 + lVar6) = param_15;
  _objc_release(uVar3);
  lVar6 = (long)_DAT_1127108e0;
  _objc_retain(param_16);
  uVar3 = *(undefined8 *)((long)puVar1 + lVar6);
  *(undefined8 *)((long)puVar1 + lVar6) = param_16;
  _objc_release(uVar3);
  lVar6 = param_6;
  func_0x00010c121100();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127108e4);
  *(long *)((long)puVar1 + (long)_DAT_1127108e4) = lVar6;
  _objc_release(uVar3);
  lVar6 = (long)_DAT_1127108e8;
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)((long)puVar1 + lVar6);
  *(undefined8 *)((long)puVar1 + lVar6) = param_3;
  _objc_release(uVar3);
  lVar6 = (long)_DAT_1127108ec;
  _objc_retain(param_11);
  uVar3 = *(undefined8 *)((long)puVar1 + lVar6);
  *(undefined8 *)((long)puVar1 + lVar6) = param_11;
  _objc_release(uVar3);
  if (param_4 == (undefined8 *)0x0) {
    puVar7 = puVar1;
    func_0x00010be1e7c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar7 = param_4;
    func_0x00010bf53280(param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bed6320(puVar1);
  _objc_release(puVar7);
  puVar7 = param_4;
  func_0x00010c0cf4a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bedcee0(puVar1);
  _objc_release(puVar7);
  lVar6 = (long)_DAT_1127108f0;
  _objc_retain(param_5);
  uVar3 = *(undefined8 *)((long)puVar1 + lVar6);
  *(undefined8 *)((long)puVar1 + lVar6) = param_5;
  _objc_release(uVar3);
  *(undefined1 *)((long)puVar1 + (long)_DAT_1127108f4) = 1;
  puVar7 = puVar1;
  func_0x00010be429e0();
  *(char *)((long)puVar1 + (long)_DAT_1127108f8) = (char)puVar7;
  lVar6 = (long)_DAT_1127108fc;
  _objc_retain(param_13);
  uVar3 = *(undefined8 *)((long)puVar1 + lVar6);
  *(undefined8 *)((long)puVar1 + lVar6) = param_13;
  _objc_release(uVar3);
  lVar6 = (long)_DAT_112710900;
  _objc_retain(param_14);
  uVar3 = *(undefined8 *)((long)puVar1 + lVar6);
  *(undefined8 *)((long)puVar1 + lVar6) = param_14;
  _objc_release(uVar3);
  lVar6 = (long)_DAT_112710904;
  _objc_retain(param_17);
  uVar3 = *(undefined8 *)((long)puVar1 + lVar6);
  *(undefined8 *)((long)puVar1 + lVar6) = param_17;
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112710908);
  *(undefined **)((long)puVar1 + (long)_DAT_112710908) = puVar4;
  _objc_release(uVar3);
  *(undefined1 *)((long)puVar1 + (long)_DAT_11271090c) = 0;
  *(undefined1 *)((long)puVar1 + (long)_DAT_112710910) = param_21;
  _objc_initWeak(auStack_88,puVar1);
  puVar4 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_90,auStack_88);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112710914);
  *(undefined **)((long)puVar1 + (long)_DAT_112710914) = puVar4;
  _objc_release(uVar3);
  *(undefined8 *)((long)puVar1 + (long)_DAT_112710918) = 0;
  func_0x00010bed4ce0(puVar1);
  lVar6 = param_6;
  func_0x00010c0d74c0();
  if ((int)lVar6 == 0) {
    if (param_6 != 0) {
      lVar6 = param_6;
      func_0x00010c0cb140();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = *(undefined8 **)((long)puVar1 + (long)_DAT_112710924);
      *(long *)((long)puVar1 + (long)_DAT_112710924) = lVar6;
      goto LAB_104cd3cd8;
    }
  }
  else {
    lVar6 = param_6;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271091c);
    *(long *)((long)puVar1 + (long)_DAT_11271091c) = lVar6;
    _objc_release(uVar3);
    puVar7 = param_7;
    if (param_7 == (undefined8 *)0x0) {
      puVar7 = puVar1;
      func_0x00010be23b40();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar6 = (long)_DAT_112710920;
    _objc_retain(puVar7);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 **)((long)puVar1 + lVar6) = puVar7;
    _objc_release(uVar3);
    if (param_7 == (undefined8 *)0x0) {
LAB_104cd3cd8:
      _objc_release(puVar7);
    }
  }
  func_0x00010be65b80(puVar1);
  *(undefined1 *)((long)puVar1 + (long)_DAT_112710928) = 1;
  *(undefined8 *)((long)puVar1 + (long)_DAT_11271092c) = param_18;
  *(undefined8 *)((long)puVar1 + (long)_DAT_112710930) = 0;
  lVar6 = (long)_DAT_112710934;
  _objc_retain(param_19);
  uVar3 = *(undefined8 *)((long)puVar1 + lVar6);
  *(undefined8 *)((long)puVar1 + lVar6) = param_19;
  _objc_release(uVar3);
  uVar3 = param_20;
  _objc_retainBlock();
  uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_112710938);
  *(undefined8 *)((long)puVar1 + (long)_DAT_112710938) = uVar3;
  _objc_release(uVar5);
  lVar6 = (long)_DAT_11271093c;
  _objc_retain(param_10);
  uVar3 = *(undefined8 *)((long)puVar1 + lVar6);
  *(undefined8 *)((long)puVar1 + lVar6) = param_10;
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
LAB_104cd3d74:
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104cd3e50; end: 104cd3e8f;  */

void FUN_104cd3e50(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf1420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104cd3e90; end: 104cd3eff; -[SCLogInCredentialsEntryBusinessLogic begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd3e90(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e3bb8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_begin_1125a3840);
  func_0x00010beda100(param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127108fc);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a9ca0();
  _objc_release(uVar1);
  return;
}



/* Entry: 104cd3f00; end: 104cd422b; -[SCLogInCredentialsEntryBusinessLogic handleAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd3f00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_3b0;
  undefined8 uStack_3a8;
  code *pcStack_3a0;
  undefined *puStack_398;
  long lStack_390;
  undefined *puStack_388;
  undefined8 uStack_380;
  code *pcStack_378;
  undefined *puStack_370;
  long lStack_368;
  undefined *puStack_360;
  undefined8 uStack_358;
  code *pcStack_350;
  undefined *puStack_348;
  long lStack_340;
  undefined *puStack_338;
  undefined8 uStack_330;
  code *pcStack_328;
  undefined *puStack_320;
  long lStack_318;
  undefined *puStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined *puStack_2f8;
  long lStack_2f0;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined *puStack_2d0;
  long lStack_2c8;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  code *pcStack_2b0;
  undefined *puStack_2a8;
  long lStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  code *pcStack_288;
  undefined *puStack_280;
  long lStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  code *pcStack_260;
  undefined *puStack_258;
  long lStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  long lStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  long lStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  long lStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710940);
  *(undefined8 *)(param_1 + _DAT_112710940) = 0;
  _objc_retain(param_3);
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + _DAT_11271090c) = 0;
  *(undefined1 *)(param_1 + _DAT_112710944) = 0;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104cd422c;
  puStack_50 = &UNK_110842e18;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104cd4264;
  puStack_78 = &UNK_110842e18;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_104cd4294;
  puStack_a0 = &UNK_1108450c8;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_104cd42e4;
  puStack_c8 = &UNK_1108450c8;
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  uStack_f8 = 0x104cd4360;
  puStack_f0 = &UNK_1108450c8;
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_104cd43e8;
  puStack_118 = &UNK_110842e18;
  puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_150 = 0xc2000000;
  pcStack_148 = FUN_104cd4428;
  puStack_140 = &UNK_110842e18;
  puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_178 = 0xc2000000;
  pcStack_170 = FUN_104cd447c;
  puStack_168 = &UNK_110842e18;
  puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a0 = 0xc2000000;
  pcStack_198 = FUN_104cd44fc;
  puStack_190 = &UNK_110842e18;
  puStack_1d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1c8 = 0xc2000000;
  pcStack_1c0 = FUN_104cd4508;
  puStack_1b8 = &UNK_110842e18;
  puStack_1f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1f0 = 0xc2000000;
  uStack_1e8 = 0x104cd4574;
  puStack_1e0 = &UNK_110842e18;
  puStack_220 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_218 = 0xc2000000;
  uStack_210 = 0x104cd45d4;
  puStack_208 = &UNK_110842e18;
  puStack_248 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_240 = 0xc2000000;
  uStack_238 = 0x104cd4610;
  puStack_230 = &UNK_110841f20;
  puStack_270 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_268 = 0xc2000000;
  pcStack_260 = FUN_104cd4658;
  puStack_258 = &UNK_1108480f8;
  puStack_298 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_290 = 0xc2000000;
  pcStack_288 = FUN_104cd46b0;
  puStack_280 = &UNK_110842e18;
  puStack_2c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2b8 = 0xc2000000;
  pcStack_2b0 = FUN_104cd473c;
  puStack_2a8 = &UNK_1108488c8;
  puStack_2e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2e0 = 0xc2000000;
  uStack_2d8 = 0x104cd4748;
  puStack_2d0 = &UNK_110842e18;
  puStack_310 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_308 = 0xc2000000;
  uStack_300 = 0x104cd4754;
  puStack_2f8 = &UNK_110842e18;
  puStack_338 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_330 = 0xc2000000;
  pcStack_328 = FUN_104cd475c;
  puStack_320 = &UNK_110842e18;
  puStack_360 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_358 = 0xc2000000;
  pcStack_350 = FUN_104cd47a4;
  puStack_348 = &UNK_110842e18;
  puStack_388 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_380 = 0xc2000000;
  pcStack_378 = FUN_104cd47ac;
  puStack_370 = &UNK_1108480c8;
  puStack_3b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_3a8 = 0xc2000000;
  pcStack_3a0 = FUN_104cd4820;
  puStack_398 = &UNK_110842e18;
  lStack_390 = param_1;
  lStack_368 = param_1;
  lStack_340 = param_1;
  lStack_318 = param_1;
  lStack_2f0 = param_1;
  lStack_2c8 = param_1;
  lStack_2a0 = param_1;
  lStack_278 = param_1;
  lStack_250 = param_1;
  lStack_228 = param_1;
  lStack_200 = param_1;
  lStack_1d8 = param_1;
  lStack_1b0 = param_1;
  lStack_188 = param_1;
  lStack_160 = param_1;
  lStack_138 = param_1;
  lStack_110 = param_1;
  lStack_e8 = param_1;
  lStack_c0 = param_1;
  lStack_98 = param_1;
  lStack_70 = param_1;
  lStack_48 = param_1;
  func_0x00010c0bdbe0(param_3,param_2,&puStack_68,&puStack_90,&puStack_b8,&puStack_e0,&puStack_108,
                      &puStack_130,&puStack_158,&puStack_180,&puStack_1a8,&puStack_1d0,&puStack_1f8,
                      &puStack_220,&puStack_248,&puStack_270,&puStack_298,&puStack_2c0,&puStack_2e8,
                      &puStack_310,&puStack_338,&puStack_360,&puStack_388,&puStack_3b0);
  _objc_release(param_3);
  return;
}



/* Entry: 104cd422c; end: 104cd4263;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd422c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_1127108d0;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf5c1a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104cd4264; end: 104cd4293;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd4264(long param_1)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(*(long *)(param_1 + 0x20) + (long)_DAT_11271092c);
  if ((*pbVar1 & 1) != 0) {
    return;
  }
  *pbVar1 = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bec0f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__startPasskeyLoginWithTrigger__11258dd78,0);
  return;
}



/* Entry: 104cd4294; end: 104cd42e3;  */

void FUN_104cd4294(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010bee3080(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
  func_0x00010bed4ce0(*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104cd42e4; end: 104cd43e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd42e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(lVar2 + _DAT_1127108ec);
  func_0x00010bfc8be0(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed6320(lVar2);
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104cd43e8; end: 104cd4427;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd43e8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_1127108d0;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf5c2a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104cd4428; end: 104cd447b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd4428(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_1127108d0;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf5c260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104cd447c; end: 104cd44fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd447c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  *(byte *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127108f4) =
       *(byte *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127108f4) ^ 1;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127108fc);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b1b80();
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104cd44fc; end: 104cd4507;  */

void FUN_104cd44fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd0c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__attemptLogInWithConfirmReactiva_112551cb0,0);
  return;
}



/* Entry: 104cd4508; end: 104cd4657;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd4508(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710924);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710924) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271091c);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271091c) = 0;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104cd4658; end: 104cd46af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd4658(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  lVar2 = (long)_DAT_1127108d0;
  _objc_retain(param_2);
  lVar1 = lVar1 + lVar2;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf5c2c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104cd46b0; end: 104cd473b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd46b0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_1127108d0;
  _objc_loadWeakRetained(lVar1);
  lVar2 = *(long *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(lVar2 + _DAT_112710948);
  func_0x00010be23b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5c240(lVar1,param_2,uVar3,lVar2,
                      *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710928));
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104cd473c; end: 104cd475b;  */

void FUN_104cd473c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be2e830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handlePromptRedirectToRegAction_1125693a8,
             param_2);
  return;
}



/* Entry: 104cd475c; end: 104cd47a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd475c(long param_1)

{
  long lVar1;
  
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271094c) = 0;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104cd47a4; end: 104cd47ab;  */

void FUN_104cd47a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde87d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__continueButtonTapped_112557b90);
  return;
}



/* Entry: 104cd47ac; end: 104cd481f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd47ac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  lVar2 = (long)_DAT_1127108d0;
  _objc_retain(param_2);
  lVar1 = lVar1 + lVar2;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0a87a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104cd4820; end: 104cd4837;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd4820(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710950) = 1;
  return;
}



/* Entry: 104cd4838; end: 104cd487b; -[SCLogInCredentialsEntryBusinessLogic _pageInFocus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd4838(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11271094c) = 1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cd487c; end: 104cd48bf; -[SCLogInCredentialsEntryBusinessLogic _continueButtonTapped] */

void FUN_104cd487c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bdd9ba0();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdd0c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__attemptLogInWithConfirmReactiva_112551cb0,0);
    return;
  }
  func_0x00010beda100(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be6f230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__pageInFocus_112579628);
  return;
}



/* Entry: 104cd48c0; end: 104cd493f; -[SCLogInCredentialsEntryBusinessLogic _updateKeyboardFocusType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd48c0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127108f8;
  if (*(char *)(param_1 + lVar3) == '\x01') {
    lVar1 = *(long *)(param_1 + _DAT_112710954);
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      uVar2 = 1;
      goto LAB_104cd4928;
    }
    if ((*(byte *)(param_1 + lVar3) & 1) == 0) goto LAB_104cd4900;
  }
  else {
LAB_104cd4900:
    lVar3 = *(long *)(param_1 + _DAT_1127108e8);
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      uVar2 = 2;
      goto LAB_104cd4928;
    }
  }
  uVar2 = 3;
LAB_104cd4928:
  *(undefined8 *)(param_1 + _DAT_112710958) = uVar2;
  return;
}



/* Entry: 104cd4940; end: 104cd4ae7; -[SCLogInCredentialsEntryBusinessLogic viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd4940(ulong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar3 = PTR_PTR_1126af228;
  _objc_alloc();
  uVar8 = *(undefined8 *)(param_1 + (long)_DAT_112710940);
  uVar4 = param_1;
  func_0x00010bdd9ba0();
  uVar5 = param_1;
  func_0x00010be33f80();
  uVar1 = *(undefined1 *)(param_1 + (long)_DAT_1127108f4);
  uVar2 = *(undefined1 *)(param_1 + (long)_DAT_1127108f8);
  uVar9 = *(undefined8 *)(param_1 + (long)_DAT_1127108e8);
  uVar13 = *(undefined8 *)(param_1 + (long)_DAT_112710954);
  uVar10 = *(undefined8 *)(param_1 + (long)_DAT_11271095c);
  uVar15 = *(undefined8 *)(param_1 + (long)_DAT_1127108ec);
  uVar6 = *(undefined8 *)(param_1 + (long)_DAT_112710960);
  func_0x00010bf536a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc5b80(uVar15,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + (long)_DAT_1127108f0);
  uVar11 = *(undefined8 *)(param_1 + (long)_DAT_112710924);
  uVar14 = *(undefined8 *)(param_1 + (long)_DAT_11271091c);
  uVar7 = param_1;
  func_0x00010bdde280();
  func_0x00010be89200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0108e0(puVar3,param_2,uVar8,uVar4 & 0xffffffff,uVar5 & 0xffffffff,uVar1,uVar2,uVar9,
                      uVar13,uVar10,uVar15,uVar12,uVar11,uVar14,(char)uVar7);
  _objc_release(param_1);
  _objc_release(uVar15);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104cd4ae8; end: 104cd4b13; -[SCLogInCredentialsEntryBusinessLogic _checkShouldAllowRegistration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_104cd4ae8(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + _DAT_11271090c) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + _DAT_112710910);
  }
  else {
    bVar1 = 1;
  }
  return bVar1 & 1;
}



/* Entry: 104cd4b14; end: 104cd4b53; -[SCLogInCredentialsEntryBusinessLogic _registerButtonTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd4b14(long param_1)

{
  if (*(char *)(param_1 + _DAT_112710910) == '\x01') {
    func_0x000104ce4ae0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000104ce4ac8();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104cd4b54; end: 104cd4c0b; -[SCLogInCredentialsEntryBusinessLogic _updateCanLogInState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd4b54(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + _DAT_1127108f8) == '\x01') {
    puVar1 = PTR_PTR_1126aed98;
    func_0x00010c25db20(PTR_PTR_1126aed98,param_2,*(undefined8 *)(param_1 + _DAT_112710954));
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c08fa60();
    _objc_release(puVar1);
    if ((undefined *)0x3 < puVar2) {
LAB_104cd4bd0:
      lVar3 = *(long *)(param_1 + _DAT_1127108f0);
      func_0x00010c08fa60();
      if (lVar3 != 0) {
        uVar4 = 1;
        goto LAB_104cd4bf0;
      }
    }
  }
  else {
    lVar3 = *(long *)(param_1 + _DAT_1127108e8);
    func_0x00010c08fa60();
    if (lVar3 != 0) goto LAB_104cd4bd0;
  }
  uVar4 = 0;
LAB_104cd4bf0:
  *(undefined8 *)(param_1 + _DAT_11271096c) = uVar4;
  return;
}



/* Entry: 104cd4c0c; end: 104cd4d07; -[SCLogInCredentialsEntryBusinessLogic _observeApplicationLifecycleEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd4c0c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710904);
  func_0x00010c2a6420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104cd4d08; end: 104cd4d33;  */

void FUN_104cd4d08(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdccec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cd4d34; end: 104cd4daf; -[SCLogInCredentialsEntryBusinessLogic _cleanErrorMessageAfterAppReturnForegroundIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd4d34(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112710940;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
    _objc_release(uVar2);
    *(undefined1 *)(param_1 + _DAT_11271090c) = 0;
    func_0x00010bed4ce0(param_1);
    func_0x00010bf8e1a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104cd4db0; end: 104cd4f7f; -[SCLogInCredentialsEntryBusinessLogic _attemptLogInWithConfirmReactivation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd4db0(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  lVar1 = param_1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127108fc);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf6ca0(param_1);
  lVar4 = param_1;
  func_0x00010be23b40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a9c40(uVar2);
  _objc_release(lVar4);
  _objc_release(uVar2);
  func_0x00010be55820(param_1);
  lVar4 = (long)_DAT_1127108dc;
  if (*(long *)(param_1 + lVar4) == 0) {
    func_0x00010be54c20(param_1);
  }
  else {
    _objc_initWeak(auStack_58,param_1);
    lVar3 = param_1;
    func_0x00010c0e2ba0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010be23b40(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar3);
    _objc_copyWeak(auStack_68,auStack_58);
    uStack_60 = param_3;
    func_0x00010bf38180(uVar2);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_68);
    _objc_release(lVar3);
    _objc_release(lVar3);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 104cd4f80; end: 104cd502b;  */

void FUN_104cd4f80(long param_1,int param_2)

{
  long lVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(param_1 + 0x28);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_104cd502c;
    puStack_50 = &UNK_1108488f8;
    _objc_copyWeak(auStack_40,param_1 + 0x30);
    uStack_38 = *(undefined1 *)(param_1 + 0x38);
    uStack_48 = *(undefined8 *)(param_1 + 0x20);
    (**(code **)(lVar1 + 0x10))(lVar1,&puStack_68);
    _objc_destroyWeak(auStack_40);
  }
  return;
}



/* Entry: 104cd502c; end: 104cd5063;  */

void FUN_104cd502c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be54c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cd5064; end: 104cd5407; -[SCLogInCredentialsEntryBusinessLogic _logInWithConfirmReactivation:networkRequestId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd5064(undefined *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  puVar1 = param_1;
  func_0x00010be33f80();
  if (((ulong)puVar1 & 1) == 0) {
    *(undefined8 *)(param_1 + _DAT_11271096c) = 2;
    puVar1 = param_1;
    func_0x00010bf8e1a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(puVar1 + 0x10))();
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127108d8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b0920();
    _objc_release(uVar2);
    _objc_initWeak(auStack_68,param_1);
    puVar1 = param_1;
    func_0x00010c0e2ba0();
    _objc_retainAutoreleasedReturnValue();
    if (param_3 == 0) {
      puVar3 = PTR_PTR_1126af230;
      func_0x00010c2946a0(PTR_PTR_1126af230);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + _DAT_1127108d4);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be23b40(param_1);
      _objc_retainAutoreleasedReturnValue();
      puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_108 = 0xc2000000;
      pcStack_100 = FUN_104cd5620;
      puStack_f8 = &UNK_1108483d8;
      _objc_retain(puVar1);
      puStack_e8 = puVar1;
      _objc_copyWeak(auStack_e0,auStack_68);
      _objc_retain(param_4);
      uStack_f0 = param_4;
      _objc_retain(puVar1);
      _objc_copyWeak(auStack_118,auStack_68);
      _objc_retain(param_4);
      func_0x00010c0a87e0(uVar2);
      _objc_release(param_1);
      _objc_release(uVar2);
      _objc_release(param_4);
      _objc_destroyWeak(auStack_118);
      _objc_release(puVar1);
      _objc_release(uStack_f0);
      _objc_destroyWeak(auStack_e0);
      _objc_release(puStack_e8);
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + _DAT_1127108d4);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_104cd5408;
      puStack_88 = &UNK_1108483d8;
      _objc_retain(puVar1);
      puStack_78 = puVar1;
      _objc_copyWeak(auStack_70,auStack_68);
      _objc_retain(param_4);
      puStack_d8 = puVar3;
      uStack_d0 = 0xc2000000;
      pcStack_c8 = FUN_104cd5514;
      puStack_c0 = &UNK_110848408;
      uStack_80 = param_4;
      _objc_retain(puVar1);
      puStack_b0 = puVar1;
      _objc_copyWeak(auStack_a8,auStack_68);
      _objc_retain(param_4);
      uStack_b8 = param_4;
      func_0x00010c121020(uVar2);
      _objc_release(uVar2);
      _objc_release(uStack_b8);
      _objc_destroyWeak(auStack_a8);
      _objc_release(puStack_b0);
      _objc_release(uStack_80);
      _objc_destroyWeak(auStack_70);
      puVar3 = puStack_78;
    }
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 104cd5408; end: 104cd54df;  */

void FUN_104cd5408(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar2 = *(long *)(param_1 + 0x28);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104cd54e0;
  puStack_50 = &UNK_110848218;
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = param_2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  (**(code **)(lVar2 + 0x10))(lVar2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104cd54e0; end: 104cd5513;  */

void FUN_104cd54e0(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2bb20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cd5514; end: 104cd55eb;  */

void FUN_104cd5514(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar2 = *(long *)(param_1 + 0x28);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104cd55ec;
  puStack_50 = &UNK_110848218;
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = param_2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  (**(code **)(lVar2 + 0x10))(lVar2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104cd55ec; end: 104cd561f;  */

void FUN_104cd55ec(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2bb00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cd5620; end: 104cd56f7;  */

void FUN_104cd5620(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar2 = *(long *)(param_1 + 0x28);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104cd56f8;
  puStack_50 = &UNK_110848218;
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = param_2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  (**(code **)(lVar2 + 0x10))(lVar2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104cd56f8; end: 104cd572b;  */

void FUN_104cd56f8(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2bb20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cd572c; end: 104cd5803;  */

void FUN_104cd572c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar2 = *(long *)(param_1 + 0x28);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104cd5804;
  puStack_50 = &UNK_110848218;
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = param_2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  (**(code **)(lVar2 + 0x10))(lVar2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104cd5804; end: 104cd5837;  */

void FUN_104cd5804(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2bb00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cd5838; end: 104cd59b3; -[SCLogInCredentialsEntryBusinessLogic _handleLogInSuccess:networkRequestId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd5838(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar8 = *(undefined8 *)(param_1 + _DAT_1127108e0);
  uVar1 = *(undefined1 *)(param_1 + _DAT_1127108f8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c1b8160(uVar8,param_2,uVar1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127108fc);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bdf6ca0(param_1);
  lVar6 = param_1;
  func_0x00010be23b40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bfcfaa0(param_3);
  uVar7 = param_3;
  func_0x00010c119500(param_3);
  func_0x00010c0a9c00(uVar4,param_2,lVar5,lVar6,uVar8,uVar7,1,param_4);
  _objc_release(param_4);
  _objc_release(lVar6);
  _objc_release(uVar4);
  lVar5 = param_1 + _DAT_1127108d0;
  _objc_loadWeakRetained(lVar5);
  lVar6 = param_1;
  func_0x00010be23b40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + _DAT_1127108f0);
  uVar1 = *(undefined1 *)(param_1 + _DAT_112710950);
  uVar2 = *(undefined1 *)(param_1 + _DAT_1127108f4);
  uVar3 = *(undefined1 *)(param_1 + _DAT_112710928);
  func_0x00010bdf6ca0();
  func_0x00010bf5c200(lVar5,param_2,lVar6,uVar8,uVar1,uVar2,uVar3,param_3,param_1);
  _objc_release(param_3);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 104cd59b4; end: 104cd5d23; -[SCLogInCredentialsEntryBusinessLogic _handleLogInFailureWithError:networkRequestId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd59b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  *(undefined8 *)(param_1 + _DAT_11271096c) = 3;
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0b3f80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bd200();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x000106b78380(param_3);
  func_0x00010bed2640(param_1,param_2,uVar1);
  lVar7 = (long)_DAT_1127108fc;
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bdf6ca0();
  lVar5 = param_1;
  func_0x00010be23b40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bfcfaa0();
  uVar6 = param_3;
  func_0x00010c119500();
  func_0x00010c0a9c80(uVar2,param_2,lVar4,lVar5,uVar1,uVar3,uVar6,
                      *(undefined1 *)(param_1 + _DAT_1127108f4));
  _objc_release(lVar5);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bdf6ca0();
  lVar5 = param_1;
  func_0x00010be23b40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfcfaa0(param_3);
  uVar6 = param_3;
  func_0x00010c119500(param_3);
  _objc_release(param_3);
  func_0x00010c0a9c00(uVar3,param_2,lVar4,lVar5,uVar1,uVar6,0,param_4);
  _objc_release(param_4);
  _objc_release(lVar5);
  _objc_release(uVar3);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_release(param_1);
  return;
}



/* Entry: 104cd5d24; end: 104cd5ef7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd5d24(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710940);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710940) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar1);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271090c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104cd5ef8; end: 104cd5f33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd5ef8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710940);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710940) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104cd5f34; end: 104cd5fab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd5f34(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_2;
  _objc_retain();
  lVar2 = param_2;
  if (param_2 == 0) {
    func_0x000104ce4a68();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  lVar4 = (long)_DAT_112710940;
  _objc_retain(lVar2);
  uVar1 = *(undefined8 *)(lVar3 + lVar4);
  *(long *)(lVar3 + lVar4) = lVar2;
  _objc_release(uVar1);
  if (param_2 == 0) {
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104cd5fac; end: 104cd5fe7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd5fac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710940);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710940) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104cd5fe8; end: 104cd6333;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd5fe8(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710940);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710940) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar1);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271090c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104cd6334; end: 104cd636f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd6334(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710940);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710940) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104cd6370; end: 104cd63e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd6370(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710940);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710940) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar1);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271090c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104cd63e4; end: 104cd6463; -[SCLogInCredentialsEntryBusinessLogic _startPasskeyLoginWithTrigger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd63e4(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + (long)_DAT_112710938);
  (**(code **)(lVar1 + 0x10))();
  if (((int)lVar1 != 0) && (uVar2 = param_1, func_0x00010be33f80(), (uVar2 & 1) == 0)) {
    lVar1 = param_1 + (long)_DAT_1127108d0;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf5c180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}


