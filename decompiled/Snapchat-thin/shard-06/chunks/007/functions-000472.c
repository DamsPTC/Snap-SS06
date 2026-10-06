/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104d05478; end: 104d05487;  */

void FUN_104d05478(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010beba270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__showOneTapLoginLandingPageWithR_11258c240,
             param_2,0);
  return;
}



/* Entry: 104d05488; end: 104d0548b; -[SCOneTapLoginWorkflow COSChallengeErrorWithError:] */

void FUN_104d05488(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc1190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_COSChallengeAbandoned_11254de00);
  return;
}



/* Entry: 104d0548c; end: 104d0554b; -[SCOneTapLoginWorkflow COSChallengeCompletedWithBootStrapData:] */

void FUN_104d0548c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126af360;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126af368;
  func_0x00010c261740(PTR_PTR_1126af368);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03fca0(puVar1,param_2,puVar2,param_3,0,0,0);
  _objc_release(param_3);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c250460(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0e9e0(param_1,param_2,0,puVar1,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d0554c; end: 104d05593; -[SCOneTapLoginWorkflow logOnCOSChallengeReceivedWithChallengeType:] */

void FUN_104d0554c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 - 0xbU < 2) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b0900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 104d05594; end: 104d05597; -[SCOneTapLoginWorkflow logOnCOSChallengeAttemptedWithChallengeType:loggingData:] */

void FUN_104d05594(void)

{
  return;
}



/* Entry: 104d05598; end: 104d0559b; -[SCOneTapLoginWorkflow logOnCOSChallengeResultedWithChallengeType:grpcStatusCode:protoStatusCode:challengeStatusCode:loggingData:] */

void FUN_104d05598(void)

{
  return;
}



/* Entry: 104d0559c; end: 104d0561b; -[SCOneTapLoginWorkflow .cxx_destruct] */

void FUN_104d0559c(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d0561c; end: 104d05733;  */

void FUN_104d0561c(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 4;
  return;
}



/* Entry: 104d05734; end: 104d057c3; +[SCOneTapLoginAvatar bitmojiAvatarWithSilhouette:bitmoji:] */

void FUN_104d05734(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126af5c0;
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



/* Entry: 104d057c4; end: 104d0582f; +[SCOneTapLoginAvatar silhouetteAvatarWithSilhouette:] */

void FUN_104d057c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af5c0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d05830; end: 104d05853; -[SCOneTapLoginAvatar copyWithZone:] */

undefined8 FUN_104d05830(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104d05854; end: 104d058d7; -[SCOneTapLoginAvatar hash] */

void FUN_104d05854(long param_1)

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
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126e3d20;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d058d8; end: 104d0591b; -[SCOneTapLoginAvatar internalInit] */

void FUN_104d058d8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e3d20;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d0591c; end: 104d059eb; -[SCOneTapLoginAvatar isEqual:] */

long FUN_104d0591c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104d059c4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104d059d0;
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
            goto LAB_104d059d0;
          }
          goto LAB_104d059c4;
        }
      }
    }
    lVar3 = 0;
  }
LAB_104d059d0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104d059ec; end: 104d05a73; -[SCOneTapLoginAvatar matchBitmojiAvatar:silhouetteAvatar:] */

void FUN_104d059ec(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x20));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d05a74; end: 104d05aaf; -[SCOneTapLoginAvatar .cxx_destruct] */

void FUN_104d05a74(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104d05ab0; end: 104d05b97; -[SCOneTapLoginDisplayData initWithUserId:username:optInSource:avatar:] */

undefined1 *
FUN_104d05ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e3d28;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104d05b98; end: 104d05bbb; -[SCOneTapLoginDisplayData copyWithZone:] */

undefined8 FUN_104d05b98(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104d05bbc; end: 104d05c47; -[SCOneTapLoginDisplayData hash] */

undefined8 * FUN_104d05bbc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x18);
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  lStack_38 = -lVar5;
  if (-1 < lVar5) {
    lStack_38 = lVar5;
  }
  uStack_40 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_104d05cf0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_104d05cfc;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[3] == param_3[3])) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[4];
          if (puVar6 != (undefined8 *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_104d05cfc;
          }
          goto LAB_104d05cf0;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_104d05cfc:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 104d05c48; end: 104d05d17; -[SCOneTapLoginDisplayData isEqual:] */

long FUN_104d05c48(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104d05cf0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104d05cfc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_104d05cfc;
          }
          goto LAB_104d05cf0;
        }
      }
    }
    lVar3 = 0;
  }
LAB_104d05cfc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104d05d18; end: 104d05d1f; -[SCOneTapLoginDisplayData userId] */

