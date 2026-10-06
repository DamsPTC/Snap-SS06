/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10af3b730; end: 10af3b7bb; -[SCOffPlatformLensLink hash] */

undefined8 * FUN_10af3b730(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
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
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10af3b86c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10af3b878;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[4];
            if (puVar6 != (undefined8 *)param_3[4]) {
              func_0x00010c071ae0();
              goto LAB_10af3b878;
            }
            goto LAB_10af3b86c;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10af3b878:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10af3b7bc; end: 10af3b893; -[SCOffPlatformLensLink isEqual:] */

long FUN_10af3b7bc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af3b86c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af3b878;
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
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_10af3b878;
            }
            goto LAB_10af3b86c;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10af3b878:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af3b894; end: 10af3b89b; -[SCOffPlatformLensLink lensId] */

undefined8 FUN_10af3b894(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af3b89c; end: 10af3b8a3; -[SCOffPlatformLensLink lensUrl] */

undefined8 FUN_10af3b89c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af3b8a4; end: 10af3b8ab; -[SCOffPlatformLensLink lensName] */

undefined8 FUN_10af3b8a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af3b8ac; end: 10af3b8b3; -[SCOffPlatformLensLink lensData] */

undefined8 FUN_10af3b8ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af3b8b4; end: 10af3b8fb; -[SCOffPlatformLensLink .cxx_destruct] */

void FUN_10af3b8b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af3b8fc; end: 10af3b92b; -[SCSocialSmsServices setSmsSender:] */

void FUN_10af3b8fc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10af3b92c; end: 10af3b95b; -[SCSocialSmsServices setLinkCreator:] */

void FUN_10af3b92c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10af3b95c; end: 10af3b963; -[SCSocialSmsServices smsReceiver] */

undefined8 FUN_10af3b95c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af3b964; end: 10af3b993; -[SCSocialSmsServices setSmsReceiver:] */

void FUN_10af3b964(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af3b994; end: 10af3b9cf; -[SCSocialSmsServices .cxx_destruct] */

void FUN_10af3b994(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af3b9d0; end: 10af3bb17; -[SCSocialSmsRequest initWithPhoneNumbers:featureType:metadata:mediaLinkPayload:rawMediaURL:loggingMetadata:] */

undefined1 *
FUN_10af3b9d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1127029f0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af3bb18; end: 10af3bb3b; -[SCSocialSmsRequest copyWithZone:] */

undefined8 FUN_10af3bb18(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af3bb3c; end: 10af3bbdf; -[SCSocialSmsRequest hash] */

undefined8 * FUN_10af3bb3c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x10);
  uStack_48 = *(undefined8 *)(param_1 + 0x18);
  lStack_50 = -lVar5;
  if (-1 < lVar5) {
    lStack_50 = lVar5;
  }
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar1;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10af3bcb8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10af3bcc4;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[2] == param_3[2])) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[5];
            if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = (undefined8 *)puVar3[6];
              if (puVar6 != (undefined8 *)param_3[6]) {
                func_0x00010c071ae0();
                goto LAB_10af3bcc4;
              }
              goto LAB_10af3bcb8;
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10af3bcc4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10af3bbe0; end: 10af3bcdf; -[SCSocialSmsRequest isEqual:] */

long FUN_10af3bbe0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af3bcb8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af3bcc4;
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
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if (lVar3 != *(long *)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_10af3bcc4;
              }
              goto LAB_10af3bcb8;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10af3bcc4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af3bce0; end: 10af3bce7; -[SCSocialSmsRequest phoneNumbers] */

undefined8 FUN_10af3bce0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af3bce8; end: 10af3bcef; -[SCSocialSmsRequest featureType] */

undefined8 FUN_10af3bce8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af3bcf0; end: 10af3bcf7; -[SCSocialSmsRequest metadata] */

undefined8 FUN_10af3bcf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af3bcf8; end: 10af3bcff; -[SCSocialSmsRequest mediaLinkPayload] */

undefined8 FUN_10af3bcf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af3bd00; end: 10af3bd07; -[SCSocialSmsRequest rawMediaURL] */

undefined8 FUN_10af3bd00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10af3bd08; end: 10af3bd0f; -[SCSocialSmsRequest loggingMetadata] */

undefined8 FUN_10af3bd08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10af3bd10; end: 10af3bd63; -[SCSocialSmsRequest .cxx_destruct] */

void FUN_10af3bd10(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af3bd64; end: 10af3be4b; -[SCSocialSmsRequestLoggingMetadata initWithDeepLinkSourceType:posterId:snapId:sendToSessionId:] */

undefined1 *
FUN_10af3bd64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1127029f8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10af3be4c; end: 10af3be6f; -[SCSocialSmsRequestLoggingMetadata copyWithZone:] */

undefined8 FUN_10af3be4c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af3be70; end: 10af3befb; -[SCSocialSmsRequestLoggingMetadata hash] */

long * FUN_10af3be70(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lStack_48 = -lVar5;
  if (-1 < lVar5) {
    lStack_48 = lVar5;
  }
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  plVar3 = &lStack_48;
  uStack_30 = uVar2;
  func_0x000107c3191c(plVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 == param_3) {
LAB_10af3bfa4:
    plVar6 = (long *)0x1;
  }
  else {
    plVar6 = (long *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_10af3bfb0;
    plVar6 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar6);
    if ((((ulong)plVar4 & 1) != 0) && (plVar3[1] == param_3[1])) {
      lVar5 = plVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = plVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          plVar6 = (long *)plVar3[4];
          if (plVar6 != (long *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_10af3bfb0;
          }
          goto LAB_10af3bfa4;
        }
      }
    }
    plVar6 = (long *)0x0;
  }
LAB_10af3bfb0:
  _objc_release(param_3);
  return plVar6;
}



/* Entry: 10af3befc; end: 10af3bfcb; -[SCSocialSmsRequestLoggingMetadata isEqual:] */

long FUN_10af3befc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af3bfa4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af3bfb0;
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
            goto LAB_10af3bfb0;
          }
          goto LAB_10af3bfa4;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10af3bfb0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af3bfcc; end: 10af3bfd3; -[SCSocialSmsRequestLoggingMetadata deepLinkSourceType] */

