/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102585974; end: 1025859c3;  */

void FUN_102585974(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102585c1c;
  plVar3[2] = lVar2;
  plVar3[3] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[4] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102581d30,lVar1,lVar2);
  return;
}



/* Entry: 1025859c4; end: 102585a33;  */

void FUN_1025859c4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102585c20;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102585a34; end: 102585a9f;  */

void FUN_102585a34(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102585c24;
  plVar3[0x13] = lVar2;
  plVar3[0x14] = lVar4;
  plVar3[0x12] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102580b6c,0,0);
  return;
}



/* Entry: 102585aa0; end: 102585adf;  */

void FUN_102585aa0(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 102585ae0; end: 102585b2f;  */

void FUN_102585ae0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102585c28;
  plVar3[3] = lVar2;
  plVar3[4] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[5] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102585bc4,lVar1,lVar2);
  return;
}



/* Entry: 102585b30; end: 102585b9f;  */

void FUN_102585b30(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102585c2c;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102585ba0; end: 102585c2f;  */

void FUN_102585ba0(long param_1)

{
  func_0x000102585760(param_1 + 0x20);
  return;
}



/* Entry: 102585c30; end: 102585c73; -[SCShareLocationWithFriendPromptTray viewHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102585c30(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ea6a18;
  func_0x000107c61428(param_1 + _DAT_112ea6a18,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 102585c74; end: 102585cc3; -[SCShareLocationWithFriendPromptTray setViewHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102585c74(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ea6a18;
  func_0x000107c61428(param_2 + _DAT_112ea6a18,auStack_48,1,0);
  *(undefined8 *)(param_2 + lVar1) = param_1;
  return;
}



/* Entry: 102585cc4; end: 10258669b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102585cc4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             byte param_13,undefined4 param_14,undefined8 param_15,undefined4 param_16)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [16];
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [32];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea6a18) = 0x4079a00000000000;
  if (param_7 < 6) {
    if (param_7 < 4) {
      if (param_7 == 1) {
        uVar10 = 9;
        if ((param_13 & 1) != 0) {
          uVar10 = 10;
        }
        uVar11 = 1;
        goto LAB_102585ed0;
      }
      if (param_7 == 3) {
        uVar11 = 0;
        uVar10 = 3;
        goto LAB_102585ed0;
      }
    }
    else {
      if (param_7 == 4) {
        uVar11 = 0;
        uVar10 = 8;
        goto LAB_102585ed0;
      }
      if (param_7 == 5) {
        uVar11 = 0;
        uVar10 = 7;
        goto LAB_102585ed0;
      }
    }
  }
  else if (param_7 < 8) {
    if (param_7 == 6) {
      uVar10 = 9;
      if ((param_13 & 1) != 0) {
        uVar10 = 10;
      }
      uVar11 = 2;
      goto LAB_102585ed0;
    }
    if (param_7 == 7) {
      if (param_3 >> 0x3e == 0) {
        uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar5 = param_3 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < param_3) {
          uVar5 = param_3;
        }
        func_0x000107c60480();
      }
      uVar11 = 0;
      uVar10 = 1;
      if (uVar5 == 0) {
        uVar10 = 2;
      }
      goto LAB_102585ed0;
    }
  }
  else {
    if (param_7 == 8) {
      if (param_3 >> 0x3e == 0) {
        uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar5 = param_3 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < param_3) {
          uVar5 = param_3;
        }
        func_0x000107c60480();
      }
      uVar11 = 0;
      uVar10 = 4;
      if (uVar5 == 0) {
        uVar10 = 5;
      }
      goto LAB_102585ed0;
    }
    if (param_7 == 9) {
      uVar11 = 0;
      uVar10 = 6;
      goto LAB_102585ed0;
    }
  }
  uVar11 = 0;
  uVar10 = 0;
LAB_102585ed0:
  lVar6 = 0;
  FUN_102588774();
  lVar7 = lVar6;
  func_0x000107c610f8();
  lVar3 = _DAT_112ea6a60;
  func_0x000107c61614(lVar7 + _DAT_112ea6a60,0);
  lVar4 = _DAT_112ea6a68;
  func_0x000107c61614(lVar7 + _DAT_112ea6a68,0);
  *(undefined8 *)(lVar7 + _DAT_112ea6a58) = 0;
  *(undefined1 *)(lVar7 + _DAT_112ea6a70) = 0;
  puVar1 = (undefined8 *)(lVar7 + _DAT_112ea6a78);
  *puVar1 = 0xd00000000000004e;
  puVar1[1] = 0x800000010f0aacd0;
  func_0x000107c61428(lVar7 + lVar3,auStack_90,1,0);
  func_0x000107c61604(lVar7 + lVar3,param_2);
  *(ulong *)(lVar7 + _DAT_112ea6a80) = param_3;
  puVar1 = (undefined8 *)(lVar7 + _DAT_112ea6a88);
  *puVar1 = param_4;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar7 + _DAT_112ea6a90);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(lVar7 + _DAT_112ea6a98) = param_10;
  *(undefined8 *)(lVar7 + _DAT_112ea6aa0) = param_11;
  *(undefined8 *)(lVar7 + _DAT_112ea6aa8) = param_12;
  *(undefined4 *)(lVar7 + _DAT_112ea6ab0) = uVar10;
  *(undefined8 *)(lVar7 + _DAT_112ea6ab8) = uVar11;
  *(undefined8 *)(lVar7 + _DAT_112ea6ac0) = param_8;
  func_0x000107c61604(lVar7 + lVar4,param_9);
  *(undefined8 *)(lVar7 + _DAT_112ea6ac8) = param_15;
  *(byte *)(lVar7 + _DAT_112ea6ad0) = (byte)param_16 & 1;
  *(byte *)(lVar7 + _DAT_112ea6ad8) = param_16._1_1_ & 1;
  func_0x000107c61434(param_3);
  FUN_102586ca0(param_5,param_6);
  puVar2 = PTR_s_initWithNibName_bundle__1125e9850;
  lStack_a0 = lVar7;
  lStack_98 = lVar6;
  func_0x000107c615f0(param_8);
  func_0x000107c61174(param_15);
  plVar8 = &lStack_a0;
  func_0x000107c61154(plVar8,puVar2,0,0);
  func_0x000107c53dec();
  func_0x000107c54394(plVar8);
  FUN_102587194();
  func_0x000107c6142c(param_3);
  puVar9 = auStack_b0;
  func_0x000107c61154(puVar9,PTR_s_initWithTrayViewController_useSp_1125f2fa8,plVar8,0,8);
  func_0x000107c61180();
  FUN_102586d44();
  lVar3 = _DAT_112ea6a18;
  func_0x000107c61428(puVar9 + _DAT_112ea6a18,auStack_c8,1,0);
  *(undefined8 *)(puVar9 + lVar3) = param_1;
  func_0x000107c5a070(puVar9);
  func_0x000107c52684(puVar9);
  func_0x000107c5a05c(puVar9);
  func_0x000107c52aa4(puVar9);
  func_0x000107c615e8(param_8);
  func_0x000107c615e8(param_9);
  func_0x000107c61170(param_15);
  func_0x000107c61170(plVar8);
  FUN_102585548(param_5,param_6);
  func_0x000107c61170(puVar9);
  func_0x000107c615e8(param_2);
  return puVar9;
}



/* Entry: 10258669c; end: 1025867cf; -[SCShareLocationWithFriendPromptTray initWithDelegate:users:source:completion:sharingStatus:uiContainer:permissionsPromptPresentationDelegate:allFriendsNumber:friendsInWhiteListNumber:friendsInBlackListNumber:isLocationSharingAlwaysAllowed:valdiRuntimeProvider:isUserUnderAge:isRefactoringEnabled:] */

void FUN_10258669c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined1 param_13)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  
  func_0x000107c60bc4();
  uVar1 = 0;
  func_0x000103a2db6c(0);
  func_0x000107c5fc54(param_4,uVar1);
  if (param_6 == 0) {
    puVar2 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar2 = &UNK_110522700;
    func_0x000107c613fc(&UNK_110522700,0x18,7);
    *(long *)(puVar2 + 0x10) = param_6;
    pcVar3 = FUN_102586d3c;
  }
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_8);
  func_0x000107c615f0(param_9);
  func_0x000107c61174();
  func_0x0001025861d0(param_3,param_4,param_5,pcVar3,puVar2,param_7,param_8,param_9,param_10,
                      param_11,param_12,param_13);
  return;
}



