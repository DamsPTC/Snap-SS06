/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106b7ce04; end: 106b7ce27; -[SCLoginErrorDetail copyWithZone:] */

undefined8 FUN_106b7ce04(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106b7ce28; end: 106b7cf6b; -[SCLoginErrorDetail hash] */

void FUN_106b7ce28(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_f8 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_e8 = (ulong)*(byte *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_f0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_e0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_d8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_d0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_c8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_c0 = uVar1;
  func_0x00010bfde980();
  uStack_b0 = (ulong)*(byte *)(param_1 + 0x50);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uStack_b8 = uVar2;
  func_0x00010bfde980();
  uStack_a0 = (ulong)*(byte *)(param_1 + 0x60);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uStack_a8 = uVar1;
  func_0x00010bfde980();
  uStack_90 = (ulong)*(byte *)(param_1 + 0x70);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  uStack_98 = uVar2;
  func_0x00010bfde980();
  uStack_80 = (ulong)*(byte *)(param_1 + 0x80);
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  uStack_88 = uVar1;
  func_0x00010bfde980();
  uStack_70 = (ulong)*(byte *)(param_1 + 0x90);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uStack_60 = (ulong)*(byte *)(param_1 + 0xa0);
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uStack_50 = (ulong)*(byte *)(param_1 + 0xb0);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 200);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 0xd0);
  puVar3 = &uStack_f8;
  uStack_38 = uVar1;
  func_0x000100505190(puVar3,0x1a);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_128 = PTR_PTR_1126f5350;
  puStack_130 = puVar3;
  _objc_msgSendSuper2(&puStack_130,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b7cf6c; end: 106b7cfaf; -[SCLoginErrorDetail internalInit] */

void FUN_106b7cf6c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f5350;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b7cfb0; end: 106b7d247; -[SCLoginErrorDetail isEqual:] */

long FUN_106b7cfb0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106b7d220:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106b7d22c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
            (*(char *)(param_1 + 0x18) == *(char *)(param_3 + 0x18))) &&
           (*(char *)(param_1 + 0x50) == *(char *)(param_3 + 0x50))) &&
          ((*(char *)(param_1 + 0x60) == *(char *)(param_3 + 0x60) &&
           (*(char *)(param_1 + 0x70) == *(char *)(param_3 + 0x70))))))) &&
        (*(char *)(param_1 + 0x80) == *(char *)(param_3 + 0x80))) &&
       (((*(char *)(param_1 + 0x90) == *(char *)(param_3 + 0x90) &&
         (*(char *)(param_1 + 0xa0) == *(char *)(param_3 + 0xa0))) &&
        ((*(char *)(param_1 + 0xb0) == *(char *)(param_3 + 0xb0) &&
         (*(char *)(param_1 + 0xd0) == *(char *)(param_3 + 0xd0))))))) {
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
                if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x48);
                  if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x58);
                    if ((lVar3 == *(long *)(param_3 + 0x58)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x68);
                      if ((lVar3 == *(long *)(param_3 + 0x68)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x78);
                        if ((lVar3 == *(long *)(param_3 + 0x78)) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + 0x88);
                          if ((lVar3 == *(long *)(param_3 + 0x88)) ||
                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                            lVar3 = *(long *)(param_1 + 0x98);
                            if ((lVar3 == *(long *)(param_3 + 0x98)) ||
                               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                              lVar3 = *(long *)(param_1 + 0xa8);
                              if ((lVar3 == *(long *)(param_3 + 0xa8)) ||
                                 (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                lVar3 = *(long *)(param_1 + 0xb8);
                                if ((lVar3 == *(long *)(param_3 + 0xb8)) ||
                                   (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                  lVar3 = *(long *)(param_1 + 0xc0);
                                  if ((lVar3 == *(long *)(param_3 + 0xc0)) ||
                                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                    lVar3 = *(long *)(param_1 + 200);
                                    if (lVar3 != *(long *)(param_3 + 200)) {
                                      func_0x00010c071ae0();
                                      goto LAB_106b7d22c;
                                    }
                                    goto LAB_106b7d220;
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
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106b7d22c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106b7d248; end: 106b7d52b; -[SCLoginErrorDetail matchCredentialsMismatchError:credentialsMismatchNeedsMagicCode:invalidODLVPreAuthTokenError:connectionError:timeoutError:usernameNotFound:emailNotFound:phoneWrongFormat:phoneNotFound:invalidPasswordByUsernameOrEmail:invalidPasswordByPhone:accountLockedError:unretryableError:generalError:] */

void FUN_106b7d248(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,long param_10,long param_11,
                  long param_12,long param_13,long param_14,long param_15,long param_16)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  code *pcVar4;
  
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
  _objc_retain(param_16);
  switch(*(undefined8 *)(param_1 + 8)) {
  case 0:
    if (param_3 == 0) goto LAB_106b7d4a0;
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined1 *)(param_1 + 0x18);
    lVar1 = param_3;
    goto code_r0x000106b7d450;
  case 1:
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
    }
    goto LAB_106b7d4a0;
  case 2:
    if (param_5 == 0) goto LAB_106b7d4a0;
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    pcVar4 = *(code **)(param_5 + 0x10);
    lVar1 = param_5;
    goto code_r0x000106b7d3e8;
  case 3:
    if (param_6 == 0) goto LAB_106b7d4a0;
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    pcVar4 = *(code **)(param_6 + 0x10);
    lVar1 = param_6;
    goto code_r0x000106b7d3e8;
  case 4:
    if (param_7 == 0) goto LAB_106b7d4a0;
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    pcVar4 = *(code **)(param_7 + 0x10);
    lVar1 = param_7;
    goto code_r0x000106b7d3e8;
  case 5:
    if (param_8 == 0) goto LAB_106b7d4a0;
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    uVar3 = *(undefined1 *)(param_1 + 0x50);
    pcVar4 = *(code **)(param_8 + 0x10);
    lVar1 = param_8;
    break;
  case 6:
    if (param_9 == 0) goto LAB_106b7d4a0;
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    uVar3 = *(undefined1 *)(param_1 + 0x60);
    pcVar4 = *(code **)(param_9 + 0x10);
    lVar1 = param_9;
    break;
  case 7:
    if (param_10 == 0) goto LAB_106b7d4a0;
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    uVar3 = *(undefined1 *)(param_1 + 0x70);
    pcVar4 = *(code **)(param_10 + 0x10);
    lVar1 = param_10;
    break;
  case 8:
    if (param_11 == 0) goto LAB_106b7d4a0;
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    uVar3 = *(undefined1 *)(param_1 + 0x80);
    pcVar4 = *(code **)(param_11 + 0x10);
    lVar1 = param_11;
    break;
  case 9:
    if (param_12 == 0) goto LAB_106b7d4a0;
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    uVar3 = *(undefined1 *)(param_1 + 0x90);
    pcVar4 = *(code **)(param_12 + 0x10);
    lVar1 = param_12;
    break;
  case 10:
    if (param_13 == 0) goto LAB_106b7d4a0;
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    uVar3 = *(undefined1 *)(param_1 + 0xa0);
    pcVar4 = *(code **)(param_13 + 0x10);
    lVar1 = param_13;
    break;
  case 0xb:
    if (param_14 != 0) {
      (**(code **)(param_14 + 0x10))
                (param_14,*(undefined8 *)(param_1 + 0xa8),*(undefined1 *)(param_1 + 0xb0),
                 *(undefined8 *)(param_1 + 0xb8));
    }
    goto LAB_106b7d4a0;
  case 0xc:
    if (param_15 == 0) goto LAB_106b7d4a0;
    uVar2 = *(undefined8 *)(param_1 + 0xc0);
    pcVar4 = *(code **)(param_15 + 0x10);
    lVar1 = param_15;
code_r0x000106b7d3e8:
    (*pcVar4)(lVar1,uVar2);
    goto LAB_106b7d4a0;
  case 0xd:
    if (param_16 == 0) goto LAB_106b7d4a0;
    uVar2 = *(undefined8 *)(param_1 + 200);
    uVar3 = *(undefined1 *)(param_1 + 0xd0);
    lVar1 = param_16;
code_r0x000106b7d450:
    pcVar4 = *(code **)(lVar1 + 0x10);
    break;
  default:
    goto LAB_106b7d4a0;
  }
  (*pcVar4)(lVar1,uVar2,uVar3);
LAB_106b7d4a0:
  _objc_release(param_16);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b7d52c; end: 106b7d603; -[SCLoginErrorDetail .cxx_destruct] */

void FUN_106b7d52c(long param_1)

{
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 106b7d604; end: 106b7d68b; -[SCLoginOdlvSolution initWithOtpType:confirmationCode:] */

undefined1 *
FUN_106b7d604(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f5358;
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



/* Entry: 106b7d68c; end: 106b7d6af; -[SCLoginOdlvSolution copyWithZone:] */

undefined8 FUN_106b7d68c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106b7d6b0; end: 106b7d70f; -[SCLoginOdlvSolution hash] */

undefined8 * FUN_106b7d6b0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
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
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106b7d794;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[1] != param_3[1])) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_106b7d794;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_106b7d794;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_106b7d794:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 106b7d710; end: 106b7d7af; -[SCLoginOdlvSolution isEqual:] */

long FUN_106b7d710(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106b7d794;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_106b7d794;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_106b7d794;
    }
  }
  lVar3 = 1;
LAB_106b7d794:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106b7d7b0; end: 106b7d7b7; -[SCLoginOdlvSolution otpType] */

undefined8 FUN_106b7d7b0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106b7d7b8; end: 106b7d7bf; -[SCLoginOdlvSolution confirmationCode] */

undefined8 FUN_106b7d7b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106b7d7c0; end: 106b7d7cb; -[SCLoginOdlvSolution .cxx_destruct] */

void FUN_106b7d7c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106b7d7cc; end: 106b7d817; +[SCLoginPasswordSource accountRecovery] */

void FUN_106b7d7cc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af230;
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



/* Entry: 106b7d818; end: 106b7d863; +[SCLoginPasswordSource phoneEmailFirstNoPassword] */

void FUN_106b7d818(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af230;
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



/* Entry: 106b7d864; end: 106b7d8c7; +[SCLoginPasswordSource usernamePasswordPageWithPassword:] */

void FUN_106b7d864(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af230;
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



/* Entry: 106b7d8c8; end: 106b7d8eb; -[SCLoginPasswordSource copyWithZone:] */

undefined8 FUN_106b7d8c8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106b7d8ec; end: 106b7d94b; -[SCLoginPasswordSource hash] */

void FUN_106b7d8ec(long param_1)

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
  puStack_58 = PTR_PTR_1126f5360;
  puStack_60 = puVar2;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b7d94c; end: 106b7d98f; -[SCLoginPasswordSource internalInit] */

void FUN_106b7d94c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f5360;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b7d990; end: 106b7da2f; -[SCLoginPasswordSource isEqual:] */

long FUN_106b7d990(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106b7da14;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_106b7da14;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_106b7da14;
    }
  }
  lVar3 = 1;
LAB_106b7da14:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106b7da30; end: 106b7dadb; -[SCLoginPasswordSource matchUsernamePasswordPage:accountRecovery:phoneEmailFirstNoPassword:] */

void FUN_106b7da30(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  code *pcVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 == 0) goto LAB_106b7dab8;
    pcVar2 = *(code **)(param_5 + 0x10);
    lVar1 = param_5;
  }
  else {
    if (lVar1 != 1) {
      if ((lVar1 == 0) && (param_3 != 0)) {
        (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x10));
      }
      goto LAB_106b7dab8;
    }
    if (param_4 == 0) goto LAB_106b7dab8;
    pcVar2 = *(code **)(param_4 + 0x10);
    lVar1 = param_4;
  }
  (*pcVar2)(lVar1);
LAB_106b7dab8:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b7dadc; end: 106b7dae7; -[SCLoginPasswordSource .cxx_destruct] */

void FUN_106b7dadc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106b7dae8; end: 106b7dbd3; -[SCLoginSuccess initWithResult:bootstrapData:fideliusTempIdentity:grpcStatusCode:protoStatusCode:] */

undefined1 *
FUN_106b7dae8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  puStack_48 = PTR_PTR_1126f5368;
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
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b7dbd4; end: 106b7dbf7; -[SCLoginSuccess copyWithZone:] */

undefined8 FUN_106b7dbd4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106b7dbf8; end: 106b7dc83; -[SCLoginSuccess hash] */

undefined8 * FUN_106b7dbf8(long param_1,undefined8 param_2,undefined1 *param_3)

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
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  uStack_40 = uVar1;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_106b7dd3c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106b7dd48;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(long *)((long)puVar3 + 0x20) == *(long *)(param_3 + 0x20) &&
        (*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_106b7dd48;
          }
          goto LAB_106b7dd3c;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106b7dd48:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106b7dc84; end: 106b7dd63; -[SCLoginSuccess isEqual:] */

long FUN_106b7dc84(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106b7dd3c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106b7dd48;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
        (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_106b7dd48;
          }
          goto LAB_106b7dd3c;
        }
      }
    }
    lVar3 = 0;
  }
LAB_106b7dd48:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106b7dd64; end: 106b7dd6b; -[SCLoginSuccess result] */

undefined8 FUN_106b7dd64(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106b7dd6c; end: 106b7dd73; -[SCLoginSuccess bootstrapData] */

undefined8 FUN_106b7dd6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106b7dd74; end: 106b7dd7b; -[SCLoginSuccess fideliusTempIdentity] */

undefined8 FUN_106b7dd74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106b7dd7c; end: 106b7dd83; -[SCLoginSuccess grpcStatusCode] */

undefined8 FUN_106b7dd7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106b7dd84; end: 106b7dd8b; -[SCLoginSuccess protoStatusCode] */

undefined8 FUN_106b7dd84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106b7dd8c; end: 106b7ddc7; -[SCLoginSuccess .cxx_destruct] */

void FUN_106b7dd8c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b7ddc8; end: 106b7de4f; -[SCLoginOdlvAuthRequestError initWithErrorCode:message:] */

undefined1 *
FUN_106b7ddc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f5370;
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



/* Entry: 106b7de50; end: 106b7de73; -[SCLoginOdlvAuthRequestError copyWithZone:] */

undefined8 FUN_106b7de50(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106b7de74; end: 106b7dedb; -[SCLoginOdlvAuthRequestError hash] */

long * FUN_106b7de74(long param_1,undefined8 param_2,long *param_3)

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
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_106b7df60;
    plVar5 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar5);
    if ((((ulong)plVar4 & 1) == 0) || (plVar3[1] != param_3[1])) {
      plVar5 = (long *)0x0;
      goto LAB_106b7df60;
    }
    plVar5 = (long *)plVar3[2];
    if (plVar5 != (long *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_106b7df60;
    }
  }
  plVar5 = (long *)0x1;
LAB_106b7df60:
  _objc_release(param_3);
  return plVar5;
}



/* Entry: 106b7dedc; end: 106b7df7b; -[SCLoginOdlvAuthRequestError isEqual:] */

long FUN_106b7dedc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106b7df60;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_106b7df60;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_106b7df60;
    }
  }
  lVar3 = 1;