undefined8 FUN_104d05d18(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104d05d20; end: 104d05d27; -[SCOneTapLoginDisplayData username] */

undefined8 FUN_104d05d20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104d05d28; end: 104d05d2f; -[SCOneTapLoginDisplayData optInSource] */

undefined8 FUN_104d05d28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104d05d30; end: 104d05d37; -[SCOneTapLoginDisplayData avatar] */

undefined8 FUN_104d05d30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104d05d38; end: 104d05d73; -[SCOneTapLoginDisplayData .cxx_destruct] */

void FUN_104d05d38(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d05d74; end: 104d05dcf; +[SCOneTapLoginLandingPageAction alertDismissedWithAlertType:] */

void FUN_104d05d74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af5f0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
  *(undefined8 *)(puVar2 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d05dd0; end: 104d05e23; +[SCOneTapLoginLandingPageAction authenticateWithOneTapLoginWithIndex:] */

void FUN_104d05dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af5f0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d05e24; end: 104d05e6f; +[SCOneTapLoginLandingPageAction reactivate] */

void FUN_104d05e24(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af5f0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d05e70; end: 104d05ebb; +[SCOneTapLoginLandingPageAction reactivationDeclined] */

void FUN_104d05e70(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af5f0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d05ebc; end: 104d05f17; +[SCOneTapLoginLandingPageAction removeOneTapLoginWithIndex:] */

void FUN_104d05ebc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af5f0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d05f18; end: 104d05f83; +[SCOneTapLoginLandingPageAction selectOAuthWithOAuthType:] */

void FUN_104d05f18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af5f0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d05f84; end: 104d05fef; +[SCOneTapLoginLandingPageAction selectedLinkWithUrl:] */

void FUN_104d05f84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af5f0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 9;
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d05ff0; end: 104d0603b; +[SCOneTapLoginLandingPageAction signUp] */

void FUN_104d05ff0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af5f0;
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



/* Entry: 104d0603c; end: 104d06087; +[SCOneTapLoginLandingPageAction switchAccount] */

void FUN_104d0603c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af5f0;
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



/* Entry: 104d06088; end: 104d060e3; +[SCOneTapLoginLandingPageAction usePasswordInsteadWithIndex:] */

void FUN_104d06088(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af5f0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d060e4; end: 104d06107; -[SCOneTapLoginLandingPageAction copyWithZone:] */

undefined8 FUN_104d060e4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104d06108; end: 104d0618b; -[SCOneTapLoginLandingPageAction hash] */

void FUN_104d06108(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *(undefined8 *)(param_1 + 0x10);
  uStack_60 = *(undefined8 *)(param_1 + 8);
  uStack_48 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfde980();
  uStack_38 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_88 = PTR_PTR_1126e3d30;
  puStack_90 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d0618c; end: 104d061cf; -[SCOneTapLoginLandingPageAction internalInit] */

void FUN_104d0618c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e3d30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d061d0; end: 104d062c7; -[SCOneTapLoginLandingPageAction isEqual:] */

long FUN_104d061d0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104d062a0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104d062ac;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        (((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
          (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) &&
         (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))))) &&
       ((*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
        (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))))) {
      lVar3 = *(long *)(param_1 + 0x28);
      if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x38);
        if (lVar3 != *(long *)(param_3 + 0x38)) {
          func_0x00010c071ae0();
          goto LAB_104d062ac;
        }
        goto LAB_104d062a0;
      }
    }
    lVar3 = 0;
  }
LAB_104d062ac:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104d062c8; end: 104d064ab; -[SCOneTapLoginLandingPageAction matchAuthenticateWithOneTapLogin:removeOneTapLogin:usePasswordInstead:signUp:switchAccount:selectOAuth:alertDismissed:reactivationDeclined:reactivate:selectedLink:] */

void FUN_104d062c8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,long param_10,long param_11,
                  long param_12)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
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
  switch(*(undefined8 *)(param_1 + 8)) {
  case 0:
    if (param_3 == 0) goto LAB_104d06440;
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    pcVar3 = *(code **)(param_3 + 0x10);
    lVar1 = param_3;
    break;
  case 1:
    if (param_4 == 0) goto LAB_104d06440;
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    pcVar3 = *(code **)(param_4 + 0x10);
    lVar1 = param_4;
    break;
  case 2:
    if (param_5 == 0) goto LAB_104d06440;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    pcVar3 = *(code **)(param_5 + 0x10);
    lVar1 = param_5;
    break;
  case 3:
    if (param_6 == 0) goto LAB_104d06440;
    pcVar3 = *(code **)(param_6 + 0x10);
    lVar1 = param_6;
    goto code_r0x000104d0643c;
  case 4:
    if (param_7 == 0) goto LAB_104d06440;
    pcVar3 = *(code **)(param_7 + 0x10);
    lVar1 = param_7;
    goto code_r0x000104d0643c;
  case 5:
    if (param_8 == 0) goto LAB_104d06440;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    pcVar3 = *(code **)(param_8 + 0x10);
    lVar1 = param_8;
    break;
  case 6:
    if (param_9 == 0) goto LAB_104d06440;
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    pcVar3 = *(code **)(param_9 + 0x10);
    lVar1 = param_9;
    break;
  case 7:
    if (param_10 == 0) goto LAB_104d06440;
    pcVar3 = *(code **)(param_10 + 0x10);
    lVar1 = param_10;
    goto code_r0x000104d0643c;
  case 8:
    if (param_11 == 0) goto LAB_104d06440;
    pcVar3 = *(code **)(param_11 + 0x10);
    lVar1 = param_11;
code_r0x000104d0643c:
    (*pcVar3)(lVar1);
    goto LAB_104d06440;
  case 9:
    if (param_12 == 0) goto LAB_104d06440;
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    pcVar3 = *(code **)(param_12 + 0x10);
    lVar1 = param_12;
    break;
  default:
    goto LAB_104d06440;
  }
  (*pcVar3)(lVar1,uVar2);
LAB_104d06440:
  _objc_release(param_12);
  _objc_release(param_11);
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



/* Entry: 104d064ac; end: 104d064db; -[SCOneTapLoginLandingPageAction .cxx_destruct] */