/* Entry: 1025867d0; end: 102586c3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1025867d0(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,ulong param_8,undefined8 param_9,byte param_10)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [16];
  long lStack_98;
  long lStack_90;
  undefined1 auStack_88 [24];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea6a18) = 0x4079a00000000000;
  if (param_4 < 6) {
    if (param_4 < 4) {
      if (param_4 == 1) {
        uVar10 = 9;
        if ((param_8 & 1) != 0) {
          uVar10 = 10;
        }
        uVar11 = 1;
        goto LAB_102586990;
      }
      if (param_4 == 3) {
        uVar11 = 0;
        uVar10 = 3;
        goto LAB_102586990;
      }
    }
    else {
      if (param_4 == 4) {
        uVar11 = 0;
        uVar10 = 8;
        goto LAB_102586990;
      }
      if (param_4 == 5) {
        uVar11 = 0;
        uVar10 = 7;
        goto LAB_102586990;
      }
    }
  }
  else if (param_4 < 8) {
    if (param_4 == 6) {
      uVar10 = 9;
      if ((param_8 & 1) != 0) {
        uVar10 = 10;
      }
      uVar11 = 2;
      goto LAB_102586990;
    }
    if (param_4 == 7) {
      if (param_3 >> 0x3e == 0) {
        uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar5 = param_3 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < param_3) {
          uVar5 = param_3;
        }
        func_0x000107c60480();
      }
      uVar11 = 0;
      uVar10 = 1;
      if (uVar5 == 0) {
        uVar10 = 2;
      }
      goto LAB_102586990;
    }
  }
  else {
    if (param_4 == 8) {
      if (param_3 >> 0x3e == 0) {
        uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar5 = param_3 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < param_3) {
          uVar5 = param_3;
        }
        func_0x000107c60480();
      }
      uVar11 = 0;
      uVar10 = 4;
      if (uVar5 == 0) {
        uVar10 = 5;
      }
      goto LAB_102586990;
    }
    if (param_4 == 9) {
      uVar11 = 0;
      uVar10 = 6;
      goto LAB_102586990;
    }
  }
  uVar11 = 0;
  uVar10 = 0;
LAB_102586990:
  lVar6 = 0;
  FUN_102588774();
  lVar7 = lVar6;
  func_0x000107c610f8();
  lVar3 = _DAT_112ea6a60;
  func_0x000107c61614(lVar7 + _DAT_112ea6a60,0);
  lVar4 = _DAT_112ea6a68;
  func_0x000107c61614(lVar7 + _DAT_112ea6a68,0);
  *(undefined8 *)(lVar7 + _DAT_112ea6a58) = 0;
  *(undefined1 *)(lVar7 + _DAT_112ea6a70) = 0;
  puVar1 = (undefined8 *)(lVar7 + _DAT_112ea6a78);
  *puVar1 = 0xd00000000000004e;
  puVar1[1] = 0x800000010f0aacd0;
  func_0x000107c61428(lVar7 + lVar3,auStack_88,1,0);
  func_0x000107c61604(lVar7 + lVar3,param_2);
  *(ulong *)(lVar7 + _DAT_112ea6a80) = param_3;
  puVar1 = (undefined8 *)(lVar7 + _DAT_112ea6a88);
  *puVar1 = 0xffffffffffffffff;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar7 + _DAT_112ea6a90);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar7 + _DAT_112ea6a98) = param_5;
  *(undefined8 *)(lVar7 + _DAT_112ea6aa0) = param_6;
  *(undefined8 *)(lVar7 + _DAT_112ea6aa8) = param_7;
  *(undefined4 *)(lVar7 + _DAT_112ea6ab0) = uVar10;
  *(undefined8 *)(lVar7 + _DAT_112ea6ab8) = uVar11;
  *(undefined8 *)(lVar7 + _DAT_112ea6ac0) = 0;
  func_0x000107c61604(lVar7 + lVar4,0);
  *(undefined8 *)(lVar7 + _DAT_112ea6ac8) = param_9;
  *(byte *)(lVar7 + _DAT_112ea6ad0) = param_10 & 1;
  *(undefined1 *)(lVar7 + _DAT_112ea6ad8) = 1;
  puVar2 = PTR_s_initWithNibName_bundle__1125e9850;
  lStack_98 = lVar7;
  lStack_90 = lVar6;
  func_0x000107c61434(param_3);
  func_0x000107c61174(param_9);
  plVar8 = &lStack_98;
  func_0x000107c61154(plVar8,puVar2,0,0);
  func_0x000107c53dec();
  func_0x000107c54394(plVar8);
  FUN_102587194();
  func_0x000107c6142c(param_3);
  puVar9 = auStack_a8;
  func_0x000107c61154(puVar9,PTR_s_initWithTrayViewController_useSp_1125f2fa8,plVar8,0,8);
  func_0x000107c61180();
  FUN_102586d44();
  lVar3 = _DAT_112ea6a18;
  func_0x000107c61428(puVar9 + _DAT_112ea6a18,auStack_c0,1,0);
  *(undefined8 *)(puVar9 + lVar3) = param_1;
  func_0x000107c5a070(puVar9);
  func_0x000107c52684(puVar9);
  func_0x000107c5a05c(puVar9);
  func_0x000107c52aa4(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c615e8(param_2);
  func_0x000107c61170(param_9);
  func_0x000107c61170(plVar8);
  return puVar9;
}



/* Entry: 102586c40; end: 102586c9f; -[SCShareLocationWithFriendPromptTray initWithTrayViewController:useSpringAnimation:initialTrayPosition:] */

void FUN_102586c40(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShareLocationWithFriendPermissionModal.ShareLocationWithFriendPromptTray",
                      0x48,"init(trayViewController:useSpringAnimation:initialTrayPosition:)",0x40,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102586c6c);
  (*pcVar1)();
}



/* Entry: 102586ca0; end: 102586caf;  */

void FUN_102586ca0(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 102586cb0; end: 102586ccf;  */

void FUN_102586cb0(void)

{
  func_0x000107c61168(&PTR_PTR_11284f318);
  return;
}



/* Entry: 102586cd0; end: 102586cf7;  */

void FUN_102586cd0(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105226c0;
  if (lRam0000000112ea6a48 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112ea6a48 = param_1;
  }
  return;
}



/* Entry: 102586cf8; end: 102586d3b;  */

void FUN_102586cf8(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 102586d3c; end: 102586d43;  */

void FUN_102586d3c(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102586d44; end: 102586e43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_102586d44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  double dVar4;
  double dVar5;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ea6a58);
  if (lVar2 == 0) {
    dVar4 = 410.0;
  }
  else {
    func_0x000107c61174();
    lVar3 = lVar2;
    func_0x000107c5dbc0();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c5e07c();
      func_0x000107c615e8(lVar3);
    }
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102586e44);
      (*pcVar1)();
    }
    func_0x000107c3ec60();
    func_0x000107c61170(unaff_x20);
    func_0x000107c609cc(param_1,param_2,param_3,param_4);
    dVar5 = 1.79769313486232e+308;
    func_0x000107c5b098(lVar2);
    func_0x000107c61170(lVar2);
    dVar4 = 500.0;
    if (dVar5 + 24.0 <= 500.0) {
      dVar4 = dVar5 + 24.0;
    }
  }
  return dVar4;
}