undefined8 FUN_10af3bfcc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af3bfd4; end: 10af3bfdb; -[SCSocialSmsRequestLoggingMetadata posterId] */

undefined8 FUN_10af3bfd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af3bfdc; end: 10af3bfe3; -[SCSocialSmsRequestLoggingMetadata snapId] */

undefined8 FUN_10af3bfdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af3bfe4; end: 10af3bfeb; -[SCSocialSmsRequestLoggingMetadata sendToSessionId] */

undefined8 FUN_10af3bfe4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af3bfec; end: 10af3c027; -[SCSocialSmsRequestLoggingMetadata .cxx_destruct] */

void FUN_10af3bfec(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10af3c028; end: 10af3c09f; -[SCSocialLinkCreateRequest initWithMediaLinkPayload:] */

undefined1 * FUN_10af3c028(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112702a00;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af3c0a0; end: 10af3c0c3; -[SCSocialLinkCreateRequest copyWithZone:] */

undefined8 FUN_10af3c0a0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af3c0c4; end: 10af3c0cb; -[SCSocialLinkCreateRequest hash] */

void FUN_10af3c0c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10af3c0cc; end: 10af3c15b; -[SCSocialLinkCreateRequest isEqual:] */

long FUN_10af3c0cc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af3c140;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10af3c140;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10af3c140;
    }
  }
  lVar3 = 1;
LAB_10af3c140:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af3c15c; end: 10af3c163; -[SCSocialLinkCreateRequest mediaLinkPayload] */

undefined8 FUN_10af3c15c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af3c164; end: 10af3c16f; -[SCSocialLinkCreateRequest .cxx_destruct] */