void FUN_104d064ac(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 104d064dc; end: 104d0665b; -[SCOneTapLoginLandingPageViewModel initWithDisplayData:initialIndex:autoLoginIndex:isLoggingIn:alertMessage:alertWithOptionsMessage:reactivationMessage:reactivationConfirmationMessage:] */

undefined1 *
FUN_104d064dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126e3d38;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104d0665c; end: 104d0667f; -[SCOneTapLoginLandingPageViewModel copyWithZone:] */

undefined8 FUN_104d0665c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104d06680; end: 104d0672b; -[SCOneTapLoginLandingPageViewModel hash] */

undefined8 * FUN_104d06680(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_60 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uStack_50 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_68;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_104d0682c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_104d06838;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((puVar3[3] == param_3[3] && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[4];
        if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[5];
          if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[6];
            if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[7];
              if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                puVar6 = (undefined8 *)puVar3[8];
                if (puVar6 != (undefined8 *)param_3[8]) {
                  func_0x00010c071ae0();
                  goto LAB_104d06838;
                }
                goto LAB_104d0682c;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_104d06838:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 104d0672c; end: 104d06853; -[SCOneTapLoginLandingPageViewModel isEqual:] */

long FUN_104d0672c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104d0682c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104d06838;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x38);
              if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x40);
                if (lVar3 != *(long *)(param_3 + 0x40)) {
                  func_0x00010c071ae0();
                  goto LAB_104d06838;
                }
                goto LAB_104d0682c;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_104d06838:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104d06854; end: 104d0685b; -[SCOneTapLoginLandingPageViewModel displayData] */

undefined8 FUN_104d06854(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104d0685c; end: 104d06863; -[SCOneTapLoginLandingPageViewModel initialIndex] */

undefined8 FUN_104d0685c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104d06864; end: 104d0686b; -[SCOneTapLoginLandingPageViewModel autoLoginIndex] */

undefined8 FUN_104d06864(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104d0686c; end: 104d06873; -[SCOneTapLoginLandingPageViewModel isLoggingIn] */

undefined1 FUN_104d0686c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104d06874; end: 104d0687b; -[SCOneTapLoginLandingPageViewModel alertMessage] */

undefined8 FUN_104d06874(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104d0687c; end: 104d06883; -[SCOneTapLoginLandingPageViewModel alertWithOptionsMessage] */

undefined8 FUN_104d0687c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104d06884; end: 104d0688b; -[SCOneTapLoginLandingPageViewModel reactivationMessage] */

undefined8 FUN_104d06884(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104d0688c; end: 104d06893; -[SCOneTapLoginLandingPageViewModel reactivationConfirmationMessage] */

undefined8 FUN_104d0688c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104d06894; end: 104d068f3; -[SCOneTapLoginLandingPageViewModel .cxx_destruct] */

void FUN_104d06894(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104d068f4; end: 104d0691f; +[SCGrapheneOneTapLoginMetric otlLandingView] */

void FUN_104d068f4(void)

{
  _objc_alloc(PTR_PTR_1126af588);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d06920; end: 104d0694b; +[SCGrapheneOneTapLoginMetric otlLandingAction] */

void FUN_104d06920(void)

{
  _objc_alloc(PTR_PTR_1126af588);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d0694c; end: 104d06977; +[SCGrapheneOneTapLoginMetric otlRemoveAction] */

void FUN_104d0694c(void)

{
  _objc_alloc(PTR_PTR_1126af588);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d06978; end: 104d069a3; +[SCGrapheneOneTapLoginMetric otlAuthenticateFailure] */

void FUN_104d06978(void)

{
  _objc_alloc(PTR_PTR_1126af588);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d069a4; end: 104d069cf; +[SCGrapheneOneTapLoginMetric otlDataMigration] */

void FUN_104d069a4(void)

{
  _objc_alloc(PTR_PTR_1126af588);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d069d0; end: 104d069fb; +[SCGrapheneOneTapLoginMetric otlFailureDialog] */

void FUN_104d069d0(void)

{
  _objc_alloc(PTR_PTR_1126af588);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d069fc; end: 104d06a27; +[SCGrapheneOneTapLoginMetric otlDuplicateReq] */

void FUN_104d069fc(void)

{
  _objc_alloc(PTR_PTR_1126af588);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d06a28; end: 104d06ac7; -[SCGrapheneOneTapLoginMetric description] */

void FUN_104d06a28(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf8d8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110daf8d8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e3d40;
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



/* Entry: 104d06ac8; end: 104d06c47; -[SCGrapheneRegistry oneTapLoginGraphene] */

void FUN_104d06ac8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x104d06b50;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136b8a38 != -1) {
    func_0x00010002a2fc(0x1136b8a38,&puStack_48);
  }
  uVar1 = uRam00000001136b8a30;
  _objc_retain(uRam00000001136b8a30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104d06c48; end: 104d06d0b; -[SCChannelVerificationScope initWithDelegate:uiContainer:verification:] */

undefined1 *
FUN_104d06c48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e3d48;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104d06d0c; end: 104d06d23; -[SCChannelVerificationScope delegate] */

void FUN_104d06d0c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d06d24; end: 104d06d2b; -[SCChannelVerificationScope uiContainer] */

undefined8 FUN_104d06d24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104d06d2c; end: 104d06d33; -[SCChannelVerificationScope verification] */

undefined8 FUN_104d06d2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104d06d34; end: 104d06d6b; -[SCChannelVerificationScope .cxx_destruct] */

void FUN_104d06d34(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104d06d6c; end: 104d06ddf; -[SCGrapheneAuthInitialInfoMetric2 init] */

undefined1 * FUN_104d06d6c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e3d50;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104d06de0; end: 104d06f53;  */

/* WARNING: Removing unreachable block (ram,0x000104d07198) */

char * FUN_104d06de0(long param_1,char *param_2,char *param_3,int param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  char *pcVar4;
  long *plVar5;
  long lVar6;
  undefined8 *unaff_x24;
  char *pcStack_170;
  undefined *puStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined8 auStack_120 [3];
  undefined1 auStack_108 [24];
  undefined8 auStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar5 = *(long **)(param_1 + 8);
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
    func_0x00010002b838(auStack_60,pcVar1);
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
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar5 + 0x18))(plVar5);
    param_4 = (int)param_3;
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar4 = pcVar2;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar4 = pcVar2;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_2);
    _objc_release(param_2);
    __Unwind_Resume();
    pcStack_88 = FUN_104d06f54;
    lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_90 = &stack0xfffffffffffffff0;
    _objc_retain(pcVar1);
    _objc_retain(pcVar4);
    if (pcVar2 != (char *)0x0) {
      plVar5 = *(long **)(pcVar2 + 8);
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
      func_0x00010002b838(auStack_120,pcVar2);
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
      func_0x00010002b838(auStack_108,pcVar2);
      unaff_x24 = auStack_f0;
      pcVar2 = "true";
      if (param_4 == 0) {
        pcVar2 = "false";
      }
      func_0x00010002b838(unaff_x24,pcVar2);
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_130 = 0;
      func_0x00010007e1e8(&uStack_140,auStack_120,&lStack_d8,3);
      (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_11084a2c8,&uStack_140,param_5);
      puStack_128 = (undefined1 *)&uStack_140;
      func_0x00010007e5dc(&puStack_128);
      lVar6 = 0;
      do {
        if ((&cStack_d9)[lVar6] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_f0 + lVar6));
        }
        lVar6 = lVar6 + -0x18;
      } while (lVar6 != -0x48);
    }
    _objc_release(pcVar4);
    pcVar2 = pcVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
      ___stack_chk_fail();
      _objc_release(pcVar4);
      do {
        unaff_x24 = unaff_x24 + -3;
      } while (unaff_x24 != auStack_120);
      _objc_release(pcVar4);
      _objc_release(pcVar1);
      __Unwind_Resume();
      ppcVar3 = &pcStack_170;
      pcStack_148 = FUN_104d071c8;
      puStack_168 = PTR_PTR_1126e3d58;
      pcStack_170 = pcVar2;
      pcStack_160 = pcVar4;
      pcStack_158 = pcVar1;
      ppuStack_150 = &puStack_90;
      _objc_msgSendSuper2(&pcStack_170,PTR_s_init_1125d9248);
      if (ppcVar3 != (char **)0x0) {
        pcVar1 = (char *)ppcVar3;
        (*(code *)PTR_DAT_113403208)();
        *(char **)((long)ppcVar3 + 8) = pcVar1;
      }
      return (char *)ppcVar3;
    }
    return pcVar2;
  }
  return pcVar2;
}



/* Entry: 104d06f54; end: 104d071c7;  */

/* WARNING: Removing unreachable block (ram,0x000104d07198) */

char * FUN_104d06f54(long param_1,char *param_2,char *param_3,int param_4,undefined8 param_5)

{
  char *pcVar1;
  char **ppcVar2;
  long lVar3;
  long *plVar4;
  undefined8 *unaff_x24;
  char *pcStack_f0;
  undefined *puStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
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
    func_0x00010002b838(auStack_a0,pcVar1);
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
    func_0x00010002b838(auStack_88,pcVar1);
    unaff_x24 = auStack_70;
    pcVar1 = "true";
    if (param_4 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(unaff_x24,pcVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_11084a2c8,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar3 = 0;
    do {
      if ((&cStack_59)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x48);
  }
  _objc_release(param_3);
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_3);
    do {
      unaff_x24 = unaff_x24 + -3;
    } while (unaff_x24 != auStack_a0);
    _objc_release(param_3);
    _objc_release(param_2);
    __Unwind_Resume();
    ppcVar2 = &pcStack_f0;
    pcStack_c8 = FUN_104d071c8;
    puStack_e8 = PTR_PTR_1126e3d58;
    pcStack_f0 = pcVar1;
    pcStack_e0 = param_3;
    pcStack_d8 = param_2;
    puStack_d0 = &stack0xfffffffffffffff0;
    _objc_msgSendSuper2(&pcStack_f0,PTR_s_init_1125d9248);
    if (ppcVar2 != (char **)0x0) {
      pcVar1 = (char *)ppcVar2;
      (*(code *)PTR_DAT_113403208)();
      *(char **)((long)ppcVar2 + 8) = pcVar1;
    }
    return (char *)ppcVar2;
  }
  return pcVar1;
}



/* Entry: 104d071c8; end: 104d0723b; -[SCGraphenePhoneEmailFirstMetric2 init] */

undefined1 * FUN_104d071c8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e3d58;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104d0723c; end: 104d0746b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d0723c(long param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined *puVar6;
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
  undefined *puVar19;
  int iVar20;
  undefined8 uVar21;
  long lVar22;
  long *plVar23;
  undefined8 *puVar24;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined1 auStack_198 [24];
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  char *pcStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  char *pcStack_140;
  char *pcStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar5 = param_3;
  pcVar4 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar24 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar23 = *(long **)(param_1 + 8);
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
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
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
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    unaff_x23 = acStack_98;
    pcVar5 = acStack_98;
    (**(code **)(*plVar23 + 0x18))(plVar23,&UNK_11084a358,pcVar5,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar22 = 0;
    puVar24 = auStack_78;
    pcVar4 = param_4;
    do {
      if ((&cStack_49)[lVar22] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar22));
      }
      lVar22 = lVar22 + -0x18;
    } while (lVar22 != -0x30);
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
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_104d0746c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar1;
  pcVar12 = pcVar5;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar24;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  iVar20 = (int)pcVar12;
  plVar23 = (long *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar23 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x23 = (char *)auStack_100;
    func_0x00010002b838(auStack_100,pcVar4);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x00010007e1e8(&uStack_120,auStack_100,&lStack_e8,1);
    pcVar9 = "";
    iVar20 = (int)&uStack_120;
    (**(code **)(*plVar23 + 0x18))(plVar23,&UNK_11084a3a8,&uStack_120,pcVar5);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x00010007e5dc(&puStack_108);
    pcVar4 = pcVar5;
    puVar24 = &uStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      pcVar4 = pcVar5;
      puVar24 = &uStack_120;
    }
  }
  pcVar5 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar2 = pcVar5;
  __Unwind_Resume();
  pcStack_128 = FUN_104d075e0;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_160 = unaff_x24;
  pcStack_158 = unaff_x23;
  puStack_150 = puVar24;
  plStack_148 = plVar23;
  pcStack_140 = pcVar5;
  pcStack_138 = pcVar1;
  ppuStack_130 = &puStack_b0;
  _objc_retain(pcVar9);
  if (pcVar2 != (char *)0x0) {
    plVar23 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar9;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_198,pcVar1);
    pcVar1 = "true";
    if (iVar20 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_180,pcVar1);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x00010007e1e8(&uStack_1b8,auStack_198,&lStack_168,2);
    (**(code **)(*plVar23 + 0x18))(plVar23,&UNK_11084a3f8,&uStack_1b8,pcVar4);
    puStack_1a0 = &uStack_1b8;
    func_0x00010007e5dc(&puStack_1a0);
    lVar22 = 0;
    do {
      if ((&cStack_169)[lVar22] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar22));
      }
      lVar22 = lVar22 + -0x18;
    } while (lVar22 != -0x30);
  }
  pcVar1 = pcVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  _objc_release(pcVar9);
  __Unwind_Resume();
  puVar6 = PTR_PTR_1126af610;
  _objc_alloc();
  lVar22 = (long)_DAT_1127111a4;
  pcVar5 = pcVar1 + lVar22;
  _objc_loadWeakRetained();
  pcVar7 = pcVar5;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar1 + _DAT_1127111ac;
  _objc_loadWeakRetained();
  pcVar2 = pcVar1 + lVar22;
  _objc_loadWeakRetained();
  pcVar8 = pcVar2;
  func_0x00010c0faf60();
  _objc_retainAutoreleasedReturnValue();
  pcVar9 = pcVar1 + lVar22;
  _objc_loadWeakRetained();
  pcVar10 = pcVar9;
  func_0x00010c15f680();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar1 + _DAT_1127111b4;
  _objc_loadWeakRetained();
  pcVar11 = pcVar3;
  func_0x00010c0d2660();
  _objc_retainAutoreleasedReturnValue();
  pcVar12 = pcVar1 + lVar22;
  _objc_loadWeakRetained();
  func_0x00010bf4e080();
  pcVar13 = pcVar1 + lVar22;
  _objc_loadWeakRetained();
  func_0x00010bf0ab60();
  pcVar14 = pcVar1 + _DAT_1127111b8;
  _objc_loadWeakRetained();
  pcVar15 = pcVar14;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  pcVar16 = pcVar1 + _DAT_1127111bc;
  _objc_loadWeakRetained();
  pcVar17 = pcVar16;
  func_0x00010c113f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c056760();
  _objc_release(pcVar17);
  _objc_release(pcVar16);
  _objc_release(pcVar15);
  _objc_release(pcVar14);
  _objc_release(pcVar13);
  _objc_release(pcVar12);
  _objc_release(pcVar11);
  _objc_release(pcVar3);
  _objc_release(pcVar10);
  _objc_release(pcVar9);
  _objc_release(pcVar8);
  _objc_release(pcVar2);
  _objc_release(pcVar4);
  _objc_release(pcVar7);
  _objc_release(pcVar5);
  puVar18 = PTR_PTR_1126aeb48;
  _objc_alloc(PTR_PTR_1126aeb48);
  func_0x00010c0404c0();
  puVar19 = PTR_PTR_1126af618;
  _objc_alloc();
  pcVar5 = pcVar1 + lVar22;
  _objc_loadWeakRetained(pcVar5);
  pcVar2 = pcVar5;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar1 + lVar22;
  _objc_loadWeakRetained(pcVar4);
  pcVar9 = pcVar4;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040700();
  lVar22 = (long)_DAT_1127111c0;
  uVar21 = *(undefined8 *)(pcVar1 + lVar22);
  *(undefined **)(pcVar1 + lVar22) = puVar19;
  _objc_release(uVar21);
  _objc_release(pcVar9);
  _objc_release(pcVar4);
  _objc_release(pcVar2);
  _objc_release(pcVar5);
  func_0x00010bf17a60(*(undefined8 *)(pcVar1 + lVar22));
  _objc_release(puVar18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 104d0746c; end: 104d075df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d0746c(long param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
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
  undefined *puVar19;
  int iVar20;
  undefined8 uVar21;
  long lVar22;
  long *plVar23;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined1 auStack_f8 [24];
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
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  uVar21 = param_3;
  _objc_retain(param_2);
  iVar20 = (int)uVar21;
  if (param_1 != 0) {
    plVar23 = *(long **)(param_1 + 8);
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
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    iVar20 = (int)&uStack_80;
    (**(code **)(*plVar23 + 0x18))(plVar23,&UNK_11084a3a8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      param_4 = param_3;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar23 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_f8,pcVar2);
    pcVar2 = "true";
    if (iVar20 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_e0,pcVar2);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    (**(code **)(*plVar23 + 0x18))(plVar23,&UNK_11084a3f8,&uStack_118,param_4);
    puStack_100 = &uStack_118;
    func_0x00010007e5dc(&puStack_100);
    lVar22 = 0;
    do {
      if ((&cStack_c9)[lVar22] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar22));
      }
      lVar22 = lVar22 + -0x18;
    } while (lVar22 != -0x30);
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  puVar3 = PTR_PTR_1126af610;
  _objc_alloc();
  lVar22 = (long)_DAT_1127111a4;
  pcVar1 = pcVar2 + lVar22;
  _objc_loadWeakRetained();
  pcVar4 = pcVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar2 + _DAT_1127111ac;
  _objc_loadWeakRetained();
  pcVar6 = pcVar2 + lVar22;
  _objc_loadWeakRetained();
  pcVar7 = pcVar6;
  func_0x00010c0faf60();
  _objc_retainAutoreleasedReturnValue();
  pcVar8 = pcVar2 + lVar22;
  _objc_loadWeakRetained();
  pcVar9 = pcVar8;
  func_0x00010c15f680();
  _objc_retainAutoreleasedReturnValue();
  pcVar10 = pcVar2 + _DAT_1127111b4;
  _objc_loadWeakRetained();
  pcVar11 = pcVar10;
  func_0x00010c0d2660();
  _objc_retainAutoreleasedReturnValue();
  pcVar12 = pcVar2 + lVar22;
  _objc_loadWeakRetained();
  func_0x00010bf4e080();
  pcVar13 = pcVar2 + lVar22;
  _objc_loadWeakRetained();
  func_0x00010bf0ab60();
  pcVar14 = pcVar2 + _DAT_1127111b8;
  _objc_loadWeakRetained();
  pcVar15 = pcVar14;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  pcVar16 = pcVar2 + _DAT_1127111bc;
  _objc_loadWeakRetained();
  pcVar17 = pcVar16;
  func_0x00010c113f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c056760();
  _objc_release(pcVar17);
  _objc_release(pcVar16);
  _objc_release(pcVar15);
  _objc_release(pcVar14);
  _objc_release(pcVar13);
  _objc_release(pcVar12);
  _objc_release(pcVar11);
  _objc_release(pcVar10);
  _objc_release(pcVar9);
  _objc_release(pcVar8);
  _objc_release(pcVar7);
  _objc_release(pcVar6);
  _objc_release(pcVar5);
  _objc_release(pcVar4);
  _objc_release(pcVar1);
  puVar18 = PTR_PTR_1126aeb48;
  _objc_alloc(PTR_PTR_1126aeb48);
  func_0x00010c0404c0();
  puVar19 = PTR_PTR_1126af618;
  _objc_alloc();
  pcVar1 = pcVar2 + lVar22;
  _objc_loadWeakRetained(pcVar1);
  pcVar6 = pcVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar2 + lVar22;
  _objc_loadWeakRetained(pcVar5);
  pcVar8 = pcVar5;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040700();
  lVar22 = (long)_DAT_1127111c0;
  uVar21 = *(undefined8 *)(pcVar2 + lVar22);
  *(undefined **)(pcVar2 + lVar22) = puVar19;
  _objc_release(uVar21);
  _objc_release(pcVar8);
  _objc_release(pcVar5);
  _objc_release(pcVar6);
  _objc_release(pcVar1);
  func_0x00010bf17a60(*(undefined8 *)(pcVar2 + lVar22));
  _objc_release(puVar18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 104d075e0; end: 104d077c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d075e0(long param_1,char *param_2,int param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined *puVar2;
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
  undefined *puVar19;
  undefined8 uVar20;
  long lVar21;
  long *plVar22;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined1 auStack_78 [24];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar22 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,pcVar1);
    pcVar1 = "true";
    if (param_3 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11084a3f8,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar21 = 0;
    do {
      if ((&cStack_49)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
    } while (lVar21 != -0x30);
  }
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar2 = PTR_PTR_1126af610;
  _objc_alloc();
  lVar21 = (long)_DAT_1127111a4;
  pcVar3 = pcVar1 + lVar21;
  _objc_loadWeakRetained();
  pcVar4 = pcVar3;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar1 + _DAT_1127111ac;
  _objc_loadWeakRetained();
  pcVar6 = pcVar1 + lVar21;
  _objc_loadWeakRetained();
  pcVar7 = pcVar6;
  func_0x00010c0faf60();
  _objc_retainAutoreleasedReturnValue();
  pcVar8 = pcVar1 + lVar21;
  _objc_loadWeakRetained();
  pcVar9 = pcVar8;
  func_0x00010c15f680();
  _objc_retainAutoreleasedReturnValue();
  pcVar10 = pcVar1 + _DAT_1127111b4;
  _objc_loadWeakRetained();
  pcVar11 = pcVar10;
  func_0x00010c0d2660();
  _objc_retainAutoreleasedReturnValue();
  pcVar12 = pcVar1 + lVar21;
  _objc_loadWeakRetained();
  func_0x00010bf4e080();
  pcVar13 = pcVar1 + lVar21;
  _objc_loadWeakRetained();
  func_0x00010bf0ab60();
  pcVar14 = pcVar1 + _DAT_1127111b8;
  _objc_loadWeakRetained();
  pcVar15 = pcVar14;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  pcVar16 = pcVar1 + _DAT_1127111bc;
  _objc_loadWeakRetained();
  pcVar17 = pcVar16;
  func_0x00010c113f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c056760();
  _objc_release(pcVar17);
  _objc_release(pcVar16);
  _objc_release(pcVar15);
  _objc_release(pcVar14);
  _objc_release(pcVar13);
  _objc_release(pcVar12);
  _objc_release(pcVar11);
  _objc_release(pcVar10);
  _objc_release(pcVar9);
  _objc_release(pcVar8);
  _objc_release(pcVar7);
  _objc_release(pcVar6);
  _objc_release(pcVar5);
  _objc_release(pcVar4);
  _objc_release(pcVar3);
  puVar18 = PTR_PTR_1126aeb48;
  _objc_alloc(PTR_PTR_1126aeb48);
  func_0x00010c0404c0();
  puVar19 = PTR_PTR_1126af618;
  _objc_alloc();
  pcVar3 = pcVar1 + lVar21;
  _objc_loadWeakRetained(pcVar3);
  pcVar6 = pcVar3;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar1 + lVar21;
  _objc_loadWeakRetained(pcVar5);
  pcVar8 = pcVar5;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040700();
  lVar21 = (long)_DAT_1127111c0;
  uVar20 = *(undefined8 *)(pcVar1 + lVar21);
  *(undefined **)(pcVar1 + lVar21) = puVar19;
  _objc_release(uVar20);
  _objc_release(pcVar8);
  _objc_release(pcVar5);
  _objc_release(pcVar6);
  _objc_release(pcVar3);
  func_0x00010bf17a60(*(undefined8 *)(pcVar1 + lVar21));
  _objc_release(puVar18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104d077c8; end: 104d07a9b; -[SCNGOPhoneEntryFeatureEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d077c8(long param_1,undefined8 param_2)

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
  undefined *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  
  puVar1 = PTR_PTR_1126af610;
  _objc_alloc();
  lVar22 = (long)_DAT_1127111a4;
  lVar2 = param_1 + lVar22;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + _DAT_1127111a8);
  lVar4 = param_1 + _DAT_1127111ac;
  _objc_loadWeakRetained();
  uVar21 = *(undefined8 *)(param_1 + _DAT_1127111b0);
  lVar5 = param_1 + lVar22;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c0faf60();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + lVar22;
  _objc_loadWeakRetained();
  lVar7 = lVar23;
  func_0x00010c15f680();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_1127111b4;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c0d2660();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + lVar22;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010bf4e080();
  lVar12 = param_1 + lVar22;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010bf0ab60();
  lVar14 = param_1 + _DAT_1127111b8;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_1127111bc;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010c113f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c056760(puVar1,param_2,lVar3,uVar20,lVar4,uVar21,lVar6,lVar7,lVar9,lVar11,(char)lVar13
                     );
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar12);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar23);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar18 = PTR_PTR_1126aeb48;
  _objc_alloc(PTR_PTR_1126aeb48);
  func_0x00010c0404c0();
  puVar19 = PTR_PTR_1126af618;
  _objc_alloc();
  lVar2 = param_1 + lVar22;
  _objc_loadWeakRetained(lVar2);
  lVar4 = lVar2;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + lVar22;
  _objc_loadWeakRetained(lVar22);
  lVar5 = lVar22;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040700(puVar19,param_2,puVar18,lVar4,lVar5);
  lVar23 = (long)_DAT_1127111c0;
  uVar20 = *(undefined8 *)(param_1 + lVar23);
  *(undefined **)(param_1 + lVar23) = puVar19;
  _objc_release(uVar20);
  _objc_release(lVar5);
  _objc_release(lVar22);
  _objc_release(lVar4);
  _objc_release(lVar2);
  func_0x00010bf17a60(*(undefined8 *)(param_1 + lVar23));
  _objc_release(puVar18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d07a9c; end: 104d07b7b; -[SCNGOPhoneEntryFeatureEntryPoint end] */

void FUN_104d07a9c(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x104d07b24;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  puStack_50 = PTR_PTR_1126e3d60;
  uStack_58 = param_1;
  _objc_msgSendSuper2(&uStack_58,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d07b7c; end: 104d07b7f;  */

void FUN_104d07b7c(void)

{
  return;
}



/* Entry: 104d07b80; end: 104d07c0b; -[SCNGOPhoneEntryFeatureEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d07b80(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127111bc);
  _objc_storeStrong(param_1 + _DAT_1127111b0,0);
  _objc_storeStrong(param_1 + _DAT_1127111a8,0);
  _objc_destroyWeak(param_1 + _DAT_1127111b8);
  _objc_destroyWeak(param_1 + _DAT_1127111ac);
  _objc_destroyWeak(param_1 + _DAT_1127111b4);
  _objc_destroyWeak(param_1 + _DAT_1127111a4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127111c0,0);
  return;
}



/* Entry: 104d07c0c; end: 104d07dfb; -[SCNGOPhoneEntryUIRouteActions initWithUIContainer:countryCodeScopeExposer:countryCodePickerScopeServices:webBrowsingScopeExposer:initialPhoneNumber:phoneEntryService:multiSourceCountryProvider:context:asciiKeypadEnabled:currentPageTracker:privacyPolicyViewFactory:] */

undefined8 *
FUN_104d07c0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
             undefined8 param_13,undefined8 param_14)

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
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_1126e3d68;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_7);
    uVar2 = puVar1[1];
    puVar1[1] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[3];
    puVar1[3] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[4];
    puVar1[4] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[5];
    puVar1[5] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    puVar1[8] = param_10;
    *(undefined1 *)(puVar1 + 9) = param_11;
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_14;
    _objc_release(uVar2);
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104d07dfc; end: 104d07f73; -[SCNGOPhoneEntryUIRouteActions showPhoneEntryScreenWithDelegate:dataSource:] */

void FUN_104d07dfc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126af348;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c05a560();
  puVar2 = PTR_PTR_1126af620;
  _objc_alloc(PTR_PTR_1126af620);
  func_0x00010c035a60();
  _objc_release(param_4);
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126aec60;
  _objc_alloc();
  func_0x00010bff9c80();
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar3;
  _objc_release(uVar4);
  if (*(long *)(param_1 + 0x40) == 6) {
    puVar3 = PTR_PTR_1126af628;
    _objc_alloc(PTR_PTR_1126af628);
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c150e00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c042440(puVar3);
  }
  else {
    puVar3 = PTR_PTR_1126af630;
    _objc_alloc(PTR_PTR_1126af630);
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c150e00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0423a0(puVar3);
  }
  _objc_release(uVar4);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x10));
  _objc_storeWeak(param_1 + 0x58,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d07f74; end: 104d07f7f; -[SCNGOPhoneEntryUIRouteActions removePhoneEntryScreen] */

void FUN_104d07f74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 104d07f80; end: 104d08007; -[SCNGOPhoneEntryUIRouteActions showCountryCodePickerWithDelegate:] */

void FUN_104d07f80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104d08008;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 104d08008; end: 104d080cf;  */

void FUN_104d08008(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x58;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar1 = *(long *)(param_1 + 0x20) + 0x58;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c038f40(puVar2,param_2,lVar1,1);
    _objc_release(lVar1);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
    func_0x00010bf23d40(uVar3,param_2,puVar2,*(undefined8 *)(param_1 + 0x28),1,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),param_2,uVar3);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 104d080d0; end: 104d0814b; -[SCNGOPhoneEntryUIRouteActions removeCountryCodePicker] */

void FUN_104d080d0(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x104d08128;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 104d0814c; end: 104d08323; -[SCNGOPhoneEntryUIRouteActions showWebBrowserWithUrl:browsingDelegate:] */

void FUN_104d0814c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae630;
  _objc_retain(param_4);
  func_0x00010bfe6000(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2b9b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new(PTR_PTR_1126ae560);
  puVar3 = puVar1;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104d08324;
  puStack_60 = &UNK_110842308;
  uVar4 = param_3;
  uStack_58 = param_3;
  _objc_retain(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(puVar3,param_2,&puStack_78,uVar4);
  _objc_release(uVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar5 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c038f40(puVar3,param_2,lVar5,1);
  _objc_release(lVar5);
  puVar6 = PTR_PTR_1126ae638;
  _objc_opt_new(PTR_PTR_1126ae638);
  puVar7 = puVar6;
  func_0x00010bf22ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar6);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x30),param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(puVar2);
  return;
}



/* Entry: 104d08324; end: 104d0833b;  */

void FUN_104d08324(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c09c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_2,PTR_s_loadURL__112604b58,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 104d0833c; end: 104d0835b; -[SCNGOPhoneEntryUIRouteActions dismissWebBrowser] */

void FUN_104d0833c(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104d0835c; end: 104d083f3; -[SCNGOPhoneEntryUIRouteActions .cxx_destruct] */

void FUN_104d0835c(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 104d083f4; end: 104d0853b; -[SCNGOPhoneEntryBusinessLogic initWithPhoneNumber:service:delegate:dataSource:phoneNumberFormatter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104d083f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126e3d70;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_1127111f8;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_1127111fc),param_5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112711200),param_6);
    lVar4 = (long)_DAT_112711204;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be3b040();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112711208);
    *(undefined1 **)((long)puVar1 + (long)_DAT_112711208) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104d0853c; end: 104d0868f; -[SCNGOPhoneEntryBusinessLogic handleAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d0853c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271120c);
  *(undefined8 *)(param_1 + _DAT_11271120c) = 0;
  _objc_retain(param_3);
  _objc_release(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104d08690;
  puStack_40 = &UNK_110842e18;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x104d08698;
  puStack_68 = &UNK_110842e18;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  uStack_98 = 0x104d086a0;
  puStack_90 = &UNK_1108450c8;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x104d086ac;
  puStack_b8 = &UNK_1108450c8;
  puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f0 = 0xc2000000;
  uStack_e8 = 0x104d086b8;
  puStack_e0 = &UNK_1108480f8;
  puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_118 = 0xc2000000;
  uStack_110 = 0x104d086c4;
  puStack_108 = &UNK_110842e18;
  puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_140 = 0xc2000000;
  uStack_138 = 0x104d086cc;
  puStack_130 = &UNK_110842e18;
  puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_168 = 0xc2000000;
  uStack_160 = 0x104d086d4;
  puStack_158 = &UNK_110842e18;
  lStack_150 = param_1;
  lStack_128 = param_1;
  lStack_100 = param_1;
  lStack_d8 = param_1;
  lStack_b0 = param_1;
  lStack_88 = param_1;
  lStack_60 = param_1;
  lStack_38 = param_1;
  func_0x00010c0c0620(param_3,param_2,&puStack_58,&puStack_80,&puStack_a8,&puStack_d0,&puStack_f8,
                      &puStack_120,&puStack_148,&puStack_170);
  _objc_release(param_3);
  return;
}



/* Entry: 104d08690; end: 104d086db;  */

void FUN_104d08690(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec5d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s__submit_11258f0f8);
  return;
}



/* Entry: 104d086dc; end: 104d0889b; -[SCNGOPhoneEntryBusinessLogic viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d086dc(long param_1,undefined8 param_2)

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
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar1 = PTR_PTR_1126af638;
  _objc_alloc();
  lVar2 = param_1;
  func_0x00010be18ce0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be18ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010be18c20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010be18c00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010be34e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010be34e00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010bdc3fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + _DAT_11271120c);
  uVar11 = *(undefined8 *)(param_1 + _DAT_112711210);
  lVar9 = param_1;
  func_0x00010bdd99c0();
  func_0x00010beb5bc0();
  func_0x00010beb66c0();
  func_0x00010bde87e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c013d80(puVar1,param_2,lVar2,lVar3,lVar4,lVar5,lVar6,lVar7,lVar8,uVar10,uVar11,
                      (char)lVar9);
  _objc_release(param_1);
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



/* Entry: 104d0889c; end: 104d08a4f; -[SCNGOPhoneEntryBusinessLogic _submit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d0889c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  *(undefined1 *)(param_1 + _DAT_112711214) = 1;
  lVar1 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126af2d8;
  _objc_alloc();
  lVar1 = param_1;
  func_0x00010be45a80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02c420();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0e2ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127111f8);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104d08a50;
  puStack_78 = &UNK_11084a4b8;
  lStack_68 = lVar1;
  _objc_copyWeak(auStack_60,auStack_58);
  puStack_70 = puVar2;
  _objc_copyWeak(auStack_98,auStack_58);
  func_0x00010c25f3e0(uVar3);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(lVar1);
  _objc_release(puVar2);
  return;
}



/* Entry: 104d08a50; end: 104d08b13;  */

void FUN_104d08a50(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x28);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104d08b14;
  puStack_50 = &UNK_110848218;
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  _objc_retain(param_2);
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = param_2;
  (**(code **)(lVar1 + 0x10))(lVar1,&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104d08b14; end: 104d08b47;  */

void FUN_104d08b14(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be73a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d08b48; end: 104d08c07;  */

void FUN_104d08b48(long param_1,undefined8 param_2)

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
  pcStack_50 = FUN_104d08c08;
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



/* Entry: 104d08c08; end: 104d08c3b;  */

void FUN_104d08c08(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be73980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d08c3c; end: 104d08da7; -[SCNGOPhoneEntryBusinessLogic _phoneSubmitSuccess:phoneNumber:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d08c3c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af640;
  _objc_retain(param_4);
  _objc_alloc();
  lVar3 = param_3;
  func_0x00010c2983a0(param_3);
  lVar4 = param_3;
  func_0x00010c13b720(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c035ae0(puVar1,param_2,param_4,lVar3,lVar4);
  _objc_release(param_4);
  _objc_release(lVar4);
  lVar3 = param_3;
  func_0x00010c118460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    lVar3 = param_1 + _DAT_1127111fc;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c0fad80();
  }
  else {
    lVar3 = param_3;
    func_0x00010c118460();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112711210);
    *(long *)(param_1 + _DAT_112711210) = lVar3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112711218;
    _objc_retain(puVar1);
    lVar3 = *(long *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
  }
  _objc_release(lVar3);
  *(undefined1 *)(param_1 + _DAT_112711214) = 0;
  lVar3 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))();
  _objc_release(lVar3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112711210);
  *(undefined8 *)(param_1 + _DAT_112711210) = 0;
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d08da8; end: 104d08e97; -[SCNGOPhoneEntryBusinessLogic _phoneSubmitFailure:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d08da8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  *(undefined1 *)(param_1 + _DAT_112711214) = 0;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x104d08e5c;
  puStack_30 = &UNK_1108450c8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104d08e98;
  puStack_58 = &UNK_110848188;
  lStack_50 = param_1;
  lStack_28 = param_1;
  func_0x00010c0bfae0(param_3,param_2,&puStack_48,&puStack_70);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_release(param_1);
  return;
}