LAB_106b7df60:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106b7df7c; end: 106b7df83; -[SCLoginOdlvAuthRequestError errorCode] */

undefined8 FUN_106b7df7c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106b7df84; end: 106b7df8b; -[SCLoginOdlvAuthRequestError message] */

undefined8 FUN_106b7df84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106b7df8c; end: 106b7df97; -[SCLoginOdlvAuthRequestError .cxx_destruct] */

void FUN_106b7df8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106b7df98; end: 106b7e013;  */

undefined * FUN_106b7df98(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c6a60 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e75d18,
                        &UNK_10dde68e0,&UNK_10dde69cc,0xe,FUN_106b7e014,0);
    do {
      if (puRam00000001136c6a60 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c6a60;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c6a60,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c6a60 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c6a60;
}



/* Entry: 106b7e014; end: 106b7e02b;  */

uint FUN_106b7e014(uint param_1)

{
  return (uint)(param_1 < 0xf) & 0x7effU >> (ulong)(param_1 & 0x1f);
}



/* Entry: 106b7e02c; end: 106b7e093; +[SCJanusAppLoginRequest descriptor] */

void FUN_106b7e02c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6a68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b1a750,
                        &PTR____CFConstantStringClassReference_110e75d38,
                        &PTR_s_snapchat_janus_api_1131739a8,&PTR_s_loginContext_113173b00,10,0x50,
                        0x1c);
    puRam00000001136c6a68 = puVar1;
  }
  return;
}