void FUN_10af3c164(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af3c170; end: 10af3c257; -[SCSocialLinkMedia initWithThumbnailURL:mainMediaURL:lensId:isImage:] */

undefined1 *
FUN_10af3c170(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

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
  puStack_48 = PTR_PTR_112702a08;
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af3c258; end: 10af3c27b; -[SCSocialLinkMedia copyWithZone:] */

undefined8 FUN_10af3c258(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af3c27c; end: 10af3c2ff; -[SCSocialLinkMedia hash] */

undefined8 * FUN_10af3c27c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar3 = &uStack_48;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10af3c3a8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10af3c3b4;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[4];
          if (puVar6 != (undefined8 *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_10af3c3b4;
          }
          goto LAB_10af3c3a8;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10af3c3b4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10af3c300; end: 10af3c3cf; -[SCSocialLinkMedia isEqual:] */

long FUN_10af3c300(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af3c3a8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af3c3b4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10af3c3b4;
          }
          goto LAB_10af3c3a8;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10af3c3b4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af3c3d0; end: 10af3c3d7; -[SCSocialLinkMedia thumbnailURL] */

undefined8 FUN_10af3c3d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af3c3d8; end: 10af3c3df; -[SCSocialLinkMedia mainMediaURL] */

undefined8 FUN_10af3c3d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af3c3e0; end: 10af3c3e7; -[SCSocialLinkMedia lensId] */

undefined8 FUN_10af3c3e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af3c3e8; end: 10af3c3ef; -[SCSocialLinkMedia isImage] */

undefined1 FUN_10af3c3e8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10af3c3f0; end: 10af3c42b; -[SCSocialLinkMedia .cxx_destruct] */

void FUN_10af3c3f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10af3c42c; end: 10af3c4d7; -[SCSocialLinkCreateResponse initWithURL:linkId:] */

undefined1 *
FUN_10af3c42c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112702a10;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af3c4d8; end: 10af3c4fb; -[SCSocialLinkCreateResponse copyWithZone:] */

undefined8 FUN_10af3c4d8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af3c4fc; end: 10af3c56f; -[SCSocialLinkCreateResponse hash] */

undefined8 * FUN_10af3c4fc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10af3c5f0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10af3c5fc;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10af3c5fc;
        }
        goto LAB_10af3c5f0;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10af3c5fc:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10af3c570; end: 10af3c617; -[SCSocialLinkCreateResponse isEqual:] */

long FUN_10af3c570(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af3c5f0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af3c5fc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10af3c5fc;
        }
        goto LAB_10af3c5f0;
      }
    }
    lVar3 = 0;
  }
LAB_10af3c5fc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af3c618; end: 10af3c61f; -[SCSocialLinkCreateResponse URL] */

