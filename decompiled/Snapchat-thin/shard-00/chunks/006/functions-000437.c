/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1008ff04c; end: 1008ff057;  */

void FUN_1008ff04c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1008ff058; end: 1008ff173;  */

void FUN_1008ff058(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  undefined1 auStack_98 [56];
  
  FUN_1008ff04c();
  func_0x000107c4c810();
  func_0x000107c4ced4();
  func_0x000107c5cfdc();
  uVar1 = unaff_x19;
  func_0x000107c4c864();
  func_0x000107c61180();
  FUN_10011b600();
  func_0x000107c425fc();
  func_0x000107c4526c();
  func_0x000107c61180();
  FUN_1008ff1a4(auStack_98);
  FUN_1008ff3b4();
  FUN_1008ff428(auStack_98);
  func_0x000107c61170(unaff_x19);
  func_0x000107c61170(uVar1);
  FUN_1008ff378();
  return;
}



/* Entry: 1008ff174; end: 1008ff17b; -[SCNNotificationsRedriveConfig maxAttemptCount] */

undefined8 FUN_1008ff174(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1008ff17c; end: 1008ff183; -[SCNNotificationsRedriveConfig minDelayMs] */

undefined8 FUN_1008ff17c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1008ff184; end: 1008ff18b; -[SCNNotificationsRedriveConfig triggerAfterReceive] */

undefined1 FUN_1008ff184(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1008ff18c; end: 1008ff193; -[SCNNotificationsRedriveConfig maxNotifCountPerRedrive] */

undefined8 FUN_1008ff18c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1008ff194; end: 1008ff19b; -[SCNNotificationsRedriveConfig enableInForeground] */

undefined1 FUN_1008ff194(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 1008ff19c; end: 1008ff1a3; -[SCNNotificationsRedriveConfig inAppReminderConfig] */

undefined8 FUN_1008ff19c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1008ff1a4; end: 1008ff207;  */

void FUN_1008ff1a4(void)

{
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined1 auStack_50 [48];
  
  FUN_1008ff04c();
  if (unaff_x19 == 0) {
    *unaff_x20 = 0;
    unaff_x20[0x30] = 0;
  }
  else {
    FUN_1008ff208(auStack_50);
    FUN_1008ff35c();
    FUN_1000e30f4(auStack_50);
  }
  FUN_1008ff378();
  return;
}



/* Entry: 1008ff208; end: 1008ff2f7;  */

void FUN_1008ff208(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x000107c61174();
  func_0x000107c4d78c(param_2);
  func_0x000107c61180();
  FUN_1000fbed0(&uStack_60);
  uVar2 = param_2;
  func_0x000107c4ced4();
  func_0x000107c4c864();
  func_0x000107c61180();
  uVar3 = param_2;
  FUN_10011b600();
  uVar1 = uStack_50;
  param_1[1] = uStack_58;
  *param_1 = uStack_60;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  param_1[4] = uVar3;
  param_1[5] = param_3 & 0xff;
  func_0x000107c61170(param_2);
  FUN_1000e30f4(&uStack_60);
  func_0x0001008ff310();
  FUN_10088f95c();
  return;
}



/* Entry: 1008ff2f8; end: 1008ff2ff; -[SCNNotificationsInAppReminderConfig notifTypes] */

undefined8 FUN_1008ff2f8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1008ff300; end: 1008ff307; -[SCNNotificationsInAppReminderConfig minDelayMs] */

undefined8 FUN_1008ff300(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1008ff308; end: 1008ff35b; -[SCNNotificationsInAppReminderConfig maxNotifCountPerRedrive] */

undefined8 FUN_1008ff308(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1008ff35c; end: 1008ff377;  */

void FUN_1008ff35c(long param_1)

{
  func_0x0001008ff33c();
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 1008ff378; end: 1008ff38b;  */

void FUN_1008ff378(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1008ff38c; end: 1008ff3b3;  */

void FUN_1008ff38c(long param_1)

{
  func_0x0001008ff380();
  *(undefined1 *)(param_1 + 0x30) = 0;
  FUN_1008ff3f0();
  return;
}



/* Entry: 1008ff3b4; end: 1008ff3ef;  */

undefined8 *
FUN_1008ff3b4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 2) = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  *(undefined1 *)(param_1 + 5) = param_7;
  FUN_1008ff38c(param_1 + 6,param_8);
  return param_1;
}



/* Entry: 1008ff3f0; end: 1008ff403;  */

void FUN_1008ff3f0(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    func_0x0001008ff33c();
    *(undefined1 *)(param_1 + 0x30) = 1;
    return;
  }
  return;
}



/* Entry: 1008ff404; end: 1008ff41f;  */

void FUN_1008ff404(long param_1)

{
  func_0x0001008ff33c();
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 1008ff420; end: 1008ff427;  */

void FUN_1008ff420(void)

{
  return;
}



/* Entry: 1008ff428; end: 1008ff447;  */

void FUN_1008ff428(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_1000e30f4();
  }
  return;
}



/* Entry: 1008ff448; end: 1008ff47b;  */

undefined8 * FUN_1008ff448(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = *(undefined8 *)((long)param_2 + 0x19);
  *(undefined8 *)((long)param_1 + 0x21) = *(undefined8 *)((long)param_2 + 0x21);
  *(undefined8 *)((long)param_1 + 0x19) = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  FUN_1008ff38c(param_1 + 6,param_2 + 6);
  return param_1;
}



/* Entry: 1008ff47c; end: 1008ff497;  */

void FUN_1008ff47c(long param_1)

{
  FUN_1008ff448();
  *(undefined1 *)(param_1 + 0x68) = 1;
  return;
}



/* Entry: 1008ff498; end: 1008ff49f;  */

void FUN_1008ff498(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1008ff4a0; end: 1008ff4a7; -[SCNNotificationsNotificationHandlerParameters tweaks] */

undefined8 FUN_1008ff4a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1008ff4a8; end: 1008ff50b;  */

void FUN_1008ff4a8(void)

{
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined1 auStack_48 [40];
  
  func_0x0001008fefd0();
  if (unaff_x19 == 0) {
    *unaff_x20 = 0;
    unaff_x20[0x28] = 0;
  }
  else {
    FUN_1008ff50c(auStack_48);
    FUN_1008ffff0();
    func_0x0001008fff7c(auStack_48);
  }
  FUN_1008ff498();
  return;
}



/* Entry: 1008ff50c; end: 1008ff56b;  */

void FUN_1008ff50c(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  
  func_0x000107c5d0d0();
  func_0x000107c61180();
  FUN_1008ff574(auStack_48);
  func_0x0001008ff8a0(param_1,auStack_48);
  func_0x0001008fff7c(auStack_48);
  FUN_1008fffe8();
  return;
}



/* Entry: 1008ff56c; end: 1008ff573; -[SCNNotificationsTweaks tweaks] */

undefined8 FUN_1008ff56c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1008ff574; end: 1008ff687;  */

void FUN_1008ff574(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  char *pcStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  float fStack_38;
  
  func_0x000107c61174();
  puStack_80 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x5812000000;
  uStack_70 = 0x1008ff894;
  uStack_68 = 0x1008fff3c;
  pcStack_60 = "";
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  fStack_38 = 1.0;
  uVar1 = param_2;
  func_0x000107c40808(param_2);
  FUN_1008ff688(&uStack_58,(long)((float)uVar1 / fStack_38));
  func_0x000107c429c4(param_2);
  FUN_1008ffbdc(param_1,puStack_80 + 6);
  func_0x0001008fff30();
  func_0x0001008fff7c(&uStack_58);
  FUN_1008fffe8();
  return;
}



/* Entry: 1008ff688; end: 1008ff74f;  */

void FUN_1008ff688(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    func_0x000107c60c44();
  }
  uVar7 = param_1[1];
  if (param_2 <= uVar7) {
    if (param_2 < uVar7) {
      uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
        func_0x000107c60c44();
      }
      else if (1 < uVar4) {
        uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
      }
      if (param_2 <= uVar4) {
        param_2 = uVar4;
      }
      if (param_2 < uVar7) goto LAB_1008ff6d0;
    }
    return;
  }
LAB_1008ff6d0:
  if (param_2 == 0) {
    FUN_1008ff86c(param_1);
    param_1[1] = 0;
  }
  else {
    plVar2 = param_1 + 1;
    FUN_1008ff750(plVar2);
    FUN_1008ff86c(param_1,plVar2);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar7 = 0; param_2 != uVar7; uVar7 = uVar7 + 1) {
      *(undefined8 *)(lVar1 + uVar7 * 8) = 0;
    }
    plVar2 = (long *)param_1[2];
    if (plVar2 != (long *)0x0) {
      uVar5 = plVar2[1];
      uVar4 = param_2 - 1;
      uVar7 = 0;
      if (param_2 != 0) {
        uVar7 = uVar5 / param_2;
      }
      uVar6 = uVar5;
      if (param_2 <= uVar5) {
        uVar6 = uVar5 - uVar7 * param_2;
      }
      if ((param_2 & uVar4) == 0) {
        uVar6 = uVar5 & uVar4;
      }
      *(long **)(lVar1 + uVar6 * 8) = param_1 + 2;
      while (plVar3 = plVar2, plVar2 = (long *)*plVar3, plVar2 != (long *)0x0) {
        uVar7 = plVar2[1];
        if ((param_2 & uVar4) == 0) {
          uVar7 = uVar7 & uVar4;
        }
        else if (param_2 <= uVar7) {
          uVar5 = 0;
          if (param_2 != 0) {
            uVar5 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar5 * param_2;
        }
        if (uVar7 != uVar6) {
          if (*(long *)(lVar1 + uVar7 * 8) == 0) {
            *(long **)(lVar1 + uVar7 * 8) = plVar3;
            uVar6 = uVar7;
          }
          else {
            *plVar3 = *plVar2;
            *plVar2 = **(undefined8 **)(lVar1 + uVar7 * 8);
            **(long **)(lVar1 + uVar7 * 8) = (long)plVar2;
            plVar2 = plVar3;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1008ff750; end: 1008ff76b;  */

void FUN_1008ff750(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 >> 0x3d != 0) {
    func_0x000104bd35f4();
    if (param_2 == 0) {
      FUN_1008ff86c(param_1);
      param_1[1] = 0;
    }
    else {
      plVar3 = param_1 + 1;
      FUN_1008ff750(plVar3);
      FUN_1008ff86c(param_1,plVar3);
      param_1[1] = param_2;
      lVar1 = *param_1;
      for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
        *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
      }
      plVar3 = (long *)param_1[2];
      if (plVar3 != (long *)0x0) {
        uVar6 = plVar3[1];
        uVar5 = param_2 - 1;
        uVar2 = 0;
        if (param_2 != 0) {
          uVar2 = uVar6 / param_2;
        }
        uVar7 = uVar6;
        if (param_2 <= uVar6) {
          uVar7 = uVar6 - uVar2 * param_2;
        }
        if ((param_2 & uVar5) == 0) {
          uVar7 = uVar6 & uVar5;
        }
        *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
        while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
          uVar2 = plVar3[1];
          if ((param_2 & uVar5) == 0) {
            uVar2 = uVar2 & uVar5;
          }
          else if (param_2 <= uVar2) {
            uVar6 = 0;
            if (param_2 != 0) {
              uVar6 = uVar2 / param_2;
            }
            uVar2 = uVar2 - uVar6 * param_2;
          }
          if (uVar2 != uVar7) {
            if (*(long *)(lVar1 + uVar2 * 8) == 0) {
              *(long **)(lVar1 + uVar2 * 8) = plVar4;
              uVar7 = uVar2;
            }
            else {
              *plVar4 = *plVar3;
              *plVar3 = **(undefined8 **)(lVar1 + uVar2 * 8);
              **(long **)(lVar1 + uVar2 * 8) = (long)plVar3;
              plVar3 = plVar4;
            }
          }
        }
      }
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2 << 3);
  return;
}



/* Entry: 1008ff76c; end: 1008ff86b;  */

void FUN_1008ff76c(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_1008ff86c(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_1008ff750(plVar3);
    FUN_1008ff86c(param_1,plVar3);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
      *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar6 = plVar3[1];
      uVar5 = param_2 - 1;
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = uVar6 / param_2;
      }
      uVar7 = uVar6;
      if (param_2 <= uVar6) {
        uVar7 = uVar6 - uVar2 * param_2;
      }
      if ((param_2 & uVar5) == 0) {
        uVar7 = uVar6 & uVar5;
      }
      *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        uVar2 = plVar3[1];
        if ((param_2 & uVar5) == 0) {
          uVar2 = uVar2 & uVar5;
        }
        else if (param_2 <= uVar2) {
          uVar6 = 0;
          if (param_2 != 0) {
            uVar6 = uVar2 / param_2;
          }
          uVar2 = uVar2 - uVar6 * param_2;
        }
        if (uVar2 != uVar7) {
          if (*(long *)(lVar1 + uVar2 * 8) == 0) {
            *(long **)(lVar1 + uVar2 * 8) = plVar4;
            uVar7 = uVar2;
          }
          else {
            *plVar4 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar1 + uVar2 * 8);
            **(long **)(lVar1 + uVar2 * 8) = (long)plVar3;
            plVar3 = plVar4;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1008ff86c; end: 1008ff90f;  */

void FUN_1008ff86c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1008ff910; end: 1008ffb83;  */

void FUN_1008ff910(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong unaff_x23;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  lVar10 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c49820();
  FUN_1008ffb84();
  FUN_1000fbca4(&lStack_70,param_3);
  func_0x000107c61170(param_3);
  iVar7 = (int)param_2;
  uVar9 = (ulong)iVar7;
  uVar8 = *(ulong *)(lVar10 + 0x38);
  if (uVar8 != 0) {
    uVar3 = uVar8 - 1;
    if ((uVar8 & uVar3) == 0) {
      unaff_x23 = uVar3 & uVar9;
    }
    else {
      unaff_x23 = uVar9;
      if (uVar8 <= uVar9) {
        uVar6 = 0;
        if (uVar8 != 0) {
          uVar6 = uVar9 / uVar8;
        }
        unaff_x23 = uVar9 - uVar6 * uVar8;
      }
    }
    plVar4 = *(long **)(*(long *)(lVar10 + 0x30) + unaff_x23 * 8);
    if (plVar4 != (long *)0x0) {
      do {
        while( true ) {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) goto LAB_1008ff9fc;
          uVar6 = plVar4[1];
          if (uVar6 != uVar9) break;
          if (*(int *)(plVar4 + 2) == iVar7) goto LAB_1008ffb2c;
        }
        if ((uVar8 & uVar3) == 0) {
          uVar6 = uVar6 & uVar3;
        }
        else if (uVar8 <= uVar6) {
          uVar1 = 0;
          if (uVar8 != 0) {
            uVar1 = uVar6 / uVar8;
          }
          uVar6 = uVar6 - uVar1 * uVar8;
        }
      } while (uVar6 == unaff_x23);
    }
  }
LAB_1008ff9fc:
  plVar2 = (long *)0x30;
  func_0x000107c60e20();
  plVar4 = (long *)(lVar10 + 0x40);
  uStack_48 = 1;
  *plVar2 = 0;
  plVar2[1] = uVar9;
  *(int *)(plVar2 + 2) = iVar7;
  plVar2[5] = lStack_60;
  plVar2[4] = lStack_68;
  plVar2[3] = lStack_70;
  lStack_70 = 0;
  lStack_68 = 0;
  lStack_60 = 0;
  plStack_58 = plVar2;
  plStack_50 = plVar4;
  if ((uVar8 == 0) ||
     (*(float *)(lVar10 + 0x50) * (float)uVar8 < (float)(*(long *)(lVar10 + 0x48) + 1))) {
    func_0x00010595f640(uVar8 << 1);
    FUN_1008ff688(lVar10 + 0x30);
    uVar8 = *(ulong *)(lVar10 + 0x38);
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x23 = uVar8 - 1 & uVar9;
    }
    else {
      unaff_x23 = uVar9;
      if (uVar8 <= uVar9) {
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = uVar9 / uVar8;
        }
        unaff_x23 = uVar9 - uVar3 * uVar8;
      }
    }
  }
  lVar5 = *(long *)(lVar10 + 0x30);
  plVar2 = *(long **)(lVar5 + unaff_x23 * 8);
  if (plVar2 == (long *)0x0) {
    *plStack_58 = *plVar4;
    *plVar4 = (long)plStack_58;
    *(long **)(lVar5 + unaff_x23 * 8) = plVar4;
    if (*plStack_58 != 0) {
      uVar9 = *(ulong *)(*plStack_58 + 8);
      if ((uVar8 & uVar8 - 1) == 0) {
        uVar9 = uVar9 & uVar8 - 1;
      }
      else if (uVar8 <= uVar9) {
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = uVar9 / uVar8;
        }
        uVar9 = uVar9 - uVar3 * uVar8;
      }
      *(long **)(lVar5 + uVar9 * 8) = plStack_58;
    }
  }
  else {
    *plStack_58 = *plVar2;
    *plVar2 = (long)plStack_58;
  }
  plStack_58 = (long *)0x0;
  *(long *)(lVar10 + 0x48) = *(long *)(lVar10 + 0x48) + 1;
  FUN_1008ffba4(&plStack_58);
LAB_1008ffb2c:
  func_0x000107c60ca0(&lStack_70);
  return;
}



/* Entry: 1008ffb84; end: 1008ffba3;  */

void FUN_1008ffb84(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1008ffba4; end: 1008ffbc7;  */

undefined8 FUN_1008ffba4(undefined8 param_1)

{
  func_0x0001008ffb8c(param_1,0);
  return param_1;
}



/* Entry: 1008ffbc8; end: 1008ffbdb;  */

void FUN_1008ffbc8(void)

{
  return;
}



/* Entry: 1008ffbdc; end: 1008ffc33;  */

undefined8 * FUN_1008ffbdc(undefined8 *param_1,long param_2)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_1008ff688(param_1,*(undefined8 *)(param_2 + 8));
  FUN_1008ffe60(param_1,*(undefined8 *)(param_2 + 0x10),0);
  return param_1;
}



/* Entry: 1008ffc34; end: 1008ffe2b;  */

undefined1  [16] FUN_1008ffc34(long *param_1,int *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong unaff_x23;
  undefined1 auVar10 [16];
  long *aplStack_58 [3];
  
  uVar7 = (ulong)*param_2;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar3 = uVar9 - 1;
    if ((uVar9 & uVar3) == 0) {
      unaff_x23 = uVar3 & uVar7;
    }
    else {
      unaff_x23 = uVar7;
      if (uVar9 <= uVar7) {
        uVar5 = 0;
        if (uVar9 != 0) {
          uVar5 = uVar7 / uVar9;
        }
        unaff_x23 = uVar7 - uVar5 * uVar9;
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x23 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_1008ffce0;
          uVar5 = plVar8[1];
          if (uVar5 != uVar7) break;
          if ((int)plVar8[2] == *param_2) {
            uVar2 = 0;
            goto LAB_1008ffdfc;
          }
        }
        if ((uVar9 & uVar3) == 0) {
          uVar5 = uVar5 & uVar3;
        }
        else if (uVar9 <= uVar5) {
          uVar1 = 0;
          if (uVar9 != 0) {
            uVar1 = uVar5 / uVar9;
          }
          uVar5 = uVar5 - uVar1 * uVar9;
        }
      } while (uVar5 == unaff_x23);
    }
  }
LAB_1008ffce0:
  FUN_1008ffea0(aplStack_58,param_1,uVar7);
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    func_0x00010595f640(uVar9 << 1);
    FUN_1008ff688(param_1);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x23 = uVar9 - 1 & uVar7;
    }
    else {
      unaff_x23 = uVar7;
      if (uVar9 <= uVar7) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar7 / uVar9;
        }
        unaff_x23 = uVar7 - uVar3 * uVar9;
      }
    }
  }
  plVar8 = aplStack_58[0];
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + unaff_x23 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *aplStack_58[0] = *plVar6;
    *plVar6 = (long)aplStack_58[0];
    *(long **)(lVar4 + unaff_x23 * 8) = plVar6;
    if (*aplStack_58[0] != 0) {
      uVar7 = *(ulong *)(*aplStack_58[0] + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar7 = uVar7 & uVar9 - 1;
      }
      else if (uVar9 <= uVar7) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar7 / uVar9;
        }
        uVar7 = uVar7 - uVar3 * uVar9;
      }
      *(long **)(lVar4 + uVar7 * 8) = aplStack_58[0];
    }
  }
  else {
    *aplStack_58[0] = *plVar6;
    *plVar6 = (long)aplStack_58[0];
  }
  aplStack_58[0] = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_1008ffba4(aplStack_58);
  uVar2 = 1;