/* Entry: 106b7e094; end: 106b7e11f; +[SCJanusAppLoginResponse descriptor] */

undefined * FUN_106b7e094(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6a70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b1a7a0,
                        &PTR____CFConstantStringClassReference_110e75d58,
                        &PTR_s_snapchat_janus_api_1131739a8,&PTR_s_statusCode_1131739e0,9,0x50,0x1c)
    ;
    func_0x00010c229040();
    puRam00000001136c6a70 = puVar1;
  }
  return puRam00000001136c6a70;
}



/* Entry: 106b7e120; end: 106b7e157;  */

undefined * FUN_106b7e120(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126b8bc0;
  func_0x00010bf6e760();
  func_0x00010bfac8c0();
  lVar3 = *(long *)(puVar2 + 8);
  uVar1 = *(uint *)(lVar3 + 0x14);
  if ((int)uVar1 < 0) {
    lVar4 = *(long *)(param_1 + 0x40);
    if (*(int *)(lVar4 + (ulong)-uVar1 * 4) != *(int *)(lVar3 + 0x10)) goto code_r0x0001001115e8;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x40);
    if ((*(uint *)(lVar4 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
code_r0x0001001115e8:
      func_0x000107c4163c(puVar2);
      return puVar2;
    }
  }
  return (undefined *)(ulong)*(uint *)(lVar4 + (ulong)*(uint *)(lVar3 + 0x18));
}



/* Entry: 106b7e158; end: 106b7e1bf; +[SCJanusLoginOptionsData descriptor] */

void FUN_106b7e158(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6a78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b1a7f0,
                        &PTR____CFConstantStringClassReference_110e75d78,
                        &PTR_s_snapchat_janus_api_1131739a8,
                        &PTR_s_passkeyAuthenticationOptions_1131739c0,1,0x10,0x1c);
    puRam00000001136c6a78 = puVar1;
  }
  return;
}



