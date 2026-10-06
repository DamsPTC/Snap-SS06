/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107427c54; end: 107427cdb;  */

int FUN_107427c54(long param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = 0;
  iVar3 = 4;
  pbVar2 = (byte *)*param_2;
  do {
    uVar4 = (uint)*pbVar2;
    if (uVar4 - 0x30 < 10) {
      iVar5 = -0x30;
    }
    else if (uVar4 - 0x41 < 6) {
      iVar5 = -0x37;
    }
    else {
      if (5 < uVar4 - 0x61) {
        *(undefined4 *)(param_1 + 0x30) = 8;
        *(undefined8 *)(param_1 + 0x38) = param_3;
        return 0;
      }
      iVar5 = -0x57;
    }
    iVar1 = (uint)*pbVar2 + iVar1 * 0x10 + iVar5;
    *param_2 = pbVar2 + 1;
    iVar3 = iVar3 + -1;
    pbVar2 = pbVar2 + 1;
  } while (iVar3 != 0);
  return iVar1;
}



/* Entry: 107427cdc; end: 107427d9f;  */

void FUN_107427cdc(long param_1)

{
  long unaff_x19;
  long lVar1;
  ulong uVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x00010742b258();
  uVar2 = *(ulong *)(param_1 + 8);
  if (uVar2 < *(ulong *)(param_1 + 0x10)) {
    FUN_107427da0(uVar2);
    lVar1 = uVar2 + 400;
    *(long *)(unaff_x19 + 8) = lVar1;
  }
  else {
    FUN_1074270a8();
    func_0x00010742b52c();
    FUN_10742718c(auStack_58);
    FUN_107427da0();
    lStack_48 = lStack_48 + 400;
    func_0x00010742bb50();
    FUN_107427100();
    lVar1 = *(long *)(unaff_x19 + 8);
    FUN_1074271e8(auStack_58);
  }
  *(long *)(unaff_x19 + 8) = lVar1;
  return;
}



/* Entry: 107427da0; end: 107427dd3;  */

void FUN_107427da0(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100171ec4();
  _memcpy();
  func_0x00010028b0c8(unaff_x20 + 0x88,unaff_x19 + 0x88);
  func_0x00010742b8ec();
  return;
}



/* Entry: 107427dd4; end: 107427e2f;  */

undefined4 FUN_107427dd4(int param_1)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 0x2700:
    return 1;
  case 0x2701:
    return 4;
  case 0x2702:
    return 2;
  case 0x2703:
    return 5;
  }
  uVar1 = 0;
  if (param_1 != 0x2600) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 107427e30; end: 107427e63;  */

void FUN_107427e30(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100171ec4();
  FUN_107427e64();
  func_0x000104c318bc(param_1 + 0x48,unaff_x19 + 0x48);
  *(undefined1 *)(unaff_x20 + 0x80) = *(undefined1 *)(unaff_x19 + 0x80);
  return;
}



/* Entry: 107427e64; end: 107427e93;  */

undefined1 * FUN_107427e64(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  FUN_107427e94();
  return param_1;
}



/* Entry: 107427e94; end: 107427edb;  */

void FUN_107427e94(void)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010742b258();
  FUN_107425f68();
  uVar1 = *(uint *)(unaff_x20 + 0x40);
  if (uVar1 != 0xffffffff) {
    func_0x00010742b650((&PTR_FUN_1109af1b8)[uVar1]);
    *(uint *)(unaff_x19 + 0x40) = uVar1;
  }
  return;
}



/* Entry: 107427edc; end: 107427ef3;  */

void FUN_107427edc(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = *param_2;
  uVar2 = param_2[1];
  param_2[1] = 0;
  puVar1[1] = uVar2;
  *(undefined2 *)(puVar1 + 2) = *(undefined2 *)(param_2 + 2);
  *param_2 = 0;
  *(undefined1 *)(param_2 + 2) = 1;
  return;
}



/* Entry: 107427ef4; end: 107427f3b;  */

long * FUN_107427ef4(long *param_1,long *param_2)

{
  ulong uVar1;
  long extraout_x8;
  long *plVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar3;
  
  if (param_2 < (long *)0x1e1e1e1e1e1e1e2) {
    uVar1 = (param_1[2] - *param_1) / 0x88;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0xf0f0f0f0f0f0ef < uVar1) {
      plVar2 = (long *)0x1e1e1e1e1e1e1e1;
    }
    return plVar2;
  }
  FUN_107427f90();
  func_0x00010742b1d0();
  plVar2 = param_1 + 2;
  lVar3 = extraout_x8 + ((param_1[1] - *param_1) / -0x88) * 0x88;
  FUN_107428020(plVar2,*param_1,param_1[1],lVar3);
  *(long *)(unaff_x19 + 8) = lVar3;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010742ad40();
  return plVar2;
}



/* Entry: 107427f3c; end: 107427f8f;  */

void FUN_107427f3c(long *param_1)

{
  long extraout_x8;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar1;
  
  func_0x00010742b1d0();
  lVar1 = extraout_x8 + ((param_1[1] - *param_1) / -0x88) * 0x88;
  FUN_107428020(param_1 + 2,*param_1,param_1[1],lVar1);
  *(long *)(unaff_x19 + 8) = lVar1;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010742ad40();
  return;
}



/* Entry: 107427f90; end: 107427f9b;  */

void FUN_107427f90(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010742ae94();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x000107427fd8(param_4);
  }
  func_0x00010742bb5c(0x88);
  return;
}



/* Entry: 107427f9c; end: 107427ff7;  */

void FUN_107427f9c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x000107427fd8(param_4);
  }
  func_0x00010742bb5c(0x88);
  return;
}



/* Entry: 107427ff8; end: 10742801f;  */

void FUN_107427ff8(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  ulong unaff_x19;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 < 0x1e1e1e1e1e1e1e2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x88);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010742b5e4();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (; lStack_48 = param_4, param_2 != unaff_x19; param_2 = param_2 + 0x88) {
    FUN_107427e30(param_4,param_2);
    param_4 = lStack_48 + 0x88;
  }
  uStack_58 = 1;
  FUN_1074280b0();
  FUN_1074280e0(&uStack_70);
  return;
}



/* Entry: 107428020; end: 1074280af;  */

void FUN_107428020(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long unaff_x19;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  func_0x00010742b5e4();
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (; lStack_38 = param_4, param_2 != unaff_x19; param_2 = param_2 + 0x88) {
    FUN_107427e30(param_4,param_2);
    param_4 = lStack_38 + 0x88;
  }
  uStack_48 = 1;
  FUN_1074280b0();
  FUN_1074280e0(&uStack_60);
  return;
}



/* Entry: 1074280b0; end: 1074280df;  */

void FUN_1074280b0(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x88) {
    func_0x000107425f3c();
  }
  return;
}



/* Entry: 1074280e0; end: 10742810f;  */

long FUN_1074280e0(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_107428110(param_1);
  }
  return param_1;
}



/* Entry: 107428110; end: 10742812f;  */

void FUN_107428110(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x88;
    func_0x000107425f3c();
  }
  return;
}



/* Entry: 107428130; end: 10742818b;  */

void FUN_107428130(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x88;
    func_0x000107425f3c();
  }
  return;
}



/* Entry: 10742818c; end: 107428193;  */

void FUN_10742818c(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100171ec4(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x88;
    func_0x000107425f3c();
  }
  return;
}



/* Entry: 107428194; end: 1074281c7;  */

void FUN_107428194(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100171ec4();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x88;
    func_0x000107425f3c();
  }
  return;
}



/* Entry: 1074281c8; end: 107428333;  */

long FUN_1074281c8(long *param_1,ulong *param_2)

{
  undefined8 uVar1;
  undefined1 in_NG;
  undefined1 in_ZR;
  bool bVar2;
  undefined1 uVar3;
  long *plVar4;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar5;
  undefined8 extraout_x8_01;
  ulong extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar6;
  ulong uVar7;
  ulong extraout_x9;
  undefined8 extraout_x9_00;
  long extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  ulong extraout_x10;
  long *unaff_x20;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x23;
  
  uVar10 = *param_2;
  uVar9 = param_1[1];
  plVar4 = param_1;
  if (uVar9 != 0) {
    func_0x00010742b8d0();
    if ((bool)in_ZR) {
      unaff_x23 = extraout_x8 & uVar10;
      in_ZR = true;
    }
    else {
      in_NG = (long)(uVar10 - uVar9) < 0;
      in_ZR = uVar10 == uVar9;
      unaff_x23 = uVar10;
      if (uVar9 <= uVar10) {
        uVar5 = 0;
        if (uVar9 != 0) {
          uVar5 = uVar10 / uVar9;
        }
        unaff_x23 = uVar10 - uVar5 * uVar9;
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x23 * 8);
    unaff_x20 = (long *)0x0;
    uVar5 = extraout_x8;
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x20 = (long *)*plVar8;
          if (unaff_x20 == (long *)0x0) goto LAB_10742826c;
          uVar7 = unaff_x20[1];
          plVar8 = unaff_x20;
          if (uVar7 != uVar10) break;
          in_NG = (long)(unaff_x20[2] - uVar10) < 0;
          in_ZR = false;
          if (unaff_x20[2] == uVar10) goto LAB_10742831c;
        }
        if ((uVar9 & uVar5) == 0) {
          uVar7 = uVar7 & uVar5;
        }
        else if (uVar9 <= uVar7) {
          func_0x00010742bb2c();
          uVar5 = extraout_x8_00;
          uVar7 = extraout_x9;
        }
        in_NG = (long)(uVar7 - unaff_x23) < 0;
        in_ZR = uVar7 == unaff_x23;
      } while ((bool)in_ZR);
    }
  }