/* Entry: 102586e44; end: 1025870c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102586e44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined4 param_16)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_90 [8];
  undefined1 auStack_80 [32];
  
  func_0x000107c610f8();
  lVar3 = _DAT_112ea6a60;
  func_0x000107c61614(unaff_x20 + _DAT_112ea6a60,0);
  lVar4 = _DAT_112ea6a68;
  func_0x000107c61614(unaff_x20 + _DAT_112ea6a68,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ea6a58) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ea6a70) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ea6a78);
  *puVar1 = 0xd00000000000004e;
  puVar1[1] = 0x800000010f0aacd0;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_80,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112ea6a80) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ea6a88);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ea6a90);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ea6a98) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112ea6aa0) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112ea6aa8) = param_9;
  *(undefined4 *)(unaff_x20 + _DAT_112ea6ab0) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112ea6ab8) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112ea6ac0) = param_13;
  func_0x000107c61604(unaff_x20 + lVar4,param_14);
  *(undefined8 *)(unaff_x20 + _DAT_112ea6ac8) = param_15;
  *(undefined1 *)(unaff_x20 + _DAT_112ea6ad0) = (undefined1)param_16;
  *(undefined1 *)(unaff_x20 + _DAT_112ea6ad8) = param_16._1_1_;
  FUN_102586ca0(param_5,param_6);
  puVar2 = PTR_s_initWithNibName_bundle__1125e9850;
  func_0x000107c615f0(param_13);
  func_0x000107c61174(param_15);
  puVar5 = auStack_90;
  func_0x000107c61154(puVar5,puVar2,0,0);
  func_0x000107c61180();
  func_0x000107c53dec();
  func_0x000107c54394(puVar5);
  FUN_102587194();
  func_0x000107c615e8(param_13);
  func_0x000107c615e8(param_14);
  func_0x000107c61170(param_15);
  FUN_102585548(param_5,param_6);
  func_0x000107c61170(puVar5);
  func_0x000107c615e8(param_1);
  return puVar5;
}



/* Entry: 1025870c8; end: 102587193; -[SCShareLocationWithFriendPromptViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025870c8(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  
  func_0x000107c61614(param_1 + _DAT_112ea6a60,0);
  func_0x000107c61614(param_1 + _DAT_112ea6a68,0);
  *(undefined8 *)(param_1 + _DAT_112ea6a58) = 0;
  *(undefined1 *)(param_1 + _DAT_112ea6a70) = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_112ea6a78);
  *puVar1 = 0xd00000000000004e;
  puVar1[1] = 0x800000010f0aacd0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000040,0x800000010ef218f0,
                      "ShareLocationWithFriendPermissionModal/ShareLocationWithFriendPromptViewController.swift"
                      ,0x58,2,0x46,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102587194);
  (*pcVar2)();
}



/* Entry: 102587194; end: 1025877ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102587194(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined *unaff_x20;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  
  FUN_1025878c8();
  lVar16 = *(long *)(unaff_x20 + _DAT_112ea6a98);
  lVar17 = *(long *)(unaff_x20 + _DAT_112ea6aa0);
  lVar18 = *(long *)(unaff_x20 + _DAT_112ea6aa8);
  puVar2 = PTR_PTR_1126aaac0;
  func_0x000107c610f8(PTR_PTR_1126aaac0);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c46a2c((double)lVar16,(double)lVar17,(double)lVar18,puVar2);
  func_0x000107c61170(param_1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c558d8(puVar2);
  func_0x000107c61170(puVar3);
  puVar3 = &UNK_1105227c8;
  func_0x000107c613fc(&UNK_1105227c8,0x18,7);
  *(undefined **)(puVar3 + 0x10) = unaff_x20;
  puVar4 = &UNK_1105227f0;
  func_0x000107c613fc(&UNK_1105227f0,0x18,7);
  *(undefined **)(puVar4 + 0x10) = unaff_x20;
  puVar5 = &UNK_110522818;
  func_0x000107c613fc(&UNK_110522818,0x18,7);
  *(undefined **)(puVar5 + 0x10) = unaff_x20;
  puVar6 = &UNK_110522840;
  func_0x000107c613fc(&UNK_110522840,0x18,7);
  *(undefined **)(puVar6 + 0x10) = unaff_x20;
  puVar7 = &UNK_110522868;
  func_0x000107c613fc(&UNK_110522868,0x18,7);
  *(undefined **)(puVar7 + 0x10) = unaff_x20;
  puVar8 = PTR_PTR_1126aaac8;
  func_0x000107c61174();
  func_0x000107c610f8(puVar8);
  puVar14 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_98 = FUN_1025887b0;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0x42000000;
  puStack_a8 = &UNK_1000f6b44;
  puStack_a0 = &UNK_110522880;
  ppuVar9 = &puStack_b8;
  puStack_90 = puVar3;
  func_0x000107c60bc4(ppuVar9);
  uStack_c8 = 0x1025887d0;
  puStack_e8 = puVar14;
  uStack_e0 = 0x42000000;
  puStack_d8 = &UNK_1000f6b44;
  puStack_d0 = &UNK_1105228a8;
  ppuVar10 = &puStack_e8;
  puStack_c0 = puVar4;
  func_0x000107c60bc4(ppuVar10);
  pcStack_f8 = FUN_1025887f0;
  puStack_118 = puVar14;
  uStack_110 = 0x42000000;
  puStack_108 = &UNK_1000f6b44;
  puStack_100 = &UNK_1105228d0;
  ppuVar11 = &puStack_118;
  puStack_f0 = puVar5;
  func_0x000107c60bc4(ppuVar11);
  uStack_128 = 0x1025887f8;
  puStack_148 = puVar14;
  uStack_140 = 0x42000000;
  puStack_138 = &UNK_1000f6b44;
  puStack_130 = &UNK_1105228f8;
  ppuVar12 = &puStack_148;
  puStack_120 = puVar6;
  func_0x000107c60bc4(ppuVar12);
  uStack_158 = 0x102588800;
  puStack_178 = puVar14;
  uStack_170 = 0x42000000;
  puStack_168 = &UNK_1000f6b44;
  puStack_160 = &UNK_110522920;
  ppuVar13 = &puStack_178;
  puStack_150 = puVar7;
  func_0x000107c60bc4(ppuVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c47bcc(puVar8);
  func_0x000107c60bd0(ppuVar13);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c61574(puStack_150);
  func_0x000107c61574(puStack_120);
  func_0x000107c61574(puStack_f0);
  func_0x000107c61574(puStack_c0);
  func_0x000107c61574(puStack_90);
  lVar16 = *(long *)(unaff_x20 + _DAT_112ea6ac8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar16 != 0) {
    lVar17 = lVar16;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar16);
    if (lVar17 != 0) {
      puVar3 = PTR_PTR_1126aaad0;
      func_0x000107c610f8();
      func_0x000107c49520();
      uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112ea6a58);
      *(undefined **)(unaff_x20 + _DAT_112ea6a58) = puVar3;
      func_0x000107c61174();
      func_0x000107c61170(uVar15);
      func_0x000107c5a050(puVar3);
      puVar4 = unaff_x20;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1025877f0);
        (*pcVar1)();
      }
      func_0x000107c3d89c();
      func_0x000107c61170();
      func_0x0001008478a8();
      func_0x000107c613fc();
      *(undefined8 *)(puVar4 + 0x18) = 9;
      *(undefined8 *)(puVar4 + 0x10) = 4;
      puVar5 = puVar3;
      func_0x000107c4acb0();
      func_0x000107c61180();
      puVar6 = unaff_x20;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1025877f4);
        (*pcVar1)();
      }
      puVar7 = puVar6;
      func_0x000107c4acb0();
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      puVar6 = puVar5;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar7);
      *(undefined **)(puVar4 + 0x20) = puVar6;
      puVar5 = puVar3;
      func_0x000107c5ce8c();
      func_0x000107c61180();
      puVar6 = unaff_x20;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1025877f8);
        (*pcVar1)();
      }
      puVar7 = puVar6;
      func_0x000107c5ce8c();
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      puVar6 = puVar5;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar7);
      *(undefined **)(puVar4 + 0x28) = puVar6;
      puVar5 = puVar3;
      func_0x000107c5cbe4();
      func_0x000107c61180();
      puVar6 = unaff_x20;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1025877fc);
        (*pcVar1)();
      }
      puVar7 = puVar6;
      func_0x000107c5cbe4();
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      puVar6 = puVar5;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar7);
      *(undefined **)(puVar4 + 0x30) = puVar6;
      puVar5 = puVar3;
      func_0x000107c3ec1c();
      func_0x000107c61180();
      func_0x000107c5de64();
      func_0x000107c61180();
      if (unaff_x20 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102587800);
        (*pcVar1)();
      }
      puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      puVar7 = unaff_x20;
      func_0x000107c3ec1c(unaff_x20);
      func_0x000107c61180();
      func_0x000107c61170(unaff_x20);
      puVar14 = puVar5;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar7);
      *(undefined **)(puVar4 + 0x38) = puVar14;
      uVar15 = 0;
      func_0x000100847984(0);
      puVar5 = puVar4;
      func_0x000107c5fc48(puVar4,uVar15);
      func_0x000107c61574(puVar4);
      func_0x000107c3d048(puVar6);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar8);
      func_0x000107c615e8(lVar17);
      puVar8 = puVar5;
      puVar2 = puVar3;
    }
  }
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar8);
  return;
}



/* Entry: 102587800; end: 10258783b; -[SCShareLocationWithFriendPromptViewController viewHeight] */

undefined8 FUN_102587800(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174();
  FUN_102586d44();
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 10258783c; end: 10258789f;  */

void FUN_10258783c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_3;
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1025878a0; end: 1025878c7; -[SCShareLocationWithFriendPromptViewController viewDidDisappear:] */

void FUN_1025878a0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102588668();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1025878c8; end: 102587adf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1025878c8(undefined8 param_1,ulong param_2)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  uVar5 = *(ulong *)(unaff_x20 + _DAT_112ea6a80);
  if (uVar5 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
    uVar6 = uVar3;
    if (1 < uVar3) goto LAB_102587900;
LAB_102587938:
    if (uVar3 == 0) {
LAB_1025879e4:
      if (uVar5 >> 0x3e == 0) {
        uVar3 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar3 = uVar5 & 0xffffffffffffff8;
        if ((uVar5 & 0x8000000000000000) != 0) {
          uVar3 = uVar5;
        }
        func_0x000107c60480();
      }
      if (uVar3 != 0) {
        if ((uVar5 & 0xc000000000000001) == 0) {
          if (*(long *)((uVar5 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102587adc);
            (*pcVar2)();
          }
          lVar4 = *(long *)(uVar5 + 0x20);
          func_0x000107c61174();
        }
        else {
          lVar4 = 0;
          func_0x00010111c5a8(0,uVar5);
        }
        uVar3 = *(ulong *)(lVar4 + _DAT_112fcd618);
        uVar5 = ((ulong *)(lVar4 + _DAT_112fcd618))[1];
        func_0x000107c61434(uVar5);
        func_0x000107c61170(lVar4);
        param_2 = uVar5;
        func_0x000107c5fadc(uVar3,uVar5);
        func_0x000107c6142c(uVar5);
        uVar6 = uVar3;
        func_0x00010901e6c8();
        goto LAB_102587a70;
      }
LAB_102587aa0:
      uVar5 = 0;
      param_2 = 0xe000000000000000;
      goto LAB_102587aa8;
    }
    if ((uVar5 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar5 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102587ac8);
        (*pcVar2)();
      }
      puVar1 = (ulong *)(*(long *)(uVar5 + 0x20) + _DAT_112fcd620);
      uVar6 = puVar1[1];
      if (uVar6 == 0) goto LAB_1025879e4;
      uVar3 = *puVar1;
      func_0x000107c61434(uVar6);
    }
    else {
      lVar4 = 0;
      func_0x00010111c5a8(0,uVar5);
      uVar3 = *(ulong *)(lVar4 + _DAT_112fcd620);
      uVar6 = ((ulong *)(lVar4 + _DAT_112fcd620))[1];
      func_0x000107c61434(uVar6);
      func_0x000107c615e8(lVar4);
      if (uVar6 == 0) goto LAB_1025879e4;
    }
    param_2 = uVar6;
    func_0x000107c5fadc(uVar3,uVar6);
    func_0x000107c6142c(uVar6);
    uVar6 = uVar3;
    func_0x00010901e6c8();
LAB_102587a70:
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    if (uVar6 == 0) goto LAB_102587aa0;
  }
  else {
    uVar3 = uVar5 & 0xffffffffffffff8;
    if ((uVar5 & 0x8000000000000000) != 0) {
      uVar3 = uVar5;
    }
    uVar6 = uVar3;
    func_0x000107c60480();
    if ((long)uVar6 < 2) {
      func_0x000107c60480();
      goto LAB_102587938;
    }
LAB_102587900:
    func_0x00010687537c();
    func_0x000107c61180();
    if (uVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102587ae0);
      (*pcVar2)();
    }
  }
  uVar5 = uVar6;
  func_0x000107c5faec(uVar6);
  func_0x000107c61170(uVar6);