/* Entry: 106b7e1c0; end: 106b7e24b; +[SCJanusLoginIdentifier descriptor] */

undefined * FUN_106b7e1c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6a80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b1a890,
                        &PTR____CFConstantStringClassReference_110e75d98,
                        &PTR_s_snapchat_janus_api_113173c48,&PTR_s_username_113173c60,10,0x58,0x1c);
    func_0x00010c229040();
    puRam00000001136c6a80 = puVar1;
  }
  return puRam00000001136c6a80;
}



/* Entry: 106b7e24c; end: 106b7e2b3; +[SCJanusGoogleIdentifier descriptor] */

void FUN_106b7e24c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6a88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b1a930,
                        &PTR____CFConstantStringClassReference_110e75db8,
                        &PTR_s_snapchat_janus_api_113173da8,&PTR_s_idToken_113173de0,2,0x18,0x1c);
    puRam00000001136c6a88 = puVar1;
  }
  return;
}



/* Entry: 106b7e2b4; end: 106b7e31b; +[SCJanusAppleIdentifier descriptor] */

void FUN_106b7e2b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6a90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b1a980,
                        &PTR____CFConstantStringClassReference_110e75dd8,
                        &PTR_s_snapchat_janus_api_113173da8,&PTR_s_idToken_113173e20,2,0x18,0x1c);
    puRam00000001136c6a90 = puVar1;
  }
  return;
}



/* Entry: 106b7e31c; end: 106b7e383; +[SCJanusPasskeyIdentifier descriptor] */

void FUN_106b7e31c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6a98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b1a9d0,
                        &PTR____CFConstantStringClassReference_110e75df8,
                        &PTR_s_snapchat_janus_api_113173da8,&PTR_s_userId_113173e60,2,0x18,0x1c);
    puRam00000001136c6a98 = puVar1;
  }
  return;
}



/* Entry: 106b7e384; end: 106b7e3eb; +[SCJanusPhoneIdentifier descriptor] */