LAB_10742826c:
  func_0x00010742b73c();
  func_0x00010742b1b4();
  *(undefined4 *)(plVar4 + 3) = 0;
  *(undefined1 *)((long)plVar4 + 0x1c) = 0;
  func_0x00010742b5b0();
  if ((uVar9 == 0) || (func_0x00010742ba44(), (bool)in_NG)) {
    func_0x00010742b378();
    bVar2 = 2 < uVar9;
    uVar3 = uVar9 == 3;
    func_0x00010742b048();
    uVar1 = extraout_x8_01;
    if (!bVar2 || (bool)uVar3) {
      uVar1 = extraout_x9_00;
    }
    FUN_107426df4(param_1,uVar1);
    uVar9 = param_1[1];
    func_0x00010742b8d0();
    if ((bool)uVar3) {
      in_ZR = 1;
      unaff_x23 = extraout_x8_02 & uVar10;
    }
    else {
      in_ZR = uVar10 == uVar9;
      unaff_x23 = uVar10;
      if (uVar9 <= uVar10) {
        uVar5 = 0;
        if (uVar9 != 0) {
          uVar5 = uVar10 / uVar9;
        }
        unaff_x23 = uVar10 - uVar5 * uVar9;
      }
    }
  }
  if (*(long *)(*param_1 + unaff_x23 * 8) == 0) {
    func_0x00010742b360();
    if (extraout_x9_01 != 0) {
      func_0x00010742b9f4();
      lVar6 = extraout_x8_03;
      if ((bool)in_ZR) {
        uVar10 = extraout_x9_02 & extraout_x10;
      }
      else {
        uVar10 = extraout_x9_02;
        if (uVar9 <= extraout_x9_02) {
          func_0x00010742bb2c();
          lVar6 = extraout_x8_04;
          uVar10 = extraout_x9_03;
        }
      }
      *(long **)(lVar6 + uVar10 * 8) = unaff_x20;
    }
  }
  else {
    func_0x00010742b588();
  }
  func_0x00010742b3c0();
  FUN_107426f58();
LAB_10742831c:
  return (long)unaff_x20 + 0x18;
}



/* Entry: 107428334; end: 10742849f;  */

long FUN_107428334(long *param_1,ulong *param_2)

{
  undefined8 uVar1;
  undefined1 in_NG;
  undefined1 in_ZR;
  bool bVar2;
  undefined1 uVar3;
  long *plVar4;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar5;
  undefined8 extraout_x8_01;
  ulong extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar6;
  ulong uVar7;
  ulong extraout_x9;
  undefined8 extraout_x9_00;
  long extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  ulong extraout_x10;
  long *unaff_x20;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x23;
  
  uVar10 = *param_2;
  uVar9 = param_1[1];
  plVar4 = param_1;
  if (uVar9 != 0) {
    func_0x00010742b8d0();
    if ((bool)in_ZR) {
      unaff_x23 = extraout_x8 & uVar10;
      in_ZR = true;
    }
    else {
      in_NG = (long)(uVar10 - uVar9) < 0;
      in_ZR = uVar10 == uVar9;
      unaff_x23 = uVar10;
      if (uVar9 <= uVar10) {
        uVar5 = 0;
        if (uVar9 != 0) {
          uVar5 = uVar10 / uVar9;
        }
        unaff_x23 = uVar10 - uVar5 * uVar9;
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x23 * 8);
    unaff_x20 = (long *)0x0;
    uVar5 = extraout_x8;
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x20 = (long *)*plVar8;
          if (unaff_x20 == (long *)0x0) goto LAB_1074283d8;
          uVar7 = unaff_x20[1];
          plVar8 = unaff_x20;
          if (uVar7 != uVar10) break;
          in_NG = (long)(unaff_x20[2] - uVar10) < 0;
          in_ZR = false;
          if (unaff_x20[2] == uVar10) goto LAB_107428488;
        }
        if ((uVar9 & uVar5) == 0) {
          uVar7 = uVar7 & uVar5;
        }
        else if (uVar9 <= uVar7) {
          func_0x00010742bb2c();
          uVar5 = extraout_x8_00;
          uVar7 = extraout_x9;
        }
        in_NG = (long)(uVar7 - unaff_x23) < 0;
        in_ZR = uVar7 == unaff_x23;
      } while ((bool)in_ZR);
    }
  }
LAB_1074283d8:
  func_0x00010742b73c();
  func_0x00010742b1b4();
  *(undefined1 *)(plVar4 + 3) = 0;
  *(undefined1 *)((long)plVar4 + 0x1c) = 0;
  func_0x00010742b5b0();
  if ((uVar9 == 0) || (func_0x00010742ba44(), (bool)in_NG)) {
    func_0x00010742b378();
    bVar2 = 2 < uVar9;
    uVar3 = uVar9 == 3;
    func_0x00010742b048();
    uVar1 = extraout_x8_01;
    if (!bVar2 || (bool)uVar3) {
      uVar1 = extraout_x9_00;
    }
    FUN_107426c68(param_1,uVar1);
    uVar9 = param_1[1];
    func_0x00010742b8d0();
    if ((bool)uVar3) {
      in_ZR = 1;
      unaff_x23 = extraout_x8_02 & uVar10;
    }
    else {
      in_ZR = uVar10 == uVar9;
      unaff_x23 = uVar10;
      if (uVar9 <= uVar10) {
        uVar5 = 0;
        if (uVar9 != 0) {
          uVar5 = uVar10 / uVar9;
        }
        unaff_x23 = uVar10 - uVar5 * uVar9;
      }
    }
  }
  if (*(long *)(*param_1 + unaff_x23 * 8) == 0) {
    func_0x00010742b360();
    if (extraout_x9_01 != 0) {
      func_0x00010742b9f4();
      lVar6 = extraout_x8_03;
      if ((bool)in_ZR) {
        uVar10 = extraout_x9_02 & extraout_x10;
      }
      else {
        uVar10 = extraout_x9_02;
        if (uVar9 <= extraout_x9_02) {
          func_0x00010742bb2c();
          lVar6 = extraout_x8_04;
          uVar10 = extraout_x9_03;
        }
      }
      *(long **)(lVar6 + uVar10 * 8) = unaff_x20;
    }
  }
  else {
    func_0x00010742b588();
  }
  func_0x00010742b3c0();
  FUN_107426dcc();
LAB_107428488:
  return (long)unaff_x20 + 0x18;
}



/* Entry: 1074284a0; end: 1074285eb;  */

void FUN_1074284a0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  func_0x00010742bf10();
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 < (undefined8 *)param_1[2]) {
    FUN_1074285ec(puVar4,param_2);
    puVar4 = puVar4 + 0x51;
  }
  else {
    lVar9 = (long)puVar4 - *param_1;
    uVar1 = lVar9 / 0x288 + 1;
    if (0x6522c3f35ba781 < uVar1) {
      FUN_1074286d0();
LAB_1074285e8:
      func_0x000104bd35f4();
      func_0x000100171ec4();
      uVar12 = *param_2;
      puVar4[1] = param_2[1];
      *puVar4 = uVar12;
      FUN_10742868c(puVar4 + 2,param_2 + 2);
      lVar9 = param_1[0x13];
      *(long *)(unaff_x20 + 0xa0) = param_1[0x14];
      *(long *)(unaff_x20 + 0x98) = lVar9;
      FUN_10742868c(unaff_x20 + 0xa8,param_1 + 0x15);
      lVar5 = param_1[0x27];
      lVar9 = param_1[0x26];
      *(int *)(unaff_x20 + 0x140) = (int)param_1[0x28];
      *(long *)(unaff_x20 + 0x138) = lVar5;
      *(long *)(unaff_x20 + 0x130) = lVar9;
      FUN_10742868c(unaff_x20 + 0x148,param_1 + 0x29);
      lVar9 = param_1[0x3a];
      *(undefined1 *)(unaff_x20 + 0x1d4) = *(undefined1 *)((long)param_1 + 0x1d4);
      *(int *)(unaff_x20 + 0x1d0) = (int)lVar9;
      FUN_10742868c(unaff_x20 + 0x1d8,param_1 + 0x3b);
      lVar5 = param_1[0x4d];
      lVar9 = param_1[0x4c];
      *(char *)(unaff_x20 + 0x270) = (char)param_1[0x4e];
      *(long *)(unaff_x20 + 0x268) = lVar5;
      *(long *)(unaff_x20 + 0x260) = lVar9;
      *(long *)(unaff_x20 + 0x278) = param_1[0x4f];
      *(long *)(unaff_x20 + 0x280) = param_1[0x50];
      param_1[0x50] = 0;
      param_1[0x4f] = 0;
      return;
    }
    uVar3 = (param_1[2] - *param_1) / 0x288;
    uVar7 = uVar3 * 2;
    if (uVar7 < uVar1 || uVar7 - uVar1 == 0) {
      uVar7 = uVar1;
    }
    if (0x329161f9add3bf < uVar3) {
      uVar7 = 0x6522c3f35ba781;
    }
    if (uVar7 == 0) {
      lVar5 = 0;
    }
    else {
      if (0x6522c3f35ba781 < uVar7) goto LAB_1074285e8;
      lVar5 = uVar7 * 0x288;
      __Znwm();
    }
    lVar9 = lVar5 + lVar9;
    func_0x00010742b178();
    FUN_1074285ec();
    lVar8 = *param_1;
    lVar2 = param_1[1];
    lVar11 = lVar9 + ((lVar2 - lVar8) / -0x288) * 0x288;
    lVar6 = lVar11;
    for (lVar10 = lVar8; lVar10 != lVar2; lVar10 = lVar10 + 0x288) {
      FUN_1074285ec(lVar6,lVar10);
      lVar6 = lVar6 + 0x288;
    }
    for (; lVar8 != lVar2; lVar8 = lVar8 + 0x288) {
      FUN_1073bc9f0(lVar8);
    }
    puVar4 = (undefined8 *)(lVar9 + 0x288);
    lVar9 = *param_1;
    *param_1 = lVar11;
    param_1[1] = (long)puVar4;
    param_1[2] = lVar5 + uVar7 * 0x288;
    if (lVar9 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar4;
  return;
}



/* Entry: 1074285ec; end: 10742868b;  */

void FUN_1074285ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000100171ec4();
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  FUN_10742868c(param_1 + 2,param_2 + 2);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x98);
  *(undefined8 *)(unaff_x20 + 0xa0) = *(undefined8 *)(unaff_x19 + 0xa0);
  *(undefined8 *)(unaff_x20 + 0x98) = uVar2;
  FUN_10742868c(unaff_x20 + 0xa8,unaff_x19 + 0xa8);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x138);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x130);
  *(undefined4 *)(unaff_x20 + 0x140) = *(undefined4 *)(unaff_x19 + 0x140);
  *(undefined8 *)(unaff_x20 + 0x138) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x130) = uVar2;
  FUN_10742868c(unaff_x20 + 0x148,unaff_x19 + 0x148);
  uVar1 = *(undefined4 *)(unaff_x19 + 0x1d0);
  *(undefined1 *)(unaff_x20 + 0x1d4) = *(undefined1 *)(unaff_x19 + 0x1d4);
  *(undefined4 *)(unaff_x20 + 0x1d0) = uVar1;
  FUN_10742868c(unaff_x20 + 0x1d8,unaff_x19 + 0x1d8);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x268);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x260);
  *(undefined1 *)(unaff_x20 + 0x270) = *(undefined1 *)(unaff_x19 + 0x270);
  *(undefined8 *)(unaff_x20 + 0x268) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x260) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x278) = *(undefined8 *)(unaff_x19 + 0x278);
  *(undefined8 *)(unaff_x20 + 0x280) = *(undefined8 *)(unaff_x19 + 0x280);
  *(undefined8 *)(unaff_x19 + 0x280) = 0;
  *(undefined8 *)(unaff_x19 + 0x278) = 0;
  return;
}



