/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105351174; end: 1053513bf; -[SCNGOCodeVerificationViewModel initWithTitle:caption:resendCountdown:resendButtonTitle:enteredCode:errorMessage:errorAlertMessage:enabled:inProgress:resendImage:verifySuccessPrompt:isTroubleVerifyingButtonHidden:troubleVerifyingInfo:] */

undefined8 *
FUN_105351174(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
             undefined8 param_13,undefined1 param_14,undefined4 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_16);
  puStack_68 = PTR_PTR_1126e79d8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = (undefined1)param_10;
    *(undefined1 *)((long)puVar1 + 9) = param_10._1_1_;
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 10) = param_14;
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_16);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1053513c0; end: 1053513e3; -[SCNGOCodeVerificationViewModel copyWithZone:] */

undefined8 FUN_1053513c0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1053513e4; end: 1053514c7; -[SCNGOCodeVerificationViewModel hash] */

undefined8 * FUN_1053513e4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_90;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_90 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_88 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uStack_58 = (ulong)*(byte *)(param_1 + 8);
  uStack_50 = (ulong)*(byte *)(param_1 + 9);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 10);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_90,0xd);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_105351638:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105351644;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(char *)((long)puVar3 + 8) == param_3[8] && (*(char *)((long)puVar3 + 9) == param_3[9]))
        && (*(char *)((long)puVar3 + 10) == param_3[10])))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x28);
            if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x30);
              if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x38);
                if ((lVar5 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  lVar5 = *(long *)((long)puVar3 + 0x40);
                  if ((lVar5 == *(long *)(param_3 + 0x40)) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = *(long *)((long)puVar3 + 0x48);
                    if ((lVar5 == *(long *)(param_3 + 0x48)) ||
                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      lVar5 = *(long *)((long)puVar3 + 0x50);
                      if ((lVar5 == *(long *)(param_3 + 0x50)) ||
                         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        puVar6 = *(undefined1 **)((long)puVar3 + 0x58);
                        if (puVar6 != *(undefined1 **)(param_3 + 0x58)) {
                          func_0x00010c071ae0();
                          goto LAB_105351644;
                        }
                        goto LAB_105351638;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_105351644:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1053514c8; end: 10535165f; -[SCNGOCodeVerificationViewModel isEqual:] */

long FUN_1053514c8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105351638:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105351644;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
         (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
        (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x40);
                  if ((lVar3 == *(long *)(param_3 + 0x40)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x48);
                    if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x50);
                      if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x58);
                        if (lVar3 != *(long *)(param_3 + 0x58)) {
                          func_0x00010c071ae0();
                          goto LAB_105351644;
                        }
                        goto LAB_105351638;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_105351644:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105351660; end: 105351667; -[SCNGOCodeVerificationViewModel title] */

undefined8 FUN_105351660(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105351668; end: 10535166f; -[SCNGOCodeVerificationViewModel caption] */

undefined8 FUN_105351668(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105351670; end: 105351677; -[SCNGOCodeVerificationViewModel resendCountdown] */

undefined8 FUN_105351670(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105351678; end: 10535167f; -[SCNGOCodeVerificationViewModel resendButtonTitle] */

undefined8 FUN_105351678(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105351680; end: 105351687; -[SCNGOCodeVerificationViewModel enteredCode] */

undefined8 FUN_105351680(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105351688; end: 10535168f; -[SCNGOCodeVerificationViewModel errorMessage] */

undefined8 FUN_105351688(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105351690; end: 105351697; -[SCNGOCodeVerificationViewModel errorAlertMessage] */

undefined8 FUN_105351690(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105351698; end: 10535169f; -[SCNGOCodeVerificationViewModel enabled] */

undefined1 FUN_105351698(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1053516a0; end: 1053516a7; -[SCNGOCodeVerificationViewModel inProgress] */

undefined1 FUN_1053516a0(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 1053516a8; end: 1053516af; -[SCNGOCodeVerificationViewModel resendImage] */

undefined8 FUN_1053516a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1053516b0; end: 1053516b7; -[SCNGOCodeVerificationViewModel verifySuccessPrompt] */

undefined8 FUN_1053516b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1053516b8; end: 1053516bf; -[SCNGOCodeVerificationViewModel isTroubleVerifyingButtonHidden] */

undefined1 FUN_1053516b8(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 1053516c0; end: 1053516c7; -[SCNGOCodeVerificationViewModel troubleVerifyingInfo] */

undefined8 FUN_1053516c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1053516c8; end: 105351757; -[SCNGOCodeVerificationViewModel .cxx_destruct] */

void FUN_1053516c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105351758; end: 10535193f; -[SCAuthenticationFlowLoggerImpl initWithUserNotTrackedLogger:grapheneRegistry:authenticationSessionInfoProvider:lastLoginInfoRepository:loginSessionService:deviceInfoProvider:registrationFlowUUIDService:performerProvider:] */

undefined1 *
FUN_105351758(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126e79e0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    uVar2 = param_10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x48) = 0xffffffffffffffff;
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105351940; end: 1053519f7; -[SCAuthenticationFlowLoggerImpl logPageView:] */

void FUN_105351940(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1053519f8; end: 105351a2b;  */

void FUN_1053519f8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be56da0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105351a2c; end: 105351cc7; -[SCAuthenticationFlowLoggerImpl _logPageView:] */

void FUN_105351a2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126b7930;
  _objc_opt_new(PTR_PTR_1126b7930);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16c8e0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfd8b00();
  func_0x00010c1a63a0(puVar1,param_2,uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfc74a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c08c0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bdc1fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0c20(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfcb960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e9940(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c1a0f60(puVar1,param_2,*(undefined8 *)(param_1 + 0x48));
  func_0x00010c2168c0(puVar1,param_2,param_3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b29e0();
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126af378;
  func_0x00010bf10c00(PTR_PTR_1126af378);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010be21500(param_1,param_2,*(undefined8 *)(param_1 + 0x48));
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110dd32b8,lVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(lVar5);
  lVar5 = param_1;
  func_0x00010be21500(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar6;
  func_0x00010c2ac460(puVar6,param_2,&PTR____CFConstantStringClassReference_110dd32d8,lVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(lVar5);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b4300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105351cc8; end: 105351cfb; -[SCAuthenticationFlowLoggerImpl _getPageName:] */

void FUN_105351cc8(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != -1) {
    func_0x00010bc9107c(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105351cfc; end: 105351d73; -[SCAuthenticationFlowLoggerImpl .cxx_destruct] */

void FUN_105351cfc(long param_1)

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



/* Entry: 105351d74; end: 105351e57; -[SCAuthenticationFlowLoggerServiceProvider provide] */

void FUN_105351d74(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b7938;
  _objc_alloc(PTR_PTR_1126b7938);
  func_0x00010bff5940();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105351e58; end: 105351e97;  */

void FUN_105351e58(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be20460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105351e98; end: 1053520a3; -[SCAuthenticationFlowLoggerServiceProvider _getLoggerImpl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105351e98(long param_1,undefined8 param_2)

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
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  puVar1 = PTR_PTR_1126b7940;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112721b64;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c292f40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112721b68;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112721b6c;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010bf10d00();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = (long)_DAT_112721b70;
  lVar8 = param_1 + lVar16;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c089460();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + lVar16;
  _objc_loadWeakRetained();
  lVar10 = lVar16;
  func_0x00010c0b42c0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_112721b74;
  _objc_loadWeakRetained(lVar11);
  lVar12 = lVar11;
  func_0x00010bf70800();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_112721b78;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010c127ba0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112721b7c;
  _objc_loadWeakRetained();
  lVar15 = param_1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05c8e0(puVar1,param_2,lVar3,lVar5,lVar7,lVar9,lVar10,lVar12,lVar14,lVar15);
  _objc_release(lVar15);
  _objc_release(param_1);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar16);
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



/* Entry: 1053520a4; end: 105352123; -[SCAuthenticationFlowLoggerServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053520a4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112721b7c);
  _objc_destroyWeak(param_1 + _DAT_112721b68);
  _objc_destroyWeak(param_1 + _DAT_112721b64);
  _objc_destroyWeak(param_1 + _DAT_112721b74);
  _objc_destroyWeak(param_1 + _DAT_112721b78);
  _objc_destroyWeak(param_1 + _DAT_112721b70);
  _objc_destroyWeak(param_1 + _DAT_112721b6c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112721b80);
  return;
}



/* Entry: 105352124; end: 105352197; -[SCAuthenticationOrchestrationServices initWithOrchestrator:] */

undefined1 * FUN_105352124(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e79e8;
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



/* Entry: 105352198; end: 10535219f; -[SCAuthenticationOrchestrationServices orchestrator] */

undefined8 FUN_105352198(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1053521a0; end: 1053521ab; -[SCAuthenticationOrchestrationServices .cxx_destruct] */

void FUN_1053521a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053521ac; end: 1053521ff; -[SCDeepLinkTIVNonceServiceProvider provide] */

void FUN_1053521ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7948;
  _objc_alloc(PTR_PTR_1126b7948);
  puVar2 = PTR_PTR_1126ae568;
  _objc_opt_new(PTR_PTR_1126ae568);
  func_0x00010c0500c0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105352200; end: 10535220f; -[SCDeepLinkTIVNonceServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105352200(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112721b88);
  return;
}



/* Entry: 105352210; end: 10535240f; -[SCOdlvEventLogger initWithStateTransitionMomentLogger:userNotTrackedLogger:authenticationFlowLogger:grapheneRegistry:lastLoginInfoRepository:loginSessionService:deviceInfoProvider:authenticationSessionInfoProvider:] */

undefined1 *
FUN_105352210(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126e79f0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    uVar2 = param_7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfd8b00();
    *(char *)((long)puVar1 + 0x30) = (char)uVar3;
    _objc_release(uVar2);
    uVar2 = param_9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bdc1fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    _objc_release(uVar2);
    uVar2 = param_10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105352410; end: 10535243f; -[SCOdlvEventLogger logOdlvLandingPageView] */

void FUN_105352410(undefined8 param_1,undefined8 param_2)

{
  func_0x00010be56de0(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010be53c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logFsnJanusRolloutGrapheneWithE_1125728b8,
             &PTR____CFConstantStringClassReference_110dd3318);
  return;
}



/* Entry: 105352440; end: 1053524df; -[SCOdlvEventLogger logOdlvRequestOtp:] */

void FUN_105352440(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  if ((param_3 == 0) || (param_3 == 1)) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b0920();
    _objc_release(uVar1);
  }
  puVar2 = PTR_PTR_1126b7950;
  _objc_opt_new(PTR_PTR_1126b7950);
  lVar3 = param_1;
  func_0x00010becc840(param_1,param_2,param_3);
  func_0x00010c1d6b80(puVar2,param_2,lVar3);
  func_0x00010be50980(param_1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1053524e0; end: 10535255b; -[SCOdlvEventLogger logOdlvRequestOtpSuccess:] */

void FUN_1053524e0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((param_3 == 0) || (param_3 == 1)) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b0900();
    _objc_release(uVar1);
  }
  lVar2 = param_1;
  func_0x00010becc840(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be59610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logSuccess_otpType__112573f20,1,lVar2);
  return;
}



/* Entry: 10535255c; end: 105352587; -[SCOdlvEventLogger logOdlvRequestOtpFailure:] */

void FUN_10535255c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010becc840();
                    /* WARNING: Could not recover jumptable at 0x00010be52ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logFailure_otpType__112572598,1,uVar1);
  return;
}



/* Entry: 105352588; end: 1053525b7; -[SCOdlvEventLogger logOdlvVerifyingPageView] */

void FUN_105352588(undefined8 param_1,undefined8 param_2)

{
  func_0x00010be56de0(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010be53c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logFsnJanusRolloutGrapheneWithE_1125728b8,
             &PTR____CFConstantStringClassReference_110dd3338);
  return;
}



/* Entry: 1053525b8; end: 105352617; -[SCOdlvEventLogger logOdlvUnableToVerify:] */

void FUN_1053525b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b7958;
  _objc_opt_new(PTR_PTR_1126b7958);
  uVar2 = param_1;
  func_0x00010becc840(param_1,param_2,param_3);
  func_0x00010c1d6b80(puVar1,param_2,uVar2);
  func_0x00010be50980(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105352618; end: 105352653; -[SCOdlvEventLogger logOdlvLogin] */

void FUN_105352618(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105352654; end: 1053526c7; -[SCOdlvEventLogger logOdlvLoginSuccess:] */

void FUN_105352654(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
  _objc_release(uVar1);
  func_0x00010becc840(param_1);
  func_0x00010be59600(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be53c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logFsnJanusRolloutGrapheneWithE_1125728b8,
             &PTR____CFConstantStringClassReference_110dd3358);
  return;
}



/* Entry: 1053526c8; end: 1053526f3; -[SCOdlvEventLogger logOdlvLoginFailure:] */

void FUN_1053526c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010becc840();
                    /* WARNING: Could not recover jumptable at 0x00010be52ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logFailure_otpType__112572598,0,uVar1);
  return;
}



/* Entry: 1053526f4; end: 105352707; -[SCOdlvEventLogger _toOneTimePasscodeTypeFromLoginOdlvOtpType:] */

ulong FUN_1053526f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  uVar1 = (ulong)(param_3 != 1);
  if (param_3 == 2) {
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}



/* Entry: 105352708; end: 105352797; -[SCOdlvEventLogger _logPageview:] */

void FUN_105352708(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b7960;
  _objc_opt_new(PTR_PTR_1126b7960);
  func_0x00010c1d8800();
  func_0x00010be50980(param_1,param_2,puVar1);
  func_0x00010be54800(param_1,param_2,0x3e);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be1e480(param_1,param_2,param_3);
  func_0x00010c0abca0(uVar2,param_2,param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105352798; end: 1053527f7; -[SCOdlvEventLogger _logSuccess:otpType:] */

void FUN_105352798(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7968;
  _objc_opt_new(PTR_PTR_1126b7968);
  func_0x00010c1d6b80();
  func_0x00010c161fe0(puVar1,param_2,param_3);
  func_0x00010be50980(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053527f8; end: 105352857; -[SCOdlvEventLogger _logFailure:otpType:] */

void FUN_1053527f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7970;
  _objc_opt_new(PTR_PTR_1126b7970);
  func_0x00010c1d6b80();
  func_0x00010c161fe0(puVar1,param_2,param_3);
  func_0x00010be50980(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105352858; end: 105352977; -[SCOdlvEventLogger _logGrapheneWithPage:] */

void FUN_105352858(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126af378;
  func_0x00010c0b4320(PTR_PTR_1126af378);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      (*(byte *)(param_1 + 0x30) ^ 0xff) & 1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110daedb8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  func_0x00010bc9107c(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110daedd8,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0b4300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105352978; end: 105352a93; -[SCOdlvEventLogger _logFsnJanusRolloutGrapheneWithEvent:] */

void FUN_105352978(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126af378;
  _objc_retain(param_3);
  func_0x00010bfbb4a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfbb4c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110daee58,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0b4300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105352a94; end: 105352bab; -[SCOdlvEventLogger _logBlizzardEvent:] */

void FUN_105352a94(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010c1a63a0(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfc74a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c08c0(param_3);
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfc3a20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17ca20(param_3);
  _objc_release(uVar3);
  _objc_release(uVar1);
  func_0x00010c17ca80(param_3);
  uVar2 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_setLongClientId__11264dd30);
  if ((uVar2 & 1) != 0) {
    func_0x00010c0f8f20(param_3);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b29e0();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105352bac; end: 105352bc7; -[SCOdlvEventLogger _getCurrentPageFrom:] */

undefined8 FUN_105352bac(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0x3f;
  if (param_3 != 0) {
    uVar2 = 0xffffffffffffffff;
  }
  uVar1 = 0x40;
  if (param_3 != 1) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 105352bc8; end: 105352c3f; -[SCOdlvEventLogger .cxx_destruct] */

void FUN_105352bc8(long param_1)

{
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



/* Entry: 105352c40; end: 105352cd3; -[SCOdlvLoggerServicesProvider provide] */

void FUN_105352c40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105352cd4;
  puStack_30 = &UNK_11087d328;
  puVar1 = PTR_PTR_1126ae720;
  uStack_28 = param_1;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b7980;
  _objc_alloc(PTR_PTR_1126b7980);
  func_0x00010c030f80();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105352cd4; end: 105352f6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105352cd4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  puVar1 = PTR_PTR_1126b7978;
  _objc_alloc();
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = *(long *)(param_1 + 0x20) + (long)_DAT_112721bb4;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar12;
  func_0x00010c0b43e0();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = *(long *)(param_1 + 0x20) + (long)_DAT_112721bb8;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar13;
  func_0x00010c292f40();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = *(long *)(param_1 + 0x20) + (long)_DAT_112721bcc;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar14;
  func_0x00010bf10be0();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = *(long *)(param_1 + 0x20) + (long)_DAT_112721bbc;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar15;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  FUN_105352f70();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c089460();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  FUN_105352f70();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c0b42c0();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = *(long *)(param_1 + 0x20) + (long)_DAT_112721bc4;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar16;
  func_0x00010bf70800();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = *(long *)(param_1 + 0x20) + (long)_DAT_112721bc8;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar17;
  func_0x00010bf10d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04c140(puVar1,param_2,lVar2,lVar3,lVar4,lVar5,uVar7,uVar9,lVar10,lVar11);
  _objc_release(lVar11);
  _objc_release(lVar17);
  _objc_release(lVar10);
  _objc_release(lVar16);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar15);
  _objc_release(lVar4);
  _objc_release(lVar14);
  _objc_release(lVar3);
  _objc_release(lVar13);
  _objc_release(lVar2);
  _objc_release(lVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105352f70; end: 105352f93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105352f70(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112721bc0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105352f94; end: 105353013; -[SCOdlvLoggerServicesProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105352f94(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112721bcc);
  _objc_destroyWeak(param_1 + _DAT_112721bc8);
  _objc_destroyWeak(param_1 + _DAT_112721bc4);
  _objc_destroyWeak(param_1 + _DAT_112721bc0);
  _objc_destroyWeak(param_1 + _DAT_112721bbc);
  _objc_destroyWeak(param_1 + _DAT_112721bb8);
  _objc_destroyWeak(param_1 + _DAT_112721bb4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112721bb0);
  return;
}



/* Entry: 105353014; end: 10535303b; -[SCRedirectToRegInfoProviderImpl username] */

void FUN_105353014(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10535303c; end: 105353063; -[SCRedirectToRegInfoProviderImpl email] */

void FUN_10535303c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105353064; end: 10535308b; -[SCRedirectToRegInfoProviderImpl phoneNumber] */

void FUN_105353064(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10535308c; end: 1053531df; -[SCRedirectToRegInfoProviderImpl updateWithLogInIdentifier:] */

void FUN_10535308c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  func_0x00010bf3be80(param_1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105353144;
  puStack_30 = &UNK_1108450c8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x105353178;
  puStack_58 = &UNK_1108450c8;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x1053531ac;
  puStack_80 = &UNK_11084b9a0;
  uStack_78 = param_1;
  uStack_50 = param_1;
  uStack_28 = param_1;
  func_0x00010c0c1360(param_3,param_2,&puStack_48,&puStack_70,&puStack_98);
  _objc_release(param_3);
  return;
}



/* Entry: 1053531e0; end: 10535321b; -[SCRedirectToRegInfoProviderImpl clearRedirectToRegInfo] */

void FUN_1053531e0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10535321c; end: 105353257; -[SCRedirectToRegInfoProviderImpl .cxx_destruct] */

void FUN_10535321c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105353258; end: 1053532d3; -[SCRedirectToRegInfoServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105353258(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_11087d378);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b7990;
  _objc_alloc(PTR_PTR_1126b7990);
  func_0x00010c03d820();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_112721bdc),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053532d4; end: 1053532ef;  */

void FUN_1053532d4(void)

{
  _objc_opt_new(PTR_PTR_1126b7988);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053532f0; end: 10535332b; -[SCRedirectToRegInfoServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053532f0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112721bdc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112721be0);
  return;
}



/* Entry: 10535332c; end: 1053533cf; -[SCRegistrationCdnCofDownloader initWithNetworkService:taskManagementServices:] */

undefined1 *
FUN_10535332c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e79f8;
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



/* Entry: 1053533d0; end: 1053535ef; -[SCRegistrationCdnCofDownloader beginDownloading] */

void FUN_1053533d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x18) = 1;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0f98e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010bfe4d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf225e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_initWeak(auStack_48,param_1);
    uVar6 = *(undefined8 *)(param_1 + 8);
    func_0x00010bfe4c00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c11de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c25f600(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar1);
    _objc_release(uVar3);
  }
  return;
}



/* Entry: 1053535f0; end: 1053535f3;  */

void FUN_1053535f0(void)

{
  return;
}



/* Entry: 1053535f4; end: 105353643;  */

void FUN_1053535f4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  if (param_3 != 0) {
    return;
  }
  _objc_retain(param_5);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be70040();
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105353644; end: 10535364b; -[SCRegistrationCdnCofDownloader isCdnCofAvailable] */

undefined1 FUN_105353644(long param_1)

{
  return *(undefined1 *)(param_1 + 0x19);
}



/* Entry: 10535364c; end: 10535371b; -[SCRegistrationCdnCofDownloader _parseCdnCofData:] */

void FUN_10535364c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b7848;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c008360();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010bf46260();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf1f3c0();
  *(char *)(param_1 + 0x19) = (char)puVar5;
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 10535371c; end: 10535374b; -[SCRegistrationCdnCofDownloader .cxx_destruct] */

void FUN_10535371c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10535374c; end: 10535384b; -[SCRegistrationLoggerServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10535374c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b7998;
  _objc_alloc(PTR_PTR_1126b7998);
  func_0x00010c03dba0();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_112721bf4));
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10535384c; end: 10535388b;  */

void FUN_10535384c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf2440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10535388c; end: 105353bc3; -[SCRegistrationLoggerServicesEntryPoint _createRegistrationUserNotTrackedLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10535388c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
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
  
  puVar1 = PTR_PTR_1126b79a0;
  _objc_alloc();
  if (param_1 == 0) {
    lVar22 = 0;
    lVar24 = 0;
  }
  else {
    lVar22 = param_1 + _DAT_112721c24;
    _objc_loadWeakRetained(lVar22);
    lVar24 = param_1 + _DAT_112721c28;
    _objc_loadWeakRetained(lVar24);
  }
  func_0x00010c02f500(puVar1,param_2,lVar22,lVar24);
  _objc_release(lVar24);
  _objc_release(lVar22);
  puVar2 = PTR_PTR_1126b79a8;
  _objc_alloc();
  lVar22 = param_1 + _DAT_112721bf8;
  _objc_loadWeakRetained();
  lVar3 = lVar22;
  func_0x00010c292f40();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + _DAT_112721bfc;
  _objc_loadWeakRetained();
  lVar4 = lVar24;
  func_0x00010bf10be0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112721c00;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_112721c04;
  _objc_loadWeakRetained(lVar7);
  lVar8 = param_1 + _DAT_112721c08;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010bf70800();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_112721c0c;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = (long)_DAT_112721c10;
  lVar12 = param_1 + lVar23;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010c127ba0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_112721c14;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bf10d00();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_112721c18;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010c089460();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + lVar23;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010c127be0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + lVar23;
  _objc_loadWeakRetained();
  lVar20 = lVar23;
  func_0x00010c127d60();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112721c1c;
  _objc_loadWeakRetained();
  lVar21 = param_1;
  func_0x00010c0d2660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05c800(puVar2,param_2,lVar3,lVar4,lVar6,lVar7,lVar9,lVar11,lVar13,lVar15,lVar17,
                      lVar19,lVar20,puVar1,lVar21);
  _objc_release(lVar21);
  _objc_release(param_1);
  _objc_release(lVar20);
  _objc_release(lVar23);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar24);
  _objc_release(lVar3);
  _objc_release(lVar22);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105353bc4; end: 105353c8f; -[SCRegistrationLoggerServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105353bc4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112721bf4,0);
  _objc_destroyWeak(param_1 + _DAT_112721c1c);
  _objc_destroyWeak(param_1 + _DAT_112721c28);
  _objc_destroyWeak(param_1 + _DAT_112721c24);
  _objc_destroyWeak(param_1 + _DAT_112721c04);
  _objc_destroyWeak(param_1 + _DAT_112721c00);
  _objc_destroyWeak(param_1 + _DAT_112721bfc);
  _objc_destroyWeak(param_1 + _DAT_112721c14);
  _objc_destroyWeak(param_1 + _DAT_112721c08);
  _objc_destroyWeak(param_1 + _DAT_112721bf8);
  _objc_destroyWeak(param_1 + _DAT_112721c10);
  _objc_destroyWeak(param_1 + _DAT_112721c18);
  _objc_destroyWeak(param_1 + _DAT_112721c0c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112721c20);
  return;
}



/* Entry: 105353c90; end: 105353f87; -[SCRegistrationUserNotTrackedLogger initWithUserNotTrackedLogger:authenticationFlowLogger:circumstanceEngine:installServices:deviceInfoProvider:grapheneRegistry:registrationFlowUUIDService:authenticationSessionInfoProvider:loginInfoRepository:registrationLastPageService:registrationSourceService:cdnCofDownloader:countryProvider:] */

undefined8 *
FUN_105353c90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1126e7a00;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    func_0x00010bf17fa0(puVar1[0xc]);
  }
  _objc_release(param_15);
  _objc_release(param_14);
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



/* Entry: 105353f88; end: 105354047; -[SCRegistrationUserNotTrackedLogger logRegistrationFlowEvent:pageType:unverifiedUserId:] */

void FUN_105353f88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b79b0;
  _objc_retain(param_5);
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126af388;
  func_0x00010bf22380(PTR_PTR_1126af388);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ada20(puVar1,param_2,puVar2);
  func_0x00010c197620(puVar1,param_2,param_3);
  func_0x00010c1d7e80(puVar1,param_2,param_4);
  func_0x00010bee3160(param_1,param_2,puVar1,param_5);
  _objc_release(param_5);
  func_0x00010c0ada00(param_1,param_2,puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105354048; end: 105354053; -[SCRegistrationUserNotTrackedLogger buildInstallSessionMetadata] */

void FUN_105354048(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf22390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126af388,PTR_s_buildInstallSessionMetadata_1125a6288);
  return;
}



/* Entry: 105354054; end: 1053541cb; -[SCRegistrationUserNotTrackedLogger logPageView:unverifiedUserId:] */

void FUN_105354054(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b79b8;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c1d7e80();
  lVar2 = param_1;
  func_0x00010beda4a0(param_1,param_2,param_3);
  func_0x00010c1d81a0(puVar1,param_2,lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c072f80(uVar3);
  func_0x00010c1b10c0(puVar1,param_2,uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf1f440(uVar3,param_2,&PTR____CFConstantStringClassReference_110dd33b8,0,0);
  func_0x00010c1a7060(puVar1,param_2,uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c06e3a0(uVar3);
  func_0x00010c1a7020(puVar1,param_2,uVar3);
  func_0x00010bee3160(param_1,param_2,puVar1,param_4);
  _objc_release(param_4);
  func_0x00010c0ada00(param_1,param_2,puVar1);
  puVar4 = PTR_PTR_1126af378;
  func_0x00010c0b4320(PTR_PTR_1126af378);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bc9107c(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110daedd8,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(param_3);
  func_0x00010c0a7ae0(param_1,param_2,puVar5);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abca0();
  _objc_release(uVar3);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053541cc; end: 10535424f; -[SCRegistrationUserNotTrackedLogger logRegistrationNetworkRequestWithEndpoint:requestId:] */

void FUN_1053541cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b79c0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c196300();
  _objc_release(param_3);
  func_0x00010c17ce20(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c0ada00(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105354250; end: 105354323; -[SCRegistrationUserNotTrackedLogger logRegistrationNetworkResponseWithEndpoint:requestId:success:grpcStatusCode:protoStatusCode:latencyMS:] */

void FUN_105354250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b79c8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c196300();
  _objc_release(param_3);
  func_0x00010c17ce20(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c20f8a0(puVar1,param_2,param_5);
  func_0x00010c1a4d40(puVar1,param_2,param_6);
  func_0x00010c1e5240(puVar1,param_2,param_7);
  func_0x00010c1b92e0(puVar1,param_2,param_8);
  func_0x00010c0ada00(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105354324; end: 105354417; -[SCRegistrationUserNotTrackedLogger logResponseSuggestUsername:success:isAvailable:suggestions:] */

void FUN_105354324(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b79d0;
  _objc_opt_new(PTR_PTR_1126b79d0);
  func_0x00010c1b92e0();
  func_0x00010c20f8a0(puVar1,param_2,param_4);
  func_0x00010c1af620(puVar1,param_2,param_5);
  uVar3 = param_6;
  func_0x00010bf529e0(param_6);
  func_0x00010c1a6fc0(puVar1,param_2,uVar3 != 0);
  uVar3 = param_6;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010537cb4c();
  _objc_release(uVar3);
  func_0x00010c19d800(puVar1,param_2,uVar2);
  if ((uVar2 & 1) == 0) {
    uVar3 = param_6;
    FUN_10537cbc0(param_6);
  }
  else {
    uVar3 = 1;
  }
  func_0x00010c1a71e0(puVar1,param_2,uVar3);
  func_0x00010c0ada00(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 105354418; end: 105354533; -[SCRegistrationUserNotTrackedLogger logRegistrationUserExitPromptWithContext:page:] */

void FUN_105354418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b79d8;
  _objc_opt_new(PTR_PTR_1126b79d8);
  func_0x00010c182d40();
  func_0x00010c1d7e80(puVar1,param_2,param_4);
  func_0x00010c0ada00(param_1,param_2,puVar1);
  puVar2 = PTR_PTR_1126af378;
  func_0x00010c127aa0(PTR_PTR_1126af378);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bc9107c(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110daedd8,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_4);
  func_0x00010b9eff28(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dae878,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_3);
  func_0x00010c0a7ae0(param_1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105354534; end: 105354593; -[SCRegistrationUserNotTrackedLogger logRegistrationUserInitialInputWithPage:field:] */

void FUN_105354534(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b79e0;
  _objc_opt_new(PTR_PTR_1126b79e0);
  func_0x00010c19b800();
  func_0x00010c1d7e80(puVar1,param_2,param_3);
  func_0x00010c0ada00(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105354594; end: 1053547bb; -[SCRegistrationUserNotTrackedLogger logRegistrationEvent:] */

void FUN_105354594(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_setRegistrationSessionId__112658078);
  if ((uVar2 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfcb960();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8f20(param_3);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  uVar2 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_setLongClientId__11264dd30);
  if ((uVar2 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bdc1fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8f20(param_3);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  uVar2 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_setClientAuthenticationId__11263ccc0);
  if ((uVar2 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8f20(param_3);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd8b00();
  func_0x00010bea44e0(param_1);
  _objc_release(uVar4);
  func_0x00010bf06880(PTR_PTR_1126afa00);
  func_0x00010bea1e00(param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c127d40();
  func_0x00010bea6b60(param_1);
  _objc_release(uVar4);
  puVar1 = PTR_PTR_1126afa00;
  _objc_retain(param_3);
  func_0x00010bf068a0(puVar1);
  _objc_release(param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 1053547bc; end: 10535480b;  */

void FUN_1053547bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bea8380(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b29e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10535480c; end: 10535497b; -[SCRegistrationUserNotTrackedLogger logGrapheneWithMetric:] */

void FUN_10535480c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be62ec0(param_1);
  uVar2 = param_3;
  func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110daedb8,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c083f00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2ac460(uVar2,param_2,&PTR____CFConstantStringClassReference_110dae898,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c127d40();
  func_0x00010bb09798();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar5 = uVar4;
  func_0x00010c2ac460(uVar4,param_2,&PTR____CFConstantStringClassReference_110dd33d8,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0b4300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 10535497c; end: 1053549d7; -[SCRegistrationUserNotTrackedLogger _newDeviceDimensionValue] */

undefined ** FUN_10535497c(long param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x48);
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



/* Entry: 1053549d8; end: 105354a4b; -[SCRegistrationUserNotTrackedLogger _updateLastPage:] */

undefined8 FUN_1053549d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0898c0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b8460();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105354a4c; end: 105354a93; -[SCRegistrationUserNotTrackedLogger getLongClientId] */

void FUN_105354a4c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bdc1fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105354a94; end: 105354b5f; -[SCRegistrationUserNotTrackedLogger _setHasLoggedInBeforeOnEvent:withValue:] */

void FUN_105354a94(undefined8 param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 105354b60; end: 105354c2b; -[SCRegistrationUserNotTrackedLogger _setAppAppearanceOnEvent:withValue:] */

void FUN_105354b60(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_setAppAppearance__112637be8);
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



/* Entry: 105354c2c; end: 105354cf7; -[SCRegistrationUserNotTrackedLogger _setRegistrationSourceOnEvent:withValue:] */

void FUN_105354c2c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_setRegistrationSource__112658088);
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



/* Entry: 105354cf8; end: 105354dc3; -[SCRegistrationUserNotTrackedLogger _setSystemAppearanceOnEvent:withValue:] */

void FUN_105354cf8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_setSystemAppearance__112661e20);
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



/* Entry: 105354dc4; end: 105354e17; -[SCRegistrationUserNotTrackedLogger _updateUserSignatureForVerificationEvent:unverifiedUserId:] */

void FUN_105354dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010c21e4c0(param_3,param_2,param_4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105354e18; end: 105354ecb; -[SCRegistrationUserNotTrackedLogger .cxx_destruct] */

void FUN_105354e18(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 105354ecc; end: 105354f3f; -[SCBitmojiUnauthenticatedFetchServices initWithContentFetcher:] */

undefined1 * FUN_105354ecc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7a08;
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



/* Entry: 105354f40; end: 105354f47; -[SCBitmojiUnauthenticatedFetchServices contentFetcher] */

undefined8 FUN_105354f40(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105354f48; end: 105354f77; -[SCBitmojiUnauthenticatedFetchServices setContentFetcher:] */

void FUN_105354f48(long param_1,undefined8 param_2,undefined8 param_3)

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