LAB_102587aa8:
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = uVar5;
  return auVar7;
}



/* Entry: 102587ae0; end: 102587c6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102587ae0(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = _DAT_112ea6a60;
  func_0x000107c61428(unaff_x20 + _DAT_112ea6a60,auStack_78,0,0);
  lVar1 = unaff_x20 + lVar1;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = unaff_x20 + _DAT_112ea6a68;
    func_0x000107c61618(lVar2);
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ea6a80);
    uVar3 = 0;
    func_0x000103a2db6c(0);
    func_0x000107c5fc48(uVar5,uVar3);
    lVar4 = *(long *)(unaff_x20 + _DAT_112ea6a90);
    if (lVar4 == 0) {
      ppuVar6 = (undefined **)0x0;
    }
    else {
      lVar7 = ((long *)(unaff_x20 + _DAT_112ea6a90))[1];
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      pcStack_98 = FUN_10258783c;
      puStack_90 = &UNK_110522768;
      ppuVar6 = &puStack_a8;
      lStack_88 = lVar4;
      lStack_80 = lVar7;
      func_0x000107c60bc4(ppuVar6);
      lVar4 = lStack_80;
      func_0x000107c6157c(lVar7);
      func_0x000107c61574(lVar4);
    }
    func_0x000107c4f4d0(lVar1);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c615e8(lVar1);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar5);
  }
  *(undefined1 *)(unaff_x20 + _DAT_112ea6a70) = 1;
  return;
}



/* Entry: 102587c6c; end: 102587de3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102587c6c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar1 = _DAT_112ea6a60;
  func_0x000107c61428(unaff_x20 + _DAT_112ea6a60,auStack_68,0,0);
  lVar1 = unaff_x20 + lVar1;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = unaff_x20 + _DAT_112ea6a68;
    func_0x000107c61618(lVar2);
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ea6a80);
    uVar3 = 0;
    func_0x000103a2db6c(0);
    func_0x000107c5fc48(uVar5,uVar3);
    lVar4 = *(long *)(unaff_x20 + _DAT_112ea6a90);
    if (lVar4 == 0) {
      ppuVar6 = (undefined **)0x0;
    }
    else {
      lVar7 = ((long *)(unaff_x20 + _DAT_112ea6a90))[1];
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0x42000000;
      pcStack_88 = FUN_10258783c;
      puStack_80 = &UNK_110522998;
      ppuVar6 = &puStack_98;
      lStack_78 = lVar4;
      lStack_70 = lVar7;
      func_0x000107c60bc4(ppuVar6);
      lVar4 = lStack_70;
      func_0x000107c6157c(lVar7);
      func_0x000107c61574(lVar4);
    }
    func_0x000107c4f4d0(lVar1);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c615e8(lVar1);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar5);
  }
  *(undefined1 *)(unaff_x20 + _DAT_112ea6a70) = 1;
  return;
}



/* Entry: 102587de4; end: 1025884bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102587de4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_112ea6a60;
  func_0x000107c61428(param_1 + _DAT_112ea6a60,auStack_58,0,0);
  lVar1 = param_1 + lVar1;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + _DAT_112ea6a90);
    if (lVar2 == 0) {
      ppuVar3 = (undefined **)0x0;
    }
    else {
      lVar4 = ((long *)(param_1 + _DAT_112ea6a90))[1];
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      pcStack_78 = FUN_10258783c;
      puStack_70 = &UNK_110522970;
      ppuVar3 = &puStack_88;
      lStack_68 = lVar2;
      lStack_60 = lVar4;
      func_0x000107c60bc4(ppuVar3);
      lVar2 = lStack_60;
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(lVar2);
    }
    func_0x000107c4f4e4(lVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(lVar1);
  }
  *(undefined1 *)(param_1 + _DAT_112ea6a70) = 1;
  return;
}



/* Entry: 1025884c0; end: 1025884e7; -[SCShareLocationWithFriendPromptViewController didTapShareButton] */

void FUN_1025884c0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102587ae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1025884e8; end: 10258850f; -[SCShareLocationWithFriendPromptViewController didTapSettingsButton] */