/* Entry: 10742868c; end: 1074286cf;  */

void FUN_10742868c(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x000100171ec4();
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x000104c318bc(param_1 + 2,param_2 + 2);
  func_0x0001072649c8(param_1 + 9,unaff_x19 + 0x48);
  return;
}



/* Entry: 1074286d0; end: 1074286db;  */

void FUN_1074286d0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined8 *extraout_x8;
  undefined8 *extraout_x9;
  undefined8 *puVar8;
  ulong uVar9;
  long *unaff_x19;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_78 [16];
  undefined4 *puStack_68;
  long lStack_50;
  undefined8 *puStack_48;
  long lStack_40;
  
  func_0x00010742ae94();
  func_0x00010742bf10();
  puVar6 = param_2;
  func_0x00010742b828();
  if (extraout_x8 < extraout_x9) {
    uVar12 = *param_2;
    uVar14 = param_2[3];
    uVar13 = param_2[2];
    extraout_x8[1] = param_2[1];
    *extraout_x8 = uVar12;
    extraout_x8[3] = uVar14;
    extraout_x8[2] = uVar13;
    puVar6 = extraout_x8 + 4;
LAB_107428790:
    unaff_x19[1] = (long)puVar6;
    return;
  }
  lVar10 = *unaff_x19;
  lVar11 = (long)extraout_x8 - lVar10;
  uVar1 = (lVar11 >> 5) + 1;
  if (uVar1 >> 0x3b == 0) {
    uVar9 = (long)extraout_x9 - lVar10 >> 4;
    if (uVar9 <= uVar1) {
      uVar9 = uVar1;
    }
    if (0x7fffffffffffffdf < (ulong)((long)extraout_x9 - lVar10)) {
      uVar9 = 0x7ffffffffffffff;
    }
    if (uVar9 >> 0x3b == 0) {
      lVar5 = uVar9 << 5;
      __Znwm();
      puVar8 = (undefined8 *)(lVar5 + lVar11);
      uVar12 = *param_2;
      uVar14 = param_2[3];
      uVar13 = param_2[2];
      puVar8[1] = param_2[1];
      *puVar8 = uVar12;
      puVar8[3] = uVar14;
      puVar8[2] = uVar13;
      puVar6 = puVar8 + 4;
      _memcpy(puVar8 + (lVar11 >> 5) * -4,lVar10,lVar11);
      *unaff_x19 = (long)(puVar8 + (lVar11 >> 5) * -4);
      unaff_x19[1] = (long)puVar6;
      unaff_x19[2] = lVar5 + uVar9 * 0x20;
      if (lVar10 != 0) {
        func_0x00010742bd8c();
      }
      goto LAB_107428790;
    }
  }
  else {
    FUN_1074287a4();
  }
  func_0x000104bd35f4();
  func_0x00010742ae94();
  puVar8 = (undefined8 *)(param_1[1] - *param_1 >> 2);
  uVar3 = puVar8 <= puVar6;
  uVar4 = puVar6 == puVar8;
  if (!(bool)uVar3 || (bool)uVar4) {
    if (puVar6 < puVar8) {
      param_1[1] = *param_1 + (long)puVar6 * 4;
    }
    return;
  }
  lStack_50 = lVar11;
  puStack_48 = param_2;
  lStack_40 = lVar10;
  func_0x00010742b258();
  func_0x00010742bae4();
  if (!(bool)uVar3 || (bool)uVar4) {
    puVar7 = (undefined4 *)unaff_x19[1];
    puVar2 = puVar7;
    for (lVar11 = lVar10 << 2; lVar11 != 0; lVar11 = lVar11 + -4) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    unaff_x19[1] = (long)(puVar7 + lVar10);
    return;
  }
  func_0x00010742be60();
  func_0x00010014b1ac();
  func_0x00010742b52c();
  func_0x00010014b1fc(auStack_78);
  puVar2 = puStack_68;
  for (lVar11 = lVar10 << 2; lVar11 != 0; lVar11 = lVar11 + -4) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puStack_68 = puStack_68 + lVar10;
  func_0x00010742bb50();
  func_0x00010014b2a4();
  func_0x00010014b328(auStack_78);
  return;
}



/* Entry: 1074286dc; end: 1074287a3;  */

void FUN_1074286dc(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined8 *extraout_x8;
  undefined8 *extraout_x9;
  undefined8 *puVar8;
  ulong uVar9;
  long *unaff_x19;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_68 [16];
  undefined4 *puStack_58;
  long lStack_40;
  undefined8 *puStack_38;
  long lStack_30;
  
  func_0x00010742bf10();
  puVar6 = param_2;
  func_0x00010742b828();
  if (extraout_x8 < extraout_x9) {
    uVar12 = *param_2;
    uVar14 = param_2[3];
    uVar13 = param_2[2];
    extraout_x8[1] = param_2[1];
    *extraout_x8 = uVar12;
    extraout_x8[3] = uVar14;
    extraout_x8[2] = uVar13;
    puVar6 = extraout_x8 + 4;
LAB_107428790:
    unaff_x19[1] = (long)puVar6;
    return;
  }
  lVar10 = *unaff_x19;
  lVar11 = (long)extraout_x8 - lVar10;
  uVar1 = (lVar11 >> 5) + 1;
  if (uVar1 >> 0x3b == 0) {
    uVar9 = (long)extraout_x9 - lVar10 >> 4;
    if (uVar9 <= uVar1) {
      uVar9 = uVar1;
    }
    if (0x7fffffffffffffdf < (ulong)((long)extraout_x9 - lVar10)) {
      uVar9 = 0x7ffffffffffffff;
    }
    if (uVar9 >> 0x3b == 0) {
      lVar5 = uVar9 << 5;
      __Znwm();
      puVar8 = (undefined8 *)(lVar5 + lVar11);
      uVar12 = *param_2;
      uVar14 = param_2[3];
      uVar13 = param_2[2];
      puVar8[1] = param_2[1];
      *puVar8 = uVar12;
      puVar8[3] = uVar14;
      puVar8[2] = uVar13;
      puVar6 = puVar8 + 4;
      _memcpy(puVar8 + (lVar11 >> 5) * -4,lVar10,lVar11);
      *unaff_x19 = (long)(puVar8 + (lVar11 >> 5) * -4);
      unaff_x19[1] = (long)puVar6;
      unaff_x19[2] = lVar5 + uVar9 * 0x20;
      if (lVar10 != 0) {
        func_0x00010742bd8c();
      }
      goto LAB_107428790;
    }
  }
  else {
    FUN_1074287a4();
  }
  func_0x000104bd35f4();
  func_0x00010742ae94();
  puVar8 = (undefined8 *)(param_1[1] - *param_1 >> 2);
  uVar3 = puVar8 <= puVar6;
  uVar4 = puVar6 == puVar8;
  if (!(bool)uVar3 || (bool)uVar4) {
    if (puVar6 < puVar8) {
      param_1[1] = *param_1 + (long)puVar6 * 4;
    }
    return;
  }
  lStack_40 = lVar11;
  puStack_38 = param_2;
  lStack_30 = lVar10;
  func_0x00010742b258();
  func_0x00010742bae4();
  if (!(bool)uVar3 || (bool)uVar4) {
    puVar7 = (undefined4 *)unaff_x19[1];
    puVar2 = puVar7;
    for (lVar11 = lVar10 << 2; lVar11 != 0; lVar11 = lVar11 + -4) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    unaff_x19[1] = (long)(puVar7 + lVar10);
    return;
  }
  func_0x00010742be60();
  func_0x00010014b1ac();
  func_0x00010742b52c();
  func_0x00010014b1fc(auStack_68);
  puVar2 = puStack_58;
  for (lVar11 = lVar10 << 2; lVar11 != 0; lVar11 = lVar11 + -4) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puStack_58 = puStack_58 + lVar10;
  func_0x00010742bb50();
  func_0x00010014b2a4();
  func_0x00010014b328(auStack_68);
  return;
}



