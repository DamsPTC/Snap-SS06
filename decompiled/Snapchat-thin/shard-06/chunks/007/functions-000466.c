/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104ce70a8; end: 104ce70f3; +[SCPasskeyLoginResult error] */

void FUN_104ce70a8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af370;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ce70f4; end: 104ce715f; +[SCPasskeyLoginResult lockedAccountAppealWithAppealableLockData:] */

void FUN_104ce70f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af370;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ce7160; end: 104ce71f7; +[SCPasskeyLoginResult reactivationRequiredWithStatus:userId:] */

void FUN_104ce7160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126af370;
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



/* Entry: 104ce71f8; end: 104ce728f; +[SCPasskeyLoginResult redirectToPasswordLoginWithUsername:password:] */

void FUN_104ce71f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126af370;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ce7290; end: 104ce72f3; +[SCPasskeyLoginResult successWithBootstrapData:] */

void FUN_104ce7290(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af370;
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



/* Entry: 104ce72f4; end: 104ce7317; -[SCPasskeyLoginResult copyWithZone:] */

undefined8 FUN_104ce72f4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104ce7318; end: 104ce73d7; -[SCPasskeyLoginResult hash] */

void FUN_104ce7318(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_70 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_98 = PTR_PTR_1126e3c38;
  puStack_a0 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_a0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ce73d8; end: 104ce741b; -[SCPasskeyLoginResult internalInit] */

void FUN_104ce73d8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e3c38;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ce741c; end: 104ce7563; -[SCPasskeyLoginResult isEqual:] */

long FUN_104ce741c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104ce753c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104ce7548;
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
                    if (lVar3 != *(long *)(param_3 + 0x48)) {
                      func_0x00010c071ae0();
                      goto LAB_104ce7548;
                    }
                    goto LAB_104ce753c;
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
LAB_104ce7548:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104ce7564; end: 104ce772b; -[SCPasskeyLoginResult matchSuccess:reactivationRequired:lockedAccountAppeal:canceled:deduped:error:redirectToPasswordLogin:cosChallenged:] */

void FUN_104ce7564(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,long param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 < 4) {
    if (lVar3 < 2) {
      if (lVar3 != 0) {
        if ((lVar3 != 1) || (param_4 == 0)) goto LAB_104ce76d4;
        uVar1 = *(undefined8 *)(param_1 + 0x18);
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        pcVar4 = *(code **)(param_4 + 0x10);
        lVar3 = param_4;
        goto LAB_104ce76d0;
      }
      if (param_3 == 0) goto LAB_104ce76d4;
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      pcVar4 = *(code **)(param_3 + 0x10);
      lVar3 = param_3;
    }
    else {
      if (lVar3 != 2) {
        if ((lVar3 != 3) || (param_6 == 0)) goto LAB_104ce76d4;
        pcVar4 = *(code **)(param_6 + 0x10);
        lVar3 = param_6;
        goto LAB_104ce76a0;
      }
      if (param_5 == 0) goto LAB_104ce76d4;
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      pcVar4 = *(code **)(param_5 + 0x10);
      lVar3 = param_5;
    }
    (*pcVar4)(lVar3,uVar1);
  }
  else {
    if (lVar3 < 6) {
      if (lVar3 == 4) {
        if (param_7 == 0) goto LAB_104ce76d4;
        pcVar4 = *(code **)(param_7 + 0x10);
        lVar3 = param_7;
      }
      else {
        if ((lVar3 != 5) || (param_8 == 0)) goto LAB_104ce76d4;
        pcVar4 = *(code **)(param_8 + 0x10);
        lVar3 = param_8;
      }
LAB_104ce76a0:
      (*pcVar4)(lVar3);
      goto LAB_104ce76d4;
    }
    if (lVar3 == 6) {
      if (param_9 == 0) goto LAB_104ce76d4;
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      uVar2 = *(undefined8 *)(param_1 + 0x38);
      pcVar4 = *(code **)(param_9 + 0x10);
      lVar3 = param_9;
    }
    else {
      if ((lVar3 != 7) || (param_10 == 0)) goto LAB_104ce76d4;
      uVar1 = *(undefined8 *)(param_1 + 0x40);
      uVar2 = *(undefined8 *)(param_1 + 0x48);
      pcVar4 = *(code **)(param_10 + 0x10);
      lVar3 = param_10;
    }
LAB_104ce76d0:
    (*pcVar4)(lVar3,uVar1,uVar2);
  }
LAB_104ce76d4:
  _objc_release(param_10);
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



/* Entry: 104ce772c; end: 104ce77a3; -[SCPasskeyLoginResult .cxx_destruct] */

void FUN_104ce772c(long param_1)

{
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



/* Entry: 104ce77a4; end: 104ce79df; -[SCDefaultLogInLogger initWithUserNotTrackedLogger:authenticationFlowLogger:grapheneRegistry:lastLoginInfoRepository:loginSessionService:authenticationSessionInfoProvider:deviceInfoProvider:deepLinkInfoService:authFlowTreatmentInfoService:] */

undefined8 *
FUN_104ce77a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
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
  puStack_68 = PTR_PTR_1126e3c40;
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
    uVar2 = param_9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bdc1fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[10];
    puVar1[10] = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
  }
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



/* Entry: 104ce79e0; end: 104ce7aa7; -[SCDefaultLogInLogger logLoginStart] */

void FUN_104ce79e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3b880();
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfd8b00();
  *(char *)(param_1 + 0x48) = (char)uVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfc74a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  _objc_release(uVar4);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126af378;
  func_0x00010c0b43c0(PTR_PTR_1126af378);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be55880(param_1,param_2,puVar3,0xffffffffffffffff,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 104ce7aa8; end: 104ce7cbb; -[SCDefaultLogInLogger logLoginWithSource:usernameOrEmail:userId:isPasswordSecured:] */

void FUN_104ce7aa8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126af380;
  _objc_opt_new(PTR_PTR_1126af380);
  if (param_4 != 0) {
    func_0x00010c21e620(puVar1,param_2,param_4);
  }
  if (param_5 != 0) {
    func_0x00010c21e4c0(puVar1,param_2,param_5);
  }
  puVar2 = PTR_PTR_1126af388;
  func_0x00010bf22380(PTR_PTR_1126af388);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af390;
  func_0x00010bfbb8a0(PTR_PTR_1126af390);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a95a0(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  lVar4 = param_1;
  func_0x00010be5ac80(param_1,param_2,param_3,param_4);
  func_0x00010c1ada20(puVar1,param_2,puVar2);
  func_0x00010c1c0a20(puVar1,param_2,param_3);
  func_0x00010c1c0920(puVar1,param_2,lVar4);
  func_0x00010c1a63a0(puVar1,param_2,*(undefined1 *)(param_1 + 0x48));
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfc3a20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17ca20(puVar1,param_2,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf10740();
  func_0x00010c16c6e0(puVar1,param_2,uVar6);
  _objc_release(uVar5);
  func_0x00010bdc6820(param_1,param_2,puVar1);
  func_0x00010be50980(param_1,param_2,puVar1);
  puVar3 = PTR_PTR_1126af378;
  func_0x00010c0b3ee0(PTR_PTR_1126af378);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be55880(param_1,param_2,puVar3,param_3,param_6);
  _objc_release(puVar3);
  lVar4 = param_1;
  func_0x00010bec8c60(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be53c60(param_1,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104ce7cbc; end: 104ce7e83; -[SCDefaultLogInLogger logLoginAttemptWithSource:usernameOrEmail:isPasswordSecured:networkRequestId:] */

void FUN_104ce7cbc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0a20();
  _objc_release(uVar5);
  func_0x00010bde00a0(param_1,param_2,param_3);
  puVar1 = PTR_PTR_1126af398;
  _objc_opt_new(PTR_PTR_1126af398);
  lVar2 = param_1;
  func_0x00010be5ac80(param_1,param_2,param_3,param_4);
  _objc_release(param_4);
  func_0x00010c1c0a20(puVar1,param_2,param_3);
  func_0x00010c1c0920(puVar1,param_2,lVar2);
  func_0x00010c1a63a0(puVar1,param_2,*(undefined1 *)(param_1 + 0x48));
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bfc3a20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17ca20(puVar1,param_2,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar3);
  func_0x00010c17ce20(puVar1,param_2,param_6);
  _objc_release(param_6);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf10740();
  func_0x00010c16c6e0(puVar1,param_2,uVar5);
  _objc_release(uVar3);
  func_0x00010be50980(param_1,param_2,puVar1);
  puVar4 = PTR_PTR_1126af378;
  func_0x00010c0b3e40(PTR_PTR_1126af378);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be55880(param_1,param_2,puVar4,param_3,param_5);
  _objc_release(puVar4);
  lVar2 = param_1;
  func_0x00010be90f80(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be53c60(param_1,param_2,lVar2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ce7e84; end: 104ce8013; -[SCDefaultLogInLogger logLoginFailureWithSource:usernameOrEmail:errorType:grpcStatusCode:protoStatusCode:isPasswordSecured:] */

void FUN_104ce7e84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126af3a0;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126af388;
  func_0x00010bf22380(PTR_PTR_1126af388);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be5ac80(param_1,param_2,param_3,param_4);
  _objc_release(param_4);
  func_0x00010c1ada20(puVar1,param_2,puVar2);
  func_0x00010c1c0a20(puVar1,param_2,param_3);
  func_0x00010c1c0920(puVar1,param_2,lVar3);
  func_0x00010c197380(puVar1,param_2,param_5);
  func_0x00010c1a4d40(puVar1,param_2,param_6);
  func_0x00010c1e5240(puVar1,param_2,param_7);
  func_0x00010c1a63a0(puVar1,param_2,*(undefined1 *)(param_1 + 0x48));
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfc3a20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17ca20(puVar1,param_2,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf10740();
  func_0x00010c16c6e0(puVar1,param_2,uVar5);
  _objc_release(uVar4);
  func_0x00010be50980(param_1,param_2,puVar1);
  func_0x00010be55840(param_1,param_2,param_3,param_5,param_8);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ce8014; end: 104ce8093; -[SCDefaultLogInLogger logLoginPageView] */

void FUN_104ce8014(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126af3a8;
  _objc_opt_new(PTR_PTR_1126af3a8);
  func_0x00010c1e99a0();
  func_0x00010c1a63a0(puVar1,param_2,*(undefined1 *)(param_1 + 0x48));
  func_0x00010be50980(param_1,param_2,puVar1);
  func_0x00010be54800(param_1,param_2,0x3b);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abca0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ce8094; end: 104ce810f; -[SCDefaultLogInLogger logTogglePasswordVisibility] */

void FUN_104ce8094(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126af378;
  func_0x00010c0b4140(PTR_PTR_1126af378);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b4300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ce8110; end: 104ce827b; -[SCDefaultLogInLogger logLoginAttemptResponseWithSource:usernameOrEmail:grpcStatusCode:protoStatusCode:success:networkRequestId:] */

void FUN_104ce8110(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126af3b0;
  _objc_retain(param_8);
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  lVar2 = param_1;
  func_0x00010be5ac80(param_1,param_2,param_3,param_4);
  _objc_release(param_4);
  func_0x00010c1a63a0(puVar1,param_2,*(undefined1 *)(param_1 + 0x48));
  func_0x00010c1c0a20(puVar1,param_2,param_3);
  func_0x00010c1c0920(puVar1,param_2,lVar2);
  func_0x00010c20f8a0(puVar1,param_2,param_7);
  func_0x00010c1a4d40(puVar1,param_2,param_5);
  func_0x00010c1e5240(puVar1,param_2,param_6);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfc3a20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17ca20(puVar1,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010c17ce20(puVar1,param_2,param_8);
  _objc_release(param_8);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf10740();
  func_0x00010c16c6e0(puVar1,param_2,uVar4);
  _objc_release(uVar3);
  func_0x00010be50980(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ce827c; end: 104ce82f7; -[SCDefaultLogInLogger logToggleUnifiedAccountIdentifierInput] */

void FUN_104ce827c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126af378;
  func_0x00010c0b4460(PTR_PTR_1126af378);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b4300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ce82f8; end: 104ce83cb; -[SCDefaultLogInLogger logLoginAttemptUnifiedAccountIdentifierTogglesWithSource:numToggles:] */

void FUN_104ce82f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126af378;
  func_0x00010c0b3e60(PTR_PTR_1126af378);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb00cf0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0b4300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104ce83cc; end: 104ce842b; -[SCDefaultLogInLogger logRedirectToRegPromptWithAction:fieldType:] */

void FUN_104ce83cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af3b8;
  _objc_opt_new(PTR_PTR_1126af3b8);
  func_0x00010c161620();
  func_0x00010c1ad6a0(puVar1,param_2,param_4);
  func_0x00010be50980(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ce842c; end: 104ce84c3; -[SCDefaultLogInLogger logRequestLoginCodeAttemptWithContext:deliveryMechanism:networkRequestId:] */

void FUN_104ce842c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af3c0;
  _objc_retain(param_5);
  _objc_opt_new(puVar1);
  func_0x00010c17ce20();
  _objc_release(param_5);
  func_0x00010c182d40(puVar1,param_2,param_3);
  func_0x00010c18ba60(puVar1,param_2,param_4);
  func_0x00010c1a63a0(puVar1,param_2,*(undefined1 *)(param_1 + 0x48));
  func_0x00010be50980(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ce84c4; end: 104ce85ab; -[SCDefaultLogInLogger logRequestLoginCodeResponseWithContext:deliveryMechanism:networkRequestId:grpcStatusCode:protoStatusCode:latencyMs:success:] */

void FUN_104ce84c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af3c8;
  _objc_retain(param_5);
  _objc_opt_new(puVar1);
  func_0x00010c17ce20();
  _objc_release(param_5);
  func_0x00010c182d40(puVar1,param_2,param_3);
  func_0x00010c18ba60(puVar1,param_2,param_4);
  func_0x00010c1a4d40(puVar1,param_2,param_6);
  func_0x00010c1b92e0(puVar1,param_2,param_8);
  func_0x00010c1e5240(puVar1,param_2,param_7);
  func_0x00010c20f8a0(puVar1,param_2,param_9);
  func_0x00010c1a63a0(puVar1,param_2,*(undefined1 *)(param_1 + 0x48));
  func_0x00010be50980(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ce85ac; end: 104ce8707; -[SCDefaultLogInLogger _logLoginGrapheneWithMetric:source:isPasswordSecured:] */

void FUN_104ce85ac(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_4;
  func_0x00010bb00cf0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110dae8d8,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2ac460(uVar2,param_2,&PTR____CFConstantStringClassReference_110daedf8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_4 == 1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c2ac460(uVar4,param_2,&PTR____CFConstantStringClassReference_110daee18,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010c0b4300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104ce8708; end: 104ce8823; -[SCDefaultLogInLogger _logFsnJanusRolloutGrapheneWithEvent:] */

void FUN_104ce8708(long param_1,undefined8 param_2,undefined8 param_3)

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
  uVar3 = *(undefined8 *)(param_1 + 0x18);
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



/* Entry: 104ce8824; end: 104ce888b; -[SCDefaultLogInLogger _requestEventWithLoginSource:] */

void FUN_104ce8824(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bb00cf0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110daee78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ce888c; end: 104ce88f3; -[SCDefaultLogInLogger _successEventWithLoginSource:] */

void FUN_104ce888c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bb00cf0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110daee98);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ce88f4; end: 104ce8a13; -[SCDefaultLogInLogger _logGrapheneWithPage:] */

void FUN_104ce88f4(long param_1,undefined8 param_2,undefined8 param_3)

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
                      (*(byte *)(param_1 + 0x48) ^ 0xff) & 1);
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
  uVar4 = *(undefined8 *)(param_1 + 0x18);
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



/* Entry: 104ce8a14; end: 104ce8b1f; -[SCDefaultLogInLogger _logBlizzardEvent:] */

void FUN_104ce8a14(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_setLongClientId__11264dd30);
  if ((uVar1 & 1) != 0) {
    func_0x00010c0f8f20(param_3);
  }
  uVar1 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_setLoginFlowSessionId__11264dc58);
  if ((uVar1 & 1) != 0) {
    func_0x00010c0f8f20(param_3);
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
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b29e0();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ce8b20; end: 104ce8c33; -[SCDefaultLogInLogger _addDeepLinkPropertiesIfAny:] */

void FUN_104ce8b20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfde320();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010c206c40(param_3,param_2,8);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf681e0();
    func_0x00010c18aa00(param_3,param_2,uVar2);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf68060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18a920(param_3,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf68120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e94a0(param_3,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ce8c34; end: 104ce8def; -[SCDefaultLogInLogger _logLoginFailureGrapheneWithSource:errorType:isPasswordSecured:] */

void FUN_104ce8c34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126af378;
  func_0x00010c0b3fa0(PTR_PTR_1126af378);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      (*(byte *)(param_1 + 0x48) ^ 0xff) & 1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110daedb8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  func_0x00010b9b3a04(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110daeeb8,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_4);
  func_0x00010bb00cf0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110daedf8,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
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
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 104ce8df0; end: 104ce8e9b; -[SCDefaultLogInLogger _loginIdentifier:usernameOrEmail:] */

ulong FUN_104ce8df0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  
  _objc_retain(param_4);
  uVar1 = 3;
  switch(param_3) {
  case 0:
  case 3:
  case 4:
    uVar1 = param_4;
    func_0x00010bf4bb00(param_4,param_2,&PTR____CFConstantStringClassReference_110dae4f8);
    uVar1 = uVar1 & 0xffffffff;
    break;
  case 1:
    break;
  case 2:
  case 6:
    uVar1 = 2;
    break;
  case 5:
    uVar1 = 1;
    break;
  case 7:
    uVar1 = 4;
    break;
  case 8:
    uVar1 = 5;
    break;
  case 9:
    uVar1 = 6;
    break;
  case 10:
    uVar1 = 7;
    break;
  default:
    uVar1 = 0xffffffffffffffff;
  }
  _objc_release(param_4);
  return uVar1;
}



/* Entry: 104ce8e9c; end: 104ce8edb; -[SCDefaultLogInLogger _clearClientAttemptIdIfNeededWithSource:] */

void FUN_104ce8e9c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  
  if (param_3 < 3) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3ae20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 104ce8edc; end: 104ce8f6b; -[SCDefaultLogInLogger .cxx_destruct] */

void FUN_104ce8edc(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 104ce8f6c; end: 104ce906b; -[SCLogInLoggerServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ce8f6c(long param_1)

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
  puVar2 = PTR_PTR_1126af3d0;
  _objc_alloc(PTR_PTR_1126af3d0);
  func_0x00010c0279c0();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_112710c2c));
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104ce906c; end: 104ce90ab;  */

void FUN_104ce906c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdefba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104ce90ac; end: 104ce92eb; -[SCLogInLoggerServicesEntryPoint _createLoginLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ce90ac(long param_1,undefined8 param_2)

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
  long lVar17;
  long lVar18;
  
  puVar1 = PTR_PTR_1126af3d8;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112710c30;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c292f40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112710c34;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf10be0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112710c38;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = (long)_DAT_112710c3c;
  lVar8 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c089460();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar10 = lVar18;
  func_0x00010c0b42c0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_112710c40;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010bf10d00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_112710c44;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010bf70800();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_112710c48;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010bf680a0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112710c4c;
  _objc_loadWeakRetained();
  lVar17 = param_1;
  func_0x00010bf10760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05c840(puVar1,param_2,lVar3,lVar5,lVar7,lVar9,lVar10,lVar12,lVar14,lVar16,lVar17);
  _objc_release(lVar17);
  _objc_release(param_1);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar18);
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



/* Entry: 104ce92ec; end: 104ce9387; -[SCLogInLoggerServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ce92ec(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112710c4c);
  _objc_storeStrong(param_1 + _DAT_112710c2c,0);
  _objc_destroyWeak(param_1 + _DAT_112710c40);
  _objc_destroyWeak(param_1 + _DAT_112710c34);
  _objc_destroyWeak(param_1 + _DAT_112710c48);
  _objc_destroyWeak(param_1 + _DAT_112710c44);
  _objc_destroyWeak(param_1 + _DAT_112710c3c);
  _objc_destroyWeak(param_1 + _DAT_112710c30);
  _objc_destroyWeak(param_1 + _DAT_112710c38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112710c50);
  return;
}



/* Entry: 104ce9388; end: 104ce9743; -[SCTwoFAEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ce9388(long param_1,undefined8 param_2)

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
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  
  puVar1 = PTR_PTR_1126af3e0;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112710c54;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c292f40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112710c58;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf10be0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112710c5c;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = (long)_DAT_112710c60;
  lVar20 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar8 = lVar20;
  func_0x00010c089460();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + lVar19;
  _objc_loadWeakRetained(lVar19);
  lVar9 = lVar19;
  func_0x00010c0b42c0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_112710c64;
  _objc_loadWeakRetained(lVar10);
  lVar11 = lVar10;
  func_0x00010bf70800();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_112710c68;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010bf10d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05c860(puVar1,param_2,lVar3,lVar5,lVar7,lVar8,lVar9,lVar11,lVar13);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar19);
  _objc_release(lVar8);
  _objc_release(lVar20);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar14 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_110849180);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126af3f0;
  _objc_alloc(PTR_PTR_1126af3f0);
  lVar19 = (long)_DAT_112710c6c;
  lVar2 = param_1 + lVar19;
  _objc_loadWeakRetained(lVar2);
  lVar10 = lVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112710c70;
  _objc_loadWeakRetained(lVar4);
  lVar6 = param_1 + _DAT_112710c74;
  _objc_loadWeakRetained(lVar6);
  lVar12 = lVar6;
  func_0x00010c0b43e0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + _DAT_112710c78;
  _objc_loadWeakRetained(lVar20);
  lVar3 = lVar20;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c033c80(puVar15,param_2,lVar10,lVar4,lVar12,puVar1,puVar14,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar20);
  _objc_release(lVar12);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar10);
  _objc_release(lVar2);
  puVar16 = PTR_PTR_1126aeb48;
  _objc_alloc(PTR_PTR_1126aeb48);
  func_0x00010c0404c0();
  puVar17 = PTR_PTR_1126af3f8;
  _objc_alloc();
  lVar2 = param_1 + lVar19;
  _objc_loadWeakRetained(lVar2);
  lVar4 = lVar2;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + lVar19;
  _objc_loadWeakRetained(lVar19);
  lVar6 = lVar19;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c004360(puVar17,param_2,lVar4,puVar16,lVar6);
  lVar20 = (long)_DAT_112710c7c;
  uVar18 = *(undefined8 *)(param_1 + lVar20);
  *(undefined **)(param_1 + lVar20) = puVar17;
  _objc_release(uVar18);
  _objc_release(lVar6);
  _objc_release(lVar19);
  _objc_release(lVar4);
  _objc_release(lVar2);
  func_0x00010bf192c0(*(undefined8 *)(param_1 + lVar20));
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ce9744; end: 104ce975f;  */

void FUN_104ce9744(void)

{
  _objc_opt_new(PTR_PTR_1126af3e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ce9760; end: 104ce9807; -[SCTwoFAEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ce9760(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112710c78);
  _objc_destroyWeak(param_1 + _DAT_112710c58);
  _objc_destroyWeak(param_1 + _DAT_112710c68);
  _objc_destroyWeak(param_1 + _DAT_112710c64);
  _objc_destroyWeak(param_1 + _DAT_112710c60);
  _objc_destroyWeak(param_1 + _DAT_112710c5c);
  _objc_destroyWeak(param_1 + _DAT_112710c54);
  _objc_destroyWeak(param_1 + _DAT_112710c70);
  _objc_destroyWeak(param_1 + _DAT_112710c74);
  _objc_destroyWeak(param_1 + _DAT_112710c6c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112710c7c,0);
  return;
}



/* Entry: 104ce9808; end: 104ce9a53; -[SCTwoFALogger initWithUserNotTrackedLogger:authenticationFlowLogger:grapheneRegistry:lastLoginInfoRepository:loginSessionService:deviceInfoProvider:authenticationSessionInfoProvider:] */

undefined1 *
FUN_104ce9808(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

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
  puStack_68 = PTR_PTR_1126e3c48;
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
    uVar2 = param_7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfc74a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bdc1fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfd8b00();
    *(char *)((long)puVar1 + 0x28) = (char)uVar3;
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfc3a20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104ce9a54; end: 104ce9af3; -[SCTwoFALogger logLoginTwoFactorPageview:] */

void FUN_104ce9a54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126af400;
  _objc_opt_new(PTR_PTR_1126af400);
  func_0x00010c182d40();
  func_0x00010be50980(param_1,param_2,puVar1);
  func_0x00010be54800(param_1,param_2,0x3d);
  func_0x00010be53c60(param_1,param_2,&PTR____CFConstantStringClassReference_110daeed8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
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



/* Entry: 104ce9af4; end: 104ce9b53; -[SCTwoFALogger logLoginTwoFactorSuccess:] */

void FUN_104ce9af4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af408;
  _objc_opt_new(PTR_PTR_1126af408);
  func_0x00010c182d40();
  func_0x00010be50980(param_1,param_2,puVar1);
  func_0x00010be53c60(param_1,param_2,&PTR____CFConstantStringClassReference_110daeef8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ce9b54; end: 104ce9ba3; -[SCTwoFALogger logLoginTwoFactorFailure:] */

void FUN_104ce9b54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af410;
  _objc_opt_new(PTR_PTR_1126af410);
  func_0x00010c182d40();
  func_0x00010be50980(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ce9ba4; end: 104ce9c53; -[SCTwoFALogger _logBlizzardEvent:] */

void FUN_104ce9ba4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c1c08c0(param_3);
  func_0x00010c1a63a0(param_3);
  func_0x00010c17ca20(param_3);
  func_0x00010c17ca80(param_3);
  uVar1 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_setLongClientId__11264dd30);
  if ((uVar1 & 1) != 0) {
    func_0x00010c0f8f20(param_3);
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b29e0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ce9c54; end: 104ce9d73; -[SCTwoFALogger _logGrapheneWithPage:] */

void FUN_104ce9c54(long param_1,undefined8 param_2,undefined8 param_3)

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
                      (*(byte *)(param_1 + 0x28) ^ 0xff) & 1);
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
  uVar4 = *(undefined8 *)(param_1 + 0x18);
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



/* Entry: 104ce9d74; end: 104ce9e8f; -[SCTwoFALogger _logFsnJanusRolloutGrapheneWithEvent:] */

void FUN_104ce9d74(long param_1,undefined8 param_2,undefined8 param_3)

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
  uVar3 = *(undefined8 *)(param_1 + 0x20);
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
  uVar3 = *(undefined8 *)(param_1 + 0x18);
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



/* Entry: 104ce9e90; end: 104ce9eab; -[SCTwoFALogger _getCurrentPageFrom:] */

undefined8 FUN_104ce9e90(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0x41;
  if (param_3 != 1) {
    uVar2 = 0xffffffffffffffff;
  }
  uVar1 = 0x42;
  if (param_3 != 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 104ce9eac; end: 104ce9f2f; -[SCTwoFALogger .cxx_destruct] */

void FUN_104ce9eac(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104ce9f30; end: 104cea167; -[SCCredentials2FAOTPVerificationBusinessLogic initWithDelegate:logInService:usernameOrEmail:smsEnabled:phoneNumber:twoFAPreAuthToken:unauthenticatedTwoFAService:verificationCodeLength:loginStateTransitionLogger:twoFALogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104ce9f30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_70 = PTR_PTR_1126e3c50;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = auStack_68;
    _objc_loadWeakRetained(puVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112710ca8,puVar2);
    _objc_release(puVar2);
    lVar4 = (long)_DAT_112710cac;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112710cb0;
    _objc_retain(param_9);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112710cb4) = param_6;
    lVar4 = (long)_DAT_112710cb8;
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112710cbc;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112710cc0;
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112710cc4) = 1;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112710cc8) = param_10;
    lVar4 = (long)_DAT_112710ccc;
    _objc_retain(param_11);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_11;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112710cd0;
    _objc_retain(param_12);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_12;
    _objc_release(uVar3);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_68);
  return puVar1;
}



/* Entry: 104cea168; end: 104cea1bb; -[SCCredentials2FAOTPVerificationBusinessLogic begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cea168(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e3c50;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_begin_1125a3840);
  func_0x00010c0a9d20(*(undefined8 *)(param_1 + _DAT_112710cd0));
  return;
}



/* Entry: 104cea1bc; end: 104cea29b; -[SCCredentials2FAOTPVerificationBusinessLogic viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cea1bc(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar3 = PTR_PTR_1126af418;
  _objc_alloc(PTR_PTR_1126af418);
  lVar4 = param_1;
  func_0x00010bea0280(param_1);
  lVar5 = param_1;
  func_0x00010bea0260(param_1);
  uVar1 = *(undefined1 *)(param_1 + _DAT_112710cd4);
  lVar6 = param_1;
  func_0x00010bde87a0(param_1);
  uVar2 = *(undefined1 *)(param_1 + _DAT_112710cc4);
  lVar7 = param_1;
  func_0x00010bea02a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c044340(puVar3,param_2,lVar4,lVar5,uVar1,lVar6,uVar2,lVar7,
                      *(undefined8 *)(param_1 + _DAT_112710cd8));
  _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104cea29c; end: 104cea2f7; -[SCCredentials2FAOTPVerificationBusinessLogic _continueButtonEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_104cea29c(long param_1)

{
  ulong uVar1;
  byte bVar2;
  
  uVar1 = *(ulong *)(param_1 + _DAT_112710cdc);
  func_0x00010c08fa60();
  if (uVar1 < *(ulong *)(param_1 + _DAT_112710cc8)) {
    bVar2 = 0;
  }
  else {
    bVar2 = *(byte *)(param_1 + _DAT_112710cd4) ^ 1;
  }
  return bVar2 & 1;
}



/* Entry: 104cea2f8; end: 104cea3bb; -[SCCredentials2FAOTPVerificationBusinessLogic handleAction:] */

void FUN_104cea2f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
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
  pcStack_28 = FUN_104cea3bc;
  puStack_20 = &UNK_110842e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104cea3f4;
  puStack_48 = &UNK_110842e18;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104cea3fc;
  puStack_70 = &UNK_110842e18;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_104cea44c;
  puStack_98 = &UNK_1108450c8;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_104cea4e4;
  puStack_c0 = &UNK_110842e18;
  uStack_b8 = param_1;
  uStack_90 = param_1;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bdba0(param_3,param_2,&puStack_38,&puStack_60,&puStack_88,&puStack_b0,&puStack_d8);
  return;
}



/* Entry: 104cea3bc; end: 104cea3f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cea3bc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112710ca8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf5c120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104cea3f4; end: 104cea3fb;  */

void FUN_104cea3f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be90bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__requestCode_112581c88);
  return;
}



/* Entry: 104cea3fc; end: 104cea44b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cea3fc(long param_1)

{
  long lVar1;
  
  *(byte *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710cc4) =
       *(byte *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710cc4) ^ 1;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104cea44c; end: 104cea4e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cea44c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710cdc);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710cdc) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710cd8);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710cd8) = 0;
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



/* Entry: 104cea4e4; end: 104cea4f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cea4e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be5acf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(long *)(param_1 + 0x20),PTR_s__loginWithCode__1125744d8,
             *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710cdc));
  return;
}



/* Entry: 104cea4f8; end: 104cea527; -[SCCredentials2FAOTPVerificationBusinessLogic _sendSmsInsteadHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_104cea4f8(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + _DAT_112710cb4) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + _DAT_112710ce0) ^ 1;
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 104cea528; end: 104cea53f; -[SCCredentials2FAOTPVerificationBusinessLogic _sendSmsInsteadEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_104cea528(long param_1)

{
  return (*(byte *)(param_1 + _DAT_112710ce0) ^ 0xff) & 1;
}



/* Entry: 104cea540; end: 104cea57b; -[SCCredentials2FAOTPVerificationBusinessLogic _sendSmsInsteadTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cea540(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_112710ce0) & 1) == 0) {
    func_0x000104cf112c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000104cf1144();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104cea57c; end: 104cea623; -[SCCredentials2FAOTPVerificationBusinessLogic _handleLogInSuccess:recoveryCodeUsed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cea57c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710ccc);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
  _objc_release(uVar1);
  func_0x00010c0a9d40(*(undefined8 *)(param_1 + _DAT_112710cd0),param_2,1);
  param_1 = param_1 + _DAT_112710ca8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf5c100();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cea624; end: 104cea84b; -[SCCredentials2FAOTPVerificationBusinessLogic _handleLogInFailureWithError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cea624(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + _DAT_112710cd4) = 0;
  func_0x00010c0b3f80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bd200();
  _objc_release(param_3);
  lVar1 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_release(lVar1);
  func_0x00010c0a9d00(*(undefined8 *)(param_1 + _DAT_112710cd0),param_2,1);
  return;
}



/* Entry: 104cea84c; end: 104cea8ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cea84c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710cd8);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710cd8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104cea900; end: 104cea977;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cea900(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_2;
  _objc_retain();
  lVar2 = param_2;
  if (param_2 == 0) {
    FUN_104cf10e4();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  lVar4 = (long)_DAT_112710cd8;
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



/* Entry: 104cea978; end: 104ceabcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cea978(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710cd8);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710cd8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ceabd0; end: 104cead93; -[SCCredentials2FAOTPVerificationBusinessLogic _loginWithCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ceabd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + _DAT_112710cd4) = 1;
  lVar1 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0e2ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710cac);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_104cead94;
  puStack_80 = &UNK_1108491a0;
  _objc_retain(lVar1);
  lStack_78 = lVar1;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(lVar1);
  _objc_copyWeak(auStack_a0,auStack_68);
  func_0x00010bf43700(uVar2);
  _objc_destroyWeak(auStack_a0);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_70);
  _objc_release(lStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 104cead94; end: 104ceae63;  */

void FUN_104cead94(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 uStack_48;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104ceae64;
  puStack_60 = &UNK_1108488f8;
  _objc_copyWeak(auStack_50,param_1 + 0x28);
  _objc_retain(param_2);
  uStack_58 = param_2;
  uStack_48 = param_3;
  (**(code **)(lVar1 + 0x10))(lVar1,&puStack_78);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_2);
  return;
}



/* Entry: 104ceae64; end: 104ceae9b;  */

void FUN_104ceae64(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2bb40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ceae9c; end: 104ceaf5b;  */

void FUN_104ceae9c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104ceaf5c;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  uStack_40 = param_2;
  (**(code **)(lVar1 + 0x10))(lVar1,&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104ceaf5c; end: 104ceaf8f;  */

void FUN_104ceaf5c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2bac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ceaf90; end: 104ceb0ef; -[SCCredentials2FAOTPVerificationBusinessLogic _requestCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ceaf90(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  if (*(char *)(param_1 + _DAT_112710cb4) == '\x01') {
    *(undefined1 *)(param_1 + _DAT_112710ce0) = 1;
    lVar1 = param_1;
    func_0x00010bf8e1a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))();
    _objc_release(lVar1);
    _objc_initWeak(auStack_58,param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112710cb0);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_104ceb0f0;
    puStack_68 = &UNK_1108434b0;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_copyWeak(auStack_88,auStack_58);
    func_0x00010c137f00(uVar2);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  return;
}



/* Entry: 104ceb0f0; end: 104ceb15b;  */

void FUN_104ceb0f0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bde1a20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ceb15c; end: 104ceb1fb; -[SCCredentials2FAOTPVerificationBusinessLogic _codeRequested] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ceb15c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  *(undefined1 *)(param_1 + _DAT_112710ce0) = 0;
  lVar1 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126af420;
  _objc_alloc(PTR_PTR_1126af420);
  func_0x00010c05f6a0();
  param_1 = param_1 + _DAT_112710ca8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c236dc0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104ceb1fc; end: 104ceb26b; -[SCCredentials2FAOTPVerificationBusinessLogic _failedToRequestCodeWithErrorMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ceb1fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710cd8);
  *(undefined8 *)(param_1 + _DAT_112710cd8) = param_3;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + _DAT_112710ce0) = 0;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ceb26c; end: 104ceb327; -[SCCredentials2FAOTPVerificationBusinessLogic .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ceb26c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112710cd0,0);
  _objc_storeStrong(param_1 + _DAT_112710ccc,0);
  _objc_storeStrong(param_1 + _DAT_112710cdc,0);
  _objc_storeStrong(param_1 + _DAT_112710cd8,0);
  _objc_storeStrong(param_1 + _DAT_112710cc0,0);
  _objc_storeStrong(param_1 + _DAT_112710cbc,0);
  _objc_storeStrong(param_1 + _DAT_112710cb8,0);
  _objc_storeStrong(param_1 + _DAT_112710cb0,0);
  _objc_storeStrong(param_1 + _DAT_112710cac,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112710ca8);
  return;
}



/* Entry: 104ceb328; end: 104ceb40f; -[SCCredentials2FAOTPVerificationViewController initWithScreen:currentPageTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104ceb328(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  puStack_48 = PTR_PTR_1126e3c58;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112710ce4;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112710ce8;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126af160;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112710cec);
    *(undefined **)((long)puVar1 + (long)_DAT_112710cec) = puVar3;
    _objc_release(uVar2);
    func_0x00010c189400(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104ceb410; end: 104ceb417; -[SCCredentials2FAOTPVerificationViewController pageViewName] */

undefined8 FUN_104ceb410(void)

{
  return 0x14c;
}



/* Entry: 104ceb418; end: 104ceb41f; -[SCCredentials2FAOTPVerificationViewController prefersStatusBarHidden] */

undefined8 FUN_104ceb418(void)

{
  return 1;
}



/* Entry: 104ceb420; end: 104ceb47f; -[SCCredentials2FAOTPVerificationViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ceb420(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e3c58;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710ce8);
  func_0x00010c0f2220(param_1);
  func_0x00010c24fc40(uVar1);
  return;
}



/* Entry: 104ceb480; end: 104ceb52f; -[SCCredentials2FAOTPVerificationViewController _startRenderingViewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ceb480(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710ce4);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c250380(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104ceb530; end: 104ceb577;  */

void FUN_104ceb530(long param_1,undefined8 param_2)

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



/* Entry: 104ceb578; end: 104ceb6e7; -[SCCredentials2FAOTPVerificationViewController _update:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ceb578(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112710cf0;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c15c9a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fc3a0(uVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c15c960(param_3);
  func_0x00010c1fc3c0(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c15c980(param_3);
  func_0x00010c1fc380(uVar2);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  uVar2 = param_3;
  func_0x00010bf98d60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c197180(uVar1);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  uVar2 = param_3;
  func_0x00010bf98d60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  func_0x00010c197160(uVar1);
  _objc_release(uVar2);
  lVar3 = (long)_DAT_112710cf4;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bfd7e80(param_3);
  func_0x00010c162d00(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bf4fa60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4fb00(param_3);
  func_0x00010c21e900(uVar2);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  uVar2 = param_3;
  func_0x00010c129380(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c1e9cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_setRememberDevice__112658158,uVar2);
  return;
}



/* Entry: 104ceb6e8; end: 104ceb80f; -[SCCredentials2FAOTPVerificationViewController getAppropriateButtonWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_104ceb6e8(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                    long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar7 = param_3;
  _objc_release(puVar1);
  lVar6 = (long)_DAT_112710cf4;
  uVar2 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010bf4fa60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010bf4fa60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar8 = param_4;
  func_0x00010c23d5a0(uVar2);
  uVar4 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010bf4fa60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2712a0();
  uVar5 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010bf4fa60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2712a0();
  dVar8 = dVar7 + param_4 + dVar8;
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  dVar7 = 225.0;
  if ((225.0 <= dVar8) && (dVar7 = dVar8, param_3 + -40.0 < dVar8)) {
    dVar7 = param_3 + -40.0;
  }
  return dVar7;
}



/* Entry: 104ceb810; end: 104ceb8a3; -[SCCredentials2FAOTPVerificationViewController viewDidLoad] */

void FUN_104ceb810(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e3c58;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c098f40(PTR__OBJC_CLASS___UIColor_1126aea70);
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



/* Entry: 104ceb8a4; end: 104ceb8cf; -[SCCredentials2FAOTPVerificationViewController _setupUI] */

void FUN_104ceb8a4(undefined8 param_1)

{
  func_0x00010beaadc0();
  func_0x00010beaa500(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bec1590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startRenderingViewModels_11258df08);
  return;
}



/* Entry: 104ceb8d0; end: 104ceb94f; -[SCCredentials2FAOTPVerificationViewController _setup2FAUI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ceb8d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126af428;
  _objc_alloc();
  func_0x00010bff7260();
  lVar4 = (long)_DAT_112710cf0;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x000104cf1114();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c080(uVar3,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104ceb950; end: 104ceba27; -[SCCredentials2FAOTPVerificationViewController _setupBaseView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ceb950(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126af168;
  _objc_alloc();
  func_0x00010c04ed60();
  lVar4 = (long)_DAT_112710cf4;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf4fa60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf13860(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 104ceba28; end: 104ceba73; -[SCCredentials2FAOTPVerificationViewController _continueButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ceba28(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710ce4);
  puVar1 = PTR_PTR_1126af430;
  func_0x00010c25f020(PTR_PTR_1126af430);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ceba74; end: 104cebabf; -[SCCredentials2FAOTPVerificationViewController _backButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ceba74(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710ce4);
  puVar1 = PTR_PTR_1126af430;
  func_0x00010bf9b400(PTR_PTR_1126af430);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cebac0; end: 104cebb8b; -[SCCredentials2FAOTPVerificationViewController textField:shouldChangeCharactersInRange:replacementString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_104cebac0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_6);
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c25cf80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112710ce4);
  puVar2 = PTR_PTR_1126af430;
  func_0x00010c28bdc0(PTR_PTR_1126af430,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar3,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return 1;
}



/* Entry: 104cebb8c; end: 104cebba3; -[SCCredentials2FAOTPVerificationViewController textFieldShouldReturn:] */

undefined8 FUN_104cebb8c(void)

{
  func_0x00010bde87c0();
  return 1;
}



/* Entry: 104cebba4; end: 104cebbef; -[SCCredentials2FAOTPVerificationViewController switchToSmsButtonTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cebba4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710ce4);
  puVar1 = PTR_PTR_1126af430;
  func_0x00010c265880(PTR_PTR_1126af430);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cebbf0; end: 104cebc3b; -[SCCredentials2FAOTPVerificationViewController rememberDeviceSwitchValueChanged:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cebbf0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710ce4);
  puVar1 = PTR_PTR_1126af430;
  func_0x00010c129380(PTR_PTR_1126af430);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cebc3c; end: 104cebcab; -[SCCredentials2FAOTPVerificationViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cebc3c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112710ce8,0);
  _objc_storeStrong(param_1 + _DAT_112710cec,0);
  _objc_storeStrong(param_1 + _DAT_112710cf0,0);
  _objc_storeStrong(param_1 + _DAT_112710cf4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112710ce4,0);
  return;
}



/* Entry: 104cebcac; end: 104cebdcb; -[SCCredentialsCOSOTP2FAVerificationBusinessLogic initWithCosDelegate:isSwitchable:transitionMomentLogger:twoFALogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104cebcac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_50 = PTR_PTR_1126e3c60;
  puVar1 = &uStack_58;
  uStack_58 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = auStack_48;
    _objc_loadWeakRetained(puVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112710cf8,puVar2);
    _objc_release(puVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112710cfc) = param_4;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112710d00) = 1;
    lVar4 = (long)_DAT_112710d04;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112710d08;
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_48);
  return puVar1;
}



/* Entry: 104cebdcc; end: 104cebe1f; -[SCCredentialsCOSOTP2FAVerificationBusinessLogic begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cebdcc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e3c60;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_begin_1125a3840);
  func_0x00010c0a9d20(*(undefined8 *)(param_1 + _DAT_112710d08));
  return;
}