void FUN_1025884e8(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x0001025880f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102588510; end: 102588537; -[SCShareLocationWithFriendPromptViewController didTapLearnMoreButton] */

void FUN_102588510(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x00010258835c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102588538; end: 10258855f; -[SCShareLocationWithFriendPromptViewController didTapCancelButton] */

void FUN_102588538(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000102587ee4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102588560; end: 1025885bf; -[SCShareLocationWithFriendPromptViewController initWithNibName:bundle:] */

void FUN_102588560(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShareLocationWithFriendPermissionModal.ShareLocationWithFriendPromptViewController"
                      ,0x52,"init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10258858c);
  (*pcVar1)();
}



/* Entry: 1025885c0; end: 10258865f; -[SCShareLocationWithFriendPromptViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001025885ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025885f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025885c0(long param_1)

{
  func_0x000100cf9f64(param_1 + _DAT_112ea6a60);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ea6a80));
  return;
}



/* Entry: 102588660; end: 102588667; -[SCShareLocationWithFriendPromptViewController tray:canUseGestureToExpandOrCollapse:] */

undefined8 FUN_102588660(void)

{
  return 0;
}



/* Entry: 102588668; end: 102588773;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102588668(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_112ea6a60;
  if (((*(byte *)(unaff_x20 + _DAT_112ea6ad8) & 1) == 0) &&
     ((*(byte *)(unaff_x20 + _DAT_112ea6a70) & 1) == 0)) {
    func_0x000107c61428(unaff_x20 + _DAT_112ea6a60,auStack_58,0,0);
    lVar1 = unaff_x20 + lVar1;
    func_0x000107c61618();
    if (lVar1 != 0) {
      lVar2 = *(long *)(unaff_x20 + _DAT_112ea6a90);
      if (lVar2 == 0) {
        ppuVar3 = (undefined **)0x0;
      }
      else {
        lVar4 = ((long *)(unaff_x20 + _DAT_112ea6a90))[1];
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0x42000000;
        pcStack_78 = FUN_10258783c;
        puStack_70 = &UNK_110522790;
        ppuVar3 = &puStack_88;
        lStack_68 = lVar2;
        lStack_60 = lVar4;
        func_0x000107c60bc4(ppuVar3);
        lVar2 = lStack_60;
        func_0x000107c6157c(lVar4);
        func_0x000107c61574(lVar2);
      }
      func_0x000107c4f4e4(lVar1);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 102588774; end: 102588793;  */

void FUN_102588774(void)

{
  func_0x000107c61168(&PTR_PTR_11284f3d8);
  return;
}



/* Entry: 102588794; end: 1025887af;  */

void FUN_102588794(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1025887b0; end: 1025887ef;  */

void FUN_1025887b0(void)

{
  FUN_102587ae0();
  return;
}



/* Entry: 1025887f0; end: 10258885f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025887f0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined **ppuVar4;
  long lVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_112ea6a60;
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar2 + _DAT_112ea6a60,auStack_58,0,0);
  lVar1 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar2 + _DAT_112ea6a90);
    if (lVar3 == 0) {
      ppuVar4 = (undefined **)0x0;
    }
    else {
      lVar5 = ((long *)(lVar2 + _DAT_112ea6a90))[1];
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      pcStack_78 = FUN_10258783c;
      puStack_70 = &UNK_110522970;
      ppuVar4 = &puStack_88;
      lStack_68 = lVar3;
      lStack_60 = lVar5;
      func_0x000107c60bc4(ppuVar4);
      lVar3 = lStack_60;
      func_0x000107c6157c(lVar5);
      func_0x000107c61574(lVar3);
    }
    func_0x000107c4f4e4(lVar1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(lVar1);
  }
  *(undefined1 *)(lVar2 + _DAT_112ea6a70) = 1;
  return;
}



/* Entry: 102588860; end: 102588957;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102588860(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  puVar3 = auStack_70;
  func_0x000107c610f8();
  lVar2 = _DAT_112ea6b08;
  func_0x000107c61614(unaff_x20 + _DAT_112ea6b08,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ea6b10) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ea6b18);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61604(unaff_x20 + lVar2,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112ea6b20) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ea6b28) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ea6b30) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ea6b38);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  return puVar3;
}



/* Entry: 102588958; end: 1025889b7; -[_TtC37VenueEditorPageLauncherImplementation34VenueEditorActionSheetPageLauncher init] */

void FUN_102588958(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("VenueEditorPageLauncherImplementation.VenueEditorActionSheetPageLauncher",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102588984);
  (*pcVar1)();
}



/* Entry: 1025889b8; end: 102588a47; -[_TtC37VenueEditorPageLauncherImplementation34VenueEditorActionSheetPageLauncher .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025889b8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ea6b08);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea6b10));
  func_0x000100f1d208(*(undefined8 *)(param_1 + _DAT_112ea6b18),
                      ((undefined8 *)(param_1 + _DAT_112ea6b18))[1]);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea6b20));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea6b28));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea6b30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ea6b38 + 8))
  ;
  return;
}



/* Entry: 102588a48; end: 102588a8b;  */

void FUN_102588a48(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ea6b40 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126aaad8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112ea6b40 = puVar1;
  return;
}



/* Entry: 102588a8c; end: 102588a8f; -[_TtC37VenueEditorPageLauncherImplementation34VenueEditorActionSheetPageLauncher setComposerPayloadClass:] */

void FUN_102588a8c(void)

{
  return;
}



/* Entry: 102588a90; end: 102588a93; -[_TtC37VenueEditorPageLauncherImplementation34VenueEditorActionSheetPageLauncher setPayloadClass:] */

void FUN_102588a90(void)

{
  return;
}



/* Entry: 102588a94; end: 102588a9b; -[_TtC37VenueEditorPageLauncherImplementation34VenueEditorActionSheetPageLauncher payloadType] */

undefined8 FUN_102588a94(void)

{
  return 9;
}



/* Entry: 102588a9c; end: 102588df7;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102588a9c(undefined8 param_1,code *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long alStack_78 [5];
  
  func_0x0001000bb420(param_1,alStack_78 + 1);
  uVar3 = 0;
  FUN_102588a48(0);
  plVar4 = alStack_78;
  plVar7 = alStack_78 + 1;
  func_0x000107c6147c(plVar4,plVar7,PTR___sypN_11034f1a8 + 8,uVar3,6);
  if (((ulong)plVar4 & 1) != 0) {
    lVar5 = alStack_78[0];
    func_0x000107c4e7c0();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar6 = lVar5;
      func_0x000107c5faec();
      func_0x000107c61170(lVar5);
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ea6b18);
      uVar3 = *puVar1;
      uVar2 = puVar1[1];
      *puVar1 = param_2;
      puVar1[1] = param_3;
      func_0x000100f1d248(param_2,param_3);
      func_0x000100f1d208(uVar3,uVar2);
      func_0x000102588bc4(alStack_78[0],lVar6,plVar7,param_2,param_3);
      func_0x000107c61170(alStack_78[0]);
      func_0x000107c6142c(plVar7);
      return;
    }
    func_0x000107c61170(alStack_78[0]);
  }
  if (param_2 != (code *)0x0) {
    alStack_78[2] = 0;
    alStack_78[1] = 0;
    alStack_78[4] = 0;
    alStack_78[3] = 0;
    (*param_2)(0,alStack_78 + 1);
    func_0x00010006e7f4(alStack_78 + 1);
  }
  return;
}



/* Entry: 102588df8; end: 102588f63; -[_TtC37VenueEditorPageLauncherImplementation34VenueEditorActionSheetPageLauncher launchWithPayload:completion:] */

void FUN_102588df8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined1 auStack_50 [32];
  
  func_0x000107c60bc4();
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  if (param_4 == 0) {
    puVar2 = (undefined *)0x0;
    pcVar1 = (code *)0x0;
  }
  else {
    puVar2 = &UNK_110522a58;
    func_0x000107c613fc(&UNK_110522a58,0x18,7);
    *(long *)(puVar2 + 0x10) = param_4;
    pcVar1 = FUN_102588fac;
  }
  FUN_102588a9c(auStack_50,pcVar1,puVar2);
  func_0x000100f1d208(pcVar1,puVar2);
  func_0x000107c61170(param_1);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102588f64; end: 102588f8b; -[_TtC37VenueEditorPageLauncherImplementation34VenueEditorActionSheetPageLauncher venueEditorScreenDidDismiss] */

void FUN_102588f64(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000102588eb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102588f8c; end: 102588fab;  */

void FUN_102588f8c(void)

{
  func_0x000107c61168(&PTR_PTR_11284f518);
  return;
}



/* Entry: 102588fac; end: 102588fb3;  */

void FUN_102588fac(long param_1,undefined8 param_2)

{
  long lVar1;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5ed2c();
  }
  func_0x000100f1d1c0(param_2,auStack_70,0x112d387f8,&UNK_10d902650);
  if (lStack_58 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_70,lStack_58);
    lVar4 = *(long *)(lStack_58 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
    puVar3 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar4 + 0x10))(puVar3);
    puVar2 = puVar3;
    func_0x000107c605b0(puVar3,lStack_58);
    (**(code **)(lVar4 + 8))(puVar3,lStack_58);
    func_0x000100183ab8(auStack_70);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(puVar2);
  return;
}



/* Entry: 102588fb4; end: 102588fb7; -[_TtC37VenueEditorPageLauncherImplementation34VenueEditorActionSheetPageLauncher composerPayloadClass] */

void FUN_102588fb4(void)

{
  FUN_102588a48(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 102588fb8; end: 102588fbb; -[_TtC37VenueEditorPageLauncherImplementation34VenueEditorActionSheetPageLauncher payloadClass] */

void FUN_102588fb8(void)

{
  FUN_102588a48(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 102588fbc; end: 10258905f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102588fbc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar3 = auStack_50;
  func_0x000107c610f8();
  lVar2 = _DAT_112ea6b70;
  func_0x000107c61614(unaff_x20 + _DAT_112ea6b70,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ea6b78);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61604(unaff_x20 + lVar2,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112ea6b80) = param_2;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  return puVar3;
}



/* Entry: 102589060; end: 1025890bf; -[_TtC37VenueEditorPageLauncherImplementation32VenueEditorAddAPlacePageLauncher init] */

void FUN_102589060(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("VenueEditorPageLauncherImplementation.VenueEditorAddAPlacePageLauncher",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10258908c);
  (*pcVar1)();
}



/* Entry: 1025890c0; end: 10258910b; -[_TtC37VenueEditorPageLauncherImplementation32VenueEditorAddAPlacePageLauncher .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025890c0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ea6b70);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea6b80));
  if (*(long *)(param_1 + _DAT_112ea6b78) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112ea6b78))[1]);
    return;
  }
  return;
}



/* Entry: 10258910c; end: 10258914f;  */

void FUN_10258910c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ea6b88 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126aaae0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112ea6b88 = puVar1;
  return;
}



/* Entry: 102589150; end: 102589153; -[_TtC37VenueEditorPageLauncherImplementation32VenueEditorAddAPlacePageLauncher setComposerPayloadClass:] */

void FUN_102589150(void)

{
  return;
}



/* Entry: 102589154; end: 102589157; -[_TtC37VenueEditorPageLauncherImplementation32VenueEditorAddAPlacePageLauncher setPayloadClass:] */

void FUN_102589154(void)

{
  return;
}



/* Entry: 102589158; end: 10258915f; -[_TtC37VenueEditorPageLauncherImplementation32VenueEditorAddAPlacePageLauncher payloadType] */

undefined8 FUN_102589158(void)

{
  return 8;
}



/* Entry: 102589160; end: 102589413;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102589160(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long unaff_x20;
  ulong auStack_88 [5];
  
  func_0x0001000bb420(param_2,auStack_88 + 1);
  uVar2 = 0;
  FUN_10258910c(0);
  puVar3 = auStack_88;
  func_0x000107c6147c(puVar3,auStack_88 + 1,PTR___sypN_11034f1a8 + 8,uVar2,6);
  if (((ulong)puVar3 & 1) != 0) {
    uVar4 = unaff_x20 + _DAT_112ea6b70;
    func_0x000107c61618();
    if (uVar4 != 0) {
      uVar5 = uVar4;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      if (uVar5 != 0) {
        uVar4 = uVar5;
        func_0x000107c61150(uVar5,PTR_s_respondsToSelector__11262c7e0,
                            PTR_s_topmostViewController_11267b0f0);
        if ((uVar4 & 1) != 0) {
          uVar4 = uVar5;
          func_0x000107c5cc6c(uVar5);
          func_0x000107c61180();
          func_0x000107c615e8(uVar5);
          puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ea6b78);
          uVar2 = *puVar1;
          uVar6 = puVar1[1];
          *puVar1 = param_3;
          puVar1[1] = param_4;
          func_0x000100f1d248(param_3,param_4);
          func_0x000100f1d208(uVar2,uVar6);
          uVar5 = auStack_88[0];
          func_0x000107c4aad8();
          func_0x000107c61180();
          if (uVar5 != 0) {
            func_0x000107c4223c();
            uVar2 = param_1;
            func_0x000107c61170(uVar5);
            uVar5 = auStack_88[0];
            func_0x000107c4b6f0();
            func_0x000107c61180();
            if (uVar5 != 0) {
              func_0x000107c4223c();
              func_0x000107c61170(uVar5);
              func_0x000103ed7eb8(0);
              func_0x000107c610f8();
              func_0x000107c61174(uVar4);
              uVar6 = 0;
              func_0x000103ed7cec(0,0);
              func_0x000107c4d0b4(auStack_88[0]);
              puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
              func_0x000107c46ecc();
              func_0x0001005138f4(0);
              func_0x000107c610f8();
              func_0x000107c61174();
              uVar5 = uVar4;
              func_0x000103ed7824(param_1,uVar2,uVar4,uVar6,puVar7,unaff_x20);
              func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112ea6b80));
              func_0x000107c61170(auStack_88[0]);
              func_0x000107c61170(uVar4);
              auStack_88[0] = uVar5;
              goto LAB_10258940c;
            }
          }
          if (param_3 == (code *)0x0) {
            func_0x000107c61170(uVar4);
LAB_10258940c:
            func_0x000107c61170(auStack_88[0]);
            return;
          }
          auStack_88[2] = 0;
          auStack_88[1] = 0;
          auStack_88[4] = 0;
          auStack_88[3] = 0;
          (*param_3)(0,auStack_88 + 1);
          func_0x000107c61170(uVar4);
          func_0x000107c61170(auStack_88[0]);
          goto LAB_102589390;
        }
        func_0x000107c61170(auStack_88[0]);
        func_0x000107c615e8(uVar5);
        goto joined_r0x000102589374;
      }
    }
    func_0x000107c61170(auStack_88[0]);
  }
joined_r0x000102589374:
  if (param_3 == (code *)0x0) {
    return;
  }
  auStack_88[2] = 0;
  auStack_88[1] = 0;
  auStack_88[4] = 0;
  auStack_88[3] = 0;
  (*param_3)(0,auStack_88 + 1);
LAB_102589390:
  func_0x00010006e7f4(auStack_88 + 1);
  return;
}



/* Entry: 102589414; end: 10258957f; -[_TtC37VenueEditorPageLauncherImplementation32VenueEditorAddAPlacePageLauncher launchWithPayload:completion:] */

void FUN_102589414(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined1 auStack_50 [32];
  
  func_0x000107c60bc4();
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  if (param_4 == 0) {
    puVar2 = (undefined *)0x0;
    pcVar1 = (code *)0x0;
  }
  else {
    puVar2 = &UNK_110522a80;
    func_0x000107c613fc(&UNK_110522a80,0x18,7);
    *(long *)(puVar2 + 0x10) = param_4;
    pcVar1 = FUN_1025895c8;
  }
  FUN_102589160(auStack_50,pcVar1,puVar2);
  func_0x000100f1d208(pcVar1,puVar2);
  func_0x000107c61170(param_1);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102589580; end: 10258959f;  */

void FUN_102589580(void)

{
  func_0x000107c61168(&PTR_PTR_11284f608);
  return;
}



/* Entry: 1025895a0; end: 1025895c7; -[_TtC37VenueEditorPageLauncherImplementation32VenueEditorAddAPlacePageLauncher venueEditorScreenDidDismiss] */

void FUN_1025895a0(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x0001025894d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1025895c8; end: 1025895cf;  */

void FUN_1025895c8(long param_1,undefined8 param_2)

{
  long lVar1;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5ed2c();
  }
  func_0x000100f1d1c0(param_2,auStack_70,0x112d387f8,&UNK_10d902650);
  if (lStack_58 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_70,lStack_58);
    lVar4 = *(long *)(lStack_58 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
    puVar3 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar4 + 0x10))(puVar3);
    puVar2 = puVar3;
    func_0x000107c605b0(puVar3,lStack_58);
    (**(code **)(lVar4 + 8))(puVar3,lStack_58);
    func_0x000100183ab8(auStack_70);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(puVar2);
  return;
}



/* Entry: 1025895d0; end: 1025895d3; -[_TtC37VenueEditorPageLauncherImplementation32VenueEditorAddAPlacePageLauncher composerPayloadClass] */

void FUN_1025895d0(void)

{
  FUN_10258910c(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 1025895d4; end: 1025895d7; -[_TtC37VenueEditorPageLauncherImplementation32VenueEditorAddAPlacePageLauncher payloadClass] */

void FUN_1025895d4(void)

{
  FUN_10258910c(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 1025895d8; end: 10258967b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1025895d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar3 = auStack_50;
  func_0x000107c610f8();
  lVar2 = _DAT_112ea6bb8;
  func_0x000107c61614(unaff_x20 + _DAT_112ea6bb8,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ea6bc0);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61604(unaff_x20 + lVar2,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112ea6bc8) = param_2;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  return puVar3;
}



/* Entry: 10258967c; end: 1025896db; -[_TtC37VenueEditorPageLauncherImplementation23VenueEditorPageLauncher init] */

void FUN_10258967c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("VenueEditorPageLauncherImplementation.VenueEditorPageLauncher",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1025896a8);
  (*pcVar1)();
}



/* Entry: 1025896dc; end: 102589727; -[_TtC37VenueEditorPageLauncherImplementation23VenueEditorPageLauncher .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025896dc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ea6bb8);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea6bc8));
  if (*(long *)(param_1 + _DAT_112ea6bc0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112ea6bc0))[1]);
    return;
  }
  return;
}



/* Entry: 102589728; end: 10258976b;  */

void FUN_102589728(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ea6bd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126aaae8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112ea6bd0 = puVar1;
  return;
}



/* Entry: 10258976c; end: 10258976f; -[_TtC37VenueEditorPageLauncherImplementation23VenueEditorPageLauncher setComposerPayloadClass:] */

void FUN_10258976c(void)

{
  return;
}



/* Entry: 102589770; end: 102589773; -[_TtC37VenueEditorPageLauncherImplementation23VenueEditorPageLauncher setPayloadClass:] */

void FUN_102589770(void)

{
  return;
}



/* Entry: 102589774; end: 10258977b; -[_TtC37VenueEditorPageLauncherImplementation23VenueEditorPageLauncher payloadType] */

undefined8 FUN_102589774(void)

{
  return 7;
}



/* Entry: 10258977c; end: 102589a3b;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10258977c(undefined8 param_1,code *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  long alStack_88 [5];
  
  func_0x0001000bb420(param_1,alStack_88 + 1);
  uVar3 = 0;
  FUN_102589728(0);
  plVar4 = alStack_88;
  func_0x000107c6147c(plVar4,alStack_88 + 1,PTR___sypN_11034f1a8 + 8,uVar3,6);
  if (((ulong)plVar4 & 1) != 0) {
    uVar5 = unaff_x20 + _DAT_112ea6bb8;
    func_0x000107c61618();
    if (uVar5 != 0) {
      uVar6 = uVar5;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      if (uVar6 != 0) {
        uVar5 = uVar6;
        func_0x000107c61150(uVar6,PTR_s_respondsToSelector__11262c7e0,
                            PTR_s_topmostViewController_11267b0f0);
        if ((uVar5 & 1) != 0) {
          uVar5 = uVar6;
          func_0x000107c5cc6c(uVar6);
          func_0x000107c61180();
          func_0x000107c615e8(uVar6);
          puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ea6bc0);
          uVar3 = *puVar1;
          uVar2 = puVar1[1];
          *puVar1 = param_2;
          puVar1[1] = param_3;
          func_0x000100f1d248(param_2,param_3);
          func_0x000100f1d208(uVar3,uVar2);
          lVar7 = alStack_88[0];
          func_0x000107c4c3f0();
          func_0x000107c61180();
          if (lVar7 == 0) {
            lVar11 = 0;
          }
          else {
            lVar11 = lVar7;
            func_0x000107c5d388();
            func_0x000107c61170(lVar7);
          }
          lVar7 = alStack_88[0];
          func_0x000107c4e7e8();
          func_0x000107c61180();
          if (lVar7 == 0) {
            lVar10 = 0;
          }
          else {
            lVar10 = lVar7;
            func_0x000107c5d388();
            func_0x000107c61170(lVar7);
          }
          uVar3 = 0;
          func_0x000103ed7eb8(0);
          func_0x000107c610f8();
          func_0x000103ed7cec(lVar11,lVar10,uVar3);
          func_0x000107c61174(uVar5);
          lVar7 = alStack_88[0];
          func_0x000107c4e7c0(alStack_88[0]);
          func_0x000107c61180();
          lVar8 = lVar7;
          func_0x000107c5faec();
          func_0x000107c61170(lVar7);
          lVar7 = lVar11;
          func_0x000107c61174(lVar11);
          func_0x000107c4d0b4(alStack_88[0]);
          puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x000107c46ecc();
          func_0x0001005138f4(0);
          func_0x000107c610f8();
          func_0x000107c61174();
          uVar6 = uVar5;
          func_0x000103ed7578(uVar5,lVar8,lVar10,lVar11,puVar9,unaff_x20);
          func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112ea6bc8));
          func_0x000107c61170(alStack_88[0]);
          func_0x000107c61170(uVar5);
          func_0x000107c61170(lVar7);
          func_0x000107c61170(uVar6);
          return;
        }
        func_0x000107c61170(alStack_88[0]);
        func_0x000107c615e8(uVar6);
        goto joined_r0x0001025898a8;
      }
    }
    func_0x000107c61170(alStack_88[0]);
  }
joined_r0x0001025898a8:
  if (param_2 != (code *)0x0) {
    alStack_88[2] = 0;
    alStack_88[1] = 0;
    alStack_88[4] = 0;
    alStack_88[3] = 0;
    (*param_2)(0,alStack_88 + 1);
    func_0x00010006e7f4(alStack_88 + 1);
  }
  return;
}



/* Entry: 102589a3c; end: 102589ba7; -[_TtC37VenueEditorPageLauncherImplementation23VenueEditorPageLauncher launchWithPayload:completion:] */

void FUN_102589a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined1 auStack_50 [32];
  
  func_0x000107c60bc4();
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  if (param_4 == 0) {
    puVar2 = (undefined *)0x0;
    pcVar1 = (code *)0x0;
  }
  else {
    puVar2 = &UNK_110522aa8;
    func_0x000107c613fc(&UNK_110522aa8,0x18,7);
    *(long *)(puVar2 + 0x10) = param_4;
    pcVar1 = FUN_102589bf0;
  }
  FUN_10258977c(auStack_50,pcVar1,puVar2);
  func_0x000100f1d208(pcVar1,puVar2);
  func_0x000107c61170(param_1);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102589ba8; end: 102589bc7;  */

void FUN_102589ba8(void)

{
  func_0x000107c61168(&PTR_PTR_11284f6d8);
  return;
}



/* Entry: 102589bc8; end: 102589bef; -[_TtC37VenueEditorPageLauncherImplementation23VenueEditorPageLauncher venueEditorScreenDidDismiss] */

void FUN_102589bc8(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000102589afc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102589bf0; end: 102589bf7;  */

void FUN_102589bf0(long param_1,undefined8 param_2)

{
  long lVar1;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5ed2c();
  }
  func_0x000100f1d1c0(param_2,auStack_70,0x112d387f8,&UNK_10d902650);
  if (lStack_58 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_70,lStack_58);
    lVar4 = *(long *)(lStack_58 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
    puVar3 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar4 + 0x10))(puVar3);
    puVar2 = puVar3;
    func_0x000107c605b0(puVar3,lStack_58);
    (**(code **)(lVar4 + 8))(puVar3,lStack_58);
    func_0x000100183ab8(auStack_70);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(puVar2);
  return;
}



/* Entry: 102589bf8; end: 102589bfb; -[_TtC37VenueEditorPageLauncherImplementation23VenueEditorPageLauncher composerPayloadClass] */

void FUN_102589bf8(void)

{
  FUN_102589728(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 102589bfc; end: 102589bff; -[_TtC37VenueEditorPageLauncherImplementation23VenueEditorPageLauncher payloadClass] */

void FUN_102589bfc(void)

{
  FUN_102589728(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 102589c00; end: 102589cbb;  */

void FUN_102589c00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e4c7e0,&UNK_10da460f0);
  puVar1 = &UNK_110522ad0;
  func_0x000107c613fc(&UNK_110522ad0,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(FUN_10258a084,puVar1);
  return;
}



/* Entry: 102589cbc; end: 10258a083;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102589cbc(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  undefined *puVar15;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&lStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&lStack_90);
  FUN_10258a658();
  lVar3 = param_2;
  func_0x000107c610f8();
  func_0x0001000285a8(0x112e84d88,&UNK_10dab88e0);
  func_0x000107c610f8();
  lVar4 = lStack_78;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar5 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170();
  func_0x00010451338c();
  lVar6 = 0;
  FUN_102589ba8();
  lVar7 = lVar6;
  func_0x000107c610f8();
  lVar2 = _DAT_112ea6bb8;
  func_0x000107c61614(lVar7 + _DAT_112ea6bb8,0);
  puVar1 = (undefined8 *)(lVar7 + _DAT_112ea6bc0);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61604(lVar7 + lVar2,lVar4);
  *(undefined **)(lVar7 + _DAT_112ea6bc8) = puVar5;
  puVar15 = PTR_s_init_1125d9248;
  lStack_a0 = lVar7;
  lStack_98 = lVar6;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  plVar8 = &lStack_a0;
  func_0x000107c61154();
  func_0x000107c61170();
  func_0x00010451338c();
  uVar9 = uStack_80;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  uVar10 = uStack_88;
  func_0x000107c4d604();
  func_0x000107c61180();
  uVar11 = *(undefined8 *)(lStack_90 + _DAT_113083f78);
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar12 = uVar11;
  func_0x000107c5faec();
  func_0x000107c61170(uVar11);
  lVar6 = 0;
  FUN_102588f8c();
  lVar7 = lVar6;
  func_0x000107c610f8();
  lVar2 = _DAT_112ea6b08;
  func_0x000107c61614(lVar7 + _DAT_112ea6b08,0);
  *(undefined8 *)(lVar7 + _DAT_112ea6b10) = 0;
  puVar1 = (undefined8 *)(lVar7 + _DAT_112ea6b18);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61604(lVar7 + lVar2,lVar4);
  *(undefined **)(lVar7 + _DAT_112ea6b20) = puVar5;
  *(undefined8 *)(lVar7 + _DAT_112ea6b28) = uVar9;
  *(undefined8 *)(lVar7 + _DAT_112ea6b30) = uVar10;
  puVar1 = (undefined8 *)(lVar7 + _DAT_112ea6b38);
  *puVar1 = uVar12;
  puVar1[1] = puVar15;
  plVar13 = &lStack_b0;
  lStack_b0 = lVar7;
  lStack_a8 = lVar6;
  func_0x000107c61154(plVar13,PTR_s_init_1125d9248);
  func_0x000107c61170();
  func_0x00010451338c();
  lVar6 = 0;
  FUN_102589580();
  lVar7 = lVar6;
  func_0x000107c610f8();
  lVar2 = _DAT_112ea6b70;
  func_0x000107c61614(lVar7 + _DAT_112ea6b70,0);
  puVar1 = (undefined8 *)(lVar7 + _DAT_112ea6b78);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61604(lVar7 + lVar2,lVar4);
  *(undefined **)(lVar7 + _DAT_112ea6b80) = puVar5;
  plVar14 = &lStack_c0;
  lStack_c0 = lVar7;
  lStack_b8 = lVar6;
  func_0x000107c61154(plVar14,PTR_s_init_1125d9248);
  func_0x000107c61170();
  func_0x00010258a634();
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = 7;
  *(undefined8 *)(lVar4 + 0x10) = 3;
  func_0x000107c61170(puVar5);
  *(long **)(lVar4 + 0x20) = plVar8;
  *(long **)(lVar4 + 0x28) = plVar13;
  *(long **)(lVar4 + 0x30) = plVar14;
  *(long *)(lVar3 + _DAT_112ea6c00) = lVar4;
  plVar8 = &lStack_d0;
  lStack_d0 = lVar3;
  lStack_c8 = param_2;
  func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
  func_0x000107c61170(lStack_90);
  func_0x000107c61170(auStack_70[0]);
  func_0x000107c61574(lStack_78);
  func_0x000107c61170(uStack_80);
  func_0x000107c61170(uStack_88);
  *param_1 = (long)plVar8;
  return;
}



/* Entry: 10258a084; end: 10258a093;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10258a084(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  undefined *puVar16;
  long unaff_x20;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 auStack_70 [2];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(auStack_70,lVar3,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  func_0x000100083b20(&lStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&lStack_90);
  FUN_10258a658();
  lVar4 = lVar3;
  func_0x000107c610f8();
  func_0x0001000285a8(0x112e84d88,&UNK_10dab88e0);
  func_0x000107c610f8();
  lVar5 = lStack_78;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar6 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170();
  func_0x00010451338c();
  lVar7 = 0;
  FUN_102589ba8();
  lVar8 = lVar7;
  func_0x000107c610f8();
  lVar2 = _DAT_112ea6bb8;
  func_0x000107c61614(lVar8 + _DAT_112ea6bb8,0);
  puVar1 = (undefined8 *)(lVar8 + _DAT_112ea6bc0);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61604(lVar8 + lVar2,lVar5);
  *(undefined **)(lVar8 + _DAT_112ea6bc8) = puVar6;
  puVar16 = PTR_s_init_1125d9248;
  lStack_a0 = lVar8;
  lStack_98 = lVar7;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  plVar9 = &lStack_a0;
  func_0x000107c61154();
  func_0x000107c61170();
  func_0x00010451338c();
  uVar10 = uStack_80;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  uVar11 = uStack_88;
  func_0x000107c4d604();
  func_0x000107c61180();
  uVar12 = *(undefined8 *)(lStack_90 + _DAT_113083f78);
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar13 = uVar12;
  func_0x000107c5faec();
  func_0x000107c61170(uVar12);
  lVar7 = 0;
  FUN_102588f8c();
  lVar8 = lVar7;
  func_0x000107c610f8();
  lVar2 = _DAT_112ea6b08;
  func_0x000107c61614(lVar8 + _DAT_112ea6b08,0);
  *(undefined8 *)(lVar8 + _DAT_112ea6b10) = 0;
  puVar1 = (undefined8 *)(lVar8 + _DAT_112ea6b18);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61604(lVar8 + lVar2,lVar5);
  *(undefined **)(lVar8 + _DAT_112ea6b20) = puVar6;
  *(undefined8 *)(lVar8 + _DAT_112ea6b28) = uVar10;
  *(undefined8 *)(lVar8 + _DAT_112ea6b30) = uVar11;
  puVar1 = (undefined8 *)(lVar8 + _DAT_112ea6b38);
  *puVar1 = uVar13;
  puVar1[1] = puVar16;
  plVar14 = &lStack_b0;
  lStack_b0 = lVar8;
  lStack_a8 = lVar7;
  func_0x000107c61154(plVar14,PTR_s_init_1125d9248);
  func_0x000107c61170();
  func_0x00010451338c();
  lVar7 = 0;
  FUN_102589580();
  lVar8 = lVar7;
  func_0x000107c610f8();
  lVar2 = _DAT_112ea6b70;
  func_0x000107c61614(lVar8 + _DAT_112ea6b70,0);
  puVar1 = (undefined8 *)(lVar8 + _DAT_112ea6b78);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61604(lVar8 + lVar2,lVar5);
  *(undefined **)(lVar8 + _DAT_112ea6b80) = puVar6;
  plVar15 = &lStack_c0;
  lStack_c0 = lVar8;
  lStack_b8 = lVar7;
  func_0x000107c61154(plVar15,PTR_s_init_1125d9248);
  func_0x000107c61170();
  func_0x00010258a634();
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x18) = 7;
  *(undefined8 *)(lVar5 + 0x10) = 3;
  func_0x000107c61170(puVar6);
  *(long **)(lVar5 + 0x20) = plVar9;
  *(long **)(lVar5 + 0x28) = plVar14;
  *(long **)(lVar5 + 0x30) = plVar15;
  *(long *)(lVar4 + _DAT_112ea6c00) = lVar5;
  plVar9 = &lStack_d0;
  lStack_d0 = lVar4;
  lStack_c8 = lVar3;
  func_0x000107c61154(plVar9,PTR_s_init_1125d9248);
  func_0x000107c61170(lStack_90);
  func_0x000107c61170(auStack_70[0]);
  func_0x000107c61574(lStack_78);
  func_0x000107c61170(uStack_80);
  func_0x000107c61170(uStack_88);
  *param_1 = (long)plVar9;
  return;
}



/* Entry: 10258a094; end: 10258a3fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10258a094(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  long unaff_x20;
  undefined1 auStack_a0 [16];
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x000107c610f8();
  func_0x0001000285a8(0x112e84d88,&UNK_10dab88e0);
  func_0x000107c610f8();
  lVar3 = param_2;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar4 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170();
  func_0x00010451338c();
  lVar5 = 0;
  FUN_102589ba8();
  lVar6 = lVar5;
  func_0x000107c610f8();
  lVar2 = _DAT_112ea6bb8;
  func_0x000107c61614(lVar6 + _DAT_112ea6bb8,0);
  puVar1 = (undefined8 *)(lVar6 + _DAT_112ea6bc0);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61604(lVar6 + lVar2,lVar3);
  *(undefined **)(lVar6 + _DAT_112ea6bc8) = puVar4;
  puVar15 = PTR_s_init_1125d9248;
  lStack_70 = lVar6;
  lStack_68 = lVar5;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  plVar7 = &lStack_70;
  func_0x000107c61154();
  func_0x000107c61170();
  func_0x00010451338c();
  uVar8 = param_3;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  uVar9 = param_4;
  func_0x000107c4d604();
  func_0x000107c61180();
  uVar10 = *(undefined8 *)(param_5 + _DAT_113083f78);
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar11 = uVar10;
  func_0x000107c5faec();
  func_0x000107c61170(uVar10);
  lVar5 = 0;
  FUN_102588f8c();
  lVar6 = lVar5;
  func_0x000107c610f8();
  lVar2 = _DAT_112ea6b08;
  func_0x000107c61614(lVar6 + _DAT_112ea6b08,0);
  *(undefined8 *)(lVar6 + _DAT_112ea6b10) = 0;
  puVar1 = (undefined8 *)(lVar6 + _DAT_112ea6b18);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61604(lVar6 + lVar2,lVar3);
  *(undefined **)(lVar6 + _DAT_112ea6b20) = puVar4;
  *(undefined8 *)(lVar6 + _DAT_112ea6b28) = uVar8;
  *(undefined8 *)(lVar6 + _DAT_112ea6b30) = uVar9;
  puVar1 = (undefined8 *)(lVar6 + _DAT_112ea6b38);
  *puVar1 = uVar11;
  puVar1[1] = puVar15;
  plVar12 = &lStack_80;
  lStack_80 = lVar6;
  lStack_78 = lVar5;
  func_0x000107c61154(plVar12,PTR_s_init_1125d9248);
  func_0x000107c61170();
  func_0x00010451338c();
  lVar5 = 0;
  FUN_102589580();
  lVar6 = lVar5;
  func_0x000107c610f8();
  lVar2 = _DAT_112ea6b70;
  func_0x000107c61614(lVar6 + _DAT_112ea6b70,0);
  puVar1 = (undefined8 *)(lVar6 + _DAT_112ea6b78);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61604(lVar6 + lVar2,lVar3);
  *(undefined **)(lVar6 + _DAT_112ea6b80) = puVar4;
  plVar13 = &lStack_90;
  lStack_90 = lVar6;
  lStack_88 = lVar5;
  func_0x000107c61154(plVar13,PTR_s_init_1125d9248);
  func_0x000107c61170();
  func_0x00010258a634();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 7;
  *(undefined8 *)(lVar3 + 0x10) = 3;
  func_0x000107c61170(puVar4);
  *(long **)(lVar3 + 0x20) = plVar7;
  *(long **)(lVar3 + 0x28) = plVar12;
  *(long **)(lVar3 + 0x30) = plVar13;
  *(long *)(unaff_x20 + _DAT_112ea6c00) = lVar3;
  puVar14 = auStack_a0;
  func_0x000107c61154(puVar14,PTR_s_init_1125d9248);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return puVar14;
}



/* Entry: 10258a3fc; end: 10258a417; -[_TtC37VenueEditorPageLauncherImplementation29VenueEditorPageLauncherPlugin composerNativePayloadHandlers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10258a3fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = 0x112d4bc30;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112ea6c00);
  func_0x000107c61174();
  uVar1 = uVar3;
  func_0x000107c61434(uVar3);
  FUN_10258a41c();
  func_0x000107c61170(param_1);
  func_0x000107c6142c(uVar3);
  func_0x0001000285a8(0x112d4bc30,&DAT_10d912660);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10258a418; end: 10258a41b; -[_TtC37VenueEditorPageLauncherImplementation29VenueEditorPageLauncherPlugin setComposerNativePayloadHandlers:] */

void FUN_10258a418(void)

{
  return;
}



/* Entry: 10258a41c; end: 10258a507;  */

ulong FUN_10258a41c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_48;
  
  if (param_1 >> 0x3e == 0) {
    uVar3 = param_1 & 0xffffffffffffff8;
    uVar2 = param_1;
    func_0x000107c61434();
    func_0x000107c605f8();
    func_0x0001000285a8(param_2,param_3);
    func_0x000107c61488(uVar2,param_2);
    if (uVar2 == 0) {
      lVar4 = *(long *)(uVar3 + 0x10);
      plVar5 = (long *)(uVar3 + 0x20);
      do {
        if (lVar4 == 0) {
          return param_1;
        }
        lVar1 = *plVar5;
        uStack_48 = *param_4;
        func_0x000107c61494(lVar1,1,&uStack_48);
        lVar4 = lVar4 + -1;
        plVar5 = plVar5 + 1;
      } while (lVar1 != 0);
      param_1 = uVar3 | 1;
    }
  }
  else {
    uVar2 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar2 = param_1;
    }
    func_0x000107c61434(param_1);
    func_0x0001000285a8(param_2,param_3);
    func_0x000107c60458(uVar2,param_2);
    func_0x000107c6142c(param_1);
    param_1 = uVar2;
  }
  return param_1;
}



/* Entry: 10258a508; end: 10258a523; -[_TtC37VenueEditorPageLauncherImplementation29VenueEditorPageLauncherPlugin nativePayloadHandlers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10258a508(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = 0x112d4bc28;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112ea6c00);
  func_0x000107c61174();
  uVar1 = uVar3;
  func_0x000107c61434(uVar3);
  FUN_10258a41c();
  func_0x000107c61170(param_1);
  func_0x000107c6142c(uVar3);
  func_0x0001000285a8(0x112d4bc28,&DAT_10d9133e0);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10258a524; end: 10258a5bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10258a524(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ea6c00);
  func_0x000107c61174();
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  FUN_10258a41c();
  func_0x000107c61170(param_1);
  func_0x000107c6142c(uVar2);
  func_0x0001000285a8(param_3,param_4);
  uVar2 = uVar1;
  func_0x000107c5fc48(uVar1,param_3);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10258a5c0; end: 10258a5c3; -[_TtC37VenueEditorPageLauncherImplementation29VenueEditorPageLauncherPlugin setNativePayloadHandlers:] */

void FUN_10258a5c0(void)

{
  return;
}



/* Entry: 10258a5c4; end: 10258a623; -[_TtC37VenueEditorPageLauncherImplementation29VenueEditorPageLauncherPlugin init] */

void FUN_10258a5c4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("VenueEditorPageLauncherImplementation.VenueEditorPageLauncherPlugin",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10258a5f0);
  (*pcVar1)();
}



/* Entry: 10258a624; end: 10258a657; -[_TtC37VenueEditorPageLauncherImplementation29VenueEditorPageLauncherPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10258a624(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ea6c00));
  return;
}



/* Entry: 10258a658; end: 10258a677;  */

void FUN_10258a658(void)

{
  func_0x000107c61168(&PTR_PTR_11284f7a8);
  return;
}



/* Entry: 10258a678; end: 10258a6e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10258a678(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10258aa6c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ea6c40) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10258a6e4; end: 10258a74f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10258a6e4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea6c40) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10258a750; end: 10258a7af; -[_TtC35FullMapScopedFactoryServiceProvider23SCFullMapScopedServices init] */

void FUN_10258a750(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FullMapScopedFactoryServiceProvider.SCFullMapScopedServices",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10258a77c);
  (*pcVar1)();
}



/* Entry: 10258a7b0; end: 10258a7bf; -[_TtC35FullMapScopedFactoryServiceProvider23SCFullMapScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10258a7b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ea6c40));
  return;
}