/* Entry: 1074287a4; end: 1074287af;  */

void FUN_1074287a4(long *param_1,ulong param_2)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_68 [16];
  undefined4 *puStack_58;
  
  func_0x00010742ae94();
  uVar5 = param_1[1] - *param_1 >> 2;
  uVar2 = uVar5 <= param_2;
  uVar3 = param_2 == uVar5;
  if (!(bool)uVar2 || (bool)uVar3) {
    if (param_2 < uVar5) {
      param_1[1] = *param_1 + param_2 * 4;
    }
    return;
  }
  func_0x00010742b258();
  func_0x00010742bae4();
  if (!(bool)uVar2 || (bool)uVar3) {
    puVar4 = *(undefined4 **)(unaff_x19 + 8);
    puVar1 = puVar4;
    for (lVar6 = unaff_x20 << 2; lVar6 != 0; lVar6 = lVar6 + -4) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    *(undefined4 **)(unaff_x19 + 8) = puVar4 + unaff_x20;
    return;
  }
  func_0x00010742be60();
  func_0x00010014b1ac();
  func_0x00010742b52c();
  func_0x00010014b1fc(auStack_68);
  puVar1 = puStack_58 + unaff_x20;
  for (lVar6 = unaff_x20 << 2; lVar6 != 0; lVar6 = lVar6 + -4) {
    *puStack_58 = 0;
    puStack_58 = puStack_58 + 1;
  }
  puStack_58 = puVar1;
  func_0x00010742bb50();
  func_0x00010014b2a4();
  func_0x00010014b328(auStack_68);
  return;
}



/* Entry: 1074287b0; end: 1074287df;  */

void FUN_1074287b0(long *param_1,ulong param_2)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_58 [16];
  undefined4 *puStack_48;
  
  uVar5 = param_1[1] - *param_1 >> 2;
  uVar2 = uVar5 <= param_2;
  uVar3 = param_2 == uVar5;
  if (!(bool)uVar2 || (bool)uVar3) {
    if (param_2 < uVar5) {
      param_1[1] = *param_1 + param_2 * 4;
    }
    return;
  }
  func_0x00010742b258(param_1,param_2 - uVar5);
  func_0x00010742bae4();
  if (!(bool)uVar2 || (bool)uVar3) {
    puVar4 = *(undefined4 **)(unaff_x19 + 8);
    puVar1 = puVar4;
    for (lVar6 = unaff_x20 << 2; lVar6 != 0; lVar6 = lVar6 + -4) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    *(undefined4 **)(unaff_x19 + 8) = puVar4 + unaff_x20;
    return;
  }
  func_0x00010742be60();
  func_0x00010014b1ac();
  func_0x00010742b52c();
  func_0x00010014b1fc(auStack_58);
  puVar1 = puStack_48 + unaff_x20;
  for (lVar6 = unaff_x20 << 2; lVar6 != 0; lVar6 = lVar6 + -4) {
    *puStack_48 = 0;
    puStack_48 = puStack_48 + 1;
  }
  puStack_48 = puVar1;
  func_0x00010742bb50();
  func_0x00010014b2a4();
  func_0x00010014b328(auStack_58);
  return;
}



/* Entry: 1074287e0; end: 107428897;  */

void FUN_1074287e0(double *param_1,double *param_2)

{
  double *pdVar1;
  double dVar2;
  
  dVar2 = *param_2;
  if (*param_1 <= *param_2) {
    dVar2 = *param_1;
  }
  pdVar1 = param_1 + 3;
  *param_1 = dVar2;
  dVar2 = param_2[3];
  if (param_2[3] <= *pdVar1) {
    dVar2 = *pdVar1;
  }
  *pdVar1 = dVar2;
  dVar2 = param_2[1];
  if (param_1[1] <= param_2[1]) {
    dVar2 = param_1[1];
  }
  param_1[1] = dVar2;
  dVar2 = param_2[4];
  if (param_2[4] <= param_1[4]) {
    dVar2 = param_1[4];
  }
  param_1[4] = dVar2;
  dVar2 = param_2[2];
  if (param_1[2] <= param_2[2]) {
    dVar2 = param_1[2];
  }
  param_1[2] = dVar2;
  dVar2 = param_2[5];
  if (param_2[5] <= param_1[5]) {
    dVar2 = param_1[5];
  }
  param_1[5] = dVar2;
  FUN_107429e24(param_1,pdVar1);
  func_0x00010742b6ac();
  func_0x00010742b998();
  func_0x000107429e44();
  func_0x00010742b8b4();
  return;
}



/* Entry: 107428898; end: 107428933;  */

void FUN_107428898(void)

{
  undefined4 *puVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined4 *puVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_58 [16];
  undefined4 *puStack_48;
  
  func_0x00010742b258();
  func_0x00010742bae4();
  if (!(bool)in_CY || (bool)in_ZR) {
    puVar2 = *(undefined4 **)(unaff_x19 + 8);
    puVar1 = puVar2;
    for (lVar3 = unaff_x20 << 2; lVar3 != 0; lVar3 = lVar3 + -4) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    *(undefined4 **)(unaff_x19 + 8) = puVar2 + unaff_x20;
    return;
  }
  func_0x00010742be60();
  func_0x00010014b1ac();
  func_0x00010742b52c();
  func_0x00010014b1fc(auStack_58);
  puVar1 = puStack_48 + unaff_x20;
  for (lVar3 = unaff_x20 << 2; lVar3 != 0; lVar3 = lVar3 + -4) {
    *puStack_48 = 0;
    puStack_48 = puStack_48 + 1;
  }
  puStack_48 = puVar1;
  func_0x00010742bb50();
  func_0x00010014b2a4();
  func_0x00010014b328(auStack_58);
  return;
}



/* Entry: 107428934; end: 107428983;  */

ulong FUN_107428934(undefined8 *param_1,ulong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar2 = 0;
  while( true ) {
    if ((param_2 & 0xffffffff) == uVar2) {
      return 0xffffffff;
    }
    uVar1 = *param_1;
    _strcmp(uVar1,param_3);
    if ((int)uVar1 == 0) break;
    uVar2 = uVar2 + 1;
    param_1 = param_1 + 3;
  }
  return uVar2;
}



/* Entry: 107428984; end: 107428a53;  */

void FUN_107428984(long param_1,long param_2)

{
  long unaff_x19;
  
  func_0x00010742bdc0();
  if ((*(long *)(param_2 + 0x30) != 0) && (*(long *)(*(long *)(param_2 + 0x30) + 8) != 0)) {
    func_0x00010742b0e0();
    if ((param_1 == 0) && (param_1 = *(long *)(param_2 + 0x28), param_1 == 0)) {
      func_0x00010742b57c();
    }
    *(long *)(unaff_x19 + 8) = param_1;
  }
  return;
}



/* Entry: 107428a54; end: 107428b07;  */