void FUN_106b7e384(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6aa0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b1aa20,
                        &PTR____CFConstantStringClassReference_110e75e18,
                        &PTR_s_snapchat_janus_api_113173da8,&PTR_s_phoneNumberCountryCode_113173ea0,
                        2,0x18,0x1c);
    puRam00000001136c6aa0 = puVar1;
  }
  return;
}



/* Entry: 106b7e3ec; end: 106b7e477; +[SCJanusAccountRecoveryChangePasswordIdentifier descriptor] */

undefined * FUN_106b7e3ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6aa8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b1aa70,
                        &PTR____CFConstantStringClassReference_110e75e38,
                        &PTR_s_snapchat_janus_api_113173da8,&PTR_s_email_113173ee0,4,0x28,0x1c);
    func_0x00010c229040();
    puRam00000001136c6aa8 = puVar1;
  }
  return puRam00000001136c6aa8;
}



/* Entry: 106b7e478; end: 106b7e55b; +[SCJanusOneTapLoginIdentifier descriptor] */

void FUN_106b7e478(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6ab0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b1aac0,
                        &PTR____CFConstantStringClassReference_110e75e58,
                        &PTR_s_snapchat_janus_api_113173da8,&PTR_DAT_113173dc0,1,0x10,0x1c);
    puRam00000001136c6ab0 = puVar1;
  }
  return;
}



/* Entry: 106b7e55c; end: 106b7e567;  */

bool FUN_106b7e55c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 106b7e568; end: 106b7e5e3;  */

undefined * FUN_106b7e568(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c6ac0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e75e98,
                        &UNK_10dde6a70,&UNK_10dde6b20,10,FUN_106b7e5e4,0);
    do {
      if (puRam00000001136c6ac0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c6ac0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c6ac0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c6ac0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c6ac0;
}



/* Entry: 106b7e5e4; end: 106b7e5ff;  */

uint FUN_106b7e5e4(uint param_1)

{
  return (uint)(param_1 < 0x11) & 0x1fc07U >> (ulong)(param_1 & 0x1f);
}



/* Entry: 106b7e600; end: 106b7e67b;  */

undefined * FUN_106b7e600(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c6ac8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e75eb8,
                        &UNK_10dde6b48,&UNK_10dde6be8,10,FUN_106b7e67c,0);
    do {
      if (puRam00000001136c6ac8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c6ac8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c6ac8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c6ac8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c6ac8;
}



/* Entry: 106b7e67c; end: 106b7e693;  */

uint FUN_106b7e67c(uint param_1)

{
  return (uint)(param_1 < 0x10) & 0xfc0fU >> (ulong)(param_1 & 0x1f);
}



/* Entry: 106b7e694; end: 106b7e6fb; +[SCJanusSendLoginCodeData descriptor] */

void FUN_106b7e694(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6ad0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b1ab60,
                        &PTR____CFConstantStringClassReference_110e75ed8,
                        &PTR_s_snapchat_janus_api_113173f80,0,0,4,0x1c);
    puRam00000001136c6ad0 = puVar1;
  }
  return;
}



/* Entry: 106b7e6fc; end: 106b7e787; +[SCJanusSendLoginCodeRequest descriptor] */

undefined * FUN_106b7e6fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6ad8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b1abb0,
                        &PTR____CFConstantStringClassReference_110e75ef8,
                        &PTR_s_snapchat_janus_api_113173f80,&PTR_s_username_1131740b8,8,0x38,0x1c);
    func_0x00010c229040();
    puRam00000001136c6ad8 = puVar1;
  }
  return puRam00000001136c6ad8;
}



/* Entry: 106b7e788; end: 106b7e813; +[SCJanusSendLoginCodeResponse descriptor] */

undefined * FUN_106b7e788(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6ae0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b1ac00,
                        &PTR____CFConstantStringClassReference_110e75f18,
                        &PTR_s_snapchat_janus_api_113173f80,&PTR_s_statusCode_113173f98,4,0x28,0x1c)
    ;
    func_0x00010c229040();
    puRam00000001136c6ae0 = puVar1;
  }
  return puRam00000001136c6ae0;
}



/* Entry: 106b7e814; end: 106b7e84b;  */

undefined * FUN_106b7e814(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126b8be8;
  func_0x00010bf6e760();
  func_0x00010bfac8c0();
  lVar3 = *(long *)(puVar2 + 8);
  uVar1 = *(uint *)(lVar3 + 0x14);
  if ((int)uVar1 < 0) {
    lVar4 = *(long *)(param_1 + 0x40);
    if (*(int *)(lVar4 + (ulong)-uVar1 * 4) != *(int *)(lVar3 + 0x10)) goto code_r0x0001001115e8;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x40);
    if ((*(uint *)(lVar4 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
code_r0x0001001115e8:
      func_0x000107c4163c(puVar2);
      return puVar2;
    }
  }
  return (undefined *)(ulong)*(uint *)(lVar4 + (ulong)*(uint *)(lVar3 + 0x18));
}



/* Entry: 106b7e84c; end: 106b7e8d7; +[SCJanusVerifyLoginCodeRequest descriptor] */

undefined * FUN_106b7e84c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6ae8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b1ac50,
                        &PTR____CFConstantStringClassReference_110e75f38,
                        &PTR_s_snapchat_janus_api_113173f80,&PTR_s_username_1131741b8,10,0x50,0x1c);
    func_0x00010c229040();
    puRam00000001136c6ae8 = puVar1;
  }
  return puRam00000001136c6ae8;
}