undefined8 FUN_10af3c618(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af3c620; end: 10af3c627; -[SCSocialLinkCreateResponse linkId] */

undefined8 FUN_10af3c620(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af3c628; end: 10af3c657; -[SCSocialLinkCreateResponse .cxx_destruct] */

void FUN_10af3c628(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af3c658; end: 10af3c703; -[SCSocialSmsMediaLinkPayload initWithThumbnailDownloadURL:mediaArray:] */

undefined1 *
FUN_10af3c658(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112702a18;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af3c704; end: 10af3c727; -[SCSocialSmsMediaLinkPayload copyWithZone:] */

undefined8 FUN_10af3c704(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af3c728; end: 10af3c79b; -[SCSocialSmsMediaLinkPayload hash] */

undefined8 * FUN_10af3c728(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10af3c81c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10af3c828;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10af3c828;
        }
        goto LAB_10af3c81c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10af3c828:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10af3c79c; end: 10af3c843; -[SCSocialSmsMediaLinkPayload isEqual:] */

long FUN_10af3c79c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af3c81c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af3c828;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10af3c828;
        }
        goto LAB_10af3c81c;
      }
    }
    lVar3 = 0;
  }
LAB_10af3c828:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af3c844; end: 10af3c84b; -[SCSocialSmsMediaLinkPayload thumbnailDownloadURL] */

undefined8 FUN_10af3c844(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af3c84c; end: 10af3c853; -[SCSocialSmsMediaLinkPayload mediaArray] */

undefined8 FUN_10af3c84c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af3c854; end: 10af3c883; -[SCSocialSmsMediaLinkPayload .cxx_destruct] */

void FUN_10af3c854(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af3c884; end: 10af3c8fb; -[SCSocialSmsGetLinkDataRequest initWithLink:] */

undefined1 * FUN_10af3c884(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112702a20;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af3c8fc; end: 10af3c91f; -[SCSocialSmsGetLinkDataRequest copyWithZone:] */

undefined8 FUN_10af3c8fc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af3c920; end: 10af3c927; -[SCSocialSmsGetLinkDataRequest hash] */

void FUN_10af3c920(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10af3c928; end: 10af3c9b7; -[SCSocialSmsGetLinkDataRequest isEqual:] */

long FUN_10af3c928(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af3c99c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10af3c99c;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10af3c99c;
    }
  }
  lVar3 = 1;
LAB_10af3c99c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af3c9b8; end: 10af3c9bf; -[SCSocialSmsGetLinkDataRequest link] */

undefined8 FUN_10af3c9b8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af3c9c0; end: 10af3c9cb; -[SCSocialSmsGetLinkDataRequest .cxx_destruct] */

void FUN_10af3c9c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af3c9cc; end: 10af3cad7; -[SCSocialSmsGetLinkDataResponse initWithLinkId:userId:error:mediaLinkPayload:] */

undefined1 *
FUN_10af3c9cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112702a28;
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af3cad8; end: 10af3cafb; -[SCSocialSmsGetLinkDataResponse copyWithZone:] */

undefined8 FUN_10af3cad8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af3cafc; end: 10af3cb87; -[SCSocialSmsGetLinkDataResponse hash] */

undefined8 * FUN_10af3cafc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
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
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10af3cc38:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10af3cc44;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[4];
            if (puVar6 != (undefined8 *)param_3[4]) {
              func_0x00010c071ae0();
              goto LAB_10af3cc44;
            }
            goto LAB_10af3cc38;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10af3cc44:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10af3cb88; end: 10af3cc5f; -[SCSocialSmsGetLinkDataResponse isEqual:] */

long FUN_10af3cb88(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af3cc38:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af3cc44;
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
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_10af3cc44;
            }
            goto LAB_10af3cc38;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10af3cc44:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af3cc60; end: 10af3cc67; -[SCSocialSmsGetLinkDataResponse linkId] */

undefined8 FUN_10af3cc60(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af3cc68; end: 10af3cc6f; -[SCSocialSmsGetLinkDataResponse userId] */

undefined8 FUN_10af3cc68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af3cc70; end: 10af3cc77; -[SCSocialSmsGetLinkDataResponse error] */

undefined8 FUN_10af3cc70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af3cc78; end: 10af3cc7f; -[SCSocialSmsGetLinkDataResponse mediaLinkPayload] */

undefined8 FUN_10af3cc78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af3cc80; end: 10af3ccc7; -[SCSocialSmsGetLinkDataResponse .cxx_destruct] */

void FUN_10af3cc80(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af3ccc8; end: 10af3cd73; -[SCSocialSmsUpdateLinkRequest initWithLinkId:mediaUpdatesArray:] */

undefined1 *
FUN_10af3ccc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112702a30;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af3cd74; end: 10af3cd97; -[SCSocialSmsUpdateLinkRequest copyWithZone:] */

undefined8 FUN_10af3cd74(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af3cd98; end: 10af3ce0b; -[SCSocialSmsUpdateLinkRequest hash] */

undefined8 * FUN_10af3cd98(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10af3ce8c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10af3ce98;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10af3ce98;
        }
        goto LAB_10af3ce8c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10af3ce98:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10af3ce0c; end: 10af3ceb3; -[SCSocialSmsUpdateLinkRequest isEqual:] */

long FUN_10af3ce0c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af3ce8c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af3ce98;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10af3ce98;
        }
        goto LAB_10af3ce8c;
      }
    }
    lVar3 = 0;
  }
LAB_10af3ce98:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af3ceb4; end: 10af3cebb; -[SCSocialSmsUpdateLinkRequest linkId] */

undefined8 FUN_10af3ceb4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af3cebc; end: 10af3cec3; -[SCSocialSmsUpdateLinkRequest mediaUpdatesArray] */

undefined8 FUN_10af3cebc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af3cec4; end: 10af3cef3; -[SCSocialSmsUpdateLinkRequest .cxx_destruct] */

void FUN_10af3cec4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af3cef4; end: 10af3cf7b; -[SCSocialLinkMediaUpdate initWithMediaIndex:media:] */

undefined1 *
FUN_10af3cef4(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112702a38;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10af3cf7c; end: 10af3cf9f; -[SCSocialLinkMediaUpdate copyWithZone:] */

undefined8 FUN_10af3cf7c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af3cfa0; end: 10af3d003; -[SCSocialLinkMediaUpdate hash] */

long * FUN_10af3cfa0(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_28 = (long)*(int *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  plVar2 = &lStack_28;
  uStack_20 = uVar1;
  func_0x000107c3191c(plVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar2 != param_3) {
    plVar4 = (long *)0x0;
    if ((plVar2 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_10af3d088;
    plVar4 = plVar2;
    _objc_opt_class(plVar2);
    plVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar4);
    if ((((ulong)plVar3 & 1) == 0) || ((int)plVar2[1] != (int)param_3[1])) {
      plVar4 = (long *)0x0;
      goto LAB_10af3d088;
    }
    plVar4 = (long *)plVar2[2];
    if (plVar4 != (long *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10af3d088;
    }
  }
  plVar4 = (long *)0x1;
LAB_10af3d088:
  _objc_release(param_3);
  return plVar4;
}



/* Entry: 10af3d004; end: 10af3d0a3; -[SCSocialLinkMediaUpdate isEqual:] */

long FUN_10af3d004(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af3d088;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(int *)(param_1 + 8) != *(int *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10af3d088;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10af3d088;
    }
  }
  lVar3 = 1;
LAB_10af3d088:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af3d0a4; end: 10af3d0ab; -[SCSocialLinkMediaUpdate mediaIndex] */

undefined4 FUN_10af3d0a4(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10af3d0ac; end: 10af3d0b3; -[SCSocialLinkMediaUpdate media] */

undefined8 FUN_10af3d0ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af3d0b4; end: 10af3d0bf; -[SCSocialLinkMediaUpdate .cxx_destruct] */

void FUN_10af3d0b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10af3d0c0; end: 10af3d133; -[SCLegacySafeBrowsingServices initWithSafeBrowsingAPI:] */

undefined1 * FUN_10af3d0c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112702a40;
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



/* Entry: 10af3d134; end: 10af3d13b; -[SCLegacySafeBrowsingServices safeBrowsingAPI] */

undefined8 FUN_10af3d134(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af3d13c; end: 10af3d147; -[SCLegacySafeBrowsingServices .cxx_destruct] */

void FUN_10af3d13c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af3d148; end: 10af3d153; -[SCSpectaclesImageProcessServices .cxx_destruct] */

void FUN_10af3d148(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af3d154; end: 10af3d15b; -[SCStoriesBlizzardLoggingServices topicsLogger] */

undefined8 FUN_10af3d154(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af3d15c; end: 10af3d18b; -[SCStoriesBlizzardLoggingServices .cxx_destruct] */

void FUN_10af3d15c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af3d18c; end: 10af3d277; -[SCStoriesPlaybackLoggingInfo initWithStorySessionId:mapSessionId:mapViewportSessionId:placeSessionId:sourceType:mapSourceType:mapStoryType:discoverFeedPageSessionId:mapPlaceComponentType:] */

undefined1 *
FUN_10af3d18c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_112702a58;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  return (undefined1 *)puVar1;
}



/* Entry: 10af3d278; end: 10af3d29b; -[SCStoriesPlaybackLoggingInfo copyWithZone:] */

undefined8 FUN_10af3d278(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af3d29c; end: 10af3d33b; -[SCStoriesPlaybackLoggingInfo hash] */

undefined8 * FUN_10af3d29c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_70;
  long lStack_68;
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
  uStack_58 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uStack_50 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  uStack_70 = *(undefined8 *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x10);
  lStack_68 = -lVar5;
  if (-1 < lVar5) {
    lStack_68 = lVar5;
  }
  uStack_60 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x30));
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x38));
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10af3d42c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10af3d438;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((((ulong)puVar4 & 1) != 0) &&
         ((((*(long *)((long)puVar3 + 8) == *(long *)(param_3 + 8) &&
            (*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10))) &&
           (*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18))) &&
          ((*(long *)((long)puVar3 + 0x20) == *(long *)(param_3 + 0x20) &&
           (*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28))))))) &&
        (*(long *)((long)puVar3 + 0x30) == *(long *)(param_3 + 0x30))) &&
       (*(long *)((long)puVar3 + 0x38) == *(long *)(param_3 + 0x38))) {
      lVar5 = *(long *)((long)puVar3 + 0x40);
      if ((lVar5 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x48);
        if (puVar6 != *(undefined1 **)(param_3 + 0x48)) {
          func_0x00010c071ae0();
          goto LAB_10af3d438;
        }
        goto LAB_10af3d42c;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10af3d438:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10af3d33c; end: 10af3d453; -[SCStoriesPlaybackLoggingInfo isEqual:] */

long FUN_10af3d33c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af3d42c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af3d438;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
            (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) &&
           (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) &&
          ((*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
           (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))))) &&
        (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) &&
       (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))) {
      lVar3 = *(long *)(param_1 + 0x40);
      if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x48);
        if (lVar3 != *(long *)(param_3 + 0x48)) {
          func_0x00010c071ae0();
          goto LAB_10af3d438;
        }
        goto LAB_10af3d42c;
      }
    }
    lVar3 = 0;
  }
LAB_10af3d438:
  _objc_release(param_3);
  return lVar3;
}