long * FUN_107428a54(long *param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long extraout_x8;
  long extraout_x9;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long *plStack_58;
  
  uVar2 = (param_1[1] - *param_1) / 0xc;
  uVar4 = param_2 - uVar2;
  if (param_2 < uVar2 || uVar4 == 0) {
    if (param_2 < uVar2) {
      param_1[1] = *param_1 + param_2 * 0xc;
    }
    return param_1;
  }
  plVar7 = param_1 + 2;
  lVar12 = *plVar7;
  puVar11 = (undefined8 *)param_1[1];
  if ((ulong)((lVar12 - (long)puVar11) / 0xc) < uVar4) {
    lVar13 = (long)puVar11 - *param_1;
    uVar2 = lVar13 / 0xc + uVar4;
    if (0x1555555555555555 < uVar2) {
      FUN_107428fbc();
LAB_107428fb8:
      func_0x000104bd35f4();
      func_0x00010742ae94();
      func_0x00010742b828();
      lVar12 = extraout_x9;
      while (lVar12 != extraout_x8) {
        lVar12 = lVar12 + -0xc;
        param_1[2] = lVar12;
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    uVar3 = (lVar12 - *param_1) / 0xc;
    uVar9 = uVar3 * 2;
    if (uVar9 < uVar2 || uVar9 - uVar2 == 0) {
      uVar9 = uVar2;
    }
    if (0xaaaaaaaaaaaaaa9 < uVar3) {
      uVar9 = 0x1555555555555555;
    }
    plStack_58 = plVar7;
    if (uVar9 == 0) {
      lVar6 = 0;
    }
    else {
      if (0x1555555555555555 < uVar9) goto LAB_107428fb8;
      lVar6 = uVar9 * 0xc;
      __Znwm();
    }
    puVar1 = (undefined8 *)(lVar6 + lVar13);
    puVar5 = puVar1;
    for (lVar13 = uVar4 * 0xc; lVar13 != 0; lVar13 = lVar13 + -0xc) {
      uVar8 = *param_3;
      *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(param_3 + 1);
      *puVar5 = uVar8;
      puVar5 = (undefined8 *)((long)puVar5 + 0xc);
    }
    lVar13 = *param_1;
    lVar10 = (long)puVar1 + (((long)puVar11 - lVar13) / -0xc) * 0xc;
    _memcpy(lVar10,lVar13);
    *param_1 = lVar10;
    param_1[1] = (long)puVar1 + uVar4 * 0xc;
    param_1[2] = lVar6 + uVar9 * 0xc;
    param_1 = &lStack_78;
    lStack_78 = lVar13;
    lStack_70 = lVar13;
    lStack_68 = lVar13;
    lStack_60 = lVar12;
    FUN_107428fc8(param_1);
  }
  else {
    puVar1 = puVar11;
    for (lVar12 = uVar4 * 0xc; lVar12 != 0; lVar12 = lVar12 + -0xc) {
      uVar8 = *param_3;
      *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_3 + 1);
      *puVar1 = uVar8;
      puVar1 = (undefined8 *)((long)puVar1 + 0xc);
    }
    param_1[1] = (long)puVar11 + uVar4 * 0xc;
  }
  return param_1;
}



/* Entry: 107428b08; end: 107428ba3;  */

undefined8 FUN_107428b08(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  long lVar3;
  undefined8 *unaff_x20;
  long *unaff_x21;
  
  func_0x00010742b5e4();
  uVar1 = *(undefined8 *)(param_2 + 8);
  _memcpy(*(undefined8 *)(param_2 + 0x10));
  lVar2 = *unaff_x21;
  lVar3 = unaff_x20[1];
  unaff_x20[2] = unaff_x20[2] + (unaff_x21[1] - unaff_x19);
  unaff_x21[1] = unaff_x19;
  lVar3 = lVar3 - (unaff_x19 - lVar2);
  _memcpy(lVar3);
  unaff_x20[1] = lVar3;
  lVar2 = *unaff_x21;
  unaff_x21[1] = lVar2;
  *unaff_x21 = unaff_x20[1];
  unaff_x20[1] = lVar2;
  lVar2 = unaff_x21[1];
  unaff_x21[1] = unaff_x20[2];
  unaff_x20[2] = lVar2;
  lVar2 = unaff_x21[2];
  unaff_x21[2] = unaff_x20[3];
  unaff_x20[3] = lVar2;
  *unaff_x20 = unaff_x20[1];
  return uVar1;
}



/* Entry: 107428ba4; end: 107428bd7;  */

undefined8 * FUN_107428ba4(undefined8 *param_1,long param_2)

{
  *param_1 = &PTR_DAT_1109af1d8;
  FUN_10731e2b0(param_1 + 1,param_2 + 8);
  return param_1;
}



/* Entry: 107428bd8; end: 107428c43;  */

long FUN_107428bd8(long param_1,long param_2)

{
  uint uVar1;
  long lStack_28;
  
  uVar1 = *(uint *)(param_2 + 0x20);
  if (*(int *)(param_1 + 0x20) != -1 || uVar1 != 0xffffffff) {
    if (uVar1 == 0xffffffff) {
      FUN_107425d60(param_1);
    }
    else {
      lStack_28 = param_1;
      (*(code *)(&PTR_FUN_1109af210)[uVar1])(&lStack_28,param_1,param_2);
    }
  }
  return param_1;
}



/* Entry: 107428c44; end: 107428c87;  */

void FUN_107428c44(long *param_1,long param_2,long param_3)

{
  long unaff_x20;
  
  if (*(int *)(*param_1 + 0x20) != 0) {
    func_0x000100171ec4(*param_1,param_3);
    FUN_107425d60();
    func_0x00010742b998();
    FUN_107428cb0();
    *(undefined4 *)(unaff_x20 + 0x20) = 0;
    return;
  }
  func_0x000100171ec4(param_2 + 8,param_3 + 8);
  func_0x000100171efc();
  func_0x000100171f2c();
  return;
}



/* Entry: 107428c88; end: 107428caf;  */

void FUN_107428c88(void)

{
  long unaff_x20;
  
  func_0x000100171ec4();
  FUN_107425d60();
  func_0x00010742b998();
  FUN_107428cb0();
  *(undefined4 *)(unaff_x20 + 0x20) = 0;
  return;
}



/* Entry: 107428cb0; end: 107428cbb;  */

void FUN_107428cb0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_11099ed40;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}



/* Entry: 107428cbc; end: 107428ce7;  */

void FUN_107428cbc(void)

{
  long unaff_x20;
  
  func_0x000100171ec4();
  FUN_107425d60();
  func_0x00010742b998();
  FUN_107428ce8();
  *(undefined4 *)(unaff_x20 + 0x20) = 1;
  return;
}



/* Entry: 107428ce8; end: 107428d13;  */

void FUN_107428ce8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_1109af1d8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}



/* Entry: 107428d14; end: 107428d7b;  */

undefined8 * FUN_107428d14(undefined8 *param_1,long param_2)

{
  *param_1 = &PTR_DAT_11099ed40;
  func_0x000107428d48(param_1 + 1,param_2 + 8);
  return param_1;
}



/* Entry: 107428d7c; end: 107428de7;  */

void FUN_107428d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar1;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x00010742af70();
    func_0x000100b56b04();
    lVar1 = *(long *)(unaff_x19 + 8);
    if (unaff_x21 - unaff_x20 != 0) {
      func_0x00010742b27c();
    }
    *(long *)(unaff_x19 + 8) = lVar1 + (unaff_x21 - unaff_x20);
  }
  uStack_38 = 1;
  func_0x000100b56b6c(&uStack_40);
  return;
}



/* Entry: 107428de8; end: 107428e2b;  */

void FUN_107428de8(long param_1)

{
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    func_0x00010742b084((&PTR_FUN_1109af220)[*(uint *)(param_1 + 0x18)]);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return;
}



/* Entry: 107428e2c; end: 107428e3b;  */

void FUN_107428e2c(void)

{
  return;
}



/* Entry: 107428e3c; end: 107428fbb;  */

long * FUN_107428e3c(long *param_1,ulong param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long extraout_x8;
  long extraout_x9;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long *plStack_58;
  
  plVar6 = param_1 + 2;
  lVar11 = *plVar6;
  puVar10 = (undefined8 *)param_1[1];
  if ((ulong)((lVar11 - (long)puVar10) / 0xc) < param_2) {
    lVar12 = (long)puVar10 - *param_1;
    uVar1 = lVar12 / 0xc + param_2;
    if (0x1555555555555555 < uVar1) {
      FUN_107428fbc();
LAB_107428fb8:
      func_0x000104bd35f4();
      func_0x00010742ae94();
      func_0x00010742b828();
      lVar11 = extraout_x9;
      while (lVar11 != extraout_x8) {
        lVar11 = lVar11 + -0xc;
        param_1[2] = lVar11;
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    uVar3 = (lVar11 - *param_1) / 0xc;
    uVar8 = uVar3 * 2;
    if (uVar8 < uVar1 || uVar8 - uVar1 == 0) {
      uVar8 = uVar1;
    }
    if (0xaaaaaaaaaaaaaa9 < uVar3) {
      uVar8 = 0x1555555555555555;
    }
    plStack_58 = plVar6;
    if (uVar8 == 0) {
      lVar5 = 0;
    }
    else {
      if (0x1555555555555555 < uVar8) goto LAB_107428fb8;
      lVar5 = uVar8 * 0xc;
      __Znwm();
    }
    puVar2 = (undefined8 *)(lVar5 + lVar12);
    puVar4 = puVar2;
    for (lVar12 = param_2 * 0xc; lVar12 != 0; lVar12 = lVar12 + -0xc) {
      uVar7 = *param_3;
      *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_3 + 1);
      *puVar4 = uVar7;
      puVar4 = (undefined8 *)((long)puVar4 + 0xc);
    }
    lVar12 = *param_1;
    lVar9 = (long)puVar2 + (((long)puVar10 - lVar12) / -0xc) * 0xc;
    _memcpy(lVar9,lVar12);
    *param_1 = lVar9;
    param_1[1] = (long)puVar2 + param_2 * 0xc;
    param_1[2] = lVar5 + uVar8 * 0xc;
    param_1 = &lStack_78;
    lStack_78 = lVar12;
    lStack_70 = lVar12;
    lStack_68 = lVar12;
    lStack_60 = lVar11;
    FUN_107428fc8(param_1);
  }
  else {
    puVar2 = puVar10;
    for (lVar11 = param_2 * 0xc; lVar11 != 0; lVar11 = lVar11 + -0xc) {
      uVar7 = *param_3;
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_3 + 1);
      *puVar2 = uVar7;
      puVar2 = (undefined8 *)((long)puVar2 + 0xc);
    }
    param_1[1] = (long)puVar10 + param_2 * 0xc;
  }
  return param_1;
}



/* Entry: 107428fbc; end: 107428fc7;  */

void FUN_107428fbc(void)