/* Entry: 106b7e8d8; end: 106b7e963; +[SCJanusVerifyLoginCodeResponse descriptor] */

undefined * FUN_106b7e8d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6af0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b1aca0,
                        &PTR____CFConstantStringClassReference_110e75f58,
                        &PTR_s_snapchat_janus_api_113173f80,&PTR_s_statusCode_113174018,5,0x30,0x1c)
    ;
    func_0x00010c229040();
    puRam00000001136c6af0 = puVar1;
  }
  return puRam00000001136c6af0;
}



/* Entry: 106b7e964; end: 106b7ea17;  */

undefined * FUN_106b7e964(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126b8c08;
  func_0x00010bf6e760();
  func_0x00010bfac8c0();
  lVar3 = *(long *)(puVar2 + 8);
  uVar1 = *(uint *)(lVar3 + 0x14);
  if ((int)uVar1 < 0) {
    lVar4 = *(long *)(param_1 + 0x40);
    if (*(int *)(lVar4 + (ulong)-uVar1 * 4) != *(int *)(lVar3 + 0x10)) goto code_r0x0001001115e8;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x40);
    if ((*(uint *)(lVar4 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
code_r0x0001001115e8:
      func_0x000107c4163c(puVar2);
      return puVar2;
    }
  }
  return (undefined *)(ulong)*(uint *)(lVar4 + (ulong)*(uint *)(lVar3 + 0x18));
}



/* Entry: 106b7ea18; end: 106b7ea23;  */

bool FUN_106b7ea18(uint param_1)

{
  return param_1 < 0x10;
}



/* Entry: 106b7ea24; end: 106b7ea9f;  */

undefined * FUN_106b7ea24(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c6b00 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e75f98,
                        &UNK_10dde6d90,&UNK_10dde6e84,0xf,FUN_106b7eaa0,0);
    do {
      if (puRam00000001136c6b00 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c6b00;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c6b00,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c6b00 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c6b00;
}



/* Entry: 106b7eaa0; end: 106b7eaab;  */

bool FUN_106b7eaa0(uint param_1)

{
  return param_1 < 0xf;
}



/* Entry: 106b7eaac; end: 106b7eb13; +[SCJanusLoginWith1TLv1Request descriptor] */

void FUN_106b7eaac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6b08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b1ad40,
                        &PTR____CFConstantStringClassReference_110e75fb8,
                        &PTR_s_snapchat_janus_api_113174308,&PTR_s_username_113174320,5,0x30,0x1c);
    puRam00000001136c6b08 = puVar1;
  }
  return;
}



/* Entry: 106b7eb14; end: 106b7eb9f; +[SCJanusLoginWith1TLv1Response descriptor] */

undefined * FUN_106b7eb14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6b10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b1ad90,
                        &PTR____CFConstantStringClassReference_110e75fd8,
                        &PTR_s_snapchat_janus_api_113174308,&PTR_s_statusCode_113174460,9,0x50,0x1c)
    ;
    func_0x00010c229040();
    puRam00000001136c6b10 = puVar1;
  }
  return puRam00000001136c6b10;
}



/* Entry: 106b7eba0; end: 106b7ec1b; +[SCJanusLoginWith1TLv3Request descriptor] */

undefined * FUN_106b7eba0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6b18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b1ade0,
                        &PTR____CFConstantStringClassReference_110e75ff8,
                        &PTR_s_snapchat_janus_api_113174308,&PTR_DAT_1131743c0,5,0x28,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c6b18 = puVar1;
  }
  return puRam00000001136c6b18;
}



/* Entry: 106b7ec1c; end: 106b7eca7; +[SCJanusLoginWith1TLv3Response descriptor] */

undefined * FUN_106b7ec1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6b20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b1ae30,
                        &PTR____CFConstantStringClassReference_110e76018,
                        &PTR_s_snapchat_janus_api_113174308,&PTR_s_statusCode_113174580,0xc,0x68,
                        0x1c);
    func_0x00010c229040();
    puRam00000001136c6b20 = puVar1;
  }
  return puRam00000001136c6b20;
}



/* Entry: 106b7eca8; end: 106b7ed5b;  */