LAB_1008ffdfc:
  auVar10._8_8_ = uVar2;
  auVar10._0_8_ = plVar8;
  return auVar10;
}



/* Entry: 1008ffe2c; end: 1008ffe5f;  */

void FUN_1008ffe2c(undefined8 param_1,undefined8 param_2)

{
  FUN_1008ffc34(param_1,param_2,param_2);
  return;
}



/* Entry: 1008ffe60; end: 1008ffe9f;  */

void FUN_1008ffe60(undefined8 param_1,long *param_2,long param_3)

{
  for (; param_2 != (long *)param_3; param_2 = (long *)*param_2) {
    func_0x0001008ffe48(param_1,param_2 + 2);
  }
  return;
}



/* Entry: 1008ffea0; end: 1008ffefb;  */

void FUN_1008ffea0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x30;
  func_0x000107c60e20();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  FUN_1008ffefc(puVar1 + 2,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 1008ffefc; end: 1008fff23;  */

undefined4 * FUN_1008ffefc(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  func_0x000107c60c94(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 1008fff24; end: 1008fff43;  */

void FUN_1008fff24(void)

{
  return;
}



/* Entry: 1008fff44; end: 1008fffa3;  */

void FUN_1008fff44(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  while (param_2 != (long *)0x0) {
    lVar1 = *param_2;
    func_0x000107c60ca0(param_2 + 3);
    func_0x000107c60e14(param_2);
    param_2 = (long *)lVar1;
  }
  return;
}



/* Entry: 1008fffa4; end: 1008fffc3;  */

void FUN_1008fffa4(void)

{
  return;
}



/* Entry: 1008fffc4; end: 1008fffe7;  */

undefined8 FUN_1008fffc4(undefined8 param_1)

{
  func_0x0001008fffac(param_1,0);
  return param_1;
}



/* Entry: 1008fffe8; end: 1008fffef;  */

void FUN_1008fffe8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1008ffff0; end: 10090000b;  */

void FUN_1008ffff0(long param_1)

{
  func_0x0001008ff8a0();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 10090000c; end: 100900013; -[SCNNotificationsNotificationHandlerParameters ackConfig] */

undefined8 FUN_10090000c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 100900014; end: 100900077;  */

void FUN_100900014(void)

{
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined1 auStack_a0 [128];
  
  func_0x0001008fefd0();
  if (unaff_x19 == 0) {
    *unaff_x20 = 0;
    unaff_x20[0x80] = 0;
  }
  else {
    func_0x000105959274(auStack_a0);
    func_0x00010595de44();
    func_0x00010595cb44(auStack_a0);
  }
  FUN_1008ff498();
  return;
}



/* Entry: 100900078; end: 1009000e7;  */

long FUN_100900078(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x0001008ff318();
  uVar3 = param_3[1];
  uVar2 = *param_3;
  *(undefined8 *)(lVar1 + 0x28) = param_3[2];
  *(undefined8 *)(lVar1 + 0x20) = uVar3;
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  FUN_1009000e8(lVar1 + 0x30,param_4);
  FUN_100900140(param_1 + 0xa0,param_5);
  FUN_100900198(param_1 + 0xd0,param_6);
  return param_1;
}



/* Entry: 1009000e8; end: 10090010f;  */

void FUN_1009000e8(long param_1)

{
  func_0x0001008ff380();
  *(undefined1 *)(param_1 + 0x68) = 0;
  FUN_100900110();
  return;
}



/* Entry: 100900110; end: 100900123;  */

void FUN_100900110(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_1008ff448();
    *(undefined1 *)(param_1 + 0x68) = 1;
    return;
  }
  return;
}



/* Entry: 100900124; end: 10090013f;  */

void FUN_100900124(long param_1)

{
  FUN_1008ff448();
  *(undefined1 *)(param_1 + 0x68) = 1;
  return;
}



/* Entry: 100900140; end: 100900167;  */

void FUN_100900140(long param_1)

{
  func_0x0001008ff380();
  *(undefined1 *)(param_1 + 0x28) = 0;
  FUN_100900168();
  return;
}



/* Entry: 100900168; end: 10090017b;  */

void FUN_100900168(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    func_0x0001008ff8a0();
    *(undefined1 *)(param_1 + 0x28) = 1;
    return;
  }
  return;
}



/* Entry: 10090017c; end: 100900197;  */

void FUN_10090017c(long param_1)

{
  func_0x0001008ff8a0();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 100900198; end: 1009001bf;  */

void FUN_100900198(long param_1)

{
  func_0x0001008ff380();
  *(undefined1 *)(param_1 + 0x80) = 0;
  FUN_1009001c0();
  return;
}



/* Entry: 1009001c0; end: 1009001d3;  */

void FUN_1009001c0(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    func_0x00010595dd78();
    *(undefined1 *)(param_1 + 0x80) = 1;
    return;
  }
  return;
}



/* Entry: 1009001d4; end: 100900213;  */

void FUN_1009001d4(long param_1)

{
  if (*(char *)(param_1 + 0x80) == '\x01') {
    func_0x00010595cb44();
  }
  return;
}



/* Entry: 100900214; end: 100900243;  */

long FUN_100900214(long param_1)

{
  if (*(char *)(param_1 + 0x68) == '\x01') {
    FUN_1008ff428(param_1 + 0x30);
  }
  return param_1;
}



/* Entry: 100900244; end: 1009002ef;  */

void FUN_100900244(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x000107c61174(param_2);
    ppuStack_38 = &PTR_DAT_1108c1ad8;
    lStack_40 = param_2;
    FUN_1000de59c(&uStack_30,&ppuStack_38,&lStack_40,FUN_1009002f0);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_1000df524(&uStack_30);
    func_0x000107c61170(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_1009003f0(&uStack_50);
  }
  FUN_10090041c();
  return;
}



/* Entry: 1009002f0; end: 1009003ef;  */

void FUN_1009002f0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_1108c1b18;
  puVar4[3] = &PTR_DAT_1108c1ba0;
  puVar5 = puVar8;
  func_0x000107c61174();
  func_0x000107c6110c();
  puVar6 = puVar5;
  FUN_1000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107c61174(puVar8);
  puVar4[6] = puVar8;
  func_0x000107c61108(puVar5);
  func_0x000107c61170(puVar8);
  puVar4[3] = &PTR_DAT_1108c1b68;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_1009003f0(&uStack_50);
  return;
}



/* Entry: 1009003f0; end: 10090041b;  */

long FUN_1009003f0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10090041c; end: 100900423;  */

void FUN_10090041c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100900424; end: 1009004db;  */

void FUN_100900424(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x000107c61174(param_2);
    ppuStack_38 = &PTR_DAT_1108c1c60;
    lStack_40 = param_2;
    FUN_1000de59c(&uStack_30,&ppuStack_38,&lStack_40,FUN_1009004dc);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_1000df524(&uStack_30);
    func_0x000107c61170(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_1009005dc(&uStack_50);
  }
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1009004dc; end: 1009005db;  */

void FUN_1009004dc(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_1108c1ca0;
  puVar4[3] = &PTR_DAT_1108c1d18;
  puVar5 = puVar8;
  func_0x000107c61174();
  func_0x000107c6110c();
  puVar6 = puVar5;
  FUN_1000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107c61174(puVar8);
  puVar4[6] = puVar8;
  func_0x000107c61108(puVar5);
  func_0x000107c61170(puVar8);
  puVar4[3] = &PTR_DAT_1108c1cf0;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_1009005dc(&uStack_50);
  return;
}



/* Entry: 1009005dc; end: 100900607;  */

long FUN_1009005dc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 100900608; end: 1009014c7;  */

void FUN_100900608(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  undefined8 *extraout_x8_06;
  undefined8 *extraout_x8_07;
  undefined8 *extraout_x8_08;
  long extraout_x8_09;
  undefined8 extraout_x8_10;
  undefined8 *extraout_x8_11;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  int extraout_w10_12;
  int extraout_w10_13;
  int extraout_w10_14;
  int extraout_w10_15;
  int extraout_w10_16;
  int extraout_w10_17;
  int extraout_w10_18;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  int extraout_w11_05;
  int extraout_w11_06;
  int extraout_w11_07;
  int extraout_w11_08;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  long *plStack_3a0;
  undefined8 *puStack_398;
  undefined8 *puStack_390;
  undefined8 *puStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  long *plStack_370;
  long lStack_368;
  undefined8 uStack_360;
  long lStack_358;
  ulong uStack_350;
  long lStack_348;
  undefined2 uStack_340;
  byte bStack_33e;
  undefined1 auStack_330 [16];
  long *plStack_320;
  long lStack_318;
  undefined8 uStack_310;
  long lStack_308;
  undefined1 auStack_300 [16];
  undefined8 *puStack_2f0;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  ulong uStack_2c0;
  long lStack_2b8;
  long *plStack_2b0;
  long lStack_2a8;
  undefined1 uStack_280;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  long *plStack_250;
  long lStack_248;
  undefined8 *puStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 *puStack_228;
  long *plStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  long lStack_208;
  long *plStack_200;
  long lStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined1 auStack_1b8 [16];
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined1 auStack_198 [24];
  long *plStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  long *plStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  long *plStack_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  ulong uStack_d0;
  long lStack_c8;
  undefined2 uStack_c0;
  byte bStack_be;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined1 uStack_a0;
  long *plStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  
  uStack_78 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10007847c(auStack_198,&UNK_10f31574e);
  FUN_100100ed0(&puStack_380);
  puVar7 = (undefined8 *)0x30;
  func_0x000107c60e20();
  puVar9 = puStack_378;
  puVar8 = puStack_380;
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_DAT_1108c31c0;
  puStack_380 = (undefined8 *)0x0;
  puStack_378 = (undefined8 *)0x0;
  puVar7[3] = &PTR_DAT_1108c4120;
  puVar7[5] = puVar9;
  puVar7[4] = puVar8;
  puStack_100 = (undefined8 *)0x0;
  puStack_f8 = (undefined8 *)0x0;
  FUN_1000df75c(&puStack_100);
  puStack_1a8 = puVar7 + 3;
  puStack_1a0 = puVar7;
  FUN_1000df75c(&puStack_380);
  FUN_100901560(auStack_1b8,param_2 + 0xa0);
  FUN_10090171c(&puStack_1d0,param_2 + 0x18,auStack_1b8);
  FUN_10002b838(&puStack_100,&UNK_10f31577d);
  FUN_10044fc54(&plStack_1e0);
  func_0x000107c60ca0(&puStack_100);
  FUN_10054fd30(&puStack_1f0,param_4);
  FUN_100901a08(&plStack_200,param_3,&puStack_1f0);
  FUN_100901bd4(&puStack_210);
  FUN_100901cc0(&plStack_220);
  puVar8 = (undefined8 *)0x20;
  func_0x000107c60e20();
  plVar15 = puVar8 + 1;
  *plVar15 = 0;
  puVar8[2] = 0;
  *puVar8 = &PTR_DAT_1108c3210;
  plVar16 = puVar8 + 3;
  *plVar16 = (long)&PTR_DAT_1108c59e0;
  plStack_230 = plVar16;
  puStack_228 = puVar8;
  FUN_10090239c(&puStack_240,param_2 + 0xa0);
  FUN_100902748(&plStack_250);
  puStack_260 = (long *)0x0;
  puStack_258 = (undefined8 *)0x0;
  puStack_100 = (undefined8 *)((ulong)puStack_100 & 0xffffffffffffff00);
  FUN_10090260c(&puStack_270,&puStack_100);
  if (*(char *)(param_2 + 0x98) == '\x01') {
    puVar9 = (undefined8 *)0x110;
    func_0x000107c60e20();
    plVar14 = puVar9 + 1;
    *plVar14 = 0;
    puVar9[2] = 0;
    *puVar9 = &PTR_DAT_1108c3260;
    puStack_f8 = *(undefined8 **)(param_2 + 0x38);
    puStack_100 = *(undefined8 **)(param_2 + 0x30);
    plStack_f0 = *(long **)(param_2 + 0x40);
    uStack_e8 = (undefined1)*(undefined8 *)(param_2 + 0x48);
    uStack_df = (undefined7)*(undefined8 *)(param_2 + 0x51);
    uStack_d8 = (undefined1)((ulong)*(undefined8 *)(param_2 + 0x51) >> 0x38);
    uStack_e7 = (undefined7)*(undefined8 *)(param_2 + 0x49);
    uStack_e0 = (undefined1)((ulong)*(undefined8 *)(param_2 + 0x49) >> 0x38);
    uStack_d0 = uStack_d0 & 0xffffffffffffff00;
    uStack_a0 = 0;
    bVar5 = *(char *)(param_2 + 0x90) == '\x01';
    if (bVar5) {
      FUN_10015bc98(&uStack_d0,param_2 + 0x60);
      uStack_b0 = *(undefined8 *)(param_2 + 0x80);
      uStack_b8 = *(undefined8 *)(param_2 + 0x78);
      uStack_a8 = *(undefined1 *)(param_2 + 0x88);
    }
    puStack_378 = puStack_1c8;
    puStack_380 = puStack_1d0;
    uStack_a0 = bVar5;
    if (puStack_1c8 != (undefined8 *)0x0) {
      do {
        FUN_100902784();
      } while (extraout_w10 != 0);
    }
    lStack_2a8 = lStack_1f8;
    plStack_2b0 = plStack_200;
    if (lStack_1f8 != 0) {
      do {
        FUN_100902784();
      } while (extraout_w10_00 != 0);
    }
    func_0x000100902794();
    if (extraout_x8 != 0) {
      do {
        FUN_100902784();
      } while (extraout_w10_01 != 0);
    }
    puStack_108 = (undefined8 *)lStack_208;
    puStack_110 = puStack_210;
    if (lStack_208 != 0) {
      do {
        FUN_100902784();
      } while (extraout_w10_02 != 0);
    }
    plVar12 = puVar9 + 3;
    puStack_118 = (undefined8 *)lStack_248;
    plStack_120 = plStack_250;
    if (lStack_248 != 0) {
      do {
        FUN_100902784();
      } while (extraout_w10_03 != 0);
    }
    puStack_128 = (undefined8 *)lStack_238;
    puStack_130 = puStack_240;
    if (lStack_238 != 0) {
      do {
        FUN_100902784();
      } while (extraout_w10_04 != 0);
    }
    FUN_1009027a0(plVar12,&puStack_100,1,&puStack_380,&plStack_2b0,&plStack_90,&puStack_110,
                  &plStack_120,&puStack_130);
    func_0x000100902aac(&puStack_130);
    func_0x000100902ad0(&plStack_120);
    func_0x000100902af4(&puStack_110);
    FUN_100902b24(&plStack_90);
    FUN_100901b38(&plStack_2b0);
    func_0x000100902b48(&puStack_380);
    FUN_1008ff428(&uStack_d0);
    if ((puVar9[5] == 0) || (*(long *)(puVar9[5] + 8) == -1)) {
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *plVar14 = *plVar14 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        puStack_380 = plVar12;
        puStack_378 = puVar9;
        plStack_140 = plVar12;
        puStack_138 = puVar9;
      } while (cVar3 != '\0');
      do {
        FUN_100902b6c();
      } while (extraout_w11 != 0);
      puStack_100 = (undefined8 *)puVar9[4];
      puVar9[4] = plVar12;
      puVar9[5] = puVar9;
      FUN_100902b88(&puStack_100);
      FUN_100902bb4(&puStack_380);
    }
    puStack_138 = (undefined8 *)0x0;
    plStack_140 = (long *)0x0;
    puStack_f8 = puStack_258;
    puStack_100 = puStack_260;
    puStack_260 = plVar12;
    puStack_258 = puVar9;
    func_0x000100902bd8(&puStack_100);
    FUN_100902bb4(&plStack_140);
    FUN_10090262c(&puStack_100,1);
    puStack_378 = plStack_f0;
    *plStack_f0 = (long)&PTR_DAT_1108c2ff0;
    plStack_f0[1] = 0;
    plStack_f0[2] = 0;
    plStack_f0[3] = (long)&PTR_DAT_1108c3040;
    *(undefined1 *)(plStack_f0 + 4) = *(undefined1 *)(param_2 + 0x40);
    plStack_f0 = (long *)0x0;
    puStack_380 = puStack_378 + 3;
    FUN_100902678();
    puVar7 = puStack_378;
    puVar9 = puStack_380;
    puStack_380 = (undefined8 *)0x0;
    puStack_378 = (undefined8 *)0x0;
    puStack_f8 = puStack_268;
    puStack_100 = puStack_270;
    puStack_268 = puVar7;
    puStack_270 = puVar9;
    FUN_1009026a8(&puStack_100);
    FUN_1009026a8(&puStack_380);
  }
  FUN_100902c14(&plStack_2b0,param_2 + 0xa0);
  FUN_100902f48(&uStack_2c0,uStack_280);
  puStack_2d8 = puStack_1c8;
  puStack_2e0 = puStack_1d0;
  if (puStack_1c8 != (undefined8 *)0x0) {
    do {
      FUN_100902784();
    } while (extraout_w10_05 != 0);
  }
  lStack_2e8 = lStack_208;
  puStack_2f0 = puStack_210;
  if (lStack_208 != 0) {
    do {
      FUN_100902784();
    } while (extraout_w10_06 != 0);
  }
  func_0x000100902794();
  if (extraout_x8_00 != 0) {
    do {
      FUN_100902784();
    } while (extraout_w10_07 != 0);
  }
  FUN_100902fac(&uStack_2d0,&puStack_2e0,&puStack_2f0,auStack_300,&plStack_2b0);
  FUN_100902b24(auStack_300);
  func_0x000100902af4(&puStack_2f0);
  func_0x000100902b48(&puStack_2e0);
  func_0x000100903658(&uStack_310,param_2 + 0xa0);
  func_0x000100902794();
  if (extraout_x8_01 != 0) {
    do {
      FUN_100902784();
    } while (extraout_w10_08 != 0);
  }
  puStack_100 = (undefined8 *)0x0;
  puStack_f8 = (undefined8 *)0x0;
  FUN_100903684(&plStack_320,auStack_330,&plStack_1e0,param_2 + 0xd0,param_2 + 0xa0,param_6,
                &puStack_1f0,&puStack_100);
  FUN_100903fbc(&puStack_100);
  FUN_100902b24(auStack_330);
  puStack_378 = puStack_268;
  puStack_380 = puStack_270;
  if (puStack_268 != (undefined8 *)0x0) {
    do {
      FUN_100902784();
    } while (extraout_w10_09 != 0);
  }
  lStack_368 = lStack_248;
  plStack_370 = plStack_250;
  if (lStack_248 != 0) {
    do {
      FUN_100902784();
    } while (extraout_w10_10 != 0);
  }
  lStack_358 = lStack_308;
  uStack_360 = uStack_310;
  if (lStack_308 != 0) {
    do {
      FUN_100902784();
    } while (extraout_w10_11 != 0);
  }
  lStack_348 = lStack_2b8;
  uStack_350 = uStack_2c0;
  if (lStack_2b8 != 0) {
    do {
      FUN_100902784();
    } while (extraout_w10_12 != 0);
  }
  bVar1 = *(byte *)(param_2 + 0x150);
  uVar2 = *(undefined1 *)(param_2 + 0x148);
  uVar6 = bVar1 == 0;
  if ((bool)uVar6) {
    uVar2 = 0;
  }
  bStack_33e = bVar1 & *(byte *)(param_2 + 0x149);
  uStack_340 = CONCAT11(uVar2,bVar1);
  FUN_100903fec(&plStack_90,1);
  puStack_80[2] = 0;
  *puStack_80 = &PTR_DAT_1108c2fa0;
  puStack_80[1] = 0;
  puStack_108 = puStack_1c8;
  puStack_110 = puStack_1d0;
  puVar9 = puStack_80;
  if (puStack_1c8 != (undefined8 *)0x0) {
    do {
      FUN_100902b6c();
      puVar9 = extraout_x8_02;
    } while (extraout_w11_00 != 0);
  }
  puStack_118 = (undefined8 *)lStack_1f8;
  plStack_120 = plStack_200;
  if (lStack_1f8 != 0) {
    do {
      FUN_100902b6c();
      puVar9 = extraout_x8_03;
    } while (extraout_w11_01 != 0);
  }
  puStack_128 = puStack_258;
  puStack_130 = puStack_260;
  if (puStack_258 != (undefined8 *)0x0) {
    do {
      FUN_100902b6c();
      puVar9 = extraout_x8_04;
    } while (extraout_w11_02 != 0);
  }
  puStack_138 = puStack_1d8;
  plStack_140 = plStack_1e0;
  if (puStack_1d8 != (undefined8 *)0x0) {
    do {
      FUN_100902b6c();
      puVar9 = extraout_x8_05;
    } while (extraout_w11_03 != 0);
  }
  lStack_148 = lStack_208;
  puStack_150 = puStack_210;
  if (lStack_208 != 0) {
    do {
      FUN_100902b6c();
      puVar9 = extraout_x8_06;
    } while (extraout_w11_04 != 0);
  }
  puStack_158 = puStack_218;
  plStack_160 = plStack_220;
  if (puStack_218 != (undefined8 *)0x0) {
    do {
      FUN_100902b6c();
      puVar9 = extraout_x8_07;
    } while (extraout_w11_05 != 0);
  }
  lStack_168 = lStack_2c8;
  uStack_170 = uStack_2d0;
  if (lStack_2c8 != 0) {
    do {
      FUN_100902b6c();
      puVar9 = extraout_x8_08;
    } while (extraout_w11_06 != 0);
  }
  lVar13 = lStack_358;
  uVar17 = uStack_360;
  puStack_f8 = puStack_378;
  puStack_100 = puStack_380;
  puStack_178 = (undefined8 *)lStack_318;
  plStack_180 = plStack_320;
  if (lStack_318 != 0) {
    plVar14 = (long *)(lStack_318 + 8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *plVar14 = *plVar14 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puStack_380 = (undefined8 *)0x0;
  puStack_378 = (undefined8 *)0x0;
  uStack_e8 = (undefined1)lStack_368;
  uStack_e7 = (undefined7)((ulong)lStack_368 >> 8);
  plStack_f0 = plStack_370;
  plStack_370 = (long *)0x0;
  lStack_368 = 0;
  uStack_360 = 0;
  lStack_358 = 0;
  uStack_d8 = (undefined1)lVar13;
  uStack_d7 = (undefined7)((ulong)lVar13 >> 8);
  uStack_e0 = (undefined1)uVar17;
  uStack_df = (undefined7)((ulong)uVar17 >> 8);
  lStack_c8 = lStack_348;
  uStack_d0 = uStack_350;
  uStack_350 = 0;
  lStack_348 = 0;
  bStack_be = bStack_33e;
  uStack_c0 = uStack_340;
  FUN_100904080(puVar9 + 3,&puStack_110,&plStack_120,&puStack_130,&plStack_140,&puStack_150,
                &plStack_160,&uStack_170,&plStack_180,&puStack_100);
  FUN_100904120(&puStack_100);
  func_0x000100904158(&plStack_180);
  func_0x00010090417c(&uStack_170);
  FUN_100902b24(&plStack_160);
  func_0x000100902af4(&puStack_150);
  FUN_100450be4(&plStack_140);
  func_0x000100902bd8(&puStack_130);
  FUN_100901b38(&plStack_120);
  func_0x000100902b48(&puStack_110);
  puStack_388 = puStack_80;
  puStack_80 = (undefined8 *)0x0;
  puStack_390 = puStack_388 + 3;
  FUN_1009041a0(&plStack_90);
  FUN_1004b5250(&plStack_160,&plStack_1e0);
  FUN_1009041b0(&uStack_170,param_2 + 0xa0);
  lVar13 = param_5[1];
  uVar17 = param_5[1];
  param_5 = (undefined8 *)*param_5;
  puVar9 = (undefined8 *)0xb8;
  func_0x000107c60e20();
  plVar14 = puVar9 + 1;
  *plVar14 = 0;
  puVar9[2] = 0;
  *puVar9 = &PTR_DAT_1108c32b0;
  puStack_100 = param_5;
  puStack_f8 = (undefined8 *)uVar17;
  if (lVar13 != 0) {
    do {
      FUN_100902784();
    } while (extraout_w10_13 != 0);
  }
  puStack_88 = puStack_158;
  plStack_90 = plStack_160;
  if (puStack_158 != (undefined8 *)0x0) {
    do {
      FUN_100902784();
    } while (extraout_w10_14 != 0);
  }
  plVar12 = puVar9 + 3;
  puStack_108 = puStack_388;
  puStack_110 = puStack_390;
  puVar7 = puStack_390;
  puVar18 = puStack_388;
  if (puStack_388 != (undefined8 *)0x0) {
    do {
      FUN_100902784();
    } while (extraout_w10_15 != 0);
  }
  do {
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar5) {
      *plVar15 = *plVar15 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  plStack_120 = plVar16;
  puStack_118 = puVar8;
  func_0x000100902794();
  puStack_130 = puVar7;
  puStack_128 = puVar18;
  if (extraout_x8_09 != 0) {
    do {
      FUN_100902784();
    } while (extraout_w10_16 != 0);
  }
  puStack_138 = (undefined8 *)lStack_208;
  plStack_140 = puStack_210;
  if (lStack_208 != 0) {
    do {
      FUN_100902784();
    } while (extraout_w10_17 != 0);
  }
  lStack_148 = lStack_168;
  puStack_150 = uStack_170;
  if (lStack_168 != 0) {
    do {
      FUN_100902784();
    } while (extraout_w10_18 != 0);
  }
  FUN_1009041dc();
  FUN_100904204(plVar12);
  func_0x000100902aac(&puStack_150);
  func_0x000100902af4(&plStack_140);
  FUN_100902b24(&puStack_130);
  func_0x0001009044cc(&plStack_120);
  func_0x0001009044f0(&puStack_110);
  FUN_100554470(&plStack_90);
  FUN_10048d450(&puStack_100);
  if ((puVar9[7] == 0) || (uVar6 = *(long *)(puVar9[7] + 8) == -1, (bool)uVar6)) {
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *plVar14 = *plVar14 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      plStack_3a0 = plVar12;
      puStack_398 = puVar9;
      plStack_90 = plVar12;
      puStack_88 = puVar9;
    } while (cVar3 != '\0');
    do {
      FUN_100902b6c();
    } while (extraout_w11_07 != 0);
    puStack_100 = (undefined8 *)puVar9[6];
    puVar9[6] = plVar12;
    puVar9[7] = puVar9;
    puStack_f8 = (undefined8 *)extraout_x8_10;
    func_0x000100904514(&puStack_100);
    func_0x000100904538(&plStack_90);
    plVar12 = plStack_3a0;
    puVar9 = puStack_398;
  }
  plStack_3a0 = (long *)0x0;
  puStack_398 = (undefined8 *)0x0;
  plStack_180 = plVar12;
  puStack_178 = puVar9;
  func_0x000100904538(&plStack_3a0);
  puVar10 = (undefined8 *)0x68;
  func_0x000107c60e20();
  puVar4 = puStack_1c8;
  puVar18 = puStack_1d0;
  puVar7 = puStack_258;
  puVar8 = puStack_260;
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = &PTR_DAT_1108c3300;
  puVar11 = puVar10 + 3;
  *puVar11 = &PTR_DAT_1108c3130;
  puVar10[5] = puStack_388;
  puVar10[4] = puStack_390;
  puStack_390 = (undefined8 *)0x0;
  puStack_388 = (undefined8 *)0x0;
  puVar10[6] = plVar12;
  puStack_178 = (undefined8 *)0x0;
  plStack_180 = (long *)0x0;
  puStack_260 = (undefined8 *)0x0;
  puStack_258 = (undefined8 *)0x0;
  puStack_1d0 = (undefined8 *)0x0;
  puStack_1c8 = (undefined8 *)0x0;
  puStack_100 = (undefined8 *)0x0;
  puStack_f8 = (undefined8 *)0x0;
  puVar10[7] = puVar9;
  plStack_90 = (long *)0x0;
  puStack_88 = (undefined8 *)0x0;
  puVar10[9] = puVar7;
  puVar10[8] = puVar8;
  puStack_110 = (undefined8 *)0x0;
  puStack_108 = (undefined8 *)0x0;
  puVar10[0xb] = puVar4;
  puVar10[10] = puVar18;
  puStack_118 = (undefined8 *)0x0;
  plStack_120 = (long *)0x0;
  *(undefined4 *)(puVar10 + 0xc) = 1;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  func_0x000100902b48(&plStack_120);
  func_0x000100902bd8(&puStack_110);
  FUN_100904678(&plStack_90);
  func_0x0001009044a8(&puStack_100);
  puVar8 = (undefined8 *)0x78;
  puStack_130 = puVar11;
  puStack_128 = puVar10;
  func_0x000107c60e20();
  plVar16 = puVar8 + 1;
  *plVar16 = 0;
  puVar8[2] = 0;
  *puVar8 = &PTR_DAT_1108c3350;
  plVar15 = puVar8 + 3;
  puStack_128 = (undefined8 *)0x0;
  puStack_130 = (undefined8 *)0x0;
  puStack_88 = puStack_1d8;
  plStack_90 = plStack_1e0;
  plStack_1e0 = (long *)0x0;
  puStack_1d8 = (undefined8 *)0x0;
  puStack_108 = (undefined8 *)uStack_1e8;
  puStack_110 = puStack_1f0;
  puStack_1f0 = (undefined8 *)0x0;
  uStack_1e8 = 0;
  puStack_118 = puStack_218;
  plStack_120 = plStack_220;
  plStack_220 = (long *)0x0;
  puStack_218 = (undefined8 *)0x0;
  puStack_100 = puVar11;
  puStack_f8 = puVar10;
  FUN_1009041dc();
  FUN_10090469c(plVar15);
  FUN_100902b24(&plStack_120);
  FUN_100558bb4(&puStack_110);
  FUN_100450be4(&plStack_90);
  FUN_1009046e4(&puStack_100);
  if ((puVar8[5] == 0) || (uVar6 = *(long *)(puVar8[5] + 8) == -1, (bool)uVar6)) {
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = *plVar16 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      plStack_140 = plVar15;
      puStack_138 = puVar8;
      plStack_90 = plVar15;
      puStack_88 = puVar8;
    } while (cVar3 != '\0');
    do {
      FUN_100902b6c();
    } while (extraout_w11_08 != 0);
    puStack_100 = (undefined8 *)puVar8[4];
    puVar8[4] = plVar15;
    puVar8[5] = puVar8;
    puStack_f8 = extraout_x8_11;
    func_0x000100904708(&puStack_100);
    func_0x00010090472c(&plStack_90);
  }
  *param_1 = (long)plVar15;
  param_1[1] = (long)puVar8;
  puStack_138 = (undefined8 *)0x0;
  plStack_140 = (long *)0x0;
  func_0x00010090472c(&plStack_140);
  func_0x000100904750(&puStack_130);
  FUN_100904678(&plStack_180);
  func_0x000100902aac(&uStack_170);
  FUN_1005544a0(&plStack_160);
  func_0x000100904774(&puStack_390);
  FUN_100904120(&puStack_380);
  func_0x000100904158(&plStack_320);
  func_0x000100902aac(&uStack_310);
  func_0x00010090417c(&uStack_2d0);
  func_0x000100902aac(&uStack_2c0);
  FUN_1009026a8(&puStack_270);
  func_0x000100902bd8(&puStack_260);
  func_0x000100902ad0(&plStack_250);
  func_0x000100902aac(&puStack_240);
  func_0x000100904798(&plStack_230);
  func_0x0001009047bc(&plStack_220);
  func_0x0001009047e4(&puStack_210);
  func_0x000100904808(&plStack_200);
  FUN_100558bb4(&puStack_1f0);
  FUN_100450be4(&plStack_1e0);
  func_0x000100902b48(&puStack_1d0);
  func_0x000100902ad0(auStack_1b8);
  FUN_100904840(&puStack_1a8);
  while( true ) {
    FUN_100078bd8(auStack_198);
    FUN_1009048a8(uStack_78);
    if ((bool)uVar6) break;
    func_0x000107c60e78();
    func_0x00010596bfc8();
    FUN_1008ff428(param_1 + 6);
    func_0x000107c60d70(puVar11);
    func_0x000107c60e14();
    FUN_1009026a8(&puStack_270);
    while( true ) {
      func_0x000100902bd8(&puStack_260);
      func_0x000100902ad0(&plStack_250);
      func_0x000100902aac(&puStack_240);
      func_0x000100904798(&plStack_230);
      func_0x0001009047bc(&plStack_220);
      func_0x0001009047e4(&puStack_210);
      func_0x000100904808(&plStack_200);
      FUN_100558bb4(&puStack_1f0);
      FUN_100450be4(&plStack_1e0);
      func_0x000100902b48(&puStack_1d0);
      func_0x000100902ad0(auStack_1b8);
      FUN_100904840(&puStack_1a8);
      uVar6 = (int)puVar8 == 1;
      if ((bool)uVar6) break;
      FUN_100078bd8(auStack_198);
      func_0x000107c60bd8(plVar15);
      func_0x00010596bfb8();
    }
    func_0x000107c60e38(plVar15);
    func_0x000107c60e3c();
    *param_5 = 0;
    param_5[1] = 0;
  }
  return;
}



/* Entry: 1009014c8; end: 1009014e3;  */

void FUN_1009014c8(void)

{
  return;
}



/* Entry: 1009014e4; end: 10090153f;  */

void FUN_1009014e4(undefined8 param_1)

{
  int iVar1;
  undefined1 in_ZR;
  int *unaff_x20;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 *puStack_30;
  
  FUN_1009014c8();
  FUN_10090159c();
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  *puStack_30 = &PTR_DAT_1108c4188;
  iVar1 = *unaff_x20;
  puStack_30[3] = &PTR_DAT_1108c41d8;
  puStack_30[4] = (long)iVar1;
  FUN_100901600();
  func_0x000100901618();
  func_0x000100901628();
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  pcStack_48 = FUN_100901540;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_1009014e4(&uStack_51,param_1);
  return;
}



/* Entry: 100901540; end: 10090155f;  */

void FUN_100901540(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_1009014e4(&uStack_11,param_1);
  return;
}



/* Entry: 100901560; end: 10090159b;  */

void FUN_100901560(void)

{
  undefined1 auStack_30 [16];
  
  FUN_100901540(auStack_30,&UNK_10ddc589c);
  func_0x000100901654();
  FUN_100901668();
  return;
}



/* Entry: 10090159c; end: 1009015a7;  */

void FUN_10090159c(void)

{
  undefined8 uStack0000000000000008;
  
  uStack0000000000000008 = 1;
  FUN_1009015a8();
  return;
}



/* Entry: 1009015a8; end: 1009015d3;  */

long FUN_1009015a8(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 < 0x666666666666667) {
    lVar1 = param_2 * 0x28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  *(ulong *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1009015a8();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1009015d4; end: 1009015ff;  */

long FUN_1009015d4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1009015a8();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 100901600; end: 100901667;  */

void FUN_100901600(void)

{
  long *unaff_x19;
  long in_stack_00000010;
  
  *unaff_x19 = in_stack_00000010 + 0x18;
  unaff_x19[1] = in_stack_00000010;
  return;
}



/* Entry: 100901668; end: 100901693;  */

long FUN_100901668(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 100901694; end: 1009016a7;  */

void FUN_100901694(void)

{
  return;
}



/* Entry: 1009016a8; end: 10090171b;  */

void FUN_1009016a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  undefined1 uStack_61;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = auStack_50;
  FUN_100901694();
  uStack_38 = extraout_x8;
  FUN_100901740();
  FUN_100901758();
  FUN_100901810(uStack_40,param_2,param_3);
  func_0x000100901940();
  func_0x000100901958();
  func_0x000100901968(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000100901958(auStack_50);
  func_0x00010596b228();
  pcStack_58 = FUN_10090171c;
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_1009016a8(&uStack_61,puVar1,param_2);
  return;
}



/* Entry: 10090171c; end: 10090173f;  */

void FUN_10090171c(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_1009016a8(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 100901740; end: 100901757;  */

void FUN_100901740(void)

{
  return;
}



/* Entry: 100901758; end: 100901777;  */

void FUN_100901758(void)

{
  func_0x00010090174c();
  FUN_100901778();
  FUN_1009017a8();
  return;
}



/* Entry: 100901778; end: 1009017a7;  */

void FUN_100901778(undefined8 param_1,ulong param_2)

{
  long unaff_x19;
  
  if (param_2 < 0x276276276276277) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x68);
    return;
  }
  func_0x000104bd35f4();
  *(undefined8 *)(unaff_x19 + 0x10) = param_1;
  return;
}



/* Entry: 1009017a8; end: 1009017bb;  */

void FUN_1009017a8(undefined8 param_1)

{
  long unaff_x19;
  
  *(undefined8 *)(unaff_x19 + 0x10) = param_1;
  return;
}



/* Entry: 1009017bc; end: 10090180f;  */

undefined8 FUN_1009017bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c60c94(auStack_38);
  FUN_1009018cc(param_1,auStack_38,param_3);
  func_0x000107c60ca0(auStack_38);
  return param_1;
}



/* Entry: 100901810; end: 10090184f;  */

undefined8 * FUN_100901810(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108c2e58;
  param_1[1] = 0;
  FUN_1009017bc(param_1 + 3);
  return param_1;
}



/* Entry: 100901850; end: 1009018cb;  */

void FUN_100901850(undefined4 *param_1,long *param_2)

{
  undefined4 uVar1;
  
  param_2 = (long *)*param_2;
  if (param_2 == (long *)0x0) {
    uVar1 = 0x1e;
  }
  else {
    (**(code **)(*param_2 + 0x10))();
    uVar1 = SUB84(param_2,0);
  }
  *param_1 = 0x1010001;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  param_1[5] = 0x1010001;
  *(undefined2 *)(param_1 + 6) = 0x100;
  *(undefined2 *)(param_1 + 9) = 0x101;
  *(undefined1 *)((long)param_1 + 0x26) = 1;
  *(undefined1 *)((long)param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 7) = 0x2000000000;
  param_1[3] = 2;
  param_1[4] = uVar1;
  return;
}



/* Entry: 1009018cc; end: 100901923;  */

undefined8 * FUN_1009018cc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_100901850(param_1 + 3,param_3);
  param_1[8] = 0;
  param_1[9] = 0;
  return param_1;
}



/* Entry: 100901924; end: 100901993;  */

undefined8 FUN_100901924(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100901994; end: 100901a07;  */

void FUN_100901994(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  undefined1 uStack_61;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = auStack_50;
  FUN_100901694();
  uStack_38 = extraout_x8;
  FUN_100901740();
  FUN_100901a2c();
  FUN_100901af8(uStack_40,param_2,param_3);
  func_0x000100901940();
  FUN_100901b5c();
  func_0x000100901968(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  FUN_100901b5c(auStack_50);
  func_0x00010596b228();
  pcStack_58 = FUN_100901a08;
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_100901994(&uStack_61,puVar1,param_2);
  return;
}



/* Entry: 100901a08; end: 100901a2b;  */

void FUN_100901a08(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_100901994(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 100901a2c; end: 100901a4b;  */

void FUN_100901a2c(void)

{
  func_0x00010090174c();
  FUN_100901a4c();
  FUN_1009017a8();
  return;
}



/* Entry: 100901a4c; end: 100901a67;  */

void FUN_100901a4c(undefined8 param_1,ulong param_2)

{
  bool bVar1;
  long *extraout_x8;
  
  if (param_2 >> 0x3a == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 6);
    return;
  }
  func_0x000104bd35f4();
  bVar1 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
  if (bVar1) {
    *extraout_x8 = *extraout_x8 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 100901a68; end: 100901a77;  */

void FUN_100901a68(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 100901a78; end: 100901af7;  */

undefined8 * FUN_100901a78(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_100901a68();
    } while (extraout_w10 != 0);
  }
  uVar4 = param_3[1];
  uVar3 = *param_3;
  if (param_3[1] != 0) {
    do {
      FUN_100901a68();
    } while (extraout_w10_00 != 0);
  }
  *param_1 = &PTR_DAT_1108c2dc0;
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  uStack_30 = 0;
  uStack_28 = 0;
  param_1[4] = uVar4;
  param_1[3] = uVar3;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_100558bb4(&uStack_40);
  FUN_100901b38(&uStack_30);
  return param_1;
}



/* Entry: 100901af8; end: 100901b37;  */

undefined8 * FUN_100901af8(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108c2ea8;
  param_1[1] = 0;
  FUN_100901a78(param_1 + 3);
  return param_1;
}



/* Entry: 100901b38; end: 100901b5b;  */

void FUN_100901b38(long param_1)

{
  FUN_10048d444();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100901b5c; end: 100901b6b;  */

void FUN_100901b5c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}