{
  long extraout_x8;
  long extraout_x9;
  long lVar1;
  long *unaff_x19;
  
  func_0x00010742ae94();
  func_0x00010742b828();
  lVar1 = extraout_x9;
  while (lVar1 != extraout_x8) {
    lVar1 = lVar1 + -0xc;
    unaff_x19[2] = lVar1;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 107428fc8; end: 107429003;  */

void FUN_107428fc8(void)

{
  long extraout_x8;
  long extraout_x9;
  long lVar1;
  long *unaff_x19;
  
  func_0x00010742b828();
  lVar1 = extraout_x9;
  while (lVar1 != extraout_x8) {
    lVar1 = lVar1 + -0xc;
    unaff_x19[2] = lVar1;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 107429004; end: 107429283;  */

void FUN_107429004(void)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined1 in_CY;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long *unaff_x19;
  uint unaff_w27;
  
  func_0x00010742b848();
  func_0x00010742bb38();
  while (func_0x00010742bacc(), !(bool)in_CY) {
    lVar1 = *unaff_x19;
    lVar2 = unaff_x19[1];
    uVar3 = *(ushort *)(lVar1 + lVar2 * (ulong)(unaff_w27 - 2));
    uVar4 = *(ushort *)(lVar1 + lVar2 * (ulong)(unaff_w27 - 1));
    uVar5 = *(ushort *)(lVar1 + lVar2 * (ulong)unaff_w27);
    func_0x00010742b450();
    func_0x000107428a88();
    func_0x00010742b450();
    func_0x000107428a88();
    func_0x00010742b450();
    func_0x000107428a88();
    func_0x00010742b710();
    func_0x00010742b6fc();
    func_0x00010742b6e8();
    func_0x00010742b984();
    func_0x00010742b674(extraout_x8 + (ulong)uVar3 * 0xc);
    func_0x00010742b984();
    func_0x00010742b674(extraout_x8_00 + (ulong)uVar4 * 0xc);
    func_0x00010742b984();
    func_0x00010742b674(extraout_x8_01 + (ulong)uVar5 * 0xc);
    unaff_w27 = unaff_w27 + 3;
  }
  return;
}



/* Entry: 107429284; end: 1074292d3;  */

void FUN_107429284(float *param_1,float *param_2)

{
  float *pfStack_28;
  float *pfStack_20;
  float **ppfStack_18;
  
  pfStack_28 = param_2;
  pfStack_20 = param_2;
  if (param_1[4] != -NAN) {
    ppfStack_18 = &pfStack_28;
    (*(code *)(&PTR_DAT_1109af248)[(uint)param_1[4]])(&ppfStack_18,param_1);
    return;
  }
  func_0x00010563ab98();
  *param_1 = *param_2 + *param_1;
  param_1[1] = param_2[1] + param_1[1];
  param_1[2] = param_2[2] + param_1[2];
  return;
}



/* Entry: 1074292d4; end: 10742935b;  */

void FUN_1074292d4(float *param_1,float *param_2)

{
  *param_1 = *param_2 + *param_1;
  param_1[1] = param_2[1] + param_1[1];
  param_1[2] = param_2[2] + param_1[2];
  return;
}



/* Entry: 10742935c; end: 10742937f;  */

undefined8 FUN_10742935c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (undefined4)param_1;
  if (*param_3 != 0) {
    func_0x00010742b8a4(param_2);
    return CONCAT44(uVar2,uVar1);
  }
  return 0;
}



/* Entry: 107429380; end: 1074293cf;  */

float FUN_107429380(long *param_1,long *param_2)

{
  uint *puVar1;
  
  if (*param_2 != 0) {
    puVar1 = (uint *)(*param_2 + param_2[1] * (ulong)*(uint *)(*param_1 + 8));
    NEON_ucvtf((uint)(ushort)puVar1[1]);
    return (float)(*puVar1 & 0xffff) * 3.051851e-05;
  }
  return 0.0;
}



/* Entry: 1074293d0; end: 107429427;  */

void FUN_1074293d0(long *param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000100171ec4();
  if (*param_1 != 0) {
    unaff_x20[1] = *param_1;
    __ZdlPv();
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
    unaff_x20[2] = 0;
  }
  func_0x000100171f2c();
  return;
}



/* Entry: 107429428; end: 107429433;  */

void FUN_107429428(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010742ae94();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x000107429470(param_4);
  }
  func_0x00010742bb5c(0x18);
  return;
}



/* Entry: 107429434; end: 10742948f;  */

void FUN_107429434(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x000107429470(param_4);
  }
  func_0x00010742bb5c(0x18);
  return;
}



/* Entry: 107429490; end: 1074294bb;  */

void FUN_107429490(undefined8 param_1,ulong param_2)