undefined * FUN_106b7eca8(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126b8be0;
  func_0x00010bf6e760();
  func_0x00010bfac8c0();
  lVar3 = *(long *)(puVar2 + 8);
  uVar1 = *(uint *)(lVar3 + 0x14);
  if ((int)uVar1 < 0) {
    lVar4 = *(long *)(param_1 + 0x40);
    if (*(int *)(lVar4 + (ulong)-uVar1 * 4) != *(int *)(lVar3 + 0x10)) goto code_r0x0001001115e8;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x40);
    if ((*(uint *)(lVar4 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
code_r0x0001001115e8:
      func_0x000107c4163c(puVar2);
      return puVar2;
    }
  }
  return (undefined *)(ulong)*(uint *)(lVar4 + (ulong)*(uint *)(lVar3 + 0x18));
}



/* Entry: 106b7ed5c; end: 106b7ed67;  */

bool FUN_106b7ed5c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 106b7ed68; end: 106b7ede3;  */

undefined * FUN_106b7ed68(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c6b30 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e76058,
                        &UNK_10dde6f20,&UNK_10dde7110,0x18,FUN_106b7ede4,0);
    do {
      if (puRam00000001136c6b30 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c6b30;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c6b30,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c6b30 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c6b30;
}



/* Entry: 106b7ede4; end: 106b7edef;  */

bool FUN_106b7ede4(uint param_1)

{
  return param_1 < 0x18;
}



/* Entry: 106b7edf0; end: 106b7ee7b; +[SCJanusLoginWithPasswordRequest descriptor] */

undefined * FUN_106b7edf0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6b38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b1aed0,
                        &PTR____CFConstantStringClassReference_110e76078,
                        &PTR_s_snapchat_janus_api_113174710,&PTR_s_username_113174728,0xb,0x50,0x1c)
    ;
    func_0x00010c229040();
    puRam00000001136c6b38 = puVar1;
  }
  return puRam00000001136c6b38;
}



/* Entry: 106b7ee7c; end: 106b7ef07; +[SCJanusLoginWithPasswordResponse descriptor] */

undefined * FUN_106b7ee7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6b40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b1af20,
                        &PTR____CFConstantStringClassReference_110e76098,
                        &PTR_s_snapchat_janus_api_113174710,&PTR_s_statusCode_113174888,0xe,0x78,
                        0x1c);
    func_0x00010c229040();
    puRam00000001136c6b40 = puVar1;
  }
  return puRam00000001136c6b40;
}



/* Entry: 106b7ef08; end: 106b7efbb;  */

undefined * FUN_106b7ef08(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126b8bd0;
  func_0x00010bf6e760();
  func_0x00010bfac8c0();
  lVar3 = *(long *)(puVar2 + 8);
  uVar1 = *(uint *)(lVar3 + 0x14);
  if ((int)uVar1 < 0) {
    lVar4 = *(long *)(param_1 + 0x40);
    if (*(int *)(lVar4 + (ulong)-uVar1 * 4) != *(int *)(lVar3 + 0x10)) goto code_r0x0001001115e8;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x40);
    if ((*(uint *)(lVar4 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
code_r0x0001001115e8:
      func_0x000107c4163c(puVar2);
      return puVar2;
    }
  }
  return (undefined *)(ulong)*(uint *)(lVar4 + (ulong)*(uint *)(lVar3 + 0x18));
}



/* Entry: 106b7efbc; end: 106b7efd3;  */

uint FUN_106b7efbc(uint param_1)

{
  return (uint)(param_1 < 0xf) & 0x7c07U >> (ulong)(param_1 & 0x1f);
}



/* Entry: 106b7efd4; end: 106b7f03b; +[SCJanusReactivateAccountRequest descriptor] */

void FUN_106b7efd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6b50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b1afc0,
                        &PTR____CFConstantStringClassReference_110e760d8,
                        &PTR_s_snapchat_janus_api_113174a50,&PTR_DAT_113174a68,2,0x18,0x1c);
    puRam00000001136c6b50 = puVar1;
  }
  return;
}



/* Entry: 106b7f03c; end: 106b7f0c7; +[SCJanusReactivateAccountResponse descriptor] */

undefined * FUN_106b7f03c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6b58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b1b010,
                        &PTR____CFConstantStringClassReference_110e760f8,
                        &PTR_s_snapchat_janus_api_113174a50,&PTR_s_statusCode_113174aa8,3,0x20,0x1c)
    ;
    func_0x00010c229040();
    puRam00000001136c6b58 = puVar1;
  }
  return puRam00000001136c6b58;
}



/* Entry: 106b7f0c8; end: 106b7f0ff;  */