{
  long extraout_x8;
  long extraout_x9;
  long lVar1;
  long *unaff_x19;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x18);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010742b828();
  lVar1 = extraout_x9;
  while (lVar1 != extraout_x8) {
    lVar1 = lVar1 + -0x18;
    unaff_x19[2] = lVar1;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1074294bc; end: 1074294f7;  */

void FUN_1074294bc(void)

{
  long extraout_x8;
  long extraout_x9;
  long lVar1;
  long *unaff_x19;
  
  func_0x00010742b828();
  lVar1 = extraout_x9;
  while (lVar1 != extraout_x8) {
    lVar1 = lVar1 + -0x18;
    unaff_x19[2] = lVar1;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1074294f8; end: 10742952f;  */

undefined1  [16]
FUN_1074294f8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             long *param_5)

{
  undefined1 auVar1 [16];
  
  if (*param_5 != 0) {
    func_0x00010742b8a4(param_4);
    auVar1._4_4_ = param_2;
    auVar1._0_4_ = param_1;
    auVar1._8_4_ = param_3;
    auVar1._12_4_ = 0;
    return auVar1;
  }
  return ZEXT816(0);
}



/* Entry: 107429530; end: 1074295e3;  */

undefined1  [16] FUN_107429530(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (ulong)*(uint6 *)(*param_2 + param_2[1] * (ulong)*(uint *)(*param_1 + 8));
  }
  auVar2._8_8_ = 0x100000000;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Entry: 1074295e4; end: 10742962b;  */

long * FUN_1074295e4(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  if ((long *)0xaaaaaaaaaaaaaaa < param_2) {
    FUN_107429428();
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    lVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar3;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0x18;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
    plVar2 = param_2;
  }
  if (0x555555555555554 < uVar1) {
    plVar2 = (long *)0xaaaaaaaaaaaaaaa;
  }
  return plVar2;
}



/* Entry: 10742962c; end: 10742962f;  */

void FUN_10742962c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 107429630; end: 107429653;  */

undefined8 FUN_107429630(undefined8 param_1)

{
  FUN_107429654();
  return param_1;
}



/* Entry: 107429654; end: 10742967f;  */

long FUN_107429654(long param_1,long param_2)

{
  if (param_1 != param_2) {
    func_0x00010742b9c4();
    FUN_107429680();
  }
  return param_1;
}



/* Entry: 107429680; end: 10742968b;  */

void FUN_107429680(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long extraout_x8;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long lVar4;
  
  uVar1 = param_3 - param_2 >> 3;
  uVar2 = uVar1;
  func_0x00010742af70();
  func_0x00010742ba54();
  if ((ulong)(extraout_x8 >> 3) < uVar2) {
    FUN_107429740();
    FUN_10742979c();
    func_0x000107429764();
    unaff_x22 = *(long *)(unaff_x19 + 8);
  }
  else {
    lVar4 = *(long *)(unaff_x19 + 8);
    lVar3 = lVar4 - unaff_x22;
    if ((ulong)(lVar3 >> 3) < uVar1) {
      if (lVar4 != unaff_x22) {
        func_0x00010742b28c();
        lVar4 = *(long *)(unaff_x19 + 8);
      }
      lVar3 = unaff_x21 - (unaff_x20 + lVar3);
      if (lVar3 != 0) {
        func_0x00010742b450();
        _memmove();
      }
      lVar4 = lVar4 + lVar3;
      goto LAB_107429734;
    }
  }
  if (unaff_x21 - unaff_x20 != 0) {
    func_0x00010742b28c();
  }
  lVar4 = unaff_x22 + (unaff_x21 - unaff_x20);
LAB_107429734:
  *(long *)(unaff_x19 + 8) = lVar4;
  return;
}



/* Entry: 10742968c; end: 10742973f;  */

void FUN_10742968c(void)

{
  ulong in_x3;
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long lVar3;
  
  uVar1 = in_x3;
  func_0x00010742af70();
  func_0x00010742ba54();
  if ((ulong)(extraout_x8 >> 3) < uVar1) {
    FUN_107429740();
    FUN_10742979c();
    func_0x000107429764();
    unaff_x22 = *(long *)(unaff_x19 + 8);
  }
  else {
    lVar3 = *(long *)(unaff_x19 + 8);
    lVar2 = lVar3 - unaff_x22;
    if ((ulong)(lVar2 >> 3) < in_x3) {
      if (lVar3 != unaff_x22) {
        func_0x00010742b28c();
        lVar3 = *(long *)(unaff_x19 + 8);
      }
      lVar2 = unaff_x21 - (unaff_x20 + lVar2);
      if (lVar2 != 0) {
        func_0x00010742b450();
        _memmove();
      }
      lVar3 = lVar3 + lVar2;
      goto LAB_107429734;
    }
  }
  if (unaff_x21 - unaff_x20 != 0) {
    func_0x00010742b28c();
  }
  lVar3 = unaff_x22 + (unaff_x21 - unaff_x20);
LAB_107429734:
  *(long *)(unaff_x19 + 8) = lVar3;
  return;
}



/* Entry: 107429740; end: 10742979b;  */

void FUN_107429740(long param_1)

{
  func_0x00010742b67c();
  if (param_1 != 0) {
    func_0x00010742b758();
    func_0x00010742b8fc();
  }
  return;
}



/* Entry: 10742979c; end: 1074297cf;  */

/* WARNING: Possible PIC construction at 0x0001074297c0: Changing call to branch */

undefined1  [16] FUN_10742979c(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 in_CY;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_2 >> 0x3d == 0) {
    func_0x00010742b768();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = uVar1;
    return auVar3;
  }
  func_0x00010742ae94();
  FUN_1074297f0();
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 1074297d0; end: 1074297ef;  */

void FUN_1074297d0(void)

{
  FUN_1074297f0();
  return;
}



/* Entry: 1074297f0; end: 107429807;  */

void FUN_1074297f0(undefined8 param_1,ulong param_2)

{
  long extraout_x8;
  long extraout_x9;
  long lVar1;
  long *unaff_x19;
  
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010742b828();
  lVar1 = extraout_x9;
  while (lVar1 != extraout_x8) {
    lVar1 = lVar1 + -8;
    unaff_x19[2] = lVar1;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 107429808; end: 107429843;  */

void FUN_107429808(void)

{
  long extraout_x8;
  long extraout_x9;
  long lVar1;
  long *unaff_x19;
  
  func_0x00010742b828();
  lVar1 = extraout_x9;
  while (lVar1 != extraout_x8) {
    lVar1 = lVar1 + -8;
    unaff_x19[2] = lVar1;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 107429844; end: 107429847;  */

void FUN_107429844(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 107429848; end: 10742986b;  */

undefined8 FUN_107429848(undefined8 param_1)

{
  FUN_10742986c();
  return param_1;
}



/* Entry: 10742986c; end: 107429897;  */

long FUN_10742986c(long param_1,long param_2)

{
  if (param_1 != param_2) {
    func_0x00010742b9c4();
    FUN_107429898();
  }
  return param_1;
}



/* Entry: 107429898; end: 1074298a3;  */

void FUN_107429898(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long lVar4;
  
  uVar2 = param_3 - param_2 >> 3;
  uVar3 = uVar2;
  func_0x00010742af70();
  func_0x00010742ba54();
  if ((ulong)(extraout_x8 >> 3) < uVar3) {
    FUN_107429950();
    FUN_1074299ac();
    func_0x000107429974();
    unaff_x22 = *(long *)(unaff_x19 + 8);
  }
  else {
    lVar4 = *(long *)(unaff_x19 + 8);
    lVar1 = lVar4 - unaff_x22;
    if ((ulong)(lVar1 >> 3) < uVar2) {
      if (lVar4 != unaff_x22) {
        func_0x00010742b28c();
        lVar4 = *(long *)(unaff_x19 + 8);
      }
      lVar1 = unaff_x21 - (unaff_x20 + lVar1);
      if (lVar1 != 0) {
        func_0x00010742b450();
        _memmove();
      }
      lVar4 = lVar4 + lVar1;
      goto LAB_107429944;
    }
  }
  if (unaff_x21 - unaff_x20 != 0) {
    func_0x00010742b27c();
  }
  lVar4 = unaff_x22 + (unaff_x21 - unaff_x20);
LAB_107429944:
  *(long *)(unaff_x19 + 8) = lVar4;
  return;
}



/* Entry: 1074298a4; end: 10742994f;  */

void FUN_1074298a4(void)

{
  long lVar1;
  ulong in_x3;
  ulong uVar2;
  long extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long lVar3;
  
  uVar2 = in_x3;
  func_0x00010742af70();
  func_0x00010742ba54();
  if ((ulong)(extraout_x8 >> 3) < uVar2) {
    FUN_107429950();
    FUN_1074299ac();
    func_0x000107429974();
    unaff_x22 = *(long *)(unaff_x19 + 8);
  }
  else {
    lVar3 = *(long *)(unaff_x19 + 8);
    lVar1 = lVar3 - unaff_x22;
    if ((ulong)(lVar1 >> 3) < in_x3) {
      if (lVar3 != unaff_x22) {
        func_0x00010742b28c();
        lVar3 = *(long *)(unaff_x19 + 8);
      }
      lVar1 = unaff_x21 - (unaff_x20 + lVar1);
      if (lVar1 != 0) {
        func_0x00010742b450();
        _memmove();
      }
      lVar3 = lVar3 + lVar1;
      goto LAB_107429944;
    }
  }
  if (unaff_x21 - unaff_x20 != 0) {
    func_0x00010742b27c();
  }
  lVar3 = unaff_x22 + (unaff_x21 - unaff_x20);
LAB_107429944:
  *(long *)(unaff_x19 + 8) = lVar3;
  return;
}



/* Entry: 107429950; end: 1074299ab;  */

void FUN_107429950(long param_1)

{
  func_0x00010742b67c();
  if (param_1 != 0) {
    func_0x00010742b758();
    func_0x00010742b8fc();
  }
  return;
}



/* Entry: 1074299ac; end: 1074299df;  */

/* WARNING: Possible PIC construction at 0x0001074299d0: Changing call to branch */

undefined1  [16] FUN_1074299ac(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 in_CY;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_2 >> 0x3d == 0) {
    func_0x00010742b768();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = uVar1;
    return auVar3;
  }
  func_0x00010742ae94();
  FUN_107429a00();
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 1074299e0; end: 1074299ff;  */

void FUN_1074299e0(void)

{
  FUN_107429a00();
  return;
}



/* Entry: 107429a00; end: 107429a17;  */

void FUN_107429a00(undefined8 param_1,ulong param_2)

{
  long extraout_x8;
  long extraout_x9;
  long lVar1;
  long *unaff_x19;
  
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010742b828();
  lVar1 = extraout_x9;
  while (lVar1 != extraout_x8) {
    lVar1 = lVar1 + -8;
    unaff_x19[2] = lVar1;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 107429a18; end: 107429a53;  */

void FUN_107429a18(void)

{
  long extraout_x8;
  long extraout_x9;
  long lVar1;
  long *unaff_x19;
  
  func_0x00010742b828();
  lVar1 = extraout_x9;
  while (lVar1 != extraout_x8) {
    lVar1 = lVar1 + -8;
    unaff_x19[2] = lVar1;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 107429a54; end: 107429b4f;  */

void FUN_107429a54(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*param_3 == 0) {
    uVar3 = 0x3f80000000000000;
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined8 *)(*param_3 + param_3[1] * (ulong)*(uint *)*param_2);
    uVar3 = puVar1[1];
    uVar2 = *puVar1;
  }
  param_1[1] = uVar3;
  *param_1 = uVar2;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}



/* Entry: 107429b50; end: 107429b7b;  */

long FUN_107429b50(long param_1,long param_2)

{
  if (param_1 != param_2) {
    func_0x00010742b9c4();
    FUN_107429b7c();
  }
  return param_1;
}



/* Entry: 107429b7c; end: 107429b8b;  */

void FUN_107429b7c(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long lVar4;
  
  uVar1 = (param_3 - param_2) / 0x18;
  uVar3 = uVar1;
  func_0x00010742af70();
  func_0x00010742ba54();
  if ((ulong)(extraout_x8 / 0x18) < uVar3) {
    FUN_107429c48();
    FUN_1074295e4();
    func_0x000107429c6c();
    unaff_x22 = *(long *)(unaff_x19 + 8);
  }
  else {
    lVar4 = *(long *)(unaff_x19 + 8);
    lVar2 = lVar4 - unaff_x22;
    if ((ulong)(lVar2 / 0x18) < uVar1) {
      if (lVar4 != unaff_x22) {
        func_0x00010742b28c();
        lVar4 = *(long *)(unaff_x19 + 8);
      }
      lVar2 = unaff_x21 - (unaff_x20 + lVar2);
      if (lVar2 != 0) {
        func_0x00010742b450();
        _memmove();
      }
      lVar4 = lVar4 + lVar2;
      goto LAB_107429c3c;
    }
  }
  if (unaff_x21 - unaff_x20 != 0) {
    func_0x00010742b27c();
  }
  lVar4 = unaff_x22 + (unaff_x21 - unaff_x20);
LAB_107429c3c:
  *(long *)(unaff_x19 + 8) = lVar4;
  return;
}



/* Entry: 107429b8c; end: 107429c47;  */

void FUN_107429b8c(void)

{
  long lVar1;
  ulong in_x3;
  ulong uVar2;
  long extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long lVar3;
  
  uVar2 = in_x3;
  func_0x00010742af70();
  func_0x00010742ba54();
  if ((ulong)(extraout_x8 / 0x18) < uVar2) {
    FUN_107429c48();
    FUN_1074295e4();
    func_0x000107429c6c();
    unaff_x22 = *(long *)(unaff_x19 + 8);
  }
  else {
    lVar3 = *(long *)(unaff_x19 + 8);
    lVar1 = lVar3 - unaff_x22;
    if ((ulong)(lVar1 / 0x18) < in_x3) {
      if (lVar3 != unaff_x22) {
        func_0x00010742b28c();
        lVar3 = *(long *)(unaff_x19 + 8);
      }
      lVar1 = unaff_x21 - (unaff_x20 + lVar1);
      if (lVar1 != 0) {
        func_0x00010742b450();
        _memmove();
      }
      lVar3 = lVar3 + lVar1;
      goto LAB_107429c3c;
    }
  }
  if (unaff_x21 - unaff_x20 != 0) {
    func_0x00010742b27c();
  }
  lVar3 = unaff_x22 + (unaff_x21 - unaff_x20);
LAB_107429c3c:
  *(long *)(unaff_x19 + 8) = lVar3;
  return;
}



/* Entry: 107429c48; end: 107429cb3;  */

void FUN_107429c48(long param_1)

{
  func_0x00010742b67c();
  if (param_1 != 0) {
    func_0x00010742b758();
    func_0x00010742b8fc();
  }
  return;
}



/* Entry: 107429cb4; end: 107429cfb;  */

void FUN_107429cb4(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_107425cf0();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 107429cfc; end: 107429db7;  */

void FUN_107429cfc(undefined1 *param_1)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x00010742b258();
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  FUN_107425d60();
  uVar1 = *(uint *)(unaff_x20 + 0x20);
  if (uVar1 != 0xffffffff) {
    func_0x00010742b650((&PTR_FUN_1109af2c0)[uVar1]);
    *(uint *)(unaff_x19 + 0x20) = uVar1;
  }
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x28) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined1 *)(unaff_x19 + 0x40) = 0;
  *(undefined1 *)(unaff_x19 + 0x58) = 0;
  if (*(char *)(unaff_x20 + 0x58) == '\x01') {
    FUN_10742962c((undefined1 *)(unaff_x19 + 0x40),unaff_x20 + 0x40);
  }
  *(undefined1 *)(unaff_x19 + 0x60) = 0;
  *(undefined1 *)(unaff_x19 + 0x78) = 0;
  if (*(char *)(unaff_x20 + 0x78) == '\x01') {
    FUN_107429844((undefined1 *)(unaff_x19 + 0x60),unaff_x20 + 0x60);
  }
  return;
}



/* Entry: 107429db8; end: 107429dc7;  */

void FUN_107429db8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  param_1 = (undefined8 *)*param_1;
  *param_1 = &PTR_DAT_11099ed40;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}



/* Entry: 107429dc8; end: 107429e23;  */

void FUN_107429dc8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010742ba90();
  uVar2 = param_3[1];
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x28) = param_3[2];
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  FUN_107429e24();
  func_0x00010742b6ac();
  func_0x000107429e44(unaff_x19 + 0x18);
  func_0x00010742b8b4();
  return;
}



/* Entry: 107429e24; end: 107429e63;  */

double FUN_107429e24(double *param_1,double *param_2)

{
  return *param_1 + *param_2;
}



/* Entry: 107429e64; end: 107429f77;  */

void FUN_107429e64(undefined1 *param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010742b258();
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
  FUN_107425db4();
  uVar1 = *(uint *)(unaff_x20 + 0xc0);
  if (uVar1 != 0xffffffff) {
    func_0x00010742b650((&PTR_FUN_1109af2d0)[uVar1]);
    *(uint *)(unaff_x19 + 0xc0) = uVar1;
  }
  *(undefined1 *)(unaff_x19 + 200) = 0;
  *(undefined1 *)(unaff_x19 + 0x148) = 0;
  if (*(char *)(unaff_x20 + 0x148) == '\x01') {
    FUN_107429cfc((undefined1 *)(unaff_x19 + 200),unaff_x20 + 200);
    *(undefined1 *)(unaff_x19 + 0x148) = 1;
  }
  *(undefined4 *)(unaff_x19 + 0x150) = *(undefined4 *)(unaff_x20 + 0x150);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x158);
  *(undefined8 *)(unaff_x20 + 0x158) = 0;
  *(undefined8 *)(unaff_x19 + 0x158) = uVar3;
  *(undefined4 *)(unaff_x19 + 0x160) = *(undefined4 *)(unaff_x20 + 0x160);
  lVar4 = *(long *)(unaff_x20 + 0x168);
  *(undefined8 *)(unaff_x20 + 0x168) = 0;
  *(long *)(unaff_x19 + 0x168) = lVar4;
  lVar6 = *(long *)(unaff_x20 + 0x178);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x170);
  *(undefined8 *)(unaff_x19 + 0x178) = *(undefined8 *)(unaff_x20 + 0x178);
  *(undefined8 *)(unaff_x19 + 0x170) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x170) = 0;
  lVar5 = *(long *)(unaff_x20 + 0x180);
  *(long *)(unaff_x19 + 0x180) = lVar5;
  *(undefined4 *)(unaff_x19 + 0x188) = *(undefined4 *)(unaff_x20 + 0x188);
  if (lVar5 != 0) {
    uVar7 = *(ulong *)(lVar6 + 8);
    uVar8 = *(ulong *)(unaff_x19 + 0x170);
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar7 = uVar8 - 1 & uVar7;
    }
    else if (uVar8 <= uVar7) {
      uVar2 = 0;
      if (uVar8 != 0) {
        uVar2 = uVar7 / uVar8;
      }
      uVar7 = uVar7 - uVar2 * uVar8;
    }
    *(long *)(lVar4 + uVar7 * 8) = unaff_x19 + 0x178;
    *(undefined8 *)(unaff_x20 + 0x178) = 0;
    *(undefined8 *)(unaff_x20 + 0x180) = 0;
  }
  func_0x00010742b72c(unaff_x19 + 400,unaff_x20 + 400);
  return;
}