undefined * FUN_106b7f0c8(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126b8c28;
  func_0x00010bf6e760();
  func_0x00010bfac8c0();
  lVar3 = *(long *)(puVar2 + 8);
  uVar1 = *(uint *)(lVar3 + 0x14);
  if ((int)uVar1 < 0) {
    lVar4 = *(long *)(param_1 + 0x40);
    if (*(int *)(lVar4 + (ulong)-uVar1 * 4) != *(int *)(lVar3 + 0x10)) goto code_r0x0001001115e8;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x40);
    if ((*(uint *)(lVar4 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
code_r0x0001001115e8:
      func_0x000107c4163c(puVar2);
      return puVar2;
    }
  }
  return (undefined *)(ulong)*(uint *)(lVar4 + (ulong)*(uint *)(lVar3 + 0x18));
}



/* Entry: 106b7f100; end: 106b7f1bb; +[SCEmailValidator validate:] */

bool FUN_106b7f100(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    if (lRam00000001136c6b60 != -1) {
      func_0x00010002a2fc(0x1136c6b60,&PTR___NSConcreteGlobalBlock_110962ef0);
    }
    lVar2 = lRam00000001136c6b68;
    _objc_retain(lRam00000001136c6b68);
    func_0x00010c08fa60(param_3);
    lVar3 = lVar2;
    func_0x00010c11f400(lVar2);
    _objc_release(lVar2);
    bVar1 = lVar3 != 0x7fffffffffffffff;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106b7f1bc; end: 106b7f1c7; -[SCEmailValidator .cxx_destruct] */

void FUN_106b7f1bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b7f1c8; end: 106b7f20b;  */

void FUN_106b7f1c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
  func_0x00010c127e80(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8,param_2,
                      &PTR____CFConstantStringClassReference_110e76118,1,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c6b68;
  puRam00000001136c6b68 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b7f20c; end: 106b7f3c7;  */

void FUN_106b7f20c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  _objc_retain(param_2);
  uVar3 = param_2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 == 0) {
LAB_106b7f280:
    uVar3 = param_2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf1f3c0();
    _objc_release(uVar3);
    if ((uVar4 & 1) != 0) {
      uVar6 = 0;
      goto LAB_106b7f368;
    }
  }
  else {
    uVar3 = param_2;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf1f3c0();
    _objc_release(uVar3);
    if ((int)uVar4 != 0) goto LAB_106b7f280;
  }
  uVar3 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  FUN_106b7f610();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lRam00000001136c6b70;
  _objc_retain(uVar3);
  if (lVar2 != -1) {
    func_0x00010002a2fc(0x1136c6b70,&PTR___NSConcreteGlobalBlock_110962f10);
  }
  uVar6 = uRam00000001136c6b78;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  if (uVar6 != 0) {
    uVar1 = uVar6;
  }
  _objc_retain(uVar1);
  _objc_release(uVar6);
  uVar6 = uVar4;
  if (uVar1 != 0) {
    uVar6 = uVar1;
  }
  _objc_retain(uVar6);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
LAB_106b7f368:
  puVar5 = PTR_PTR_1126d0cc8;
  _objc_alloc(PTR_PTR_1126d0cc8);
  func_0x00010c01f940();
  _objc_release(uVar6);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106b7f3c8; end: 106b7f407;  */

void FUN_106b7f3c8(void)

{
  func_0x00010c252ee0();
  _objc_alloc(PTR_PTR_1126d0cc8);
  func_0x00010c01f940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b7f408; end: 106b7f4e7;  */

void FUN_106b7f408(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d0cd0;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c0e00e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c0e00e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  uVar4 = param_2;
  func_0x00010c0e00e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c04e800(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106b7f4e8; end: 106b7f60f;  */

void FUN_106b7f4e8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000106b7f628();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x000106b7f640();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x000106b7f658();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x000106b7f670();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c6b78;
  puRam00000001136c6b78 = puVar7;
  _objc_release(uVar1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  ppuVar2 = &PTR____CFConstantStringClassReference_110dd8a38;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dd8a38,
                      &PTR____CFConstantStringClassReference_110e76218,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar3 = ppuVar2;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar2);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 106b7f610; end: 106b7f687;  */

void FUN_106b7f610(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd8a38;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dd8a38,
                      &PTR____CFConstantStringClassReference_110e76218,0);
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



/* Entry: 106b7f688; end: 106b7f717; -[SCChangePasswordResponse initWithIsSuccess:isReauthNeeded:errorMessage:] */

undefined1 *
FUN_106b7f688(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f5378;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 106b7f718; end: 106b7f73b; -[SCChangePasswordResponse copyWithZone:] */

undefined8 FUN_106b7f718(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106b7f73c; end: 106b7f7a3; -[SCChangePasswordResponse hash] */

ulong * FUN_106b7f73c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  ulong *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uStack_30;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar2 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_28 = (ulong)*(byte *)(param_1 + 9);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_20 = uVar1;
  func_0x000100505190(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (ulong *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106b7f838;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(char *)((long)puVar2 + 8) != param_3[8] || (*(char *)((long)puVar2 + 9) != param_3[9]))))
    {
      puVar4 = (undefined1 *)0x0;
      goto LAB_106b7f838;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 0x10);
    if (puVar4 != *(undefined1 **)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_106b7f838;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_106b7f838:
  _objc_release(param_3);
  return (ulong *)puVar4;
}



/* Entry: 106b7f7a4; end: 106b7f853; -[SCChangePasswordResponse isEqual:] */

long FUN_106b7f7a4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106b7f838;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
        (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))))) {
      lVar3 = 0;
      goto LAB_106b7f838;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_106b7f838;
    }
  }
  lVar3 = 1;
LAB_106b7f838:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106b7f854; end: 106b7f85b; -[SCChangePasswordResponse isSuccess] */

undefined1 FUN_106b7f854(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106b7f85c; end: 106b7f863; -[SCChangePasswordResponse isReauthNeeded] */

undefined1 FUN_106b7f85c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106b7f864; end: 106b7f86b; -[SCChangePasswordResponse errorMessage] */

undefined8 FUN_106b7f864(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106b7f86c; end: 106b7f877; -[SCChangePasswordResponse .cxx_destruct] */

void FUN_106b7f86c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106b7f878; end: 106b7f92b; -[SCPasswordStrengthResponse initWithStrength:savable:message:] */

undefined1 *
FUN_106b7f878(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f5380;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b7f92c; end: 106b7f94f; -[SCPasswordStrengthResponse copyWithZone:] */

undefined8 FUN_106b7f92c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}