/* Entry: 107429f78; end: 107429f87;  */

void FUN_107429f78(undefined8 *param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  
  puVar2 = (undefined1 *)*param_1;
  func_0x00010742b258();
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 0x20) = 0xffffffff;
  FUN_107425d60();
  uVar1 = *(uint *)(unaff_x20 + 0x20);
  if (uVar1 != 0xffffffff) {
    func_0x00010742b650((&PTR_FUN_1109af2c0)[uVar1]);
    *(uint *)(unaff_x19 + 0x20) = uVar1;
  }
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x28) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined1 *)(unaff_x19 + 0x40) = 0;
  *(undefined1 *)(unaff_x19 + 0x58) = 0;
  if (*(char *)(unaff_x20 + 0x58) == '\x01') {
    FUN_10742962c((undefined1 *)(unaff_x19 + 0x40),unaff_x20 + 0x40);
  }
  *(undefined1 *)(unaff_x19 + 0x60) = 0;
  *(undefined1 *)(unaff_x19 + 0x78) = 0;
  if (*(char *)(unaff_x20 + 0x78) == '\x01') {
    FUN_107429844((undefined1 *)(unaff_x19 + 0x60),unaff_x20 + 0x60);
  }
  return;
}



/* Entry: 107429f88; end: 10742a003;  */

void FUN_107429f88(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000100171ec4();
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  uVar1 = param_2[2];
  param_2[2] = 0;
  param_1[2] = uVar1;
  uVar2 = param_2[4];
  uVar1 = param_2[3];
  uVar4 = param_2[6];
  uVar3 = param_2[5];
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  param_1[6] = uVar4;
  param_1[5] = uVar3;
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  uVar1 = param_2[8];
  param_2[8] = 0;
  param_1[8] = uVar1;
  FUN_10742a004(param_1 + 9,param_2 + 9);
  FUN_10742a004(unaff_x20 + 0x80,unaff_x19 + 0x80);
  *(undefined8 *)(unaff_x20 + 0xb8) = *(undefined8 *)(unaff_x19 + 0xb8);
  return;
}



/* Entry: 10742a004; end: 10742a03f;  */

void FUN_10742a004(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  if (*(char *)(param_2 + 6) == '\x01') {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    uVar4 = param_2[3];
    uVar3 = param_2[2];
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    param_1[3] = uVar4;
    param_1[2] = uVar3;
    uVar1 = param_2[5];
    param_2[5] = 0;
    param_1[5] = uVar1;
    *(undefined1 *)(param_1 + 6) = 1;
  }
  return;
}



/* Entry: 10742a040; end: 10742a04b;  */

void FUN_10742a040(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  func_0x00010742ae94();
  func_0x00010742ba90();
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  uVar1 = param_2[3];
  *(undefined8 *)(param_1 + 0x20) = param_2[4];
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = param_2[5];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  func_0x00010742b72c(param_1 + 0x30,param_2 + 6);
  return;
}



/* Entry: 10742a04c; end: 10742a09b;  */

void FUN_10742a04c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  func_0x00010742ba90();
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  uVar1 = param_2[3];
  *(undefined8 *)(param_1 + 0x20) = param_2[4];
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = param_2[5];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  func_0x00010742b72c(param_1 + 0x30,param_2 + 6);
  return;
}



/* Entry: 10742a09c; end: 10742a0b3;  */

void FUN_10742a09c(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  
  func_0x00010742ae94();
  func_0x00010742ae94();
  func_0x00010742b1d0();
  func_0x00010742b688();
  for (; unaff_x22 != unaff_x23; unaff_x22 = unaff_x22 + 0x38) {
    FUN_10742a15c();
  }
  for (; unaff_x21 != unaff_x23; unaff_x21 = unaff_x21 + 0x38) {
    func_0x000107425a2c(unaff_x21);
  }
  *(undefined8 *)(unaff_x19 + 8) = unaff_x24;
  uVar1 = *unaff_x20;
  *unaff_x20 = unaff_x24;
  unaff_x20[1] = uVar1;
  func_0x00010742ad40();
  return;
}



/* Entry: 10742a0b4; end: 10742a117;  */

void FUN_10742a0b4(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  
  func_0x00010742b1d0();
  func_0x00010742b688();
  for (; unaff_x22 != unaff_x23; unaff_x22 = unaff_x22 + 0x38) {
    FUN_10742a15c();
  }
  for (; unaff_x21 != unaff_x23; unaff_x21 = unaff_x21 + 0x38) {
    func_0x000107425a2c(unaff_x21);
  }
  *(undefined8 *)(unaff_x19 + 8) = unaff_x24;
  uVar1 = *unaff_x20;
  *unaff_x20 = unaff_x24;
  unaff_x20[1] = uVar1;
  func_0x00010742ad40();
  return;
}


